// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIP_UDP_rx.h for the primary calling header

#include "VIP_UDP_rx__pch.h"
#include "VIP_UDP_rx__Syms.h"
#include "VIP_UDP_rx___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VIP_UDP_rx___024root___dump_triggers__stl(VIP_UDP_rx___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VIP_UDP_rx___024root___eval_triggers__stl(VIP_UDP_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_rx___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VIP_UDP_rx___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
