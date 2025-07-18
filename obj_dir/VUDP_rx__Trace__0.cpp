// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VUDP_rx__Syms.h"


void VUDP_rx___024root__trace_chg_0_sub_0(VUDP_rx___024root* vlSelf, VerilatedFst::Buffer* bufp);

void VUDP_rx___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUDP_rx___024root__trace_chg_0\n"); );
    // Init
    VUDP_rx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VUDP_rx___024root*>(voidSelf);
    VUDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VUDP_rx___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VUDP_rx___024root__trace_chg_0_sub_0(VUDP_rx___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VUDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUDP_rx___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgSData(oldp+0,(vlSelf->UDP_rx__DOT__next_cnt),16);
        bufp->chgSData(oldp+1,(vlSelf->UDP_rx__DOT__next_UDP_len),16);
        bufp->chgCData(oldp+2,(vlSelf->UDP_rx__DOT__nstate),3);
        bufp->chgBit(oldp+3,(vlSelf->UDP_rx__DOT__next_UDP_valid));
        bufp->chgQData(oldp+4,(vlSelf->UDP_rx__DOT__next_UDP_payload),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgSData(oldp+6,(vlSelf->UDP_rx__DOT__cnt),16);
        bufp->chgSData(oldp+7,(vlSelf->UDP_rx__DOT__UDP_len),16);
        bufp->chgCData(oldp+8,(vlSelf->UDP_rx__DOT__current_state),3);
    }
    bufp->chgBit(oldp+9,(vlSelf->CLK));
    bufp->chgBit(oldp+10,(vlSelf->nRST));
    bufp->chgBit(oldp+11,(vlSelf->IP_valid));
    bufp->chgBit(oldp+12,(vlSelf->IP_flush));
    bufp->chgQData(oldp+13,(vlSelf->IP_payload),64);
    bufp->chgBit(oldp+15,(vlSelf->is_udp));
    bufp->chgBit(oldp+16,(vlSelf->UDP_flush));
    bufp->chgBit(oldp+17,(vlSelf->UDP_valid));
    bufp->chgQData(oldp+18,(vlSelf->UDP_payload),64);
    bufp->chgBit(oldp+20,((0x1234U == (0xffffU & (IData)(
                                                         (vlSelf->IP_payload 
                                                          >> 0x20U))))));
    bufp->chgBit(oldp+21,((0x4321U == (0xffffU & (IData)(
                                                         (vlSelf->IP_payload 
                                                          >> 0x10U))))));
}

void VUDP_rx___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUDP_rx___024root__trace_cleanup\n"); );
    // Init
    VUDP_rx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VUDP_rx___024root*>(voidSelf);
    VUDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
