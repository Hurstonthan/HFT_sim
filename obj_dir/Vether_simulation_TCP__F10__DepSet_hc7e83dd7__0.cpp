// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation_TCP__F10.h"
#include "Vether_simulation_TCP_flow_ctrl.h"
#include "Vether_simulation_flex_counter__S20.h"

VL_INLINE_OPT void Vether_simulation_TCP__F10___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__2(Vether_simulation_TCP__F10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__2\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__clear_timeout = vlSelf->__PVT__tcp_flow->__PVT__clear_timeout;
    vlSelfRef.__PVT__seq_rcv_start = vlSelf->__PVT__tcp_flow->__PVT__seq_rcv_str;
    vlSelfRef.__PVT__count_en_timeout = vlSelf->__PVT__tcp_flow->__PVT__count_en_timeout;
    vlSelfRef.__PVT__handshake_done = vlSelf->__PVT__tcp_flow->__PVT__hand_shake_done;
    vlSelfRef.__PVT__out_order_req = vlSelf->__PVT__tcp_flow->__PVT__out_order_req;
    vlSelfRef.__PVT__seq_num = vlSelf->__PVT__tcp_flow->__PVT__seq_num_out;
    vlSelfRef.__PVT__rcv_next = vlSelf->__PVT__tcp_flow->__PVT__rcv_next_out;
    vlSelf->__PVT__timeout_fl->__PVT__clear = vlSelfRef.__PVT__clear_timeout;
    vlSelf->__PVT__timeout_fl->__PVT__count_enable 
        = vlSelfRef.__PVT__count_en_timeout;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__4(Vether_simulation_TCP__F10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__4\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__timeout_flag = vlSelf->__PVT__timeout_fl->__PVT__rollover_flag;
    vlSelf->__PVT__tcp_flow->__PVT__timeout_flag = vlSelfRef.__PVT__timeout_flag;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__2(Vether_simulation_TCP__F10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__2\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__clear_timeout = vlSelf->__PVT__tcp_flow->__PVT__clear_timeout;
    vlSelfRef.__PVT__seq_rcv_start = vlSelf->__PVT__tcp_flow->__PVT__seq_rcv_str;
    vlSelfRef.__PVT__count_en_timeout = vlSelf->__PVT__tcp_flow->__PVT__count_en_timeout;
    vlSelfRef.__PVT__handshake_done = vlSelf->__PVT__tcp_flow->__PVT__hand_shake_done;
    vlSelfRef.__PVT__out_order_req = vlSelf->__PVT__tcp_flow->__PVT__out_order_req;
    vlSelfRef.__PVT__seq_num = vlSelf->__PVT__tcp_flow->__PVT__seq_num_out;
    vlSelfRef.__PVT__rcv_next = vlSelf->__PVT__tcp_flow->__PVT__rcv_next_out;
    vlSelf->__PVT__timeout_fl->__PVT__clear = vlSelfRef.__PVT__clear_timeout;
    vlSelf->__PVT__timeout_fl->__PVT__count_enable 
        = vlSelfRef.__PVT__count_en_timeout;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__4(Vether_simulation_TCP__F10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__4\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__timeout_flag = vlSelf->__PVT__timeout_fl->__PVT__rollover_flag;
    vlSelf->__PVT__tcp_flow->__PVT__timeout_flag = vlSelfRef.__PVT__timeout_flag;
}
