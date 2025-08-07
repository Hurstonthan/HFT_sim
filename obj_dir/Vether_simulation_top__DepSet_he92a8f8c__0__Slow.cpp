// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation_FIFO_TX__F10.h"
#include "Vether_simulation_IP_rx.h"
#include "Vether_simulation_IP_tx.h"
#include "Vether_simulation_MAC_rx.h"
#include "Vether_simulation_MAC_tx.h"
#include "Vether_simulation_TCP__F10.h"
#include "Vether_simulation_payload_FIFO.h"
#include "Vether_simulation_top.h"

VL_ATTR_COLD void Vether_simulation_top___stl_sequent__TOP__ether_simulation__svr_inst__0(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___stl_sequent__TOP__ether_simulation__svr_inst__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__IP_bytes_rcv_len = vlSelf->__PVT__ip_rx->__PVT__IP_bytes_rcv_len;
    vlSelf->__PVT__u_fifo_tx->__PVT__seq_up = vlSelfRef.__PVT__seq_up;
    vlSelfRef.__PVT__wr_FIFO_valid = vlSelf->__PVT__u_fifo_tx->__PVT__wr_FIFO_valid;
    vlSelfRef.__PVT__axis_rd_data = vlSelf->__PVT__u_payload_fifo->__PVT__axis_rd_data;
    vlSelfRef.__PVT__axis_r_valid = vlSelf->__PVT__u_payload_fifo->__PVT__axis_r_valid;
    vlSelfRef.__PVT__end_ss_int = vlSelf->__PVT__u_fifo_tx->__PVT__end_ss;
    vlSelfRef.__PVT__rd_ftx_valid_int = vlSelf->__PVT__u_fifo_tx->__PVT__rd_FIFO_valid;
    vlSelfRef.__PVT__TCP_stop_flg_int = vlSelf->__PVT__u_fifo_tx->__PVT__TCP_stop_flag;
    vlSelfRef.__PVT__IP_transmit = vlSelf->__PVT__ip_tx->__PVT__IP_transmit;
    vlSelfRef.__PVT__tt_len_data = vlSelf->__PVT__ip_tx->__PVT__tt_len_data;
    vlSelfRef.__PVT__IP_tx_last = vlSelf->__PVT__ip_tx->__PVT__IP_last;
    vlSelfRef.__PVT__MAC_valid = vlSelf->__PVT__mac_rx->__PVT__MAC_valid;
    vlSelfRef.__PVT__checksum_re_trans_int = vlSelf->__PVT__u_fifo_tx->__PVT__checksum_re_trans;
    vlSelfRef.__PVT__rd_ftx_payload_int = vlSelf->__PVT__u_fifo_tx->__PVT__rd_FIFO_payload;
    vlSelfRef.__PVT__rd_ftx_last_int = vlSelf->__PVT__u_fifo_tx->__PVT__rd_FIFO_last;
    vlSelfRef.__PVT__IP_send = vlSelf->__PVT__mac_tx->__PVT__IP_send;
    vlSelfRef.__PVT__seq_rx_FIFO_rd_int = vlSelf->__PVT__u_payload_fifo->__PVT__seq_rx_FIFO_rd;
    vlSelfRef.__PVT__rd_pfifo_en_int = vlSelf->__PVT__u_payload_fifo->__PVT__rd_FIFO_en;
    vlSelfRef.__PVT__wr_pfifo_len_int = vlSelf->__PVT__u_payload_fifo->__PVT__wr_FIFO_len;
    vlSelfRef.__PVT__wr_ptr_out_int = vlSelf->__PVT__u_payload_fifo->__PVT__wr_ptr_out;
    vlSelfRef.__PVT__IP_pseuder = vlSelf->__PVT__ip_rx->__PVT__IP_pseuder;
    vlSelfRef.__PVT__IP_payload = vlSelf->__PVT__ip_rx->__PVT__IP_payload;
    vlSelfRef.__PVT__IP_rx_last = vlSelf->__PVT__ip_rx->__PVT__IP_last;
    vlSelfRef.__PVT__IP_valid = vlSelf->__PVT__ip_rx->__PVT__IP_valid;
    vlSelfRef.__Vcellinp__u_tcp__IP_bytes_rcv = VL_EXTEND_II(8,1, (IData)(vlSelfRef.__PVT__IP_bytes_rcv));
    vlSelfRef.__PVT__bytes_abt_sent_int = vlSelf->__PVT__u_fifo_tx->__PVT__bytes_abt_sent;
    vlSelf->__PVT__u_tcp->__PVT__end_ss = vlSelfRef.__PVT__end_ss_int;
    vlSelfRef.__PVT__rd_FIFO_valid_tx = vlSelfRef.__PVT__rd_ftx_valid_int;
    vlSelf->__PVT__u_tcp->__PVT__rd_FIFO_valid_tx = vlSelfRef.__PVT__rd_ftx_valid_int;
    vlSelf->__PVT__mac_tx->__PVT__IP_transmit = vlSelfRef.__PVT__IP_transmit;
    vlSelf->__PVT__mac_tx->__PVT__tt_len_data = vlSelfRef.__PVT__tt_len_data;
    vlSelf->__PVT__mac_tx->__PVT__IP_last = vlSelfRef.__PVT__IP_tx_last;
    vlSelf->__PVT__ip_rx->__PVT__MAC_valid = vlSelfRef.__PVT__MAC_valid;
    vlSelf->__PVT__u_tcp->__PVT__checksum_re_trans 
        = vlSelfRef.__PVT__checksum_re_trans_int;
    vlSelfRef.__PVT__rd_FIFO_payload = vlSelfRef.__PVT__rd_ftx_payload_int;
    vlSelf->__PVT__u_tcp->__PVT__rd_FIFO_payload = vlSelfRef.__PVT__rd_ftx_payload_int;
    vlSelfRef.__PVT__rd_FIFO_last = vlSelfRef.__PVT__rd_ftx_last_int;
    vlSelf->__PVT__u_tcp->__PVT__rd_FIFO_last = vlSelfRef.__PVT__rd_ftx_last_int;
    vlSelf->__PVT__ip_tx->__PVT__IP_send = vlSelfRef.__PVT__IP_send;
    vlSelf->__PVT__u_tcp->__PVT__seq_rx_FIFO_rd = vlSelfRef.__PVT__seq_rx_FIFO_rd_int;
    vlSelf->__PVT__u_tcp->__PVT__rd_FIFO_en_rcv = vlSelfRef.__PVT__rd_pfifo_en_int;
    vlSelf->__PVT__u_tcp->__PVT__wr_FIFO_len = vlSelfRef.__PVT__wr_pfifo_len_int;
    vlSelf->__PVT__u_tcp->__PVT__wr_ptr_out = vlSelfRef.__PVT__wr_ptr_out_int;
    vlSelf->__PVT__u_tcp->__PVT__IP_pseuder = vlSelfRef.__PVT__IP_pseuder;
    vlSelf->__PVT__u_tcp->__PVT__IP_payload = vlSelfRef.__PVT__IP_payload;
    vlSelf->__PVT__u_tcp->__PVT__IP_last = vlSelfRef.__PVT__IP_rx_last;
    vlSelf->__PVT__u_tcp->__PVT__IP_valid = vlSelfRef.__PVT__IP_valid;
    vlSelf->__PVT__u_tcp->__PVT__IP_bytes_rcv = vlSelfRef.__Vcellinp__u_tcp__IP_bytes_rcv;
    vlSelfRef.__PVT__bytes_abt_sent = vlSelfRef.__PVT__bytes_abt_sent_int;
    vlSelf->__PVT__u_tcp->__PVT__bytes_abt_sent = vlSelfRef.__PVT__bytes_abt_sent_int;
}

