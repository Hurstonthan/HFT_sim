// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VFIFO_TX__Syms.h"


void VFIFO_TX___024root__trace_chg_0_sub_0(VFIFO_TX___024root* vlSelf, VerilatedFst::Buffer* bufp);

void VFIFO_TX___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_TX___024root__trace_chg_0\n"); );
    // Init
    VFIFO_TX___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFIFO_TX___024root*>(voidSelf);
    VFIFO_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VFIFO_TX___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VFIFO_TX___024root__trace_chg_0_sub_0(VFIFO_TX___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_TX___024root__trace_chg_0_sub_0\n"); );
    VFIFO_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgSData(oldp+0,(vlSelfRef.FIFO_TX__DOT__nbytes_abt_sent),16);
        bufp->chgQData(oldp+1,(vlSelfRef.FIFO_TX__DOT__nrd_FIFO_payload),64);
        bufp->chgCData(oldp+3,(vlSelfRef.FIFO_TX__DOT__nptr_str),6);
        bufp->chgCData(oldp+4,(vlSelfRef.FIFO_TX__DOT__nptr_end),6);
        bufp->chgSData(oldp+5,(vlSelfRef.FIFO_TX__DOT__nbytes_abt_sent_msg),16);
        bufp->chgCData(oldp+6,(vlSelfRef.FIFO_TX__DOT__nmsg_end_ptr),6);
        bufp->chgCData(oldp+7,(vlSelfRef.FIFO_TX__DOT__nrd_state),2);
        bufp->chgCData(oldp+8,(vlSelfRef.FIFO_TX__DOT__nwr_state),2);
        bufp->chgBit(oldp+9,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[2U] 
                                    >> 0x1cU))));
        bufp->chgIData(oldp+10,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[2U] 
                                  << 4U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[1U] 
                                            >> 0x1cU))),32);
        bufp->chgIData(oldp+11,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[1U] 
                                  << 4U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0U] 
                                            >> 0x1cU))),32);
        bufp->chgSData(oldp+12,((0xffffU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0U] 
                                            >> 0xcU))),16);
        bufp->chgCData(oldp+13,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0U] 
                                          >> 6U))),6);
        bufp->chgCData(oldp+14,((0x3fU & vlSelfRef.FIFO_TX__DOT__ndict_tx[0U])),6);
        bufp->chgBit(oldp+15,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[5U] 
                                     >> 0x19U))));
        bufp->chgIData(oldp+16,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[5U] 
                                  << 7U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[4U] 
                                            >> 0x19U))),32);
        bufp->chgIData(oldp+17,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[4U] 
                                  << 7U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[3U] 
                                            >> 0x19U))),32);
        bufp->chgSData(oldp+18,((0xffffU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[3U] 
                                            >> 9U))),16);
        bufp->chgCData(oldp+19,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[3U] 
                                          >> 3U))),6);
        bufp->chgCData(oldp+20,((0x3fU & ((vlSelfRef.FIFO_TX__DOT__ndict_tx[3U] 
                                           << 3U) | 
                                          (vlSelfRef.FIFO_TX__DOT__ndict_tx[2U] 
                                           >> 0x1dU)))),6);
        bufp->chgBit(oldp+21,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[8U] 
                                     >> 0x16U))));
        bufp->chgIData(oldp+22,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[8U] 
                                  << 0xaU) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[7U] 
                                              >> 0x16U))),32);
        bufp->chgIData(oldp+23,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[7U] 
                                  << 0xaU) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[6U] 
                                              >> 0x16U))),32);
        bufp->chgSData(oldp+24,((0xffffU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[6U] 
                                            >> 6U))),16);
        bufp->chgCData(oldp+25,((0x3fU & vlSelfRef.FIFO_TX__DOT__ndict_tx[6U])),6);
        bufp->chgCData(oldp+26,((vlSelfRef.FIFO_TX__DOT__ndict_tx[5U] 
                                 >> 0x1aU)),6);
        bufp->chgBit(oldp+27,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0xbU] 
                                     >> 0x13U))));
        bufp->chgIData(oldp+28,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0xbU] 
                                  << 0xdU) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0xaU] 
                                              >> 0x13U))),32);
        bufp->chgIData(oldp+29,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0xaU] 
                                  << 0xdU) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[9U] 
                                              >> 0x13U))),32);
        bufp->chgSData(oldp+30,((0xffffU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[9U] 
                                            >> 3U))),16);
        bufp->chgCData(oldp+31,((0x3fU & ((vlSelfRef.FIFO_TX__DOT__ndict_tx[9U] 
                                           << 3U) | 
                                          (vlSelfRef.FIFO_TX__DOT__ndict_tx[8U] 
                                           >> 0x1dU)))),6);
        bufp->chgCData(oldp+32,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[8U] 
                                          >> 0x17U))),6);
        bufp->chgBit(oldp+33,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0xeU] 
                                     >> 0x10U))));
        bufp->chgIData(oldp+34,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0xeU] 
                                  << 0x10U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0xdU] 
                                               >> 0x10U))),32);
        bufp->chgIData(oldp+35,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0xdU] 
                                  << 0x10U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0xcU] 
                                               >> 0x10U))),32);
        bufp->chgSData(oldp+36,((0xffffU & vlSelfRef.FIFO_TX__DOT__ndict_tx[0xcU])),16);
        bufp->chgCData(oldp+37,((vlSelfRef.FIFO_TX__DOT__ndict_tx[0xbU] 
                                 >> 0x1aU)),6);
        bufp->chgCData(oldp+38,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0xbU] 
                                          >> 0x14U))),6);
        bufp->chgBit(oldp+39,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x11U] 
                                     >> 0xdU))));
        bufp->chgIData(oldp+40,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x11U] 
                                  << 0x13U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x10U] 
                                               >> 0xdU))),32);
        bufp->chgIData(oldp+41,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x10U] 
                                  << 0x13U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0xfU] 
                                               >> 0xdU))),32);
        bufp->chgSData(oldp+42,((0xffffU & ((vlSelfRef.FIFO_TX__DOT__ndict_tx[0xfU] 
                                             << 3U) 
                                            | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0xeU] 
                                               >> 0x1dU)))),16);
        bufp->chgCData(oldp+43,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0xeU] 
                                          >> 0x17U))),6);
        bufp->chgCData(oldp+44,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0xeU] 
                                          >> 0x11U))),6);
        bufp->chgBit(oldp+45,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x14U] 
                                     >> 0xaU))));
        bufp->chgIData(oldp+46,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x14U] 
                                  << 0x16U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x13U] 
                                               >> 0xaU))),32);
        bufp->chgIData(oldp+47,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x13U] 
                                  << 0x16U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x12U] 
                                               >> 0xaU))),32);
        bufp->chgSData(oldp+48,((0xffffU & ((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x12U] 
                                             << 6U) 
                                            | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x11U] 
                                               >> 0x1aU)))),16);
        bufp->chgCData(oldp+49,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x11U] 
                                          >> 0x14U))),6);
        bufp->chgCData(oldp+50,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x11U] 
                                          >> 0xeU))),6);
        bufp->chgBit(oldp+51,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x17U] 
                                     >> 7U))));
        bufp->chgIData(oldp+52,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x17U] 
                                  << 0x19U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x16U] 
                                               >> 7U))),32);
        bufp->chgIData(oldp+53,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x16U] 
                                  << 0x19U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x15U] 
                                               >> 7U))),32);
        bufp->chgSData(oldp+54,((0xffffU & ((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x15U] 
                                             << 9U) 
                                            | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x14U] 
                                               >> 0x17U)))),16);
        bufp->chgCData(oldp+55,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x14U] 
                                          >> 0x11U))),6);
        bufp->chgCData(oldp+56,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x14U] 
                                          >> 0xbU))),6);
        bufp->chgBit(oldp+57,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1aU] 
                                     >> 4U))));
        bufp->chgIData(oldp+58,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1aU] 
                                  << 0x1cU) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x19U] 
                                               >> 4U))),32);
        bufp->chgIData(oldp+59,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x19U] 
                                  << 0x1cU) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x18U] 
                                               >> 4U))),32);
        bufp->chgSData(oldp+60,((0xffffU & ((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x18U] 
                                             << 0xcU) 
                                            | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x17U] 
                                               >> 0x14U)))),16);
        bufp->chgCData(oldp+61,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x17U] 
                                          >> 0xeU))),6);
        bufp->chgCData(oldp+62,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x17U] 
                                          >> 8U))),6);
        bufp->chgBit(oldp+63,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1dU] 
                                     >> 1U))));
        bufp->chgIData(oldp+64,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1dU] 
                                  << 0x1fU) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1cU] 
                                               >> 1U))),32);
        bufp->chgIData(oldp+65,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1cU] 
                                  << 0x1fU) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1bU] 
                                               >> 1U))),32);
        bufp->chgSData(oldp+66,((0xffffU & ((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1bU] 
                                             << 0xfU) 
                                            | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1aU] 
                                               >> 0x11U)))),16);
        bufp->chgCData(oldp+67,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1aU] 
                                          >> 0xbU))),6);
        bufp->chgCData(oldp+68,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1aU] 
                                          >> 5U))),6);
        bufp->chgBit(oldp+69,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1fU] 
                                     >> 0x1eU))));
        bufp->chgIData(oldp+70,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1fU] 
                                  << 2U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1eU] 
                                            >> 0x1eU))),32);
        bufp->chgIData(oldp+71,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1eU] 
                                  << 2U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1dU] 
                                            >> 0x1eU))),32);
        bufp->chgSData(oldp+72,((0xffffU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1dU] 
                                            >> 0xeU))),16);
        bufp->chgCData(oldp+73,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1dU] 
                                          >> 8U))),6);
        bufp->chgCData(oldp+74,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1dU] 
                                          >> 2U))),6);
        bufp->chgBit(oldp+75,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x22U] 
                                     >> 0x1bU))));
        bufp->chgIData(oldp+76,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x22U] 
                                  << 5U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x21U] 
                                            >> 0x1bU))),32);
        bufp->chgIData(oldp+77,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x21U] 
                                  << 5U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x20U] 
                                            >> 0x1bU))),32);
        bufp->chgSData(oldp+78,((0xffffU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x20U] 
                                            >> 0xbU))),16);
        bufp->chgCData(oldp+79,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x20U] 
                                          >> 5U))),6);
        bufp->chgCData(oldp+80,((0x3fU & ((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x20U] 
                                           << 1U) | 
                                          (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1fU] 
                                           >> 0x1fU)))),6);
        bufp->chgBit(oldp+81,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x25U] 
                                     >> 0x18U))));
        bufp->chgIData(oldp+82,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x25U] 
                                  << 8U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x24U] 
                                            >> 0x18U))),32);
        bufp->chgIData(oldp+83,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x24U] 
                                  << 8U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x23U] 
                                            >> 0x18U))),32);
        bufp->chgSData(oldp+84,((0xffffU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x23U] 
                                            >> 8U))),16);
        bufp->chgCData(oldp+85,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x23U] 
                                          >> 2U))),6);
        bufp->chgCData(oldp+86,((0x3fU & ((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x23U] 
                                           << 4U) | 
                                          (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x22U] 
                                           >> 0x1cU)))),6);
        bufp->chgBit(oldp+87,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x28U] 
                                     >> 0x15U))));
        bufp->chgIData(oldp+88,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x28U] 
                                  << 0xbU) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x27U] 
                                              >> 0x15U))),32);
        bufp->chgIData(oldp+89,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x27U] 
                                  << 0xbU) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x26U] 
                                              >> 0x15U))),32);
        bufp->chgSData(oldp+90,((0xffffU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x26U] 
                                            >> 5U))),16);
        bufp->chgCData(oldp+91,((0x3fU & ((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x26U] 
                                           << 1U) | 
                                          (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x25U] 
                                           >> 0x1fU)))),6);
        bufp->chgCData(oldp+92,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x25U] 
                                          >> 0x19U))),6);
        bufp->chgBit(oldp+93,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x2bU] 
                                     >> 0x12U))));
        bufp->chgIData(oldp+94,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x2bU] 
                                  << 0xeU) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x2aU] 
                                              >> 0x12U))),32);
        bufp->chgIData(oldp+95,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x2aU] 
                                  << 0xeU) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x29U] 
                                              >> 0x12U))),32);
        bufp->chgSData(oldp+96,((0xffffU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x29U] 
                                            >> 2U))),16);
        bufp->chgCData(oldp+97,((0x3fU & ((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x29U] 
                                           << 4U) | 
                                          (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x28U] 
                                           >> 0x1cU)))),6);
        bufp->chgCData(oldp+98,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x28U] 
                                          >> 0x16U))),6);
        bufp->chgBit(oldp+99,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x2eU] 
                                     >> 0xfU))));
        bufp->chgIData(oldp+100,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x2eU] 
                                   << 0x11U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x2dU] 
                                                >> 0xfU))),32);
        bufp->chgIData(oldp+101,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x2dU] 
                                   << 0x11U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x2cU] 
                                                >> 0xfU))),32);
        bufp->chgSData(oldp+102,((0xffffU & ((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x2cU] 
                                              << 1U) 
                                             | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x2bU] 
                                                >> 0x1fU)))),16);
        bufp->chgCData(oldp+103,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x2bU] 
                                           >> 0x19U))),6);
        bufp->chgCData(oldp+104,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x2bU] 
                                           >> 0x13U))),6);
        bufp->chgBit(oldp+105,(vlSelfRef.FIFO_TX__DOT__nrd_FIFO_last));
        bufp->chgBit(oldp+106,(vlSelfRef.FIFO_TX__DOT__nrd_FIFO_valid));
        bufp->chgBit(oldp+107,(vlSelfRef.FIFO_TX__DOT__nwr_FIFO_valid));
        bufp->chgCData(oldp+108,(vlSelfRef.FIFO_TX__DOT__ndict_wrt_ptr),4);
        bufp->chgCData(oldp+109,(vlSelfRef.FIFO_TX__DOT__nrd_ptr),6);
        bufp->chgCData(oldp+110,(vlSelfRef.FIFO_TX__DOT__nwrt_ptr),6);
        bufp->chgQData(oldp+111,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0U])))),64);
        bufp->chgQData(oldp+113,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[2U])))),64);
        bufp->chgQData(oldp+115,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[5U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[4U])))),64);
        bufp->chgQData(oldp+117,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[7U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[6U])))),64);
        bufp->chgQData(oldp+119,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[9U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[8U])))),64);
        bufp->chgQData(oldp+121,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0xbU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0xaU])))),64);
        bufp->chgQData(oldp+123,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0xdU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0xcU])))),64);
        bufp->chgQData(oldp+125,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0xfU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0xeU])))),64);
        bufp->chgQData(oldp+127,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x11U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x10U])))),64);
        bufp->chgQData(oldp+129,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x13U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x12U])))),64);
        bufp->chgQData(oldp+131,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x15U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x14U])))),64);
        bufp->chgQData(oldp+133,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x17U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x16U])))),64);
        bufp->chgQData(oldp+135,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x19U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x18U])))),64);
        bufp->chgQData(oldp+137,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x1bU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x1aU])))),64);
        bufp->chgQData(oldp+139,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x1dU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x1cU])))),64);
        bufp->chgQData(oldp+141,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x1fU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x1eU])))),64);
        bufp->chgQData(oldp+143,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x21U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x20U])))),64);
        bufp->chgQData(oldp+145,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x23U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x22U])))),64);
        bufp->chgQData(oldp+147,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x25U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x24U])))),64);
        bufp->chgQData(oldp+149,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x27U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x26U])))),64);
        bufp->chgQData(oldp+151,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x29U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x28U])))),64);
        bufp->chgQData(oldp+153,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x2bU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x2aU])))),64);
        bufp->chgQData(oldp+155,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x2dU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x2cU])))),64);
        bufp->chgQData(oldp+157,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x2fU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x2eU])))),64);
        bufp->chgQData(oldp+159,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x31U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x30U])))),64);
        bufp->chgQData(oldp+161,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x33U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x32U])))),64);
        bufp->chgQData(oldp+163,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x35U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x34U])))),64);
        bufp->chgQData(oldp+165,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x37U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x36U])))),64);
        bufp->chgQData(oldp+167,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x39U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x38U])))),64);
        bufp->chgQData(oldp+169,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x3bU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x3aU])))),64);
        bufp->chgQData(oldp+171,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x3dU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x3cU])))),64);
        bufp->chgQData(oldp+173,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x3fU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x3eU])))),64);
        bufp->chgQData(oldp+175,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x41U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x40U])))),64);
        bufp->chgQData(oldp+177,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x43U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x42U])))),64);
        bufp->chgQData(oldp+179,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x45U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x44U])))),64);
        bufp->chgQData(oldp+181,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x47U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x46U])))),64);
        bufp->chgQData(oldp+183,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x49U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x48U])))),64);
        bufp->chgQData(oldp+185,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x4bU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x4aU])))),64);
        bufp->chgQData(oldp+187,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x4dU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x4cU])))),64);
        bufp->chgQData(oldp+189,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x4fU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x4eU])))),64);
        bufp->chgQData(oldp+191,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x51U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x50U])))),64);
        bufp->chgQData(oldp+193,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x53U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x52U])))),64);
        bufp->chgQData(oldp+195,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x55U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x54U])))),64);
        bufp->chgQData(oldp+197,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x57U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x56U])))),64);
        bufp->chgQData(oldp+199,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x59U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x58U])))),64);
        bufp->chgQData(oldp+201,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x5bU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x5aU])))),64);
        bufp->chgQData(oldp+203,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x5dU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x5cU])))),64);
        bufp->chgQData(oldp+205,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x5fU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x5eU])))),64);
        bufp->chgQData(oldp+207,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x61U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x60U])))),64);
        bufp->chgQData(oldp+209,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x63U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x62U])))),64);
        bufp->chgQData(oldp+211,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x65U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x64U])))),64);
        bufp->chgQData(oldp+213,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x67U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x66U])))),64);
        bufp->chgQData(oldp+215,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x69U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x68U])))),64);
        bufp->chgQData(oldp+217,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x6bU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x6aU])))),64);
        bufp->chgQData(oldp+219,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x6dU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x6cU])))),64);
        bufp->chgQData(oldp+221,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x6fU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x6eU])))),64);
        bufp->chgQData(oldp+223,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x71U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x70U])))),64);
        bufp->chgQData(oldp+225,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x73U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x72U])))),64);
        bufp->chgQData(oldp+227,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x75U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x74U])))),64);
        bufp->chgQData(oldp+229,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x77U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x76U])))),64);
        bufp->chgQData(oldp+231,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x79U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x78U])))),64);
        bufp->chgQData(oldp+233,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x7bU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x7aU])))),64);
        bufp->chgQData(oldp+235,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x7dU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x7cU])))),64);
        bufp->chgQData(oldp+237,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x7fU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x7eU])))),64);
        bufp->chgBit(oldp+239,(vlSelfRef.FIFO_TX__DOT__nout_order_req_l));
        bufp->chgBit(oldp+240,(vlSelfRef.FIFO_TX__DOT__nACK_rcv_flag_l));
        bufp->chgIData(oldp+241,(vlSelfRef.FIFO_TX__DOT__nACK_num_l),32);
        bufp->chgBit(oldp+242,(vlSelfRef.FIFO_TX__DOT__nrd_upd));
        bufp->chgSData(oldp+243,(vlSelfRef.FIFO_TX__DOT__nbytes_abt_sent_msg_rd),16);
        bufp->chgSData(oldp+244,(vlSelfRef.FIFO_TX__DOT__nchecksum_l),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgSData(oldp+245,(vlSelfRef.FIFO_TX__DOT__bytes_msg_trk),16);
        bufp->chgCData(oldp+246,(vlSelfRef.FIFO_TX__DOT__ptr_str),6);
        bufp->chgCData(oldp+247,(vlSelfRef.FIFO_TX__DOT__ptr_end),6);
        bufp->chgCData(oldp+248,(vlSelfRef.FIFO_TX__DOT__flush_ptr),6);
        bufp->chgCData(oldp+249,(vlSelfRef.FIFO_TX__DOT__nflush_ptr),6);
        bufp->chgSData(oldp+250,(vlSelfRef.FIFO_TX__DOT__bytes_abt_sent_msg),16);
        bufp->chgCData(oldp+251,(vlSelfRef.FIFO_TX__DOT__msg_end_ptr),6);
        bufp->chgCData(oldp+252,(vlSelfRef.FIFO_TX__DOT__rd_state),2);
        bufp->chgCData(oldp+253,(vlSelfRef.FIFO_TX__DOT__wr_state),2);
        bufp->chgBit(oldp+254,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[2U] 
                                      >> 0x1cU))));
        bufp->chgIData(oldp+255,(((vlSelfRef.FIFO_TX__DOT__dict_tx[2U] 
                                   << 4U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[1U] 
                                             >> 0x1cU))),32);
        bufp->chgIData(oldp+256,(((vlSelfRef.FIFO_TX__DOT__dict_tx[1U] 
                                   << 4U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0U] 
                                             >> 0x1cU))),32);
        bufp->chgSData(oldp+257,((0xffffU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0U] 
                                             >> 0xcU))),16);
        bufp->chgCData(oldp+258,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0U] 
                                           >> 6U))),6);
        bufp->chgCData(oldp+259,((0x3fU & vlSelfRef.FIFO_TX__DOT__dict_tx[0U])),6);
        bufp->chgBit(oldp+260,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[5U] 
                                      >> 0x19U))));
        bufp->chgIData(oldp+261,(((vlSelfRef.FIFO_TX__DOT__dict_tx[5U] 
                                   << 7U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[4U] 
                                             >> 0x19U))),32);
        bufp->chgIData(oldp+262,(((vlSelfRef.FIFO_TX__DOT__dict_tx[4U] 
                                   << 7U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[3U] 
                                             >> 0x19U))),32);
        bufp->chgSData(oldp+263,((0xffffU & (vlSelfRef.FIFO_TX__DOT__dict_tx[3U] 
                                             >> 9U))),16);
        bufp->chgCData(oldp+264,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[3U] 
                                           >> 3U))),6);
        bufp->chgCData(oldp+265,((0x3fU & ((vlSelfRef.FIFO_TX__DOT__dict_tx[3U] 
                                            << 3U) 
                                           | (vlSelfRef.FIFO_TX__DOT__dict_tx[2U] 
                                              >> 0x1dU)))),6);
        bufp->chgBit(oldp+266,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[8U] 
                                      >> 0x16U))));
        bufp->chgIData(oldp+267,(((vlSelfRef.FIFO_TX__DOT__dict_tx[8U] 
                                   << 0xaU) | (vlSelfRef.FIFO_TX__DOT__dict_tx[7U] 
                                               >> 0x16U))),32);
        bufp->chgIData(oldp+268,(((vlSelfRef.FIFO_TX__DOT__dict_tx[7U] 
                                   << 0xaU) | (vlSelfRef.FIFO_TX__DOT__dict_tx[6U] 
                                               >> 0x16U))),32);
        bufp->chgSData(oldp+269,((0xffffU & (vlSelfRef.FIFO_TX__DOT__dict_tx[6U] 
                                             >> 6U))),16);
        bufp->chgCData(oldp+270,((0x3fU & vlSelfRef.FIFO_TX__DOT__dict_tx[6U])),6);
        bufp->chgCData(oldp+271,((vlSelfRef.FIFO_TX__DOT__dict_tx[5U] 
                                  >> 0x1aU)),6);
        bufp->chgBit(oldp+272,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[0xbU] 
                                      >> 0x13U))));
        bufp->chgIData(oldp+273,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0xbU] 
                                   << 0xdU) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0xaU] 
                                               >> 0x13U))),32);
        bufp->chgIData(oldp+274,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0xaU] 
                                   << 0xdU) | (vlSelfRef.FIFO_TX__DOT__dict_tx[9U] 
                                               >> 0x13U))),32);
        bufp->chgSData(oldp+275,((0xffffU & (vlSelfRef.FIFO_TX__DOT__dict_tx[9U] 
                                             >> 3U))),16);
        bufp->chgCData(oldp+276,((0x3fU & ((vlSelfRef.FIFO_TX__DOT__dict_tx[9U] 
                                            << 3U) 
                                           | (vlSelfRef.FIFO_TX__DOT__dict_tx[8U] 
                                              >> 0x1dU)))),6);
        bufp->chgCData(oldp+277,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[8U] 
                                           >> 0x17U))),6);
        bufp->chgBit(oldp+278,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[0xeU] 
                                      >> 0x10U))));
        bufp->chgIData(oldp+279,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0xeU] 
                                   << 0x10U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0xdU] 
                                                >> 0x10U))),32);
        bufp->chgIData(oldp+280,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0xdU] 
                                   << 0x10U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0xcU] 
                                                >> 0x10U))),32);
        bufp->chgSData(oldp+281,((0xffffU & vlSelfRef.FIFO_TX__DOT__dict_tx[0xcU])),16);
        bufp->chgCData(oldp+282,((vlSelfRef.FIFO_TX__DOT__dict_tx[0xbU] 
                                  >> 0x1aU)),6);
        bufp->chgCData(oldp+283,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0xbU] 
                                           >> 0x14U))),6);
        bufp->chgBit(oldp+284,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x11U] 
                                      >> 0xdU))));
        bufp->chgIData(oldp+285,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x11U] 
                                   << 0x13U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x10U] 
                                                >> 0xdU))),32);
        bufp->chgIData(oldp+286,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x10U] 
                                   << 0x13U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0xfU] 
                                                >> 0xdU))),32);
        bufp->chgSData(oldp+287,((0xffffU & ((vlSelfRef.FIFO_TX__DOT__dict_tx[0xfU] 
                                              << 3U) 
                                             | (vlSelfRef.FIFO_TX__DOT__dict_tx[0xeU] 
                                                >> 0x1dU)))),16);
        bufp->chgCData(oldp+288,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0xeU] 
                                           >> 0x17U))),6);
        bufp->chgCData(oldp+289,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0xeU] 
                                           >> 0x11U))),6);
        bufp->chgBit(oldp+290,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x14U] 
                                      >> 0xaU))));
        bufp->chgIData(oldp+291,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x14U] 
                                   << 0x16U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x13U] 
                                                >> 0xaU))),32);
        bufp->chgIData(oldp+292,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x13U] 
                                   << 0x16U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x12U] 
                                                >> 0xaU))),32);
        bufp->chgSData(oldp+293,((0xffffU & ((vlSelfRef.FIFO_TX__DOT__dict_tx[0x12U] 
                                              << 6U) 
                                             | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x11U] 
                                                >> 0x1aU)))),16);
        bufp->chgCData(oldp+294,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x11U] 
                                           >> 0x14U))),6);
        bufp->chgCData(oldp+295,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x11U] 
                                           >> 0xeU))),6);
        bufp->chgBit(oldp+296,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x17U] 
                                      >> 7U))));
        bufp->chgIData(oldp+297,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x17U] 
                                   << 0x19U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x16U] 
                                                >> 7U))),32);
        bufp->chgIData(oldp+298,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x16U] 
                                   << 0x19U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x15U] 
                                                >> 7U))),32);
        bufp->chgSData(oldp+299,((0xffffU & ((vlSelfRef.FIFO_TX__DOT__dict_tx[0x15U] 
                                              << 9U) 
                                             | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x14U] 
                                                >> 0x17U)))),16);
        bufp->chgCData(oldp+300,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x14U] 
                                           >> 0x11U))),6);
        bufp->chgCData(oldp+301,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x14U] 
                                           >> 0xbU))),6);
        bufp->chgBit(oldp+302,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1aU] 
                                      >> 4U))));
        bufp->chgIData(oldp+303,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x1aU] 
                                   << 0x1cU) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x19U] 
                                                >> 4U))),32);
        bufp->chgIData(oldp+304,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x19U] 
                                   << 0x1cU) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x18U] 
                                                >> 4U))),32);
        bufp->chgSData(oldp+305,((0xffffU & ((vlSelfRef.FIFO_TX__DOT__dict_tx[0x18U] 
                                              << 0xcU) 
                                             | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x17U] 
                                                >> 0x14U)))),16);
        bufp->chgCData(oldp+306,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x17U] 
                                           >> 0xeU))),6);
        bufp->chgCData(oldp+307,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x17U] 
                                           >> 8U))),6);
        bufp->chgBit(oldp+308,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1dU] 
                                      >> 1U))));
        bufp->chgIData(oldp+309,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x1dU] 
                                   << 0x1fU) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1cU] 
                                                >> 1U))),32);
        bufp->chgIData(oldp+310,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x1cU] 
                                   << 0x1fU) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1bU] 
                                                >> 1U))),32);
        bufp->chgSData(oldp+311,((0xffffU & ((vlSelfRef.FIFO_TX__DOT__dict_tx[0x1bU] 
                                              << 0xfU) 
                                             | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1aU] 
                                                >> 0x11U)))),16);
        bufp->chgCData(oldp+312,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1aU] 
                                           >> 0xbU))),6);
        bufp->chgCData(oldp+313,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1aU] 
                                           >> 5U))),6);
        bufp->chgBit(oldp+314,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1fU] 
                                      >> 0x1eU))));
        bufp->chgIData(oldp+315,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x1fU] 
                                   << 2U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1eU] 
                                             >> 0x1eU))),32);
        bufp->chgIData(oldp+316,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x1eU] 
                                   << 2U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1dU] 
                                             >> 0x1eU))),32);
        bufp->chgSData(oldp+317,((0xffffU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1dU] 
                                             >> 0xeU))),16);
        bufp->chgCData(oldp+318,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1dU] 
                                           >> 8U))),6);
        bufp->chgCData(oldp+319,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1dU] 
                                           >> 2U))),6);
        bufp->chgBit(oldp+320,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x22U] 
                                      >> 0x1bU))));
        bufp->chgIData(oldp+321,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x22U] 
                                   << 5U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x21U] 
                                             >> 0x1bU))),32);
        bufp->chgIData(oldp+322,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x21U] 
                                   << 5U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x20U] 
                                             >> 0x1bU))),32);
        bufp->chgSData(oldp+323,((0xffffU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x20U] 
                                             >> 0xbU))),16);
        bufp->chgCData(oldp+324,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x20U] 
                                           >> 5U))),6);
        bufp->chgCData(oldp+325,((0x3fU & ((vlSelfRef.FIFO_TX__DOT__dict_tx[0x20U] 
                                            << 1U) 
                                           | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1fU] 
                                              >> 0x1fU)))),6);
        bufp->chgBit(oldp+326,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x25U] 
                                      >> 0x18U))));
        bufp->chgIData(oldp+327,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x25U] 
                                   << 8U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x24U] 
                                             >> 0x18U))),32);
        bufp->chgIData(oldp+328,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x24U] 
                                   << 8U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x23U] 
                                             >> 0x18U))),32);
        bufp->chgSData(oldp+329,((0xffffU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x23U] 
                                             >> 8U))),16);
        bufp->chgCData(oldp+330,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x23U] 
                                           >> 2U))),6);
        bufp->chgCData(oldp+331,((0x3fU & ((vlSelfRef.FIFO_TX__DOT__dict_tx[0x23U] 
                                            << 4U) 
                                           | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x22U] 
                                              >> 0x1cU)))),6);
        bufp->chgBit(oldp+332,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x28U] 
                                      >> 0x15U))));
        bufp->chgIData(oldp+333,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x28U] 
                                   << 0xbU) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x27U] 
                                               >> 0x15U))),32);
        bufp->chgIData(oldp+334,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x27U] 
                                   << 0xbU) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x26U] 
                                               >> 0x15U))),32);
        bufp->chgSData(oldp+335,((0xffffU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x26U] 
                                             >> 5U))),16);
        bufp->chgCData(oldp+336,((0x3fU & ((vlSelfRef.FIFO_TX__DOT__dict_tx[0x26U] 
                                            << 1U) 
                                           | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x25U] 
                                              >> 0x1fU)))),6);
        bufp->chgCData(oldp+337,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x25U] 
                                           >> 0x19U))),6);
        bufp->chgBit(oldp+338,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x2bU] 
                                      >> 0x12U))));
        bufp->chgIData(oldp+339,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x2bU] 
                                   << 0xeU) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x2aU] 
                                               >> 0x12U))),32);
        bufp->chgIData(oldp+340,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x2aU] 
                                   << 0xeU) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x29U] 
                                               >> 0x12U))),32);
        bufp->chgSData(oldp+341,((0xffffU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x29U] 
                                             >> 2U))),16);
        bufp->chgCData(oldp+342,((0x3fU & ((vlSelfRef.FIFO_TX__DOT__dict_tx[0x29U] 
                                            << 4U) 
                                           | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x28U] 
                                              >> 0x1cU)))),6);
        bufp->chgCData(oldp+343,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x28U] 
                                           >> 0x16U))),6);
        bufp->chgBit(oldp+344,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x2eU] 
                                      >> 0xfU))));
        bufp->chgIData(oldp+345,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x2eU] 
                                   << 0x11U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x2dU] 
                                                >> 0xfU))),32);
        bufp->chgIData(oldp+346,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x2dU] 
                                   << 0x11U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x2cU] 
                                                >> 0xfU))),32);
        bufp->chgSData(oldp+347,((0xffffU & ((vlSelfRef.FIFO_TX__DOT__dict_tx[0x2cU] 
                                              << 1U) 
                                             | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x2bU] 
                                                >> 0x1fU)))),16);
        bufp->chgCData(oldp+348,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x2bU] 
                                           >> 0x19U))),6);
        bufp->chgCData(oldp+349,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x2bU] 
                                           >> 0x13U))),6);
        bufp->chgBit(oldp+350,(vlSelfRef.FIFO_TX__DOT__full));
        bufp->chgBit(oldp+351,(((IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr) 
                                == (IData)(vlSelfRef.FIFO_TX__DOT__wrt_ptr))));
        bufp->chgCData(oldp+352,(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr),4);
        bufp->chgCData(oldp+353,(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr),4);
        bufp->chgCData(oldp+354,(vlSelfRef.FIFO_TX__DOT__ndict_rd_ptr),4);
        bufp->chgCData(oldp+355,(vlSelfRef.FIFO_TX__DOT__rd_ptr),6);
        bufp->chgCData(oldp+356,(vlSelfRef.FIFO_TX__DOT__wrt_ptr),6);
        bufp->chgQData(oldp+357,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0U])))),64);
        bufp->chgQData(oldp+359,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[2U])))),64);
        bufp->chgQData(oldp+361,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[5U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[4U])))),64);
        bufp->chgQData(oldp+363,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[7U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[6U])))),64);
        bufp->chgQData(oldp+365,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[9U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[8U])))),64);
        bufp->chgQData(oldp+367,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0xbU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0xaU])))),64);
        bufp->chgQData(oldp+369,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0xdU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0xcU])))),64);
        bufp->chgQData(oldp+371,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0xfU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0xeU])))),64);
        bufp->chgQData(oldp+373,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x11U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x10U])))),64);
        bufp->chgQData(oldp+375,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x13U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x12U])))),64);
        bufp->chgQData(oldp+377,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x15U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x14U])))),64);
        bufp->chgQData(oldp+379,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x17U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x16U])))),64);
        bufp->chgQData(oldp+381,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x19U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x18U])))),64);
        bufp->chgQData(oldp+383,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x1bU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x1aU])))),64);
        bufp->chgQData(oldp+385,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x1dU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x1cU])))),64);
        bufp->chgQData(oldp+387,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x1fU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x1eU])))),64);
        bufp->chgQData(oldp+389,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x21U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x20U])))),64);
        bufp->chgQData(oldp+391,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x23U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x22U])))),64);
        bufp->chgQData(oldp+393,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x25U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x24U])))),64);
        bufp->chgQData(oldp+395,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x27U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x26U])))),64);
        bufp->chgQData(oldp+397,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x29U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x28U])))),64);
        bufp->chgQData(oldp+399,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x2bU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x2aU])))),64);
        bufp->chgQData(oldp+401,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x2dU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x2cU])))),64);
        bufp->chgQData(oldp+403,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x2fU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x2eU])))),64);
        bufp->chgQData(oldp+405,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x31U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x30U])))),64);
        bufp->chgQData(oldp+407,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x33U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x32U])))),64);
        bufp->chgQData(oldp+409,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x35U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x34U])))),64);
        bufp->chgQData(oldp+411,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x37U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x36U])))),64);
        bufp->chgQData(oldp+413,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x39U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x38U])))),64);
        bufp->chgQData(oldp+415,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x3bU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x3aU])))),64);
        bufp->chgQData(oldp+417,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x3dU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x3cU])))),64);
        bufp->chgQData(oldp+419,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x3fU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x3eU])))),64);
        bufp->chgQData(oldp+421,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x41U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x40U])))),64);
        bufp->chgQData(oldp+423,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x43U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x42U])))),64);
        bufp->chgQData(oldp+425,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x45U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x44U])))),64);
        bufp->chgQData(oldp+427,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x47U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x46U])))),64);
        bufp->chgQData(oldp+429,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x49U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x48U])))),64);
        bufp->chgQData(oldp+431,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x4bU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x4aU])))),64);
        bufp->chgQData(oldp+433,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x4dU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x4cU])))),64);
        bufp->chgQData(oldp+435,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x4fU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x4eU])))),64);
        bufp->chgQData(oldp+437,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x51U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x50U])))),64);
        bufp->chgQData(oldp+439,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x53U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x52U])))),64);
        bufp->chgQData(oldp+441,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x55U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x54U])))),64);
        bufp->chgQData(oldp+443,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x57U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x56U])))),64);
        bufp->chgQData(oldp+445,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x59U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x58U])))),64);
        bufp->chgQData(oldp+447,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x5bU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x5aU])))),64);
        bufp->chgQData(oldp+449,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x5dU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x5cU])))),64);
        bufp->chgQData(oldp+451,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x5fU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x5eU])))),64);
        bufp->chgQData(oldp+453,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x61U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x60U])))),64);
        bufp->chgQData(oldp+455,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x63U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x62U])))),64);
        bufp->chgQData(oldp+457,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x65U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x64U])))),64);
        bufp->chgQData(oldp+459,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x67U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x66U])))),64);
        bufp->chgQData(oldp+461,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x69U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x68U])))),64);
        bufp->chgQData(oldp+463,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x6bU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x6aU])))),64);
        bufp->chgQData(oldp+465,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x6dU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x6cU])))),64);
        bufp->chgQData(oldp+467,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x6fU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x6eU])))),64);
        bufp->chgQData(oldp+469,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x71U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x70U])))),64);
        bufp->chgQData(oldp+471,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x73U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x72U])))),64);
        bufp->chgQData(oldp+473,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x75U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x74U])))),64);
        bufp->chgQData(oldp+475,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x77U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x76U])))),64);
        bufp->chgQData(oldp+477,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x79U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x78U])))),64);
        bufp->chgQData(oldp+479,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x7bU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x7aU])))),64);
        bufp->chgQData(oldp+481,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x7dU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x7cU])))),64);
        bufp->chgQData(oldp+483,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x7fU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x7eU])))),64);
        bufp->chgBit(oldp+485,(vlSelfRef.FIFO_TX__DOT__out_order_req_l));
        bufp->chgBit(oldp+486,(vlSelfRef.FIFO_TX__DOT__ACK_rcv_flag_l));
        bufp->chgIData(oldp+487,(vlSelfRef.FIFO_TX__DOT__ACK_num_l),32);
        bufp->chgBit(oldp+488,(vlSelfRef.FIFO_TX__DOT__rd_debug_1));
        bufp->chgBit(oldp+489,(vlSelfRef.FIFO_TX__DOT__rd_debug_2));
        bufp->chgBit(oldp+490,(vlSelfRef.FIFO_TX__DOT__rd_upd));
        bufp->chgSData(oldp+491,(vlSelfRef.FIFO_TX__DOT__bytes_abt_sent_msg_rd),16);
        bufp->chgSData(oldp+492,(vlSelfRef.FIFO_TX__DOT__checksum_l),16);
    }
    bufp->chgBit(oldp+493,(vlSelfRef.CLK));
    bufp->chgBit(oldp+494,(vlSelfRef.nRST));
    bufp->chgBit(oldp+495,(vlSelfRef.seq_up));
    bufp->chgIData(oldp+496,(vlSelfRef.seq_num_tx),32);
    bufp->chgBit(oldp+497,(vlSelfRef.rd_FIFO_en));
    bufp->chgBit(oldp+498,(vlSelfRef.TX_en));
    bufp->chgSData(oldp+499,(vlSelfRef.checksum_TX),16);
    bufp->chgBit(oldp+500,(vlSelfRef.rd_FIFO_valid));
    bufp->chgBit(oldp+501,(vlSelfRef.rd_FIFO_last));
    bufp->chgQData(oldp+502,(vlSelfRef.rd_FIFO_payload),64);
    bufp->chgSData(oldp+504,(vlSelfRef.bytes_abt_sent),16);
    bufp->chgIData(oldp+505,(vlSelfRef.ACK_num),32);
    bufp->chgBit(oldp+506,(vlSelfRef.ACK_rcv_flag));
    bufp->chgBit(oldp+507,(vlSelfRef.out_order_req));
    bufp->chgBit(oldp+508,(vlSelfRef.TCP_stop_flag));
    bufp->chgBit(oldp+509,(vlSelfRef.end_ss));
    bufp->chgBit(oldp+510,(vlSelfRef.axis_last));
    bufp->chgBit(oldp+511,(vlSelfRef.wr_FIFO_en));
    bufp->chgIData(oldp+512,(vlSelfRef.len_seq),32);
    bufp->chgQData(oldp+513,(vlSelfRef.soupbin_TCP_payload),64);
    bufp->chgBit(oldp+515,(vlSelfRef.wr_FIFO_valid));
    bufp->chgBit(oldp+516,(vlSelfRef.re_trans));
    bufp->chgSData(oldp+517,(vlSelfRef.checksum_re_trans),16);
}

void VFIFO_TX___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_TX___024root__trace_cleanup\n"); );
    // Init
    VFIFO_TX___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFIFO_TX___024root*>(voidSelf);
    VFIFO_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
