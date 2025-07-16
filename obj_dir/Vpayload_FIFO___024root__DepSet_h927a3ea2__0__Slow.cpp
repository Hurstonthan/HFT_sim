// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpayload_FIFO.h for the primary calling header

#include "Vpayload_FIFO__pch.h"
#include "Vpayload_FIFO__Syms.h"
#include "Vpayload_FIFO___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpayload_FIFO___024root___dump_triggers__stl(Vpayload_FIFO___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vpayload_FIFO___024root___eval_triggers__stl(Vpayload_FIFO___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpayload_FIFO___024root___eval_triggers__stl\n"); );
    Vpayload_FIFO__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpayload_FIFO___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
