`timescale 1ns/1ps
module bigmux2to1 (
  input logic sel,
  input logic [4:0] a,
  input logic [4:0] b,
  output logic [4:0] y
);
  assign y = sel ? b : a;
endmodule