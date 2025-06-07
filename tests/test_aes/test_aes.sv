`timescale 1ns / 1ps

module ramfsm_tb;

  logic clk;
  logic rst;
  logic start;
  logic done;

  // RNG interface
  logic        we_rng;
  logic [8:0]  addr_rng;
  logic        ack_rng;

  // RAM B interface
  logic        ram_cyc_b;
  logic        ram_stb_b;
  logic [3:0]  ram_we_b;
  logic [8:0]  ram_addr_b;
  logic [31:0] ram_data_out_b;
  logic        ram_ack_b;
  logic        ram_stall_b;

  // AES interface
  logic        aes_cs;
  logic        aes_we;
  logic [7:0]  aes_address;
  logic [31:0] aes_write_data;
  logic [31:0] aes_read_data;

  // Clock generation
  initial clk = 0;
  always #5 clk = ~clk;

      initial begin
    $dumpfile("test_fsm.vcd");
    $dumpvars(0, test_fsm);
  end
  
  
  // Instantiate FSM
  ramfsm dut (
    .clk_i(clk),
    .rst_i(rst),
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
    .aes_read_data(aes_read_data)
  );

  // Testbench variables
  int aes_status_counter = 0;

  // Simple AES and RAM behavior emulation
  always_ff @(posedge clk) begin
    // Emulate ack_rng after one cycle of we_rng
    ack_rng <= we_rng;

    // Provide dummy data for RAM reads
    ram_ack_b <= ram_cyc_b && ram_stb_b;
    ram_data_out_b <= 32'hDEADBEEF + {23'b0, ram_addr_b};  // 9 bits to 32


    // AES read data (status register)
    if (aes_address == 8'h09) begin
      // emulate ready then valid
      if (aes_status_counter < 2)
        aes_read_data <= 32'b1;  // ready
      else
        aes_read_data <= 32'b10; // valid

      aes_status_counter++;
    end else if (aes_address >= 8'h30 && aes_address <= 8'h33) begin
      aes_read_data  <= 32'hC0DEC0DE + {24'b0, aes_address}; // 8 bits to 32
    end
  end

  // Test procedure
  initial begin
    rst = 1;
    start = 0;
    ack_rng = 0;
    ram_stall_b = 0;
    #20;
    rst = 0;

    // Wait a few cycles
    #30;

    // Trigger FSM
    @(negedge clk);
    start = 1;
    @(negedge clk);
    start = 0;

    // Wait for done
    wait (done);
    $display("[TB] FSM completed AES flow at time %0t", $time);
    #20;
    $finish;
  end

endmodule
