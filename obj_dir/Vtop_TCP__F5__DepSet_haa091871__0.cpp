// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_TCP__F5.h"
#include "Vtop__Syms.h"

VL_INLINE_OPT void Vtop_TCP__F5___ico_sequent__TOP__top__u_tcp__0(Vtop_TCP__F5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_TCP__F5___ico_sequent__TOP__top__u_tcp__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_len 
        = vlSelfRef.__PVT__TCP_len;
    vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__IP_flush 
        = vlSelfRef.__PVT__IP_flush;
    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nRST 
        = vlSelfRef.__PVT__nRST;
    vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSymsp->TOP__top__u_tcp__ISN_gen.__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSymsp->TOP__top__u_tcp__inst.__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSymsp->TOP__top__u_tcp__ISN_gen.__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSymsp->TOP__top__u_tcp__inst.__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSymsp->TOP__top__u_tcp__inst.__PVT__TX_en = vlSelfRef.__PVT__TX_en;
    vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_send 
        = vlSelfRef.__PVT__TCP_send;
    vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__IP_payload_rx 
        = vlSelfRef.__PVT__IP_payload;
    vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__IP_pseuder 
        = vlSelfRef.__PVT__IP_pseuder;
    vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__valid_IP_header_rx 
        = vlSelfRef.__PVT__IP_valid;
    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_bytes_trk 
        = vlSelfRef.__PVT__IP_bytes_rcv;
}

VL_INLINE_OPT void Vtop_TCP__F5___ico_sequent__TOP__top__u_tcp__1(Vtop_TCP__F5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_TCP__F5___ico_sequent__TOP__top__u_tcp__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_FIFO_en_tx = vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__rd_FIFO_en;
    vlSelfRef.__PVT__TCP_flush = vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_flush;
    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_flush 
        = vlSelfRef.__PVT__TCP_flush;
}

VL_INLINE_OPT void Vtop_TCP__F5___ico_sequent__TOP__top__u_tcp__2(Vtop_TCP__F5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_TCP__F5___ico_sequent__TOP__top__u_tcp__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__TCP_stop_flg = vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_stop_flg;
    vlSelfRef.__PVT__rd_FIFO_valid_rcv = vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rd_FIFO_valid;
    vlSelfRef.__Vcellout__tcp_flow__rd_FIFO_ptr = vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rd_FIFO_ptr;
    vlSelfRef.__Vcellout__tcp_flow__rd_FIFO_len = vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rd_FIFO_len;
    vlSelfRef.__PVT__wr_FIFO_en = vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__wr_FIFO_en;
    vlSelfRef.__PVT__wr_FIFO_offset = vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__wr_FIFO_offset;
    vlSelfRef.__PVT__out_order_req = vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__out_order_req;
    vlSelfRef.__PVT__rd_FIFO_ptr = (7U & VL_SEL_IIII(11, (IData)(vlSelfRef.__Vcellout__tcp_flow__rd_FIFO_ptr), 0U, 3U));
    vlSelfRef.__PVT__rd_FIFO_len = (7U & VL_SEL_IIII(8, (IData)(vlSelfRef.__Vcellout__tcp_flow__rd_FIFO_len), 0U, 3U));
    vlSymsp->TOP__top__u_tcp__inst.__PVT__wr_FIFO_en 
        = vlSelfRef.__PVT__wr_FIFO_en;
}

VL_INLINE_OPT void Vtop_TCP__F5___nba_sequent__TOP__top__u_tcp__0(Vtop_TCP__F5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_TCP__F5___nba_sequent__TOP__top__u_tcp__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ISN_num = vlSymsp->TOP__top__u_tcp__ISN_gen.__PVT__ISN_num;
}

VL_INLINE_OPT void Vtop_TCP__F5___nba_sequent__TOP__top__u_tcp__1(Vtop_TCP__F5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_TCP__F5___nba_sequent__TOP__top__u_tcp__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rd_FIFO_en 
        = vlSelfRef.__PVT__rd_FIFO_en_rcv;
    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_rx_FIFO_rd 
        = vlSelfRef.__PVT__seq_rx_FIFO_rd;
    vlSelfRef.__Vcellinp__tcp_flow__wr_FIFO_len = VL_EXTEND_II(8,3, (IData)(vlSelfRef.__PVT__wr_FIFO_len));
    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__full 
        = vlSelfRef.__PVT__full;
    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__wr_FIFO_len 
        = vlSelfRef.__Vcellinp__tcp_flow__wr_FIFO_len;
}

VL_INLINE_OPT void Vtop_TCP__F5___nba_sequent__TOP__top__u_tcp__2(Vtop_TCP__F5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_TCP__F5___nba_sequent__TOP__top__u_tcp__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__tcp_flow__seq_rcv_str = vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_rcv_str;
    vlSelfRef.__PVT__hand_shake_done = vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__hand_shake_done;
    vlSelfRef.__PVT__rcv_next = vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_next_out;
    vlSelfRef.__PVT__seq_num = vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_num_out;
    vlSelfRef.__PVT__seq_rcv_str = (1U & VL_BITSEL_IIII(32, vlSelfRef.__Vcellout__tcp_flow__seq_rcv_str, 0U));
}

