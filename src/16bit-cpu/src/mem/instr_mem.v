// src/mem/instr_mem.v
module instr_mem (
    input  wire [15:0] addr,
    output reg  [15:0] data
);
    // Opcode sabitleri
    localparam OP_NOP   = 4'b0000;
    localparam OP_LDI   = 4'b0001;
    localparam OP_ADDI  = 4'b0010;
    localparam OP_LOAD  = 4'b0011;
    localparam OP_STORE = 4'b0100;
    localparam OP_HALT  = 4'b1111;

    always @* begin
        case (addr[7:0])
            8'd0: data = {OP_LDI,   12'h005}; // ACC = 5
            8'd1: data = {OP_ADDI,  12'h00A}; // ACC += 10 -> 15
            8'd2: data = {OP_STORE, 12'h00F}; // MEM[0x0F] = 15 (adres 15)
            8'd3: data = {OP_LDI,   12'h000}; // ACC = 0
            8'd4: data = {OP_LOAD,  12'h00F}; // ACC = MEM[0x0F] -> 15
            8'd5: data = {OP_HALT,  12'h000};
            default: data = {OP_NOP, 12'h000};
        endcase
    end

endmodule
