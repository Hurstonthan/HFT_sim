// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation_TCP_ISN.h"

VL_INLINE_OPT void Vether_simulation_TCP_ISN___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__ISN_gen__0(Vether_simulation_TCP_ISN* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vether_simulation_TCP_ISN___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__ISN_gen__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__counter = vlSelfRef.__PVT__counter;
    vlSelfRef.__Vdly__ISN_num = vlSelfRef.__PVT__ISN_num;
    vlSelfRef.__Vdly__counter = ((IData)(vlSelfRef.__PVT__nRST)
                                  ? ((IData)(1U) + vlSelfRef.__PVT__counter)
                                  : 0xabcde123U);
    if (vlSelfRef.__PVT__nRST) {
        if (vlSelfRef.__PVT__gen_en) {
            vlSelfRef.__Vdly__ISN_num = vlSelfRef.__PVT__counter;
        }
    } else {
        vlSelfRef.__Vdly__ISN_num = 0xabcde123U;
    }
    vlSelfRef.__PVT__counter = vlSelfRef.__Vdly__counter;
    vlSelfRef.__PVT__ISN_num = vlSelfRef.__Vdly__ISN_num;
}

VL_INLINE_OPT void Vether_simulation_TCP_ISN___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__ISN_gen__0(Vether_simulation_TCP_ISN* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vether_simulation_TCP_ISN___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__ISN_gen__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__counter = vlSelfRef.__PVT__counter;
    vlSelfRef.__Vdly__ISN_num = vlSelfRef.__PVT__ISN_num;
    vlSelfRef.__Vdly__counter = ((IData)(vlSelfRef.__PVT__nRST)
                                  ? ((IData)(1U) + vlSelfRef.__PVT__counter)
                                  : 0xabcde123U);
    if (vlSelfRef.__PVT__nRST) {
        if (vlSelfRef.__PVT__gen_en) {
            vlSelfRef.__Vdly__ISN_num = vlSelfRef.__PVT__counter;
        }
    } else {
        vlSelfRef.__Vdly__ISN_num = 0xabcde123U;
    }
    vlSelfRef.__PVT__counter = vlSelfRef.__Vdly__counter;
    vlSelfRef.__PVT__ISN_num = vlSelfRef.__Vdly__ISN_num;
}
