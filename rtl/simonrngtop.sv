`timescale 1ns / 1ps

module simonrngtop (
    input  wire        clk,
    input  wire        rst,

    // RNG Write Interface
    input  wire        key_we,
    input  wire [8:0]  key_addr,
    output reg         key_ack,

    // SIMON Cipher Interface
    input  wire        cipher_en,
    input  wire [31:0] plaintext,
    output wire [31:0] cipher_out,
    output wire        done
);

    // ===============================
    // FSM to read 64-bit key from RAM (moved up to avoid early reference)
    // ===============================
    typedef enum logic [1:0] {IDLE, READ1, READ2, WAIT_DONE} state_t;
    state_t state, next_state;

    // ===============================
    // RNG RAM Logic (flattened ram_biter + rng_ram)
    // ===============================

    // RNG generator (simulates trng_parallel32)
    logic word_valid;
    logic [31:0] rand_word;
    logic [31:0] trng_d1 = 32'hA5A5A5A5;
    logic [31:0] trng_d2 = 32'h5A5A5A5A;
    logic [4:0]  trng_d3 = 5'b10101;

    trng_parallel32 rng_gen (
        .clk(clk),
        .rst(rst),
        .d1(trng_d1),
        .d2(trng_d2),
        .d3(trng_d3),
        .word_valid(word_valid),
        .rand_word(rand_word)
    );

    logic rng_write_active;
    logic rng_write_strobe;
    assign rng_write_strobe = rng_write_active && word_valid;

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            rng_write_active <= 0;
            key_ack <= 0;
        end else begin
            if (key_we && !rng_write_active) begin
                rng_write_active <= 1;
            end
            if (rng_write_strobe) begin
                rng_write_active <= 0;
                key_ack <= 1;
            end else begin
                key_ack <= 0;
            end
        end
    end


    // Port muxing logic for RAM access
    /* verilator lint_off WIDTHEXPAND */
    wire [8:0] pB_addr = (state == READ1) ? key_addr : (state == READ2) ? (key_addr + 9'd4) : 9'd0;
    wire pB_read = (state == READ1 || state == READ2);

    wire [8:0] ram1_addr = ~pB_addr[8] ? pB_addr[7:0] : key_addr[7:0];
    wire [8:0] ram2_addr =  pB_addr[8] ? pB_addr[7:0] : key_addr[7:0];

    wire ram1_we_enable = (rng_write_strobe && !key_addr[8]);
    wire ram2_we_enable = (rng_write_strobe &&  key_addr[8]);

    wire [3:0] ram_we = 4'b1111;

    wire [31:0] ram1_dout, ram2_dout;
    wire [31:0] ram1_din = rng_write_strobe ? rand_word : 32'd0;
    wire [31:0] ram2_din = rng_write_strobe ? rand_word : 32'd0;

    DFFRAM256x32 ram1 (
        .CLK(clk),
        .WE0(ram1_we_enable ? ram_we : 4'b0000),
        .EN0(1'b1),
        .Di0(ram1_din),
        .Do0(ram1_dout),
        .A0(ram1_addr[7:0])
    );

    DFFRAM256x32 ram2 (
        .CLK(clk),
        .WE0(ram2_we_enable ? ram_we : 4'b0000),
        .EN0(1'b1),
        .Di0(ram2_din),
        .Do0(ram2_dout),
        .A0(ram2_addr[7:0])
    );

    wire [31:0] pB_data_out = pB_addr[8] ? ram2_dout : ram1_dout;

    reg [31:0] key_part1, key_part2;
    reg [31:0] ciphertext_reg;
    reg        simon_en_reg;
    reg        next_simon_en;

    wire [31:0] cipher_wire;
    wire        simon_done;

    assign cipher_out = cipher_wire;
    assign done       = simon_done;

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= IDLE;
            simon_en_reg <= 0;
        end else begin
            state <= next_state;
            simon_en_reg <= next_simon_en;
            if (state == READ1) key_part1 <= pB_data_out;
            if (state == READ2) key_part2 <= pB_data_out;
            if (state == WAIT_DONE && simon_done) ciphertext_reg <= cipher_wire;
        end
    end

    always_comb begin
        next_state     = state;
        next_simon_en  = 0;

        case (state)
            IDLE: begin
                if (cipher_en)
                    next_state = READ1;
            end
            READ1: begin
                next_state = READ2;
            end
            READ2: begin
                next_state = WAIT_DONE;
            end
            WAIT_DONE: begin
                next_simon_en = 1;
                if (simon_done)
                    next_state = IDLE;
            end
        endcase
    end

    // ===============================
    // SIMON Cipher Instantiation
    // ===============================
    wire [63:0] simon_key = {key_part2, key_part1};

    simon #(.n(16), .m(4)) cipher (
        .clk(clk),
        .rst(rst),
        .plaintext(plaintext),
        .key(simon_key),
        .ciphertext(cipher_wire),
        .en(simon_en_reg),
        .done(simon_done)
    );

endmodule
