// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vethernet_rx.h for the primary calling header

#include "Vethernet_rx__pch.h"
#include "Vethernet_rx__Syms.h"
#include "Vethernet_rx___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vethernet_rx___024root___dump_triggers__stl(Vethernet_rx___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vethernet_rx___024root___eval_triggers__stl(Vethernet_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vethernet_rx___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
    vlSelf->__VstlTriggered.set(1U, (vlSelf->ethernet_rx__DOT__mac_inst__DOT__mac_dest_addr 
                                     != vlSelf->__Vtrigprevexpr___TOP__ethernet_rx__DOT__mac_inst__DOT__mac_dest_addr__0));
    vlSelf->__Vtrigprevexpr___TOP__ethernet_rx__DOT__mac_inst__DOT__mac_dest_addr__0 
        = vlSelf->ethernet_rx__DOT__mac_inst__DOT__mac_dest_addr;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vethernet_rx___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
