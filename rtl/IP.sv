`timescale  1ns /10ps

module IP #(
    WORD_WIDTH = 64
) (
    input wire CLK,
    input wire nRST,

    //IP_tx interface
    input logic IP_send,
    input logic TCP_done,
    input logic [15:0] TCP_len_data,
    input logic [WORD_WIDTH - 1 : 0] TCP_transmit,
    output logic [WORD_WIDTH - 1 : 0] IP_transmit,
    output logic TCP_send,

    //IP_rx interface
    input logic MAC_valid,
    input logic [63:0] MAC_payload_rcv,
    input logic MAC_flush,
    input logic [7:0] bytes_rcv_len,
    output logic IP_valid,
    output logic IP_flush,
    output logic [15:0] IP_pseuder,
    output logic [63:0] IP_payload,
    output logic [15:0] TCP_len
);


    IP_rx ip_rx_inst (
    .CLK(CLK),
    .nRST(nRST),
    .MAC_valid(MAC_valid),
    .MAC_payload_rcv(MAC_payload_rcv),
    .MAC_flush(CRC_flush),              // Note: renamed signal
    .bytes_rcv_len(bytes_rcv_len),
    .IP_valid(IP_valid),
    .IP_flush(IP_flush),
    .IP_pseuder(IP_pseuder),
    .IP_payload(IP_payload),
    .TCP_len(TCP_len)
    );

    IP_tx #(
        .WORD_WIDTH(64),
        .IPV4_VER(8'h45),            // IPv4 + header length
        .LENGTH(16'd40),             // 20B IP header + 20B TCP
        .IP_IDENFICATION(16'h0001),
        .IP_FLAG_OFFSET(16'h4000),   // DF = 1, offset = 0
        .IP_TLL(8'h40),              // TTL = 64
        .IP_PROTOCOL(8'h06),         // TCP = 0x06
        .IP_SRC_ADDR(32'hC0A80101),  // 192.168.1.1
        .IP_DEST_ADDR(32'hC0A80102)  // 192.168.1.2
    ) ip_tx_inst (
        .CLK(CLK),
        .nRST(nRST),
        .IP_send(IP_send),
        .TCP_done(TCP_done),
        .TCP_len_data(TCP_len_data),
        .TCP_transmit(TCP_transmit),
        .IP_transmit(IP_transmit),
        .TCP_send(TCP_send)
    );


endmodule