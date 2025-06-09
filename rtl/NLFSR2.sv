`timescale 1ns/1ps
module NLFSR2 (
    input  logic        clk,
    input  logic        rst,
    input  logic        warbler_o,
    input  logic        nlfsr3_ce,
    input  logic        d2,
    input  logic        init,
    input  logic        load,
    output logic        b0
);
    logic [15:0] b;
    logic mux0_in, mux1_in;  // Fixed: Changed from wire to logic
    logic mux0_o, mux1_o, mux2_o;  // Fixed: Changed from wire to logic
    logic wgt1_5o;  // Fixed: Changed from wire to logic

    mux2to1 mux0 (.sel(nlfsr3_ce), .a(1'b0), .b(mux0_in), .y(mux0_o));  // Fixed: Added port names
    mux2to1 mux1 (.sel(init), .a(mux1_in), .b(mux0_o), .y(mux1_o));     // Fixed: Added port names
    mux2to1 mux2 (.sel(load), .a(mux1_o), .b(d2), .y(mux2_o));          // Fixed: Added port names
    WGT1_5 wlut (.address({b[12], b[9], b[8], b[7], b[4]}), .wgt1_5o(wgt1_5o));  // Fixed: Added port names

    assign mux0_in = mux1_in ^ warbler_o;
    assign mux1_in = b[0] ^ wgt1_5o;
    assign b0      = b[0];

    always_ff @(posedge clk or posedge rst) begin
        if (rst)
            b <= 16'b0;  // Fixed: Corrected width and simplified reset value
        else
            b <= {mux2_o, b[15:1]};
    end
endmodule