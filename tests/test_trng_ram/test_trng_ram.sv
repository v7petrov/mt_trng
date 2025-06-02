`timescale 1ns/1ps
module test_rng_ram;

  // Clock and reset
  logic clk, rst;

  localparam CLK_PERIOD = 10;

  always begin
    #(CLK_PERIOD/2) clk <= ~clk;
  end

  // Waveform generation
  initial begin
    $dumpfile("test_rng_ram.vcd");
    $dumpvars(0, test_rng_ram);
  end

  // =========== DUT Interface ===========

  // Wishbone Port A (not used here for direct access)
  logic        pA_wb_cyc_i, pA_wb_stb_i;
  logic [3:0]  pA_wb_we_i;
  logic [8:0]  pA_wb_addr_i;
  logic [31:0] pA_wb_data_i;
  wire         pA_wb_ack_o;
  wire         pA_wb_stall_o;
  wire [31:0]  pA_wb_data_o;

  // Wishbone Port B (used for read-back)
  logic        pB_wb_cyc_i, pB_wb_stb_i;
  logic [3:0]  pB_wb_we_i;
  logic [8:0]  pB_wb_addr_i;
  logic [31:0] pB_wb_data_i;
  wire         pB_wb_ack_o;
  wire         pB_wb_stall_o;
  wire [31:0]  pB_wb_data_o;

  // RNG control interface
  logic        we_rng;
  logic [8:0]  addr_rng;
  logic        ack_rng;

  // Store expected data for comparison
  logic [31:0] golden_data [0:7];

  // DUT
  rng_ram dut (
    .clk_i(clk),
    .rst_i(rst),

    .pA_wb_cyc_i(pA_wb_cyc_i),
    .pA_wb_stb_i(pA_wb_stb_i),
    .pA_wb_we_i(pA_wb_we_i),
    .pA_wb_addr_i(pA_wb_addr_i),
    .pA_wb_data_i(pA_wb_data_i),
    .pA_wb_ack_o(pA_wb_ack_o),
    .pA_wb_stall_o(pA_wb_stall_o),
    .pA_wb_data_o(pA_wb_data_o),

    .pB_wb_cyc_i(pB_wb_cyc_i),
    .pB_wb_stb_i(pB_wb_stb_i),
    .pB_wb_we_i(pB_wb_we_i),
    .pB_wb_addr_i(pB_wb_addr_i),
    .pB_wb_data_i(pB_wb_data_i),
    .pB_wb_ack_o(pB_wb_ack_o),
    .pB_wb_stall_o(pB_wb_stall_o),
    .pB_wb_data_o(pB_wb_data_o),

    .we_rng(we_rng),
    .addr_rng(addr_rng),
    .ack_rng(ack_rng)
  );

  // =========== Tasks ===========

  task automatic trigger_rng_write(input int index);
    begin
      @(posedge clk);
      addr_rng = index[8:0];
      we_rng   = 1'b1;
      @(posedge clk);
      we_rng   = 1'b0;

      // Wait for ack
      wait (ack_rng == 1'b1);
      @(posedge clk);

      // Sample the data via port B to verify
      pB_wb_addr_i = index[8:0];
      pB_wb_cyc_i  = 1'b1;
      pB_wb_stb_i  = 1'b1;
      pB_wb_we_i   = 4'b0000;

      wait (pB_wb_ack_o == 1'b1);
      @(posedge clk);
      golden_data[index] = pB_wb_data_o;

      pB_wb_cyc_i = 1'b0;
      pB_wb_stb_i = 1'b0;
    end
  endtask

  task automatic verify_rng_contents(input int count);
    begin
      for (int i = 0; i < count; i++) begin
        pB_wb_addr_i = i[8:0];
        pB_wb_cyc_i  = 1'b1;
        pB_wb_stb_i  = 1'b1;
        pB_wb_we_i   = 4'b0000;

        wait (pB_wb_ack_o == 1'b1);
        @(posedge clk);

        $display("RAM[%0d] = 0x%08x", i, pB_wb_data_o);
        assert(pB_wb_data_o == golden_data[i]) else
          $error("Mismatch at addr %0d! Expected 0x%08x, got 0x%08x",
                 i, golden_data[i], pB_wb_data_o);

        pB_wb_cyc_i = 1'b0;
        pB_wb_stb_i = 1'b0;
      end
    end
  endtask

  // =========== Main Test Sequence ===========

  initial begin
    // Initialize signals
    clk = 0;
    rst = 1;
    we_rng = 0;
    addr_rng = 0;

    pA_wb_cyc_i = 0; pA_wb_stb_i = 0; pA_wb_we_i = 0; pA_wb_addr_i = 0; pA_wb_data_i = 0;
    pB_wb_cyc_i = 0; pB_wb_stb_i = 0; pB_wb_we_i = 0; pB_wb_addr_i = 0; pB_wb_data_i = 0;

    // Release reset
    #(CLK_PERIOD * 5);
    rst = 0;

    $display("Triggering RNG writes...");
    for (int i = 0; i < 8; i++) begin
      trigger_rng_write(i);
    end

    #(CLK_PERIOD * 10);

    $display("Verifying RNG RAM contents...");
    verify_rng_contents(8);

    $display("Test completed.");
    $finish();
  end

endmodule
