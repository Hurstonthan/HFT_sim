`timescale  1ns/10ps
//`include "rx_pkg.sv"

module ethernet_rx 
#(
    parameter DATA_WIDTH = 64,
    parameter CTRL_WIDTH = 8
)
(
    input logic CLK, nRST,
    input logic [DATA_WIDTH-1:0] xgmii_rxd,
    input logic [CTRL_WIDTH-1:0] xgmii_rxc,
    
    //testing MAC and IP layers 
    output logic IP_valid,
    output logic IP_flush,
    output logic [63:0] IP_payload,
    output logic is_udp,
    output logic is_tcp

    // output logic UDP_flush,
    // output logic UDP_valid,
    // output logic [63:0] UDP_payload
);
    //import rx_pkg::*;
    logic MAC_valid, MAC_flush;
    logic [63:0] MAC_payload_rcv;
    logic [7:0] bytes_rcv_len;
    logic frame_ok;
    // logic IP_valid, IP_flush;
    // logic [63:0] IP_payload;
    // logic is_udp, is_tcp;
    MAC_rx mac_inst (
        .CLK(CLK),
        .nRST(nRST),
        .xgmii_rxd(xgmii_rxd),
        .xgmii_rxc(xgmii_rxc),
        
        .MAC_valid(MAC_valid),
        .CRC_flush(MAC_flush),
        .frame_ok(frame_ok),
        .MAC_payload_rcv(MAC_payload_rcv),
        .bytes_rcv_len(bytes_rcv_len)
    );

    IP_rx ip_inst (
        .CLK(CLK),
        .nRST(nRST),
        .MAC_valid(MAC_valid),
        .MAC_payload_rcv(MAC_payload_rcv),
        .MAC_flush(MAC_flush),
        .bytes_rcv_len(bytes_rcv_len),

        .IP_valid(IP_valid),
        .IP_flush(IP_flush),
        .IP_payload(IP_payload),
        .is_udp(is_udp),
        .is_tcp(is_tcp)
    );

    // UDP_rx udp_inst (
    //     .CLK(CLK),
    //     .nRST(nRST),
    //     .IP_valid(IP_valid),
    //     .IP_flush(IP_flush),
    //     .IP_payload(IP_payload),
    //     .is_udp(is_udp),

    //     .UDP_flush(UDP_flush),
    //     .UDP_valid(UDP_valid),
    //     .UDP_payload(UDP_payload)
    // );

endmodule