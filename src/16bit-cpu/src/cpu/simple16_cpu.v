// src/cpu/simple16_cpu.v

// src/cpu/simple16_cpu.v

module simple16_cpu (
    input  wire        clk,
    input  wire        reset,

    // Instruction memory (read-only arayüz)
    output wire [15:0] imem_addr,
    input  wire [15:0] imem_data,

    // Data memory (read/write arayüz)
    output reg  [15:0] dmem_addr,
    output reg  [15:0] dmem_wdata,
    input  wire [15:0] dmem_rdata,
    output reg         dmem_we,

    // Debug/durum
    output wire        halted,
    output wire [15:0] acc_out,
    output wire [15:0] pc_out
);

    // Ana register'lar
    reg [15:0] pc;
    reg [15:0] acc;
    reg        halted_r;

    assign halted = halted_r;
    assign acc_out = acc;
    assign pc_out  = pc;

    assign imem_addr = pc;

    // Instruction alanları
    wire [3:0]  opcode  = imem_data[15:12];
    wire [11:0] operand = imem_data[11:0];
    wire [15:0] op_ext  = {4'b0000, operand};

    // ALU
    reg  [2:0]  alu_op;
    wire [15:0] alu_y;
    wire        alu_zero;

    alu16 alu_inst (
        .a(acc),
        .b(op_ext),
        .op(alu_op),
        .y(alu_y),
        .zero(alu_zero)
    );

    // Opcode sabitleri
    localparam OP_NOP   = 4'b0000;
    localparam OP_LDI   = 4'b0001;
    localparam OP_ADDI  = 4'b0010;
    localparam OP_LOAD  = 4'b0011;
    localparam OP_STORE = 4'b0100;
    localparam OP_HALT  = 4'b1111;

    // Next-state sinyalleri
    reg [15:0] next_pc;
    reg [15:0] next_acc;
    reg        next_halted;

    reg        next_dmem_we;
    reg [15:0] next_dmem_addr;
    reg [15:0] next_dmem_wdata;

    // Kombinasyonel kontrol
    always @* begin
        // Varsayılanlar: bir şey yapma
        next_pc       = pc;
        next_acc      = acc;
        next_halted   = halted_r;

        next_dmem_we    = 1'b0;
        next_dmem_addr  = dmem_addr;
        next_dmem_wdata = dmem_wdata;

        alu_op = 3'b101; // default PASS (şimdilik LDI için kullanacağız)

        if (!halted_r) begin
            // Default: PC bir sonrakine geçsin
            next_pc = pc + 16'd1;

            case (opcode)
                OP_NOP: begin
                    // hi̇çbi̇r şey yapma
                end

                OP_LDI: begin
                    // ACC <- imm
                    alu_op  = 3'b101;   // PASS B
                    next_acc = op_ext;  // direkt immediate
                end

                OP_ADDI: begin
                    // ACC <- ACC + imm
                    alu_op   = 3'b000;  // ADD
                    next_acc = alu_y;
                end

                OP_LOAD: begin
                    // ACC <- MEM[addr]
                    next_dmem_addr = op_ext;
                    // data_mem combinational read varsayıyoruz
                    next_acc       = dmem_rdata;
                end

                OP_STORE: begin
                    // MEM[addr] <- ACC
                    next_dmem_addr  = op_ext;
                    next_dmem_wdata = acc;
                    next_dmem_we    = 1'b1;
                end

                OP_HALT: begin
                    next_halted = 1'b1;
                end

                default: begin
                    // tanımsız → NOP gibi
                end
            endcase
        end
    end

    // Senkron state güncelleme
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            pc        <= 16'd0;
            acc       <= 16'd0;
            halted_r  <= 1'b0;

            dmem_we    <= 1'b0;
            dmem_addr  <= 16'd0;
            dmem_wdata <= 16'd0;
        end else begin
            pc        <= next_pc;
            acc       <= next_acc;
            halted_r  <= next_halted;

            dmem_we    <= next_dmem_we;
            dmem_addr  <= next_dmem_addr;
            dmem_wdata <= next_dmem_wdata;
        end
    end

endmodule