VL_ATTR_COLD void Vether_simulation_top___stl_sequent__TOP__ether_simulation__svr_inst__1(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___stl_sequent__TOP__ether_simulation__svr_inst__1\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__bytes_rcv_len = vlSelf->__PVT__mac_rx->__PVT__bytes_rcv_len;
    vlSelfRef.__PVT__seq_rcv_start_int = vlSelf->__PVT__u_tcp->__PVT__seq_rcv_start;
    vlSelfRef.__PVT__axis_data_rx_int = vlSelf->__PVT__u_tcp->__PVT__axis_data_rx;
    vlSelfRef.__PVT__out_order_req_int = vlSelf->__PVT__u_tcp->__PVT__out_order_req;
    vlSelfRef.__PVT__handshake_done_int = vlSelf->__PVT__u_tcp->__PVT__handshake_done;
    vlSelfRef.__PVT__TCP_tx_last = vlSelf->__PVT__u_tcp->__PVT__TCP_tx_last;
    vlSelfRef.__PVT__TCP_transmit = vlSelf->__PVT__u_tcp->__PVT__TCP_transmit;
    vlSelfRef.__PVT__TCP_len_data = vlSelf->__PVT__u_tcp->__PVT__TCP_len_data;
    vlSelfRef.__PVT__TCP_rx_last = vlSelf->__PVT__u_tcp->__PVT__TCP_rx_last;
    vlSelfRef.__PVT__nw_segment = vlSelf->__PVT__u_tcp->__PVT__nw_segment;
    vlSelfRef.__PVT__full = vlSelf->__PVT__u_payload_fifo->__PVT__full;
    vlSelfRef.__PVT__re_trans_int = vlSelf->__PVT__u_fifo_tx->__PVT__re_trans;
    vlSelfRef.__PVT__xgmii_txd = vlSelf->__PVT__mac_tx->__PVT__xgmii_txd;
    vlSelfRef.__PVT__xgmii_txc = vlSelf->__PVT__mac_tx->__PVT__xgmii_txc;
    vlSelf->__PVT__u_payload_fifo->__PVT__axis_r_en 
        = vlSelfRef.__PVT__axis_r_en;
    vlSelf->__PVT__ip_tx->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__u_payload_fifo->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__u_fifo_tx->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__mac_rx->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__ip_rx->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__mac_tx->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__u_tcp->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__ip_tx->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__u_payload_fifo->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__u_fifo_tx->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__mac_rx->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__ip_rx->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__mac_tx->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__u_tcp->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__u_fifo_tx->__PVT__len_seq = vlSelfRef.__PVT__len_seq;
    vlSelf->__PVT__u_tcp->__PVT__soupbin_TCP_payload 
        = vlSelfRef.__PVT__soupbin_TCP_payload;
    vlSelf->__PVT__u_fifo_tx->__PVT__soupbin_TCP_payload 
        = vlSelfRef.__PVT__soupbin_TCP_payload;
    vlSelf->__PVT__u_tcp->__PVT__wr_FIFO_TX_en = vlSelfRef.__PVT__wr_FIFO_en;
    vlSelf->__PVT__u_fifo_tx->__PVT__wr_FIFO_en = vlSelfRef.__PVT__wr_FIFO_en;
    vlSelf->__PVT__u_tcp->__PVT__wr_axis_last = vlSelfRef.__PVT__axis_last;
    vlSelf->__PVT__u_fifo_tx->__PVT__axis_last = vlSelfRef.__PVT__axis_last;
    vlSelf->__PVT__u_tcp->__PVT__TX_en = vlSelfRef.__PVT__TX_en;
    vlSelf->__PVT__mac_tx->__PVT__TX_en = vlSelfRef.__PVT__TX_en;
    vlSelf->__PVT__u_fifo_tx->__PVT__TX_en = vlSelfRef.__PVT__TX_en;
    vlSelf->__PVT__ip_rx->__PVT__bytes_rcv_len = vlSelfRef.__PVT__bytes_rcv_len;
    vlSelf->__PVT__u_payload_fifo->__PVT__seq_rcv_start 
        = vlSelfRef.__PVT__seq_rcv_start_int;
    vlSelf->__PVT__u_payload_fifo->__PVT__axis_data_rx 
        = vlSelfRef.__PVT__axis_data_rx_int;
    vlSelf->__PVT__u_fifo_tx->__PVT__out_order_req 
        = vlSelfRef.__PVT__out_order_req_int;
    vlSelf->__PVT__u_payload_fifo->__PVT__handshake_done 
        = vlSelfRef.__PVT__handshake_done_int;
    vlSelf->__PVT__u_fifo_tx->__PVT__hand_shake_done 
        = vlSelfRef.__PVT__handshake_done_int;
    vlSelf->__PVT__ip_tx->__PVT__protocol_last = vlSelfRef.__PVT__TCP_tx_last;
    vlSelf->__PVT__ip_tx->__PVT__protocol_transmit 
        = vlSelfRef.__PVT__TCP_transmit;
    vlSelf->__PVT__ip_tx->__PVT__len_data = vlSelfRef.__PVT__TCP_len_data;
    vlSelf->__PVT__u_payload_fifo->__PVT__axis_t_last 
        = vlSelfRef.__PVT__TCP_rx_last;
    vlSelf->__PVT__u_payload_fifo->__PVT__nw_segment 
        = vlSelfRef.__PVT__nw_segment;
    vlSelf->__PVT__u_tcp->__PVT__full = vlSelfRef.__PVT__full;
    vlSelf->__PVT__u_tcp->__PVT__re_trans = vlSelfRef.__PVT__re_trans_int;
}

