module trng (
    input  logic        clk,
    input  logic        rst,
    input  logic        d1,
    input  logic        d2,
    input  logic [4:0]  d3,
    output logic        o_valid,
    output logic        o_warbler
);
    logic load_en, init_en, run_en, nlfsr3_ce;
    logic a0, b0;
    logic [4:0] s;
    logic warbler_bit; // Internal 1-bit signal for the output

    // FSM
    fsm f0 (.clk(clk), .rst(rst), .load_en(load_en), .init_en(init_en), .run_en(run_en), .nlfsr3_ce(nlfsr3_ce));
    
    // NLFSRs and shift register
    NLFSR1 n1 (.clk(clk), .rst(rst), .warbler_o(warbler_bit), .nlfsr3_ce(nlfsr3_ce), .d1(d1), .init(init_en), .load(load_en), .a0(a0));
    NLFSR2 n2 (.clk(clk), .rst(rst), .warbler_o(warbler_bit), .nlfsr3_ce(nlfsr3_ce), .d2(d2), .init(init_en), .load(load_en), .b0(b0));
    shift5 sh (.clk(clk), .rst(rst), .in_bit(a0 ^ b0), .s(s));
    NLFSR3 n3 (.clk(clk), .rst(rst), .load(load_en), .init(init_en), .nlfsr3_ce(nlfsr3_ce), .d3(d3), .tk(s), .o_warbler(warbler_bit));

    // Connect the internal warbler bit to the output
    assign o_warbler = warbler_bit;
    
    // valid output = NLFSR3 chip-enable
    assign o_valid = nlfsr3_ce;
endmodule