`timescale 1ns/10ps
module IP_UDP_tx #(
    parameter ETHER_TYPE         = 16'h0800,
    parameter WORD_WIDTH         = 64,
    parameter TYPE_OF_SERVICE    = 8'b0, //TOS
    parameter IPV4_VER           = 8'h45,      // IPv4 + header length = 5 words (20 bytes)
    parameter LENGTH             = 16'd20,     // Total IP length (20 bytes IP header + 20 bytes TCP header)
    parameter IP_IDENFICATION    = 16'h0001,   // Example identification
    parameter IP_FLAG_OFFSET     = 16'h4000,   // Don't Fragment flag (DF = 1, offset = 0)
    parameter IP_TLL             = 8'h40,      // Time to Live (64)
    parameter IP_PROTOCOL        = 8'h06,      // TCP protocol number = 6
    parameter IP_PROTOCOL_LEN    = 16'd20,
    parameter IP_SRC_ADDR        = 32'hC0A80101, // 192.168.1.1
    parameter IP_DEST_ADDR       = 32'hC0A80102,  // 192.168.1.2

    parameter UDP_DEST_ADDR = 16'h1234, 
    parameter UDP_SRC_ADDR = 16'h4321, 
    parameter UDP_HEADER_LENGTH = 16'h08, 
    parameter UDP_CHECKSUM = 16'h0000
    
) (
    input logic CLK, nRST,
    input logic valid,
    input logic [15:0] UDP_len,
    input logic [63:0] UDP_payload,
    input logic protocol_last,

    output logic [WORD_WIDTH - 1 : 0] IP_transmit,
    output logic [15:0] tt_len_data,
    output logic IP_last,
    output logic protocol_send
);
    logic [63:0] IP_payload;
    logic UDP_last;
    logic [15:0] IP_len, protocol_Data_len;

    UDP_tx udp_tx_inst(
        .CLK(CLK),
        .nRST(nRST),
        // .valid(valid),
        .valid(protocol_send),
        .UDP_payload(UDP_payload),
        .UDP_len(UDP_len),
        .protocol_last(protocol_last),
        .IP_payload(IP_payload),
        .UDP_last(UDP_last),
        .protocol_Data_len(protocol_Data_len),
        .IP_len(IP_len)
    );

    IP_for_udp_tx ip_tx_inst(
        .CLK(CLK),
        .nRST(nRST),
        .IP_send(valid),
        .protocol_last(UDP_last),
        .len_data(IP_len),
        .protocol_transmit(IP_payload),
        .IP_transmit(IP_transmit),
        .tt_len_data(tt_len_data),
        .IP_last(IP_last),
        .protocol_send(protocol_send)
    );

endmodule