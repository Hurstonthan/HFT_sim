// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation_TCP__F10.h"
#include "Vether_simulation_TCP_receiver.h"

VL_INLINE_OPT void Vether_simulation_TCP__F10___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__6(Vether_simulation_TCP__F10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__6\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__tcp_rcv->__PVT__valid_IP_header_rx 
        = vlSelfRef.__PVT__IP_valid;
    vlSelf->__PVT__tcp_rcv->__PVT__IP_last = vlSelfRef.__PVT__IP_last;
    vlSelf->__PVT__tcp_rcv->__PVT__IP_payload_rx = vlSelfRef.__PVT__IP_payload;
    vlSelf->__PVT__tcp_rcv->__PVT__IP_pseuder = vlSelfRef.__PVT__IP_pseuder;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__1(Vether_simulation_TCP__F10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__1\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__tcp_rcv->__PVT__IP_flush = vlSelfRef.__PVT__IP_flush;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__6(Vether_simulation_TCP__F10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__6\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__tcp_rcv->__PVT__valid_IP_header_rx 
        = vlSelfRef.__PVT__IP_valid;
    vlSelf->__PVT__tcp_rcv->__PVT__IP_last = vlSelfRef.__PVT__IP_last;
    vlSelf->__PVT__tcp_rcv->__PVT__IP_payload_rx = vlSelfRef.__PVT__IP_payload;
    vlSelf->__PVT__tcp_rcv->__PVT__IP_pseuder = vlSelfRef.__PVT__IP_pseuder;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__1(Vether_simulation_TCP__F10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__1\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__tcp_rcv->__PVT__IP_flush = vlSelfRef.__PVT__IP_flush;
}
