// src/tb/simple16_system_tb.v
`timescale 1ns/1ps

module simple16_system_tb;
    initial begin
        $dumpfile("wave.vcd");
        $dumpvars(0, simple16_system_tb);
    end

    reg clk;
    reg reset;

    wire halted;
    wire [15:0] acc_out;

    // Test edilen sistem
    simple16_system dut (
        .clk    (clk),
        .reset  (reset),
        .halted (halted),
        .acc_out(acc_out)
    );

    // Clock üretimi: 10ns period → 100 MHz
    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    // Test senaryosu
    initial begin
        $display("Test basliyor...");

        reset = 1;
        #20;
        reset = 0;

        // Maks 200 ns bekleyelim
        wait (halted == 1'b1 || $time > 2000);

        $display("Sim sonu: time=%0t ns, halted=%b, ACC=%0d (0x%04h)",
                 $time, halted, acc_out, acc_out);

        if (halted && acc_out == 16'd15) begin
            $display("TEST OK: ACC=15 bekledigimiz gibi.");
        end else begin
            $display("TEST FAIL: ACC beklenenden farkli.");
        end

        #20;
        $finish;
    end
endmodule
