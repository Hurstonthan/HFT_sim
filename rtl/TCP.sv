`timescale 1ns/10ps
`include "TCP_flow_if.vh"
`include "TCP_receiver_if.vh"
module TCP #(
    parameter DATA_WIDTH = 64, // Width of the data bus
    parameter int FIFO_DEPTH  = 10,               // words  (must be power‑of‑2)
    parameter int CTRL_WIDTH = 8,
    localparam int WORD_BYTES = DATA_WIDTH / 8,
    localparam int FIFO_WIDTH = $clog2(FIFO_DEPTH),
    localparam int WINDOW_BYTES = FIFO_DEPTH * WORD_BYTES
) (
    input  logic CLK,          // Clock signal
    input  logic nRST,         // Active low reset signal

    //global transmit TX_en
    input logic TX_en,
    output logic [15:0] checksum_TX, //variable to store transmitted TX
    //Interface between TCP_rcv and IP_rcv
    input  logic IP_valid,     // Indicates if the IP packet is valid
    input  logic IP_flush,     // Flush signal for IP packet
    input  logic [15:0] IP_pseuder, // Pseudo header for TCP
    input  logic [63:0] IP_payload, // Payload of the IP packet
    input  logic IP_last,
    input  logic [7:0] IP_bytes_rcv, // Number of bytes received

    
    
    //Interface between TCP rcv and payload rcv
    output logic nw_segment,
    output logic TCP_rx_last,
    output logic TCP_flush,
    output logic [63:0] axis_data_rx,


    //Interface between TCP_flow_logic and FIFO_rcv side
    output logic handshake_done,
    output logic [31:0] seq_rcv_start,
    output logic wr_FIFO_en,
    output logic [7:0] wr_FIFO_offset,
    output  logic rd_FIFO_valid_rcv,
    output  logic [FIFO_WIDTH - 1:0] rd_FIFO_ptr,
    output  logic [FIFO_WIDTH - 1:0] rd_FIFO_len,
    input  logic [FIFO_WIDTH - 1:0] wr_ptr_out,
    input  logic [FIFO_WIDTH - 1:0] wr_FIFO_len,
    input logic rd_FIFO_en_rcv,
    input logic [31:0] seq_rx_FIFO_rd,
    input logic full,


    //Interface between TCP_flow_logic and FIFO_tx side
    output logic [31:0] ACK_num,
    output logic ACK_rcv_flag,
    output logic out_order_req,
    output logic TCP_stop_flg,
    input logic end_ss,


    

    //Interface between TCP_tx and FIFO
    input logic [63:0] rd_FIFO_payload,
    input logic rd_FIFO_valid_tx,
    input logic rd_FIFO_last,
    input logic [15:0] bytes_abt_sent,
    output logic rd_FIFO_en_tx,
    output logic [31:0] seq_num_tx_out,

    //Interface between TCP_tx and IP_tx
    input  logic        TCP_send,
    output logic        TCP_tx_last,
    output logic [15:0] TCP_len_data,
    output logic [63:0] TCP_transmit,

    input logic re_trans,
    input logic [15:0] checksum_re_trans,

    //Interface between TCP_checksum and FIFO_TX
    input logic wr_FIFO_TX_en,
    input logic wr_axis_last,
    input logic [63:0] soupbin_TCP_payload,


    //DEBUG SIGNALS
    output logic [31:0] rcv_next,
    output logic [31:0] seq_num
);
    
    //Interafce between TCP_rcv and TCP_flow_logic
    logic rcv_data;
    logic [7:0] TCP_control_rx;
    logic [7:0] bytes_rcv;
    logic [31:0] seq_num_rx;
    logic [31:0] ACK_rx;
    logic [3:0] offset_rx;
    logic [15:0] window_size_rx;
    logic [15:0] checksum_rx;
    logic [15:0] urgent_pointer_rx;



    //Interface between TCP_tx and TCP_flow_logic
    logic seq_up;
    logic [7:0] TCP_control_tx;
    logic [31:0] seq_num_tx;
    logic [31:0] ACK_tx;
    logic [31:0] ISN_num;
    logic [31:0] bytes_sent;
    logic [3:0] offset_tx;
    logic [15:0] window_size_tx;
    logic [15:0] urgent_pointer_tx;

    //Instantiate FIFO_TX
    logic [15:0] TCP_basesum_payload;
    logic [15:0] TCP_checksum_out;

    logic timeout_flag;
    logic clear_timeout, count_en_timeout;

    assign checksum_TX = TCP_basesum_payload;
    always_comb begin
        if (re_trans) begin
            TCP_basesum_payload = checksum_re_trans;
        end else begin
            TCP_basesum_payload = TCP_checksum_out;
        end
    end

    assign seq_num_tx_out = seq_num_tx;
    TCP_flow_ctrl tcp_flow (
        .CLK(CLK),
        .nRST(nRST),
        .rcv_data(rcv_data),
        .TCP_control_rx(TCP_control_rx),
        .seq_num_rx(seq_num_rx),
        .ACK_rx(ACK_rx),
        .offset_rx(offset_rx),
        .window_size_rx(window_size_rx),
        .checksum_rx(checksum_rx),
        .urgent_pointer_rx(urgent_pointer_rx),
        ////////////////////

        .end_ss(end_ss),
        .seq_up(seq_up),
        .TCP_control_tx(TCP_control_tx),
        .seq_num_tx(seq_num_tx),
        .ACK_tx(ACK_tx),
        .offset_tx(offset_tx),
        .window_size_tx(window_size_tx),
        .urgent_pointer_tx(urgent_pointer_tx),
        .TCP_stop_flg(TCP_stop_flg),
        .full(full),
        .timeout_flag(timeout_flag),
        .hand_shake_done(handshake_done),
        .seq_rcv_str(seq_rcv_start),
        .ISN_num (ISN_num),
        .bytes_sent(bytes_sent),
        .bytes_abt_sent(bytes_abt_sent),
        .TCP_last (TCP_rx_last),
        .rcv_next_out(rcv_next),
        .seq_num_out(seq_num),
        .seq_rx_FIFO_rd(seq_rx_FIFO_rd),
        //.TCP_bytes_trk(IP_bytes_rcv),
        .TCP_bytes_trk (bytes_rcv),
        .wr_FIFO_offset(wr_FIFO_offset),
        .wr_FIFO_len(wr_FIFO_len),
        .rd_FIFO_len(rd_FIFO_len),
        .wr_FIFO_ptr(wr_ptr_out),
        .rd_FIFO_ptr(rd_FIFO_ptr),
        .wr_FIFO_en(wr_FIFO_en),
        .nw_segment(nw_segment),
        .TCP_flush(TCP_flush),
        .rd_FIFO_en(rd_FIFO_en_rcv),
        .rd_FIFO_valid(rd_FIFO_valid_rcv),
        .ACK_num(ACK_num),
        .ACK_rcv_flag(ACK_rcv_flag),
        .out_order_req(out_order_req),
        .clear_timeout(clear_timeout),
        .count_en_timeout(count_en_timeout)
    );

    TCP_receiver tcp_rcv (
        .CLK(CLK),
        .nRST(nRST),
        .IP_payload_rx(IP_payload),
        .valid_IP_header_rx(IP_valid),
        .IP_flush(IP_flush),
        .IP_last(IP_last),
        .IP_bytes_rcv(IP_bytes_rcv),
        .IP_pseuder(IP_pseuder),
        .bytes_rcv(bytes_rcv),
        .rcv_data(rcv_data),
        .TCP_control_rx(TCP_control_rx),
        .seq_num_rx(seq_num_rx),
        .ACK_rx(ACK_rx),
        .offset_rx(offset_rx),
        .window_size_rx(window_size_rx),
        .checksum_rx(checksum_rx),
        .urgent_pointer_rx(urgent_pointer_rx),
        .TCP_payload_rx(axis_data_rx), // Output payload
        .TCP_valid(rd_FIFO_valid), // Valid signal for the TCP payload
        .TCP_flush(TCP_flush), // Flush signal for TCP

        //output logic add for TCP_flow_ctrl and FIFO
        .nw_segment(nw_segment), // New segment flag
        .TCP_last(TCP_rx_last) // Last segment flag    
    );

    TCP_tx TCP_tx (
        .CLK(CLK),
        .nRST(nRST),
        .TCP_control_tx(TCP_control_tx),
        .seq_num_tx(seq_num_tx),
        .ACK_tx(ACK_tx),
        .offset_tx(offset_tx),
        .window_size_tx(window_size_tx),
        .urgent_pointer_tx(urgent_pointer_tx),
        .rd_FIFO_en(rd_FIFO_en_tx),
        .rd_FIFO_valid (rd_FIFO_valid_tx),
        .rd_FIFO_last (rd_FIFO_last),
        .bytes_abt_sent(bytes_abt_sent),
        .rd_FIFO_payload(rd_FIFO_payload),
        .seq_up(seq_up),
        .bytes_sent(bytes_sent),
        .TCP_send(TCP_send),
        .TCP_transmit(TCP_transmit),
        .TCP_tx_last(TCP_tx_last),
        .TCP_len_data(TCP_len_data),
        .TCP_basesum_payload(TCP_basesum_payload)
    );
    TCP_ISN ISN_gen (
        .CLK(CLK),
        .nRST(nRST),
        .gen_en(1'b0),
        .ISN_num(ISN_num)
    );

    flex_counter #(
        .SIZE(32)
    )timeout_fl (
        .CLK(CLK),
        .nRST(nRST),
        .count_enable(count_en_timeout),
        .clear(clear_timeout),
        .rollover_val(32'd4500),
        .initial_val(32'd0),
        .rollover_flag(timeout_flag)
    ); 
    
    checksum_TCP #(
        .DATA_WIDTH(DATA_WIDTH)
    ) inst (
        .CLK(CLK),
        .nRST(nRST),
        .clear(1'b0),
        .wr_FIFO_en(wr_FIFO_TX_en),
        .axis_last(wr_axis_last),
        .TCP_payload_tx(soupbin_TCP_payload),
        .TX_en(TX_en),
        .re_trans(re_trans),
        .TCP_checksum_out(TCP_checksum_out)
    );




endmodule

