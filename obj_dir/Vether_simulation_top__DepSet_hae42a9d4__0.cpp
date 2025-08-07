// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation_IP_tx.h"
#include "Vether_simulation_MAC_tx.h"
#include "Vether_simulation_top.h"

VL_INLINE_OPT void Vether_simulation_top___nba_sequent__TOP__ether_simulation__svr_inst__2(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_sequent__TOP__ether_simulation__svr_inst__2\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__IP_send = vlSelf->__PVT__mac_tx->__PVT__IP_send;
    vlSelfRef.__PVT__xgmii_txd = vlSelf->__PVT__mac_tx->__PVT__xgmii_txd;
    vlSelfRef.__PVT__xgmii_txc = vlSelf->__PVT__mac_tx->__PVT__xgmii_txc;
    vlSelf->__PVT__ip_tx->__PVT__IP_send = vlSelfRef.__PVT__IP_send;
}

VL_INLINE_OPT void Vether_simulation_top___nba_sequent__TOP__ether_simulation__svr_inst__4(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_sequent__TOP__ether_simulation__svr_inst__4\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__IP_tx_last = vlSelf->__PVT__ip_tx->__PVT__IP_last;
    vlSelfRef.__PVT__IP_transmit = vlSelf->__PVT__ip_tx->__PVT__IP_transmit;
    vlSelfRef.__PVT__tt_len_data = vlSelf->__PVT__ip_tx->__PVT__tt_len_data;
    vlSelf->__PVT__mac_tx->__PVT__IP_last = vlSelfRef.__PVT__IP_tx_last;
    vlSelf->__PVT__mac_tx->__PVT__IP_transmit = vlSelfRef.__PVT__IP_transmit;
    vlSelf->__PVT__mac_tx->__PVT__tt_len_data = vlSelfRef.__PVT__tt_len_data;
}

VL_INLINE_OPT void Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__3(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__3\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__IP_send = vlSelf->__PVT__mac_tx->__PVT__IP_send;
    vlSelfRef.__PVT__xgmii_txd = vlSelf->__PVT__mac_tx->__PVT__xgmii_txd;
    vlSelfRef.__PVT__xgmii_txc = vlSelf->__PVT__mac_tx->__PVT__xgmii_txc;
    vlSelf->__PVT__ip_tx->__PVT__IP_send = vlSelfRef.__PVT__IP_send;
}

VL_INLINE_OPT void Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__4(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__4\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__IP_tx_last = vlSelf->__PVT__ip_tx->__PVT__IP_last;
    vlSelfRef.__PVT__IP_transmit = vlSelf->__PVT__ip_tx->__PVT__IP_transmit;
    vlSelfRef.__PVT__tt_len_data = vlSelf->__PVT__ip_tx->__PVT__tt_len_data;
    vlSelf->__PVT__mac_tx->__PVT__IP_last = vlSelfRef.__PVT__IP_tx_last;
    vlSelf->__PVT__mac_tx->__PVT__IP_transmit = vlSelfRef.__PVT__IP_transmit;
    vlSelf->__PVT__mac_tx->__PVT__tt_len_data = vlSelfRef.__PVT__tt_len_data;
}
