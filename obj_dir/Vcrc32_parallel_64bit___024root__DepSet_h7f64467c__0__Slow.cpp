// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcrc32_parallel_64bit.h for the primary calling header

#include "Vcrc32_parallel_64bit__pch.h"
#include "Vcrc32_parallel_64bit__Syms.h"
#include "Vcrc32_parallel_64bit___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcrc32_parallel_64bit___024root___dump_triggers__stl(Vcrc32_parallel_64bit___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcrc32_parallel_64bit___024root___eval_triggers__stl(Vcrc32_parallel_64bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc32_parallel_64bit___024root___eval_triggers__stl\n"); );
    Vcrc32_parallel_64bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcrc32_parallel_64bit___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
