`ifndef PHY_MAC_IF_VH
`define PHY_MAC_IF_VH

//check with more about the mac layer
`include "reciever_pkg.vh"
interface phy_mac_if_vh;
    import reciever_pkg::*;
    //input
    logic valid_mac;
    logic [DATA_SIZE-1:0] data_mac;  
    logic start_mac; //meaning of a new packet
    logic [LENGTH-1:0] length_mac;
    //output
    logic valid_ip; //head completed for mac layer
    logic [DATA_SIZE-1:0] data_ip;
    logic [LENGTH-1:0] length_ip;
    logic start_ip;

    modport phy_mac (
        input valid_mac, data_mac, start_mac, length_mac,
        output valid_ip, data_ip, start_ip, length_ip
    );

    modport tb(
        input valid_ip, data_ip, start_ip, length_ip,
        output valid_mac, data_mac, start_mac, length_mac
    );
endinterface
`endif 