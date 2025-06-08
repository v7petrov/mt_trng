`timescale 1ns / 1ps
module simonrngtop (
    input  wire        clk,
    input  wire        rst,

    // RNG Write Interface
    input  wire        key_we,
    input  wire [8:0]  key_addr,
    output wire        key_ack,

    // SIMON Cipher Interface
    input  wire        cipher_en,
    input  wire [31:0] plaintext,
    output wire [31:0] cipher_out,
    output wire        done
);

    // ===============================
    // RNG RAM Integration
    // ===============================
    wire        pA_ack, pA_stall;
    wire [31:0] pA_data_out;

    wire        pB_ack, pB_stall;
    wire [31:0] pB_data_out;

    reg         pB_cyc, pB_stb;
    reg  [3:0]  pB_we;
    reg  [8:0]  pB_addr;
    reg  [31:0] pB_data_in;

    wire        we_rng = key_we;
    wire [8:0]  addr_rng = key_addr;
    wire        ack_rng;

    assign key_ack = ack_rng;

    rng_ram ram_inst (
        .clk_i(clk),
        .rst_i(rst),

        // Wishbone Port A - used for RNG writes
        .pA_wb_cyc_i(),
        .pA_wb_stb_i(),
        .pA_wb_we_i(),
        .pA_wb_addr_i(),
        .pA_wb_data_i(),
        .pA_wb_ack_o(pA_ack),
        .pA_wb_stall_o(pA_stall),
        .pA_wb_data_o(pA_data_out),

        // Wishbone Port B - used for reading key
        .pB_wb_cyc_i(pB_cyc),
        .pB_wb_stb_i(pB_stb),
        .pB_wb_we_i(pB_we),
        .pB_wb_addr_i(pB_addr),
        .pB_wb_data_i(pB_data_in),
        .pB_wb_ack_o(pB_ack),
        .pB_wb_stall_o(pB_stall),
        .pB_wb_data_o(pB_data_out),

        // RNG write interface
        .we_rng(we_rng),
        .addr_rng(addr_rng),
        .ack_rng(ack_rng)
    );

    // ===============================
    // FSM to read 64-bit key from RAM
    // ===============================
    typedef enum logic [1:0] {IDLE, READ1, READ2, WAIT_DONE} state_t;
    state_t state, next_state;

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
        simon_en_reg <= next_simon_en; // unified assignment
        if (state == READ1 && pB_ack) key_part1 <= pB_data_out;
        if (state == READ2 && pB_ack) key_part2 <= pB_data_out;
        if (state == WAIT_DONE && simon_done)
            ciphertext_reg <= cipher_wire;
    end
end


    always_comb begin
    next_state     = state;
    next_simon_en  = 0;  // clear by default

    pB_cyc     = 0;
    pB_stb     = 0;
    pB_we      = 4'b0000;
    pB_addr    = 9'd0;
    pB_data_in = 32'd0;

    case (state)
        IDLE: begin
            if (cipher_en)
                next_state = READ1;
        end
        READ1: begin
            pB_cyc = 1;
            pB_stb = 1;
            pB_addr = key_addr;
            if (pB_ack)
                next_state = READ2;
        end
        READ2: begin
            pB_cyc = 1;
            pB_stb = 1;
            pB_addr = key_addr + 4;
            if (pB_ack)
                next_state = WAIT_DONE;
        end
        WAIT_DONE: begin
            next_simon_en = 1; // correctly generate simon_en here
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
