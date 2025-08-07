// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation_FIFO_TX__F10.h"
#include "Vether_simulation_TCP__F10.h"
#include "Vether_simulation_top.h"

VL_INLINE_OPT void Vether_simulation_top___nba_sequent__TOP__ether_simulation__svr_inst__5(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_sequent__TOP__ether_simulation__svr_inst__5\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_FIFO_valid = vlSelf->__PVT__u_fifo_tx->__PVT__wr_FIFO_valid;
    vlSelfRef.__PVT__rd_ftx_valid_int = vlSelf->__PVT__u_fifo_tx->__PVT__rd_FIFO_valid;
    vlSelfRef.__PVT__rd_ftx_last_int = vlSelf->__PVT__u_fifo_tx->__PVT__rd_FIFO_last;
    vlSelfRef.__PVT__rd_ftx_payload_int = vlSelf->__PVT__u_fifo_tx->__PVT__rd_FIFO_payload;
    vlSelfRef.__PVT__bytes_abt_sent_int = vlSelf->__PVT__u_fifo_tx->__PVT__bytes_abt_sent;
    vlSelfRef.__PVT__re_trans_int = vlSelf->__PVT__u_fifo_tx->__PVT__re_trans;
    vlSelfRef.__PVT__rd_FIFO_valid_tx = vlSelfRef.__PVT__rd_ftx_valid_int;
    vlSelf->__PVT__u_tcp->__PVT__rd_FIFO_valid_tx = vlSelfRef.__PVT__rd_ftx_valid_int;
    vlSelfRef.__PVT__rd_FIFO_last = vlSelfRef.__PVT__rd_ftx_last_int;
    vlSelf->__PVT__u_tcp->__PVT__rd_FIFO_last = vlSelfRef.__PVT__rd_ftx_last_int;
    vlSelfRef.__PVT__rd_FIFO_payload = vlSelfRef.__PVT__rd_ftx_payload_int;
    vlSelf->__PVT__u_tcp->__PVT__rd_FIFO_payload = vlSelfRef.__PVT__rd_ftx_payload_int;
    vlSelfRef.__PVT__bytes_abt_sent = vlSelfRef.__PVT__bytes_abt_sent_int;
    vlSelf->__PVT__u_tcp->__PVT__bytes_abt_sent = vlSelfRef.__PVT__bytes_abt_sent_int;
    vlSelf->__PVT__u_tcp->__PVT__re_trans = vlSelfRef.__PVT__re_trans_int;
}

VL_INLINE_OPT void Vether_simulation_top___nba_sequent__TOP__ether_simulation__svr_inst__11(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_sequent__TOP__ether_simulation__svr_inst__11\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ACK_num_int = vlSelf->__PVT__u_tcp->__PVT__ACK_num;
    vlSelfRef.__PVT__ACK_rcv_flag_int = vlSelf->__PVT__u_tcp->__PVT__ACK_rcv_flag;
    vlSelf->__PVT__u_fifo_tx->__PVT__ACK_num = vlSelfRef.__PVT__ACK_num_int;
    vlSelf->__PVT__u_fifo_tx->__PVT__ACK_rcv_flag = vlSelfRef.__PVT__ACK_rcv_flag_int;
}

VL_INLINE_OPT void Vether_simulation_top___nba_comb__TOP__ether_simulation__svr_inst__1(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_comb__TOP__ether_simulation__svr_inst__1\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__checksum_TX = vlSelf->__PVT__u_tcp->__PVT__checksum_TX;
    vlSelf->__PVT__u_fifo_tx->__PVT__checksum_TX = vlSelfRef.__PVT__checksum_TX;
}

VL_INLINE_OPT void Vether_simulation_top___nba_comb__TOP__ether_simulation__svr_inst__5(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_comb__TOP__ether_simulation__svr_inst__5\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__seq_num_tx = vlSelf->__PVT__u_tcp->__PVT__seq_num_tx_out;
    vlSelf->__PVT__u_fifo_tx->__PVT__seq_num_tx = vlSelfRef.__PVT__seq_num_tx;
}

