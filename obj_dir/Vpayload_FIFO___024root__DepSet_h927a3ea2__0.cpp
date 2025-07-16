// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpayload_FIFO.h for the primary calling header

#include "Vpayload_FIFO__pch.h"
#include "Vpayload_FIFO__Syms.h"
#include "Vpayload_FIFO___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpayload_FIFO___024root___dump_triggers__ico(Vpayload_FIFO___024root* vlSelf);
#endif  // VL_DEBUG

void Vpayload_FIFO___024root___eval_triggers__ico(Vpayload_FIFO___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpayload_FIFO___024root___eval_triggers__ico\n"); );
    Vpayload_FIFO__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpayload_FIFO___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpayload_FIFO___024root___dump_triggers__act(Vpayload_FIFO___024root* vlSelf);
#endif  // VL_DEBUG

void Vpayload_FIFO___024root___eval_triggers__act(Vpayload_FIFO___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpayload_FIFO___024root___eval_triggers__act\n"); );
    Vpayload_FIFO__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
        Vpayload_FIFO___024root___dump_triggers__act(vlSelf);
    }
#endif
}
