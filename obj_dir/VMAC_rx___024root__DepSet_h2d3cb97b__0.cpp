// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMAC_rx.h for the primary calling header

#include "VMAC_rx__pch.h"
#include "VMAC_rx__Syms.h"
#include "VMAC_rx___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VMAC_rx___024root___dump_triggers__ico(VMAC_rx___024root* vlSelf);
#endif  // VL_DEBUG

void VMAC_rx___024root___eval_triggers__ico(VMAC_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VMAC_rx___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMAC_rx___024root___dump_triggers__act(VMAC_rx___024root* vlSelf);
#endif  // VL_DEBUG

void VMAC_rx___024root___eval_triggers__act(VMAC_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->CLK) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CLK__0))) 
                                     | ((~ (IData)(vlSelf->nRST)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__nRST__0))));
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = vlSelf->CLK;
    vlSelf->__Vtrigprevexpr___TOP__nRST__0 = vlSelf->nRST;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VMAC_rx___024root___dump_triggers__act(vlSelf);
    }
#endif
}
