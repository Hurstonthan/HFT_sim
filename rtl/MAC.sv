`timescale 1ns/10ps
module MAC #(
    parameter DATA_WIDTH = 64,
    parameter CTRL_WIDTH = 8
) (
    input wire CLK,
    input wire nRST,

    //PHYS interface
    input wire [DATA_WIDTH - 1:0] xgmii_rxd,
    input wire [CTRL_WIDTH - 1:0] xgmi_rxc,
    output wire [DATA_WIDTH -1:0] xgmii_txd,
    output wire [CTRL_WIDTH -1:0] xgmii_txc,

    //IP tx inteface
    input logic [DATA_WIDTH - 1:0] IP_transmit,
    input logic [15:0] TCP_len_data_mc,
    input logic [15:0] bytes_sent_ip_mac,
    output logic IP_send,

    //IP rx interface
    output logic [DATA_WIDTH - 1:0] MAC_payload_rcv,
    output logic MAC_valid,
    output logic CRC_flush,
    output logic frame_ok,
    output logic [7:0] bytes_rcv_len
);

    //MAC TX interface
    MAC_tx mac_tx (
        .CLK(CLK),
        .nRST(nRST),
        .TX_en(TX_en),
        .xgmii_txd(xgmii_txd),
        .xgmii_txc(xgmii_txc),
        .IP_transmit(IP_transmit),
        .TCP_len_data_mc(TCP_len_data_mc),
        .bytes_sent_ip_mac(bytes_sent_ip_mac),
        .IP_send(IP_send)
    );

    MAC_rx mac_rx(
        .CLK(CLK),
        .nRST(nRST),
        .xgmii_rxd(xgmii_rxd),
        .xgmii_rxc(xgmii_rcc),
        .MAC_valid(MAC_valid),
        .CRC_flush(CRC_flush),
        .frame_ok(frame_ok),
        .bytes_rcv_len(bytes_rcv_len)
    );


endmodule