VL_ATTR_COLD void Vether_simulation_top___stl_sequent__TOP__ether_simulation__svr_inst__2(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___stl_sequent__TOP__ether_simulation__svr_inst__2\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__MAC_payload_rcv = vlSelf->__PVT__mac_rx->__PVT__MAC_payload_rcv;
    vlSelfRef.__PVT__rcv_next = vlSelf->__PVT__u_tcp->__PVT__rcv_next;
    vlSelfRef.__PVT__seq_num = vlSelf->__PVT__u_tcp->__PVT__seq_num;
    vlSelfRef.__PVT__ACK_num_int = vlSelf->__PVT__u_tcp->__PVT__ACK_num;
    vlSelfRef.__PVT__ACK_rcv_flag_int = vlSelf->__PVT__u_tcp->__PVT__ACK_rcv_flag;
    vlSelfRef.__PVT__TCP_flush_int = vlSelf->__PVT__u_tcp->__PVT__TCP_flush;
    vlSelfRef.__PVT__checksum_TX = vlSelf->__PVT__u_tcp->__PVT__checksum_TX;
    vlSelfRef.__PVT__frame_end = vlSelf->__PVT__mac_tx->__PVT__frame_end;
    vlSelfRef.__PVT__TCP_send = vlSelf->__PVT__ip_tx->__PVT__protocol_send;
    vlSelf->__PVT__ip_rx->__PVT__MAC_payload_rcv = vlSelfRef.__PVT__MAC_payload_rcv;
    vlSelf->__PVT__u_fifo_tx->__PVT__ACK_num = vlSelfRef.__PVT__ACK_num_int;
    vlSelf->__PVT__u_fifo_tx->__PVT__ACK_rcv_flag = vlSelfRef.__PVT__ACK_rcv_flag_int;
    vlSelf->__PVT__u_payload_fifo->__PVT__TCP_flush 
        = vlSelfRef.__PVT__TCP_flush_int;
    vlSelf->__PVT__u_fifo_tx->__PVT__checksum_TX = vlSelfRef.__PVT__checksum_TX;
    vlSelf->__PVT__u_tcp->__PVT__TCP_send = vlSelfRef.__PVT__TCP_send;
}

