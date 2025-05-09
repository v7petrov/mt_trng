`timescale 1ns/1ps
module test_fsm;
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
    $dumpfile("test_fsm.vcd");
    $dumpvars(0, test_fsm);
  end
  
  // =========== FSM Test ===========
  logic fsm_load_en, fsm_init_en, fsm_run_en, fsm_nlfsr3_ce;
  
  fsm fsm_inst (
    .clk(clk),
    .rst(rst),
    .load_en(fsm_load_en),
    .init_en(fsm_init_en),
    .run_en(fsm_run_en),
    .nlfsr3_ce(fsm_nlfsr3_ce)
  );
  
  task automatic test_fsm_states();
    begin
      // Test LOAD state
      assert(fsm_load_en == 1'b1 && fsm_init_en == 1'b0 && fsm_run_en == 1'b0) else
        $error("FSM not in correct LOAD state at startup");
      
      // Wait for transition to INIT (after 17 cycles)
      repeat(17) @(posedge clk);
      
      assert(fsm_load_en == 1'b0 && fsm_init_en == 1'b1 && fsm_run_en == 1'b0) else
        $error("FSM did not transition to INIT state after 17 cycles");
      
      // Wait for transition to RUN (after additional 36 cycles)
      repeat(36) @(posedge clk);
      
      assert(fsm_load_en == 1'b0 && fsm_init_en == 1'b0 && fsm_run_en == 1'b1) else
        $error("FSM did not transition to RUN state after 36 more cycles");
      
      // Test nlfsr3_ce signal in RUN state (should be active every 5th cycle)
      @(posedge clk);
      for (int i = 1; i <= 10; i++) begin
        @(posedge clk);
        if (i % 5 == 0) begin
          assert(fsm_nlfsr3_ce == 1'b1) else
            $error("FSM nlfsr3_ce not active on 5th cycle during RUN state");
        end else begin
          assert(fsm_nlfsr3_ce == 1'b0) else
            $error("FSM nlfsr3_ce active on non-5th cycle during RUN state");
        end
      end
    end
  endtask
  
  // Main test sequence
  initial begin
    // Initialize signals
    clk = 0;
    rst = 1;
    
    // Release reset
    #(CLK_PERIOD * 2);
    rst = 0;
    #CLK_PERIOD;
    
    // Test FSM
    $display("Testing FSM module...");
    test_fsm_states();
    
    // Finish simulation
    #(CLK_PERIOD * 10);
    $display("FSM test completed!");
    $finish();
  end

endmodule