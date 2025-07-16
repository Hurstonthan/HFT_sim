// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VTCP_flow_ctrl__Syms.h"


void VTCP_flow_ctrl___024root__trace_chg_0_sub_0(VTCP_flow_ctrl___024root* vlSelf, VerilatedFst::Buffer* bufp);

void VTCP_flow_ctrl___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTCP_flow_ctrl___024root__trace_chg_0\n"); );
    // Init
    VTCP_flow_ctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTCP_flow_ctrl___024root*>(voidSelf);
    VTCP_flow_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTCP_flow_ctrl___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VTCP_flow_ctrl___024root__trace_chg_0_sub_0(VTCP_flow_ctrl___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTCP_flow_ctrl___024root__trace_chg_0_sub_0\n"); );
    VTCP_flow_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgCData(oldp+0,(vlSelfRef.TCP_flow_ctrl__DOT__case_bug),2);
        bufp->chgBit(oldp+1,(vlSelfRef.TCP_flow_ctrl__DOT__case_bug_0));
        bufp->chgCData(oldp+2,(vlSelfRef.TCP_flow_ctrl__DOT__nstate),7);
        bufp->chgCData(oldp+3,((7U & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__nack_num 
                                              >> 0x20U)))),3);
        bufp->chgIData(oldp+4,((IData)(vlSelfRef.TCP_flow_ctrl__DOT__nack_num)),32);
        bufp->chgBit(oldp+5,((1U & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__nseq_num 
                                            >> 0x20U)))));
        bufp->chgIData(oldp+6,((IData)(vlSelfRef.TCP_flow_ctrl__DOT__nseq_num)),32);
        bufp->chgSData(oldp+7,(vlSelfRef.TCP_flow_ctrl__DOT__nwindow_size),16);
        bufp->chgIData(oldp+8,(vlSelfRef.TCP_flow_ctrl__DOT__wnd_allow),32);
        bufp->chgIData(oldp+9,(((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[2U] 
                                 << 0xfU) | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[1U] 
                                             >> 0x11U))),32);
        bufp->chgSData(oldp+10,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[1U] 
                                            >> 1U))),16);
        bufp->chgSData(oldp+11,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[1U] 
                                             << 0xfU) 
                                            | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0U] 
                                               >> 0x11U)))),16);
        bufp->chgSData(oldp+12,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0U] 
                                            >> 1U))),16);
        bufp->chgBit(oldp+13,((1U & vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0U])));
        bufp->chgIData(oldp+14,(((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[5U] 
                                  << 0x1eU) | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[4U] 
                                               >> 2U))),32);
        bufp->chgSData(oldp+15,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[4U] 
                                             << 0xeU) 
                                            | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[3U] 
                                               >> 0x12U)))),16);
        bufp->chgSData(oldp+16,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[3U] 
                                            >> 2U))),16);
        bufp->chgSData(oldp+17,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[3U] 
                                             << 0xeU) 
                                            | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[2U] 
                                               >> 0x12U)))),16);
        bufp->chgBit(oldp+18,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[2U] 
                                     >> 0x11U))));
        bufp->chgIData(oldp+19,(((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[7U] 
                                  << 0xdU) | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[6U] 
                                              >> 0x13U))),32);
        bufp->chgSData(oldp+20,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[6U] 
                                            >> 3U))),16);
        bufp->chgSData(oldp+21,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[6U] 
                                             << 0xdU) 
                                            | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[5U] 
                                               >> 0x13U)))),16);
        bufp->chgSData(oldp+22,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[5U] 
                                            >> 3U))),16);
        bufp->chgBit(oldp+23,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[5U] 
                                     >> 2U))));
        bufp->chgIData(oldp+24,(((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0xaU] 
                                  << 0x1cU) | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[9U] 
                                               >> 4U))),32);
        bufp->chgSData(oldp+25,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[9U] 
                                             << 0xcU) 
                                            | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[8U] 
                                               >> 0x14U)))),16);
        bufp->chgSData(oldp+26,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[8U] 
                                            >> 4U))),16);
        bufp->chgSData(oldp+27,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[8U] 
                                             << 0xcU) 
                                            | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[7U] 
                                               >> 0x14U)))),16);
        bufp->chgBit(oldp+28,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[7U] 
                                     >> 0x13U))));
        bufp->chgIData(oldp+29,(((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0xcU] 
                                  << 0xbU) | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0xbU] 
                                              >> 0x15U))),32);
        bufp->chgSData(oldp+30,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0xbU] 
                                            >> 5U))),16);
        bufp->chgSData(oldp+31,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0xbU] 
                                             << 0xbU) 
                                            | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0xaU] 
                                               >> 0x15U)))),16);
        bufp->chgSData(oldp+32,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0xaU] 
                                            >> 5U))),16);
        bufp->chgBit(oldp+33,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0xaU] 
                                     >> 4U))));
        bufp->chgIData(oldp+34,(((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0xfU] 
                                  << 0x1aU) | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0xeU] 
                                               >> 6U))),32);
        bufp->chgSData(oldp+35,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0xeU] 
                                             << 0xaU) 
                                            | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0xdU] 
                                               >> 0x16U)))),16);
        bufp->chgSData(oldp+36,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0xdU] 
                                            >> 6U))),16);
        bufp->chgSData(oldp+37,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0xdU] 
                                             << 0xaU) 
                                            | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0xcU] 
                                               >> 0x16U)))),16);
        bufp->chgBit(oldp+38,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0xcU] 
                                     >> 0x15U))));
        bufp->chgIData(oldp+39,(((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x11U] 
                                  << 9U) | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x10U] 
                                            >> 0x17U))),32);
        bufp->chgSData(oldp+40,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x10U] 
                                            >> 7U))),16);
        bufp->chgSData(oldp+41,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x10U] 
                                             << 9U) 
                                            | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0xfU] 
                                               >> 0x17U)))),16);
        bufp->chgSData(oldp+42,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0xfU] 
                                            >> 7U))),16);
        bufp->chgBit(oldp+43,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0xfU] 
                                     >> 6U))));
        bufp->chgIData(oldp+44,(((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x14U] 
                                  << 0x18U) | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x13U] 
                                               >> 8U))),32);
        bufp->chgSData(oldp+45,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x13U] 
                                             << 8U) 
                                            | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x12U] 
                                               >> 0x18U)))),16);
        bufp->chgSData(oldp+46,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x12U] 
                                            >> 8U))),16);
        bufp->chgSData(oldp+47,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x12U] 
                                             << 8U) 
                                            | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x11U] 
                                               >> 0x18U)))),16);
        bufp->chgBit(oldp+48,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x11U] 
                                     >> 0x17U))));
        bufp->chgIData(oldp+49,(((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x16U] 
                                  << 7U) | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x15U] 
                                            >> 0x19U))),32);
        bufp->chgSData(oldp+50,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x15U] 
                                            >> 9U))),16);
        bufp->chgSData(oldp+51,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x15U] 
                                             << 7U) 
                                            | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x14U] 
                                               >> 0x19U)))),16);
        bufp->chgSData(oldp+52,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x14U] 
                                            >> 9U))),16);
        bufp->chgBit(oldp+53,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x14U] 
                                     >> 8U))));
        bufp->chgIData(oldp+54,(((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x19U] 
                                  << 0x16U) | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x18U] 
                                               >> 0xaU))),32);
        bufp->chgSData(oldp+55,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x18U] 
                                             << 6U) 
                                            | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x17U] 
                                               >> 0x1aU)))),16);
        bufp->chgSData(oldp+56,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x17U] 
                                            >> 0xaU))),16);
        bufp->chgSData(oldp+57,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x17U] 
                                             << 6U) 
                                            | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x16U] 
                                               >> 0x1aU)))),16);
        bufp->chgBit(oldp+58,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x16U] 
                                     >> 0x19U))));
        bufp->chgIData(oldp+59,(((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x1bU] 
                                  << 5U) | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x1aU] 
                                            >> 0x1bU))),32);
        bufp->chgSData(oldp+60,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x1aU] 
                                            >> 0xbU))),16);
        bufp->chgSData(oldp+61,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x1aU] 
                                             << 5U) 
                                            | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x19U] 
                                               >> 0x1bU)))),16);
        bufp->chgSData(oldp+62,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x19U] 
                                            >> 0xbU))),16);
        bufp->chgBit(oldp+63,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x19U] 
                                     >> 0xaU))));
        bufp->chgIData(oldp+64,(((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x1eU] 
                                  << 0x14U) | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x1dU] 
                                               >> 0xcU))),32);
        bufp->chgSData(oldp+65,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x1dU] 
                                             << 4U) 
                                            | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x1cU] 
                                               >> 0x1cU)))),16);
        bufp->chgSData(oldp+66,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x1cU] 
                                            >> 0xcU))),16);
        bufp->chgSData(oldp+67,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x1cU] 
                                             << 4U) 
                                            | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x1bU] 
                                               >> 0x1cU)))),16);
        bufp->chgBit(oldp+68,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x1bU] 
                                     >> 0x1bU))));
        bufp->chgIData(oldp+69,(((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x20U] 
                                  << 3U) | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x1fU] 
                                            >> 0x1dU))),32);
        bufp->chgSData(oldp+70,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x1fU] 
                                            >> 0xdU))),16);
        bufp->chgSData(oldp+71,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x1fU] 
                                             << 3U) 
                                            | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x1eU] 
                                               >> 0x1dU)))),16);
        bufp->chgSData(oldp+72,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x1eU] 
                                            >> 0xdU))),16);
        bufp->chgBit(oldp+73,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x1eU] 
                                     >> 0xcU))));
        bufp->chgIData(oldp+74,(((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x23U] 
                                  << 0x12U) | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x22U] 
                                               >> 0xeU))),32);
        bufp->chgSData(oldp+75,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x22U] 
                                             << 2U) 
                                            | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x21U] 
                                               >> 0x1eU)))),16);
        bufp->chgSData(oldp+76,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x21U] 
                                            >> 0xeU))),16);
        bufp->chgSData(oldp+77,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x21U] 
                                             << 2U) 
                                            | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x20U] 
                                               >> 0x1eU)))),16);
        bufp->chgBit(oldp+78,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x20U] 
                                     >> 0x1dU))));
        bufp->chgIData(oldp+79,(((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x25U] 
                                  << 1U) | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x24U] 
                                            >> 0x1fU))),32);
        bufp->chgSData(oldp+80,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x24U] 
                                            >> 0xfU))),16);
        bufp->chgSData(oldp+81,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x24U] 
                                             << 1U) 
                                            | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x23U] 
                                               >> 0x1fU)))),16);
        bufp->chgSData(oldp+82,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x23U] 
                                            >> 0xfU))),16);
        bufp->chgBit(oldp+83,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x23U] 
                                     >> 0xeU))));
        bufp->chgIData(oldp+84,(((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x28U] 
                                  << 0x10U) | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x27U] 
                                               >> 0x10U))),32);
        bufp->chgSData(oldp+85,((0xffffU & vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x27U])),16);
        bufp->chgSData(oldp+86,((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x26U] 
                                 >> 0x10U)),16);
        bufp->chgSData(oldp+87,((0xffffU & vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x26U])),16);
        bufp->chgBit(oldp+88,((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x25U] 
                               >> 0x1fU)));
        bufp->chgIData(oldp+89,(vlSelfRef.TCP_flow_ctrl__DOT__nrcv_next),32);
        bufp->chgSData(oldp+90,(vlSelfRef.TCP_flow_ctrl__DOT__overlap_mask),16);
        bufp->chgCData(oldp+91,(vlSelfRef.TCP_flow_ctrl__DOT__nlen_flush_ptr),8);
        bufp->chgIData(oldp+92,(vlSelfRef.TCP_flow_ctrl__DOT__nseq_rx_trk),32);
        bufp->chgCData(oldp+93,(vlSelfRef.TCP_flow_ctrl__DOT__bytes_drop),8);
        bufp->chgCData(oldp+94,(vlSelfRef.TCP_flow_ctrl__DOT__bytes_left),8);
        bufp->chgCData(oldp+95,((0xfU & (IData)(vlSelfRef.TCP_flow_ctrl__DOT__nflush_list))),4);
        bufp->chgCData(oldp+96,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__nflush_list 
                                                 >> 4U)))),4);
        bufp->chgCData(oldp+97,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__nflush_list 
                                                 >> 8U)))),4);
        bufp->chgCData(oldp+98,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__nflush_list 
                                                 >> 0xcU)))),4);
        bufp->chgCData(oldp+99,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__nflush_list 
                                                 >> 0x10U)))),4);
        bufp->chgCData(oldp+100,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__nflush_list 
                                                  >> 0x14U)))),4);
        bufp->chgCData(oldp+101,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__nflush_list 
                                                  >> 0x18U)))),4);
        bufp->chgCData(oldp+102,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__nflush_list 
                                                  >> 0x1cU)))),4);
        bufp->chgCData(oldp+103,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__nflush_list 
                                                  >> 0x20U)))),4);
        bufp->chgCData(oldp+104,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__nflush_list 
                                                  >> 0x24U)))),4);
        bufp->chgCData(oldp+105,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__nflush_list 
                                                  >> 0x28U)))),4);
        bufp->chgCData(oldp+106,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__nflush_list 
                                                  >> 0x2cU)))),4);
        bufp->chgCData(oldp+107,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__nflush_list 
                                                  >> 0x30U)))),4);
        bufp->chgCData(oldp+108,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__nflush_list 
                                                  >> 0x34U)))),4);
        bufp->chgCData(oldp+109,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__nflush_list 
                                                  >> 0x38U)))),4);
        bufp->chgCData(oldp+110,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__nflush_list 
                                                  >> 0x3cU)))),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+111,(vlSelfRef.TCP_flow_ctrl__DOT__state),7);
        bufp->chgBit(oldp+112,((1U & ((IData)(vlSelfRef.TCP_flow_ctrl__DOT__tx_pkg_type) 
                                      >> 7U))));
        bufp->chgBit(oldp+113,((1U & ((IData)(vlSelfRef.TCP_flow_ctrl__DOT__tx_pkg_type) 
                                      >> 6U))));
        bufp->chgBit(oldp+114,((1U & ((IData)(vlSelfRef.TCP_flow_ctrl__DOT__tx_pkg_type) 
                                      >> 5U))));
        bufp->chgBit(oldp+115,((1U & ((IData)(vlSelfRef.TCP_flow_ctrl__DOT__tx_pkg_type) 
                                      >> 4U))));
        bufp->chgBit(oldp+116,((1U & ((IData)(vlSelfRef.TCP_flow_ctrl__DOT__tx_pkg_type) 
                                      >> 3U))));
        bufp->chgBit(oldp+117,((1U & ((IData)(vlSelfRef.TCP_flow_ctrl__DOT__tx_pkg_type) 
                                      >> 2U))));
        bufp->chgBit(oldp+118,((1U & ((IData)(vlSelfRef.TCP_flow_ctrl__DOT__tx_pkg_type) 
                                      >> 1U))));
        bufp->chgBit(oldp+119,((1U & (IData)(vlSelfRef.TCP_flow_ctrl__DOT__tx_pkg_type))));
        bufp->chgCData(oldp+120,((7U & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__ack_num 
                                                >> 0x20U)))),3);
        bufp->chgIData(oldp+121,((IData)(vlSelfRef.TCP_flow_ctrl__DOT__ack_num)),32);
        bufp->chgBit(oldp+122,((1U & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__seq_num 
                                              >> 0x20U)))));
        bufp->chgIData(oldp+123,((IData)(vlSelfRef.TCP_flow_ctrl__DOT__seq_num)),32);
        bufp->chgSData(oldp+124,(vlSelfRef.TCP_flow_ctrl__DOT__window_size),16);
        bufp->chgIData(oldp+125,(((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[2U] 
                                   << 0xfU) | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[1U] 
                                               >> 0x11U))),32);
        bufp->chgSData(oldp+126,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[1U] 
                                             >> 1U))),16);
        bufp->chgSData(oldp+127,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[1U] 
                                              << 0xfU) 
                                             | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0U] 
                                                >> 0x11U)))),16);
        bufp->chgSData(oldp+128,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0U] 
                                             >> 1U))),16);
        bufp->chgBit(oldp+129,((1U & vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0U])));
        bufp->chgIData(oldp+130,(((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[5U] 
                                   << 0x1eU) | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[4U] 
                                                >> 2U))),32);
        bufp->chgSData(oldp+131,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[4U] 
                                              << 0xeU) 
                                             | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[3U] 
                                                >> 0x12U)))),16);
        bufp->chgSData(oldp+132,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[3U] 
                                             >> 2U))),16);
        bufp->chgSData(oldp+133,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[3U] 
                                              << 0xeU) 
                                             | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[2U] 
                                                >> 0x12U)))),16);
        bufp->chgBit(oldp+134,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[2U] 
                                      >> 0x11U))));
        bufp->chgIData(oldp+135,(((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[7U] 
                                   << 0xdU) | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[6U] 
                                               >> 0x13U))),32);
        bufp->chgSData(oldp+136,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[6U] 
                                             >> 3U))),16);
        bufp->chgSData(oldp+137,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[6U] 
                                              << 0xdU) 
                                             | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[5U] 
                                                >> 0x13U)))),16);
        bufp->chgSData(oldp+138,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[5U] 
                                             >> 3U))),16);
        bufp->chgBit(oldp+139,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[5U] 
                                      >> 2U))));
        bufp->chgIData(oldp+140,(((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0xaU] 
                                   << 0x1cU) | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[9U] 
                                                >> 4U))),32);
        bufp->chgSData(oldp+141,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[9U] 
                                              << 0xcU) 
                                             | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[8U] 
                                                >> 0x14U)))),16);
        bufp->chgSData(oldp+142,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[8U] 
                                             >> 4U))),16);
        bufp->chgSData(oldp+143,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[8U] 
                                              << 0xcU) 
                                             | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[7U] 
                                                >> 0x14U)))),16);
        bufp->chgBit(oldp+144,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[7U] 
                                      >> 0x13U))));
        bufp->chgIData(oldp+145,(((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0xcU] 
                                   << 0xbU) | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0xbU] 
                                               >> 0x15U))),32);
        bufp->chgSData(oldp+146,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0xbU] 
                                             >> 5U))),16);
        bufp->chgSData(oldp+147,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0xbU] 
                                              << 0xbU) 
                                             | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0xaU] 
                                                >> 0x15U)))),16);
        bufp->chgSData(oldp+148,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0xaU] 
                                             >> 5U))),16);
        bufp->chgBit(oldp+149,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0xaU] 
                                      >> 4U))));
        bufp->chgIData(oldp+150,(((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0xfU] 
                                   << 0x1aU) | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0xeU] 
                                                >> 6U))),32);
        bufp->chgSData(oldp+151,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0xeU] 
                                              << 0xaU) 
                                             | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0xdU] 
                                                >> 0x16U)))),16);
        bufp->chgSData(oldp+152,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0xdU] 
                                             >> 6U))),16);
        bufp->chgSData(oldp+153,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0xdU] 
                                              << 0xaU) 
                                             | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0xcU] 
                                                >> 0x16U)))),16);
        bufp->chgBit(oldp+154,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0xcU] 
                                      >> 0x15U))));
        bufp->chgIData(oldp+155,(((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x11U] 
                                   << 9U) | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x10U] 
                                             >> 0x17U))),32);
        bufp->chgSData(oldp+156,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x10U] 
                                             >> 7U))),16);
        bufp->chgSData(oldp+157,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x10U] 
                                              << 9U) 
                                             | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0xfU] 
                                                >> 0x17U)))),16);
        bufp->chgSData(oldp+158,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0xfU] 
                                             >> 7U))),16);
        bufp->chgBit(oldp+159,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0xfU] 
                                      >> 6U))));
        bufp->chgIData(oldp+160,(((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x14U] 
                                   << 0x18U) | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x13U] 
                                                >> 8U))),32);
        bufp->chgSData(oldp+161,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x13U] 
                                              << 8U) 
                                             | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x12U] 
                                                >> 0x18U)))),16);
        bufp->chgSData(oldp+162,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x12U] 
                                             >> 8U))),16);
        bufp->chgSData(oldp+163,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x12U] 
                                              << 8U) 
                                             | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x11U] 
                                                >> 0x18U)))),16);
        bufp->chgBit(oldp+164,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x11U] 
                                      >> 0x17U))));
        bufp->chgIData(oldp+165,(((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x16U] 
                                   << 7U) | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x15U] 
                                             >> 0x19U))),32);
        bufp->chgSData(oldp+166,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x15U] 
                                             >> 9U))),16);
        bufp->chgSData(oldp+167,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x15U] 
                                              << 7U) 
                                             | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x14U] 
                                                >> 0x19U)))),16);
        bufp->chgSData(oldp+168,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x14U] 
                                             >> 9U))),16);
        bufp->chgBit(oldp+169,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x14U] 
                                      >> 8U))));
        bufp->chgIData(oldp+170,(((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x19U] 
                                   << 0x16U) | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x18U] 
                                                >> 0xaU))),32);
        bufp->chgSData(oldp+171,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x18U] 
                                              << 6U) 
                                             | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x17U] 
                                                >> 0x1aU)))),16);
        bufp->chgSData(oldp+172,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x17U] 
                                             >> 0xaU))),16);
        bufp->chgSData(oldp+173,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x17U] 
                                              << 6U) 
                                             | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x16U] 
                                                >> 0x1aU)))),16);
        bufp->chgBit(oldp+174,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x16U] 
                                      >> 0x19U))));
        bufp->chgIData(oldp+175,(((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x1bU] 
                                   << 5U) | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x1aU] 
                                             >> 0x1bU))),32);
        bufp->chgSData(oldp+176,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x1aU] 
                                             >> 0xbU))),16);
        bufp->chgSData(oldp+177,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x1aU] 
                                              << 5U) 
                                             | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x19U] 
                                                >> 0x1bU)))),16);
        bufp->chgSData(oldp+178,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x19U] 
                                             >> 0xbU))),16);
        bufp->chgBit(oldp+179,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x19U] 
                                      >> 0xaU))));
        bufp->chgIData(oldp+180,(((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x1eU] 
                                   << 0x14U) | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x1dU] 
                                                >> 0xcU))),32);
        bufp->chgSData(oldp+181,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x1dU] 
                                              << 4U) 
                                             | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x1cU] 
                                                >> 0x1cU)))),16);
        bufp->chgSData(oldp+182,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x1cU] 
                                             >> 0xcU))),16);
        bufp->chgSData(oldp+183,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x1cU] 
                                              << 4U) 
                                             | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x1bU] 
                                                >> 0x1cU)))),16);
        bufp->chgBit(oldp+184,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x1bU] 
                                      >> 0x1bU))));
        bufp->chgIData(oldp+185,(((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x20U] 
                                   << 3U) | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x1fU] 
                                             >> 0x1dU))),32);
        bufp->chgSData(oldp+186,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x1fU] 
                                             >> 0xdU))),16);
        bufp->chgSData(oldp+187,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x1fU] 
                                              << 3U) 
                                             | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x1eU] 
                                                >> 0x1dU)))),16);
        bufp->chgSData(oldp+188,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x1eU] 
                                             >> 0xdU))),16);
        bufp->chgBit(oldp+189,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x1eU] 
                                      >> 0xcU))));
        bufp->chgIData(oldp+190,(((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x23U] 
                                   << 0x12U) | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x22U] 
                                                >> 0xeU))),32);
        bufp->chgSData(oldp+191,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x22U] 
                                              << 2U) 
                                             | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x21U] 
                                                >> 0x1eU)))),16);
        bufp->chgSData(oldp+192,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x21U] 
                                             >> 0xeU))),16);
        bufp->chgSData(oldp+193,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x21U] 
                                              << 2U) 
                                             | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x20U] 
                                                >> 0x1eU)))),16);
        bufp->chgBit(oldp+194,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x20U] 
                                      >> 0x1dU))));
        bufp->chgIData(oldp+195,(((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x25U] 
                                   << 1U) | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x24U] 
                                             >> 0x1fU))),32);
        bufp->chgSData(oldp+196,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x24U] 
                                             >> 0xfU))),16);
        bufp->chgSData(oldp+197,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x24U] 
                                              << 1U) 
                                             | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x23U] 
                                                >> 0x1fU)))),16);
        bufp->chgSData(oldp+198,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x23U] 
                                             >> 0xfU))),16);
        bufp->chgBit(oldp+199,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x23U] 
                                      >> 0xeU))));
        bufp->chgIData(oldp+200,(((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x28U] 
                                   << 0x10U) | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x27U] 
                                                >> 0x10U))),32);
        bufp->chgSData(oldp+201,((0xffffU & vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x27U])),16);
        bufp->chgSData(oldp+202,((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x26U] 
                                  >> 0x10U)),16);
        bufp->chgSData(oldp+203,((0xffffU & vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x26U])),16);
        bufp->chgBit(oldp+204,((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x25U] 
                                >> 0x1fU)));
        bufp->chgIData(oldp+205,(vlSelfRef.TCP_flow_ctrl__DOT__rcv_next),32);
        bufp->chgCData(oldp+206,(vlSelfRef.TCP_flow_ctrl__DOT__free_idx),4);
        bufp->chgCData(oldp+207,(vlSelfRef.TCP_flow_ctrl__DOT__match_idx),4);
        bufp->chgSData(oldp+208,((((((0x8000U & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x25U] 
                                                 >> 0x10U)) 
                                     | (0x4000U & vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x23U])) 
                                    | ((0x2000U & (
                                                   vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x20U] 
                                                   >> 0x10U)) 
                                       | (0x1000U & 
                                          vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x1eU]))) 
                                   | (((0x800U & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x1bU] 
                                                  >> 0x10U)) 
                                       | (0x400U & 
                                          vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x19U])) 
                                      | ((0x200U & 
                                          (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x16U] 
                                           >> 0x10U)) 
                                         | (0x100U 
                                            & vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x14U])))) 
                                  | ((((0x80U & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x11U] 
                                                 >> 0x10U)) 
                                       | (0x40U & vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0xfU])) 
                                      | ((0x20U & (
                                                   vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0xcU] 
                                                   >> 0x10U)) 
                                         | (0x10U & 
                                            vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0xaU]))) 
                                     | (((8U & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[7U] 
                                                >> 0x10U)) 
                                         | (4U & vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[5U])) 
                                        | ((2U & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[2U] 
                                                  >> 0x10U)) 
                                           | (1U & 
                                              vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0U])))))),16);
        bufp->chgSData(oldp+209,((0xffffU & (~ ((((
                                                   (0x8000U 
                                                    & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x25U] 
                                                       >> 0x10U)) 
                                                   | (0x4000U 
                                                      & vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x23U])) 
                                                  | ((0x2000U 
                                                      & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x20U] 
                                                         >> 0x10U)) 
                                                     | (0x1000U 
                                                        & vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x1eU]))) 
                                                 | (((0x800U 
                                                      & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x1bU] 
                                                         >> 0x10U)) 
                                                     | (0x400U 
                                                        & vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x19U])) 
                                                    | ((0x200U 
                                                        & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x16U] 
                                                           >> 0x10U)) 
                                                       | (0x100U 
                                                          & vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x14U])))) 
                                                | ((((0x80U 
                                                      & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x11U] 
                                                         >> 0x10U)) 
                                                     | (0x40U 
                                                        & vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0xfU])) 
                                                    | ((0x20U 
                                                        & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0xcU] 
                                                           >> 0x10U)) 
                                                       | (0x10U 
                                                          & vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0xaU]))) 
                                                   | (((8U 
                                                        & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[7U] 
                                                           >> 0x10U)) 
                                                       | (4U 
                                                          & vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[5U])) 
                                                      | ((2U 
                                                          & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[2U] 
                                                             >> 0x10U)) 
                                                         | (1U 
                                                            & vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0U])))))))),16);
        bufp->chgBit(oldp+210,(vlSelfRef.TCP_flow_ctrl__DOT__free_mask));
        bufp->chgBit(oldp+211,(vlSelfRef.TCP_flow_ctrl__DOT__match_found));
        bufp->chgSData(oldp+212,(vlSelfRef.TCP_flow_ctrl__DOT__match_mask),16);
        bufp->chgCData(oldp+213,(vlSelfRef.TCP_flow_ctrl__DOT__flush_ptr),4);
        bufp->chgCData(oldp+214,(vlSelfRef.TCP_flow_ctrl__DOT__nflush_ptr),4);
        bufp->chgCData(oldp+215,(vlSelfRef.TCP_flow_ctrl__DOT__len_flush_ptr),4);
        bufp->chgIData(oldp+216,(vlSelfRef.TCP_flow_ctrl__DOT__seq_rx_trk),32);
        bufp->chgCData(oldp+217,((0xfU & (IData)(vlSelfRef.TCP_flow_ctrl__DOT__flush_list))),4);
        bufp->chgCData(oldp+218,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__flush_list 
                                                  >> 4U)))),4);
        bufp->chgCData(oldp+219,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__flush_list 
                                                  >> 8U)))),4);
        bufp->chgCData(oldp+220,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__flush_list 
                                                  >> 0xcU)))),4);
        bufp->chgCData(oldp+221,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__flush_list 
                                                  >> 0x10U)))),4);
        bufp->chgCData(oldp+222,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__flush_list 
                                                  >> 0x14U)))),4);
        bufp->chgCData(oldp+223,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__flush_list 
                                                  >> 0x18U)))),4);
        bufp->chgCData(oldp+224,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__flush_list 
                                                  >> 0x1cU)))),4);
        bufp->chgCData(oldp+225,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__flush_list 
                                                  >> 0x20U)))),4);
        bufp->chgCData(oldp+226,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__flush_list 
                                                  >> 0x24U)))),4);
        bufp->chgCData(oldp+227,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__flush_list 
                                                  >> 0x28U)))),4);
        bufp->chgCData(oldp+228,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__flush_list 
                                                  >> 0x2cU)))),4);
        bufp->chgCData(oldp+229,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__flush_list 
                                                  >> 0x30U)))),4);
        bufp->chgCData(oldp+230,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__flush_list 
                                                  >> 0x34U)))),4);
        bufp->chgCData(oldp+231,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__flush_list 
                                                  >> 0x38U)))),4);
        bufp->chgCData(oldp+232,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__flush_list 
                                                  >> 0x3cU)))),4);
    }
    bufp->chgBit(oldp+233,(vlSelfRef.CLK));
    bufp->chgBit(oldp+234,(vlSelfRef.nRST));
    bufp->chgCData(oldp+235,(vlSelfRef.TCP_control_rx),8);
    bufp->chgIData(oldp+236,(vlSelfRef.seq_num_rx),32);
    bufp->chgIData(oldp+237,(vlSelfRef.ACK_rx),32);
    bufp->chgCData(oldp+238,(vlSelfRef.offset_rx),4);
    bufp->chgSData(oldp+239,(vlSelfRef.window_size_rx),16);
    bufp->chgSData(oldp+240,(vlSelfRef.checksum_rx),16);
    bufp->chgSData(oldp+241,(vlSelfRef.urgent_pointer_rx),16);
    bufp->chgBit(oldp+242,(vlSelfRef.rcv_data));
    bufp->chgBit(oldp+243,(vlSelfRef.TCP_tx_en));
    bufp->chgBit(oldp+244,(vlSelfRef.seq_up));
    bufp->chgCData(oldp+245,(vlSelfRef.TCP_control_tx),8);
    bufp->chgIData(oldp+246,(vlSelfRef.seq_num_tx),32);
    bufp->chgIData(oldp+247,(vlSelfRef.ACK_tx),32);
    bufp->chgCData(oldp+248,(vlSelfRef.offset_tx),4);
    bufp->chgSData(oldp+249,(vlSelfRef.window_size_tx),16);
    bufp->chgSData(oldp+250,(vlSelfRef.checksum_tx),16);
    bufp->chgSData(oldp+251,(vlSelfRef.urgent_pointer_tx),16);
    bufp->chgBit(oldp+252,(vlSelfRef.end_ss));
    bufp->chgBit(oldp+253,(vlSelfRef.TCP_stop_flg));
    bufp->chgBit(oldp+254,(vlSelfRef.full));
    bufp->chgBit(oldp+255,(vlSelfRef.timeout_flag));
    bufp->chgBit(oldp+256,(vlSelfRef.hand_shake_done));
    bufp->chgIData(oldp+257,(vlSelfRef.ISN_num),32);
    bufp->chgIData(oldp+258,(vlSelfRef.bytes_sent),32);
    bufp->chgIData(oldp+259,(vlSelfRef.bytes_abt_sent),32);
    bufp->chgIData(oldp+260,(vlSelfRef.payload_len_rx),32);
    bufp->chgBit(oldp+261,(vlSelfRef.TCP_last));
    bufp->chgIData(oldp+262,(vlSelfRef.rcv_next_out),32);
    bufp->chgIData(oldp+263,(vlSelfRef.seq_num_out),32);
    bufp->chgIData(oldp+264,(vlSelfRef.seq_rx_FIFO_rd),32);
    bufp->chgCData(oldp+265,(vlSelfRef.TCP_bytes_trk),8);
    bufp->chgCData(oldp+266,(vlSelfRef.wr_FIFO_offset),8);
    bufp->chgCData(oldp+267,(vlSelfRef.wr_FIFO_len),8);
    bufp->chgCData(oldp+268,(vlSelfRef.rd_FIFO_len),8);
    bufp->chgSData(oldp+269,(vlSelfRef.wr_FIFO_ptr),11);
    bufp->chgSData(oldp+270,(vlSelfRef.rd_FIFO_ptr),11);
    bufp->chgBit(oldp+271,(vlSelfRef.wr_FIFO_en));
    bufp->chgBit(oldp+272,(vlSelfRef.rd_FIFO_en));
    bufp->chgBit(oldp+273,(vlSelfRef.nw_segment));
    bufp->chgBit(oldp+274,(vlSelfRef.TCP_flush));
    bufp->chgBit(oldp+275,(vlSelfRef.rd_FIFO_valid));
    bufp->chgBit(oldp+276,((1U & ((IData)(vlSelfRef.TCP_control_rx) 
                                  >> 7U))));
    bufp->chgBit(oldp+277,((1U & ((IData)(vlSelfRef.TCP_control_rx) 
                                  >> 6U))));
    bufp->chgBit(oldp+278,((1U & ((IData)(vlSelfRef.TCP_control_rx) 
                                  >> 5U))));
    bufp->chgBit(oldp+279,((1U & ((IData)(vlSelfRef.TCP_control_rx) 
                                  >> 4U))));
    bufp->chgBit(oldp+280,((1U & ((IData)(vlSelfRef.TCP_control_rx) 
                                  >> 3U))));
    bufp->chgBit(oldp+281,((1U & ((IData)(vlSelfRef.TCP_control_rx) 
                                  >> 2U))));
    bufp->chgBit(oldp+282,((1U & ((IData)(vlSelfRef.TCP_control_rx) 
                                  >> 1U))));
    bufp->chgBit(oldp+283,((1U & (IData)(vlSelfRef.TCP_control_rx))));
    bufp->chgIData(oldp+284,(((vlSelfRef.seq_num_out 
                               + vlSelfRef.bytes_abt_sent) 
                              - ((IData)(vlSelfRef.TCP_flow_ctrl__DOT__ack_num) 
                                 - vlSelfRef.ISN_num))),32);
}

void VTCP_flow_ctrl___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTCP_flow_ctrl___024root__trace_cleanup\n"); );
    // Init
    VTCP_flow_ctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTCP_flow_ctrl___024root*>(voidSelf);
    VTCP_flow_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