VL_ATTR_COLD void Vether_simulation_top___stl_sequent__TOP__ether_simulation__clt_inst__0(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___stl_sequent__TOP__ether_simulation__clt_inst__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__IP_bytes_rcv_len = vlSelf->__PVT__ip_rx->__PVT__IP_bytes_rcv_len;
    vlSelf->__PVT__u_fifo_tx->__PVT__seq_up = vlSelfRef.__PVT__seq_up;
    vlSelfRef.__PVT__axis_rd_data = vlSelf->__PVT__u_payload_fifo->__PVT__axis_rd_data;
    vlSelfRef.__PVT__axis_r_valid = vlSelf->__PVT__u_payload_fifo->__PVT__axis_r_valid;
    vlSelfRef.__PVT__wr_FIFO_valid = vlSelf->__PVT__u_fifo_tx->__PVT__wr_FIFO_valid;
    vlSelfRef.__PVT__end_ss_int = vlSelf->__PVT__u_fifo_tx->__PVT__end_ss;
    vlSelfRef.__PVT__rd_ftx_valid_int = vlSelf->__PVT__u_fifo_tx->__PVT__rd_FIFO_valid;
    vlSelfRef.__PVT__TCP_stop_flg_int = vlSelf->__PVT__u_fifo_tx->__PVT__TCP_stop_flag;
    vlSelfRef.__PVT__IP_transmit = vlSelf->__PVT__ip_tx->__PVT__IP_transmit;
    vlSelfRef.__PVT__tt_len_data = vlSelf->__PVT__ip_tx->__PVT__tt_len_data;
    vlSelfRef.__PVT__IP_tx_last = vlSelf->__PVT__ip_tx->__PVT__IP_last;
    vlSelfRef.__PVT__MAC_valid = vlSelf->__PVT__mac_rx->__PVT__MAC_valid;
    vlSelfRef.__PVT__checksum_re_trans_int = vlSelf->__PVT__u_fifo_tx->__PVT__checksum_re_trans;
    vlSelfRef.__PVT__rd_ftx_payload_int = vlSelf->__PVT__u_fifo_tx->__PVT__rd_FIFO_payload;
    vlSelfRef.__PVT__rd_ftx_last_int = vlSelf->__PVT__u_fifo_tx->__PVT__rd_FIFO_last;
    vlSelfRef.__PVT__IP_send = vlSelf->__PVT__mac_tx->__PVT__IP_send;
    vlSelfRef.__PVT__seq_rx_FIFO_rd_int = vlSelf->__PVT__u_payload_fifo->__PVT__seq_rx_FIFO_rd;
    vlSelfRef.__PVT__rd_pfifo_en_int = vlSelf->__PVT__u_payload_fifo->__PVT__rd_FIFO_en;
    vlSelfRef.__PVT__wr_pfifo_len_int = vlSelf->__PVT__u_payload_fifo->__PVT__wr_FIFO_len;
    vlSelfRef.__PVT__wr_ptr_out_int = vlSelf->__PVT__u_payload_fifo->__PVT__wr_ptr_out;
    vlSelfRef.__PVT__IP_pseuder = vlSelf->__PVT__ip_rx->__PVT__IP_pseuder;
    vlSelfRef.__PVT__IP_payload = vlSelf->__PVT__ip_rx->__PVT__IP_payload;
    vlSelfRef.__PVT__IP_rx_last = vlSelf->__PVT__ip_rx->__PVT__IP_last;
    vlSelfRef.__PVT__IP_valid = vlSelf->__PVT__ip_rx->__PVT__IP_valid;
    vlSelfRef.__Vcellinp__u_tcp__IP_bytes_rcv = VL_EXTEND_II(8,1, (IData)(vlSelfRef.__PVT__IP_bytes_rcv));
    vlSelfRef.__PVT__bytes_abt_sent_int = vlSelf->__PVT__u_fifo_tx->__PVT__bytes_abt_sent;
    vlSelf->__PVT__u_tcp->__PVT__end_ss = vlSelfRef.__PVT__end_ss_int;
    vlSelfRef.__PVT__rd_FIFO_valid_tx = vlSelfRef.__PVT__rd_ftx_valid_int;
    vlSelf->__PVT__u_tcp->__PVT__rd_FIFO_valid_tx = vlSelfRef.__PVT__rd_ftx_valid_int;
    vlSelf->__PVT__mac_tx->__PVT__IP_transmit = vlSelfRef.__PVT__IP_transmit;
    vlSelf->__PVT__mac_tx->__PVT__tt_len_data = vlSelfRef.__PVT__tt_len_data;
    vlSelf->__PVT__mac_tx->__PVT__IP_last = vlSelfRef.__PVT__IP_tx_last;
    vlSelf->__PVT__ip_rx->__PVT__MAC_valid = vlSelfRef.__PVT__MAC_valid;
    vlSelf->__PVT__u_tcp->__PVT__checksum_re_trans 
        = vlSelfRef.__PVT__checksum_re_trans_int;
    vlSelfRef.__PVT__rd_FIFO_payload = vlSelfRef.__PVT__rd_ftx_payload_int;
    vlSelf->__PVT__u_tcp->__PVT__rd_FIFO_payload = vlSelfRef.__PVT__rd_ftx_payload_int;
    vlSelfRef.__PVT__rd_FIFO_last = vlSelfRef.__PVT__rd_ftx_last_int;
    vlSelf->__PVT__u_tcp->__PVT__rd_FIFO_last = vlSelfRef.__PVT__rd_ftx_last_int;
    vlSelf->__PVT__ip_tx->__PVT__IP_send = vlSelfRef.__PVT__IP_send;
    vlSelf->__PVT__u_tcp->__PVT__seq_rx_FIFO_rd = vlSelfRef.__PVT__seq_rx_FIFO_rd_int;
    vlSelf->__PVT__u_tcp->__PVT__rd_FIFO_en_rcv = vlSelfRef.__PVT__rd_pfifo_en_int;
    vlSelf->__PVT__u_tcp->__PVT__wr_FIFO_len = vlSelfRef.__PVT__wr_pfifo_len_int;
    vlSelf->__PVT__u_tcp->__PVT__wr_ptr_out = vlSelfRef.__PVT__wr_ptr_out_int;
    vlSelf->__PVT__u_tcp->__PVT__IP_pseuder = vlSelfRef.__PVT__IP_pseuder;
    vlSelf->__PVT__u_tcp->__PVT__IP_payload = vlSelfRef.__PVT__IP_payload;
    vlSelf->__PVT__u_tcp->__PVT__IP_last = vlSelfRef.__PVT__IP_rx_last;
    vlSelf->__PVT__u_tcp->__PVT__IP_valid = vlSelfRef.__PVT__IP_valid;
    vlSelf->__PVT__u_tcp->__PVT__IP_bytes_rcv = vlSelfRef.__Vcellinp__u_tcp__IP_bytes_rcv;
    vlSelfRef.__PVT__bytes_abt_sent = vlSelfRef.__PVT__bytes_abt_sent_int;
    vlSelf->__PVT__u_tcp->__PVT__bytes_abt_sent = vlSelfRef.__PVT__bytes_abt_sent_int;
}

