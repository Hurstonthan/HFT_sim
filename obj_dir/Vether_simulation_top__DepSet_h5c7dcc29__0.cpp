// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation_MAC_rx.h"
#include "Vether_simulation_top.h"

VL_INLINE_OPT void Vether_simulation_top___nba_sequent__TOP__ether_simulation__svr_inst__3(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_sequent__TOP__ether_simulation__svr_inst__3\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__mac_rx->__PVT__xgmii_rxd = vlSelfRef.__PVT__xgmii_rxd;
    vlSelfRef.__Vcellinp__mac_rx__xgmii_rxc = (0xffU 
                                               & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxc, 0U, 8U));
    vlSelf->__PVT__mac_rx->__PVT__xgmii_rxc = vlSelfRef.__Vcellinp__mac_rx__xgmii_rxc;
}

VL_INLINE_OPT void Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__2(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__2\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__mac_rx->__PVT__xgmii_rxd = vlSelfRef.__PVT__xgmii_rxd;
    vlSelfRef.__Vcellinp__mac_rx__xgmii_rxc = (0xffU 
                                               & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxc, 0U, 8U));
    vlSelf->__PVT__mac_rx->__PVT__xgmii_rxc = vlSelfRef.__Vcellinp__mac_rx__xgmii_rxc;
}
