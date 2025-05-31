`ifndef MAC_IP_IF_VH
`define MAC_IP_IF_VH

`include "reciever_pkg.vh"
interface mac_ip_if_vh;

    import reciever_pkg::*;

    //input
    logic valid_ip;
    logic [DATA_SIZE-1:0] data_ip;  
    logic start_ip; //meaning of a new packet
    logic [LENGTH-1:0] length_ip;

    //output
    logic valid_udp; //head completed for ip layer
    logic [DATA_SIZE-1:0] data_udp;
    logic [LENGTH-1:0] length_udp;
    logic start_udp;
    logic end_udp;

    modport mac_ip (
        input valid_ip, data_ip, start_ip, length_ip,
        output valid_udp, data_udp, start_udp, length_udp
    );

    modport tb(
        input valid_udp, data_udp, start_udp, length_udp,
        output valid_ip, data_ip, start_ip, length_ip
    );

endinterface;