VL_ATTR_COLD void Vether_simulation_top___stl_sequent__TOP__ether_simulation__clt_inst__1(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___stl_sequent__TOP__ether_simulation__clt_inst__1\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__bytes_rcv_len = vlSelf->__PVT__mac_rx->__PVT__bytes_rcv_len;
    vlSelfRef.__PVT__seq_rcv_start_int = vlSelf->__PVT__u_tcp->__PVT__seq_rcv_start;
    vlSelfRef.__PVT__axis_data_rx_int = vlSelf->__PVT__u_tcp->__PVT__axis_data_rx;
    vlSelfRef.__PVT__out_order_req_int = vlSelf->__PVT__u_tcp->__PVT__out_order_req;
    vlSelfRef.__PVT__handshake_done_int = vlSelf->__PVT__u_tcp->__PVT__handshake_done;
    vlSelfRef.__PVT__TCP_tx_last = vlSelf->__PVT__u_tcp->__PVT__TCP_tx_last;
    vlSelfRef.__PVT__TCP_transmit = vlSelf->__PVT__u_tcp->__PVT__TCP_transmit;
    vlSelfRef.__PVT__TCP_len_data = vlSelf->__PVT__u_tcp->__PVT__TCP_len_data;
    vlSelfRef.__PVT__TCP_rx_last = vlSelf->__PVT__u_tcp->__PVT__TCP_rx_last;
    vlSelfRef.__PVT__nw_segment = vlSelf->__PVT__u_tcp->__PVT__nw_segment;
    vlSelfRef.__PVT__full = vlSelf->__PVT__u_payload_fifo->__PVT__full;
    vlSelfRef.__PVT__re_trans_int = vlSelf->__PVT__u_fifo_tx->__PVT__re_trans;
    vlSelfRef.__PVT__xgmii_txd = vlSelf->__PVT__mac_tx->__PVT__xgmii_txd;
    vlSelfRef.__PVT__xgmii_txc = vlSelf->__PVT__mac_tx->__PVT__xgmii_txc;
    vlSelf->__PVT__u_payload_fifo->__PVT__axis_r_en 
        = vlSelfRef.__PVT__axis_r_en;
    vlSelf->__PVT__ip_tx->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__u_payload_fifo->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__u_fifo_tx->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__mac_rx->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__ip_rx->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__mac_tx->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__u_tcp->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__ip_tx->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__u_payload_fifo->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__u_fifo_tx->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__mac_rx->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__ip_rx->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__mac_tx->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__u_tcp->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__u_fifo_tx->__PVT__len_seq = vlSelfRef.__PVT__len_seq;
    vlSelf->__PVT__u_tcp->__PVT__soupbin_TCP_payload 
        = vlSelfRef.__PVT__soupbin_TCP_payload;
    vlSelf->__PVT__u_fifo_tx->__PVT__soupbin_TCP_payload 
        = vlSelfRef.__PVT__soupbin_TCP_payload;
    vlSelf->__PVT__u_tcp->__PVT__wr_FIFO_TX_en = vlSelfRef.__PVT__wr_FIFO_en;
    vlSelf->__PVT__u_fifo_tx->__PVT__wr_FIFO_en = vlSelfRef.__PVT__wr_FIFO_en;
    vlSelf->__PVT__u_tcp->__PVT__wr_axis_last = vlSelfRef.__PVT__axis_last;
    vlSelf->__PVT__u_fifo_tx->__PVT__axis_last = vlSelfRef.__PVT__axis_last;
    vlSelf->__PVT__u_tcp->__PVT__TX_en = vlSelfRef.__PVT__TX_en;
    vlSelf->__PVT__mac_tx->__PVT__TX_en = vlSelfRef.__PVT__TX_en;
    vlSelf->__PVT__u_fifo_tx->__PVT__TX_en = vlSelfRef.__PVT__TX_en;
    vlSelf->__PVT__ip_rx->__PVT__bytes_rcv_len = vlSelfRef.__PVT__bytes_rcv_len;
    vlSelf->__PVT__u_payload_fifo->__PVT__seq_rcv_start 
        = vlSelfRef.__PVT__seq_rcv_start_int;
    vlSelf->__PVT__u_payload_fifo->__PVT__axis_data_rx 
        = vlSelfRef.__PVT__axis_data_rx_int;
    vlSelf->__PVT__u_fifo_tx->__PVT__out_order_req 
        = vlSelfRef.__PVT__out_order_req_int;
    vlSelf->__PVT__u_payload_fifo->__PVT__handshake_done 
        = vlSelfRef.__PVT__handshake_done_int;
    vlSelf->__PVT__u_fifo_tx->__PVT__hand_shake_done 
        = vlSelfRef.__PVT__handshake_done_int;
    vlSelf->__PVT__ip_tx->__PVT__protocol_last = vlSelfRef.__PVT__TCP_tx_last;
    vlSelf->__PVT__ip_tx->__PVT__protocol_transmit 
        = vlSelfRef.__PVT__TCP_transmit;
    vlSelf->__PVT__ip_tx->__PVT__len_data = vlSelfRef.__PVT__TCP_len_data;
    vlSelf->__PVT__u_payload_fifo->__PVT__axis_t_last 
        = vlSelfRef.__PVT__TCP_rx_last;
    vlSelf->__PVT__u_payload_fifo->__PVT__nw_segment 
        = vlSelfRef.__PVT__nw_segment;
    vlSelf->__PVT__u_tcp->__PVT__full = vlSelfRef.__PVT__full;
    vlSelf->__PVT__u_tcp->__PVT__re_trans = vlSelfRef.__PVT__re_trans_int;
}

