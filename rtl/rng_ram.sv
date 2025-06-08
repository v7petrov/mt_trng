`timescale 1ns/1ps
module rng_ram (
    input  wire        clk_i,
    input  wire        rst_i,

    // Wishbone Port A (standard)
    input  wire        pA_wb_cyc_i,
    input  wire        pA_wb_stb_i,
    input  wire [3:0]  pA_wb_we_i,
    input  wire [8:0]  pA_wb_addr_i,
    input  wire [31:0] pA_wb_data_i,
    output wire        pA_wb_ack_o,
    output wire        pA_wb_stall_o,
    output wire [31:0] pA_wb_data_o,

    // Wishbone Port B (standard)
    input  wire        pB_wb_cyc_i,
    input  wire        pB_wb_stb_i,
    input  wire [3:0]  pB_wb_we_i,
    input  wire [8:0]  pB_wb_addr_i,
    input  wire [31:0] pB_wb_data_i,
    output wire        pB_wb_ack_o,
    output wire        pB_wb_stall_o,
    output wire [31:0] pB_wb_data_o,

    // RNG write interface
    input  wire        we_rng,            // Trigger random write
    input  wire [8:0]  addr_rng,          // Address to write to
    output logic       ack_rng            //a Ack when random write is complete
);

  // Internal signals for random data
  logic        word_valid;
  logic [31:0] rand_word;

  // Random generator input (static patterns)
  logic [31:0] trng_d1 = 32'hA5A5A5A5;
  logic [31:0] trng_d2 = 32'h5A5A5A5A;
  logic [4:0]  trng_d3 = 5'b10101;

  // Instantiate the 32-bit parallel TRNG
  trng_parallel32 rng_gen (
    .clk(clk_i),
    .rst(rst_i),
    .d1(trng_d1),
    .d2(trng_d2),
    .d3(trng_d3),
    .word_valid(word_valid),
    .rand_word(rand_word)
  );

  // Signals to connect RNG write to Port A of ram_biter
  logic        rng_write_active;
  logic        rng_written;

  // Generate a pulse to Port A when RNG is ready and request is active
  logic        rng_write_strobe;
  assign rng_write_strobe = rng_write_active && word_valid;

  // RNG write FSM
  always_ff @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
      rng_write_active <= 0;
      ack_rng <= 0;
    end else begin
      if (we_rng && !rng_write_active) begin
        rng_write_active <= 1;
      end

      if (rng_write_strobe) begin
        rng_write_active <= 0;
        ack_rng <= 1;  // Pulse ack
      end else begin
        ack_rng <= 0;
      end
    end
  end

  // mux for port A between Wishbone and RNG
  wire        pA_we_sel    = rng_write_strobe ? 1'b1 : pA_wb_cyc_i && pA_wb_stb_i;
  wire [3:0]  pA_we_final  = rng_write_strobe ? 4'b1111 : pA_wb_we_i;
  wire [8:0]  pA_addr_final = rng_write_strobe ? addr_rng : pA_wb_addr_i;
  wire [31:0] pA_data_final = rng_write_strobe ? rand_word : pA_wb_data_i;

  // Internal ack for port A
  logic pA_ack;

  // RAM instance
  ram_biter ram (
    .clk_i(clk_i),
    .rst_i(rst_i),

    .pA_wb_cyc_i(pA_we_sel),
    .pA_wb_stb_i(pA_we_sel),
    .pA_wb_we_i(pA_we_final),
    .pA_wb_addr_i(pA_addr_final),
    .pA_wb_data_i(pA_data_final),
    .pA_wb_ack_o(pA_ack),
    .pA_wb_stall_o(pA_wb_stall_o),
    .pA_wb_data_o(pA_wb_data_o),

    .pB_wb_cyc_i(pB_wb_cyc_i),
    .pB_wb_stb_i(pB_wb_stb_i),
    .pB_wb_we_i(pB_wb_we_i),
    .pB_wb_addr_i(pB_wb_addr_i),
    .pB_wb_data_i(pB_wb_data_i),
    .pB_wb_ack_o(pB_wb_ack_o),
    .pB_wb_stall_o(pB_wb_stall_o),
    .pB_wb_data_o(pB_wb_data_o)
  );

  // Only forward ack to pA when not writing RNG
  assign pA_wb_ack_o = (!rng_write_strobe) ? pA_ack : 1'b0;

endmodule
