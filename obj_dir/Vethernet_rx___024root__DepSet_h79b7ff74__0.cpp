// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vethernet_rx.h for the primary calling header

#include "Vethernet_rx__pch.h"
#include "Vethernet_rx__Syms.h"
#include "Vethernet_rx___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vethernet_rx___024root___dump_triggers__ico(Vethernet_rx___024root* vlSelf);
#endif  // VL_DEBUG

void Vethernet_rx___024root___eval_triggers__ico(Vethernet_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
    vlSelf->__VicoTriggered.set(1U, (vlSelf->ethernet_rx__DOT__mac_inst__DOT__mac_dest_addr 
                                     != vlSelf->__Vtrigprevexpr___TOP__ethernet_rx__DOT__mac_inst__DOT__mac_dest_addr__1));
    vlSelf->__Vtrigprevexpr___TOP__ethernet_rx__DOT__mac_inst__DOT__mac_dest_addr__1 
        = vlSelf->ethernet_rx__DOT__mac_inst__DOT__mac_dest_addr;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VicoDidInit))))) {
        vlSelf->__VicoDidInit = 1U;
        vlSelf->__VicoTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vethernet_rx___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vethernet_rx___024root___dump_triggers__act(Vethernet_rx___024root* vlSelf);
#endif  // VL_DEBUG

void Vethernet_rx___024root___eval_triggers__act(Vethernet_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (vlSelf->ethernet_rx__DOT__mac_inst__DOT__mac_dest_addr 
                                     != vlSelf->__Vtrigprevexpr___TOP__ethernet_rx__DOT__mac_inst__DOT__mac_dest_addr__2));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->CLK) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CLK__0))) 
                                     | ((~ (IData)(vlSelf->nRST)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__nRST__0))));
    vlSelf->__Vtrigprevexpr___TOP__ethernet_rx__DOT__mac_inst__DOT__mac_dest_addr__2 
        = vlSelf->ethernet_rx__DOT__mac_inst__DOT__mac_dest_addr;
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = vlSelf->CLK;
    vlSelf->__Vtrigprevexpr___TOP__nRST__0 = vlSelf->nRST;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vethernet_rx___024root___dump_triggers__act(vlSelf);
    }
#endif
}
