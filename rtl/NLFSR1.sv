`timescale 1ns/1ps
module NLFSR1 (
    input  logic        clk,
    input  logic        rst,
    input  logic        warbler_o,
    input  logic        nlfsr3_ce,
    input  logic        d1,
    input  logic        init,
    input  logic        load,
    output logic        a0
);
    logic [16:0] a;
    logic mux0_in, mux1_in;  // Fixed: Changed from wire to logic
    logic mux0_o, mux1_o, mux2_o;  // Fixed: Changed from wire to logic
    logic wgt1_5o;  // Fixed: Changed from wire to logic

    mux2to1 mux0 (.sel(nlfsr3_ce), .a(1'b0), .b(mux0_in), .y(mux0_o));  // Fixed: Added port names
    mux2to1 mux1 (.sel(init), .a(mux1_in), .b(mux0_o), .y(mux1_o));     // Fixed: Added port names
    mux2to1 mux2 (.sel(load), .a(mux1_o), .b(d1), .y(mux2_o));          // Fixed: Added port names
    WGT1_5 wlut (.address({a[15], a[10], a[8], a[7], a[4]}), .wgt1_5o(wgt1_5o));  // Fixed: Added port names

    assign mux0_in = mux1_in ^ warbler_o;
    assign mux1_in = a[0] ^ wgt1_5o;
    assign a0      = a[0];

    always_ff @(posedge clk or posedge rst) begin
        if (rst)
            a <= 17'b0;  // Fixed: Simplified reset value
        else
            a <= {mux2_o, a[16:1]};
    end
endmodule