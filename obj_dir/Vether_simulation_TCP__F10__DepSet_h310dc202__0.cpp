// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation_TCP_ISN.h"
#include "Vether_simulation_TCP__F10.h"

VL_INLINE_OPT void Vether_simulation_TCP__F10___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__0(Vether_simulation_TCP__F10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ISN_num = vlSelf->__PVT__ISN_gen->__PVT__ISN_num;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__0(Vether_simulation_TCP__F10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ISN_num = vlSelf->__PVT__ISN_gen->__PVT__ISN_num;
}
