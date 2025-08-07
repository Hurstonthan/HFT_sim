// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation_priority_encoder__W8_Mz1.h"

VL_INLINE_OPT void Vether_simulation_priority_encoder__W8_Mz1___nba_sequent__TOP__ether_simulation__svr_inst__mac_rx__crc_check_encoder__0(Vether_simulation_priority_encoder__W8_Mz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vether_simulation_priority_encoder__W8_Mz1___nba_sequent__TOP__ether_simulation__svr_inst__mac_rx__crc_check_encoder__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__valid = 0U;
    vlSelfRef.__PVT__idx = 0U;
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__din), 0U) 
               & (~ (IData)(vlSelfRef.__PVT__valid))))) {
        vlSelfRef.__PVT__valid = 1U;
        vlSelfRef.__PVT__idx = 0U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 1U;
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__din), 1U) 
               & (~ (IData)(vlSelfRef.__PVT__valid))))) {
        vlSelfRef.__PVT__valid = 1U;
        vlSelfRef.__PVT__idx = 1U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 2U;
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__din), 2U) 
               & (~ (IData)(vlSelfRef.__PVT__valid))))) {
        vlSelfRef.__PVT__valid = 1U;
        vlSelfRef.__PVT__idx = 2U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 3U;
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__din), 3U) 
               & (~ (IData)(vlSelfRef.__PVT__valid))))) {
        vlSelfRef.__PVT__valid = 1U;
        vlSelfRef.__PVT__idx = 3U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 4U;
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__din), 4U) 
               & (~ (IData)(vlSelfRef.__PVT__valid))))) {
        vlSelfRef.__PVT__valid = 1U;
        vlSelfRef.__PVT__idx = 4U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 5U;
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__din), 5U) 
               & (~ (IData)(vlSelfRef.__PVT__valid))))) {
        vlSelfRef.__PVT__valid = 1U;
        vlSelfRef.__PVT__idx = 5U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 6U;
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__din), 6U) 
               & (~ (IData)(vlSelfRef.__PVT__valid))))) {
        vlSelfRef.__PVT__valid = 1U;
        vlSelfRef.__PVT__idx = 6U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 7U;
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__din), 7U) 
               & (~ (IData)(vlSelfRef.__PVT__valid))))) {
        vlSelfRef.__PVT__valid = 1U;
        vlSelfRef.__PVT__idx = 7U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 8U;
}

VL_INLINE_OPT void Vether_simulation_priority_encoder__W8_Mz1___nba_sequent__TOP__ether_simulation__clt_inst__mac_rx__crc_check_encoder__0(Vether_simulation_priority_encoder__W8_Mz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vether_simulation_priority_encoder__W8_Mz1___nba_sequent__TOP__ether_simulation__clt_inst__mac_rx__crc_check_encoder__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__valid = 0U;
    vlSelfRef.__PVT__idx = 0U;
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__din), 0U) 
               & (~ (IData)(vlSelfRef.__PVT__valid))))) {
        vlSelfRef.__PVT__valid = 1U;
        vlSelfRef.__PVT__idx = 0U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 1U;
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__din), 1U) 
               & (~ (IData)(vlSelfRef.__PVT__valid))))) {
        vlSelfRef.__PVT__valid = 1U;
        vlSelfRef.__PVT__idx = 1U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 2U;
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__din), 2U) 
               & (~ (IData)(vlSelfRef.__PVT__valid))))) {
        vlSelfRef.__PVT__valid = 1U;
        vlSelfRef.__PVT__idx = 2U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 3U;
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__din), 3U) 
               & (~ (IData)(vlSelfRef.__PVT__valid))))) {
        vlSelfRef.__PVT__valid = 1U;
        vlSelfRef.__PVT__idx = 3U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 4U;
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__din), 4U) 
               & (~ (IData)(vlSelfRef.__PVT__valid))))) {
        vlSelfRef.__PVT__valid = 1U;
        vlSelfRef.__PVT__idx = 4U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 5U;
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__din), 5U) 
               & (~ (IData)(vlSelfRef.__PVT__valid))))) {
        vlSelfRef.__PVT__valid = 1U;
        vlSelfRef.__PVT__idx = 5U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 6U;
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__din), 6U) 
               & (~ (IData)(vlSelfRef.__PVT__valid))))) {
        vlSelfRef.__PVT__valid = 1U;
        vlSelfRef.__PVT__idx = 6U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 7U;
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__din), 7U) 
               & (~ (IData)(vlSelfRef.__PVT__valid))))) {
        vlSelfRef.__PVT__valid = 1U;
        vlSelfRef.__PVT__idx = 7U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 8U;
}
