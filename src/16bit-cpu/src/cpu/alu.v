// src/cpu/alu.v
module alu16 (
    input  wire [15:0] a,
    input  wire [15:0] b,
    input  wire [2:0]  op,    // ALU operation select
    output reg  [15:0] y,
    output wire        zero
);
    // ALU op kodları
    localparam ALU_ADD  = 3'b000;
    localparam ALU_SUB  = 3'b001;
    localparam ALU_AND  = 3'b010;
    localparam ALU_OR   = 3'b011;
    localparam ALU_XOR  = 3'b100;
    localparam ALU_PASS = 3'b101; // sadece b'yi geçir

    always @* begin
        case (op)
            ALU_ADD:  y = a + b;
            ALU_SUB:  y = a - b;
            ALU_AND:  y = a & b;
            ALU_OR:   y = a | b;
            ALU_XOR:  y = a ^ b;
            ALU_PASS: y = b;
            default:  y = 16'h0000;
        endcase
    end

    assign zero = (y == 16'h0000);

endmodule
