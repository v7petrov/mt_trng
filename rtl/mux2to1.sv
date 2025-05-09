module mux2to1 (
  input logic sel,
  input logic a,
  input logic b,
  output logic y
);
  assign y = sel ? b : a;
endmodule

module bigmux2to1 (
  input logic sel,
  input logic [4:0] a,
  input logic [4:0] b,
  output logic [4:0] y
);
  assign y = sel ? b : a;
endmodule