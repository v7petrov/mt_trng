`timescale 1ns / 1ps

module aes_rng_top (
  input  logic        clk_i,
  input  logic        rst_i,
  input  logic        start,
  output logic        done,
  output logic        aes_valid_out,     // NEW: High when AES output is valid
  output logic [31:0] aes_output_word    // NEW: Observed AES output word
);

  // RNG write interface
  logic        we_rng;  
  logic [8:0]  addr_rng;
  logic        ack_rng;

  // RAM Port B (read-only by FSM)
  logic        ram_cyc_b, ram_stb_b;
  logic [3:0]  ram_we_b;
  logic [8:0]  ram_addr_b;
  logic [31:0] ram_data_out_b;
  logic        ram_ack_b, ram_stall_b;

  // AES interface
  logic        aes_cs;
  logic        aes_we;
  logic [7:0]  aes_address;
  logic [31:0] aes_write_data;
  logic [31:0] aes_read_data;

  // FSM-to-top-level data output signals
  logic        vld_out;       // FSM signals AES output is valid
  logic [31:0] data_out;      // One word of AES output

  // Connect top-level outputs
  assign aes_valid_out   = vld_out;
  assign aes_output_word = data_out;

  // RNG RAM instance
  rng_ram u_rng_ram (
    .clk_i(clk_i),
    .rst_i(rst_i),

    .pA_wb_cyc_i(),
    .pA_wb_stb_i(),
    .pA_wb_we_i(),
    .pA_wb_addr_i(),
    .pA_wb_data_i(),
    .pA_wb_ack_o(),
    .pA_wb_stall_o(),
    .pA_wb_data_o(),

    .pB_wb_cyc_i(ram_cyc_b),
    .pB_wb_stb_i(ram_stb_b),
    .pB_wb_we_i(ram_we_b),
    .pB_wb_addr_i(ram_addr_b),
    .pB_wb_data_i(32'b0),
    .pB_wb_ack_o(ram_ack_b),
    .pB_wb_stall_o(ram_stall_b),
    .pB_wb_data_o(ram_data_out_b),

    .we_rng(we_rng),
    .addr_rng(addr_rng),
    .ack_rng(ack_rng)
  );

  // AES core wrapper
  aes u_aes (
    .clk(clk_i),
    .reset_n(~rst_i),

    .cs(aes_cs),
    .we(aes_we),
    .address(aes_address),
    .write_data(aes_write_data),
    .read_data(aes_read_data)
  );

  // AES controller FSM (connected to ramfsm)
  ramfsm u_fsm (
    .clk_i(clk_i),
    .rst_i(rst_i),
    .start(start),
    .done(done),

    .we_rng(we_rng),
    .addr_rng(addr_rng),
    .ack_rng(ack_rng),

    .ram_cyc_b(ram_cyc_b),
    .ram_stb_b(ram_stb_b),
    .ram_we_b(ram_we_b),
    .ram_addr_b(ram_addr_b),
    .ram_data_out_b(ram_data_out_b),
    .ram_ack_b(ram_ack_b),
    .ram_stall_b(ram_stall_b),

    .aes_cs(aes_cs),
    .aes_we(aes_we),
    .aes_address(aes_address),
    .aes_write_data(aes_write_data),
    .aes_read_data(aes_read_data),

    .vld_out(vld_out),
    .data_out(data_out)
  );

endmodule

// `timescale 1ns / 1ps

// module aes_rng_top (
//   input  logic        clk_i,
//   input  logic        rst_i,
//   input  logic        start,
//   output logic        done,
//   output logic        aes_valid_out,     // NEW: High when AES output is valid
//   output logic [31:0] aes_output_word    // NEW: Observed AES output word
// );

//   // RNG write interface
//   logic        we_rng;
//   logic [8:0]  addr_rng;
//   logic        ack_rng;

//   // RAM Port B (read-only by FSM)
//   logic        ram_cyc_b, ram_stb_b;
//   logic [3:0]  ram_we_b;
//   logic [8:0]  ram_addr_b;
//   logic [31:0] ram_data_out_b;
//   logic        ram_ack_b, ram_stall_b;

//   // AES interface
//   logic        aes_cs;
//   logic        aes_we;
//   logic [7:0]  aes_address;
//   logic [31:0] aes_write_data;
//   logic [31:0] aes_read_data;

//   // FSM-to-top-level data output signals
//   logic        vld_out;       // FSM signals AES output is valid
//   logic [31:0] data_out;      // One word of AES output

//   // Connect top-level outputs
//   assign aes_valid_out   = vld_out;
//   assign aes_output_word = data_out;

//   // RNG RAM instance
//   rng_ram u_rng_ram (
//     .clk_i(clk_i),
//     .rst_i(rst_i),

//     .pA_wb_cyc_i(),
//     .pA_wb_stb_i(),
//     .pA_wb_we_i(),
//     .pA_wb_addr_i(),
//     .pA_wb_data_i(),
//     .pA_wb_ack_o(),
//     .pA_wb_stall_o(),
//     .pA_wb_data_o(),

//     .pB_wb_cyc_i(ram_cyc_b),
//     .pB_wb_stb_i(ram_stb_b),
//     .pB_wb_we_i(ram_we_b),
//     .pB_wb_addr_i(ram_addr_b),
//     .pB_wb_data_i(32'b0),
//     .pB_wb_ack_o(ram_ack_b),
//     .pB_wb_stall_o(ram_stall_b),
//     .pB_wb_data_o(ram_data_out_b),

//     .we_rng(we_rng),
//     .addr_rng(addr_rng),
//     .ack_rng(ack_rng)
//   );

//   // AES core wrapper
//   aes u_aes (
//     .clk(clk_i),
//     .reset_n(~rst_i),

//     .cs(aes_cs),
//     .we(aes_we),
//     .address(aes_address),
//     .write_data(aes_write_data),
//     .read_data(aes_read_data)
//   );

//   // AES controller FSM
//   aes_driver_fsm u_fsm (
//     .clk_i(clk_i),
//     .rst_i(rst_i),
//     .start(start),
//     .done(done),

//     .we_rng(we_rng),
//     .addr_rng(addr_rng),
//     .ack_rng(ack_rng),

//     .ram_cyc_b(ram_cyc_b),
//     .ram_stb_b(ram_stb_b),
//     .ram_we_b(ram_we_b),
//     .ram_addr_b(ram_addr_b),
//     .ram_data_out_b(ram_data_out_b),
//     .ram_ack_b(ram_ack_b),
//     .ram_stall_b(ram_stall_b),

//     .aes_cs(aes_cs),
//     .aes_we(aes_we),
//     .aes_address(aes_address),
//     .aes_write_data(aes_write_data),
//     .aes_read_data(aes_read_data),

//     .vld_out(vld_out),           // NEW
//     .data_out(data_out)          // NEW
//   );

// endmodule
