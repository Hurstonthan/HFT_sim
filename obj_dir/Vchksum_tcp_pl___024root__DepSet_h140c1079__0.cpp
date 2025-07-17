// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vchksum_tcp_pl.h for the primary calling header

#include "Vchksum_tcp_pl__pch.h"
#include "Vchksum_tcp_pl__Syms.h"
#include "Vchksum_tcp_pl___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vchksum_tcp_pl___024root___dump_triggers__ico(Vchksum_tcp_pl___024root* vlSelf);
#endif  // VL_DEBUG

void Vchksum_tcp_pl___024root___eval_triggers__ico(Vchksum_tcp_pl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vchksum_tcp_pl___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vchksum_tcp_pl___024root___dump_triggers__act(Vchksum_tcp_pl___024root* vlSelf);
#endif  // VL_DEBUG

void Vchksum_tcp_pl___024root___eval_triggers__act(Vchksum_tcp_pl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->CLK) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CLK__0))) 
                                     | ((~ (IData)(vlSelf->nRST)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__nRST__0))));
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = vlSelf->CLK;
    vlSelf->__Vtrigprevexpr___TOP__nRST__0 = vlSelf->nRST;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vchksum_tcp_pl___024root___dump_triggers__act(vlSelf);
    }
#endif
}
