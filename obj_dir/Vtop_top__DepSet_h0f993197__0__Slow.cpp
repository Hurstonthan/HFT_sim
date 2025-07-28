// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_top.h"

VL_ATTR_COLD void Vtop_top___stl_sequent__TOP__top__0(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___stl_sequent__TOP__top__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_TX_full = vlSymsp->TOP__top__u_fifo_tx.__PVT__wr_FIFO_valid;
    vlSymsp->TOP__top__u_fifo_tx.__PVT__seq_up = vlSelfRef.__PVT__seq_up;
    vlSelfRef.axis_rd_data = vlSymsp->TOP__top__u_payload_fifo.__PVT__axis_rd_data;
    vlSelfRef.axis_r_valid = vlSymsp->TOP__top__u_payload_fifo.__PVT__axis_r_valid;
    vlSelfRef.__PVT__end_ss_int = vlSymsp->TOP__top__u_fifo_tx.__PVT__end_ss;
    vlSelfRef.__PVT__TCP_stop_flg_int = vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_stop_flag;
    vlSelfRef.__PVT__rd_ftx_valid_int = vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_FIFO_valid;
    vlSelfRef.__PVT__checksum_re_trans_int = vlSymsp->TOP__top__u_fifo_tx.__PVT__checksum_re_trans;
    vlSymsp->TOP__top__u_fifo_tx.__PVT__checksum_TX 
        = vlSelfRef.__PVT__checksum_TX;
    vlSelfRef.__PVT__rd_ftx_payload_int = vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_FIFO_payload;
    vlSelfRef.__PVT__rd_ftx_last_int = vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_FIFO_last;
    vlSelfRef.__PVT__seq_rx_FIFO_rd_int = vlSymsp->TOP__top__u_payload_fifo.__PVT__seq_rx_FIFO_rd;
    vlSelfRef.__PVT__rd_pfifo_en_int = vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_FIFO_en;
    vlSelfRef.__PVT__wr_pfifo_len_int = vlSymsp->TOP__top__u_payload_fifo.__PVT__wr_FIFO_len;
    vlSelfRef.__PVT__wr_ptr_out_int = vlSymsp->TOP__top__u_payload_fifo.__PVT__wr_ptr_out;
    vlSelfRef.__PVT__bytes_abt_sent_int = vlSymsp->TOP__top__u_fifo_tx.__PVT__bytes_abt_sent;
    vlSymsp->TOP__top__u_tcp.__PVT__IP_bytes_rcv = vlSelfRef.IP_bytes_rcv;
    vlSymsp->TOP__top__u_tcp.__PVT__IP_flush = vlSelfRef.IP_flush;
    vlSymsp->TOP__top__u_payload_fifo.__PVT__nRST = vlSelfRef.nRST;
    vlSymsp->TOP__top__u_fifo_tx.__PVT__nRST = vlSelfRef.nRST;
    vlSymsp->TOP__top__u_tcp.__PVT__nRST = vlSelfRef.nRST;
    vlSymsp->TOP__top__u_payload_fifo.__PVT__CLK = vlSelfRef.CLK;
    vlSymsp->TOP__top__u_fifo_tx.__PVT__CLK = vlSelfRef.CLK;
    vlSymsp->TOP__top__u_tcp.__PVT__CLK = vlSelfRef.CLK;
    vlSymsp->TOP__top__u_payload_fifo.__PVT__axis_r_en 
        = vlSelfRef.axis_r_en;
    vlSymsp->TOP__top__u_fifo_tx.__PVT__len_seq = vlSelfRef.len_seq;
    vlSymsp->TOP__top__u_tcp.__PVT__soupbin_TCP_payload 
        = vlSelfRef.soupbin_TCP_payload;
    vlSymsp->TOP__top__u_fifo_tx.__PVT__soupbin_TCP_payload 
        = vlSelfRef.soupbin_TCP_payload;
    vlSymsp->TOP__top__u_tcp.__PVT__wr_FIFO_TX_en = vlSelfRef.wr_FIFO_en;
    vlSymsp->TOP__top__u_fifo_tx.__PVT__wr_FIFO_en 
        = vlSelfRef.wr_FIFO_en;
    vlSymsp->TOP__top__u_tcp.__PVT__wr_axis_last = vlSelfRef.axis_last;
    vlSymsp->TOP__top__u_fifo_tx.__PVT__axis_last = vlSelfRef.axis_last;
    vlSymsp->TOP__top__u_tcp.__PVT__TX_en = vlSelfRef.TX_en;
    vlSymsp->TOP__top__u_fifo_tx.__PVT__TX_en = vlSelfRef.TX_en;
    vlSymsp->TOP__top__u_tcp.__PVT__TCP_send = vlSelfRef.TCP_send;
    vlSymsp->TOP__top__u_tcp.__PVT__TCP_len = vlSelfRef.TCP_len;
    vlSymsp->TOP__top__u_tcp.__PVT__IP_payload = vlSelfRef.IP_payload;
    vlSymsp->TOP__top__u_tcp.__PVT__IP_pseuder = vlSelfRef.IP_pseuder;
    vlSymsp->TOP__top__u_tcp.__PVT__IP_valid = vlSelfRef.IP_valid;
    vlSymsp->TOP__top__u_tcp.__PVT__end_ss = vlSelfRef.__PVT__end_ss_int;
    vlSelfRef.__PVT__rd_FIFO_valid_tx = vlSelfRef.__PVT__rd_ftx_valid_int;
    vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_valid_tx 
        = vlSelfRef.__PVT__rd_ftx_valid_int;
    vlSymsp->TOP__top__u_tcp.__PVT__checksum_re_trans 
        = vlSelfRef.__PVT__checksum_re_trans_int;
    vlSelfRef.__PVT__rd_FIFO_payload = vlSelfRef.__PVT__rd_ftx_payload_int;
    vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_payload 
        = vlSelfRef.__PVT__rd_ftx_payload_int;
    vlSelfRef.__PVT__rd_FIFO_last = vlSelfRef.__PVT__rd_ftx_last_int;
    vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_last = vlSelfRef.__PVT__rd_ftx_last_int;
    vlSymsp->TOP__top__u_tcp.__PVT__seq_rx_FIFO_rd 
        = vlSelfRef.__PVT__seq_rx_FIFO_rd_int;
    vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_en_rcv 
        = vlSelfRef.__PVT__rd_pfifo_en_int;
    vlSymsp->TOP__top__u_tcp.__PVT__wr_FIFO_len = vlSelfRef.__PVT__wr_pfifo_len_int;
    vlSymsp->TOP__top__u_tcp.__PVT__wr_ptr_out = vlSelfRef.__PVT__wr_ptr_out_int;
    vlSelfRef.__PVT__bytes_abt_sent = vlSelfRef.__PVT__bytes_abt_sent_int;
    vlSymsp->TOP__top__u_tcp.__PVT__bytes_abt_sent 
        = vlSelfRef.__PVT__bytes_abt_sent_int;
}

