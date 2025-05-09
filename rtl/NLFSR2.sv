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
    wire mux0_in, mux1_in;
    wire mux0_o, mux1_o, mux2_o;
    wire wgt1_5o;

    mux2to1 mux0 (nlfsr3_ce, 1'b0, mux0_in, mux0_o);
    mux2to1 mux1 (init,   mux1_in, mux0_o,  mux1_o);
    mux2to1 mux2 (load,   mux1_o,  d2,      mux2_o);
    WGT1_5 wlut    ({b[12], b[9], b[8], b[7], b[4]}, wgt1_5o);

    assign mux0_in = mux1_in ^ warbler_o;
    assign mux1_in = b[0] ^ wgt1_5o;
    assign b0      = b[0];

    // Shift-register logic
    always_ff @(posedge clk or posedge rst) begin
        if (rst)
            b <= '0;
        else
            b <= {mux2_o, b[15:1]};
    end
endmodule