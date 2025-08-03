`timescale 1ns/10ps
`include "rx_pkg.sv"

module IP_UDP_rx
#()(
    input logic CLK, nRST,
    input logic MAC_valid,
    input logic [63:0] MAC_payload_rcv,
    input logic MAC_flush,
    input logic [7:0] bytes_rcv_len,

    output logic UDP_valid,
    output logic UDP_flush,
    output logic [63:0] UDP_payload
);
    import rx_pkg::*;
    logic IP_valid, IP_flush;
    logic [63:0] IP_payload;
    logic is_udp, is_tcp;

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

    UDP_rx udp_inst(
        .CLK(CLK),
        .nRST(nRST),
        .IP_valid(IP_valid),
        .IP_flush(IP_flush),
        .IP_payload(IP_payload),
        .is_udp(is_udp),

        .UDP_flush(UDP_flush),
        .UDP_valid(UDP_valid),
        .UDP_payload(UDP_payload)
    );
endmodule
