// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VIP_UDP_rx__Syms.h"


void VIP_UDP_rx___024root__trace_chg_0_sub_0(VIP_UDP_rx___024root* vlSelf, VerilatedFst::Buffer* bufp);

void VIP_UDP_rx___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_rx___024root__trace_chg_0\n"); );
    // Init
    VIP_UDP_rx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VIP_UDP_rx___024root*>(voidSelf);
    VIP_UDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VIP_UDP_rx___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VIP_UDP_rx___024root__trace_chg_0_sub_0(VIP_UDP_rx___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_rx___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__test_valid),4);
        bufp->chgCData(oldp+1,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__ip_version),4);
        bufp->chgBit(oldp+2,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__is_ip_version_valid));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+3,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nstate),4);
        bufp->chgSData(oldp+4,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nIP_checksum),16);
        bufp->chgQData(oldp+5,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nIP_payload),64);
        bufp->chgSData(oldp+7,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nbytes_rcv),16);
        bufp->chgBit(oldp+8,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_en));
        bufp->chgQData(oldp+9,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_in),64);
        bufp->chgSData(oldp+11,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__ndst_addr),16);
        bufp->chgSData(oldp+12,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nIP_len),16);
        bufp->chgBit(oldp+13,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__nIP_valid));
        bufp->chgBit(oldp+14,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__next_is_udp));
        bufp->chgBit(oldp+15,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__next_is_tcp));
        bufp->chgBit(oldp+16,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__is_src_addr));
        bufp->chgIData(oldp+17,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__nTCP_checksum),17);
        bufp->chgIData(oldp+18,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__temp),20);
        bufp->chgIData(oldp+19,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__temp1),20);
        bufp->chgIData(oldp+20,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__temp2),20);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+21,(vlSelf->IP_UDP_rx__DOT__IP_valid));
        bufp->chgBit(oldp+22,(vlSelf->IP_UDP_rx__DOT__IP_flush));
        bufp->chgQData(oldp+23,(vlSelf->IP_UDP_rx__DOT__IP_payload),64);
        bufp->chgBit(oldp+25,(vlSelf->IP_UDP_rx__DOT__is_udp));
        bufp->chgBit(oldp+26,(vlSelf->IP_UDP_rx__DOT__is_tcp));
        bufp->chgCData(oldp+27,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__state),4);
        bufp->chgSData(oldp+28,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__IP_checksum),16);
        bufp->chgSData(oldp+29,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__bytes_rcv),16);
        bufp->chgBit(oldp+30,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_clear));
        bufp->chgSData(oldp+31,(((0U == (0xffffU & vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum))
                                  ? 0xffffU : (0xffffU 
                                               & vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum))),16);
        bufp->chgIData(oldp+32,(((0U == (0xffffU & vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum))
                                  ? 0xffffU : (0xffffU 
                                               & vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum))),17);
        bufp->chgSData(oldp+33,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__dst_addr),16);
        bufp->chgSData(oldp+34,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__IP_len),16);
        bufp->chgIData(oldp+35,(vlSelf->IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum),17);
        bufp->chgSData(oldp+36,(vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__cnt),16);
        bufp->chgSData(oldp+37,(vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__next_cnt),16);
        bufp->chgSData(oldp+38,(vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__UDP_len),16);
        bufp->chgSData(oldp+39,(vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__next_UDP_len),16);
        bufp->chgCData(oldp+40,(vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__current_state),3);
        bufp->chgCData(oldp+41,(vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__nstate),3);
        bufp->chgBit(oldp+42,(vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__next_UDP_valid));
        bufp->chgQData(oldp+43,(vlSelf->IP_UDP_rx__DOT__udp_inst__DOT__next_UDP_payload),64);
        bufp->chgBit(oldp+45,((0x1234U == (0xffffU 
                                           & (IData)(
                                                     (vlSelf->IP_UDP_rx__DOT__IP_payload 
                                                      >> 0x20U))))));
        bufp->chgBit(oldp+46,((0x4321U == (0xffffU 
                                           & (IData)(
                                                     (vlSelf->IP_UDP_rx__DOT__IP_payload 
                                                      >> 0x10U))))));
    }
    bufp->chgBit(oldp+47,(vlSelf->CLK));
    bufp->chgBit(oldp+48,(vlSelf->nRST));
    bufp->chgBit(oldp+49,(vlSelf->MAC_valid));
    bufp->chgQData(oldp+50,(vlSelf->MAC_payload_rcv),64);
    bufp->chgBit(oldp+52,(vlSelf->MAC_flush));
    bufp->chgCData(oldp+53,(vlSelf->bytes_rcv_len),8);
    bufp->chgBit(oldp+54,(vlSelf->UDP_valid));
    bufp->chgBit(oldp+55,(vlSelf->UDP_flush));
    bufp->chgQData(oldp+56,(vlSelf->UDP_payload),64);
    bufp->chgSData(oldp+58,((0xffffU & (IData)((vlSelf->MAC_payload_rcv 
                                                >> 0x30U)))),16);
    bufp->chgSData(oldp+59,((0xffffU & (IData)((vlSelf->MAC_payload_rcv 
                                                >> 0x10U)))),16);
    bufp->chgCData(oldp+60,((0xffU & (IData)((vlSelf->MAC_payload_rcv 
                                              >> 8U)))),8);
    bufp->chgCData(oldp+61,((7U & (IData)((vlSelf->MAC_payload_rcv 
                                           >> 0x1dU)))),3);
    bufp->chgSData(oldp+62,((0x1fffU & (IData)((vlSelf->MAC_payload_rcv 
                                                >> 0x10U)))),13);
}

void VIP_UDP_rx___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_rx___024root__trace_cleanup\n"); );
    // Init
    VIP_UDP_rx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VIP_UDP_rx___024root*>(voidSelf);
    VIP_UDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
