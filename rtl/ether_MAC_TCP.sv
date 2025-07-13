`timescale 1ns/1ps

module ether_MAC_TCP#(
    parameter DATA_WIDTH = 64,
    parameter CTRL_WIDTH = 8,
    parameter FIFO_DEPTH = 16384,
    parameter FIFO_WIDTH = $clog2(FIFO_DEPTH)
) (
    //Question: Where are these signals comre from
    input wire CLK,
    input wire nRST,
    

    //Interface connecting the Payload logic
    input logic [DATA_WIDTH - 1:0] TCP_data_out,
    input logic [31:0] bytes_buff,
    input logic full,
    output logic nw_segment,
    output logic hand_shake_done,
    output logic [DATA_WIDTH - 1:0] TCP_payload_rcv,
    output logic [31:0] seq_rcv,
    output logic [31:0] ISN_num_rcv,
    output logic [31:0] payload_len,
    



    //Interface of the RX path currently is missing 

    //Interface connecting the Ether PSY 
    output wire [DATA_WIDTH - 1 : 0] xgmii_txd,
    output wire [CTRL_WIDTH - 1 : 0] xgmii_txc
);

    

    // variable for mac_tx module
    logic [DATA_WIDTH - 1:0] IP_transmit;
    logic [15:0] TCP_len_data_mc;
    logic [15:0] bytes_sent_ip_mac;
    logic IP_send;

    // variable for IP_tx module
    logic [15:0] TCP_len_data,
    logic [15:0] bytes_sent_tcp_ip,
    logic [DATA_WIDTH - 1 : 0] TCP_transmit,
    logic TCP_send,
    logic [15:0] bytes_sent_ip_mac,


    logic TCP_payload_done;
    logic IP_done;




    // Instantiate the ethernet_mac_tx module
    ethernet_mac_tx #(
        .DATA_WIDTH(DATA_WIDTH),
        .CTRL_WIDTH(CTRL_WIDTH),
        .MAC_SRC_ADDR(MAC_SRC_ADDR),
        .MAC_DEST_ADDR(MAC_DEST_ADDR)
    ) eth_mac_tx_inst (
        .CLK(CLK),
        .nRST(nRST),
        .TX_en(TX_en),
        .xgmii_txd(xgmii_txd),
        .xgmii_txc(xgmii_txc),
        .IP_transmit(IP_transmit),
        .TCP_len_data_mc(TCP_len_data_mc),
        .bytes_sent_ip_mac(bytes_sent_ip_mac),
        .IP_send(IP_send),
        .IP_done(IP_done)
    );

    //Instantiate the IP module
    IP_tx ip_tx_inst (
        .CLK(CLK),
        .nRST(nRST),
        .IP_send(IP_send),
        .TCP_len_data(TCP_len_data),
        .bytes_sent_tcp_ip(bytes_sent_tcp_ip),
        .TCP_transmit(TCP_transmit),
        .IP_transmit(IP_transmit),
        .TCP_send(TCP_send),
        .bytes_sent_ip_mac(bytes_sent_ip_mac),
        .TCP_len_data_mc(TCP_len_data_mc),
        .IP_done(IP_done)
    );


    //Instantiate the TCP module, this is missing you need to do this
    logic [DATA_WIDTH - 1:0] TCP_transmit;
    logic TCP_send;
    logic TCP_stop_flg, nw_segment, hand_shake_done;
    logic [DATA_WIDTH - 1:0] TCP_payload_rcv;
    logic [31:0] seq_rcv, ISN_num_rcv, payload_len;
    logic FIFO_rd_en;
    logic end_ss;
    logic [DATA_WIDTH - 1:0] FIFO_TCP_payload;
    logic [31:0] bytes_abt_sent;
    

    TCP TCP_dut (
        .CLK(CLK),
        .nRST(nRST),
        .TCP_transmit(TCP_transmit),
        .TCP_send(TCP_send),
        .TCP_stop_flg(TCP_stop_flg),
        .nw_segment(nw_segment),
        .hand_shake_done(hand_shake_done),
        .TCP_payload_rcv(TCP_payload_rcv),
        .seq_rcv(seq_rcv),
        .ISN_num_rcv(ISN_num_rcv),
        .TCP_len_data(TCP_len_data),
        .full(full),
        .FIFO_rd_en(FIFO_rd_en),
        .FIFO_TCP_payload(FIFO_TCP_payload),
        .bytes_abt_sent(bytes_abt_sent),
        .end_ss(end_ss),
        .TCP_payload_done(TCP_payload_done)
    );




endmodule
