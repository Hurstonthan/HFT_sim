`timescale 1ns/10ps
`include "TCP_flow_if.vh"
`include "TCP_receiver_if.vh"
module TCP #(
    parameter DATA_WIDTH = 64 // Width of the data bus
) (
    input  logic CLK,          // Clock signal
    input  logic nRST,         // Active low reset signal
    
    //TCP_rx interface
    input logic [63:0] IP_payload_rx,
    input logic valid_IP_header_rx,
    input logic IP_flush,
    input logic [15:0] IP_pseuder,
    input logic [15:0] TCP_len,
    output logic [15:0] TCP_len_data,
    output logic [63:0] TCP_payload_rx,
    output logic TCP_valid,
    output logic TCP_flush,
    output logic [31:0] rcv_next,
    output logic [31:0] seq_num,

    //TCP_tx interface
    input logic TCP_send,
    output logic [DATA_WIDTH - 1 : 0] TCP_transmit,
    //TCP_tx_payload
    input logic end_ss,
    input logic [DATA_WIDTH - 1 : 0] TCP_payload_tx,
    input logic [31:0] bytes_abt_sent,
    input logic full,
    output logic rd_en,
    output logic TCP_stop_flg
);

    //TCP_rx variable
    logic [7:0] TCP_control_rx;
    logic [31:0] seq_num_rx;
    logic [31:0] ACK_rx;
    logic [3:0] offset_rx;
    logic [15:0] window_size_rx;
    logic [15:0] checksum_rx;
    logic [15:0] urgent_pointer_rx;
    logic [15:0] IP_length;
    logic rcv_data, TCP_valid, TCP_flush;
    logic [63:0] TCP_payload_rx;

    TCP_flow_if TCP_ctrl();
    TCP_receiver_if TCP_rx();

    assign TCP_rx.IP_payload_rx = IP_payload_rx;
    assign TCP_rx.valid_IP_header_rx = IP_header_rx;
    assign TCP_rx.IP_flush = IP_flush;
    assign TCP_rx.IP_pseuder = IP_pseuder;
    assign TCP_rx.TCP_len = TCP_len;

    assign TCP_ctrl.rcv_data = TCP_rx.rcv_data;
    assign TCP_ctrl.TCP_control_rx = TCP_rx.TCP_control_rx;
    assign TCP_ctrl.seq_num_rx = TCP_rx.seq_num_rx;
    assign TCP_ctrl.ACK_rx = TCP_rx.ACK_rx;
    assign TCP_ctrl.offset_rx = TCP_rx.offset_rx;
    assign TCP_ctrl.window_size_rx = TCP_rx.window_size_rx;
    assign TCP_ctrl.checksum_rx = TCP_rx.checksum_rx;
    assign TCP_ctrl.urgent_pointer_rx = TCP_rx.urgent_pointer_rx;
    assign TCP_ctrl.payload_len_rx = TCP_rx.payload_len_rx;
    assign rcv_next = TCP_ctrl.rcv_next;
    assign seq_num = TCP_ctrl.seq_num;

    assign TCP_payload_rx = TCP_rx.TCP_payload_rx;
    assign TCP_len_data = TCP_rx.TCP_len_data;
    assign TCP_valid  = TCP_rx.TCP_valid;
    assign TCP_flush  = TCP_rx.TCP_flush;
    

    TCP_receiver TCP_rx_inst (
        .CLK(CLK),
        .nRST(nRST),
        .TCP_rx(TCP_rx)
    );

    logic [7:0] TCP_control_tx;
    logic [31:0] seq_num_tx;
    logic [31:0] ACK_tx;
    logic [3:0] offset_tx;
    logic [15:0] window_size_tx;
    logic [15:0] urgent_pointer_tx;
    logic seq_up;
    logic [31:0] bytes_sent;
    logic [15:0] TCP_basesum_payload;
    

    assign TCP_control_tx = TCP_ctrl.TCP_control_tx;
    assign seq_num_tx = TCP_ctrl.seq_num_tx;
    assign ACK_tx = TCP_ctrl.ACK_tx;
    assign offset_tx = TCP_ctrl.offset_tx;
    assign window_size_tx = TCP_ctrl.window_size_tx;
    assign urgent_pointer_tx = TCP_ctrl.urgent_pointer_tx;
    


    TCP_tx #(
    .DATA_WIDTH(64),
    .OFF_SET(5),
    .SRC_PORT(16'h1234),
    .DEST_PORT(16'h5678)
    ) tcp_tx_inst (
        .CLK(CLK),
        .nRST(nRST),
        .TCP_control_tx(TCP_control_tx),
        .seq_num_tx(seq_num_tx),
        .ACK_tx(ACK_tx),
        .offset_tx(offset_tx),
        .window_size_tx(window_size_tx),
        .urgent_pointer_tx(urgent_pointer_tx),
        .bytes_abt_sent(bytes_abt_sent),
        .seq_up(seq_up),
        .bytes_sent(bytes_sent),
        .rd_en(rd_en),
        .TCP_send(TCP_send),
        .TCP_basesum_payload(TCP_basesum_payload),
        .TCP_payload_tx(TCP_payload_tx),
        .TCP_transmit(TCP_transmit)
    );

    logic timeout_flag;
    logic [31:0] ISN_num;

    TCP_ISN ISN_gen (
        .CLK(CLK),
        .nRST(nRST),
        .gen_en(seq_up),
        .ISN_num (ISN_num)
    );

    assign TCP_ctrl.ISN_num = ISN_num;
    assign TCP_ctrl.end_ss = end_ss;
    assign TCP_ctrl.bytes_sent = bytes_sent;
    assign TCP_ctrl.seq_up = seq_up;
    assign TCP_ctrl.full = full;
    assign TCP_stop_flg = TCP_ctrl.TCP_stop_flg;


    TCP_flow_ctrl ctrl (
        .CLK(CLK),
        .nRST(nRST),
        .myrx(TCP_ctrl.rx), // bind modports
        .mytx(TCP_ctrl.tx)  // bind modports
    );

    chksum_tcp_pl #(
        .DATA_WIDTH(DATA_WIDTH)
    ) chksum_tcp_pl_inst (
        .CLK(CLK),
        .nRST(nRST),
        .FIFO_rd_en(rd_en),
        .TCP_payload_tx(TCP_payload_tx), // Data to be processed
        .TCP_checksum_pl(TCP_basesum_payload) // Payload data to be sent   
    );


endmodule

