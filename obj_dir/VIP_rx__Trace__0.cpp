// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VIP_rx__Syms.h"


void VIP_rx___024root__trace_chg_0_sub_0(VIP_rx___024root* vlSelf, VerilatedFst::Buffer* bufp);

void VIP_rx___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_rx___024root__trace_chg_0\n"); );
    // Init
    VIP_rx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VIP_rx___024root*>(voidSelf);
    VIP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VIP_rx___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VIP_rx___024root__trace_chg_0_sub_0(VIP_rx___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_rx___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+0,(vlSelf->IP_rx__DOT__nstate),4);
        bufp->chgSData(oldp+1,(vlSelf->IP_rx__DOT__nIP_checksum),16);
        bufp->chgQData(oldp+2,(vlSelf->IP_rx__DOT__nIP_payload),64);
        bufp->chgSData(oldp+4,(vlSelf->IP_rx__DOT__nbytes_rcv),16);
        bufp->chgBit(oldp+5,(vlSelf->IP_rx__DOT__chksum_en));
        bufp->chgQData(oldp+6,(vlSelf->IP_rx__DOT__chksum_in),64);
        bufp->chgSData(oldp+8,(vlSelf->IP_rx__DOT__ndst_addr),16);
        bufp->chgSData(oldp+9,(vlSelf->IP_rx__DOT__nIP_len),16);
        bufp->chgBit(oldp+10,(vlSelf->IP_rx__DOT__nIP_valid));
        bufp->chgBit(oldp+11,(vlSelf->IP_rx__DOT__next_is_udp));
        bufp->chgBit(oldp+12,(vlSelf->IP_rx__DOT__next_is_tcp));
        bufp->chgIData(oldp+13,(vlSelf->IP_rx__DOT__chksum_inst__DOT__nTCP_checksum),17);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+14,(vlSelf->IP_rx__DOT__state),4);
        bufp->chgSData(oldp+15,(vlSelf->IP_rx__DOT__IP_checksum),16);
        bufp->chgSData(oldp+16,(vlSelf->IP_rx__DOT__bytes_rcv),16);
        bufp->chgBit(oldp+17,(vlSelf->IP_rx__DOT__chksum_clear));
        bufp->chgSData(oldp+18,((0xffffU & vlSelf->IP_rx__DOT__chksum_inst__DOT__TCP_checksum)),16);
        bufp->chgIData(oldp+19,((0xffffU & vlSelf->IP_rx__DOT__chksum_inst__DOT__TCP_checksum)),17);
        bufp->chgSData(oldp+20,(vlSelf->IP_rx__DOT__dst_addr),16);
        bufp->chgSData(oldp+21,(vlSelf->IP_rx__DOT__IP_len),16);
        bufp->chgIData(oldp+22,(vlSelf->IP_rx__DOT__chksum_inst__DOT__TCP_checksum),17);
    }
    bufp->chgBit(oldp+23,(vlSelf->CLK));
    bufp->chgBit(oldp+24,(vlSelf->nRST));
    bufp->chgBit(oldp+25,(vlSelf->MAC_valid));
    bufp->chgQData(oldp+26,(vlSelf->MAC_payload_rcv),64);
    bufp->chgBit(oldp+28,(vlSelf->MAC_flush));
    bufp->chgCData(oldp+29,(vlSelf->bytes_rcv_len),8);
    bufp->chgBit(oldp+30,(vlSelf->IP_valid));
    bufp->chgBit(oldp+31,(vlSelf->IP_flush));
    bufp->chgQData(oldp+32,(vlSelf->IP_payload),64);
    bufp->chgBit(oldp+34,(vlSelf->is_udp));
    bufp->chgBit(oldp+35,(vlSelf->is_tcp));
}

void VIP_rx___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_rx___024root__trace_cleanup\n"); );
    // Init
    VIP_rx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VIP_rx___024root*>(voidSelf);
    VIP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
