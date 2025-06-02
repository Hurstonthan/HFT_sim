// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIP_tx.h for the primary calling header

#include "VIP_tx__pch.h"
#include "VIP_tx__Syms.h"
#include "VIP_tx___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VIP_tx___024root___dump_triggers__ico(VIP_tx___024root* vlSelf);
#endif  // VL_DEBUG

void VIP_tx___024root___eval_triggers__ico(VIP_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_tx___024root___eval_triggers__ico\n"); );
    VIP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VIP_tx___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VIP_tx___024root___dump_triggers__act(VIP_tx___024root* vlSelf);
#endif  // VL_DEBUG

void VIP_tx___024root___eval_triggers__act(VIP_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_tx___024root___eval_triggers__act\n"); );
    VIP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.CLK) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__CLK__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.nRST)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__nRST__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__CLK__0 = vlSelfRef.CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__nRST__0 = vlSelfRef.nRST;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VIP_tx___024root___dump_triggers__act(vlSelf);
    }
#endif
}
