module NLFSR3 (
  input  logic        clk,
  input  logic        rst,
  input  logic        load,
  input  logic        init,
  input  logic        nlfsr3_ce,
  input  logic [4:0]  d3,
  input  logic [4:0]  tk,
  output logic        o_warbler
);

  // State registers
  logic [4:0] C5, C4, C3, C2, C1, C0;

  // WGT2_5: 5→1 bit lookup
  logic        wgt2_5o;
  WGT2_5 WGT2_5_inst (
    .address(C5),
    .wgt2_5o(wgt2_5o)
  );

  // Pad WGT2_5 output into a 5-bit vector {0,0,0,0,wgt2_5o}
  logic [4:0] pad_wgt2 = {4'b0000, wgt2_5o};

  // Gamma multiplier: 5×5 matrix × 5×1 vector → 5×1 vector
  logic [4:0] gamma_out;
  gamma_mult gamma_mult_inst (
    .x(pad_wgt2),
    .y(gamma_out)
  );

  // First XOR‐node (bottom‐left in your drawing): tk ⊕ pad_wgt2
  logic [4:0] sumL = tk ^ pad_wgt2;

  // Second XOR‐node (mid‐right): C1 ⊕ gamma_out
  logic [4:0] sumR = C1 ^ gamma_out;

  // Third XOR‐node (top‐centre): sumL ⊕ sumR → feedback
  logic [4:0] feedback = sumL ^ sumR;

  // Select between computed feedback and external d3 when load=1
  logic [4:0] next_C5;
  bigmux2to1 bigmux2to1_inst (
    .sel(load),
    .a(feedback),
    .b(d3),
    .y(next_C5)
  );

  // WGT1_5: 5→1 bit lookup from C1, drives o_warbler
  WGT1_5 WGT1_5_inst (
    .address(C1),
    .wgt1_5o(o_warbler)
  );

  // Shift / load / init logic
  always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
      C5 <= 5'b0;
      C4 <= 5'b0;
      C3 <= 5'b0;
      C2 <= 5'b0;
      C1 <= 5'b0;
      C0 <= 5'b0;
    end
    else if (nlfsr3_ce) begin
      // On init we override and inject the tk word into C5
      C5 <= init ? tk : next_C5;
      // shift everything down
      C4 <= C5;
      C3 <= C4;
      C2 <= C3;
      C1 <= C2;
      C0 <= C1;
    end
  end

endmodule
