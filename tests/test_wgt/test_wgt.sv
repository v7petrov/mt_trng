`timescale 1ns/1ps
module test_wgt;
  // Common signals
  logic clk, rst;
  
  // Localparam for clock period
  localparam CLK_PERIOD = 10;
  
  // Clock generation
  always begin
    #(CLK_PERIOD/2) clk <= ~clk;
  end
  
  // Waveform generation
  initial begin
    $dumpfile("test_wgt.vcd");
    $dumpvars(0, test_wgt);
  end
  
  // =========== Gamma Multiplier Test ===========
  logic [4:0] gamma_in, gamma_out, gamma_expected;
  
  gamma_mult gamma_mult_inst (
    .x(gamma_in),
    .y(gamma_out)
  );
  
  task automatic test_gamma_mult(input [4:0] x, input [4:0] expected);
    begin
      gamma_in = x;
      gamma_expected = expected;
      #1; // Small delay for combinational logic
      
      assert(gamma_out == expected) else 
        $error("Gamma_mult test failed: input=%b, got=%b, expected=%b", x, gamma_out, expected);
    end
  endtask
  
  // =========== WGT1_5 Test ===========
  logic [4:0] wgt1_address;
  logic wgt1_output;
  
  WGT1_5 wgt1_inst (
    .address(wgt1_address),
    .wgt1_5o(wgt1_output)
  );
  
  task automatic test_wgt1_5(input [4:0] addr, input expected);
    begin
      wgt1_address = addr;
      #1; // Small delay for combinational logic
      
      assert(wgt1_output == expected) else
        $error("WGT1_5 test failed: address=%b, output=%b, expected=%b", addr, wgt1_output, expected);
    end
  endtask
  
  // =========== WGT2_5 Test ===========
  logic [4:0] wgt2_address;
  logic wgt2_output;
  
  WGT2_5 wgt2_inst (
    .address(wgt2_address),
    .wgt2_5o(wgt2_output)
  );
  
  task automatic test_wgt2_5(input [4:0] addr, input expected);
    begin
      wgt2_address = addr;
      #1; // Small delay for combinational logic
      
      assert(wgt2_output == expected) else
        $error("WGT2_5 test failed: address=%b, output=%b, expected=%b", addr, wgt2_output, expected);
    end
  endtask
  
  // Main test sequence
  initial begin
    // Initialize signals
    clk = 0;
    rst = 1;
    
    // Release reset
    #(CLK_PERIOD * 2);
    rst = 0;
    #CLK_PERIOD;
    
    // Test gamma_mult
    $display("Testing gamma_mult module...");
    test_gamma_mult(5'b00001, 5'b01100); // Test with input 1
    test_gamma_mult(5'b00010, 5'b11000); // Test with input 2
    test_gamma_mult(5'b10101, 5'b10000); // Test with input 21
    
    // Test WGT1_5
    $display("Testing WGT1_5 module...");
    // Test specific addresses and expected outputs based on LUT value
    test_wgt1_5(5'b00000, 1'b1); // LSB of LUT is at address 0
    test_wgt1_5(5'b00001, 1'b0);
    test_wgt1_5(5'b00010, 1'b1);
    
    // Test WGT2_5
    $display("Testing WGT2_5 module...");
    // Test specific addresses and expected outputs based on LUT value
    test_wgt2_5(5'b00000, 1'b1); // LSB of LUT is at address 0
    test_wgt2_5(5'b00001, 1'b0);
    test_wgt2_5(5'b00010, 1'b1);
    
    // Finish simulation
    #(CLK_PERIOD * 10);
    $display("All WGT tests completed!");
    $finish();
  end

endmodule