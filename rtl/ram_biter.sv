`timescale 1ns/1ps
module ram_biter (
    input wire clk_i,
    input wire rst_i,
    
    input wire pA_wb_cyc_i,
    input wire pA_wb_stb_i,
    input wire [3:0] pA_wb_we_i,
    input wire [8:0] pA_wb_addr_i,
    input wire [31:0] pA_wb_data_i,
    output reg pA_wb_ack_o,
    output wire pA_wb_stall_o,
    output reg [31:0] pA_wb_data_o,
    
    input wire pB_wb_cyc_i,
    input wire pB_wb_stb_i,
    input wire [3:0] pB_wb_we_i,
    input wire [8:0] pB_wb_addr_i,
    input wire [31:0] pB_wb_data_i,
    output reg pB_wb_ack_o,
    output wire pB_wb_stall_o,
    output reg [31:0] pB_wb_data_o
);

    // Split the addressing so it reads better
    wire pA_req_ram, pB_req_ram, req_same;
    assign pA_req_ram = pA_wb_addr_i[8];
    assign pB_req_ram = pB_wb_addr_i[8];
    assign req_same = !(pA_req_ram ^ pB_req_ram);

    wire [7:0] pA_addy, pB_addy;
    assign pA_addy = pA_wb_addr_i[7:0];
    assign pB_addy = pB_wb_addr_i[7:0];

    // Valid request signals
    wire pA_valid_req = pA_wb_cyc_i & pA_wb_stb_i;
    wire pB_valid_req = pB_wb_cyc_i & pB_wb_stb_i;

    // Stall logic and arbitration
    reg port_choice;
    wire pA_stall, pB_stall;
    
    // Only stall when both ports are active and requesting same RAM
    assign pA_stall = req_same & pA_valid_req & pB_valid_req & port_choice;
    assign pB_stall = req_same & pA_valid_req & pB_valid_req & !port_choice;
    
    // Export stall signals SHHHHHHHHHHHHH
    assign pB_wb_stall_o = pA_stall;
    assign pA_wb_stall_o = pB_stall;
    
    // Toggle port choice for fair arbitration
    always @(posedge clk_i) begin
        if (rst_i) begin
            port_choice <= 1'b0;
        end
        else if (req_same && pA_valid_req && pB_valid_req) begin
            port_choice <= ~port_choice;
        end
    end

    // Determine which port gets access to each RAM
    wire pA_access_ram1, pA_access_ram2, pB_access_ram1, pB_access_ram2;
    
    assign pA_access_ram1 = pA_valid_req && !pA_stall && !pA_req_ram;
    assign pA_access_ram2 = pA_valid_req && !pA_stall && pA_req_ram;
    assign pB_access_ram1 = pB_valid_req && !pB_stall && !pB_req_ram;
    assign pB_access_ram2 = pB_valid_req && !pB_stall && pB_req_ram;

    // RAM1 control signals
    wire [3:0] ram1_we;
    wire [7:0] ram1_addy;
    wire [31:0] ram1_din;
    
    assign ram1_we = pA_access_ram1 ? pA_wb_we_i : 
                     pB_access_ram1 ? pB_wb_we_i : 4'b0000;
    assign ram1_addy = pA_access_ram1 ? pA_addy : 
                       pB_access_ram1 ? pB_addy : 8'h00;
    assign ram1_din = pA_access_ram1 ? pA_wb_data_i : 
                      pB_access_ram1 ? pB_wb_data_i : 32'h00000000;

    // RAM2 control signals  
    wire [3:0] ram2_we;
    wire [7:0] ram2_addy;
    wire [31:0] ram2_din;
    
    assign ram2_we = pA_access_ram2 ? pA_wb_we_i : 
                     pB_access_ram2 ? pB_wb_we_i : 4'b0000;
    assign ram2_addy = pA_access_ram2 ? pA_addy : 
                       pB_access_ram2 ? pB_addy : 8'h00;
    assign ram2_din = pA_access_ram2 ? pA_wb_data_i : 
                      pB_access_ram2 ? pB_wb_data_i : 32'h00000000;

    // RAM instances
    wire [31:0] ram1_dout, ram2_dout;
    
    DFFRAM256x32 ram1 (
        .CLK(clk_i),
        .WE0(ram1_we),
        .EN0(1'b1),         
        .Di0(ram1_din),
        .Do0(ram1_dout),
        .A0(ram1_addy)
    );

    DFFRAM256x32 ram2 (
        .CLK(clk_i),
        .WE0(ram2_we),
        .EN0(1'b1),         
        .Di0(ram2_din),
        .Do0(ram2_dout),
        .A0(ram2_addy)
    );

    // Pipeline registers to track which port accessed which RAM
    reg pA_accessed_ram1_reg, pA_accessed_ram2_reg;
    reg pB_accessed_ram1_reg, pB_accessed_ram2_reg;
    
    always @(posedge clk_i) begin
        if (rst_i) begin
            pA_accessed_ram1_reg <= 1'b0;
            pA_accessed_ram2_reg <= 1'b0;
            pB_accessed_ram1_reg <= 1'b0;
            pB_accessed_ram2_reg <= 1'b0;
        end
        else begin
            pA_accessed_ram1_reg <= pA_access_ram1;
            pA_accessed_ram2_reg <= pA_access_ram2;
            pB_accessed_ram1_reg <= pB_access_ram1;
            pB_accessed_ram2_reg <= pB_access_ram2;
        end
    end

    // Output data routing based on which RAM was accessed
    always @(*) begin
        // Default values
        pA_wb_data_o = 32'h00000000;
        pB_wb_data_o = 32'h00000000;
        
        // Port A output - route data from the RAM that was accessed
        if (pA_accessed_ram1_reg)
            pA_wb_data_o = ram1_dout;
        else if (pA_accessed_ram2_reg)
            pA_wb_data_o = ram2_dout;
        
        // Port B output - route data from the RAM that was accessed  
        if (pB_accessed_ram1_reg)
            pB_wb_data_o = ram1_dout;
        else if (pB_accessed_ram2_reg)
            pB_wb_data_o = ram2_dout;
    end

    always @(*) begin
        pA_wb_ack_o = pA_accessed_ram1_reg || pA_accessed_ram2_reg;
        pB_wb_ack_o = pB_accessed_ram1_reg || pB_accessed_ram2_reg;
    end

    // // Acknowledgment logic - acknowledge valid requests that complete
    // always @(posedge clk_i) begin
    //     if (rst_i) begin
    //         pA_wb_ack_o <= 1'b0;
    //         pB_wb_ack_o <= 1'b0;
    //     end
    //     else begin
    //         // ACK the registered access signals (delayed by 1 cycle for RAM read timing)
    //         pA_wb_ack_o <= pA_accessed_ram1_reg || pA_accessed_ram2_reg;
    //         pB_wb_ack_o <= pB_accessed_ram1_reg || pB_accessed_ram2_reg;
    //     end
    // end
    
endmodule