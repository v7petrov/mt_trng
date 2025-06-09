// Fixed: Added logic type to output for consistency
`timescale 1ns/1ps
module WGT2_5(input [4:0] address, output logic wgt2_5o);
   reg [31:0] LUT = 32'b00000100000111111101110010011101;
   assign wgt2_5o = LUT[address];
endmodule