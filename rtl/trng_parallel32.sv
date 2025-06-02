module trng_parallel32 (
    input  logic        clk,
    input  logic        rst,
    input  logic [31:0] d1,
    input  logic [31:0] d2,
    input  logic [4:0]  d3,           // shared input to all
    output logic        word_valid,   // high when all bits are valid
    output logic [31:0] rand_word     // full 32-bit random word
);

  logic [31:0] o_valid_bus;
  logic [31:0] o_warbler_bus;

  // Generate 32 TRNG instances
  genvar i;
  generate
    for (i = 0; i < 32; i++) begin : trng_array
      trng trng_inst (
        .clk(clk),
        .rst(rst),
        .d1(d1[i]),
        .d2(d2[i]),
        .d3(d3 ^ i),
        .o_valid(o_valid_bus[i]),
        .o_warbler(o_warbler_bus[i])
      );
    end
  endgenerate

  // Word is valid when all TRNGs have valid output
  assign word_valid = &o_valid_bus;
  assign rand_word  = o_warbler_bus;

endmodule
