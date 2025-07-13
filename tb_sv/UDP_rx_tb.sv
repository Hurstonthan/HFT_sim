`include "rx_pkg.vh"
`timescale 1ns/1ns
module udp_rx_tb;
import rx_pkg::*;
    parameter PERIOD = 10; 
    logic CLK = 0, nRST;

    logic 
    inital begin
        $dumpfile("waveform.vcd");
        $dumpvars;
    end
endmodule
