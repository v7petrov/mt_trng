`timescale 1ns / 1ps

module test_simon;

    // Clock and reset
    logic clk, rst;

    // Inputs to DUT
    logic        key_we;
    logic [8:0]  key_addr;
    logic        cipher_en;
    logic [31:0] plaintext;

    // Outputs from DUT
    logic        key_ack;
    logic [31:0] cipher_out;
    logic        done;
    initial begin
      $dumpfile("test_simon.vcd");
      $dumpvars(0, test_simon);
    end

    // Instantiate DUT
    simonrngtop dut (
        .clk(clk),
        .rst(rst),
        .key_we(key_we),
        .key_addr(key_addr),
        .key_ack(key_ack),
        .cipher_en(cipher_en),
        .plaintext(plaintext),
        .cipher_out(cipher_out),
        .done(done)
    );

    // Clock generator: 10ns period
    always #5 clk = ~clk;

    // Task to wait one clock cycle
    task tick;
        @(posedge clk);
    endtask

    // Task to write a random word to RAM at address
    task write_rng_word(input [8:0] addr);
        key_addr = addr;
        key_we   = 1;
        do begin
            tick();
        end while (!key_ack);
        key_we = 0;
        tick(); // Clear after ack
    endtask

    // initial begin
    //   #10000;
    //   $display("[TB] TIMEOUT: Simulation finished after 5000 time units.");
    //   $finish;
    // end


    // Main stimulus
    initial begin
        $display("=== RNG + SIMON Cipher Top-Level TB ===");

        // Initialize
        clk = 0;
        rst = 1;
        key_we = 0;
        key_addr = 0;
        cipher_en = 0;
        plaintext = 32'hDEADBEEF;

        repeat (5) tick();  // Hold reset
        rst = 0;
        $display("[TB] Reset deasserted");

        // Step 1: Write two random words to RAM (key)
        $display("[TB] Writing random key to RAM at 0x10 and 0x11");
        write_rng_word(9'h10); // First 32-bit of key
        write_rng_word(9'h11); // Second 32-bit of key

        // Step 2: Start cipher
        $display("[TB] Starting cipher operation");
        #30
        cipher_en = 1;
        #10
        cipher_en = 0;

        // Step 3: Wait for cipher to finish
        wait (done == 1);
        $display("[TB] Cipher complete!");
        $display("[TB] Cipher text = 0x%08X", cipher_out);
        #10
        $finish;
    end

endmodule