VL_ATTR_COLD void Vtop_top___stl_sequent__TOP__top__1(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___stl_sequent__TOP__top__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__seq_rcv_start_int = vlSymsp->TOP__top__u_tcp.__PVT__seq_rcv_start;
    vlSelfRef.TCP_last = vlSymsp->TOP__top__u_tcp.__PVT__TCP_last;
    vlSelfRef.TCP_transmit = vlSymsp->TOP__top__u_tcp.__PVT__TCP_transmit;
    vlSelfRef.__PVT__axis_data_rx_int = vlSymsp->TOP__top__u_tcp.__PVT__axis_data_rx;
    vlSelfRef.__PVT__handshake_done_int = vlSymsp->TOP__top__u_tcp.__PVT__handshake_done;
    vlSelfRef.__PVT__axis_t_last_int = vlSymsp->TOP__top__u_tcp.__PVT__axis_t_last;
    vlSelfRef.__PVT__nw_segment = vlSymsp->TOP__top__u_tcp.__PVT__nw_segment;
    vlSelfRef.__PVT__full = vlSymsp->TOP__top__u_payload_fifo.__PVT__full;
    vlSelfRef.__PVT__re_trans_int = vlSymsp->TOP__top__u_fifo_tx.__PVT__re_trans;
    vlSymsp->TOP__top__u_payload_fifo.__PVT__seq_rcv_start 
        = vlSelfRef.__PVT__seq_rcv_start_int;
    vlSymsp->TOP__top__u_payload_fifo.__PVT__axis_data_rx 
        = vlSelfRef.__PVT__axis_data_rx_int;
    vlSymsp->TOP__top__u_payload_fifo.__PVT__handshake_done 
        = vlSelfRef.__PVT__handshake_done_int;
    vlSymsp->TOP__top__u_fifo_tx.__PVT__hand_shake_done 
        = vlSelfRef.__PVT__handshake_done_int;
    vlSymsp->TOP__top__u_payload_fifo.__PVT__axis_t_last 
        = vlSelfRef.__PVT__axis_t_last_int;
    vlSymsp->TOP__top__u_payload_fifo.__PVT__nw_segment 
        = vlSelfRef.__PVT__nw_segment;
    vlSymsp->TOP__top__u_tcp.__PVT__full = vlSelfRef.__PVT__full;
    vlSymsp->TOP__top__u_tcp.__PVT__re_trans = vlSelfRef.__PVT__re_trans_int;
}

