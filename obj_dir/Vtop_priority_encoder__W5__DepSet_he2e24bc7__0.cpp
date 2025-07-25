// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_priority_encoder__W5.h"

VL_INLINE_OPT void Vtop_priority_encoder__W5___nba_sequent__TOP__top__u_tcp__tcp_flow__me__0(Vtop_priority_encoder__W5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_priority_encoder__W5___nba_sequent__TOP__top__u_tcp__tcp_flow__me__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__valid = 0U;
    vlSelfRef.__PVT__idx = 0U;
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__din), 0U) 
               & (~ (IData)(vlSelfRef.__PVT__valid))))) {
        vlSelfRef.__PVT__valid = 1U;
        vlSelfRef.__PVT__idx = 0U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 1U;
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__din), 1U) 
               & (~ (IData)(vlSelfRef.__PVT__valid))))) {
        vlSelfRef.__PVT__valid = 1U;
        vlSelfRef.__PVT__idx = 1U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 2U;
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__din), 2U) 
               & (~ (IData)(vlSelfRef.__PVT__valid))))) {
        vlSelfRef.__PVT__valid = 1U;
        vlSelfRef.__PVT__idx = 2U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 3U;
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__din), 3U) 
               & (~ (IData)(vlSelfRef.__PVT__valid))))) {
        vlSelfRef.__PVT__valid = 1U;
        vlSelfRef.__PVT__idx = 3U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 4U;
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__din), 4U) 
               & (~ (IData)(vlSelfRef.__PVT__valid))))) {
        vlSelfRef.__PVT__valid = 1U;
        vlSelfRef.__PVT__idx = 4U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 5U;
}

VL_INLINE_OPT void Vtop_priority_encoder__W5___nba_sequent__TOP__top__u_tcp__tcp_flow__pe__0(Vtop_priority_encoder__W5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_priority_encoder__W5___nba_sequent__TOP__top__u_tcp__tcp_flow__pe__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__valid = 0U;
    vlSelfRef.__PVT__idx = 0U;
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__din), 0U) 
               & (~ (IData)(vlSelfRef.__PVT__valid))))) {
        vlSelfRef.__PVT__valid = 1U;
        vlSelfRef.__PVT__idx = 0U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 1U;
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__din), 1U) 
               & (~ (IData)(vlSelfRef.__PVT__valid))))) {
        vlSelfRef.__PVT__valid = 1U;
        vlSelfRef.__PVT__idx = 1U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 2U;
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__din), 2U) 
               & (~ (IData)(vlSelfRef.__PVT__valid))))) {
        vlSelfRef.__PVT__valid = 1U;
        vlSelfRef.__PVT__idx = 2U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 3U;
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__din), 3U) 
               & (~ (IData)(vlSelfRef.__PVT__valid))))) {
        vlSelfRef.__PVT__valid = 1U;
        vlSelfRef.__PVT__idx = 3U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 4U;
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__din), 4U) 
               & (~ (IData)(vlSelfRef.__PVT__valid))))) {
        vlSelfRef.__PVT__valid = 1U;
        vlSelfRef.__PVT__idx = 4U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 5U;
}
