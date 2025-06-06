`include "phy_mac_if.vh"
`include "receiver_pkg.vh"

timescale 1ns / 1ns

module mac_rx_tb;
import receiver_pkg::*;
    parameter PERIOD = 10; // Clock period in ns
    logic clk = 0, nRST;

    // interface
    mac_ip_if_vh mipif();
    
    //test program
    test PROG (clk, nRST, mipif)

    // clock generation
    mac_rx (clk, nRST, mipif);
endmodule

// test program
program test(
    input logic clk,
    output logic nRST,
    mac_ip_if_vh mipif
);

initial begin
        
end
endprogram
