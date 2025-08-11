// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation_TCP__F10_CBz2.h"
#include "Vether_simulation__Syms.h"

VL_INLINE_OPT void Vether_simulation_TCP__F10_CBz2___ico_sequent__TOP__ether_simulation__clt_inst__u_tcp__0(Vether_simulation_TCP__F10_CBz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10_CBz2___ico_sequent__TOP__ether_simulation__clt_inst__u_tcp__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nRST 
        = vlSelfRef.__PVT__nRST;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__nRST 
        = vlSelfRef.__PVT__nRST;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__ISN_gen.__PVT__nRST 
        = vlSelfRef.__PVT__nRST;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__nRST 
        = vlSelfRef.__PVT__nRST;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__nRST 
        = vlSelfRef.__PVT__nRST;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nRST 
        = vlSelfRef.__PVT__nRST;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__CLK 
        = vlSelfRef.__PVT__CLK;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__CLK 
        = vlSelfRef.__PVT__CLK;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__ISN_gen.__PVT__CLK 
        = vlSelfRef.__PVT__CLK;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__CLK 
        = vlSelfRef.__PVT__CLK;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__CLK 
        = vlSelfRef.__PVT__CLK;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__CLK 
        = vlSelfRef.__PVT__CLK;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__TCP_payload_tx 
        = vlSelfRef.__PVT__soupbin_TCP_payload;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__wr_FIFO_en 
        = vlSelfRef.__PVT__wr_FIFO_TX_en;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__axis_last 
        = vlSelfRef.__PVT__wr_axis_last;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__TX_en 
        = vlSelfRef.__PVT__TX_en;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__out_order 
        = vlSelfRef.__PVT__out_order;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__end_ss 
        = vlSelfRef.__PVT__end_ss;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10_CBz2___ico_sequent__TOP__ether_simulation__clt_inst__u_tcp__1(Vether_simulation_TCP__F10_CBz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10_CBz2___ico_sequent__TOP__ether_simulation__clt_inst__u_tcp__1\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__TCP_stop_flg = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_stop_flg;
    vlSelfRef.__PVT__wr_FIFO_en = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__wr_FIFO_en;
    vlSelfRef.__PVT__wr_FIFO_offset = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__wr_FIFO_offset;
    vlSelfRef.__PVT__rd_FIFO_valid_rcv = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rd_FIFO_valid;
    vlSelfRef.__Vcellout__tcp_flow__rd_FIFO_ptr = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rd_FIFO_ptr;
    vlSelfRef.__Vcellout__tcp_flow__rd_FIFO_len = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rd_FIFO_len;
    vlSelfRef.__PVT__window_size_tx = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__window_size_tx;
    vlSelfRef.__PVT__offset_tx = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__offset_tx;
    vlSelfRef.__PVT__urgent_pointer_tx = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__urgent_pointer_tx;
    vlSelfRef.__PVT__ACK_tx = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__ACK_tx;
    vlSelfRef.__PVT__seq_num_tx = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_num_tx;
    vlSelfRef.__PVT__TCP_control_tx = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_control_tx;
    vlSelfRef.__PVT__rd_FIFO_ptr = (0xfU & VL_SEL_IIII(11, (IData)(vlSelfRef.__Vcellout__tcp_flow__rd_FIFO_ptr), 0U, 4U));
    vlSelfRef.__PVT__rd_FIFO_len = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__Vcellout__tcp_flow__rd_FIFO_len), 0U, 4U));
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__window_size_tx 
        = vlSelfRef.__PVT__window_size_tx;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__offset_tx 
        = vlSelfRef.__PVT__offset_tx;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__urgent_pointer_tx 
        = vlSelfRef.__PVT__urgent_pointer_tx;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__ACK_tx 
        = vlSelfRef.__PVT__ACK_tx;
    vlSelfRef.__PVT__seq_num_tx_out = vlSelfRef.__PVT__seq_num_tx;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__seq_num_tx 
        = vlSelfRef.__PVT__seq_num_tx;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__TCP_control_tx 
        = vlSelfRef.__PVT__TCP_control_tx;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10_CBz2___ico_sequent__TOP__ether_simulation__clt_inst__u_tcp__2(Vether_simulation_TCP__F10_CBz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10_CBz2___ico_sequent__TOP__ether_simulation__clt_inst__u_tcp__2\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_FIFO_en_tx = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__rd_FIFO_en;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10_CBz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__0(Vether_simulation_TCP__F10_CBz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10_CBz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ISN_num = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__ISN_gen.__PVT__ISN_num;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10_CBz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__1(Vether_simulation_TCP__F10_CBz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10_CBz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__1\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rd_FIFO_en 
        = vlSelfRef.__PVT__rd_FIFO_en_rcv;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_rx_FIFO_rd 
        = vlSelfRef.__PVT__seq_rx_FIFO_rd;
    vlSelfRef.__Vcellinp__tcp_flow__wr_FIFO_len = VL_EXTEND_II(8,4, (IData)(vlSelfRef.__PVT__wr_FIFO_len));
    vlSelfRef.__Vcellinp__tcp_flow__wr_FIFO_ptr = VL_EXTEND_II(11,4, (IData)(vlSelfRef.__PVT__wr_ptr_out));
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__full 
        = vlSelfRef.__PVT__full;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__wr_FIFO_len 
        = vlSelfRef.__Vcellinp__tcp_flow__wr_FIFO_len;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__wr_FIFO_ptr 
        = vlSelfRef.__Vcellinp__tcp_flow__wr_FIFO_ptr;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10_CBz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__2(Vether_simulation_TCP__F10_CBz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10_CBz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__2\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__clear_timeout = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__clear_timeout;
    vlSelfRef.__PVT__seq_rcv_start = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_rcv_str;
    vlSelfRef.__PVT__count_en_timeout = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__count_en_timeout;
    vlSelfRef.__PVT__handshake_done = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__hand_shake_done;
    vlSelfRef.__PVT__out_order_req = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__out_order_req;
    vlSelfRef.__PVT__seq_num = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_num_out;
    vlSelfRef.__PVT__rcv_next = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_next_out;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__clear 
        = vlSelfRef.__PVT__clear_timeout;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__count_enable 
        = vlSelfRef.__PVT__count_en_timeout;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10_CBz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__3(Vether_simulation_TCP__F10_CBz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10_CBz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__3\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__TCP_checksum_out = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__TCP_checksum_out;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10_CBz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__4(Vether_simulation_TCP__F10_CBz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10_CBz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__4\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__timeout_flag = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__timeout_fl.__PVT__rollover_flag;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__timeout_flag 
        = vlSelfRef.__PVT__timeout_flag;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10_CBz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__5(Vether_simulation_TCP__F10_CBz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10_CBz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__5\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__rd_FIFO_valid 
        = vlSelfRef.__PVT__rd_FIFO_valid_tx;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__rd_FIFO_last 
        = vlSelfRef.__PVT__rd_FIFO_last;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__rd_FIFO_payload 
        = vlSelfRef.__PVT__rd_FIFO_payload;
    vlSelfRef.__Vcellinp__TCP_tx__bytes_abt_sent = 
        VL_EXTEND_II(32,16, (IData)(vlSelfRef.__PVT__bytes_abt_sent));
    vlSelfRef.__Vcellinp__tcp_flow__bytes_abt_sent 
        = VL_EXTEND_II(32,16, (IData)(vlSelfRef.__PVT__bytes_abt_sent));
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__inst.__PVT__re_trans 
        = vlSelfRef.__PVT__re_trans;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__bytes_abt_sent 
        = vlSelfRef.__Vcellinp__tcp_flow__bytes_abt_sent;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10_CBz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__6(Vether_simulation_TCP__F10_CBz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10_CBz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__6\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__bytes_sent = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__bytes_sent;
    vlSelfRef.__PVT__TCP_len_data = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__TCP_len_data;
    vlSelfRef.__PVT__TCP_transmit = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__TCP_transmit;
    vlSelfRef.__PVT__TCP_tx_last = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__TCP_tx_last;
    vlSelfRef.__PVT__seq_up = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__seq_up;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__bytes_sent 
        = vlSelfRef.__PVT__bytes_sent;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_up 
        = vlSelfRef.__PVT__seq_up;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10_CBz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__7(Vether_simulation_TCP__F10_CBz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10_CBz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__7\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__valid_IP_header_rx 
        = vlSelfRef.__PVT__IP_valid;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__IP_bytes_rcv 
        = vlSelfRef.__PVT__IP_bytes_rcv;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__IP_last 
        = vlSelfRef.__PVT__IP_last;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__IP_data_flag 
        = vlSelfRef.__PVT__IP_data_flag;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__IP_payload_rx 
        = vlSelfRef.__PVT__IP_payload;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__IP_pseuder 
        = vlSelfRef.__PVT__IP_pseuder;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10_CBz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__8(Vether_simulation_TCP__F10_CBz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10_CBz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__8\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_FIFO_valid = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__TCP_valid;
    vlSelfRef.__PVT__offset_rx = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__offset_rx;
    vlSelfRef.__PVT__checksum_rx = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__checksum_rx;
    vlSelfRef.__PVT__urgent_pointer_rx = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__urgent_pointer_rx;
    vlSelfRef.__PVT__axis_data_rx = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__TCP_payload_rx;
    vlSelfRef.__PVT__window_size_rx = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__window_size_rx;
    vlSelfRef.__PVT__TCP_rx_last = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__TCP_last;
    vlSelfRef.__PVT__nw_segment = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__nw_segment;
    vlSelfRef.__PVT__ACK_rx = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__ACK_rx;
    vlSelfRef.__PVT__TCP_control_rx = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__TCP_control_rx;
    vlSelfRef.__PVT__rcv_data = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__rcv_data;
    vlSelfRef.__PVT__seq_num_rx = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__seq_num_rx;
    vlSelfRef.__PVT__bytes_rcv = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__bytes_rcv;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__offset_rx 
        = vlSelfRef.__PVT__offset_rx;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__checksum_rx 
        = vlSelfRef.__PVT__checksum_rx;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__urgent_pointer_rx 
        = vlSelfRef.__PVT__urgent_pointer_rx;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__window_size_rx 
        = vlSelfRef.__PVT__window_size_rx;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_last 
        = vlSelfRef.__PVT__TCP_rx_last;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__nw_segment 
        = vlSelfRef.__PVT__nw_segment;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__ACK_rx 
        = vlSelfRef.__PVT__ACK_rx;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_control_rx 
        = vlSelfRef.__PVT__TCP_control_rx;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rcv_data 
        = vlSelfRef.__PVT__rcv_data;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_num_rx 
        = vlSelfRef.__PVT__seq_num_rx;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_bytes_trk 
        = vlSelfRef.__PVT__bytes_rcv;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10_CBz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__9(Vether_simulation_TCP__F10_CBz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10_CBz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__9\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ACK_num = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__ACK_num;
    vlSelfRef.__PVT__ACK_rcv_flag = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__ACK_rcv_flag;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10_CBz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__10(Vether_simulation_TCP__F10_CBz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10_CBz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__10\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__ISN_num 
        = vlSelfRef.__PVT__ISN_num;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10_CBz2___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__0(Vether_simulation_TCP__F10_CBz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10_CBz2___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__TCP_basesum_payload = ((IData)(vlSelfRef.__PVT__re_trans)
                                             ? (IData)(vlSelfRef.__PVT__checksum_re_trans)
                                             : (IData)(vlSelfRef.__PVT__TCP_checksum_out));
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__TCP_basesum_payload 
        = vlSelfRef.__PVT__TCP_basesum_payload;
    vlSelfRef.__PVT__checksum_TX = vlSelfRef.__PVT__TCP_basesum_payload;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10_CBz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__11(Vether_simulation_TCP__F10_CBz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10_CBz2___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__11\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__bytes_abt_sent 
        = vlSelfRef.__Vcellinp__TCP_tx__bytes_abt_sent;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10_CBz2___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__1(Vether_simulation_TCP__F10_CBz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10_CBz2___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__1\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__TCP_send 
        = vlSelfRef.__PVT__TCP_send;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10_CBz2___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__2(Vether_simulation_TCP__F10_CBz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10_CBz2___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__2\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__IP_flush 
        = vlSelfRef.__PVT__IP_flush;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10_CBz2___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__3(Vether_simulation_TCP__F10_CBz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10_CBz2___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__3\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__TCP_flush = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_rcv.__PVT__TCP_flush;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_flush 
        = vlSelfRef.__PVT__TCP_flush;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10_CBz2___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__4(Vether_simulation_TCP__F10_CBz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10_CBz2___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__4\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__window_size_tx = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__window_size_tx;
    vlSelfRef.__PVT__offset_tx = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__offset_tx;
    vlSelfRef.__PVT__urgent_pointer_tx = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__urgent_pointer_tx;
    vlSelfRef.__PVT__ACK_tx = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__ACK_tx;
    vlSelfRef.__PVT__seq_num_tx = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__seq_num_tx;
    vlSelfRef.__PVT__TCP_control_tx = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_control_tx;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__window_size_tx 
        = vlSelfRef.__PVT__window_size_tx;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__offset_tx 
        = vlSelfRef.__PVT__offset_tx;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__urgent_pointer_tx 
        = vlSelfRef.__PVT__urgent_pointer_tx;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__ACK_tx 
        = vlSelfRef.__PVT__ACK_tx;
    vlSelfRef.__PVT__seq_num_tx_out = vlSelfRef.__PVT__seq_num_tx;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__seq_num_tx 
        = vlSelfRef.__PVT__seq_num_tx;
    vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__TCP_control_tx 
        = vlSelfRef.__PVT__TCP_control_tx;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10_CBz2___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__5(Vether_simulation_TCP__F10_CBz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10_CBz2___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__5\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_FIFO_en_tx = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__TCP_tx.__PVT__rd_FIFO_en;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10_CBz2___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__6(Vether_simulation_TCP__F10_CBz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10_CBz2___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__6\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__TCP_stop_flg = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__TCP_stop_flg;
    vlSelfRef.__PVT__wr_FIFO_en = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__wr_FIFO_en;
    vlSelfRef.__PVT__wr_FIFO_offset = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__wr_FIFO_offset;
    vlSelfRef.__PVT__rd_FIFO_valid_rcv = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rd_FIFO_valid;
    vlSelfRef.__Vcellout__tcp_flow__rd_FIFO_ptr = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rd_FIFO_ptr;
    vlSelfRef.__Vcellout__tcp_flow__rd_FIFO_len = vlSymsp->TOP__ether_simulation__clt_inst__u_tcp__tcp_flow.__PVT__rd_FIFO_len;
    vlSelfRef.__PVT__rd_FIFO_ptr = (0xfU & VL_SEL_IIII(11, (IData)(vlSelfRef.__Vcellout__tcp_flow__rd_FIFO_ptr), 0U, 4U));
    vlSelfRef.__PVT__rd_FIFO_len = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__Vcellout__tcp_flow__rd_FIFO_len), 0U, 4U));
}
