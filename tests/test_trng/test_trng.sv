`timescale 1ns/1ps
module test_trng;
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
    $dumpfile("test_trng.vcd");
    $dumpvars(0, test_trng);
  end
  
  // =========== Top-level TRNG Test ===========
  logic trng_d1, trng_d2, trng_o_valid, trng_o_warbler;
  logic [4:0] trng_d3;
  
  trng trng_inst (
    .clk(clk),
    .rst(rst),
    .d1(trng_d1),
    .d2(trng_d2),
    .d3(trng_d3),
    .o_valid(trng_o_valid),
    .o_warbler(trng_o_warbler)
  );
  
  // Variables for TRNG test
  logic prev_warbler;
  logic changed;
  
  task automatic test_trng_basic_operation();
  // Declare variables at the beginning of the task
  integer warbler_o_high;
  integer warbler_o_low;
  integer diff;

  begin
    warbler_o_high = 0;
    warbler_o_low  = 0;
    diff = 0;

    trng_d1 = 1'b1;
    trng_d2 = 1'b0;
    trng_d3 = 5'b10101;

    // Reset should put FSM in LOAD state
    rst = 1'b1;
    #CLK_PERIOD;
    rst = 1'b0;
    repeat(200) @(posedge clk);

    // Check that o_valid is initially inactive
    assert(trng_o_valid == 1'b0) else
      $error("TRNG o_valid active after reset");

    // After 19 cycles (entering INIT state), o_valid should become active
    repeat(19) @(posedge clk);

    // Wait for transition to RUN state 
    repeat(36) @(posedge clk);

    // o_valid should be active every 5th cycle in RUN state
    @(posedge clk);
    for (int i = 1; i <= 10; i++) begin
      @(posedge clk);
      if (i % 5 == 0) begin
        assert(trng_o_valid == 1'b1) else
          $error("TRNG o_valid not active on 5th cycle during RUN state");
      end else begin
        assert(trng_o_valid == 1'b0) else
          $error("TRNG o_valid active on non-5th cycle during RUN state");
      end
    end

    // Run for 1000 more cycles and count high/low occurrences
    repeat(1000) begin
      @(posedge clk);
      if (trng_o_warbler == 1'b1 && trng_o_valid)
        warbler_o_high++;
      else if(trng_o_valid)
        warbler_o_low++;
    end

    diff = (warbler_o_high > warbler_o_low) ?
           (warbler_o_high - warbler_o_low) :
           (warbler_o_low - warbler_o_high);

    $display("TRNG o_warbler high: %0d, low: %0d, diff: %0d",
             warbler_o_high, warbler_o_low, diff);

    assert(diff <= 20) else
      $error("TRNG o_warbler output is skewed: imbalance of %0d exceeds threshold", diff);
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
    
    // Test TRNG top module
    $display("Testing TRNG top module...");
    test_trng_basic_operation();
    
    // Finish simulation
    #(CLK_PERIOD * 10);
    $display("TRNG test completed!");
    $finish();
  end

endmodule