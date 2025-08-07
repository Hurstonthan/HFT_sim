// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation_IP_rx.h"
#include "Vether_simulation_TCP__F10.h"
#include "Vether_simulation_top.h"

VL_INLINE_OPT void Vether_simulation_top___nba_sequent__TOP__ether_simulation__svr_inst__6(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_sequent__TOP__ether_simulation__svr_inst__6\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__IP_bytes_rcv_len = vlSelf->__PVT__ip_rx->__PVT__IP_bytes_rcv_len;
    vlSelfRef.__PVT__IP_valid = vlSelf->__PVT__ip_rx->__PVT__IP_valid;
    vlSelfRef.__PVT__IP_rx_last = vlSelf->__PVT__ip_rx->__PVT__IP_last;
    vlSelfRef.__PVT__IP_payload = vlSelf->__PVT__ip_rx->__PVT__IP_payload;
    vlSelfRef.__PVT__IP_pseuder = vlSelf->__PVT__ip_rx->__PVT__IP_pseuder;
    vlSelf->__PVT__u_tcp->__PVT__IP_valid = vlSelfRef.__PVT__IP_valid;
    vlSelf->__PVT__u_tcp->__PVT__IP_last = vlSelfRef.__PVT__IP_rx_last;
    vlSelf->__PVT__u_tcp->__PVT__IP_payload = vlSelfRef.__PVT__IP_payload;
    vlSelf->__PVT__u_tcp->__PVT__IP_pseuder = vlSelfRef.__PVT__IP_pseuder;
}

VL_INLINE_OPT void Vether_simulation_top___nba_comb__TOP__ether_simulation__svr_inst__2(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_comb__TOP__ether_simulation__svr_inst__2\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__IP_flush = vlSelf->__PVT__ip_rx->__PVT__IP_flush;
    vlSelf->__PVT__u_tcp->__PVT__IP_flush = vlSelfRef.__PVT__IP_flush;
}

VL_INLINE_OPT void Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__6(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__6\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__IP_bytes_rcv_len = vlSelf->__PVT__ip_rx->__PVT__IP_bytes_rcv_len;
    vlSelfRef.__PVT__IP_valid = vlSelf->__PVT__ip_rx->__PVT__IP_valid;
    vlSelfRef.__PVT__IP_rx_last = vlSelf->__PVT__ip_rx->__PVT__IP_last;
    vlSelfRef.__PVT__IP_payload = vlSelf->__PVT__ip_rx->__PVT__IP_payload;
    vlSelfRef.__PVT__IP_pseuder = vlSelf->__PVT__ip_rx->__PVT__IP_pseuder;
    vlSelf->__PVT__u_tcp->__PVT__IP_valid = vlSelfRef.__PVT__IP_valid;
    vlSelf->__PVT__u_tcp->__PVT__IP_last = vlSelfRef.__PVT__IP_rx_last;
    vlSelf->__PVT__u_tcp->__PVT__IP_payload = vlSelfRef.__PVT__IP_payload;
    vlSelf->__PVT__u_tcp->__PVT__IP_pseuder = vlSelfRef.__PVT__IP_pseuder;
}

VL_INLINE_OPT void Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__2(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__2\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__IP_flush = vlSelf->__PVT__ip_rx->__PVT__IP_flush;
    vlSelf->__PVT__u_tcp->__PVT__IP_flush = vlSelfRef.__PVT__IP_flush;
}
