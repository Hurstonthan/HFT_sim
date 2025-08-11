`timescale 1ns/10ps

module ether_simulation #(
    parameter int DATA_WIDTH    = 64,
    parameter int FIFO_DEPTH_TX = 16,
    parameter int FIFO_DEPTH_RX = 16,
    parameter int CTRL_WIDTH    = 8
) (
    input logic CLK,
    input logic nRST,
    input logic [7:0] tb_count,

    //Simulation signal
    input logic client_lost,
    input logic out_order,
    input logic err_flag,

    //Server_side
    input logic TX_en_svr,
    input logic end_ss_svr,
    output wire [DATA_WIDTH - 1:0] xgmii_txd_svr,
    output wire [CTRL_WIDTH - 1:0] xgmii_txc_svr,
    output logic frame_end_svr,

    input logic [DATA_WIDTH - 1:0] xgmii_rxd_svr,
    input logic [CTRL_WIDTH - 1:0] xgmii_rxc_svr,

    //FIFO TX
    input logic axis_last_svr,
    input logic wr_FIFO_en_svr,
    input logic [31:0] len_seq_svr,
    input logic [DATA_WIDTH - 1:0] soupbin_TCP_payload_svr,
    output logic wr_FIFO_validing_svr, //FULL case

    //FIFO RX
    input logic axis_r_en_svr,
    output logic axis_r_valid_svr,
    output logic [DATA_WIDTH - 1:0] axis_rd_data_svr,

    //Debugging
    output logic TCP_stop_flag_svr,
    output logic [31:0] seq_num_svr,
    output logic [31:0] rcv_next_svr,


    //Client_side
    input logic TX_en_clt,
    input logic end_ss_clt,
    output wire [DATA_WIDTH - 1:0] xgmii_txd_clt,
    output wire [CTRL_WIDTH - 1:0] xgmii_txc_clt,
    output logic frame_end_clt,

    input logic [DATA_WIDTH - 1:0] xgmii_rxd_clt,
    input logic [CTRL_WIDTH - 1:0] xgmii_rxc_clt,

    input logic axis_last_clt,
    input logic wr_FIFO_en_clt,
    input logic [31:0] len_seq_clt,
    input logic [DATA_WIDTH - 1:0] soupbin_TCP_payload_clt,
    output logic wr_FIFO_valid_clt, //FULL case 

    input logic axis_r_en_clt,
    output logic axis_r_valid_clt,
    output logic [DATA_WIDTH - 1:0] axis_rd_data_clt,

    output logic TCP_stop_flag_clt,
    output logic [31:0] seq_num_clt,
    output logic [31:0] rcv_next_clt
);

    logic [DATA_WIDTH - 1:0] xgmii_rxd_clt_cvrt, xgmii_rxd_svr_cvrt;
    logic [CTRL_WIDTH - 1:0] xgmii_rxc_clt_cvrt, xgmii_rxc_svr_cvrt;
    


    xgmii_little_to_big cvrt_clt (
        .xgmii_rxd(xgmii_txd_clt),
        .xgmii_rxc(xgmii_txc_clt),
        .be_rxd(xgmii_rxd_svr_cvrt),
        .be_rxc(xgmii_rxc_svr_cvrt)
    );

    xgmii_little_to_big cvrt_svr (
        .xgmii_rxd(xgmii_txd_svr),
        .xgmii_rxc(xgmii_txc_svr),
        .be_rxd(xgmii_rxd_clt_cvrt),
        .be_rxc(xgmii_rxc_clt_cvrt)
    );


    //Sever top.sv module side
    top #(
        .CLT_OR_SVR(1'b1)
    )svr_inst (
        .CLK(CLK),
        .nRST(nRST),

        .out_order(1'b0),
        
        .TX_en(TX_en_svr),
        .end_ss(end_ss_svr),
        .xgmii_txd(xgmii_txd_svr),
        .xgmii_txc(xgmii_txc_svr),
        .frame_end(frame_end_svr),

        .xgmii_rxd(err_flag ? 64'hFFFF_FFFF_FFFF_FFFF : xgmii_rxd_svr_cvrt),
        .xgmii_rxc(err_flag ? 8'h0000 : xgmii_rxc_svr_cvrt),

        .axis_last(axis_last_svr),
        .wr_FIFO_en(wr_FIFO_en_svr),
        .len_seq(len_seq_svr),
        .soupbin_TCP_payload(soupbin_TCP_payload_svr),
        .wr_FIFO_valid(wr_FIFO_valid_svr),

        .axis_r_en(axis_r_en_svr),
        .axis_r_valid(axis_r_valid_svr),
        .axis_rd_data(axis_rd_data_svr),

        .TCP_stop_flag(TCP_stop_flag_svr),
        .rcv_next(rcv_next_svr),
        .seq_num(seq_num_svr)

    );


    //Client top.sv module side
    top clt_inst (
        .CLK(CLK),
        .nRST(nRST),

        .out_order(out_order),

        .TX_en(TX_en_clt),
        .end_ss(end_ss_clt),
        .xgmii_txd(xgmii_txd_clt),
        .xgmii_txc(xgmii_txc_clt),
        .frame_end(frame_end_clt),
        .xgmii_rxd(client_lost ? 64'h070707070707 : xgmii_rxd_clt_cvrt),
        .xgmii_rxc(client_lost ? 8'hFF : xgmii_rxc_clt_cvrt),
        .axis_last(axis_last_clt),
        .wr_FIFO_en(wr_FIFO_en_clt),
        .len_seq(len_seq_clt),
        .soupbin_TCP_payload(soupbin_TCP_payload_clt),
        .wr_FIFO_valid(wr_FIFO_valid_clt),
        .axis_r_en(axis_r_en_clt),
        .axis_r_valid(axis_r_valid_clt),
        .axis_rd_data(axis_rd_data_clt),
        .TCP_stop_flag(TCP_stop_flag_clt),
        .rcv_next(rcv_next_clt),
        .seq_num(seq_num_clt)
    );

endmodule

