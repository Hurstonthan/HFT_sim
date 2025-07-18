// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFIFO_TX.h for the primary calling header

#include "VFIFO_TX__pch.h"
#include "VFIFO_TX__Syms.h"
#include "VFIFO_TX___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VFIFO_TX___024root___dump_triggers__stl(VFIFO_TX___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VFIFO_TX___024root___eval_triggers__stl(VFIFO_TX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_TX___024root___eval_triggers__stl\n"); );
    VFIFO_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VFIFO_TX___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