VL_ATTR_COLD void Vtop_top___stl_sequent__TOP__top__2(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___stl_sequent__TOP__top__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rcv_next = vlSymsp->TOP__top__u_tcp.__PVT__rcv_next;
    vlSelfRef.seq_num = vlSymsp->TOP__top__u_tcp.__PVT__seq_num;
    vlSelfRef.__PVT__ACK_num_int = vlSymsp->TOP__top__u_tcp.__PVT__ACK_num;
    vlSelfRef.__PVT__ACK_rcv_flag_int = vlSymsp->TOP__top__u_tcp.__PVT__ACK_rcv_flag;
    vlSelfRef.__PVT__TCP_flush_int = vlSymsp->TOP__top__u_tcp.__PVT__TCP_flush;
    vlSymsp->TOP__top__u_fifo_tx.__PVT__ACK_num = vlSelfRef.__PVT__ACK_num_int;
    vlSymsp->TOP__top__u_fifo_tx.__PVT__ACK_rcv_flag 
        = vlSelfRef.__PVT__ACK_rcv_flag_int;
    vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_flush 
        = vlSelfRef.__PVT__TCP_flush_int;
}

VL_ATTR_COLD void Vtop_top___stl_sequent__TOP__top__3(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___stl_sequent__TOP__top__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__TCP_stop_flg_int = vlSymsp->TOP__top__u_tcp.__PVT__TCP_stop_flg;
    vlSelfRef.__PVT__wr_pfifo_en_int = vlSymsp->TOP__top__u_tcp.__PVT__wr_FIFO_en;
    vlSelfRef.__PVT__wr_pfifo_offset_int = vlSymsp->TOP__top__u_tcp.__PVT__wr_FIFO_offset;
    vlSelfRef.__PVT__rd_pfifo_valid_int = vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_valid_rcv;
    vlSelfRef.__PVT__out_order_req_int = vlSymsp->TOP__top__u_tcp.__PVT__out_order_req;
    vlSelfRef.__PVT__seq_num_tx = vlSymsp->TOP__top__u_tcp.__PVT__seq_num_tx_out;
    vlSelfRef.__PVT__rd_pfifo_ptr_int = vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_ptr;
    vlSelfRef.__PVT__rd_pfifo_len_int = vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_len;
    vlSelfRef.TCP_stop_flag = vlSelfRef.__PVT__TCP_stop_flg_int;
    vlSymsp->TOP__top__u_payload_fifo.__PVT__wr_FIFO_en 
        = vlSelfRef.__PVT__wr_pfifo_en_int;
    vlSymsp->TOP__top__u_payload_fifo.__PVT__wr_FIFO_offset 
        = vlSelfRef.__PVT__wr_pfifo_offset_int;
    vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_FIFO_valid 
        = vlSelfRef.__PVT__rd_pfifo_valid_int;
    vlSymsp->TOP__top__u_fifo_tx.__PVT__out_order_req 
        = vlSelfRef.__PVT__out_order_req_int;
    vlSymsp->TOP__top__u_fifo_tx.__PVT__seq_num_tx 
        = vlSelfRef.__PVT__seq_num_tx;
    vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_FIFO_ptr 
        = vlSelfRef.__PVT__rd_pfifo_ptr_int;
    vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_FIFO_len 
        = vlSelfRef.__PVT__rd_pfifo_len_int;
}

VL_ATTR_COLD void Vtop_top___stl_sequent__TOP__top__4(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___stl_sequent__TOP__top__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_ftx_en_int = vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_en_tx;
    vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_FIFO_en 
        = vlSelfRef.__PVT__rd_ftx_en_int;
}
