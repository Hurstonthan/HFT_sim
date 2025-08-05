`timescale 1ns/1ps

module top #(
    parameter int DATA_WIDTH    = 64,
    parameter int FIFO_DEPTH_TX = 16,
    parameter int FIFO_DEPTH_RX = 16,
    parameter int CTRL_WIDTH    = 8
) (
    input  logic                           CLK,
    input  logic                           nRST,
    input logic [7:0] tb_count,

    //MAC
    output wire [WORD_WIDTH - 1:0] xgmii_txd,
    output wire [CTRL_WIDTH - 1:0] xgmii_txc,
    output logic frame_end,
    
    //RX
    input  logic                           IP_valid,
    input  logic                           IP_flush,
    input  logic [15:0]                    IP_pseuder,
    input  logic [63:0]                    IP_payload,
    input  logic [15:0]                    TCP_len,
    input  logic [7:0]                     IP_bytes_rcv,

    input  logic                           axis_last,
    input  logic                           wr_FIFO_en,
    input  logic [31:0]                    len_seq,
    input  logic [DATA_WIDTH-1:0]          soupbin_TCP_payload,
    
    input  logic                           axis_r_en,
    output logic                           axis_r_valid,
    output logic [DATA_WIDTH-1:0]          axis_rd_data,
    
    output logic                           TCP_stop_flag,
    output logic [31:0]                    rcv_next,
    output logic [31:0]                    seq_num,
    output logic wr_FIFO_full
);

    //The interface between IP_tx and MAC_tx
    logic IP_send, IP_tx_last;
    logic [DATA_WIDTH - 1:0] IP_transmit;
    logic tt_len_data;
    
    //The interface between TCP_tx and IP_tx
    logic TCP_send, TCP_tx_valid, TCP_tx_last;
    logic [15:0] TCP_len_data;
    logic [DATA_WIDTH - 1:0] TCP_transmit;

    // --------------------------------------------------------------
    // Derived constants
    // --------------------------------------------------------------
    localparam int FIFO_WIDTH_TX = $clog2(FIFO_DEPTH_TX);
    localparam int FIFO_WIDTH_RX = $clog2(FIFO_DEPTH_RX);

    // --------------------------------------------------------------
    // Internal nets
    // --------------------------------------------------------------

    
    logic                    nw_segment;
    logic                    TCP_rx_last;
    logic                    TCP_flush_int;
    logic [63:0]             axis_data_rx_int;
    logic                    handshake_done_int;
    logic [31:0]             seq_rcv_start_int;
    logic                    wr_pfifo_en_int;
    logic [7:0]              wr_pfifo_offset_int;
    logic [FIFO_WIDTH_RX-1:0]wr_ptr_out_int;
    logic [FIFO_WIDTH_RX-1:0]wr_pfifo_len_int;
    logic                    rd_pfifo_valid_int;
    logic [FIFO_WIDTH_RX-1:0]rd_pfifo_ptr_int;
    logic [FIFO_WIDTH_RX-1:0]rd_pfifo_len_int;
    logic                    rd_pfifo_en_int;
    logic [31:0]             seq_rx_FIFO_rd_int;

    
    logic                    rd_ftx_en_int;
    logic [63:0]             rd_ftx_payload_int;
    logic                    rd_ftx_valid_int;
    logic                    rd_ftx_last_int;
    logic [15:0]             bytes_abt_sent_int;

    logic [31:0]             ACK_num_int;
    logic                    ACK_rcv_flag_int;
    logic                    out_order_req_int;
    logic                    TCP_stop_flg_int;

    logic                    end_ss_int;
    logic                    re_trans_int;
    logic [15:0]             checksum_re_trans_int;

    logic        seq_up;
    logic [31:0] seq_num_tx;
    logic [15:0] checksum_TX;
    logic        full;
    logic        rd_FIFO_valid_tx;
    logic        rd_FIFO_last;
    logic [DATA_WIDTH-1:0] rd_FIFO_payload;
    logic [15:0] bytes_abt_sent;

    
    // Output mapping to top level
    assign rd_FIFO_valid_tx = rd_ftx_valid_int;
    assign rd_FIFO_last     = rd_ftx_last_int;
    assign rd_FIFO_payload  = rd_ftx_payload_int;
    assign bytes_abt_sent   = bytes_abt_sent_int;
    assign TCP_stop_flag    = TCP_stop_flg_int;   

    // ---------------- MAC ----------------
    MAC_tx mac_tx (
        .CLK(CLK),
        .nRST(nRST),
        .TX_en(TX_en),
        .xgmii_txd(xgmii_txd),
        .xgmii_txc(xgmii_txc),
        .tt_len_data(tt_len_data),
        .IP_transmit(IP_transmit),
        .IP_send(IP_send),
        .IP_last(IP_last),
        .frame_end(frame_end)
    );
    
    // ---------------- IP ----------------
    IP_tx ip_tx (
        .CLK(CLK),
        .nRST(nRST),
        .IP_send(IP_send),
        .IP_transmit(IP_transmit),
        .IP_last(IP_last),
        .tt_len_data(tt_len_data),
        .len_data(TCP_len_data),
        .protocol_send(TCP_send),
        .protocol_last(TCP_tx_last),
        .protocol_transmit(TCP_transmit)
    );

    // ---------------- TCP ----------------
    TCP #(
        .DATA_WIDTH  (DATA_WIDTH),
        .FIFO_DEPTH  (FIFO_DEPTH_RX),
        .CTRL_WIDTH  (CTRL_WIDTH)
    ) u_tcp (
        .CLK                (CLK),
        .nRST               (nRST),

        // Global TX enable
        .TX_en              (TX_en),
        .checksum_TX         (checksum_TX),

        // IP receive interface
        .IP_valid           (IP_valid),
        .IP_flush           (IP_flush),
        .IP_pseuder         (IP_pseuder),
        .IP_payload         (IP_payload),
        .TCP_len            (TCP_len),
        .IP_bytes_rcv       (IP_bytes_rcv),

        // Data out to payload FIFO
        .nw_segment         (nw_segment),
        .TCP_rx_last        (TCP_rx_last),
        .TCP_flush          (TCP_flush_int),
        .axis_data_rx       (axis_data_rx_int),

        // Control out to payload FIFO
        .handshake_done     (handshake_done_int),
        .seq_rcv_start      (seq_rcv_start_int),
        .wr_FIFO_en         (wr_pfifo_en_int),
        .wr_FIFO_offset     (wr_pfifo_offset_int),

        
        .rd_FIFO_valid_rcv  (rd_pfifo_valid_int),
        .rd_FIFO_ptr        (rd_pfifo_ptr_int),
        .rd_FIFO_len        (rd_pfifo_len_int),
        .wr_ptr_out         (wr_ptr_out_int),
        .wr_FIFO_len        (wr_pfifo_len_int),
        .rd_FIFO_en_rcv     (rd_pfifo_en_int),
        .seq_rx_FIFO_rd     (seq_rx_FIFO_rd_int),
        .full               (full),

        
        .ACK_num            (ACK_num_int),
        .ACK_rcv_flag       (ACK_rcv_flag_int),
        .out_order_req      (out_order_req_int),
        .TCP_stop_flg       (TCP_stop_flg_int),
        .end_ss             (end_ss_int),

        // TX data input from FIFO_TX
        .rd_FIFO_payload    (rd_ftx_payload_int),
        .rd_FIFO_valid_tx   (rd_ftx_valid_int),
        .rd_FIFO_last       (rd_ftx_last_int),
        .bytes_abt_sent     (bytes_abt_sent_int),
        .rd_FIFO_en_tx      (rd_ftx_en_int),
        .seq_num_tx_out(seq_num_tx),

        // IP transmit handshake
        .TCP_send           (TCP_send),
        .TCP_len_data       (TCP_len_data),
        .TCP_tx_last           (TCP_tx_last),
        .TCP_transmit       (TCP_transmit),

        // Retransmission feedback
        .re_trans           (re_trans_int),
        .checksum_re_trans  (checksum_re_trans_int),

        //FIFO_TX soupbin_TCP interface
        .wr_FIFO_TX_en(wr_FIFO_en),
        .wr_axis_last(axis_last),
        .soupbin_TCP_payload(soupbin_TCP_payload),

        // Debug
        .rcv_next           (rcv_next),
        .seq_num            (seq_num)
    );

    // ------------- payload_FIFO (RX buffer) -------------
    payload_FIFO #(
        .FIFO_DEPTH (FIFO_DEPTH_RX),
        .DATA_WIDTH (DATA_WIDTH),
        .CTRL_WIDTH (CTRL_WIDTH)
    ) u_payload_fifo (
        .CLK                (CLK),
        .nRST               (nRST),

        // Write side (from TCP receiver)
        .nw_segment         (nw_segment),
        .TCP_flush          (TCP_flush_int),
        .axis_t_last        (TCP_rx_last),
        .axis_data_rx       (axis_data_rx_int),

        .handshake_done     (handshake_done_int),
        .seq_rcv_start      (seq_rcv_start_int),
        .wr_FIFO_en         (wr_pfifo_en_int),
        .wr_FIFO_offset     (wr_pfifo_offset_int),
        .wr_ptr_out         (wr_ptr_out_int),
        .wr_FIFO_len        (wr_pfifo_len_int),

        // Read side control from TCP flow logic
        .rd_FIFO_valid      (rd_pfifo_valid_int),
        .rd_FIFO_ptr        (rd_pfifo_ptr_int),
        .rd_FIFO_len        (rd_pfifo_len_int),
        .rd_FIFO_en         (rd_pfifo_en_int),
        .seq_rx_FIFO_rd     (seq_rx_FIFO_rd_int),
        .full               (full),

        // Application read port
        .axis_r_en          (axis_r_en),
        .axis_r_valid       (axis_r_valid),
        .axis_rd_data       (axis_rd_data)
    );

    // ------------- FIFO_TX (TX buffer) -------------
    FIFO_TX #(
        .DATA_WIDTH (DATA_WIDTH),
        .FIFO_DEPTH (FIFO_DEPTH_TX)
    ) u_fifo_tx (
        .CLK                (CLK),
        .nRST               (nRST),

        // Application write path
        .seq_up             (seq_up),
        .seq_num_tx         (seq_num_tx),
        .hand_shake_done    (handshake_done_int),

        .rd_FIFO_en         (rd_ftx_en_int),
        .TX_en              (TX_en),
        .checksum_TX        (checksum_TX),

        // SoupBinTCP payload (from application)
        .axis_last          (axis_last),
        .wr_FIFO_en         (wr_FIFO_en),
        .len_seq            (len_seq),
        .soupbin_TCP_payload(soupbin_TCP_payload),

        
        .ACK_num            (ACK_num_int),
        .ACK_rcv_flag       (ACK_rcv_flag_int),
        .out_order_req      (out_order_req_int),

        // Status outputs to TCP / wrapper
        .rd_FIFO_valid      (rd_ftx_valid_int),
        .rd_FIFO_last       (rd_ftx_last_int),
        .rd_FIFO_payload    (rd_ftx_payload_int),
        .bytes_abt_sent     (bytes_abt_sent_int),
        .TCP_stop_flag      (TCP_stop_flg_int),
        .end_ss             (end_ss_int),

        // Retransmission feedback to TCP
        .re_trans           (re_trans_int),
        .checksum_re_trans  (checksum_re_trans_int),

        // (Optional) FIFO full flag – unused at top level
        .wr_FIFO_valid      (wr_TX_full)
    );

endmodule
