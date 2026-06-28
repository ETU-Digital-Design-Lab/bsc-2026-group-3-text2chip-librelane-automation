// src/top/simple16_system.v
module simple16_system (
    input  wire clk,
    input  wire reset,
    output wire halted,
    output wire [15:0] acc_out
);
    wire [15:0] pc;
    wire [15:0] imem_data;

    wire [15:0] dmem_addr;
    wire [15:0] dmem_wdata;
    wire [15:0] dmem_rdata;
    wire        dmem_we;

    simple16_cpu cpu_inst (
        .clk        (clk),
        .reset      (reset),
        .imem_addr  (pc),
        .imem_data  (imem_data),
        .dmem_addr  (dmem_addr),
        .dmem_wdata (dmem_wdata),
        .dmem_rdata (dmem_rdata),
        .dmem_we    (dmem_we),
        .halted     (halted),
        .acc_out    (acc_out),
        .pc_out     ()
    );

    instr_mem imem_inst (
        .addr (pc),
        .data (imem_data)
    );

    data_mem dmem_inst (
        .clk   (clk),
        .addr  (dmem_addr),
        .wdata (dmem_wdata),
        .rdata (dmem_rdata),
        .we    (dmem_we)
    );

endmodule
