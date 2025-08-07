// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation_MAC_tx.h"

VL_INLINE_OPT void Vether_simulation_MAC_tx___nba_sequent__TOP__ether_simulation__svr_inst__mac_tx__1(Vether_simulation_MAC_tx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_MAC_tx___nba_sequent__TOP__ether_simulation__svr_inst__mac_tx__1\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__IP_send = vlSelfRef.__PVT__IP_send;
    vlSelfRef.__Vdly__state = vlSelfRef.__PVT__state;
    vlSelfRef.__Vdly__len_counter = vlSelfRef.__PVT__len_counter;
    vlSelfRef.__Vdly__xgmii_txd_l = vlSelfRef.__PVT__xgmii_txd_l;
    vlSelfRef.__Vdly__xgmii_txc_l = vlSelfRef.__PVT__xgmii_txc_l;
    vlSelfRef.__Vdly__IP_send = ((IData)(vlSelfRef.__PVT__nRST) 
                                 && (IData)(vlSelfRef.__PVT__IP_send_l));
    if (vlSelfRef.__PVT__nRST) {
        vlSelfRef.__Vdly__state = vlSelfRef.__PVT__nstate;
        vlSelfRef.__Vdly__xgmii_txd_l = vlSelfRef.__PVT__nxgmii_txd_l;
        vlSelfRef.__Vdly__xgmii_txc_l = vlSelfRef.__PVT__nxgmii_txc_l;
        vlSelfRef.__Vdly__len_counter = vlSelfRef.__PVT__nlen_counter;
    } else {
        vlSelfRef.__Vdly__state = 0U;
        vlSelfRef.__Vdly__xgmii_txd_l = 0x707070707070707ULL;
        vlSelfRef.__Vdly__xgmii_txc_l = 0xffU;
        vlSelfRef.__Vdly__len_counter = 0U;
    }
    vlSelfRef.__PVT__IP_send = vlSelfRef.__Vdly__IP_send;
    vlSelfRef.__PVT__state = vlSelfRef.__Vdly__state;
    vlSelfRef.__PVT__len_counter = vlSelfRef.__Vdly__len_counter;
    vlSelfRef.__PVT__xgmii_txd_l = vlSelfRef.__Vdly__xgmii_txd_l;
    vlSelfRef.__PVT__xgmii_txc_l = vlSelfRef.__Vdly__xgmii_txc_l;
    vlSelfRef.__PVT__xgmii_txd = vlSelfRef.__PVT__xgmii_txd_l;
    vlSelfRef.__PVT__xgmii_txc = vlSelfRef.__PVT__xgmii_txc_l;
}

VL_INLINE_OPT void Vether_simulation_MAC_tx___nba_sequent__TOP__ether_simulation__clt_inst__mac_tx__1(Vether_simulation_MAC_tx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_MAC_tx___nba_sequent__TOP__ether_simulation__clt_inst__mac_tx__1\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__IP_send = vlSelfRef.__PVT__IP_send;
    vlSelfRef.__Vdly__state = vlSelfRef.__PVT__state;
    vlSelfRef.__Vdly__len_counter = vlSelfRef.__PVT__len_counter;
    vlSelfRef.__Vdly__xgmii_txd_l = vlSelfRef.__PVT__xgmii_txd_l;
    vlSelfRef.__Vdly__xgmii_txc_l = vlSelfRef.__PVT__xgmii_txc_l;
    vlSelfRef.__Vdly__IP_send = ((IData)(vlSelfRef.__PVT__nRST) 
                                 && (IData)(vlSelfRef.__PVT__IP_send_l));
    if (vlSelfRef.__PVT__nRST) {
        vlSelfRef.__Vdly__state = vlSelfRef.__PVT__nstate;
        vlSelfRef.__Vdly__xgmii_txd_l = vlSelfRef.__PVT__nxgmii_txd_l;
        vlSelfRef.__Vdly__xgmii_txc_l = vlSelfRef.__PVT__nxgmii_txc_l;
        vlSelfRef.__Vdly__len_counter = vlSelfRef.__PVT__nlen_counter;
    } else {
        vlSelfRef.__Vdly__state = 0U;
        vlSelfRef.__Vdly__xgmii_txd_l = 0x707070707070707ULL;
        vlSelfRef.__Vdly__xgmii_txc_l = 0xffU;
        vlSelfRef.__Vdly__len_counter = 0U;
    }
    vlSelfRef.__PVT__IP_send = vlSelfRef.__Vdly__IP_send;
    vlSelfRef.__PVT__state = vlSelfRef.__Vdly__state;
    vlSelfRef.__PVT__len_counter = vlSelfRef.__Vdly__len_counter;
    vlSelfRef.__PVT__xgmii_txd_l = vlSelfRef.__Vdly__xgmii_txd_l;
    vlSelfRef.__PVT__xgmii_txc_l = vlSelfRef.__Vdly__xgmii_txc_l;
    vlSelfRef.__PVT__xgmii_txd = vlSelfRef.__PVT__xgmii_txd_l;
    vlSelfRef.__PVT__xgmii_txc = vlSelfRef.__PVT__xgmii_txc_l;
}
