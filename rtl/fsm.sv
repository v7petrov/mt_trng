module fsm (
    input  logic clk,
    input  logic rst,
    output logic load_en,
    output logic init_en,
    output logic run_en,
    output logic nlfsr3_ce,
    output logic output_en
);

    // State encoding (one-hot): LOAD=100, INIT=010, RUN=001
    localparam logic [2:0]
        LOAD = 3'b100,
        INIT = 3'b010,
        RUN  = 3'b001;

    logic [2:0] state;
    logic [5:0] cnt;

    // Sequential state and counter updates
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= LOAD;
            cnt   <= 6'd0;
        end else begin
            case (state)
                LOAD: begin
                    if (cnt == 6'd17) begin    // 18 cycles for loading citeturn0file0
                        state <= INIT;
                        cnt   <= 6'd0;
                    end else begin
                        state <= LOAD;
                        cnt   <= cnt + 6'd1;
                    end
                end

                INIT: begin
                    if (cnt == 6'd35) begin    // 36 cycles for initialization citeturn0file0
                        state <= RUN;
                        cnt   <= 6'd0;
                    end else begin
                        state <= INIT;
                        cnt   <= cnt + 6'd1;
                    end
                end

                RUN: begin
                    state <= RUN;
                    cnt   <= cnt + 6'd1;       // free-running counter for mod-5 CE
                end

                default: begin
                    state <= LOAD;
                    cnt   <= 6'd0;
                end
            endcase
        end
    end

    // Output enables for each state
    assign load_en = (state == LOAD);
    assign init_en = (state == INIT);
    assign run_en  = (state == RUN);

    // NLFSR3 chip-enable: high during LOAD;
    // during INIT except first cycle; during RUN when cnt mod 5 == 4
    always_comb begin
        if (load_en) begin
            nlfsr3_ce = 1'b1;
            output_en = 1'b0;
        end else if (init_en) begin
            output_en = 1'b0;
            nlfsr3_ce = (cnt != 6'd0);
        end else begin
            nlfsr3_ce = (cnt % 6'd5 == 6'd4);
            output_en = 1'b1;
        end
    end

endmodule