// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VIP_UDP_tx__Syms.h"


void VIP_UDP_tx___024root__trace_chg_0_sub_0(VIP_UDP_tx___024root* vlSelf, VerilatedFst::Buffer* bufp);

void VIP_UDP_tx___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_tx___024root__trace_chg_0\n"); );
    // Init
    VIP_UDP_tx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VIP_UDP_tx___024root*>(voidSelf);
    VIP_UDP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VIP_UDP_tx___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VIP_UDP_tx___024root__trace_chg_0_sub_0(VIP_UDP_tx___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VIP_UDP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_tx___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+0,(vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__nxIP_state),3);
        bufp->chgQData(oldp+1,(vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__nxIP_transmit_l),64);
        bufp->chgIData(oldp+3,(vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__temp),20);
        bufp->chgIData(oldp+4,(vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__nIPv4_chk_sum),17);
        bufp->chgSData(oldp+5,(vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__ntt_len_data),16);
        bufp->chgQData(oldp+6,(vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__next_IP_payload),64);
        bufp->chgCData(oldp+8,(vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__nstate),3);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgQData(oldp+9,(vlSelf->IP_UDP_tx__DOT__IP_payload),64);
        bufp->chgBit(oldp+11,(vlSelf->IP_UDP_tx__DOT__UDP_last));
        bufp->chgCData(oldp+12,(vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__IP_state),3);
        bufp->chgBit(oldp+13,(vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__chk_sum_valid));
        bufp->chgIData(oldp+14,(vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__IPv4_chk_sum),17);
        bufp->chgSData(oldp+15,(vlSelf->IP_UDP_tx__DOT__ip_tx_inst__DOT__chksum_rslt),16);
        bufp->chgCData(oldp+16,(vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__current_state),3);
        bufp->chgQData(oldp+17,(vlSelf->IP_UDP_tx__DOT__udp_tx_inst__DOT__header_reg),64);
    }
    bufp->chgBit(oldp+19,(vlSelf->CLK));
    bufp->chgBit(oldp+20,(vlSelf->nRST));
    bufp->chgBit(oldp+21,(vlSelf->valid));
    bufp->chgSData(oldp+22,(vlSelf->UDP_len),16);
    bufp->chgQData(oldp+23,(vlSelf->UDP_payload),64);
    bufp->chgBit(oldp+25,(vlSelf->protocol_last));
    bufp->chgQData(oldp+26,(vlSelf->IP_transmit),64);
    bufp->chgSData(oldp+28,(vlSelf->tt_len_data),16);
    bufp->chgBit(oldp+29,(vlSelf->IP_last));
    bufp->chgBit(oldp+30,(vlSelf->protocol_send));
    bufp->chgSData(oldp+31,((0xffffU & ((IData)(8U) 
                                        + (IData)(vlSelf->UDP_len)))),16);
}

void VIP_UDP_tx___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_UDP_tx___024root__trace_cleanup\n"); );
    // Init
    VIP_UDP_tx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VIP_UDP_tx___024root*>(voidSelf);
    VIP_UDP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
