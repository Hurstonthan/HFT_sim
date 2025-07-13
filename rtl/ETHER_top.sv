`timescale 1ns/10ps

module ETHER_top #(
    parameter DATA_WIDTH = 64,
    parameter CTRL_WIDTH = 8
) (
    //PHYS interface
    input wire [DATA_WIDTH - 1:0] xgmii_rxd,
    input wire [CTRL_WIDTH - 1:0] xgmi_rxc,
    output wire [DATA_WIDTH -1:0] xgmii_txd,
    output wire [CTRL_WIDTH -1:0] xgmii_txc


    //PAYLOAD interface
    //ITCH/OUCH interface
);

    //MAC logic variable
    logic [DATA_WIDTH - 1:0] IP_transmit;
    logic [15:0] TCP_len_data_mc;
    logic [15:0] bytes_sent_ip_mac;
    logic IP_send;
    logic [DATA_WIDTH - 1:0] MAC_payload_rcv;
    logic MAC_valid;
    logic CRC_flush;
    logic frame_ok;
    logic [7:0] bytes_rcv_len;



    //MAC interface
    MAC #(
        .DATA_WIDTH(DATA_WIDTH),
        .CTRL_WIDTH(CTRL_WIDTH)
    ) mac_inst (
        .CLK(CLK),
        .nRST(nRST),
        .xgmii_rxd(xgmii_rxd),
        .xgmi_rxc(xgmi_rxc),
        .xgmii_txd(xgmii_txd),
        .xgmii_txc(xgmii_txc),
        .IP_transmit(IP_transmit),
        .TCP_len_data_mc(TCP_len_data_mc),
        .bytes_sent_ip_mac(bytes_sent_ip_mac),
        .IP_send(IP_send),
        .MAC_payload_rcv(MAC_payload_rcv),
        .MAC_valid(MAC_valid),
        .CRC_flush(CRC_flush),
        .frame_ok(frame_ok),
        .bytes_rcv_len(bytes_rcv_len)
    );


    //IP logic variables
    // IP_tx inputs
    logic IP_send;
    logic TCP_done;
    logic [15:0] TCP_len_data;
    logic [63:0] TCP_transmit;

    // IP_tx outputs
    logic TCP_send;

    

    // IP_rx outputs
    logic IP_valid;
    logic IP_flush;
    logic [15:0] IP_pseuder;
    logic [63:0] IP_payload;
    logic [15:0] TCP_len;

    //IP interface
    IP #(
        .WORD_WIDTH(64)
    ) ip_inst (
        .CLK(CLK),
        .nRST(nRST),

        // IP_tx interface
        .IP_send(IP_send),
        .TCP_done(TCP_done),
        .TCP_len_data(TCP_len_data),
        .TCP_transmit(TCP_transmit),
        .IP_transmit(IP_transmit),
        .TCP_send(TCP_send),

        // IP_rx interface
        .MAC_valid(MAC_valid),
        .MAC_payload_rcv(MAC_payload_rcv),
        .MAC_flush(MAC_flush),
        .bytes_rcv_len(bytes_rcv_len),
        .IP_valid(IP_valid),
        .IP_flush(IP_flush),
        .IP_pseuder(IP_pseuder),
        .IP_payload(IP_payload),
        .TCP_len(TCP_len)
    );


    logic TCP_valid;
    logic TCP_flush;
    logic [31:0] rcv_next;
    logic [31:0] seq_num;

    logic end_ss;
    logic [63:0] TCP_payload_tx;
    logic [31:0] bytes_abt_sent;
    logic full;
    logic rd_en;
    logic TCP_stop_flg;

    TCP #(
    .DATA_WIDTH(64)
    ) tcp_inst (
        .CLK(CLK),
        .nRST(nRST),

        // TCP_rx interface
        .IP_payload_rx(IP_payload),
        .valid_IP_header_rx(IP_valid),
        .IP_flush(IP_flush),
        .IP_pseuder(IP_pseuder),
        .TCP_len(TCP_len),
        .TCP_len_data(TCP_len_data),
        .TCP_payload_rx(TCP_payload_rx),
        .TCP_valid(TCP_valid),
        .TCP_flush(TCP_flush),
        .rcv_next(rcv_next),
        .seq_num(seq_num),

        // TCP_tx interface
        .TCP_send(TCP_send),
        .TCP_transmit(TCP_transmit),

        // TCP_tx_payload interface
        .end_ss(end_ss),
        .TCP_payload_tx(TCP_payload_tx),
        .bytes_abt_sent(bytes_abt_sent),
        .full(full),
        .rd_en(rd_en),
        .TCP_stop_flg(TCP_stop_flg)
    );

endmodule
