// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation_IP_tx.h"
#include "Vether_simulation_TCP__F10.h"
#include "Vether_simulation_top.h"

VL_INLINE_OPT void Vether_simulation_top___nba_sequent__TOP__ether_simulation__svr_inst__9(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_sequent__TOP__ether_simulation__svr_inst__9\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__TCP_len_data = vlSelf->__PVT__u_tcp->__PVT__TCP_len_data;
    vlSelfRef.__PVT__TCP_transmit = vlSelf->__PVT__u_tcp->__PVT__TCP_transmit;
    vlSelfRef.__PVT__TCP_tx_last = vlSelf->__PVT__u_tcp->__PVT__TCP_tx_last;
    vlSelf->__PVT__ip_tx->__PVT__len_data = vlSelfRef.__PVT__TCP_len_data;
    vlSelf->__PVT__ip_tx->__PVT__protocol_transmit 
        = vlSelfRef.__PVT__TCP_transmit;
    vlSelf->__PVT__ip_tx->__PVT__protocol_last = vlSelfRef.__PVT__TCP_tx_last;
}

VL_INLINE_OPT void Vether_simulation_top___nba_comb__TOP__ether_simulation__svr_inst__3(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_comb__TOP__ether_simulation__svr_inst__3\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__TCP_send = vlSelf->__PVT__ip_tx->__PVT__protocol_send;
    vlSelf->__PVT__u_tcp->__PVT__TCP_send = vlSelfRef.__PVT__TCP_send;
}

VL_INLINE_OPT void Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__9(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__9\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__TCP_len_data = vlSelf->__PVT__u_tcp->__PVT__TCP_len_data;
    vlSelfRef.__PVT__TCP_transmit = vlSelf->__PVT__u_tcp->__PVT__TCP_transmit;
    vlSelfRef.__PVT__TCP_tx_last = vlSelf->__PVT__u_tcp->__PVT__TCP_tx_last;
    vlSelf->__PVT__ip_tx->__PVT__len_data = vlSelfRef.__PVT__TCP_len_data;
    vlSelf->__PVT__ip_tx->__PVT__protocol_transmit 
        = vlSelfRef.__PVT__TCP_transmit;
    vlSelf->__PVT__ip_tx->__PVT__protocol_last = vlSelfRef.__PVT__TCP_tx_last;
}

VL_INLINE_OPT void Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__3(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__3\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__TCP_send = vlSelf->__PVT__ip_tx->__PVT__protocol_send;
    vlSelf->__PVT__u_tcp->__PVT__TCP_send = vlSelfRef.__PVT__TCP_send;
}
