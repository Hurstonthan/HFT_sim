// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_TCP_ISN.h"

VL_INLINE_OPT void Vtop_TCP_ISN___nba_sequent__TOP__top__u_tcp__ISN_gen__0(Vtop_TCP_ISN* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_TCP_ISN___nba_sequent__TOP__top__u_tcp__ISN_gen__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
