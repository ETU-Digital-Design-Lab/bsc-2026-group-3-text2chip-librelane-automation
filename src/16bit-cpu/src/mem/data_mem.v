// src/mem/data_mem.v
module data_mem (
    input  wire        clk,
    input  wire [15:0] addr,
    input  wire [15:0] wdata,
    output reg  [15:0] rdata,
    input  wire        we
);
    reg [15:0] ram [0:15];  // 16 kelimelik küçük RAM

    // Okuma: kombi
    always @* begin
        rdata = ram[addr[3:0]];  // 4-bit adres
    end

    // Yazma: senkron
    always @(posedge clk) begin
        if (we) begin
            ram[addr[3:0]] <= wdata;  // 4-bit adres
        end
    end

endmodule
