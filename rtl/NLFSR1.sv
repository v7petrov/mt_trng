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
    wire mux0_in, mux1_in;
    wire mux0_o, mux1_o, mux2_o;
    wire wgt1_5o;

    mux2to1 mux0 (nlfsr3_ce, 1'b0, mux0_in, mux0_o);
    mux2to1 mux1 (init,   mux1_in, mux0_o,  mux1_o);
    mux2to1 mux2 (load,   mux1_o,  d1,      mux2_o);
    WGT1_5 wlut    ({a[15], a[10], a[8], a[7], a[4]}, wgt1_5o);

    assign mux0_in = mux1_in ^ warbler_o;
    assign mux1_in = a[0] ^ wgt1_5o;
    assign a0      = a[0];

    // Shift-register logic
    always_ff @(posedge clk or posedge rst) begin
        if (rst)
            a <= '0;
        else
            a <= {mux2_o, a[16:1]};
    end
endmodule

