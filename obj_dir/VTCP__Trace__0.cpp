// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VTCP__Syms.h"


void VTCP___024root__trace_chg_0_sub_0(VTCP___024root* vlSelf, VerilatedFst::Buffer* bufp);

void VTCP___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTCP___024root__trace_chg_0\n"); );
    // Init
    VTCP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTCP___024root*>(voidSelf);
    VTCP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTCP___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VTCP___024root__trace_chg_0_sub_0(VTCP___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTCP___024root__trace_chg_0_sub_0\n"); );
    VTCP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgCData(oldp+0,(vlSelfRef.TCP__DOT__TCP_tx__DOT__nstate),7);
        bufp->chgBit(oldp+1,(vlSelfRef.TCP__DOT__TCP_tx__DOT__nTCP_tx_last));
        bufp->chgBit(oldp+2,(vlSelfRef.TCP__DOT__TCP_tx__DOT__nseq_up));
        bufp->chgCData(oldp+3,(vlSelfRef.TCP__DOT__tcp_rcv__DOT__nTCP_control_rx),8);
        bufp->chgIData(oldp+4,(vlSelfRef.TCP__DOT__tcp_rcv__DOT__nseq_num_rx),32);
        bufp->chgIData(oldp+5,(vlSelfRef.TCP__DOT__tcp_rcv__DOT__nACK_rx),32);
        bufp->chgCData(oldp+6,(vlSelfRef.TCP__DOT__tcp_rcv__DOT__noffset_rx),4);
        bufp->chgSData(oldp+7,(vlSelfRef.TCP__DOT__tcp_rcv__DOT__nwindow_size_rx),16);
        bufp->chgSData(oldp+8,(vlSelfRef.TCP__DOT__tcp_rcv__DOT__nchecksum_rx),16);
        bufp->chgSData(oldp+9,(vlSelfRef.TCP__DOT__tcp_rcv__DOT__nurgent_pointer_rx),16);
        bufp->chgIData(oldp+10,(vlSelfRef.TCP__DOT__tcp_rcv__DOT__nTCP_checksum),17);
        bufp->chgQData(oldp+11,(vlSelfRef.TCP__DOT__tcp_rcv__DOT__nTCP_payload_rx),64);
        bufp->chgCData(oldp+13,(vlSelfRef.TCP__DOT__tcp_rcv__DOT__nstate),3);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgIData(oldp+14,(vlSelfRef.TCP__DOT__TCP_tx__DOT__nbytes_sent),32);
        bufp->chgIData(oldp+15,(vlSelfRef.TCP__DOT__TCP_tx__DOT__nTCP_checksum),17);
        bufp->chgQData(oldp+16,(vlSelfRef.TCP__DOT__TCP_tx__DOT__nTCP_transmit),64);
        bufp->chgSData(oldp+18,(vlSelfRef.TCP__DOT__inst__DOT__nTCP_checksum_out),16);
        bufp->chgIData(oldp+19,(vlSelfRef.TCP__DOT__inst__DOT__nTCP_checksum),17);
        bufp->chgIData(oldp+20,(vlSelfRef.TCP__DOT__inst__DOT__nTCP_checksum_send),17);
        bufp->chgIData(oldp+21,(vlSelfRef.TCP__DOT__inst__DOT__temp),20);
        bufp->chgIData(oldp+22,(vlSelfRef.TCP__DOT__inst__DOT__temp1),20);
        bufp->chgCData(oldp+23,(vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug),2);
        bufp->chgBit(oldp+24,(vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug_0));
        bufp->chgBit(oldp+25,((1U & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_num 
                                             >> 0x20U)))));
        bufp->chgIData(oldp+26,((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_num)),32);
        bufp->chgIData(oldp+27,(vlSelfRef.TCP__DOT__tcp_flow__DOT__wnd_allow),32);
        bufp->chgIData(oldp+28,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[2U] 
                                  << 0xfU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[1U] 
                                              >> 0x11U))),32);
        bufp->chgSData(oldp+29,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[1U] 
                                            >> 1U))),16);
        bufp->chgSData(oldp+30,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[1U] 
                                             << 0xfU) 
                                            | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0U] 
                                               >> 0x11U)))),16);
        bufp->chgSData(oldp+31,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0U] 
                                            >> 1U))),16);
        bufp->chgBit(oldp+32,((1U & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0U])));
        bufp->chgIData(oldp+33,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[5U] 
                                  << 0x1eU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[4U] 
                                               >> 2U))),32);
        bufp->chgSData(oldp+34,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[4U] 
                                             << 0xeU) 
                                            | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[3U] 
                                               >> 0x12U)))),16);
        bufp->chgSData(oldp+35,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[3U] 
                                            >> 2U))),16);
        bufp->chgSData(oldp+36,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[3U] 
                                             << 0xeU) 
                                            | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[2U] 
                                               >> 0x12U)))),16);
        bufp->chgBit(oldp+37,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[2U] 
                                     >> 0x11U))));
        bufp->chgIData(oldp+38,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[7U] 
                                  << 0xdU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[6U] 
                                              >> 0x13U))),32);
        bufp->chgSData(oldp+39,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[6U] 
                                            >> 3U))),16);
        bufp->chgSData(oldp+40,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[6U] 
                                             << 0xdU) 
                                            | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[5U] 
                                               >> 0x13U)))),16);
        bufp->chgSData(oldp+41,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[5U] 
                                            >> 3U))),16);
        bufp->chgBit(oldp+42,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[5U] 
                                     >> 2U))));
        bufp->chgIData(oldp+43,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0xaU] 
                                  << 0x1cU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[9U] 
                                               >> 4U))),32);
        bufp->chgSData(oldp+44,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[9U] 
                                             << 0xcU) 
                                            | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[8U] 
                                               >> 0x14U)))),16);
        bufp->chgSData(oldp+45,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[8U] 
                                            >> 4U))),16);
        bufp->chgSData(oldp+46,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[8U] 
                                             << 0xcU) 
                                            | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[7U] 
                                               >> 0x14U)))),16);
        bufp->chgBit(oldp+47,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[7U] 
                                     >> 0x13U))));
        bufp->chgIData(oldp+48,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0xcU] 
                                  << 0xbU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0xbU] 
                                              >> 0x15U))),32);
        bufp->chgSData(oldp+49,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0xbU] 
                                            >> 5U))),16);
        bufp->chgSData(oldp+50,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0xbU] 
                                             << 0xbU) 
                                            | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0xaU] 
                                               >> 0x15U)))),16);
        bufp->chgSData(oldp+51,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0xaU] 
                                            >> 5U))),16);
        bufp->chgBit(oldp+52,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0xaU] 
                                     >> 4U))));
        bufp->chgIData(oldp+53,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0xfU] 
                                  << 0x1aU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0xeU] 
                                               >> 6U))),32);
        bufp->chgSData(oldp+54,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0xeU] 
                                             << 0xaU) 
                                            | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0xdU] 
                                               >> 0x16U)))),16);
        bufp->chgSData(oldp+55,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0xdU] 
                                            >> 6U))),16);
        bufp->chgSData(oldp+56,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0xdU] 
                                             << 0xaU) 
                                            | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0xcU] 
                                               >> 0x16U)))),16);
        bufp->chgBit(oldp+57,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0xcU] 
                                     >> 0x15U))));
        bufp->chgIData(oldp+58,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x11U] 
                                  << 9U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x10U] 
                                            >> 0x17U))),32);
        bufp->chgSData(oldp+59,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x10U] 
                                            >> 7U))),16);
        bufp->chgSData(oldp+60,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x10U] 
                                             << 9U) 
                                            | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0xfU] 
                                               >> 0x17U)))),16);
        bufp->chgSData(oldp+61,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0xfU] 
                                            >> 7U))),16);
        bufp->chgBit(oldp+62,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0xfU] 
                                     >> 6U))));
        bufp->chgIData(oldp+63,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x14U] 
                                  << 0x18U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x13U] 
                                               >> 8U))),32);
        bufp->chgSData(oldp+64,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x13U] 
                                             << 8U) 
                                            | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x12U] 
                                               >> 0x18U)))),16);
        bufp->chgSData(oldp+65,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x12U] 
                                            >> 8U))),16);
        bufp->chgSData(oldp+66,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x12U] 
                                             << 8U) 
                                            | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x11U] 
                                               >> 0x18U)))),16);
        bufp->chgBit(oldp+67,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x11U] 
                                     >> 0x17U))));
        bufp->chgIData(oldp+68,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x16U] 
                                  << 7U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x15U] 
                                            >> 0x19U))),32);
        bufp->chgSData(oldp+69,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x15U] 
                                            >> 9U))),16);
        bufp->chgSData(oldp+70,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x15U] 
                                             << 7U) 
                                            | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x14U] 
                                               >> 0x19U)))),16);
        bufp->chgSData(oldp+71,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x14U] 
                                            >> 9U))),16);
        bufp->chgBit(oldp+72,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x14U] 
                                     >> 8U))));
        bufp->chgIData(oldp+73,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x19U] 
                                  << 0x16U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x18U] 
                                               >> 0xaU))),32);
        bufp->chgSData(oldp+74,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x18U] 
                                             << 6U) 
                                            | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x17U] 
                                               >> 0x1aU)))),16);
        bufp->chgSData(oldp+75,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x17U] 
                                            >> 0xaU))),16);
        bufp->chgSData(oldp+76,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x17U] 
                                             << 6U) 
                                            | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x16U] 
                                               >> 0x1aU)))),16);
        bufp->chgBit(oldp+77,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x16U] 
                                     >> 0x19U))));
        bufp->chgIData(oldp+78,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x1bU] 
                                  << 5U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x1aU] 
                                            >> 0x1bU))),32);
        bufp->chgSData(oldp+79,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x1aU] 
                                            >> 0xbU))),16);
        bufp->chgSData(oldp+80,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x1aU] 
                                             << 5U) 
                                            | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x19U] 
                                               >> 0x1bU)))),16);
        bufp->chgSData(oldp+81,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x19U] 
                                            >> 0xbU))),16);
        bufp->chgBit(oldp+82,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x19U] 
                                     >> 0xaU))));
        bufp->chgIData(oldp+83,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x1eU] 
                                  << 0x14U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x1dU] 
                                               >> 0xcU))),32);
        bufp->chgSData(oldp+84,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x1dU] 
                                             << 4U) 
                                            | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x1cU] 
                                               >> 0x1cU)))),16);
        bufp->chgSData(oldp+85,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x1cU] 
                                            >> 0xcU))),16);
        bufp->chgSData(oldp+86,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x1cU] 
                                             << 4U) 
                                            | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x1bU] 
                                               >> 0x1cU)))),16);
        bufp->chgBit(oldp+87,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x1bU] 
                                     >> 0x1bU))));
        bufp->chgIData(oldp+88,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x20U] 
                                  << 3U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x1fU] 
                                            >> 0x1dU))),32);
        bufp->chgSData(oldp+89,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x1fU] 
                                            >> 0xdU))),16);
        bufp->chgSData(oldp+90,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x1fU] 
                                             << 3U) 
                                            | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x1eU] 
                                               >> 0x1dU)))),16);
        bufp->chgSData(oldp+91,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x1eU] 
                                            >> 0xdU))),16);
        bufp->chgBit(oldp+92,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x1eU] 
                                     >> 0xcU))));
        bufp->chgIData(oldp+93,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x23U] 
                                  << 0x12U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x22U] 
                                               >> 0xeU))),32);
        bufp->chgSData(oldp+94,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x22U] 
                                             << 2U) 
                                            | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x21U] 
                                               >> 0x1eU)))),16);
        bufp->chgSData(oldp+95,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x21U] 
                                            >> 0xeU))),16);
        bufp->chgSData(oldp+96,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x21U] 
                                             << 2U) 
                                            | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x20U] 
                                               >> 0x1eU)))),16);
        bufp->chgBit(oldp+97,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x20U] 
                                     >> 0x1dU))));
        bufp->chgIData(oldp+98,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x25U] 
                                  << 1U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x24U] 
                                            >> 0x1fU))),32);
        bufp->chgSData(oldp+99,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x24U] 
                                            >> 0xfU))),16);
        bufp->chgSData(oldp+100,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x24U] 
                                              << 1U) 
                                             | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x23U] 
                                                >> 0x1fU)))),16);
        bufp->chgSData(oldp+101,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x23U] 
                                             >> 0xfU))),16);
        bufp->chgBit(oldp+102,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x23U] 
                                      >> 0xeU))));
        bufp->chgIData(oldp+103,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x28U] 
                                   << 0x10U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x27U] 
                                                >> 0x10U))),32);
        bufp->chgSData(oldp+104,((0xffffU & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x27U])),16);
        bufp->chgSData(oldp+105,((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x26U] 
                                  >> 0x10U)),16);
        bufp->chgSData(oldp+106,((0xffffU & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x26U])),16);
        bufp->chgBit(oldp+107,((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x25U] 
                                >> 0x1fU)));
        bufp->chgIData(oldp+108,(vlSelfRef.TCP__DOT__tcp_flow__DOT__nrcv_next),32);
        bufp->chgCData(oldp+109,(vlSelfRef.TCP__DOT__tcp_flow__DOT__nlen_flush_ptr),8);
        bufp->chgIData(oldp+110,(vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_rx_trk),32);
        bufp->chgCData(oldp+111,(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop),8);
        bufp->chgCData(oldp+112,(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left),8);
        bufp->chgCData(oldp+113,((0xfU & (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list))),4);
        bufp->chgCData(oldp+114,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                                                  >> 4U)))),4);
        bufp->chgCData(oldp+115,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                                                  >> 8U)))),4);
        bufp->chgCData(oldp+116,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                                                  >> 0xcU)))),4);
        bufp->chgCData(oldp+117,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                                                  >> 0x10U)))),4);
        bufp->chgCData(oldp+118,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                                                  >> 0x14U)))),4);
        bufp->chgCData(oldp+119,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                                                  >> 0x18U)))),4);
        bufp->chgCData(oldp+120,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                                                  >> 0x1cU)))),4);
        bufp->chgCData(oldp+121,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                                                  >> 0x20U)))),4);
        bufp->chgCData(oldp+122,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                                                  >> 0x24U)))),4);
        bufp->chgCData(oldp+123,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                                                  >> 0x28U)))),4);
        bufp->chgCData(oldp+124,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                                                  >> 0x2cU)))),4);
        bufp->chgCData(oldp+125,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                                                  >> 0x30U)))),4);
        bufp->chgCData(oldp+126,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                                                  >> 0x34U)))),4);
        bufp->chgCData(oldp+127,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                                                  >> 0x38U)))),4);
        bufp->chgCData(oldp+128,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                                                  >> 0x3cU)))),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+129,(vlSelfRef.TCP__DOT__rcv_data));
        bufp->chgCData(oldp+130,(vlSelfRef.TCP__DOT__TCP_control_rx),8);
        bufp->chgIData(oldp+131,(vlSelfRef.TCP__DOT__seq_num_rx),32);
        bufp->chgIData(oldp+132,(vlSelfRef.TCP__DOT__ACK_rx),32);
        bufp->chgCData(oldp+133,(vlSelfRef.TCP__DOT__offset_rx),4);
        bufp->chgSData(oldp+134,(vlSelfRef.TCP__DOT__window_size_rx),16);
        bufp->chgSData(oldp+135,(vlSelfRef.TCP__DOT__checksum_rx),16);
        bufp->chgSData(oldp+136,(vlSelfRef.TCP__DOT__urgent_pointer_rx),16);
        bufp->chgSData(oldp+137,(vlSelfRef.TCP__DOT__payload_len_rx),16);
        bufp->chgBit(oldp+138,(vlSelfRef.TCP__DOT__seq_up));
        bufp->chgIData(oldp+139,(vlSelfRef.TCP__DOT__bytes_sent),32);
        bufp->chgBit(oldp+140,((1U & (IData)(vlSelfRef.TCP__DOT____Vcellout__inst__TCP_checksum_out))));
        bufp->chgBit(oldp+141,(vlSelfRef.TCP__DOT__rd_FIFO_valid));
        bufp->chgIData(oldp+142,(vlSelfRef.TCP__DOT__ISN_gen__DOT__counter),32);
        bufp->chgBit(oldp+143,(vlSelfRef.TCP__DOT__TCP_tx__DOT__TCP_tx_valid));
        bufp->chgBit(oldp+144,(vlSelfRef.TCP__DOT__TCP_tx__DOT__TCP_tx_last));
        bufp->chgIData(oldp+145,(vlSelfRef.TCP__DOT__TCP_tx__DOT__TCP_checksum),17);
        bufp->chgBit(oldp+146,(vlSelfRef.TCP__DOT__TCP_tx__DOT__valid_checksum));
        bufp->chgCData(oldp+147,(vlSelfRef.TCP__DOT__TCP_tx__DOT__state),7);
        bufp->chgSData(oldp+148,(vlSelfRef.TCP__DOT____Vcellout__inst__TCP_checksum_out),16);
        bufp->chgIData(oldp+149,(vlSelfRef.TCP__DOT__inst__DOT__TCP_checksum),17);
        bufp->chgIData(oldp+150,(vlSelfRef.TCP__DOT__inst__DOT__TCP_checksum_send),17);
        bufp->chgIData(oldp+151,(vlSelfRef.TCP__DOT__payload_len_rx),32);
        bufp->chgBit(oldp+152,((1U & ((IData)(vlSelfRef.TCP__DOT__TCP_control_rx) 
                                      >> 7U))));
        bufp->chgBit(oldp+153,((1U & ((IData)(vlSelfRef.TCP__DOT__TCP_control_rx) 
                                      >> 6U))));
        bufp->chgBit(oldp+154,((1U & ((IData)(vlSelfRef.TCP__DOT__TCP_control_rx) 
                                      >> 5U))));
        bufp->chgBit(oldp+155,((1U & ((IData)(vlSelfRef.TCP__DOT__TCP_control_rx) 
                                      >> 4U))));
        bufp->chgBit(oldp+156,((1U & ((IData)(vlSelfRef.TCP__DOT__TCP_control_rx) 
                                      >> 3U))));
        bufp->chgBit(oldp+157,((1U & ((IData)(vlSelfRef.TCP__DOT__TCP_control_rx) 
                                      >> 2U))));
        bufp->chgBit(oldp+158,((1U & ((IData)(vlSelfRef.TCP__DOT__TCP_control_rx) 
                                      >> 1U))));
        bufp->chgBit(oldp+159,((1U & (IData)(vlSelfRef.TCP__DOT__TCP_control_rx))));
        bufp->chgSData(oldp+160,(vlSelfRef.TCP__DOT__tcp_rcv__DOT__bytes_trk),16);
        bufp->chgSData(oldp+161,(vlSelfRef.TCP__DOT__tcp_rcv__DOT__nbytes_trk),16);
        bufp->chgIData(oldp+162,(vlSelfRef.TCP__DOT__tcp_rcv__DOT__TCP_checksum),17);
        bufp->chgBit(oldp+163,(vlSelfRef.TCP__DOT__tcp_rcv__DOT__nTCP_valid));
        bufp->chgBit(oldp+164,(vlSelfRef.TCP__DOT__tcp_rcv__DOT__nrcv_data));
        bufp->chgBit(oldp+165,(vlSelfRef.TCP__DOT__tcp_rcv__DOT__n_nw_segment));
        bufp->chgBit(oldp+166,(vlSelfRef.TCP__DOT__tcp_rcv__DOT__nTCP_last));
        bufp->chgCData(oldp+167,(vlSelfRef.TCP__DOT__tcp_rcv__DOT__state),3);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgCData(oldp+168,(vlSelfRef.TCP__DOT__tcp_flow__DOT__tx_pkg_type),8);
        bufp->chgIData(oldp+169,(vlSelfRef.TCP__DOT__seq_num_tx),32);
        bufp->chgIData(oldp+170,(vlSelfRef.TCP__DOT__ACK_tx),32);
        bufp->chgBit(oldp+171,(vlSelfRef.TCP__DOT__hand_shake_done));
        bufp->chgBit(oldp+172,((1U & vlSelfRef.TCP__DOT____Vcellout__tcp_flow__seq_rcv_str)));
        bufp->chgIData(oldp+173,(vlSelfRef.TCP__DOT____Vcellout__tcp_flow__seq_rcv_str),32);
        bufp->chgCData(oldp+174,(vlSelfRef.TCP__DOT__tcp_flow__DOT__state),7);
        bufp->chgBit(oldp+175,((1U & ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__tx_pkg_type) 
                                      >> 7U))));
        bufp->chgBit(oldp+176,((1U & ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__tx_pkg_type) 
                                      >> 6U))));
        bufp->chgBit(oldp+177,((1U & ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__tx_pkg_type) 
                                      >> 5U))));
        bufp->chgBit(oldp+178,((1U & ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__tx_pkg_type) 
                                      >> 4U))));
        bufp->chgBit(oldp+179,((1U & ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__tx_pkg_type) 
                                      >> 3U))));
        bufp->chgBit(oldp+180,((1U & ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__tx_pkg_type) 
                                      >> 2U))));
        bufp->chgBit(oldp+181,((1U & ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__tx_pkg_type) 
                                      >> 1U))));
        bufp->chgBit(oldp+182,((1U & (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__tx_pkg_type))));
        bufp->chgCData(oldp+183,((7U & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__ack_num 
                                                >> 0x20U)))),3);
        bufp->chgIData(oldp+184,((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__ack_num)),32);
        bufp->chgBit(oldp+185,((1U & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_num 
                                              >> 0x20U)))));
        bufp->chgIData(oldp+186,((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_num)),32);
        bufp->chgSData(oldp+187,(vlSelfRef.TCP__DOT__tcp_flow__DOT__window_size),16);
        bufp->chgIData(oldp+188,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
                                   << 0xfU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[1U] 
                                               >> 0x11U))),32);
        bufp->chgSData(oldp+189,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[1U] 
                                             >> 1U))),16);
        bufp->chgSData(oldp+190,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[1U] 
                                              << 0xfU) 
                                             | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0U] 
                                                >> 0x11U)))),16);
        bufp->chgSData(oldp+191,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0U] 
                                             >> 1U))),16);
        bufp->chgBit(oldp+192,((1U & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0U])));
        bufp->chgIData(oldp+193,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U] 
                                   << 0x1eU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[4U] 
                                                >> 2U))),32);
        bufp->chgSData(oldp+194,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[4U] 
                                              << 0xeU) 
                                             | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[3U] 
                                                >> 0x12U)))),16);
        bufp->chgSData(oldp+195,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[3U] 
                                             >> 2U))),16);
        bufp->chgSData(oldp+196,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[3U] 
                                              << 0xeU) 
                                             | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
                                                >> 0x12U)))),16);
        bufp->chgBit(oldp+197,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
                                      >> 0x11U))));
        bufp->chgIData(oldp+198,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[7U] 
                                   << 0xdU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[6U] 
                                               >> 0x13U))),32);
        bufp->chgSData(oldp+199,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[6U] 
                                             >> 3U))),16);
        bufp->chgSData(oldp+200,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[6U] 
                                              << 0xdU) 
                                             | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U] 
                                                >> 0x13U)))),16);
        bufp->chgSData(oldp+201,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U] 
                                             >> 3U))),16);
        bufp->chgBit(oldp+202,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U] 
                                      >> 2U))));
        bufp->chgIData(oldp+203,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                                   << 0x1cU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[9U] 
                                                >> 4U))),32);
        bufp->chgSData(oldp+204,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[9U] 
                                              << 0xcU) 
                                             | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[8U] 
                                                >> 0x14U)))),16);
        bufp->chgSData(oldp+205,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[8U] 
                                             >> 4U))),16);
        bufp->chgSData(oldp+206,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[8U] 
                                              << 0xcU) 
                                             | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[7U] 
                                                >> 0x14U)))),16);
        bufp->chgBit(oldp+207,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[7U] 
                                      >> 0x13U))));
        bufp->chgIData(oldp+208,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                                   << 0xbU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                               >> 0x15U))),32);
        bufp->chgSData(oldp+209,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                             >> 5U))),16);
        bufp->chgSData(oldp+210,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                              << 0xbU) 
                                             | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                                                >> 0x15U)))),16);
        bufp->chgSData(oldp+211,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                                             >> 5U))),16);
        bufp->chgBit(oldp+212,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                                      >> 4U))));
        bufp->chgIData(oldp+213,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                                   << 0x1aU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                                >> 6U))),32);
        bufp->chgSData(oldp+214,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                              << 0xaU) 
                                             | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xdU] 
                                                >> 0x16U)))),16);
        bufp->chgSData(oldp+215,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xdU] 
                                             >> 6U))),16);
        bufp->chgSData(oldp+216,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xdU] 
                                              << 0xaU) 
                                             | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                                                >> 0x16U)))),16);
        bufp->chgBit(oldp+217,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                                      >> 0x15U))));
        bufp->chgIData(oldp+218,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                                   << 9U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                             >> 0x17U))),32);
        bufp->chgSData(oldp+219,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                             >> 7U))),16);
        bufp->chgSData(oldp+220,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                              << 9U) 
                                             | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                                                >> 0x17U)))),16);
        bufp->chgSData(oldp+221,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                                             >> 7U))),16);
        bufp->chgBit(oldp+222,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                                      >> 6U))));
        bufp->chgIData(oldp+223,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                                   << 0x18U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                                >> 8U))),32);
        bufp->chgSData(oldp+224,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                              << 8U) 
                                             | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x12U] 
                                                >> 0x18U)))),16);
        bufp->chgSData(oldp+225,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x12U] 
                                             >> 8U))),16);
        bufp->chgSData(oldp+226,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x12U] 
                                              << 8U) 
                                             | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                                                >> 0x18U)))),16);
        bufp->chgBit(oldp+227,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                                      >> 0x17U))));
        bufp->chgIData(oldp+228,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                   << 7U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                             >> 0x19U))),32);
        bufp->chgSData(oldp+229,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                             >> 9U))),16);
        bufp->chgSData(oldp+230,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                              << 7U) 
                                             | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                                                >> 0x19U)))),16);
        bufp->chgSData(oldp+231,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                                             >> 9U))),16);
        bufp->chgBit(oldp+232,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                                      >> 8U))));
        bufp->chgIData(oldp+233,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                                   << 0x16U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                                >> 0xaU))),32);
        bufp->chgSData(oldp+234,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                              << 6U) 
                                             | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x17U] 
                                                >> 0x1aU)))),16);
        bufp->chgSData(oldp+235,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x17U] 
                                             >> 0xaU))),16);
        bufp->chgSData(oldp+236,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x17U] 
                                              << 6U) 
                                             | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                                >> 0x1aU)))),16);
        bufp->chgBit(oldp+237,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                      >> 0x19U))));
        bufp->chgIData(oldp+238,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                   << 5U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                             >> 0x1bU))),32);
        bufp->chgSData(oldp+239,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                             >> 0xbU))),16);
        bufp->chgSData(oldp+240,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                              << 5U) 
                                             | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                                                >> 0x1bU)))),16);
        bufp->chgSData(oldp+241,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                                             >> 0xbU))),16);
        bufp->chgBit(oldp+242,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                                      >> 0xaU))));
        bufp->chgIData(oldp+243,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                                   << 0x14U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                                >> 0xcU))),32);
        bufp->chgSData(oldp+244,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                              << 4U) 
                                             | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1cU] 
                                                >> 0x1cU)))),16);
        bufp->chgSData(oldp+245,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1cU] 
                                             >> 0xcU))),16);
        bufp->chgSData(oldp+246,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1cU] 
                                              << 4U) 
                                             | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                                >> 0x1cU)))),16);
        bufp->chgBit(oldp+247,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                      >> 0x1bU))));
        bufp->chgIData(oldp+248,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                   << 3U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                             >> 0x1dU))),32);
        bufp->chgSData(oldp+249,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                             >> 0xdU))),16);
        bufp->chgSData(oldp+250,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                              << 3U) 
                                             | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                                                >> 0x1dU)))),16);
        bufp->chgSData(oldp+251,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                                             >> 0xdU))),16);
        bufp->chgBit(oldp+252,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                                      >> 0xcU))));
        bufp->chgIData(oldp+253,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                                   << 0x12U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                                >> 0xeU))),32);
        bufp->chgSData(oldp+254,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                              << 2U) 
                                             | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x21U] 
                                                >> 0x1eU)))),16);
        bufp->chgSData(oldp+255,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x21U] 
                                             >> 0xeU))),16);
        bufp->chgSData(oldp+256,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x21U] 
                                              << 2U) 
                                             | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                                >> 0x1eU)))),16);
        bufp->chgBit(oldp+257,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                      >> 0x1dU))));
        bufp->chgIData(oldp+258,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                                   << 1U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                             >> 0x1fU))),32);
        bufp->chgSData(oldp+259,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                             >> 0xfU))),16);
        bufp->chgSData(oldp+260,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                              << 1U) 
                                             | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                                                >> 0x1fU)))),16);
        bufp->chgSData(oldp+261,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                                             >> 0xfU))),16);
        bufp->chgBit(oldp+262,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                                      >> 0xeU))));
        bufp->chgIData(oldp+263,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x28U] 
                                   << 0x10U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x27U] 
                                                >> 0x10U))),32);
        bufp->chgSData(oldp+264,((0xffffU & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x27U])),16);
        bufp->chgSData(oldp+265,((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x26U] 
                                  >> 0x10U)),16);
        bufp->chgSData(oldp+266,((0xffffU & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x26U])),16);
        bufp->chgBit(oldp+267,((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                                >> 0x1fU)));
        bufp->chgIData(oldp+268,(vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next),32);
        bufp->chgCData(oldp+269,(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx),4);
        bufp->chgCData(oldp+270,(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_idx),4);
        bufp->chgSData(oldp+271,((((((0x8000U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                                                 >> 0x10U)) 
                                     | (0x4000U & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x23U])) 
                                    | ((0x2000U & (
                                                   vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                                   >> 0x10U)) 
                                       | (0x1000U & 
                                          vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1eU]))) 
                                   | (((0x800U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                                  >> 0x10U)) 
                                       | (0x400U & 
                                          vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x19U])) 
                                      | ((0x200U & 
                                          (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                           >> 0x10U)) 
                                         | (0x100U 
                                            & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x14U])))) 
                                  | ((((0x80U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                                                 >> 0x10U)) 
                                       | (0x40U & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xfU])) 
                                      | ((0x20U & (
                                                   vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                                                   >> 0x10U)) 
                                         | (0x10U & 
                                            vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xaU]))) 
                                     | (((8U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[7U] 
                                                >> 0x10U)) 
                                         | (4U & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U])) 
                                        | ((2U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
                                                  >> 0x10U)) 
                                           | (1U & 
                                              vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0U])))))),16);
        bufp->chgSData(oldp+272,((0xffffU & (~ ((((
                                                   (0x8000U 
                                                    & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                                                       >> 0x10U)) 
                                                   | (0x4000U 
                                                      & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x23U])) 
                                                  | ((0x2000U 
                                                      & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                                         >> 0x10U)) 
                                                     | (0x1000U 
                                                        & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1eU]))) 
                                                 | (((0x800U 
                                                      & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                                         >> 0x10U)) 
                                                     | (0x400U 
                                                        & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x19U])) 
                                                    | ((0x200U 
                                                        & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                                           >> 0x10U)) 
                                                       | (0x100U 
                                                          & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x14U])))) 
                                                | ((((0x80U 
                                                      & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                                                         >> 0x10U)) 
                                                     | (0x40U 
                                                        & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xfU])) 
                                                    | ((0x20U 
                                                        & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                                                           >> 0x10U)) 
                                                       | (0x10U 
                                                          & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xaU]))) 
                                                   | (((8U 
                                                        & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[7U] 
                                                           >> 0x10U)) 
                                                       | (4U 
                                                          & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U])) 
                                                      | ((2U 
                                                          & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
                                                             >> 0x10U)) 
                                                         | (1U 
                                                            & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0U])))))))),16);
        bufp->chgBit(oldp+273,(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask));
        bufp->chgBit(oldp+274,(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_found));
        bufp->chgSData(oldp+275,(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_mask),16);
        bufp->chgCData(oldp+276,(vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_ptr),4);
        bufp->chgCData(oldp+277,(vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_ptr),4);
        bufp->chgCData(oldp+278,(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr),4);
        bufp->chgIData(oldp+279,(vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk),32);
        bufp->chgCData(oldp+280,((0xfU & (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_list))),4);
        bufp->chgCData(oldp+281,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_list 
                                                  >> 4U)))),4);
        bufp->chgCData(oldp+282,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_list 
                                                  >> 8U)))),4);
        bufp->chgCData(oldp+283,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_list 
                                                  >> 0xcU)))),4);
        bufp->chgCData(oldp+284,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_list 
                                                  >> 0x10U)))),4);
        bufp->chgCData(oldp+285,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_list 
                                                  >> 0x14U)))),4);
        bufp->chgCData(oldp+286,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_list 
                                                  >> 0x18U)))),4);
        bufp->chgCData(oldp+287,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_list 
                                                  >> 0x1cU)))),4);
        bufp->chgCData(oldp+288,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_list 
                                                  >> 0x20U)))),4);
        bufp->chgCData(oldp+289,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_list 
                                                  >> 0x24U)))),4);
        bufp->chgCData(oldp+290,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_list 
                                                  >> 0x28U)))),4);
        bufp->chgCData(oldp+291,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_list 
                                                  >> 0x2cU)))),4);
        bufp->chgCData(oldp+292,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_list 
                                                  >> 0x30U)))),4);
        bufp->chgCData(oldp+293,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_list 
                                                  >> 0x34U)))),4);
        bufp->chgCData(oldp+294,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_list 
                                                  >> 0x38U)))),4);
        bufp->chgCData(oldp+295,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_list 
                                                  >> 0x3cU)))),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgCData(oldp+296,(vlSelfRef.TCP__DOT__tcp_flow__DOT__nstate),7);
        bufp->chgCData(oldp+297,((7U & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__nack_num 
                                                >> 0x20U)))),3);
        bufp->chgIData(oldp+298,((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__nack_num)),32);
        bufp->chgSData(oldp+299,(vlSelfRef.TCP__DOT__tcp_flow__DOT__nwindow_size),16);
        bufp->chgBit(oldp+300,(vlSelfRef.TCP__DOT__tcp_flow__DOT__nhand_shake_done));
        bufp->chgIData(oldp+301,(vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_rcv_str),32);
    }
    bufp->chgBit(oldp+302,(vlSelfRef.CLK));
    bufp->chgBit(oldp+303,(vlSelfRef.nRST));
    bufp->chgBit(oldp+304,(vlSelfRef.TX_en));
    bufp->chgBit(oldp+305,(vlSelfRef.IP_valid));
    bufp->chgBit(oldp+306,(vlSelfRef.IP_flush));
    bufp->chgSData(oldp+307,(vlSelfRef.IP_pseuder),16);
    bufp->chgQData(oldp+308,(vlSelfRef.IP_payload),64);
    bufp->chgSData(oldp+310,(vlSelfRef.TCP_len),16);
    bufp->chgCData(oldp+311,(vlSelfRef.IP_bytes_rcv),8);
    bufp->chgBit(oldp+312,(vlSelfRef.nw_segment));
    bufp->chgBit(oldp+313,(vlSelfRef.axis_t_last));
    bufp->chgBit(oldp+314,(vlSelfRef.TCP_flush));
    bufp->chgQData(oldp+315,(vlSelfRef.axis_data_rx),64);
    bufp->chgBit(oldp+317,(vlSelfRef.handshake_done));
    bufp->chgIData(oldp+318,(vlSelfRef.seq_rcv_start),32);
    bufp->chgBit(oldp+319,(vlSelfRef.wr_FIFO_en));
    bufp->chgCData(oldp+320,(vlSelfRef.wr_FIFO_offset),8);
    bufp->chgBit(oldp+321,(vlSelfRef.rd_FIFO_valid_rcv));
    bufp->chgCData(oldp+322,(vlSelfRef.rd_FIFO_ptr),3);
    bufp->chgCData(oldp+323,(vlSelfRef.rd_FIFO_len),3);
    bufp->chgCData(oldp+324,(vlSelfRef.wr_ptr_out),3);
    bufp->chgCData(oldp+325,(vlSelfRef.wr_FIFO_len),3);
    bufp->chgBit(oldp+326,(vlSelfRef.rd_FIFO_en_rcv));
    bufp->chgIData(oldp+327,(vlSelfRef.seq_rx_FIFO_rd),32);
    bufp->chgBit(oldp+328,(vlSelfRef.full));
    bufp->chgIData(oldp+329,(vlSelfRef.ACK_num),32);
    bufp->chgBit(oldp+330,(vlSelfRef.ACK_rcv_flag));
    bufp->chgBit(oldp+331,(vlSelfRef.out_order_req));
    bufp->chgBit(oldp+332,(vlSelfRef.TCP_stop_flg));
    bufp->chgBit(oldp+333,(vlSelfRef.end_ss));
    bufp->chgQData(oldp+334,(vlSelfRef.rd_FIFO_payload),64);
    bufp->chgBit(oldp+336,(vlSelfRef.rd_FIFO_valid_tx));
    bufp->chgBit(oldp+337,(vlSelfRef.rd_FIFO_last));
    bufp->chgSData(oldp+338,(vlSelfRef.bytes_abt_sent),16);
    bufp->chgBit(oldp+339,(vlSelfRef.rd_FIFO_en_tx));
    bufp->chgBit(oldp+340,(vlSelfRef.TCP_send));
    bufp->chgQData(oldp+341,(vlSelfRef.TCP_transmit),64);
    bufp->chgBit(oldp+343,(vlSelfRef.re_trans));
    bufp->chgSData(oldp+344,(vlSelfRef.checksum_re_trans),16);
    bufp->chgIData(oldp+345,(vlSelfRef.rcv_next),32);
    bufp->chgIData(oldp+346,(vlSelfRef.seq_num),32);
    bufp->chgIData(oldp+347,(vlSelfRef.TCP__DOT__ISN_num),32);
    bufp->chgSData(oldp+348,(((IData)(vlSelfRef.full)
                               ? 0U : 0xffffU)),16);
    bufp->chgSData(oldp+349,(((IData)(vlSelfRef.re_trans)
                               ? (IData)(vlSelfRef.checksum_re_trans)
                               : (1U & (IData)(vlSelfRef.TCP__DOT____Vcellout__inst__TCP_checksum_out)))),16);
    bufp->chgIData(oldp+350,(vlSelfRef.bytes_abt_sent),32);
    bufp->chgBit(oldp+351,(vlSelfRef.TCP__DOT__inst__DOT__up_send));
    bufp->chgCData(oldp+352,(vlSelfRef.wr_FIFO_len),8);
    bufp->chgCData(oldp+353,(vlSelfRef.TCP__DOT____Vcellout__tcp_flow__rd_FIFO_len),8);
    bufp->chgSData(oldp+354,(vlSelfRef.TCP__DOT____Vcellout__tcp_flow__rd_FIFO_ptr),11);
    bufp->chgIData(oldp+355,(((vlSelfRef.seq_num + (IData)(vlSelfRef.bytes_abt_sent)) 
                              - ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__ack_num) 
                                 - vlSelfRef.TCP__DOT__ISN_num))),32);
    bufp->chgSData(oldp+356,(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask),16);
}

void VTCP___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTCP___024root__trace_cleanup\n"); );
    // Init
    VTCP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTCP___024root*>(voidSelf);
    VTCP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
