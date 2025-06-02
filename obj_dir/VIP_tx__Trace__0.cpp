// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VIP_tx__Syms.h"


void VIP_tx___024root__trace_chg_0_sub_0(VIP_tx___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VIP_tx___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_tx___024root__trace_chg_0\n"); );
    // Init
    VIP_tx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VIP_tx___024root*>(voidSelf);
    VIP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VIP_tx___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VIP_tx___024root__trace_chg_0_sub_0(VIP_tx___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_tx___024root__trace_chg_0_sub_0\n"); );
    VIP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.CLK));
    bufp->chgBit(oldp+1,(vlSelfRef.nRST));
    bufp->chgBit(oldp+2,(vlSelfRef.IP_send));
    bufp->chgSData(oldp+3,(vlSelfRef.TCP_len_data),16);
    bufp->chgQData(oldp+4,(vlSelfRef.IP_transmit),64);
    bufp->chgCData(oldp+6,(vlSelfRef.IP_tx__DOT__IP_state),7);
    bufp->chgCData(oldp+7,(vlSelfRef.IP_tx__DOT__nxIP_state),7);
    bufp->chgQData(oldp+8,(vlSelfRef.IP_tx__DOT__nxIP_transmit_l),64);
    bufp->chgBit(oldp+10,(vlSelfRef.IP_tx__DOT__chk_sum_valid));
    bufp->chgIData(oldp+11,(vlSelfRef.IP_tx__DOT__IPv4_chk_sum),17);
    bufp->chgIData(oldp+12,(vlSelfRef.IP_tx__DOT__nIPv4_chk_sum),17);
}

void VIP_tx___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_tx___024root__trace_cleanup\n"); );
    // Init
    VIP_tx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VIP_tx___024root*>(voidSelf);
    VIP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
