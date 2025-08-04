`timescale 1ns /10ps

module MAC_IP_tx #(
    parameter WORD_WIDTH = 64,
    parameter CTRL_WIDTH = 8,
    parameter MAC_SRC_ADDR  = 48'h FFFF_FFCC_BBAA,
    parameter MAC_DEST_ADDR = 48'h AACC_BBFF_FFFF,
    parameter ETHER_TYPE         = 16'h0800   // IPv4 EtherType
)(
    input wire CLK,
    input wire nRST,

    //Interface of MAC_TX
    input logic TX_en,
    output wire [WORD_WIDTH - 1:0] xgmii_txd,
    output wire [CTRL_WIDTH - 1:0] xgmii_txc,

    //Interface of IP_TX
    input logic protocol_last,
    input logic [15:0] len_data,
    input logic [WORD_WIDTH - 1 : 0] protocol_transmit,
    output logic protocol_send
);

    //MAC_TX and IP_TX interface
    logic IP_send;
    logic [WORD_WIDTH - 1:0] IP_transmit;
    logic [15:0] tt_len_data, IP_last;

    MAC_tx mac_isnt (
        .CLK(CLK),
        .nRST(nRST),
        .TX_en(TX_en),
        .xgmii_txd(xgmii_txd),
        .xgmii_txc(xgmii_txc),
        .IP_send(IP_send),
        .IP_transmit(IP_transmit),
        .tt_len_data(tt_len_data),
        .IP_last(IP_last)
    );

    IP_tx ip_tx_inst (
        .CLK(CLK),
        .nRST(nRST),
        .IP_send(IP_send),
        .protcol_last(protocol_last),
        .len_data(len_data),
        .protocol_transmit(protocol_transmit),
        .IP_transmit(IP_transmit),
        .tt_len_data(tt_len_data),
        .IP_last(IP_last),
        .protocol_send(protocol_send)
    );





endmodule


