`timescale 1ns/1ps
module test_trng_parallel32;
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
    $dumpfile("test_trng_parallel32.vcd");
    $dumpvars(0, test_trng_parallel32);
  end

  // =========== TRNG Parallel 32 Test ===========

  // Inputs to parallel TRNGs
  logic [31:0] trng_d1, trng_d2;
  logic [4:0]  trng_d3;

  // Outputs from parallel TRNGs
  logic        word_valid;
  logic [31:0] rand_word;

  // Instantiate the 32x parallel TRNG module
  trng_parallel32 uut (
    .clk(clk),
    .rst(rst),
    .d1(trng_d1),
    .d2(trng_d2),
    .d3(trng_d3),
    .word_valid(word_valid),
    .rand_word(rand_word)
  );

  // Task to test word-level TRNG output
  task automatic test_parallel_trng_word();
    integer collected_words = 0;

    begin
      // Initialize inputs
      trng_d1 = 32'hAAAAAAAA;  // pattern or random
      trng_d2 = 32'h55555555;
      trng_d3 = 5'b10101;

      // Reset the system
      rst = 1'b1;
      #CLK_PERIOD;
      rst = 1'b0;

      // Wait for TRNGs to initialize and run
      repeat(300) @(posedge clk);

      // Capture and print 10 random words
      while (collected_words < 10) begin
        @(posedge clk);
        if (word_valid) begin
          $display("Random Word [%0d]: 0x%08x at time %0t",
                   collected_words, rand_word, $time);
          collected_words++;
        end
      end
    end
  endtask

  // Main test sequence
  initial begin
    // Initialize clock and reset
    clk = 0;
    rst = 1;

    // Start test
    #(CLK_PERIOD * 2);
    rst = 0;
    #CLK_PERIOD;

    $display("Testing 32x parallel TRNG module...");
    test_parallel_trng_word();

    #(CLK_PERIOD * 10);
    $display("32x TRNG test completed!");
    $finish();
  end

endmodule
