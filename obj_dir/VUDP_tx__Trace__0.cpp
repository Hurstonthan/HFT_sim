// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VUDP_tx__Syms.h"


void VUDP_tx___024root__trace_chg_0_sub_0(VUDP_tx___024root* vlSelf, VerilatedFst::Buffer* bufp);

void VUDP_tx___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUDP_tx___024root__trace_chg_0\n"); );
    // Init
    VUDP_tx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VUDP_tx___024root*>(voidSelf);
    VUDP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VUDP_tx___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VUDP_tx___024root__trace_chg_0_sub_0(VUDP_tx___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VUDP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUDP_tx___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->CLK));
    bufp->chgBit(oldp+1,(vlSelf->nRST));
    bufp->chgBit(oldp+2,(vlSelf->UDP_valid));
    bufp->chgQData(oldp+3,(vlSelf->UDP_payload),64);
    bufp->chgSData(oldp+5,(vlSelf->UDP_len),16);
    bufp->chgSData(oldp+6,(vlSelf->UDP_src_port),16);
    bufp->chgSData(oldp+7,(vlSelf->UDP_dest_port),16);
    bufp->chgBit(oldp+8,(vlSelf->UDP_last));
    bufp->chgQData(oldp+9,(vlSelf->IP_payload),64);
    bufp->chgBit(oldp+11,(vlSelf->IP_valid));
    bufp->chgBit(oldp+12,(vlSelf->IP_last));
    bufp->chgCData(oldp+13,(vlSelf->UDP_tx__DOT__current_state),2);
    bufp->chgCData(oldp+14,(vlSelf->UDP_tx__DOT__nstate),2);
    bufp->chgSData(oldp+15,((0xffffU & ((IData)(8U) 
                                        + (IData)(vlSelf->UDP_len)))),16);
    bufp->chgQData(oldp+16,(vlSelf->UDP_tx__DOT__header_reg),64);
}

void VUDP_tx___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUDP_tx___024root__trace_cleanup\n"); );
    // Init
    VUDP_tx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VUDP_tx___024root*>(voidSelf);
    VUDP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
