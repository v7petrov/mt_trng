`timescale 1ns/1ps
module bit_collector (
    input  logic clk,
    input  logic rst,
    input  logic enable,         // When high, collector is active
    input  logic o_valid,        // From TRNG
    input  logic o_warbler,      // From TRNG

    output logic byte_ready,     // High when a full byte is collected
    output logic [7:0] rand_byte // Collected random byte
);

    logic [7:0] shift_reg;
    logic [2:0] bit_count;

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            shift_reg  <= 8'b0;
            bit_count  <= 3'd0;
            rand_byte  <= 8'b0;
            byte_ready <= 1'b0;
        end else if (enable && o_valid) begin
            shift_reg <= {shift_reg[6:0], o_warbler};
            bit_count <= bit_count + 1;

            if (bit_count == 3'd7) begin
                rand_byte  <= {shift_reg[6:0], o_warbler};
                byte_ready <= 1'b1;
                bit_count  <= 3'd0;
            end else begin
                byte_ready <= 1'b0;
            end
        end else begin
            byte_ready <= 1'b0;
        end
    end

endmodule
