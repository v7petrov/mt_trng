`timescale 1ns/1ps
module test_bitcollect;
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
    $dumpfile("test_bitcollect.vcd");
    $dumpvars(0, test_bitcollect);
  end

  // =========== TRNG + Bit Collector Integration Test ===========

  // TRNG interface
  logic trng_d1, trng_d2, trng_o_valid, trng_o_warbler;
  logic [4:0] trng_d3;

  // Bit Collector interface
  logic byte_ready;
  logic [7:0] rand_byte;

  // Instantiate TRNG
  trng trng_inst (
    .clk(clk),
    .rst(rst),
    .d1(trng_d1),
    .d2(trng_d2),
    .d3(trng_d3),
    .o_valid(trng_o_valid),
    .o_warbler(trng_o_warbler)
  );

  // Instantiate Bit Collector
  bit_collector collector (
    .clk(clk),
    .rst(rst),
    .enable(1'b1),
    .o_valid(trng_o_valid),
    .o_warbler(trng_o_warbler),
    .byte_ready(byte_ready),
    .rand_byte(rand_byte)
  );

  // Task to run the TRNG + collector system
  task automatic test_trng_collector_operation();
    begin
      // Initialize TRNG inputs
      trng_d1 = 1'b0;
      trng_d2 = 1'b1;
      trng_d3 = 5'b11001;

      // Reset TRNG and collector
      rst = 1'b1;
      #CLK_PERIOD;
      rst = 1'b0;

      // Wait through FSM startup
      repeat(200) @(posedge clk);
      repeat(64) @(posedge clk);  // INIT + RUN entry delay

      // Collect and display a few random bytes
      repeat(1000) @(posedge clk);
    end
  endtask

  // Monitor output from collector
  always_ff @(posedge clk) begin
    if (byte_ready) begin
      $display("Collected Byte: 0x%02x at time %0t", rand_byte, $time);
    end
  end

  // Main test sequence
  initial begin
    // Initialize signals
    clk = 0;
    rst = 1;

    // Begin test
    #(CLK_PERIOD * 2);
    rst = 0;
    #CLK_PERIOD;

    $display("Testing TRNG + Bit Collector integration...");
    test_trng_collector_operation();

    #(CLK_PERIOD * 20);
    $display("TRNG + Bit Collector test completed!");
    $finish();
  end

endmodule