VL_INLINE_OPT void Vtop_TCP__F5___nba_sequent__TOP__top__u_tcp__3(Vtop_TCP__F5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_TCP__F5___nba_sequent__TOP__top__u_tcp__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__inst__TCP_checksum_out = vlSymsp->TOP__top__u_tcp__inst.__PVT__TCP_checksum_out;
    vlSelfRef.__PVT__TCP_checksum_out = (1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vcellout__inst__TCP_checksum_out), 0U));
}

VL_INLINE_OPT void Vtop_TCP__F5___nba_sequent__TOP__top__u_tcp__4(Vtop_TCP__F5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_TCP__F5___nba_sequent__TOP__top__u_tcp__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__rd_FIFO_valid 
        = vlSelfRef.__PVT__rd_FIFO_valid_tx;
    vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__rd_FIFO_last 
        = vlSelfRef.__PVT__rd_FIFO_last;
    vlSymsp->TOP__top__u_tcp__inst.__PVT__TCP_payload_tx 
        = vlSelfRef.__PVT__rd_FIFO_payload;
    vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__rd_FIFO_payload 
        = vlSelfRef.__PVT__rd_FIFO_payload;
    vlSelfRef.__Vcellinp__TCP_tx__bytes_abt_sent = 
        VL_EXTEND_II(32,16, (IData)(vlSelfRef.__PVT__bytes_abt_sent));
    vlSelfRef.__Vcellinp__tcp_flow__bytes_abt_sent 
        = VL_EXTEND_II(32,16, (IData)(vlSelfRef.__PVT__bytes_abt_sent));
    vlSymsp->TOP__top__u_tcp__inst.__PVT__re_trans 
        = vlSelfRef.__PVT__re_trans;
    vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__bytes_abt_sent 
        = vlSelfRef.__Vcellinp__TCP_tx__bytes_abt_sent;
    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__bytes_abt_sent 
        = vlSelfRef.__Vcellinp__tcp_flow__bytes_abt_sent;
}

VL_INLINE_OPT void Vtop_TCP__F5___nba_sequent__TOP__top__u_tcp__5(Vtop_TCP__F5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_TCP__F5___nba_sequent__TOP__top__u_tcp__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__bytes_sent = vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__bytes_sent;
    vlSelfRef.__PVT__TCP_transmit = vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_transmit;
    vlSelfRef.__PVT__TCP_last = vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_tx_last;
    vlSelfRef.__PVT__seq_up = vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__seq_up;
    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__bytes_sent 
        = vlSelfRef.__PVT__bytes_sent;
    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_up 
        = vlSelfRef.__PVT__seq_up;
}

VL_INLINE_OPT void Vtop_TCP__F5___nba_sequent__TOP__top__u_tcp__6(Vtop_TCP__F5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_TCP__F5___nba_sequent__TOP__top__u_tcp__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_FIFO_valid = vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_valid;
    vlSelfRef.__PVT__offset_rx = vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__offset_rx;
    vlSelfRef.__PVT__checksum_rx = vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__checksum_rx;
    vlSelfRef.__PVT__urgent_pointer_rx = vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__urgent_pointer_rx;
    vlSelfRef.__PVT__rcv_data = vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__rcv_data;
    vlSelfRef.__PVT__axis_data_rx = vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_payload_rx;
    vlSelfRef.__PVT__seq_num_rx = vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__seq_num_rx;
    vlSelfRef.__PVT__window_size_rx = vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__window_size_rx;
    vlSelfRef.__PVT__payload_len_rx = vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_len_data;
    vlSelfRef.__PVT__axis_t_last = vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_last;
    vlSelfRef.__PVT__nw_segment = vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nw_segment;
    vlSelfRef.__PVT__ACK_rx = vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__ACK_rx;
    vlSelfRef.__PVT__TCP_control_rx = vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_control_rx;
    vlSelfRef.__PVT__TCP_flush = vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_flush;
    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__offset_rx 
        = vlSelfRef.__PVT__offset_rx;
    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__checksum_rx 
        = vlSelfRef.__PVT__checksum_rx;
    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__urgent_pointer_rx 
        = vlSelfRef.__PVT__urgent_pointer_rx;
    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_data 
        = vlSelfRef.__PVT__rcv_data;
    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_num_rx 
        = vlSelfRef.__PVT__seq_num_rx;
    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__window_size_rx 
        = vlSelfRef.__PVT__window_size_rx;
    vlSelfRef.__Vcellinp__tcp_flow__payload_len_rx 
        = VL_EXTEND_II(32,16, (IData)(vlSelfRef.__PVT__payload_len_rx));
    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_last 
        = vlSelfRef.__PVT__axis_t_last;
    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nw_segment 
        = vlSelfRef.__PVT__nw_segment;
    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ACK_rx 
        = vlSelfRef.__PVT__ACK_rx;
    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_control_rx 
        = vlSelfRef.__PVT__TCP_control_rx;
    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_flush 
        = vlSelfRef.__PVT__TCP_flush;
    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__payload_len_rx 
        = vlSelfRef.__Vcellinp__tcp_flow__payload_len_rx;
}

