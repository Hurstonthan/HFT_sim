// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vchksum_tcp_pl__Syms.h"


void Vchksum_tcp_pl___024root__trace_chg_0_sub_0(Vchksum_tcp_pl___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vchksum_tcp_pl___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root__trace_chg_0\n"); );
    // Init
    Vchksum_tcp_pl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vchksum_tcp_pl___024root*>(voidSelf);
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vchksum_tcp_pl___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vchksum_tcp_pl___024root__trace_chg_0_sub_0(Vchksum_tcp_pl___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->CLK));
    bufp->chgBit(oldp+1,(vlSelf->nRST));
    bufp->chgBit(oldp+2,(vlSelf->FIFO_rd_en));
    bufp->chgBit(oldp+3,(vlSelf->clear));
    bufp->chgQData(oldp+4,(vlSelf->TCP_payload_tx),64);
    bufp->chgSData(oldp+6,(vlSelf->TCP_checksum_pl),16);
    bufp->chgIData(oldp+7,(vlSelf->chksum_tcp_pl__DOT__TCP_checksum),17);
    bufp->chgIData(oldp+8,(vlSelf->chksum_tcp_pl__DOT__nTCP_checksum),17);
}

void Vchksum_tcp_pl___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root__trace_cleanup\n"); );
    // Init
    Vchksum_tcp_pl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vchksum_tcp_pl___024root*>(voidSelf);
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
