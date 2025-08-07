// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation_MAC_tx.h"
#include "Vether_simulation_top.h"

VL_INLINE_OPT void Vether_simulation_top___ico_sequent__TOP__ether_simulation__svr_inst__1(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___ico_sequent__TOP__ether_simulation__svr_inst__1\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__frame_end = vlSelf->__PVT__mac_tx->__PVT__frame_end;
}

VL_INLINE_OPT void Vether_simulation_top___nba_comb__TOP__ether_simulation__svr_inst__0(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_comb__TOP__ether_simulation__svr_inst__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__frame_end = vlSelf->__PVT__mac_tx->__PVT__frame_end;
}

VL_INLINE_OPT void Vether_simulation_top___ico_sequent__TOP__ether_simulation__clt_inst__1(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___ico_sequent__TOP__ether_simulation__clt_inst__1\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__frame_end = vlSelf->__PVT__mac_tx->__PVT__frame_end;
}

VL_INLINE_OPT void Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__0(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__frame_end = vlSelf->__PVT__mac_tx->__PVT__frame_end;
}