VL_INLINE_OPT void Vtop_TCP__F5___nba_sequent__TOP__top__u_tcp__7(Vtop_TCP__F5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_TCP__F5___nba_sequent__TOP__top__u_tcp__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ACK_num = vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ACK_num;
    vlSelfRef.__PVT__ACK_rcv_flag = vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ACK_rcv_flag;
}

VL_INLINE_OPT void Vtop_TCP__F5___nba_sequent__TOP__top__u_tcp__8(Vtop_TCP__F5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_TCP__F5___nba_sequent__TOP__top__u_tcp__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ISN_num 
        = vlSelfRef.__PVT__ISN_num;
}

VL_INLINE_OPT void Vtop_TCP__F5___nba_comb__TOP__top__u_tcp__0(Vtop_TCP__F5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_TCP__F5___nba_comb__TOP__top__u_tcp__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__TCP_basesum_payload = ((IData)(vlSelfRef.__PVT__re_trans)
                                             ? (IData)(vlSelfRef.__PVT__checksum_re_trans)
                                             : VL_EXTEND_II(16,1, (IData)(vlSelfRef.__PVT__TCP_checksum_out)));
    vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_basesum_payload 
        = vlSelfRef.__PVT__TCP_basesum_payload;
}

VL_INLINE_OPT void Vtop_TCP__F5___nba_comb__TOP__top__u_tcp__1(Vtop_TCP__F5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_TCP__F5___nba_comb__TOP__top__u_tcp__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__window_size_tx = vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__window_size_tx;
    vlSelfRef.__PVT__offset_tx = vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__offset_tx;
    vlSelfRef.__PVT__urgent_pointer_tx = vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__urgent_pointer_tx;
    vlSelfRef.__PVT__seq_num_tx = vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_num_tx;
    vlSelfRef.__PVT__ACK_tx = vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ACK_tx;
    vlSelfRef.__PVT__TCP_control_tx = vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_control_tx;
    vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__window_size_tx 
        = vlSelfRef.__PVT__window_size_tx;
    vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__offset_tx 
        = vlSelfRef.__PVT__offset_tx;
    vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__urgent_pointer_tx 
        = vlSelfRef.__PVT__urgent_pointer_tx;
    vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__seq_num_tx 
        = vlSelfRef.__PVT__seq_num_tx;
    vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__ACK_tx 
        = vlSelfRef.__PVT__ACK_tx;
    vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_control_tx 
        = vlSelfRef.__PVT__TCP_control_tx;
}

VL_INLINE_OPT void Vtop_TCP__F5___nba_comb__TOP__top__u_tcp__2(Vtop_TCP__F5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_TCP__F5___nba_comb__TOP__top__u_tcp__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_FIFO_en_tx = vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__rd_FIFO_en;
}

VL_INLINE_OPT void Vtop_TCP__F5___nba_comb__TOP__top__u_tcp__3(Vtop_TCP__F5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_TCP__F5___nba_comb__TOP__top__u_tcp__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__TCP_stop_flg = vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_stop_flg;
    vlSelfRef.__PVT__rd_FIFO_valid_rcv = vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rd_FIFO_valid;
    vlSelfRef.__Vcellout__tcp_flow__rd_FIFO_ptr = vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rd_FIFO_ptr;
    vlSelfRef.__Vcellout__tcp_flow__rd_FIFO_len = vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rd_FIFO_len;
    vlSelfRef.__PVT__wr_FIFO_en = vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__wr_FIFO_en;
    vlSelfRef.__PVT__wr_FIFO_offset = vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__wr_FIFO_offset;
    vlSelfRef.__PVT__out_order_req = vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__out_order_req;
    vlSelfRef.__PVT__rd_FIFO_ptr = (7U & VL_SEL_IIII(11, (IData)(vlSelfRef.__Vcellout__tcp_flow__rd_FIFO_ptr), 0U, 3U));
    vlSelfRef.__PVT__rd_FIFO_len = (7U & VL_SEL_IIII(8, (IData)(vlSelfRef.__Vcellout__tcp_flow__rd_FIFO_len), 0U, 3U));
    vlSymsp->TOP__top__u_tcp__inst.__PVT__wr_FIFO_en 
        = vlSelfRef.__PVT__wr_FIFO_en;
}
