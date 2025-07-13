// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vcrc32_parallel_64bit__Syms.h"


void Vcrc32_parallel_64bit___024root__trace_chg_0_sub_0(Vcrc32_parallel_64bit___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vcrc32_parallel_64bit___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc32_parallel_64bit___024root__trace_chg_0\n"); );
    // Init
    Vcrc32_parallel_64bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcrc32_parallel_64bit___024root*>(voidSelf);
    Vcrc32_parallel_64bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcrc32_parallel_64bit___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcrc32_parallel_64bit___024root__trace_chg_0_sub_0(Vcrc32_parallel_64bit___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc32_parallel_64bit___024root__trace_chg_0_sub_0\n"); );
    Vcrc32_parallel_64bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.CLK));
    bufp->chgBit(oldp+1,(vlSelfRef.nRST));
    bufp->chgBit(oldp+2,(vlSelfRef.valid));
    bufp->chgBit(oldp+3,(vlSelfRef.crc_init));
    bufp->chgBit(oldp+4,(vlSelfRef.rx));
    bufp->chgQData(oldp+5,(vlSelfRef.data_in),64);
    bufp->chgIData(oldp+7,(vlSelfRef.crc_out),32);
    bufp->chgIData(oldp+8,(vlSelfRef.crc32_parallel_64bit__DOT__crc_reg),32);
    bufp->chgIData(oldp+9,(vlSelfRef.crc32_parallel_64bit__DOT__next_crc),32);
}

void Vcrc32_parallel_64bit___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc32_parallel_64bit___024root__trace_cleanup\n"); );
    // Init
    Vcrc32_parallel_64bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcrc32_parallel_64bit___024root*>(voidSelf);
    Vcrc32_parallel_64bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
