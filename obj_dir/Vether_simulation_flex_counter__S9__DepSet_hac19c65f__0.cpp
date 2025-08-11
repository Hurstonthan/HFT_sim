// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation_flex_counter__S9.h"

VL_INLINE_OPT void Vether_simulation_flex_counter__S9___ico_sequent__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__timewait__0(Vether_simulation_flex_counter__S9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vether_simulation_flex_counter__S9___ico_sequent__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__timewait__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__clear) {
        vlSelfRef.__PVT__nxt_count_out = vlSelfRef.__PVT__initial_val;
        vlSelfRef.__PVT__nxt_rollover_flag = 0U;
    } else if (vlSelfRef.__PVT__count_enable) {
        vlSelfRef.__PVT__nxt_count_out = (0x1ffU & 
                                          ((IData)(1U) 
                                           + (IData)(vlSelfRef.__PVT__count_out)));
        vlSelfRef.__PVT__nxt_rollover_flag = 0U;
        if (((IData)(vlSelfRef.__PVT__count_out) >= (IData)(vlSelfRef.__PVT__rollover_val))) {
            vlSelfRef.__PVT__nxt_count_out = 1U;
            vlSelfRef.__PVT__nxt_rollover_flag = 1U;
        } else {
            vlSelfRef.__PVT__nxt_rollover_flag = 0U;
        }
    } else {
        vlSelfRef.__PVT__nxt_count_out = vlSelfRef.__PVT__count_out;
        vlSelfRef.__PVT__nxt_rollover_flag = vlSelfRef.__PVT__rollover_flag;
    }
}

VL_INLINE_OPT void Vether_simulation_flex_counter__S9___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__timewait__0(Vether_simulation_flex_counter__S9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vether_simulation_flex_counter__S9___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__timewait__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__count_out = vlSelfRef.__PVT__count_out;
    vlSelfRef.__Vdly__rollover_flag = vlSelfRef.__PVT__rollover_flag;
    if (vlSelfRef.__PVT__nRST) {
        vlSelfRef.__Vdly__count_out = vlSelfRef.__PVT__nxt_count_out;
        vlSelfRef.__Vdly__rollover_flag = vlSelfRef.__PVT__nxt_rollover_flag;
    } else {
        vlSelfRef.__Vdly__count_out = 0U;
        vlSelfRef.__Vdly__rollover_flag = 0U;
    }
    vlSelfRef.__PVT__count_out = vlSelfRef.__Vdly__count_out;
    vlSelfRef.__PVT__rollover_flag = vlSelfRef.__Vdly__rollover_flag;
}

VL_INLINE_OPT void Vether_simulation_flex_counter__S9___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__timewait__0(Vether_simulation_flex_counter__S9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vether_simulation_flex_counter__S9___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__timewait__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__clear) {
        vlSelfRef.__PVT__nxt_count_out = vlSelfRef.__PVT__initial_val;
        vlSelfRef.__PVT__nxt_rollover_flag = 0U;
    } else if (vlSelfRef.__PVT__count_enable) {
        vlSelfRef.__PVT__nxt_count_out = (0x1ffU & 
                                          ((IData)(1U) 
                                           + (IData)(vlSelfRef.__PVT__count_out)));
        vlSelfRef.__PVT__nxt_rollover_flag = 0U;
        if (((IData)(vlSelfRef.__PVT__count_out) >= (IData)(vlSelfRef.__PVT__rollover_val))) {
            vlSelfRef.__PVT__nxt_count_out = 1U;
            vlSelfRef.__PVT__nxt_rollover_flag = 1U;
        } else {
            vlSelfRef.__PVT__nxt_rollover_flag = 0U;
        }
    } else {
        vlSelfRef.__PVT__nxt_count_out = vlSelfRef.__PVT__count_out;
        vlSelfRef.__PVT__nxt_rollover_flag = vlSelfRef.__PVT__rollover_flag;
    }
}

VL_INLINE_OPT void Vether_simulation_flex_counter__S9___ico_sequent__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__timewait__0(Vether_simulation_flex_counter__S9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vether_simulation_flex_counter__S9___ico_sequent__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__timewait__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__clear) {
        vlSelfRef.__PVT__nxt_count_out = vlSelfRef.__PVT__initial_val;
        vlSelfRef.__PVT__nxt_rollover_flag = 0U;
    } else if (vlSelfRef.__PVT__count_enable) {
        vlSelfRef.__PVT__nxt_count_out = (0x1ffU & 
                                          ((IData)(1U) 
                                           + (IData)(vlSelfRef.__PVT__count_out)));
        vlSelfRef.__PVT__nxt_rollover_flag = 0U;
        if (((IData)(vlSelfRef.__PVT__count_out) >= (IData)(vlSelfRef.__PVT__rollover_val))) {
            vlSelfRef.__PVT__nxt_count_out = 1U;
            vlSelfRef.__PVT__nxt_rollover_flag = 1U;
        } else {
            vlSelfRef.__PVT__nxt_rollover_flag = 0U;
        }
    } else {
        vlSelfRef.__PVT__nxt_count_out = vlSelfRef.__PVT__count_out;
        vlSelfRef.__PVT__nxt_rollover_flag = vlSelfRef.__PVT__rollover_flag;
    }
}

VL_INLINE_OPT void Vether_simulation_flex_counter__S9___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__timewait__0(Vether_simulation_flex_counter__S9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vether_simulation_flex_counter__S9___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__timewait__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__count_out = vlSelfRef.__PVT__count_out;
    vlSelfRef.__Vdly__rollover_flag = vlSelfRef.__PVT__rollover_flag;
    if (vlSelfRef.__PVT__nRST) {
        vlSelfRef.__Vdly__count_out = vlSelfRef.__PVT__nxt_count_out;
        vlSelfRef.__Vdly__rollover_flag = vlSelfRef.__PVT__nxt_rollover_flag;
    } else {
        vlSelfRef.__Vdly__count_out = 0U;
        vlSelfRef.__Vdly__rollover_flag = 0U;
    }
    vlSelfRef.__PVT__count_out = vlSelfRef.__Vdly__count_out;
    vlSelfRef.__PVT__rollover_flag = vlSelfRef.__Vdly__rollover_flag;
}

VL_INLINE_OPT void Vether_simulation_flex_counter__S9___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__timewait__0(Vether_simulation_flex_counter__S9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vether_simulation_flex_counter__S9___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__timewait__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__clear) {
        vlSelfRef.__PVT__nxt_count_out = vlSelfRef.__PVT__initial_val;
        vlSelfRef.__PVT__nxt_rollover_flag = 0U;
    } else if (vlSelfRef.__PVT__count_enable) {
        vlSelfRef.__PVT__nxt_count_out = (0x1ffU & 
                                          ((IData)(1U) 
                                           + (IData)(vlSelfRef.__PVT__count_out)));
        vlSelfRef.__PVT__nxt_rollover_flag = 0U;
        if (((IData)(vlSelfRef.__PVT__count_out) >= (IData)(vlSelfRef.__PVT__rollover_val))) {
            vlSelfRef.__PVT__nxt_count_out = 1U;
            vlSelfRef.__PVT__nxt_rollover_flag = 1U;
        } else {
            vlSelfRef.__PVT__nxt_rollover_flag = 0U;
        }
    } else {
        vlSelfRef.__PVT__nxt_count_out = vlSelfRef.__PVT__count_out;
        vlSelfRef.__PVT__nxt_rollover_flag = vlSelfRef.__PVT__rollover_flag;
    }
}