VL_ATTR_COLD void Vether_simulation_top___stl_sequent__TOP__ether_simulation__clt_inst__2(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___stl_sequent__TOP__ether_simulation__clt_inst__2\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__MAC_payload_rcv = vlSelf->__PVT__mac_rx->__PVT__MAC_payload_rcv;
    vlSelfRef.__PVT__rcv_next = vlSelf->__PVT__u_tcp->__PVT__rcv_next;
    vlSelfRef.__PVT__seq_num = vlSelf->__PVT__u_tcp->__PVT__seq_num;
    vlSelfRef.__PVT__ACK_num_int = vlSelf->__PVT__u_tcp->__PVT__ACK_num;
    vlSelfRef.__PVT__ACK_rcv_flag_int = vlSelf->__PVT__u_tcp->__PVT__ACK_rcv_flag;
    vlSelfRef.__PVT__TCP_flush_int = vlSelf->__PVT__u_tcp->__PVT__TCP_flush;
    vlSelfRef.__PVT__checksum_TX = vlSelf->__PVT__u_tcp->__PVT__checksum_TX;
    vlSelfRef.__PVT__frame_end = vlSelf->__PVT__mac_tx->__PVT__frame_end;
    vlSelfRef.__PVT__TCP_send = vlSelf->__PVT__ip_tx->__PVT__protocol_send;
    vlSelf->__PVT__ip_rx->__PVT__MAC_payload_rcv = vlSelfRef.__PVT__MAC_payload_rcv;
    vlSelf->__PVT__u_fifo_tx->__PVT__ACK_num = vlSelfRef.__PVT__ACK_num_int;
    vlSelf->__PVT__u_fifo_tx->__PVT__ACK_rcv_flag = vlSelfRef.__PVT__ACK_rcv_flag_int;
    vlSelf->__PVT__u_payload_fifo->__PVT__TCP_flush 
        = vlSelfRef.__PVT__TCP_flush_int;
    vlSelf->__PVT__u_fifo_tx->__PVT__checksum_TX = vlSelfRef.__PVT__checksum_TX;
    vlSelf->__PVT__u_tcp->__PVT__TCP_send = vlSelfRef.__PVT__TCP_send;
}
