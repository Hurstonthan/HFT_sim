// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation_TCP__F10.h"
#include "Vether_simulation_TCP_flow_ctrl.h"
#include "Vether_simulation_TCP_tx.h"

VL_INLINE_OPT void Vether_simulation_TCP__F10___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__7(Vether_simulation_TCP__F10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__7\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__bytes_sent = vlSelf->__PVT__TCP_tx->__PVT__bytes_sent;
    vlSelfRef.__PVT__TCP_len_data = vlSelf->__PVT__TCP_tx->__PVT__TCP_len_data;
    vlSelfRef.__PVT__TCP_transmit = vlSelf->__PVT__TCP_tx->__PVT__TCP_transmit;
    vlSelfRef.__PVT__TCP_tx_last = vlSelf->__PVT__TCP_tx->__PVT__TCP_tx_last;
    vlSelfRef.__PVT__seq_up = vlSelf->__PVT__TCP_tx->__PVT__seq_up;
    vlSelf->__PVT__tcp_flow->__PVT__bytes_sent = vlSelfRef.__PVT__bytes_sent;
    vlSelf->__PVT__tcp_flow->__PVT__seq_up = vlSelfRef.__PVT__seq_up;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__4(Vether_simulation_TCP__F10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__4\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__window_size_tx = vlSelf->__PVT__tcp_flow->__PVT__window_size_tx;
    vlSelfRef.__PVT__offset_tx = vlSelf->__PVT__tcp_flow->__PVT__offset_tx;
    vlSelfRef.__PVT__urgent_pointer_tx = vlSelf->__PVT__tcp_flow->__PVT__urgent_pointer_tx;
    vlSelfRef.__PVT__ACK_tx = vlSelf->__PVT__tcp_flow->__PVT__ACK_tx;
    vlSelfRef.__PVT__seq_num_tx = vlSelf->__PVT__tcp_flow->__PVT__seq_num_tx;
    vlSelfRef.__PVT__TCP_control_tx = vlSelf->__PVT__tcp_flow->__PVT__TCP_control_tx;
    vlSelf->__PVT__TCP_tx->__PVT__window_size_tx = vlSelfRef.__PVT__window_size_tx;
    vlSelf->__PVT__TCP_tx->__PVT__offset_tx = vlSelfRef.__PVT__offset_tx;
    vlSelf->__PVT__TCP_tx->__PVT__urgent_pointer_tx 
        = vlSelfRef.__PVT__urgent_pointer_tx;
    vlSelf->__PVT__TCP_tx->__PVT__ACK_tx = vlSelfRef.__PVT__ACK_tx;
    vlSelfRef.__PVT__seq_num_tx_out = vlSelfRef.__PVT__seq_num_tx;
    vlSelf->__PVT__TCP_tx->__PVT__seq_num_tx = vlSelfRef.__PVT__seq_num_tx;
    vlSelf->__PVT__TCP_tx->__PVT__TCP_control_tx = vlSelfRef.__PVT__TCP_control_tx;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__7(Vether_simulation_TCP__F10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__7\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__bytes_sent = vlSelf->__PVT__TCP_tx->__PVT__bytes_sent;
    vlSelfRef.__PVT__TCP_len_data = vlSelf->__PVT__TCP_tx->__PVT__TCP_len_data;
    vlSelfRef.__PVT__TCP_transmit = vlSelf->__PVT__TCP_tx->__PVT__TCP_transmit;
    vlSelfRef.__PVT__TCP_tx_last = vlSelf->__PVT__TCP_tx->__PVT__TCP_tx_last;
    vlSelfRef.__PVT__seq_up = vlSelf->__PVT__TCP_tx->__PVT__seq_up;
    vlSelf->__PVT__tcp_flow->__PVT__bytes_sent = vlSelfRef.__PVT__bytes_sent;
    vlSelf->__PVT__tcp_flow->__PVT__seq_up = vlSelfRef.__PVT__seq_up;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__4(Vether_simulation_TCP__F10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__4\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__window_size_tx = vlSelf->__PVT__tcp_flow->__PVT__window_size_tx;
    vlSelfRef.__PVT__offset_tx = vlSelf->__PVT__tcp_flow->__PVT__offset_tx;
    vlSelfRef.__PVT__urgent_pointer_tx = vlSelf->__PVT__tcp_flow->__PVT__urgent_pointer_tx;
    vlSelfRef.__PVT__ACK_tx = vlSelf->__PVT__tcp_flow->__PVT__ACK_tx;
    vlSelfRef.__PVT__seq_num_tx = vlSelf->__PVT__tcp_flow->__PVT__seq_num_tx;
    vlSelfRef.__PVT__TCP_control_tx = vlSelf->__PVT__tcp_flow->__PVT__TCP_control_tx;
    vlSelf->__PVT__TCP_tx->__PVT__window_size_tx = vlSelfRef.__PVT__window_size_tx;
    vlSelf->__PVT__TCP_tx->__PVT__offset_tx = vlSelfRef.__PVT__offset_tx;
    vlSelf->__PVT__TCP_tx->__PVT__urgent_pointer_tx 
        = vlSelfRef.__PVT__urgent_pointer_tx;
    vlSelf->__PVT__TCP_tx->__PVT__ACK_tx = vlSelfRef.__PVT__ACK_tx;
    vlSelfRef.__PVT__seq_num_tx_out = vlSelfRef.__PVT__seq_num_tx;
    vlSelf->__PVT__TCP_tx->__PVT__seq_num_tx = vlSelfRef.__PVT__seq_num_tx;
    vlSelf->__PVT__TCP_tx->__PVT__TCP_control_tx = vlSelfRef.__PVT__TCP_control_tx;
}
