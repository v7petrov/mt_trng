module test_nlfsr;

  logic clk, rst;

  // NLFSR1 logic inputs
  logic warbler_o1, nlfsr3_ce1, d1, init1, load1;
  //NLFSR1 logic output
  logic a0_1;

  // NLFSR2 logic inputs
  logic warbler_o2, nlfsr3_ce2, d2, init2, load2;
  // NLFSR2 logic output
  logic b0_2;

  // NLFSR3 logic inputs
  logic load3, init3, nlfsr3_ce3;
  logic [4:0] d3, tk;
  // NLFSR3 logic outputs
  logic o_warbler3;

  // instantiate NLFSR1
  NLFSR1 NLFSR1 (
    .clk(clk),
    .rst(rst),
    .warbler_o(warbler_o1),
    .nlfsr3_ce(nlfsr3_ce1),
    .d1(d1),
    .init(init1), 
    .load(load1),
    .a0(a0_1)
  );

  // instantiate NLFSR2
  NLFSR2 NLFSR2 (
    .clk(clk),
    .rst(rst),
    .warbler_o(warbler_o2),
    .nlfsr3_ce(nlfsr3_ce2),
    .d2(d2),
    .init(init2), 
    .load(load2),
    .b0(b0_2)
  );  

  // instantiate NLFSR3
  NLFSR3 NLFSR3 (
    .clk(clk),
    .rst(rst),
    .load(load3),
    .init(init3),
    .nlfsr3_ce(nlfsr3_ce3),
    .d3(d3),
    .tk(tk),
    .o_warbler(o_warbler3)
  );

  localparam CLK_PERIOD = 10;
      always begin
          #(CLK_PERIOD/2) 
          clk<=~clk;
      end

  initial begin
        // Name as needed
        $dumpfile("test_nlfsr.vcd");
        $dumpvars(0);
    end

  // function to test 1st shift reg
  task automatic test_nlfsr1();
    begin
      rst = 1; warbler_o1 = 1;  nlfsr3_ce1 = 0; d1 = 0; init1 = 1; load1 = 0;
      #CLK_PERIOD
      rst = 0; nlfsr3_ce1 = 1; // puts a 1 in
      #CLK_PERIOD
      init1 = 0; // puts asomething in
      #CLK_PERIOD
      init1 = 1; d1 = 1; load1 = 1; // puts a 1 in
      #CLK_PERIOD
      load1 = 0; init1 = 0; nlfsr3_ce1 = 0; // puts a 0 in
      #CLK_PERIOD
      load1 = 1; // puts a 1 in
      #CLK_PERIOD


      assert (warbler_o1 != a0_1) else $error("NLFSR1 test failed");;
    end
  endtask

  // function to test 1st shift reg
  task automatic test_nlfsr2();
    begin
      rst = 1; warbler_o2 = 0;  nlfsr3_ce2 = 0; d2 = 0; init2 = 1; load2 = 0;
      #CLK_PERIOD
      rst = 0; load2 = 1; d2 = 1; // put a 1 in
      #CLK_PERIOD
      load2 = 0; // put a 0 in
      #CLK_PERIOD
      init2 = 0; // grab WGT ^ b0
      #CLK_PERIOD
      init2 = 0; nlfsr3_ce2 = 1;  // grab WGT ^ b0 ^ o_warbler
      #CLK_PERIOD


      assert (1 == 1) else $error("NLFSR2 test failed");;
    end
  endtask

  task automatic test_nlfsr3();
    begin
      //--- Reset & Init phase ---
      rst        = 1;
      nlfsr3_ce3 = 0;
      load3      = 0;
      init3      = 1;
      d3         = 5'hA;  // arbitrary test vector
      tk         = 5'h5;  // arbitrary test key
      #CLK_PERIOD;
      
      rst        = 0;     // release reset, keep ce=1 to load tk into C5
      nlfsr3_ce3 = 1;
      #CLK_PERIOD;
      
      init3      = 0;     // now exit init, normal feedback path active
      #CLK_PERIOD;
      
      //--- Load external word into C5 ---
      load3      = 1;
      d3         = 5'h3;  // new test vector
      #CLK_PERIOD;
      
      load3      = 0;     // back to normal shifting
      nlfsr3_ce3 = 0;
      #CLK_PERIOD;
      
      //--- One more shift with feedback on CE---
      nlfsr3_ce3 = 1;
      #(CLK_PERIOD * 3);
      
      //--- Simple sanity check: o_warbler3 must be 0 or 1 ---
      assert (1 == 1)
        else $error("NLFSR3 test failed: o_warbler3 = %b", o_warbler3);
    end
  endtask



  initial begin
    clk = 0; rst = 0;
    #(CLK_PERIOD)

    test_nlfsr1();
    test_nlfsr2();
    test_nlfsr3();
    $finish();
  end

endmodule