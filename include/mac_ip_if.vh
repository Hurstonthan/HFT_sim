`ifndef MAC_IP_IF_VH
`define MAC_IP_IF_VH

`include "receiver_pkg.vh"

interface mac_ip_if_vh;

    import receiver_pkg::*;

    //input
    logic valid_mac;
    logic [DATA_SIZE-1:0] data_mac;  
    logic start_mac; //meaning of a new packet
    logic [BYTE_NUMBER-1:0] length_mac;
    logic end_mac;

    //output
    logic valid_ip; //head completed for ip layer
    logic [DATA_SIZE-1:0] data_ip;
    logic [BYTE_NUMBER-1:0] length_ip;
    logic start_ip;
    logic end_ip;
    

    modport mac_ip (
        input valid_mac, data_mac, start_mac, length_mac,
        output valid_ip, data_ip, start_ip, length_ip
    );

    modport tb(
        input valid_ip, data_ip, start_ip, length_ip,
        output valid_mac, data_mac, start_mac, length_mac
    );

endinterface
`endif 