VL_INLINE_OPT void Vether_simulation_top___nba_comb__TOP__ether_simulation__svr_inst__7(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_comb__TOP__ether_simulation__svr_inst__7\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_ftx_en_int = vlSelf->__PVT__u_tcp->__PVT__rd_FIFO_en_tx;
    vlSelf->__PVT__u_fifo_tx->__PVT__rd_FIFO_en = vlSelfRef.__PVT__rd_ftx_en_int;
}

VL_INLINE_OPT void Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__5(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__5\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_FIFO_valid = vlSelf->__PVT__u_fifo_tx->__PVT__wr_FIFO_valid;
    vlSelfRef.__PVT__rd_ftx_valid_int = vlSelf->__PVT__u_fifo_tx->__PVT__rd_FIFO_valid;
    vlSelfRef.__PVT__rd_ftx_last_int = vlSelf->__PVT__u_fifo_tx->__PVT__rd_FIFO_last;
    vlSelfRef.__PVT__rd_ftx_payload_int = vlSelf->__PVT__u_fifo_tx->__PVT__rd_FIFO_payload;
    vlSelfRef.__PVT__bytes_abt_sent_int = vlSelf->__PVT__u_fifo_tx->__PVT__bytes_abt_sent;
    vlSelfRef.__PVT__re_trans_int = vlSelf->__PVT__u_fifo_tx->__PVT__re_trans;
    vlSelfRef.__PVT__rd_FIFO_valid_tx = vlSelfRef.__PVT__rd_ftx_valid_int;
    vlSelf->__PVT__u_tcp->__PVT__rd_FIFO_valid_tx = vlSelfRef.__PVT__rd_ftx_valid_int;
    vlSelfRef.__PVT__rd_FIFO_last = vlSelfRef.__PVT__rd_ftx_last_int;
    vlSelf->__PVT__u_tcp->__PVT__rd_FIFO_last = vlSelfRef.__PVT__rd_ftx_last_int;
    vlSelfRef.__PVT__rd_FIFO_payload = vlSelfRef.__PVT__rd_ftx_payload_int;
    vlSelf->__PVT__u_tcp->__PVT__rd_FIFO_payload = vlSelfRef.__PVT__rd_ftx_payload_int;
    vlSelfRef.__PVT__bytes_abt_sent = vlSelfRef.__PVT__bytes_abt_sent_int;
    vlSelf->__PVT__u_tcp->__PVT__bytes_abt_sent = vlSelfRef.__PVT__bytes_abt_sent_int;
    vlSelf->__PVT__u_tcp->__PVT__re_trans = vlSelfRef.__PVT__re_trans_int;
}

VL_INLINE_OPT void Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__11(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__11\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ACK_num_int = vlSelf->__PVT__u_tcp->__PVT__ACK_num;
    vlSelfRef.__PVT__ACK_rcv_flag_int = vlSelf->__PVT__u_tcp->__PVT__ACK_rcv_flag;
    vlSelf->__PVT__u_fifo_tx->__PVT__ACK_num = vlSelfRef.__PVT__ACK_num_int;
    vlSelf->__PVT__u_fifo_tx->__PVT__ACK_rcv_flag = vlSelfRef.__PVT__ACK_rcv_flag_int;
}

VL_INLINE_OPT void Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__1(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__1\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__checksum_TX = vlSelf->__PVT__u_tcp->__PVT__checksum_TX;
    vlSelf->__PVT__u_fifo_tx->__PVT__checksum_TX = vlSelfRef.__PVT__checksum_TX;
}

VL_INLINE_OPT void Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__5(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__5\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__seq_num_tx = vlSelf->__PVT__u_tcp->__PVT__seq_num_tx_out;
    vlSelf->__PVT__u_fifo_tx->__PVT__seq_num_tx = vlSelfRef.__PVT__seq_num_tx;
}

VL_INLINE_OPT void Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__7(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__7\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_ftx_en_int = vlSelf->__PVT__u_tcp->__PVT__rd_FIFO_en_tx;
    vlSelf->__PVT__u_fifo_tx->__PVT__rd_FIFO_en = vlSelfRef.__PVT__rd_ftx_en_int;
}
