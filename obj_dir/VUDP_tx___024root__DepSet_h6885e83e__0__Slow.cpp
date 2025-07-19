// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUDP_tx.h for the primary calling header

#include "VUDP_tx__pch.h"
#include "VUDP_tx__Syms.h"
#include "VUDP_tx___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VUDP_tx___024root___dump_triggers__stl(VUDP_tx___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VUDP_tx___024root___eval_triggers__stl(VUDP_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUDP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUDP_tx___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VUDP_tx___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
