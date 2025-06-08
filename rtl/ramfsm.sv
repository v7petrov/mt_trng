`timescale 1ns / 1ps

module ramfsm (
  input  logic        clk_i,
  input  logic        rst_i,
  input  logic        start,

  // RNG control
  output logic        we_rng,
  output logic [8:0]  addr_rng,
  input  logic        ack_rng,

  // RAM Port B interface
  output logic        ram_cyc_b,
  output logic        ram_stb_b,
  output logic [3:0]  ram_we_b,
  output logic [8:0]  ram_addr_b,
  input  logic [31:0] ram_data_out_b,
  input  logic        ram_ack_b,
  input  logic        ram_stall_b,

  // AES interface
  output logic        aes_cs,
  output logic        aes_we,
  output logic [7:0]  aes_address,
  output logic [31:0] aes_write_data,
  input  logic [31:0] aes_read_data,

  output logic        done,
  output logic        vld_out,
  output logic [31:0] data_out
);

typedef enum logic [3:0] {
  IDLE, TRIGGER_RNG, WAIT_RNG_ACK,
  READ_KEY_WORDS, WRITE_KEY_WORDS,
  READ_BLOCK_WORDS, WRITE_BLOCK,
  INIT_AES, WAIT_READY,
  START_NEXT, WAIT_VALID, READ_RESULT,
  DONE
} state_t;

state_t state, next_state;

logic [2:0] key_word_index;
logic [1:0] block_word_index;
logic [1:0] result_word_index;
logic [31:0] key_buffer [0:7];
logic [31:0] block_buffer [0:3];
logic [31:0] result_buffer [0:3];

parameter [8:0] KEY_BASE_ADDR   = 9'h00;
parameter [8:0] BLOCK_BASE_ADDR = 9'h10;
parameter [8:0] RNG_TARGET_ADDR = 9'h1F;


always_comb begin
  // Default signal values
  we_rng         = 0;
  addr_rng       = RNG_TARGET_ADDR;
  ram_cyc_b      = 0;
  ram_stb_b      = 0;
  ram_we_b       = 4'b0000;
  ram_addr_b     = 9'b0;
  aes_cs         = 0;
  aes_we         = 0;
  aes_address    = 8'b0;
  aes_write_data = 32'b0;
  done           = 0;
  vld_out        = 0;
  data_out       = 32'b0;

  next_state = state;

  case (state)
    IDLE:
      if (start) next_state = TRIGGER_RNG;

    TRIGGER_RNG: begin
      we_rng = 1;
      next_state = WAIT_RNG_ACK;
    end

    WAIT_RNG_ACK:
      if (ack_rng) next_state = READ_KEY_WORDS;

    READ_KEY_WORDS: begin
      ram_cyc_b = 1;
      ram_stb_b = 1;
      ram_addr_b = KEY_BASE_ADDR + {6'b0, key_word_index};
      if (ram_ack_b) begin
        next_state = WRITE_KEY_WORDS;
      end
    end

    WRITE_KEY_WORDS: begin
      aes_cs = 1;
      aes_we = 1;
      aes_address = 8'h10 + {5'b0, key_word_index};
      aes_write_data = ram_data_out_b;
      if (key_word_index == 3'd7)
        next_state = READ_BLOCK_WORDS;
      else
        next_state = READ_KEY_WORDS;
    end

    READ_BLOCK_WORDS: begin
      ram_cyc_b = 1;
      ram_stb_b = 1;
      ram_addr_b = BLOCK_BASE_ADDR + {7'b0, block_word_index};
      if (ram_ack_b) begin
        next_state = WRITE_BLOCK;
      end
    end

    WRITE_BLOCK: begin
      aes_cs = 1;
      aes_we = 1;
      aes_address = 8'h20 + {6'b0, block_word_index};
      aes_write_data = ram_data_out_b;
      if (block_word_index == 2'd3)
        next_state = INIT_AES;
      else
        next_state = READ_BLOCK_WORDS;

    end

    INIT_AES: begin
      aes_cs = 1;
      aes_we = 1;
      aes_address = 8'h08;
      aes_write_data = 32'h01; // INIT bit
      next_state = WAIT_READY;
    end

    WAIT_READY: begin
      aes_cs = 1;
      aes_address = 8'h09;
      if (aes_read_data[0]) next_state = START_NEXT;
    end

    START_NEXT: begin
      aes_cs = 1;
      aes_we = 1;
      aes_address = 8'h08;
      aes_write_data = 32'h02; // NEXT bit
      next_state = WAIT_VALID;
    end

    WAIT_VALID: begin
      aes_cs = 1;
      aes_address = 8'h09;
      if (aes_read_data[1]) next_state = READ_RESULT;
    end

    READ_RESULT: begin
      aes_cs      = 1;
      aes_address = 8'h30 + {6'b0, result_word_index};
      data_out    = aes_read_data;
      vld_out     = 1;
      if (result_word_index == 2'd3)
         next_state = DONE;
      else
        next_state = READ_RESULT;

    end

    DONE: begin
      done = 1;
      if (!start)
        next_state = IDLE;
    end

    default: begin
        next_state = IDLE;
    end
  endcase
end

always_ff @(posedge clk_i) begin
  if (rst_i) begin
    state <= IDLE;
    key_word_index <= 0;
    block_word_index <= 0;
    result_word_index <= 0;
  end else begin
    state <= next_state;
  end
  if (state == WRITE_KEY_WORDS && ram_ack_b)
    key_word_index <= key_word_index + 1;
  if (state == WRITE_BLOCK && ram_ack_b)
    block_word_index <= block_word_index + 1;
  if (state == READ_RESULT && aes_cs) begin
    result_buffer[result_word_index] <= aes_read_data;
    result_word_index <= result_word_index + 1;
  end
end

endmodule
