`timescale 1ns/10ps
`include "rx_pkg.sv"
module MAC_IP_UDP_rx #(
    parameter DATA_WIDTH = 64,
    parameter CTRL_WIDTH = 8,
    parameter MAC_DEST_ADDR = 48'hFFFF_FFCC_BBAA, 
    parameter MAC_SRC_ADDR = 48'hAACC_BBFF_FFFF,
    parameter ETHER_TYPE_MSB = 16'h0008,
    parameter CRC_MAGIC = 32'hC704_DD7B
)
(
    input logic CLK, nRST,
    input logic [DATA_WIDTH - 1:0] xgmii_rxd,
    input logic [CTRL_WIDTH - 1:0] xgmii_rxc,

    output logic UDP_flush,
    output logic UDP_valid,
    output logic [63:0] UDP_payload 
);
    import rx_pkg::*;
    logic IP_valid, IP_flush;
    logic [63:0] IP_payload;
    logic is_udp, is_tcp;
    logic MAC_valid, CRC_flush, frame_ok;
    logic [63:0] MAC_payload_rcv;
    logic [7:0] bytes_rcv_len;

    MAC_rx mac_inst (
        .CLK(CLK),
        .nRST(nRST),
        .xgmii_rxd(xgmii_rxd),
        .xgmii_rxc(xgmii_rxc),

        .MAC_valid(MAC_valid),
        .CRC_flush(CRC_flush),
        .frame_ok(frame_ok),
        .MAC_payload_rcv(MAC_payload_rcv),
        .bytes_rcv_len(bytes_rcv_len)
    );

    IP_rx ip_inst (
        .CLK(CLK),
        .nRST(nRST),
        .MAC_valid(MAC_valid),
        .MAC_payload_rcv(MAC_payload_rcv),
        .MAC_flush(CRC_flush),
        .bytes_rcv_len(bytes_rcv_len),

        .IP_valid(IP_valid),
        .IP_flush(IP_flush),
        .IP_payload(IP_payload),
        .is_udp(is_udp),
        .is_tcp(is_tcp)
    );

    UDP_rx udp_inst (
        .CLK(CLK),
        .nRST(nRST),
        .IP_valid(IP_valid),
        .IP_payload(IP_payload),
        .IP_flush(IP_flush),
        .is_udp(is_udp),

        .UDP_valid(UDP_valid),
        .UDP_payload(UDP_payload),
        .UDP_flush(UDP_flush)
    );
endmodule