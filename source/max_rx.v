`include "reciver_pkg.vh"
`include "phy_mac_if.vh"
// require the PHY interface as the input of this module
module mac_rx(
    input logic clk, nRST,
    phy_mac_if pmif
);
    import reciever_pkg::*;
    
endmodule