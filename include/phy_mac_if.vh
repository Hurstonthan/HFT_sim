`ifndef PHY_MAC_IF_VH
`define PHY_MAC_IF_VH

//check with more about the mac layer
`include "reciever_pkg.vh"
interface phy_mac_if_vh;
    import reciever_pkg::*;
    //input
    logic valid_phy;
    logic [DATA_SIZE-1:0] data_phy;  
    logic start_phy; //meaning of a new packet
    logic [BYTE_NUMBER-1:0] length_phy;
    logic end_phy; // end of the packet from the physical layer
    //output
    logic valid_mac; //head completed for mac layer
    logic [DATA_SIZE-1:0] data_mac;
    logic [BYTE_NUMBER-1:0] length_mac;
    logic start_mac;
    logic end_mac;
    logic [31:0] crc_out; // CRC for the packet
    modport phy_mac (
        input valid_phy, data_phy, start_phy, length_phy,
        output valid_mac, data_mac, start_mac, length_mac
    );

    modport tb(
        input valid_mac, data_mac, start_mac, length_mac,
        output valid_phy, data_phy, start_phy, length_phy
    );
endinterface
`endif 