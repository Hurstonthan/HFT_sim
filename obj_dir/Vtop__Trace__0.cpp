// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgSData(oldp+0,(vlSelfRef.top__DOT__u_fifo_tx__DOT__nbytes_abt_sent),16);
        bufp->chgCData(oldp+1,(vlSelfRef.top__DOT__u_fifo_tx__DOT__nptr_str),6);
        bufp->chgCData(oldp+2,(vlSelfRef.top__DOT__u_fifo_tx__DOT__nptr_end),6);
        bufp->chgSData(oldp+3,(vlSelfRef.top__DOT__u_fifo_tx__DOT__nbytes_abt_sent_msg),16);
        bufp->chgCData(oldp+4,(vlSelfRef.top__DOT__u_fifo_tx__DOT__nmsg_end_ptr),6);
        bufp->chgCData(oldp+5,(vlSelfRef.top__DOT__u_fifo_tx__DOT__nrd_state),2);
        bufp->chgCData(oldp+6,(vlSelfRef.top__DOT__u_fifo_tx__DOT__nwr_state),2);
        bufp->chgBit(oldp+7,(vlSelfRef.top__DOT__u_fifo_tx__DOT__nwr_FIFO_valid));
        bufp->chgCData(oldp+8,(vlSelfRef.top__DOT__u_fifo_tx__DOT__nwrt_ptr),6);
        bufp->chgQData(oldp+9,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0U])))),64);
        bufp->chgQData(oldp+11,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[3U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[2U])))),64);
        bufp->chgQData(oldp+13,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[5U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[4U])))),64);
        bufp->chgQData(oldp+15,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[7U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[6U])))),64);
        bufp->chgQData(oldp+17,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[9U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[8U])))),64);
        bufp->chgQData(oldp+19,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0xbU])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0xaU])))),64);
        bufp->chgQData(oldp+21,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0xdU])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0xcU])))),64);
        bufp->chgQData(oldp+23,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0xfU])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0xeU])))),64);
        bufp->chgQData(oldp+25,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x11U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x10U])))),64);
        bufp->chgQData(oldp+27,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x13U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x12U])))),64);
        bufp->chgQData(oldp+29,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x15U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x14U])))),64);
        bufp->chgQData(oldp+31,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x17U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x16U])))),64);
        bufp->chgQData(oldp+33,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x19U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x18U])))),64);
        bufp->chgQData(oldp+35,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x1bU])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x1aU])))),64);
        bufp->chgQData(oldp+37,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x1dU])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x1cU])))),64);
        bufp->chgQData(oldp+39,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x1fU])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x1eU])))),64);
        bufp->chgQData(oldp+41,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x21U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x20U])))),64);
        bufp->chgQData(oldp+43,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x23U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x22U])))),64);
        bufp->chgQData(oldp+45,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x25U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x24U])))),64);
        bufp->chgQData(oldp+47,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x27U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x26U])))),64);
        bufp->chgQData(oldp+49,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x29U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x28U])))),64);
        bufp->chgQData(oldp+51,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x2bU])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x2aU])))),64);
        bufp->chgQData(oldp+53,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x2dU])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x2cU])))),64);
        bufp->chgQData(oldp+55,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x2fU])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x2eU])))),64);
        bufp->chgQData(oldp+57,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x31U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x30U])))),64);
        bufp->chgQData(oldp+59,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x33U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x32U])))),64);
        bufp->chgQData(oldp+61,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x35U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x34U])))),64);
        bufp->chgQData(oldp+63,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x37U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x36U])))),64);
        bufp->chgQData(oldp+65,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x39U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x38U])))),64);
        bufp->chgQData(oldp+67,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x3bU])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x3aU])))),64);
        bufp->chgQData(oldp+69,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x3dU])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x3cU])))),64);
        bufp->chgQData(oldp+71,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x3fU])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x3eU])))),64);
        bufp->chgQData(oldp+73,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x41U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x40U])))),64);
        bufp->chgQData(oldp+75,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x43U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x42U])))),64);
        bufp->chgQData(oldp+77,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x45U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x44U])))),64);
        bufp->chgQData(oldp+79,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x47U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x46U])))),64);
        bufp->chgQData(oldp+81,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x49U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x48U])))),64);
        bufp->chgQData(oldp+83,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x4bU])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x4aU])))),64);
        bufp->chgQData(oldp+85,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x4dU])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x4cU])))),64);
        bufp->chgQData(oldp+87,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x4fU])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x4eU])))),64);
        bufp->chgQData(oldp+89,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x51U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x50U])))),64);
        bufp->chgQData(oldp+91,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x53U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x52U])))),64);
        bufp->chgQData(oldp+93,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x55U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x54U])))),64);
        bufp->chgQData(oldp+95,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x57U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x56U])))),64);
        bufp->chgQData(oldp+97,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x59U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x58U])))),64);
        bufp->chgQData(oldp+99,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x5bU])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x5aU])))),64);
        bufp->chgQData(oldp+101,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x5dU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x5cU])))),64);
        bufp->chgQData(oldp+103,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x5fU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x5eU])))),64);
        bufp->chgQData(oldp+105,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x61U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x60U])))),64);
        bufp->chgQData(oldp+107,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x63U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x62U])))),64);
        bufp->chgQData(oldp+109,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x65U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x64U])))),64);
        bufp->chgQData(oldp+111,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x67U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x66U])))),64);
        bufp->chgQData(oldp+113,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x69U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x68U])))),64);
        bufp->chgQData(oldp+115,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x6bU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x6aU])))),64);
        bufp->chgQData(oldp+117,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x6dU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x6cU])))),64);
        bufp->chgQData(oldp+119,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x6fU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x6eU])))),64);
        bufp->chgQData(oldp+121,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x71U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x70U])))),64);
        bufp->chgQData(oldp+123,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x73U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x72U])))),64);
        bufp->chgQData(oldp+125,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x75U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x74U])))),64);
        bufp->chgQData(oldp+127,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x77U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x76U])))),64);
        bufp->chgQData(oldp+129,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x79U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x78U])))),64);
        bufp->chgQData(oldp+131,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x7bU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x7aU])))),64);
        bufp->chgQData(oldp+133,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x7dU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x7cU])))),64);
        bufp->chgQData(oldp+135,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x7fU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x7eU])))),64);
        bufp->chgSData(oldp+137,(vlSelfRef.top__DOT__u_fifo_tx__DOT__nchecksum_l),16);
        bufp->chgBit(oldp+138,(vlSelfRef.top__DOT__u_payload_fifo__DOT__naxis_r_valid));
        bufp->chgCData(oldp+139,(vlSelfRef.top__DOT__u_tcp__DOT__TCP_tx__DOT__nstate),7);
        bufp->chgBit(oldp+140,(vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__up_send));
        bufp->chgCData(oldp+141,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nTCP_control_rx),8);
        bufp->chgIData(oldp+142,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nseq_num_rx),32);
        bufp->chgIData(oldp+143,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nACK_rx),32);
        bufp->chgCData(oldp+144,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__noffset_rx),4);
        bufp->chgSData(oldp+145,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nwindow_size_rx),16);
        bufp->chgSData(oldp+146,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nchecksum_rx),16);
        bufp->chgSData(oldp+147,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nurgent_pointer_rx),16);
        bufp->chgIData(oldp+148,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nTCP_checksum),17);
        bufp->chgQData(oldp+149,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nTCP_payload_rx),64);
        bufp->chgCData(oldp+151,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nstate),3);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgBit(oldp+152,(vlSelfRef.top__DOT__wr_pfifo_en_int));
        bufp->chgCData(oldp+153,(vlSelfRef.top__DOT__wr_pfifo_offset_int),8);
        bufp->chgBit(oldp+154,(vlSelfRef.top__DOT__rd_pfifo_valid_int));
        bufp->chgCData(oldp+155,((7U & (IData)(vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__tcp_flow__rd_FIFO_ptr))),3);
        bufp->chgCData(oldp+156,((7U & (IData)(vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__tcp_flow__rd_FIFO_len))),3);
        bufp->chgQData(oldp+157,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_FIFO
                                                   [0U][2U])) 
                                   << 0x38U) | (((QData)((IData)(
                                                                 vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_FIFO
                                                                 [0U][1U])) 
                                                 << 0x18U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_FIFO
                                                                   [0U][0U])) 
                                                   >> 8U)))),64);
        bufp->chgCData(oldp+159,((0xffU & vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_FIFO
                                  [0U][0U])),8);
        bufp->chgQData(oldp+160,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_FIFO
                                                   [1U][2U])) 
                                   << 0x38U) | (((QData)((IData)(
                                                                 vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_FIFO
                                                                 [1U][1U])) 
                                                 << 0x18U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_FIFO
                                                                   [1U][0U])) 
                                                   >> 8U)))),64);
        bufp->chgCData(oldp+162,((0xffU & vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_FIFO
                                  [1U][0U])),8);
        bufp->chgQData(oldp+163,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_FIFO
                                                   [2U][2U])) 
                                   << 0x38U) | (((QData)((IData)(
                                                                 vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_FIFO
                                                                 [2U][1U])) 
                                                 << 0x18U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_FIFO
                                                                   [2U][0U])) 
                                                   >> 8U)))),64);
        bufp->chgCData(oldp+165,((0xffU & vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_FIFO
                                  [2U][0U])),8);
        bufp->chgQData(oldp+166,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_FIFO
                                                   [3U][2U])) 
                                   << 0x38U) | (((QData)((IData)(
                                                                 vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_FIFO
                                                                 [3U][1U])) 
                                                 << 0x18U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_FIFO
                                                                   [3U][0U])) 
                                                   >> 8U)))),64);
        bufp->chgCData(oldp+168,((0xffU & vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_FIFO
                                  [3U][0U])),8);
        bufp->chgQData(oldp+169,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_FIFO
                                                   [4U][2U])) 
                                   << 0x38U) | (((QData)((IData)(
                                                                 vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_FIFO
                                                                 [4U][1U])) 
                                                 << 0x18U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_FIFO
                                                                   [4U][0U])) 
                                                   >> 8U)))),64);
        bufp->chgCData(oldp+171,((0xffU & vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_FIFO
                                  [4U][0U])),8);
        bufp->chgCData(oldp+172,(vlSelfRef.top__DOT__u_payload_fifo__DOT__nflush_ptr),3);
        bufp->chgCData(oldp+173,(vlSelfRef.top__DOT__u_payload_fifo__DOT__nlen_TCP_flush),3);
        bufp->chgIData(oldp+174,(vlSelfRef.top__DOT__u_payload_fifo__DOT__nseq_trk_rd),32);
        bufp->chgCData(oldp+175,((0xfU & ((1U & ((IData)(vlSelfRef.top__DOT__wr_pfifo_offset_int) 
                                                 >> 7U)) 
                                          + ((1U & 
                                              ((IData)(vlSelfRef.top__DOT__wr_pfifo_offset_int) 
                                               >> 6U)) 
                                             + ((1U 
                                                 & ((IData)(vlSelfRef.top__DOT__wr_pfifo_offset_int) 
                                                    >> 5U)) 
                                                + (
                                                   (1U 
                                                    & ((IData)(vlSelfRef.top__DOT__wr_pfifo_offset_int) 
                                                       >> 4U)) 
                                                   + 
                                                   ((1U 
                                                     & ((IData)(vlSelfRef.top__DOT__wr_pfifo_offset_int) 
                                                        >> 3U)) 
                                                    + 
                                                    ((1U 
                                                      & ((IData)(vlSelfRef.top__DOT__wr_pfifo_offset_int) 
                                                         >> 2U)) 
                                                     + 
                                                     ((1U 
                                                       & ((IData)(vlSelfRef.top__DOT__wr_pfifo_offset_int) 
                                                          >> 1U)) 
                                                      + 
                                                      (1U 
                                                       & (IData)(vlSelfRef.top__DOT__wr_pfifo_offset_int))))))))))),4);
        bufp->chgBit(oldp+176,(vlSelfRef.top__DOT__u_payload_fifo__DOT__nrd_FIFO_valid_l));
        bufp->chgBit(oldp+177,(vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_flush_l));
        bufp->chgCData(oldp+178,(vlSelfRef.top__DOT__u_payload_fifo__DOT__nwr_ptr),3);
        bufp->chgCData(oldp+179,(vlSelfRef.top__DOT__u_payload_fifo__DOT__nrd_ptr),3);
        bufp->chgQData(oldp+180,(vlSelfRef.top__DOT__u_tcp__DOT__TCP_tx__DOT__nTCP_transmit),64);
        bufp->chgSData(oldp+182,(vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__nTCP_checksum_out),16);
        bufp->chgIData(oldp+183,(vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__nTCP_checksum),17);
        bufp->chgIData(oldp+184,(vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__nTCP_checksum_send),17);
        bufp->chgIData(oldp+185,(vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__temp),20);
        bufp->chgIData(oldp+186,(vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__temp1),20);
        bufp->chgCData(oldp+187,(vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__tcp_flow__rd_FIFO_len),8);
        bufp->chgSData(oldp+188,(vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__tcp_flow__rd_FIFO_ptr),11);
        bufp->chgCData(oldp+189,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug),2);
        bufp->chgBit(oldp+190,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug_0));
        bufp->chgIData(oldp+191,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[2U] 
                                   << 0xfU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[1U] 
                                               >> 0x11U))),32);
        bufp->chgSData(oldp+192,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[1U] 
                                             >> 1U))),16);
        bufp->chgSData(oldp+193,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[1U] 
                                              << 0xfU) 
                                             | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0U] 
                                                >> 0x11U)))),16);
        bufp->chgSData(oldp+194,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0U] 
                                             >> 1U))),16);
        bufp->chgBit(oldp+195,((1U & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0U])));
        bufp->chgIData(oldp+196,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[5U] 
                                   << 0x1eU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[4U] 
                                                >> 2U))),32);
        bufp->chgSData(oldp+197,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[4U] 
                                              << 0xeU) 
                                             | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[3U] 
                                                >> 0x12U)))),16);
        bufp->chgSData(oldp+198,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[3U] 
                                             >> 2U))),16);
        bufp->chgSData(oldp+199,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[3U] 
                                              << 0xeU) 
                                             | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[2U] 
                                                >> 0x12U)))),16);
        bufp->chgBit(oldp+200,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[2U] 
                                      >> 0x11U))));
        bufp->chgIData(oldp+201,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[7U] 
                                   << 0xdU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[6U] 
                                               >> 0x13U))),32);
        bufp->chgSData(oldp+202,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[6U] 
                                             >> 3U))),16);
        bufp->chgSData(oldp+203,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[6U] 
                                              << 0xdU) 
                                             | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[5U] 
                                                >> 0x13U)))),16);
        bufp->chgSData(oldp+204,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[5U] 
                                             >> 3U))),16);
        bufp->chgBit(oldp+205,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[5U] 
                                      >> 2U))));
        bufp->chgIData(oldp+206,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0xaU] 
                                   << 0x1cU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[9U] 
                                                >> 4U))),32);
        bufp->chgSData(oldp+207,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[9U] 
                                              << 0xcU) 
                                             | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[8U] 
                                                >> 0x14U)))),16);
        bufp->chgSData(oldp+208,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[8U] 
                                             >> 4U))),16);
        bufp->chgSData(oldp+209,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[8U] 
                                              << 0xcU) 
                                             | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[7U] 
                                                >> 0x14U)))),16);
        bufp->chgBit(oldp+210,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[7U] 
                                      >> 0x13U))));
        bufp->chgIData(oldp+211,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0xcU] 
                                   << 0xbU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0xbU] 
                                               >> 0x15U))),32);
        bufp->chgSData(oldp+212,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0xbU] 
                                             >> 5U))),16);
        bufp->chgSData(oldp+213,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0xbU] 
                                              << 0xbU) 
                                             | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0xaU] 
                                                >> 0x15U)))),16);
        bufp->chgSData(oldp+214,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0xaU] 
                                             >> 5U))),16);
        bufp->chgBit(oldp+215,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0xaU] 
                                      >> 4U))));
        bufp->chgIData(oldp+216,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0xfU] 
                                   << 0x1aU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0xeU] 
                                                >> 6U))),32);
        bufp->chgSData(oldp+217,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0xeU] 
                                              << 0xaU) 
                                             | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0xdU] 
                                                >> 0x16U)))),16);
        bufp->chgSData(oldp+218,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0xdU] 
                                             >> 6U))),16);
        bufp->chgSData(oldp+219,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0xdU] 
                                              << 0xaU) 
                                             | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0xcU] 
                                                >> 0x16U)))),16);
        bufp->chgBit(oldp+220,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0xcU] 
                                      >> 0x15U))));
        bufp->chgIData(oldp+221,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x11U] 
                                   << 9U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x10U] 
                                             >> 0x17U))),32);
        bufp->chgSData(oldp+222,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x10U] 
                                             >> 7U))),16);
        bufp->chgSData(oldp+223,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x10U] 
                                              << 9U) 
                                             | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0xfU] 
                                                >> 0x17U)))),16);
        bufp->chgSData(oldp+224,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0xfU] 
                                             >> 7U))),16);
        bufp->chgBit(oldp+225,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0xfU] 
                                      >> 6U))));
        bufp->chgIData(oldp+226,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x14U] 
                                   << 0x18U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x13U] 
                                                >> 8U))),32);
        bufp->chgSData(oldp+227,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x13U] 
                                              << 8U) 
                                             | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x12U] 
                                                >> 0x18U)))),16);
        bufp->chgSData(oldp+228,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x12U] 
                                             >> 8U))),16);
        bufp->chgSData(oldp+229,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x12U] 
                                              << 8U) 
                                             | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x11U] 
                                                >> 0x18U)))),16);
        bufp->chgBit(oldp+230,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x11U] 
                                      >> 0x17U))));
        bufp->chgIData(oldp+231,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x16U] 
                                   << 7U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x15U] 
                                             >> 0x19U))),32);
        bufp->chgSData(oldp+232,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x15U] 
                                             >> 9U))),16);
        bufp->chgSData(oldp+233,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x15U] 
                                              << 7U) 
                                             | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x14U] 
                                                >> 0x19U)))),16);
        bufp->chgSData(oldp+234,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x14U] 
                                             >> 9U))),16);
        bufp->chgBit(oldp+235,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x14U] 
                                      >> 8U))));
        bufp->chgIData(oldp+236,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x19U] 
                                   << 0x16U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x18U] 
                                                >> 0xaU))),32);
        bufp->chgSData(oldp+237,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x18U] 
                                              << 6U) 
                                             | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x17U] 
                                                >> 0x1aU)))),16);
        bufp->chgSData(oldp+238,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x17U] 
                                             >> 0xaU))),16);
        bufp->chgSData(oldp+239,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x17U] 
                                              << 6U) 
                                             | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x16U] 
                                                >> 0x1aU)))),16);
        bufp->chgBit(oldp+240,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x16U] 
                                      >> 0x19U))));
        bufp->chgIData(oldp+241,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x1bU] 
                                   << 5U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x1aU] 
                                             >> 0x1bU))),32);
        bufp->chgSData(oldp+242,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x1aU] 
                                             >> 0xbU))),16);
        bufp->chgSData(oldp+243,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x1aU] 
                                              << 5U) 
                                             | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x19U] 
                                                >> 0x1bU)))),16);
        bufp->chgSData(oldp+244,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x19U] 
                                             >> 0xbU))),16);
        bufp->chgBit(oldp+245,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x19U] 
                                      >> 0xaU))));
        bufp->chgIData(oldp+246,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x1eU] 
                                   << 0x14U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x1dU] 
                                                >> 0xcU))),32);
        bufp->chgSData(oldp+247,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x1dU] 
                                              << 4U) 
                                             | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x1cU] 
                                                >> 0x1cU)))),16);
        bufp->chgSData(oldp+248,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x1cU] 
                                             >> 0xcU))),16);
        bufp->chgSData(oldp+249,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x1cU] 
                                              << 4U) 
                                             | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x1bU] 
                                                >> 0x1cU)))),16);
        bufp->chgBit(oldp+250,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x1bU] 
                                      >> 0x1bU))));
        bufp->chgIData(oldp+251,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x20U] 
                                   << 3U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x1fU] 
                                             >> 0x1dU))),32);
        bufp->chgSData(oldp+252,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x1fU] 
                                             >> 0xdU))),16);
        bufp->chgSData(oldp+253,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x1fU] 
                                              << 3U) 
                                             | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x1eU] 
                                                >> 0x1dU)))),16);
        bufp->chgSData(oldp+254,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x1eU] 
                                             >> 0xdU))),16);
        bufp->chgBit(oldp+255,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x1eU] 
                                      >> 0xcU))));
        bufp->chgIData(oldp+256,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x23U] 
                                   << 0x12U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x22U] 
                                                >> 0xeU))),32);
        bufp->chgSData(oldp+257,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x22U] 
                                              << 2U) 
                                             | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x21U] 
                                                >> 0x1eU)))),16);
        bufp->chgSData(oldp+258,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x21U] 
                                             >> 0xeU))),16);
        bufp->chgSData(oldp+259,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x21U] 
                                              << 2U) 
                                             | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x20U] 
                                                >> 0x1eU)))),16);
        bufp->chgBit(oldp+260,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x20U] 
                                      >> 0x1dU))));
        bufp->chgIData(oldp+261,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x25U] 
                                   << 1U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x24U] 
                                             >> 0x1fU))),32);
        bufp->chgSData(oldp+262,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x24U] 
                                             >> 0xfU))),16);
        bufp->chgSData(oldp+263,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x24U] 
                                              << 1U) 
                                             | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x23U] 
                                                >> 0x1fU)))),16);
        bufp->chgSData(oldp+264,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x23U] 
                                             >> 0xfU))),16);
        bufp->chgBit(oldp+265,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x23U] 
                                      >> 0xeU))));
        bufp->chgIData(oldp+266,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x28U] 
                                   << 0x10U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x27U] 
                                                >> 0x10U))),32);
        bufp->chgSData(oldp+267,((0xffffU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x27U])),16);
        bufp->chgSData(oldp+268,((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x26U] 
                                  >> 0x10U)),16);
        bufp->chgSData(oldp+269,((0xffffU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x26U])),16);
        bufp->chgBit(oldp+270,((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x25U] 
                                >> 0x1fU)));
        bufp->chgIData(oldp+271,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nrcv_next),32);
        bufp->chgCData(oldp+272,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nlen_flush_ptr),8);
        bufp->chgIData(oldp+273,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nseq_rx_trk),32);
        bufp->chgCData(oldp+274,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop),8);
        bufp->chgCData(oldp+275,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left),8);
        bufp->chgCData(oldp+276,((0xfU & (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list))),4);
        bufp->chgCData(oldp+277,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                                                  >> 4U)))),4);
        bufp->chgCData(oldp+278,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                                                  >> 8U)))),4);
        bufp->chgCData(oldp+279,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                                                  >> 0xcU)))),4);
        bufp->chgCData(oldp+280,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                                                  >> 0x10U)))),4);
        bufp->chgCData(oldp+281,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                                                  >> 0x14U)))),4);
        bufp->chgCData(oldp+282,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                                                  >> 0x18U)))),4);
        bufp->chgCData(oldp+283,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                                                  >> 0x1cU)))),4);
        bufp->chgCData(oldp+284,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                                                  >> 0x20U)))),4);
        bufp->chgCData(oldp+285,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                                                  >> 0x24U)))),4);
        bufp->chgCData(oldp+286,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                                                  >> 0x28U)))),4);
        bufp->chgCData(oldp+287,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                                                  >> 0x2cU)))),4);
        bufp->chgCData(oldp+288,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                                                  >> 0x30U)))),4);
        bufp->chgCData(oldp+289,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                                                  >> 0x34U)))),4);
        bufp->chgCData(oldp+290,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                                                  >> 0x38U)))),4);
        bufp->chgCData(oldp+291,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                                                  >> 0x3cU)))),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+292,(vlSelfRef.top__DOT__nw_segment));
        bufp->chgBit(oldp+293,(vlSelfRef.top__DOT__axis_t_last_int));
        bufp->chgQData(oldp+294,(vlSelfRef.top__DOT__axis_data_rx_int),64);
        bufp->chgCData(oldp+296,(vlSelfRef.top__DOT__wr_ptr_out_int),3);
        bufp->chgCData(oldp+297,(vlSelfRef.top__DOT__u_payload_fifo__DOT__wr_ptr),3);
        bufp->chgIData(oldp+298,(vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd),32);
        bufp->chgBit(oldp+299,(vlSelfRef.top__DOT__rd_ftx_en_int));
        bufp->chgQData(oldp+300,(vlSelfRef.top__DOT__rd_ftx_payload_int),64);
        bufp->chgBit(oldp+302,(vlSelfRef.top__DOT__rd_ftx_valid_int));
        bufp->chgBit(oldp+303,(vlSelfRef.top__DOT__rd_ftx_last_int));
        bufp->chgSData(oldp+304,(vlSelfRef.top__DOT__bytes_abt_sent_int),16);
        bufp->chgIData(oldp+305,(vlSelfRef.top__DOT__u_tcp__DOT__ACK_rx),32);
        bufp->chgBit(oldp+306,(vlSelfRef.top__DOT__ACK_rcv_flag_int));
        bufp->chgBit(oldp+307,(vlSelfRef.top__DOT__u_fifo_tx__DOT__out_order_req_l));
        bufp->chgBit(oldp+308,((((IData)(vlSelfRef.top__DOT__u_payload_fifo__DOT__rd_ptr) 
                                 - (IData)(1U)) == (IData)(vlSelfRef.top__DOT__wr_ptr_out_int))));
        bufp->chgBit(oldp+309,(vlSelfRef.top__DOT__wr_TX_full));
        bufp->chgSData(oldp+310,(vlSelfRef.top__DOT__u_fifo_tx__DOT__bytes_msg_trk),16);
        bufp->chgQData(oldp+311,(vlSelfRef.top__DOT__u_fifo_tx__DOT__nrd_FIFO_payload),64);
        bufp->chgCData(oldp+313,(vlSelfRef.top__DOT__u_fifo_tx__DOT__ptr_str),6);
        bufp->chgCData(oldp+314,(vlSelfRef.top__DOT__u_fifo_tx__DOT__ptr_end),6);
        bufp->chgCData(oldp+315,(vlSelfRef.top__DOT__u_fifo_tx__DOT__flush_ptr),6);
        bufp->chgCData(oldp+316,(vlSelfRef.top__DOT__u_fifo_tx__DOT__nflush_ptr),6);
        bufp->chgSData(oldp+317,(vlSelfRef.top__DOT__u_fifo_tx__DOT__bytes_abt_sent_msg),16);
        bufp->chgCData(oldp+318,(vlSelfRef.top__DOT__u_fifo_tx__DOT__msg_end_ptr),6);
        bufp->chgCData(oldp+319,(vlSelfRef.top__DOT__u_fifo_tx__DOT__rd_state),2);
        bufp->chgCData(oldp+320,(vlSelfRef.top__DOT__u_fifo_tx__DOT__wr_state),2);
        bufp->chgBit(oldp+321,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[2U] 
                                      >> 0x1cU))));
        bufp->chgIData(oldp+322,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[2U] 
                                   << 4U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[1U] 
                                             >> 0x1cU))),32);
        bufp->chgIData(oldp+323,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[1U] 
                                   << 4U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0U] 
                                             >> 0x1cU))),32);
        bufp->chgSData(oldp+324,((0xffffU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0U] 
                                             >> 0xcU))),16);
        bufp->chgCData(oldp+325,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0U] 
                                           >> 6U))),6);
        bufp->chgCData(oldp+326,((0x3fU & vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0U])),6);
        bufp->chgBit(oldp+327,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[5U] 
                                      >> 0x19U))));
        bufp->chgIData(oldp+328,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[5U] 
                                   << 7U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[4U] 
                                             >> 0x19U))),32);
        bufp->chgIData(oldp+329,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[4U] 
                                   << 7U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[3U] 
                                             >> 0x19U))),32);
        bufp->chgSData(oldp+330,((0xffffU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[3U] 
                                             >> 9U))),16);
        bufp->chgCData(oldp+331,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[3U] 
                                           >> 3U))),6);
        bufp->chgCData(oldp+332,((0x3fU & ((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[3U] 
                                            << 3U) 
                                           | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[2U] 
                                              >> 0x1dU)))),6);
        bufp->chgBit(oldp+333,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[8U] 
                                      >> 0x16U))));
        bufp->chgIData(oldp+334,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[8U] 
                                   << 0xaU) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[7U] 
                                               >> 0x16U))),32);
        bufp->chgIData(oldp+335,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[7U] 
                                   << 0xaU) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[6U] 
                                               >> 0x16U))),32);
        bufp->chgSData(oldp+336,((0xffffU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[6U] 
                                             >> 6U))),16);
        bufp->chgCData(oldp+337,((0x3fU & vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[6U])),6);
        bufp->chgCData(oldp+338,((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[5U] 
                                  >> 0x1aU)),6);
        bufp->chgBit(oldp+339,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0xbU] 
                                      >> 0x13U))));
        bufp->chgIData(oldp+340,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0xbU] 
                                   << 0xdU) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0xaU] 
                                               >> 0x13U))),32);
        bufp->chgIData(oldp+341,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0xaU] 
                                   << 0xdU) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[9U] 
                                               >> 0x13U))),32);
        bufp->chgSData(oldp+342,((0xffffU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[9U] 
                                             >> 3U))),16);
        bufp->chgCData(oldp+343,((0x3fU & ((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[9U] 
                                            << 3U) 
                                           | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[8U] 
                                              >> 0x1dU)))),6);
        bufp->chgCData(oldp+344,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[8U] 
                                           >> 0x17U))),6);
        bufp->chgBit(oldp+345,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0xeU] 
                                      >> 0x10U))));
        bufp->chgIData(oldp+346,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0xeU] 
                                   << 0x10U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0xdU] 
                                                >> 0x10U))),32);
        bufp->chgIData(oldp+347,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0xdU] 
                                   << 0x10U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0xcU] 
                                                >> 0x10U))),32);
        bufp->chgSData(oldp+348,((0xffffU & vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0xcU])),16);
        bufp->chgCData(oldp+349,((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0xbU] 
                                  >> 0x1aU)),6);
        bufp->chgCData(oldp+350,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0xbU] 
                                           >> 0x14U))),6);
        bufp->chgBit(oldp+351,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x11U] 
                                      >> 0xdU))));
        bufp->chgIData(oldp+352,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x11U] 
                                   << 0x13U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x10U] 
                                                >> 0xdU))),32);
        bufp->chgIData(oldp+353,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x10U] 
                                   << 0x13U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0xfU] 
                                                >> 0xdU))),32);
        bufp->chgSData(oldp+354,((0xffffU & ((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0xfU] 
                                              << 3U) 
                                             | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0xeU] 
                                                >> 0x1dU)))),16);
        bufp->chgCData(oldp+355,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0xeU] 
                                           >> 0x17U))),6);
        bufp->chgCData(oldp+356,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0xeU] 
                                           >> 0x11U))),6);
        bufp->chgBit(oldp+357,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x14U] 
                                      >> 0xaU))));
        bufp->chgIData(oldp+358,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x14U] 
                                   << 0x16U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x13U] 
                                                >> 0xaU))),32);
        bufp->chgIData(oldp+359,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x13U] 
                                   << 0x16U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x12U] 
                                                >> 0xaU))),32);
        bufp->chgSData(oldp+360,((0xffffU & ((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x12U] 
                                              << 6U) 
                                             | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x11U] 
                                                >> 0x1aU)))),16);
        bufp->chgCData(oldp+361,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x11U] 
                                           >> 0x14U))),6);
        bufp->chgCData(oldp+362,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x11U] 
                                           >> 0xeU))),6);
        bufp->chgBit(oldp+363,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x17U] 
                                      >> 7U))));
        bufp->chgIData(oldp+364,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x17U] 
                                   << 0x19U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x16U] 
                                                >> 7U))),32);
        bufp->chgIData(oldp+365,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x16U] 
                                   << 0x19U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x15U] 
                                                >> 7U))),32);
        bufp->chgSData(oldp+366,((0xffffU & ((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x15U] 
                                              << 9U) 
                                             | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x14U] 
                                                >> 0x17U)))),16);
        bufp->chgCData(oldp+367,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x14U] 
                                           >> 0x11U))),6);
        bufp->chgCData(oldp+368,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x14U] 
                                           >> 0xbU))),6);
        bufp->chgBit(oldp+369,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x1aU] 
                                      >> 4U))));
        bufp->chgIData(oldp+370,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x1aU] 
                                   << 0x1cU) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x19U] 
                                                >> 4U))),32);
        bufp->chgIData(oldp+371,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x19U] 
                                   << 0x1cU) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x18U] 
                                                >> 4U))),32);
        bufp->chgSData(oldp+372,((0xffffU & ((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x18U] 
                                              << 0xcU) 
                                             | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x17U] 
                                                >> 0x14U)))),16);
        bufp->chgCData(oldp+373,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x17U] 
                                           >> 0xeU))),6);
        bufp->chgCData(oldp+374,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x17U] 
                                           >> 8U))),6);
        bufp->chgBit(oldp+375,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x1dU] 
                                      >> 1U))));
        bufp->chgIData(oldp+376,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x1dU] 
                                   << 0x1fU) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x1cU] 
                                                >> 1U))),32);
        bufp->chgIData(oldp+377,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x1cU] 
                                   << 0x1fU) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x1bU] 
                                                >> 1U))),32);
        bufp->chgSData(oldp+378,((0xffffU & ((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x1bU] 
                                              << 0xfU) 
                                             | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x1aU] 
                                                >> 0x11U)))),16);
        bufp->chgCData(oldp+379,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x1aU] 
                                           >> 0xbU))),6);
        bufp->chgCData(oldp+380,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x1aU] 
                                           >> 5U))),6);
        bufp->chgBit(oldp+381,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x1fU] 
                                      >> 0x1eU))));
        bufp->chgIData(oldp+382,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x1fU] 
                                   << 2U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x1eU] 
                                             >> 0x1eU))),32);
        bufp->chgIData(oldp+383,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x1eU] 
                                   << 2U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x1dU] 
                                             >> 0x1eU))),32);
        bufp->chgSData(oldp+384,((0xffffU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x1dU] 
                                             >> 0xeU))),16);
        bufp->chgCData(oldp+385,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x1dU] 
                                           >> 8U))),6);
        bufp->chgCData(oldp+386,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x1dU] 
                                           >> 2U))),6);
        bufp->chgBit(oldp+387,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x22U] 
                                      >> 0x1bU))));
        bufp->chgIData(oldp+388,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x22U] 
                                   << 5U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x21U] 
                                             >> 0x1bU))),32);
        bufp->chgIData(oldp+389,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x21U] 
                                   << 5U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x20U] 
                                             >> 0x1bU))),32);
        bufp->chgSData(oldp+390,((0xffffU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x20U] 
                                             >> 0xbU))),16);
        bufp->chgCData(oldp+391,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x20U] 
                                           >> 5U))),6);
        bufp->chgCData(oldp+392,((0x3fU & ((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x20U] 
                                            << 1U) 
                                           | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x1fU] 
                                              >> 0x1fU)))),6);
        bufp->chgBit(oldp+393,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x25U] 
                                      >> 0x18U))));
        bufp->chgIData(oldp+394,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x25U] 
                                   << 8U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x24U] 
                                             >> 0x18U))),32);
        bufp->chgIData(oldp+395,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x24U] 
                                   << 8U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x23U] 
                                             >> 0x18U))),32);
        bufp->chgSData(oldp+396,((0xffffU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x23U] 
                                             >> 8U))),16);
        bufp->chgCData(oldp+397,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x23U] 
                                           >> 2U))),6);
        bufp->chgCData(oldp+398,((0x3fU & ((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x23U] 
                                            << 4U) 
                                           | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x22U] 
                                              >> 0x1cU)))),6);
        bufp->chgBit(oldp+399,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x28U] 
                                      >> 0x15U))));
        bufp->chgIData(oldp+400,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x28U] 
                                   << 0xbU) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x27U] 
                                               >> 0x15U))),32);
        bufp->chgIData(oldp+401,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x27U] 
                                   << 0xbU) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x26U] 
                                               >> 0x15U))),32);
        bufp->chgSData(oldp+402,((0xffffU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x26U] 
                                             >> 5U))),16);
        bufp->chgCData(oldp+403,((0x3fU & ((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x26U] 
                                            << 1U) 
                                           | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x25U] 
                                              >> 0x1fU)))),6);
        bufp->chgCData(oldp+404,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x25U] 
                                           >> 0x19U))),6);
        bufp->chgBit(oldp+405,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x2bU] 
                                      >> 0x12U))));
        bufp->chgIData(oldp+406,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x2bU] 
                                   << 0xeU) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x2aU] 
                                               >> 0x12U))),32);
        bufp->chgIData(oldp+407,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x2aU] 
                                   << 0xeU) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x29U] 
                                               >> 0x12U))),32);
        bufp->chgSData(oldp+408,((0xffffU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x29U] 
                                             >> 2U))),16);
        bufp->chgCData(oldp+409,((0x3fU & ((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x29U] 
                                            << 4U) 
                                           | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x28U] 
                                              >> 0x1cU)))),6);
        bufp->chgCData(oldp+410,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x28U] 
                                           >> 0x16U))),6);
        bufp->chgBit(oldp+411,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x2eU] 
                                      >> 0xfU))));
        bufp->chgIData(oldp+412,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x2eU] 
                                   << 0x11U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x2dU] 
                                                >> 0xfU))),32);
        bufp->chgIData(oldp+413,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x2dU] 
                                   << 0x11U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x2cU] 
                                                >> 0xfU))),32);
        bufp->chgSData(oldp+414,((0xffffU & ((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x2cU] 
                                              << 1U) 
                                             | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x2bU] 
                                                >> 0x1fU)))),16);
        bufp->chgCData(oldp+415,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x2bU] 
                                           >> 0x19U))),6);
        bufp->chgCData(oldp+416,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x2bU] 
                                           >> 0x13U))),6);
        bufp->chgBit(oldp+417,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[2U] 
                                      >> 0x1cU))));
        bufp->chgIData(oldp+418,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[2U] 
                                   << 4U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[1U] 
                                             >> 0x1cU))),32);
        bufp->chgIData(oldp+419,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[1U] 
                                   << 4U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0U] 
                                             >> 0x1cU))),32);
        bufp->chgSData(oldp+420,((0xffffU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0U] 
                                             >> 0xcU))),16);
        bufp->chgCData(oldp+421,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0U] 
                                           >> 6U))),6);
        bufp->chgCData(oldp+422,((0x3fU & vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0U])),6);
        bufp->chgBit(oldp+423,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[5U] 
                                      >> 0x19U))));
        bufp->chgIData(oldp+424,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[5U] 
                                   << 7U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[4U] 
                                             >> 0x19U))),32);
        bufp->chgIData(oldp+425,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[4U] 
                                   << 7U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[3U] 
                                             >> 0x19U))),32);
        bufp->chgSData(oldp+426,((0xffffU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[3U] 
                                             >> 9U))),16);
        bufp->chgCData(oldp+427,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[3U] 
                                           >> 3U))),6);
        bufp->chgCData(oldp+428,((0x3fU & ((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[3U] 
                                            << 3U) 
                                           | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[2U] 
                                              >> 0x1dU)))),6);
        bufp->chgBit(oldp+429,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[8U] 
                                      >> 0x16U))));
        bufp->chgIData(oldp+430,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[8U] 
                                   << 0xaU) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[7U] 
                                               >> 0x16U))),32);
        bufp->chgIData(oldp+431,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[7U] 
                                   << 0xaU) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[6U] 
                                               >> 0x16U))),32);
        bufp->chgSData(oldp+432,((0xffffU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[6U] 
                                             >> 6U))),16);
        bufp->chgCData(oldp+433,((0x3fU & vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[6U])),6);
        bufp->chgCData(oldp+434,((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[5U] 
                                  >> 0x1aU)),6);
        bufp->chgBit(oldp+435,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0xbU] 
                                      >> 0x13U))));
        bufp->chgIData(oldp+436,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0xbU] 
                                   << 0xdU) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0xaU] 
                                               >> 0x13U))),32);
        bufp->chgIData(oldp+437,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0xaU] 
                                   << 0xdU) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[9U] 
                                               >> 0x13U))),32);
        bufp->chgSData(oldp+438,((0xffffU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[9U] 
                                             >> 3U))),16);
        bufp->chgCData(oldp+439,((0x3fU & ((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[9U] 
                                            << 3U) 
                                           | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[8U] 
                                              >> 0x1dU)))),6);
        bufp->chgCData(oldp+440,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[8U] 
                                           >> 0x17U))),6);
        bufp->chgBit(oldp+441,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0xeU] 
                                      >> 0x10U))));
        bufp->chgIData(oldp+442,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0xeU] 
                                   << 0x10U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0xdU] 
                                                >> 0x10U))),32);
        bufp->chgIData(oldp+443,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0xdU] 
                                   << 0x10U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0xcU] 
                                                >> 0x10U))),32);
        bufp->chgSData(oldp+444,((0xffffU & vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0xcU])),16);
        bufp->chgCData(oldp+445,((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0xbU] 
                                  >> 0x1aU)),6);
        bufp->chgCData(oldp+446,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0xbU] 
                                           >> 0x14U))),6);
        bufp->chgBit(oldp+447,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x11U] 
                                      >> 0xdU))));
        bufp->chgIData(oldp+448,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x11U] 
                                   << 0x13U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x10U] 
                                                >> 0xdU))),32);
        bufp->chgIData(oldp+449,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x10U] 
                                   << 0x13U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0xfU] 
                                                >> 0xdU))),32);
        bufp->chgSData(oldp+450,((0xffffU & ((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0xfU] 
                                              << 3U) 
                                             | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0xeU] 
                                                >> 0x1dU)))),16);
        bufp->chgCData(oldp+451,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0xeU] 
                                           >> 0x17U))),6);
        bufp->chgCData(oldp+452,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0xeU] 
                                           >> 0x11U))),6);
        bufp->chgBit(oldp+453,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x14U] 
                                      >> 0xaU))));
        bufp->chgIData(oldp+454,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x14U] 
                                   << 0x16U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x13U] 
                                                >> 0xaU))),32);
        bufp->chgIData(oldp+455,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x13U] 
                                   << 0x16U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x12U] 
                                                >> 0xaU))),32);
        bufp->chgSData(oldp+456,((0xffffU & ((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x12U] 
                                              << 6U) 
                                             | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x11U] 
                                                >> 0x1aU)))),16);
        bufp->chgCData(oldp+457,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x11U] 
                                           >> 0x14U))),6);
        bufp->chgCData(oldp+458,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x11U] 
                                           >> 0xeU))),6);
        bufp->chgBit(oldp+459,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x17U] 
                                      >> 7U))));
        bufp->chgIData(oldp+460,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x17U] 
                                   << 0x19U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x16U] 
                                                >> 7U))),32);
        bufp->chgIData(oldp+461,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x16U] 
                                   << 0x19U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x15U] 
                                                >> 7U))),32);
        bufp->chgSData(oldp+462,((0xffffU & ((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x15U] 
                                              << 9U) 
                                             | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x14U] 
                                                >> 0x17U)))),16);
        bufp->chgCData(oldp+463,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x14U] 
                                           >> 0x11U))),6);
        bufp->chgCData(oldp+464,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x14U] 
                                           >> 0xbU))),6);
        bufp->chgBit(oldp+465,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x1aU] 
                                      >> 4U))));
        bufp->chgIData(oldp+466,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x1aU] 
                                   << 0x1cU) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x19U] 
                                                >> 4U))),32);
        bufp->chgIData(oldp+467,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x19U] 
                                   << 0x1cU) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x18U] 
                                                >> 4U))),32);
        bufp->chgSData(oldp+468,((0xffffU & ((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x18U] 
                                              << 0xcU) 
                                             | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x17U] 
                                                >> 0x14U)))),16);
        bufp->chgCData(oldp+469,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x17U] 
                                           >> 0xeU))),6);
        bufp->chgCData(oldp+470,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x17U] 
                                           >> 8U))),6);
        bufp->chgBit(oldp+471,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x1dU] 
                                      >> 1U))));
        bufp->chgIData(oldp+472,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x1dU] 
                                   << 0x1fU) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x1cU] 
                                                >> 1U))),32);
        bufp->chgIData(oldp+473,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x1cU] 
                                   << 0x1fU) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x1bU] 
                                                >> 1U))),32);
        bufp->chgSData(oldp+474,((0xffffU & ((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x1bU] 
                                              << 0xfU) 
                                             | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x1aU] 
                                                >> 0x11U)))),16);
        bufp->chgCData(oldp+475,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x1aU] 
                                           >> 0xbU))),6);
        bufp->chgCData(oldp+476,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x1aU] 
                                           >> 5U))),6);
        bufp->chgBit(oldp+477,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x1fU] 
                                      >> 0x1eU))));
        bufp->chgIData(oldp+478,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x1fU] 
                                   << 2U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x1eU] 
                                             >> 0x1eU))),32);
        bufp->chgIData(oldp+479,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x1eU] 
                                   << 2U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x1dU] 
                                             >> 0x1eU))),32);
        bufp->chgSData(oldp+480,((0xffffU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x1dU] 
                                             >> 0xeU))),16);
        bufp->chgCData(oldp+481,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x1dU] 
                                           >> 8U))),6);
        bufp->chgCData(oldp+482,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x1dU] 
                                           >> 2U))),6);
        bufp->chgBit(oldp+483,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x22U] 
                                      >> 0x1bU))));
        bufp->chgIData(oldp+484,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x22U] 
                                   << 5U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x21U] 
                                             >> 0x1bU))),32);
        bufp->chgIData(oldp+485,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x21U] 
                                   << 5U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x20U] 
                                             >> 0x1bU))),32);
        bufp->chgSData(oldp+486,((0xffffU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x20U] 
                                             >> 0xbU))),16);
        bufp->chgCData(oldp+487,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x20U] 
                                           >> 5U))),6);
        bufp->chgCData(oldp+488,((0x3fU & ((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x20U] 
                                            << 1U) 
                                           | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x1fU] 
                                              >> 0x1fU)))),6);
        bufp->chgBit(oldp+489,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x25U] 
                                      >> 0x18U))));
        bufp->chgIData(oldp+490,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x25U] 
                                   << 8U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x24U] 
                                             >> 0x18U))),32);
        bufp->chgIData(oldp+491,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x24U] 
                                   << 8U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x23U] 
                                             >> 0x18U))),32);
        bufp->chgSData(oldp+492,((0xffffU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x23U] 
                                             >> 8U))),16);
        bufp->chgCData(oldp+493,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x23U] 
                                           >> 2U))),6);
        bufp->chgCData(oldp+494,((0x3fU & ((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x23U] 
                                            << 4U) 
                                           | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x22U] 
                                              >> 0x1cU)))),6);
        bufp->chgBit(oldp+495,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x28U] 
                                      >> 0x15U))));
        bufp->chgIData(oldp+496,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x28U] 
                                   << 0xbU) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x27U] 
                                               >> 0x15U))),32);
        bufp->chgIData(oldp+497,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x27U] 
                                   << 0xbU) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x26U] 
                                               >> 0x15U))),32);
        bufp->chgSData(oldp+498,((0xffffU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x26U] 
                                             >> 5U))),16);
        bufp->chgCData(oldp+499,((0x3fU & ((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x26U] 
                                            << 1U) 
                                           | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x25U] 
                                              >> 0x1fU)))),6);
        bufp->chgCData(oldp+500,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x25U] 
                                           >> 0x19U))),6);
        bufp->chgBit(oldp+501,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x2bU] 
                                      >> 0x12U))));
        bufp->chgIData(oldp+502,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x2bU] 
                                   << 0xeU) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x2aU] 
                                               >> 0x12U))),32);
        bufp->chgIData(oldp+503,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x2aU] 
                                   << 0xeU) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x29U] 
                                               >> 0x12U))),32);
        bufp->chgSData(oldp+504,((0xffffU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x29U] 
                                             >> 2U))),16);
        bufp->chgCData(oldp+505,((0x3fU & ((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x29U] 
                                            << 4U) 
                                           | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x28U] 
                                              >> 0x1cU)))),6);
        bufp->chgCData(oldp+506,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x28U] 
                                           >> 0x16U))),6);
        bufp->chgBit(oldp+507,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x2eU] 
                                      >> 0xfU))));
        bufp->chgIData(oldp+508,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x2eU] 
                                   << 0x11U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x2dU] 
                                                >> 0xfU))),32);
        bufp->chgIData(oldp+509,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x2dU] 
                                   << 0x11U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x2cU] 
                                                >> 0xfU))),32);
        bufp->chgSData(oldp+510,((0xffffU & ((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x2cU] 
                                              << 1U) 
                                             | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x2bU] 
                                                >> 0x1fU)))),16);
        bufp->chgCData(oldp+511,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x2bU] 
                                           >> 0x19U))),6);
        bufp->chgCData(oldp+512,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x2bU] 
                                           >> 0x13U))),6);
        bufp->chgBit(oldp+513,(vlSelfRef.top__DOT__u_fifo_tx__DOT__full));
        bufp->chgBit(oldp+514,(((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__rd_ptr) 
                                == (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__wrt_ptr))));
        bufp->chgBit(oldp+515,(vlSelfRef.top__DOT__u_fifo_tx__DOT__nrd_FIFO_last));
        bufp->chgBit(oldp+516,(vlSelfRef.top__DOT__u_fifo_tx__DOT__nrd_FIFO_valid));
        bufp->chgCData(oldp+517,(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_wrt_ptr),4);
        bufp->chgCData(oldp+518,(vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_wrt_ptr),4);
        bufp->chgCData(oldp+519,(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_rd_ptr),4);
        bufp->chgCData(oldp+520,(vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_rd_ptr),4);
        bufp->chgCData(oldp+521,(vlSelfRef.top__DOT__u_fifo_tx__DOT__rd_ptr),6);
        bufp->chgCData(oldp+522,(vlSelfRef.top__DOT__u_fifo_tx__DOT__nrd_ptr),6);
        bufp->chgCData(oldp+523,(vlSelfRef.top__DOT__u_fifo_tx__DOT__wrt_ptr),6);
        bufp->chgQData(oldp+524,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0U])))),64);
        bufp->chgQData(oldp+526,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[2U])))),64);
        bufp->chgQData(oldp+528,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[5U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[4U])))),64);
        bufp->chgQData(oldp+530,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[7U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[6U])))),64);
        bufp->chgQData(oldp+532,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[9U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[8U])))),64);
        bufp->chgQData(oldp+534,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0xbU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0xaU])))),64);
        bufp->chgQData(oldp+536,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0xdU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0xcU])))),64);
        bufp->chgQData(oldp+538,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0xfU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0xeU])))),64);
        bufp->chgQData(oldp+540,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x11U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x10U])))),64);
        bufp->chgQData(oldp+542,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x13U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x12U])))),64);
        bufp->chgQData(oldp+544,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x15U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x14U])))),64);
        bufp->chgQData(oldp+546,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x17U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x16U])))),64);
        bufp->chgQData(oldp+548,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x19U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x18U])))),64);
        bufp->chgQData(oldp+550,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x1bU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x1aU])))),64);
        bufp->chgQData(oldp+552,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x1dU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x1cU])))),64);
        bufp->chgQData(oldp+554,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x1fU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x1eU])))),64);
        bufp->chgQData(oldp+556,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x21U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x20U])))),64);
        bufp->chgQData(oldp+558,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x23U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x22U])))),64);
        bufp->chgQData(oldp+560,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x25U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x24U])))),64);
        bufp->chgQData(oldp+562,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x27U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x26U])))),64);
        bufp->chgQData(oldp+564,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x29U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x28U])))),64);
        bufp->chgQData(oldp+566,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x2bU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x2aU])))),64);
        bufp->chgQData(oldp+568,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x2dU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x2cU])))),64);
        bufp->chgQData(oldp+570,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x2fU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x2eU])))),64);
        bufp->chgQData(oldp+572,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x31U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x30U])))),64);
        bufp->chgQData(oldp+574,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x33U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x32U])))),64);
        bufp->chgQData(oldp+576,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x35U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x34U])))),64);
        bufp->chgQData(oldp+578,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x37U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x36U])))),64);
        bufp->chgQData(oldp+580,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x39U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x38U])))),64);
        bufp->chgQData(oldp+582,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x3bU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x3aU])))),64);
        bufp->chgQData(oldp+584,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x3dU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x3cU])))),64);
        bufp->chgQData(oldp+586,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x3fU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x3eU])))),64);
        bufp->chgQData(oldp+588,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x41U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x40U])))),64);
        bufp->chgQData(oldp+590,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x43U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x42U])))),64);
        bufp->chgQData(oldp+592,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x45U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x44U])))),64);
        bufp->chgQData(oldp+594,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x47U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x46U])))),64);
        bufp->chgQData(oldp+596,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x49U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x48U])))),64);
        bufp->chgQData(oldp+598,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x4bU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x4aU])))),64);
        bufp->chgQData(oldp+600,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x4dU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x4cU])))),64);
        bufp->chgQData(oldp+602,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x4fU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x4eU])))),64);
        bufp->chgQData(oldp+604,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x51U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x50U])))),64);
        bufp->chgQData(oldp+606,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x53U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x52U])))),64);
        bufp->chgQData(oldp+608,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x55U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x54U])))),64);
        bufp->chgQData(oldp+610,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x57U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x56U])))),64);
        bufp->chgQData(oldp+612,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x59U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x58U])))),64);
        bufp->chgQData(oldp+614,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x5bU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x5aU])))),64);
        bufp->chgQData(oldp+616,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x5dU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x5cU])))),64);
        bufp->chgQData(oldp+618,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x5fU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x5eU])))),64);
        bufp->chgQData(oldp+620,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x61U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x60U])))),64);
        bufp->chgQData(oldp+622,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x63U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x62U])))),64);
        bufp->chgQData(oldp+624,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x65U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x64U])))),64);
        bufp->chgQData(oldp+626,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x67U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x66U])))),64);
        bufp->chgQData(oldp+628,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x69U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x68U])))),64);
        bufp->chgQData(oldp+630,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x6bU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x6aU])))),64);
        bufp->chgQData(oldp+632,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x6dU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x6cU])))),64);
        bufp->chgQData(oldp+634,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x6fU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x6eU])))),64);
        bufp->chgQData(oldp+636,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x71U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x70U])))),64);
        bufp->chgQData(oldp+638,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x73U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x72U])))),64);
        bufp->chgQData(oldp+640,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x75U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x74U])))),64);
        bufp->chgQData(oldp+642,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x77U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x76U])))),64);
        bufp->chgQData(oldp+644,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x79U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x78U])))),64);
        bufp->chgQData(oldp+646,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x7bU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x7aU])))),64);
        bufp->chgQData(oldp+648,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x7dU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x7cU])))),64);
        bufp->chgQData(oldp+650,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x7fU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x7eU])))),64);
        bufp->chgBit(oldp+652,(vlSelfRef.top__DOT__u_fifo_tx__DOT__ACK_rcv_flag_l));
        bufp->chgBit(oldp+653,(vlSelfRef.top__DOT__u_fifo_tx__DOT__nACK_rcv_flag_l));
        bufp->chgIData(oldp+654,(vlSelfRef.top__DOT__u_fifo_tx__DOT__ACK_num_l),32);
        bufp->chgIData(oldp+655,(vlSelfRef.top__DOT__u_fifo_tx__DOT__nACK_num_l),32);
        bufp->chgBit(oldp+656,(vlSelfRef.top__DOT__u_fifo_tx__DOT__rd_debug_1));
        bufp->chgBit(oldp+657,(vlSelfRef.top__DOT__u_fifo_tx__DOT__rd_debug_2));
        bufp->chgBit(oldp+658,(vlSelfRef.top__DOT__u_fifo_tx__DOT__rd_upd));
        bufp->chgBit(oldp+659,(vlSelfRef.top__DOT__u_fifo_tx__DOT__nrd_upd));
        bufp->chgSData(oldp+660,(vlSelfRef.top__DOT__u_fifo_tx__DOT__bytes_abt_sent_msg_rd),16);
        bufp->chgSData(oldp+661,(vlSelfRef.top__DOT__u_fifo_tx__DOT__nbytes_abt_sent_msg_rd),16);
        bufp->chgSData(oldp+662,(vlSelfRef.top__DOT__u_fifo_tx__DOT__checksum_l),16);
        bufp->chgQData(oldp+663,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                   [0U][2U])) 
                                   << 0x38U) | (((QData)((IData)(
                                                                 vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                                 [0U][1U])) 
                                                 << 0x18U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                                   [0U][0U])) 
                                                   >> 8U)))),64);
        bufp->chgCData(oldp+665,((0xffU & vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                  [0U][0U])),8);
        bufp->chgQData(oldp+666,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                   [1U][2U])) 
                                   << 0x38U) | (((QData)((IData)(
                                                                 vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                                 [1U][1U])) 
                                                 << 0x18U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                                   [1U][0U])) 
                                                   >> 8U)))),64);
        bufp->chgCData(oldp+668,((0xffU & vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                  [1U][0U])),8);
        bufp->chgQData(oldp+669,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                   [2U][2U])) 
                                   << 0x38U) | (((QData)((IData)(
                                                                 vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                                 [2U][1U])) 
                                                 << 0x18U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                                   [2U][0U])) 
                                                   >> 8U)))),64);
        bufp->chgCData(oldp+671,((0xffU & vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                  [2U][0U])),8);
        bufp->chgQData(oldp+672,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                   [3U][2U])) 
                                   << 0x38U) | (((QData)((IData)(
                                                                 vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                                 [3U][1U])) 
                                                 << 0x18U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                                   [3U][0U])) 
                                                   >> 8U)))),64);
        bufp->chgCData(oldp+674,((0xffU & vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                  [3U][0U])),8);
        bufp->chgQData(oldp+675,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                   [4U][2U])) 
                                   << 0x38U) | (((QData)((IData)(
                                                                 vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                                 [4U][1U])) 
                                                 << 0x18U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                                   [4U][0U])) 
                                                   >> 8U)))),64);
        bufp->chgCData(oldp+677,((0xffU & vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                  [4U][0U])),8);
        bufp->chgQData(oldp+678,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_payload_fifo__DOT__fifo_entry_rd[2U])) 
                                   << 0x38U) | (((QData)((IData)(
                                                                 vlSelfRef.top__DOT__u_payload_fifo__DOT__fifo_entry_rd[1U])) 
                                                 << 0x18U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.top__DOT__u_payload_fifo__DOT__fifo_entry_rd[0U])) 
                                                   >> 8U)))),64);
        bufp->chgCData(oldp+680,((0xffU & vlSelfRef.top__DOT__u_payload_fifo__DOT__fifo_entry_rd[0U])),8);
        bufp->chgCData(oldp+681,(vlSelfRef.top__DOT__u_payload_fifo__DOT__flush_ptr),3);
        bufp->chgCData(oldp+682,(vlSelfRef.top__DOT__u_payload_fifo__DOT__len_TCP_flush),3);
        bufp->chgCData(oldp+683,(vlSelfRef.top__DOT__u_payload_fifo__DOT__rd_len_ptr),3);
        bufp->chgBit(oldp+684,(vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_flush_l));
        bufp->chgQData(oldp+685,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                   [0U][2U])) 
                                   << 0x38U) | (((QData)((IData)(
                                                                 vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                                 [0U][1U])) 
                                                 << 0x18U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                                   [0U][0U])) 
                                                   >> 8U)))),64);
        bufp->chgQData(oldp+687,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                   [1U][2U])) 
                                   << 0x38U) | (((QData)((IData)(
                                                                 vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                                 [1U][1U])) 
                                                 << 0x18U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                                   [1U][0U])) 
                                                   >> 8U)))),64);
        bufp->chgQData(oldp+689,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                   [2U][2U])) 
                                   << 0x38U) | (((QData)((IData)(
                                                                 vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                                 [2U][1U])) 
                                                 << 0x18U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                                   [2U][0U])) 
                                                   >> 8U)))),64);
        bufp->chgQData(oldp+691,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                   [3U][2U])) 
                                   << 0x38U) | (((QData)((IData)(
                                                                 vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                                 [3U][1U])) 
                                                 << 0x18U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                                   [3U][0U])) 
                                                   >> 8U)))),64);
        bufp->chgQData(oldp+693,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                   [4U][2U])) 
                                   << 0x38U) | (((QData)((IData)(
                                                                 vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                                 [4U][1U])) 
                                                 << 0x18U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                                   [4U][0U])) 
                                                   >> 8U)))),64);
        bufp->chgCData(oldp+695,((0xffU & vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                  [0U][0U])),8);
        bufp->chgCData(oldp+696,((0xffU & vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                  [1U][0U])),8);
        bufp->chgCData(oldp+697,((0xffU & vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                  [2U][0U])),8);
        bufp->chgCData(oldp+698,((0xffU & vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                  [3U][0U])),8);
        bufp->chgCData(oldp+699,((0xffU & vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                  [4U][0U])),8);
        bufp->chgCData(oldp+700,(vlSelfRef.top__DOT__u_payload_fifo__DOT__rd_ptr),3);
        bufp->chgIData(oldp+701,(vlSelfRef.top__DOT__u_payload_fifo__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+702,(vlSelfRef.top__DOT__u_tcp__DOT__rcv_data));
        bufp->chgCData(oldp+703,(vlSelfRef.top__DOT__u_tcp__DOT__TCP_control_rx),8);
        bufp->chgIData(oldp+704,(vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx),32);
        bufp->chgCData(oldp+705,(vlSelfRef.top__DOT__u_tcp__DOT__offset_rx),4);
        bufp->chgSData(oldp+706,(vlSelfRef.top__DOT__u_tcp__DOT__window_size_rx),16);
        bufp->chgSData(oldp+707,(vlSelfRef.top__DOT__u_tcp__DOT__checksum_rx),16);
        bufp->chgSData(oldp+708,(vlSelfRef.top__DOT__u_tcp__DOT__urgent_pointer_rx),16);
        bufp->chgSData(oldp+709,(vlSelfRef.top__DOT__u_tcp__DOT__payload_len_rx),16);
        bufp->chgBit(oldp+710,(vlSelfRef.top__DOT__u_tcp__DOT__seq_up));
        bufp->chgIData(oldp+711,(vlSelfRef.top__DOT__u_tcp__DOT__bytes_sent),32);
        bufp->chgSData(oldp+712,(((((IData)(vlSelfRef.top__DOT__u_payload_fifo__DOT__rd_ptr) 
                                    - (IData)(1U)) 
                                   == (IData)(vlSelfRef.top__DOT__wr_ptr_out_int))
                                   ? 0U : 0xffffU)),16);
        bufp->chgSData(oldp+713,(((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__out_order_req_l)
                                   ? (IData)(vlSelfRef.top__DOT__checksum_re_trans_int)
                                   : (1U & (IData)(vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__inst__TCP_checksum_out)))),16);
        bufp->chgBit(oldp+714,((1U & (IData)(vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__inst__TCP_checksum_out))));
        bufp->chgBit(oldp+715,(vlSelfRef.top__DOT__u_tcp__DOT__rd_FIFO_valid));
        bufp->chgIData(oldp+716,(vlSelfRef.top__DOT__u_tcp__DOT__ISN_gen__DOT__counter),32);
        bufp->chgIData(oldp+717,(vlSelfRef.top__DOT__bytes_abt_sent_int),32);
        bufp->chgBit(oldp+718,(vlSelfRef.top__DOT__u_tcp__DOT__TCP_tx__DOT__TCP_tx_valid));
        bufp->chgBit(oldp+719,(vlSelfRef.top__DOT__u_tcp__DOT__TCP_tx__DOT__TCP_tx_last));
        bufp->chgIData(oldp+720,(vlSelfRef.top__DOT__u_tcp__DOT__TCP_tx__DOT__TCP_checksum),17);
        bufp->chgBit(oldp+721,(vlSelfRef.top__DOT__u_tcp__DOT__TCP_tx__DOT__valid_checksum));
        bufp->chgCData(oldp+722,(vlSelfRef.top__DOT__u_tcp__DOT__TCP_tx__DOT__state),7);
        bufp->chgBit(oldp+723,(vlSelfRef.top__DOT__u_tcp__DOT__TCP_tx__DOT__nTCP_tx_last));
        bufp->chgBit(oldp+724,(vlSelfRef.top__DOT__u_tcp__DOT__TCP_tx__DOT__nseq_up));
        bufp->chgSData(oldp+725,(vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__inst__TCP_checksum_out),16);
        bufp->chgIData(oldp+726,(vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__TCP_checksum),17);
        bufp->chgIData(oldp+727,(vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__TCP_checksum_send),17);
        bufp->chgIData(oldp+728,(vlSelfRef.top__DOT__u_tcp__DOT__payload_len_rx),32);
        bufp->chgCData(oldp+729,(vlSelfRef.top__DOT__u_payload_fifo__DOT__wr_ptr),8);
        bufp->chgBit(oldp+730,((1U & ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__TCP_control_rx) 
                                      >> 7U))));
        bufp->chgBit(oldp+731,((1U & ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__TCP_control_rx) 
                                      >> 6U))));
        bufp->chgBit(oldp+732,((1U & ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__TCP_control_rx) 
                                      >> 5U))));
        bufp->chgBit(oldp+733,((1U & ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__TCP_control_rx) 
                                      >> 4U))));
        bufp->chgBit(oldp+734,((1U & ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__TCP_control_rx) 
                                      >> 3U))));
        bufp->chgBit(oldp+735,((1U & ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__TCP_control_rx) 
                                      >> 2U))));
        bufp->chgBit(oldp+736,((1U & ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__TCP_control_rx) 
                                      >> 1U))));
        bufp->chgBit(oldp+737,((1U & (IData)(vlSelfRef.top__DOT__u_tcp__DOT__TCP_control_rx))));
        bufp->chgSData(oldp+738,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__bytes_trk),16);
        bufp->chgSData(oldp+739,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nbytes_trk),16);
        bufp->chgIData(oldp+740,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__TCP_checksum),17);
        bufp->chgBit(oldp+741,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nTCP_valid));
        bufp->chgBit(oldp+742,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nrcv_data));
        bufp->chgBit(oldp+743,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__n_nw_segment));
        bufp->chgBit(oldp+744,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nTCP_last));
        bufp->chgCData(oldp+745,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__state),3);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgCData(oldp+746,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__tx_pkg_type),8);
        bufp->chgIData(oldp+747,(vlSelfRef.top__DOT__u_tcp__DOT__seq_num_tx),32);
        bufp->chgIData(oldp+748,(vlSelfRef.top__DOT__u_tcp__DOT__ACK_tx),32);
        bufp->chgBit(oldp+749,(vlSelfRef.top__DOT__u_tcp__DOT__hand_shake_done));
        bufp->chgBit(oldp+750,((1U & vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__tcp_flow__seq_rcv_str)));
        bufp->chgIData(oldp+751,(vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__tcp_flow__seq_rcv_str),32);
        bufp->chgCData(oldp+752,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__state),7);
        bufp->chgBit(oldp+753,((1U & ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__tx_pkg_type) 
                                      >> 7U))));
        bufp->chgBit(oldp+754,((1U & ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__tx_pkg_type) 
                                      >> 6U))));
        bufp->chgBit(oldp+755,((1U & ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__tx_pkg_type) 
                                      >> 5U))));
        bufp->chgBit(oldp+756,((1U & ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__tx_pkg_type) 
                                      >> 4U))));
        bufp->chgBit(oldp+757,((1U & ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__tx_pkg_type) 
                                      >> 3U))));
        bufp->chgBit(oldp+758,((1U & ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__tx_pkg_type) 
                                      >> 2U))));
        bufp->chgBit(oldp+759,((1U & ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__tx_pkg_type) 
                                      >> 1U))));
        bufp->chgBit(oldp+760,((1U & (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__tx_pkg_type))));
        bufp->chgCData(oldp+761,((7U & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__ack_num 
                                                >> 0x20U)))),3);
        bufp->chgIData(oldp+762,((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__ack_num)),32);
        bufp->chgBit(oldp+763,((1U & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_num 
                                              >> 0x20U)))));
        bufp->chgIData(oldp+764,((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_num)),32);
        bufp->chgSData(oldp+765,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__window_size),16);
        bufp->chgIData(oldp+766,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
                                   << 0xfU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[1U] 
                                               >> 0x11U))),32);
        bufp->chgSData(oldp+767,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[1U] 
                                             >> 1U))),16);
        bufp->chgSData(oldp+768,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[1U] 
                                              << 0xfU) 
                                             | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0U] 
                                                >> 0x11U)))),16);
        bufp->chgSData(oldp+769,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0U] 
                                             >> 1U))),16);
        bufp->chgBit(oldp+770,((1U & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0U])));
        bufp->chgIData(oldp+771,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U] 
                                   << 0x1eU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[4U] 
                                                >> 2U))),32);
        bufp->chgSData(oldp+772,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[4U] 
                                              << 0xeU) 
                                             | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[3U] 
                                                >> 0x12U)))),16);
        bufp->chgSData(oldp+773,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[3U] 
                                             >> 2U))),16);
        bufp->chgSData(oldp+774,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[3U] 
                                              << 0xeU) 
                                             | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
                                                >> 0x12U)))),16);
        bufp->chgBit(oldp+775,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
                                      >> 0x11U))));
        bufp->chgIData(oldp+776,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[7U] 
                                   << 0xdU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[6U] 
                                               >> 0x13U))),32);
        bufp->chgSData(oldp+777,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[6U] 
                                             >> 3U))),16);
        bufp->chgSData(oldp+778,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[6U] 
                                              << 0xdU) 
                                             | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U] 
                                                >> 0x13U)))),16);
        bufp->chgSData(oldp+779,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U] 
                                             >> 3U))),16);
        bufp->chgBit(oldp+780,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U] 
                                      >> 2U))));
        bufp->chgIData(oldp+781,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                                   << 0x1cU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[9U] 
                                                >> 4U))),32);
        bufp->chgSData(oldp+782,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[9U] 
                                              << 0xcU) 
                                             | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[8U] 
                                                >> 0x14U)))),16);
        bufp->chgSData(oldp+783,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[8U] 
                                             >> 4U))),16);
        bufp->chgSData(oldp+784,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[8U] 
                                              << 0xcU) 
                                             | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[7U] 
                                                >> 0x14U)))),16);
        bufp->chgBit(oldp+785,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[7U] 
                                      >> 0x13U))));
        bufp->chgIData(oldp+786,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                                   << 0xbU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                               >> 0x15U))),32);
        bufp->chgSData(oldp+787,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                             >> 5U))),16);
        bufp->chgSData(oldp+788,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                              << 0xbU) 
                                             | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                                                >> 0x15U)))),16);
        bufp->chgSData(oldp+789,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                                             >> 5U))),16);
        bufp->chgBit(oldp+790,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                                      >> 4U))));
        bufp->chgIData(oldp+791,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                                   << 0x1aU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                                >> 6U))),32);
        bufp->chgSData(oldp+792,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                              << 0xaU) 
                                             | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xdU] 
                                                >> 0x16U)))),16);
        bufp->chgSData(oldp+793,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xdU] 
                                             >> 6U))),16);
        bufp->chgSData(oldp+794,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xdU] 
                                              << 0xaU) 
                                             | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                                                >> 0x16U)))),16);
        bufp->chgBit(oldp+795,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                                      >> 0x15U))));
        bufp->chgIData(oldp+796,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                                   << 9U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                             >> 0x17U))),32);
        bufp->chgSData(oldp+797,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                             >> 7U))),16);
        bufp->chgSData(oldp+798,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                              << 9U) 
                                             | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                                                >> 0x17U)))),16);
        bufp->chgSData(oldp+799,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                                             >> 7U))),16);
        bufp->chgBit(oldp+800,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                                      >> 6U))));
        bufp->chgIData(oldp+801,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                                   << 0x18U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                                >> 8U))),32);
        bufp->chgSData(oldp+802,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                              << 8U) 
                                             | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x12U] 
                                                >> 0x18U)))),16);
        bufp->chgSData(oldp+803,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x12U] 
                                             >> 8U))),16);
        bufp->chgSData(oldp+804,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x12U] 
                                              << 8U) 
                                             | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                                                >> 0x18U)))),16);
        bufp->chgBit(oldp+805,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                                      >> 0x17U))));
        bufp->chgIData(oldp+806,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                   << 7U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                             >> 0x19U))),32);
        bufp->chgSData(oldp+807,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                             >> 9U))),16);
        bufp->chgSData(oldp+808,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                              << 7U) 
                                             | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                                                >> 0x19U)))),16);
        bufp->chgSData(oldp+809,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                                             >> 9U))),16);
        bufp->chgBit(oldp+810,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                                      >> 8U))));
        bufp->chgIData(oldp+811,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                                   << 0x16U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                                >> 0xaU))),32);
        bufp->chgSData(oldp+812,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                              << 6U) 
                                             | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x17U] 
                                                >> 0x1aU)))),16);
        bufp->chgSData(oldp+813,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x17U] 
                                             >> 0xaU))),16);
        bufp->chgSData(oldp+814,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x17U] 
                                              << 6U) 
                                             | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                                >> 0x1aU)))),16);
        bufp->chgBit(oldp+815,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                      >> 0x19U))));
        bufp->chgIData(oldp+816,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                   << 5U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                             >> 0x1bU))),32);
        bufp->chgSData(oldp+817,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                             >> 0xbU))),16);
        bufp->chgSData(oldp+818,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                              << 5U) 
                                             | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                                                >> 0x1bU)))),16);
        bufp->chgSData(oldp+819,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                                             >> 0xbU))),16);
        bufp->chgBit(oldp+820,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                                      >> 0xaU))));
        bufp->chgIData(oldp+821,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                                   << 0x14U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                                >> 0xcU))),32);
        bufp->chgSData(oldp+822,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                              << 4U) 
                                             | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1cU] 
                                                >> 0x1cU)))),16);
        bufp->chgSData(oldp+823,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1cU] 
                                             >> 0xcU))),16);
        bufp->chgSData(oldp+824,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1cU] 
                                              << 4U) 
                                             | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                                >> 0x1cU)))),16);
        bufp->chgBit(oldp+825,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                      >> 0x1bU))));
        bufp->chgIData(oldp+826,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                   << 3U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                             >> 0x1dU))),32);
        bufp->chgSData(oldp+827,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                             >> 0xdU))),16);
        bufp->chgSData(oldp+828,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                              << 3U) 
                                             | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                                                >> 0x1dU)))),16);
        bufp->chgSData(oldp+829,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                                             >> 0xdU))),16);
        bufp->chgBit(oldp+830,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                                      >> 0xcU))));
        bufp->chgIData(oldp+831,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                                   << 0x12U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                                >> 0xeU))),32);
        bufp->chgSData(oldp+832,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                              << 2U) 
                                             | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x21U] 
                                                >> 0x1eU)))),16);
        bufp->chgSData(oldp+833,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x21U] 
                                             >> 0xeU))),16);
        bufp->chgSData(oldp+834,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x21U] 
                                              << 2U) 
                                             | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                                >> 0x1eU)))),16);
        bufp->chgBit(oldp+835,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                      >> 0x1dU))));
        bufp->chgIData(oldp+836,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                                   << 1U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                             >> 0x1fU))),32);
        bufp->chgSData(oldp+837,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                             >> 0xfU))),16);
        bufp->chgSData(oldp+838,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                              << 1U) 
                                             | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                                                >> 0x1fU)))),16);
        bufp->chgSData(oldp+839,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                                             >> 0xfU))),16);
        bufp->chgBit(oldp+840,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                                      >> 0xeU))));
        bufp->chgIData(oldp+841,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x28U] 
                                   << 0x10U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x27U] 
                                                >> 0x10U))),32);
        bufp->chgSData(oldp+842,((0xffffU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x27U])),16);
        bufp->chgSData(oldp+843,((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x26U] 
                                  >> 0x10U)),16);
        bufp->chgSData(oldp+844,((0xffffU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x26U])),16);
        bufp->chgBit(oldp+845,((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                                >> 0x1fU)));
        bufp->chgIData(oldp+846,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__rcv_next),32);
        bufp->chgCData(oldp+847,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx),4);
        bufp->chgCData(oldp+848,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__match_idx),4);
        bufp->chgSData(oldp+849,((((((0x8000U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                                                 >> 0x10U)) 
                                     | (0x4000U & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x23U])) 
                                    | ((0x2000U & (
                                                   vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                                   >> 0x10U)) 
                                       | (0x1000U & 
                                          vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1eU]))) 
                                   | (((0x800U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                                  >> 0x10U)) 
                                       | (0x400U & 
                                          vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x19U])) 
                                      | ((0x200U & 
                                          (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                           >> 0x10U)) 
                                         | (0x100U 
                                            & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x14U])))) 
                                  | ((((0x80U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                                                 >> 0x10U)) 
                                       | (0x40U & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xfU])) 
                                      | ((0x20U & (
                                                   vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                                                   >> 0x10U)) 
                                         | (0x10U & 
                                            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xaU]))) 
                                     | (((8U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[7U] 
                                                >> 0x10U)) 
                                         | (4U & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U])) 
                                        | ((2U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
                                                  >> 0x10U)) 
                                           | (1U & 
                                              vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0U])))))),16);
        bufp->chgSData(oldp+850,((0xffffU & (~ ((((
                                                   (0x8000U 
                                                    & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                                                       >> 0x10U)) 
                                                   | (0x4000U 
                                                      & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x23U])) 
                                                  | ((0x2000U 
                                                      & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                                         >> 0x10U)) 
                                                     | (0x1000U 
                                                        & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1eU]))) 
                                                 | (((0x800U 
                                                      & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                                         >> 0x10U)) 
                                                     | (0x400U 
                                                        & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x19U])) 
                                                    | ((0x200U 
                                                        & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                                           >> 0x10U)) 
                                                       | (0x100U 
                                                          & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x14U])))) 
                                                | ((((0x80U 
                                                      & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                                                         >> 0x10U)) 
                                                     | (0x40U 
                                                        & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xfU])) 
                                                    | ((0x20U 
                                                        & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                                                           >> 0x10U)) 
                                                       | (0x10U 
                                                          & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xaU]))) 
                                                   | (((8U 
                                                        & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[7U] 
                                                           >> 0x10U)) 
                                                       | (4U 
                                                          & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U])) 
                                                      | ((2U 
                                                          & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
                                                             >> 0x10U)) 
                                                         | (1U 
                                                            & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0U])))))))),16);
        bufp->chgBit(oldp+851,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask));
        bufp->chgBit(oldp+852,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__match_found));
        bufp->chgSData(oldp+853,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__match_mask),16);
        bufp->chgCData(oldp+854,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_ptr),4);
        bufp->chgCData(oldp+855,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_ptr),4);
        bufp->chgCData(oldp+856,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr),4);
        bufp->chgIData(oldp+857,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk),32);
        bufp->chgCData(oldp+858,((0xfU & (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_list))),4);
        bufp->chgCData(oldp+859,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_list 
                                                  >> 4U)))),4);
        bufp->chgCData(oldp+860,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_list 
                                                  >> 8U)))),4);
        bufp->chgCData(oldp+861,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_list 
                                                  >> 0xcU)))),4);
        bufp->chgCData(oldp+862,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_list 
                                                  >> 0x10U)))),4);
        bufp->chgCData(oldp+863,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_list 
                                                  >> 0x14U)))),4);
        bufp->chgCData(oldp+864,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_list 
                                                  >> 0x18U)))),4);
        bufp->chgCData(oldp+865,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_list 
                                                  >> 0x1cU)))),4);
        bufp->chgCData(oldp+866,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_list 
                                                  >> 0x20U)))),4);
        bufp->chgCData(oldp+867,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_list 
                                                  >> 0x24U)))),4);
        bufp->chgCData(oldp+868,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_list 
                                                  >> 0x28U)))),4);
        bufp->chgCData(oldp+869,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_list 
                                                  >> 0x2cU)))),4);
        bufp->chgCData(oldp+870,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_list 
                                                  >> 0x30U)))),4);
        bufp->chgCData(oldp+871,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_list 
                                                  >> 0x34U)))),4);
        bufp->chgCData(oldp+872,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_list 
                                                  >> 0x38U)))),4);
        bufp->chgCData(oldp+873,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_list 
                                                  >> 0x3cU)))),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+874,(vlSelfRef.top__DOT__out_order_req_int));
        bufp->chgBit(oldp+875,(vlSelfRef.top__DOT__TCP_stop_flg_int));
        bufp->chgBit(oldp+876,(vlSelfRef.top__DOT__u_fifo_tx__DOT__nout_order_req_l));
        bufp->chgIData(oldp+877,(vlSelfRef.top__DOT__u_tcp__DOT__TCP_tx__DOT__nbytes_sent),32);
        bufp->chgIData(oldp+878,(vlSelfRef.top__DOT__u_tcp__DOT__TCP_tx__DOT__nTCP_checksum),17);
        bufp->chgCData(oldp+879,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nstate),7);
        bufp->chgCData(oldp+880,((7U & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nack_num 
                                                >> 0x20U)))),3);
        bufp->chgIData(oldp+881,((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nack_num)),32);
        bufp->chgBit(oldp+882,((1U & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nseq_num 
                                              >> 0x20U)))));
        bufp->chgIData(oldp+883,((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nseq_num)),32);
        bufp->chgSData(oldp+884,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nwindow_size),16);
        bufp->chgIData(oldp+885,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__wnd_allow),32);
        bufp->chgBit(oldp+886,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nhand_shake_done));
        bufp->chgIData(oldp+887,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nseq_rcv_str),32);
    }
    bufp->chgBit(oldp+888,(vlSelfRef.CLK));
    bufp->chgBit(oldp+889,(vlSelfRef.nRST));
    bufp->chgBit(oldp+890,(vlSelfRef.IP_valid));
    bufp->chgBit(oldp+891,(vlSelfRef.IP_flush));
    bufp->chgSData(oldp+892,(vlSelfRef.IP_pseuder),16);
    bufp->chgQData(oldp+893,(vlSelfRef.IP_payload),64);
    bufp->chgSData(oldp+895,(vlSelfRef.TCP_len),16);
    bufp->chgCData(oldp+896,(vlSelfRef.IP_bytes_rcv),8);
    bufp->chgBit(oldp+897,(vlSelfRef.TCP_send));
    bufp->chgQData(oldp+898,(vlSelfRef.TCP_transmit),64);
    bufp->chgBit(oldp+900,(vlSelfRef.TX_en));
    bufp->chgBit(oldp+901,(vlSelfRef.axis_last));
    bufp->chgBit(oldp+902,(vlSelfRef.wr_FIFO_en));
    bufp->chgIData(oldp+903,(vlSelfRef.len_seq),32);
    bufp->chgQData(oldp+904,(vlSelfRef.soupbin_TCP_payload),64);
    bufp->chgBit(oldp+906,(vlSelfRef.axis_r_en));
    bufp->chgBit(oldp+907,(vlSelfRef.axis_r_valid));
    bufp->chgQData(oldp+908,(vlSelfRef.axis_rd_data),64);
    bufp->chgBit(oldp+910,(vlSelfRef.TCP_stop_flag));
    bufp->chgIData(oldp+911,(vlSelfRef.rcv_next),32);
    bufp->chgIData(oldp+912,(vlSelfRef.seq_num),32);
    bufp->chgBit(oldp+913,(vlSelfRef.wr_FIFO_full));
    bufp->chgBit(oldp+914,(vlSelfRef.top__DOT__TCP_flush_int));
    bufp->chgIData(oldp+915,(vlSelfRef.top__DOT__u_tcp__DOT__ISN_num),32);
    bufp->chgIData(oldp+916,(((vlSelfRef.seq_num + (IData)(vlSelfRef.top__DOT__bytes_abt_sent_int)) 
                              - ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__ack_num) 
                                 - vlSelfRef.top__DOT__u_tcp__DOT__ISN_num))),32);
    bufp->chgSData(oldp+917,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask),16);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
