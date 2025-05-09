// input is xor a0 and b0
module shift5 (
    input  logic        clk,
    input  logic        rst,
    input  logic        in_bit,
    output logic [4:0]  s
);
    always_ff @(posedge clk or posedge rst) begin
        if (rst)
            s <= 5'b0;
        else
            s <= {s[3:0], in_bit};
    end
endmodule