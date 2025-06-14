`ifndef ETHERNET_RX
`ifdef ETHERNET_RX
// `include "ip_udp_if.vh"
// `include ""
// need to change the output logic
`include "reciever_pkg"
interface ethernet_rx_if_vh;
    import receiver_pkg::*;

    //input 
    logic valid_phy;
    logic [DATA_SIZE-1:0] data_phy;  
    logic start_phy; //meaning of a new packet
    logic [BYTE_NUMBER-1:0] length_phy;
    logic end_phy; // end of the packet from the physical layer

    //output - udp layer
    logic valid_udp; //head completed for udp layer
    logic [DATA_SIZE-1:0] data_udp;
    logic [BYTE_NUMBER-1:0] length_udp;
    logic start_udp;

    modport ethernet_rx (
        input valid_phy, data_phy, start_phy, length_phy,
        output valid_udp, data_udp, start_udp, length_udp
    );

    modport tb(
        input valid_udp, data_udp, start_udp, length_udp,
        output valid_phy, data_phy, start_phy, length_phy
    );
endinterface

`endif 