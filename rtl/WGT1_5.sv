// Fixed: Added logic type to output for consistency
`timescale 1ns/1ps
module WGT1_5(input [4:0] address, output logic wgt1_5o);
   reg [31:0] LUT = 32'b00100111011110001010001101100101;
   assign wgt1_5o = LUT[address];
endmodule
