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
        bufp->chgCData(oldp+1,(vlSelfRef.FIFO_TX__DOT__nptr_str),6);
        bufp->chgCData(oldp+2,(vlSelfRef.FIFO_TX__DOT__nptr_end),6);
        bufp->chgSData(oldp+3,(vlSelfRef.FIFO_TX__DOT__nbytes_abt_sent_msg),16);
        bufp->chgCData(oldp+4,(vlSelfRef.FIFO_TX__DOT__nmsg_end_ptr),6);
        bufp->chgCData(oldp+5,(vlSelfRef.FIFO_TX__DOT__nrd_state),2);
        bufp->chgCData(oldp+6,(vlSelfRef.FIFO_TX__DOT__nwr_state),2);
        bufp->chgBit(oldp+7,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[2U] 
                                    >> 0xcU))));
        bufp->chgIData(oldp+8,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[2U] 
                                 << 0x14U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[1U] 
                                              >> 0xcU))),32);
        bufp->chgIData(oldp+9,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[1U] 
                                 << 0x14U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0U] 
                                              >> 0xcU))),32);
        bufp->chgCData(oldp+10,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0U] 
                                          >> 6U))),6);
        bufp->chgCData(oldp+11,((0x3fU & vlSelfRef.FIFO_TX__DOT__ndict_tx[0U])),6);
        bufp->chgBit(oldp+12,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[4U] 
                                     >> 0x19U))));
        bufp->chgIData(oldp+13,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[4U] 
                                  << 7U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[3U] 
                                            >> 0x19U))),32);
        bufp->chgIData(oldp+14,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[3U] 
                                  << 7U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[2U] 
                                            >> 0x19U))),32);
        bufp->chgCData(oldp+15,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[2U] 
                                          >> 0x13U))),6);
        bufp->chgCData(oldp+16,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[2U] 
                                          >> 0xdU))),6);
        bufp->chgBit(oldp+17,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[7U] 
                                     >> 6U))));
        bufp->chgIData(oldp+18,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[7U] 
                                  << 0x1aU) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[6U] 
                                               >> 6U))),32);
        bufp->chgIData(oldp+19,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[6U] 
                                  << 0x1aU) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[5U] 
                                               >> 6U))),32);
        bufp->chgCData(oldp+20,((0x3fU & vlSelfRef.FIFO_TX__DOT__ndict_tx[5U])),6);
        bufp->chgCData(oldp+21,((vlSelfRef.FIFO_TX__DOT__ndict_tx[4U] 
                                 >> 0x1aU)),6);
        bufp->chgBit(oldp+22,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[9U] 
                                     >> 0x13U))));
        bufp->chgIData(oldp+23,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[9U] 
                                  << 0xdU) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[8U] 
                                              >> 0x13U))),32);
        bufp->chgIData(oldp+24,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[8U] 
                                  << 0xdU) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[7U] 
                                              >> 0x13U))),32);
        bufp->chgCData(oldp+25,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[7U] 
                                          >> 0xdU))),6);
        bufp->chgCData(oldp+26,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[7U] 
                                          >> 7U))),6);
        bufp->chgBit(oldp+27,((1U & vlSelfRef.FIFO_TX__DOT__ndict_tx[0xcU])));
        bufp->chgIData(oldp+28,(vlSelfRef.FIFO_TX__DOT__ndict_tx[0xbU]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.FIFO_TX__DOT__ndict_tx[0xaU]),32);
        bufp->chgCData(oldp+30,((vlSelfRef.FIFO_TX__DOT__ndict_tx[9U] 
                                 >> 0x1aU)),6);
        bufp->chgCData(oldp+31,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[9U] 
                                          >> 0x14U))),6);
        bufp->chgBit(oldp+32,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0xeU] 
                                     >> 0xdU))));
        bufp->chgIData(oldp+33,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0xeU] 
                                  << 0x13U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0xdU] 
                                               >> 0xdU))),32);
        bufp->chgIData(oldp+34,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0xdU] 
                                  << 0x13U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0xcU] 
                                               >> 0xdU))),32);
        bufp->chgCData(oldp+35,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0xcU] 
                                          >> 7U))),6);
        bufp->chgCData(oldp+36,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0xcU] 
                                          >> 1U))),6);
        bufp->chgBit(oldp+37,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x10U] 
                                     >> 0x1aU))));
        bufp->chgIData(oldp+38,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x10U] 
                                  << 6U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0xfU] 
                                            >> 0x1aU))),32);
        bufp->chgIData(oldp+39,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0xfU] 
                                  << 6U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0xeU] 
                                            >> 0x1aU))),32);
        bufp->chgCData(oldp+40,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0xeU] 
                                          >> 0x14U))),6);
        bufp->chgCData(oldp+41,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0xeU] 
                                          >> 0xeU))),6);
        bufp->chgBit(oldp+42,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x13U] 
                                     >> 7U))));
        bufp->chgIData(oldp+43,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x13U] 
                                  << 0x19U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x12U] 
                                               >> 7U))),32);
        bufp->chgIData(oldp+44,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x12U] 
                                  << 0x19U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x11U] 
                                               >> 7U))),32);
        bufp->chgCData(oldp+45,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x11U] 
                                          >> 1U))),6);
        bufp->chgCData(oldp+46,((0x3fU & ((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x11U] 
                                           << 5U) | 
                                          (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x10U] 
                                           >> 0x1bU)))),6);
        bufp->chgBit(oldp+47,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x15U] 
                                     >> 0x14U))));
        bufp->chgIData(oldp+48,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x15U] 
                                  << 0xcU) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x14U] 
                                              >> 0x14U))),32);
        bufp->chgIData(oldp+49,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x14U] 
                                  << 0xcU) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x13U] 
                                              >> 0x14U))),32);
        bufp->chgCData(oldp+50,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x13U] 
                                          >> 0xeU))),6);
        bufp->chgCData(oldp+51,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x13U] 
                                          >> 8U))),6);
        bufp->chgBit(oldp+52,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x18U] 
                                     >> 1U))));
        bufp->chgIData(oldp+53,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x18U] 
                                  << 0x1fU) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x17U] 
                                               >> 1U))),32);
        bufp->chgIData(oldp+54,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x17U] 
                                  << 0x1fU) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x16U] 
                                               >> 1U))),32);
        bufp->chgCData(oldp+55,((0x3fU & ((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x16U] 
                                           << 5U) | 
                                          (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x15U] 
                                           >> 0x1bU)))),6);
        bufp->chgCData(oldp+56,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x15U] 
                                          >> 0x15U))),6);
        bufp->chgBit(oldp+57,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1aU] 
                                     >> 0xeU))));
        bufp->chgIData(oldp+58,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1aU] 
                                  << 0x12U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x19U] 
                                               >> 0xeU))),32);
        bufp->chgIData(oldp+59,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x19U] 
                                  << 0x12U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x18U] 
                                               >> 0xeU))),32);
        bufp->chgCData(oldp+60,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x18U] 
                                          >> 8U))),6);
        bufp->chgCData(oldp+61,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x18U] 
                                          >> 2U))),6);
        bufp->chgBit(oldp+62,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1cU] 
                                     >> 0x1bU))));
        bufp->chgIData(oldp+63,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1cU] 
                                  << 5U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1bU] 
                                            >> 0x1bU))),32);
        bufp->chgIData(oldp+64,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1bU] 
                                  << 5U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1aU] 
                                            >> 0x1bU))),32);
        bufp->chgCData(oldp+65,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1aU] 
                                          >> 0x15U))),6);
        bufp->chgCData(oldp+66,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1aU] 
                                          >> 0xfU))),6);
        bufp->chgBit(oldp+67,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1fU] 
                                     >> 8U))));
        bufp->chgIData(oldp+68,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1fU] 
                                  << 0x18U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1eU] 
                                               >> 8U))),32);
        bufp->chgIData(oldp+69,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1eU] 
                                  << 0x18U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1dU] 
                                               >> 8U))),32);
        bufp->chgCData(oldp+70,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1dU] 
                                          >> 2U))),6);
        bufp->chgCData(oldp+71,((0x3fU & ((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1dU] 
                                           << 4U) | 
                                          (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1cU] 
                                           >> 0x1cU)))),6);
        bufp->chgBit(oldp+72,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x21U] 
                                     >> 0x15U))));
        bufp->chgIData(oldp+73,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x21U] 
                                  << 0xbU) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x20U] 
                                              >> 0x15U))),32);
        bufp->chgIData(oldp+74,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x20U] 
                                  << 0xbU) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1fU] 
                                              >> 0x15U))),32);
        bufp->chgCData(oldp+75,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1fU] 
                                          >> 0xfU))),6);
        bufp->chgCData(oldp+76,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1fU] 
                                          >> 9U))),6);
        bufp->chgBit(oldp+77,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x24U] 
                                     >> 2U))));
        bufp->chgIData(oldp+78,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x24U] 
                                  << 0x1eU) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x23U] 
                                               >> 2U))),32);
        bufp->chgIData(oldp+79,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x23U] 
                                  << 0x1eU) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x22U] 
                                               >> 2U))),32);
        bufp->chgCData(oldp+80,((0x3fU & ((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x22U] 
                                           << 4U) | 
                                          (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x21U] 
                                           >> 0x1cU)))),6);
        bufp->chgCData(oldp+81,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x21U] 
                                          >> 0x16U))),6);
        bufp->chgBit(oldp+82,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x26U] 
                                     >> 0xfU))));
        bufp->chgIData(oldp+83,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x26U] 
                                  << 0x11U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x25U] 
                                               >> 0xfU))),32);
        bufp->chgIData(oldp+84,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x25U] 
                                  << 0x11U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x24U] 
                                               >> 0xfU))),32);
        bufp->chgCData(oldp+85,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x24U] 
                                          >> 9U))),6);
        bufp->chgCData(oldp+86,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x24U] 
                                          >> 3U))),6);
        bufp->chgBit(oldp+87,(vlSelfRef.FIFO_TX__DOT__nwr_FIFO_valid));
        bufp->chgCData(oldp+88,(vlSelfRef.FIFO_TX__DOT__nwrt_ptr),6);
        bufp->chgQData(oldp+89,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0U])))),64);
        bufp->chgQData(oldp+91,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[3U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[2U])))),64);
        bufp->chgQData(oldp+93,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[5U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[4U])))),64);
        bufp->chgQData(oldp+95,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[7U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[6U])))),64);
        bufp->chgQData(oldp+97,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[9U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[8U])))),64);
        bufp->chgQData(oldp+99,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0xbU])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0xaU])))),64);
        bufp->chgBit(oldp+101,(vlSelfRef.FIFO_TX__DOT__nout_order_req_l));
        bufp->chgBit(oldp+102,(vlSelfRef.FIFO_TX__DOT__nACK_rcv_flag_l));
        bufp->chgIData(oldp+103,(vlSelfRef.FIFO_TX__DOT__nACK_num_l),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgSData(oldp+104,(vlSelfRef.FIFO_TX__DOT__bytes_msg_trk),16);
        bufp->chgCData(oldp+105,(vlSelfRef.FIFO_TX__DOT__nrd_FIFO_payload),6);
        bufp->chgCData(oldp+106,(vlSelfRef.FIFO_TX__DOT__ptr_str),6);
        bufp->chgCData(oldp+107,(vlSelfRef.FIFO_TX__DOT__ptr_end),6);
        bufp->chgCData(oldp+108,(vlSelfRef.FIFO_TX__DOT__flush_ptr),6);
        bufp->chgCData(oldp+109,(vlSelfRef.FIFO_TX__DOT__nflush_ptr),6);
        bufp->chgSData(oldp+110,(vlSelfRef.FIFO_TX__DOT__bytes_abt_sent_msg),16);
        bufp->chgCData(oldp+111,(vlSelfRef.FIFO_TX__DOT__msg_end_ptr),6);
        bufp->chgCData(oldp+112,(vlSelfRef.FIFO_TX__DOT__rd_state),2);
        bufp->chgCData(oldp+113,(vlSelfRef.FIFO_TX__DOT__wr_state),2);
        bufp->chgBit(oldp+114,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[2U] 
                                      >> 0xcU))));
        bufp->chgIData(oldp+115,(((vlSelfRef.FIFO_TX__DOT__dict_tx[2U] 
                                   << 0x14U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[1U] 
                                                >> 0xcU))),32);
        bufp->chgIData(oldp+116,(((vlSelfRef.FIFO_TX__DOT__dict_tx[1U] 
                                   << 0x14U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0U] 
                                                >> 0xcU))),32);
        bufp->chgCData(oldp+117,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0U] 
                                           >> 6U))),6);
        bufp->chgCData(oldp+118,((0x3fU & vlSelfRef.FIFO_TX__DOT__dict_tx[0U])),6);
        bufp->chgBit(oldp+119,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[4U] 
                                      >> 0x19U))));
        bufp->chgIData(oldp+120,(((vlSelfRef.FIFO_TX__DOT__dict_tx[4U] 
                                   << 7U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[3U] 
                                             >> 0x19U))),32);
        bufp->chgIData(oldp+121,(((vlSelfRef.FIFO_TX__DOT__dict_tx[3U] 
                                   << 7U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[2U] 
                                             >> 0x19U))),32);
        bufp->chgCData(oldp+122,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[2U] 
                                           >> 0x13U))),6);
        bufp->chgCData(oldp+123,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[2U] 
                                           >> 0xdU))),6);
        bufp->chgBit(oldp+124,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[7U] 
                                      >> 6U))));
        bufp->chgIData(oldp+125,(((vlSelfRef.FIFO_TX__DOT__dict_tx[7U] 
                                   << 0x1aU) | (vlSelfRef.FIFO_TX__DOT__dict_tx[6U] 
                                                >> 6U))),32);
        bufp->chgIData(oldp+126,(((vlSelfRef.FIFO_TX__DOT__dict_tx[6U] 
                                   << 0x1aU) | (vlSelfRef.FIFO_TX__DOT__dict_tx[5U] 
                                                >> 6U))),32);
        bufp->chgCData(oldp+127,((0x3fU & vlSelfRef.FIFO_TX__DOT__dict_tx[5U])),6);
        bufp->chgCData(oldp+128,((vlSelfRef.FIFO_TX__DOT__dict_tx[4U] 
                                  >> 0x1aU)),6);
        bufp->chgBit(oldp+129,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[9U] 
                                      >> 0x13U))));
        bufp->chgIData(oldp+130,(((vlSelfRef.FIFO_TX__DOT__dict_tx[9U] 
                                   << 0xdU) | (vlSelfRef.FIFO_TX__DOT__dict_tx[8U] 
                                               >> 0x13U))),32);
        bufp->chgIData(oldp+131,(((vlSelfRef.FIFO_TX__DOT__dict_tx[8U] 
                                   << 0xdU) | (vlSelfRef.FIFO_TX__DOT__dict_tx[7U] 
                                               >> 0x13U))),32);
        bufp->chgCData(oldp+132,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[7U] 
                                           >> 0xdU))),6);
        bufp->chgCData(oldp+133,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[7U] 
                                           >> 7U))),6);
        bufp->chgBit(oldp+134,((1U & vlSelfRef.FIFO_TX__DOT__dict_tx[0xcU])));
        bufp->chgIData(oldp+135,(vlSelfRef.FIFO_TX__DOT__dict_tx[0xbU]),32);
        bufp->chgIData(oldp+136,(vlSelfRef.FIFO_TX__DOT__dict_tx[0xaU]),32);
        bufp->chgCData(oldp+137,((vlSelfRef.FIFO_TX__DOT__dict_tx[9U] 
                                  >> 0x1aU)),6);
        bufp->chgCData(oldp+138,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[9U] 
                                           >> 0x14U))),6);
        bufp->chgBit(oldp+139,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[0xeU] 
                                      >> 0xdU))));
        bufp->chgIData(oldp+140,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0xeU] 
                                   << 0x13U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0xdU] 
                                                >> 0xdU))),32);
        bufp->chgIData(oldp+141,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0xdU] 
                                   << 0x13U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0xcU] 
                                                >> 0xdU))),32);
        bufp->chgCData(oldp+142,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0xcU] 
                                           >> 7U))),6);
        bufp->chgCData(oldp+143,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0xcU] 
                                           >> 1U))),6);
        bufp->chgBit(oldp+144,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x10U] 
                                      >> 0x1aU))));
        bufp->chgIData(oldp+145,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x10U] 
                                   << 6U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0xfU] 
                                             >> 0x1aU))),32);
        bufp->chgIData(oldp+146,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0xfU] 
                                   << 6U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0xeU] 
                                             >> 0x1aU))),32);
        bufp->chgCData(oldp+147,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0xeU] 
                                           >> 0x14U))),6);
        bufp->chgCData(oldp+148,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0xeU] 
                                           >> 0xeU))),6);
        bufp->chgBit(oldp+149,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x13U] 
                                      >> 7U))));
        bufp->chgIData(oldp+150,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x13U] 
                                   << 0x19U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x12U] 
                                                >> 7U))),32);
        bufp->chgIData(oldp+151,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x12U] 
                                   << 0x19U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x11U] 
                                                >> 7U))),32);
        bufp->chgCData(oldp+152,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x11U] 
                                           >> 1U))),6);
        bufp->chgCData(oldp+153,((0x3fU & ((vlSelfRef.FIFO_TX__DOT__dict_tx[0x11U] 
                                            << 5U) 
                                           | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x10U] 
                                              >> 0x1bU)))),6);
        bufp->chgBit(oldp+154,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x15U] 
                                      >> 0x14U))));
        bufp->chgIData(oldp+155,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x15U] 
                                   << 0xcU) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x14U] 
                                               >> 0x14U))),32);
        bufp->chgIData(oldp+156,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x14U] 
                                   << 0xcU) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x13U] 
                                               >> 0x14U))),32);
        bufp->chgCData(oldp+157,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x13U] 
                                           >> 0xeU))),6);
        bufp->chgCData(oldp+158,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x13U] 
                                           >> 8U))),6);
        bufp->chgBit(oldp+159,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x18U] 
                                      >> 1U))));
        bufp->chgIData(oldp+160,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x18U] 
                                   << 0x1fU) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x17U] 
                                                >> 1U))),32);
        bufp->chgIData(oldp+161,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x17U] 
                                   << 0x1fU) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x16U] 
                                                >> 1U))),32);
        bufp->chgCData(oldp+162,((0x3fU & ((vlSelfRef.FIFO_TX__DOT__dict_tx[0x16U] 
                                            << 5U) 
                                           | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x15U] 
                                              >> 0x1bU)))),6);
        bufp->chgCData(oldp+163,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x15U] 
                                           >> 0x15U))),6);
        bufp->chgBit(oldp+164,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1aU] 
                                      >> 0xeU))));
        bufp->chgIData(oldp+165,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x1aU] 
                                   << 0x12U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x19U] 
                                                >> 0xeU))),32);
        bufp->chgIData(oldp+166,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x19U] 
                                   << 0x12U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x18U] 
                                                >> 0xeU))),32);
        bufp->chgCData(oldp+167,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x18U] 
                                           >> 8U))),6);
        bufp->chgCData(oldp+168,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x18U] 
                                           >> 2U))),6);
        bufp->chgBit(oldp+169,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1cU] 
                                      >> 0x1bU))));
        bufp->chgIData(oldp+170,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x1cU] 
                                   << 5U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1bU] 
                                             >> 0x1bU))),32);
        bufp->chgIData(oldp+171,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x1bU] 
                                   << 5U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1aU] 
                                             >> 0x1bU))),32);
        bufp->chgCData(oldp+172,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1aU] 
                                           >> 0x15U))),6);
        bufp->chgCData(oldp+173,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1aU] 
                                           >> 0xfU))),6);
        bufp->chgBit(oldp+174,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1fU] 
                                      >> 8U))));
        bufp->chgIData(oldp+175,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x1fU] 
                                   << 0x18U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1eU] 
                                                >> 8U))),32);
        bufp->chgIData(oldp+176,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x1eU] 
                                   << 0x18U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1dU] 
                                                >> 8U))),32);
        bufp->chgCData(oldp+177,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1dU] 
                                           >> 2U))),6);
        bufp->chgCData(oldp+178,((0x3fU & ((vlSelfRef.FIFO_TX__DOT__dict_tx[0x1dU] 
                                            << 4U) 
                                           | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1cU] 
                                              >> 0x1cU)))),6);
        bufp->chgBit(oldp+179,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x21U] 
                                      >> 0x15U))));
        bufp->chgIData(oldp+180,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x21U] 
                                   << 0xbU) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x20U] 
                                               >> 0x15U))),32);
        bufp->chgIData(oldp+181,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x20U] 
                                   << 0xbU) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1fU] 
                                               >> 0x15U))),32);
        bufp->chgCData(oldp+182,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1fU] 
                                           >> 0xfU))),6);
        bufp->chgCData(oldp+183,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1fU] 
                                           >> 9U))),6);
        bufp->chgBit(oldp+184,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x24U] 
                                      >> 2U))));
        bufp->chgIData(oldp+185,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x24U] 
                                   << 0x1eU) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x23U] 
                                                >> 2U))),32);
        bufp->chgIData(oldp+186,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x23U] 
                                   << 0x1eU) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x22U] 
                                                >> 2U))),32);
        bufp->chgCData(oldp+187,((0x3fU & ((vlSelfRef.FIFO_TX__DOT__dict_tx[0x22U] 
                                            << 4U) 
                                           | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x21U] 
                                              >> 0x1cU)))),6);
        bufp->chgCData(oldp+188,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x21U] 
                                           >> 0x16U))),6);
        bufp->chgBit(oldp+189,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x26U] 
                                      >> 0xfU))));
        bufp->chgIData(oldp+190,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x26U] 
                                   << 0x11U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x25U] 
                                                >> 0xfU))),32);
        bufp->chgIData(oldp+191,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x25U] 
                                   << 0x11U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x24U] 
                                                >> 0xfU))),32);
        bufp->chgCData(oldp+192,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x24U] 
                                           >> 9U))),6);
        bufp->chgCData(oldp+193,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x24U] 
                                           >> 3U))),6);
        bufp->chgBit(oldp+194,(vlSelfRef.FIFO_TX__DOT__full));
        bufp->chgBit(oldp+195,(((IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr) 
                                == (IData)(vlSelfRef.FIFO_TX__DOT__wrt_ptr))));
        bufp->chgBit(oldp+196,(vlSelfRef.FIFO_TX__DOT__nrd_FIFO_last));
        bufp->chgBit(oldp+197,(vlSelfRef.FIFO_TX__DOT__nrd_FIFO_valid));
        bufp->chgCData(oldp+198,(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr),4);
        bufp->chgCData(oldp+199,(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr),4);
        bufp->chgCData(oldp+200,(vlSelfRef.FIFO_TX__DOT__ndict_rd_ptr),4);
        bufp->chgCData(oldp+201,(vlSelfRef.FIFO_TX__DOT__rd_ptr),6);
        bufp->chgCData(oldp+202,(vlSelfRef.FIFO_TX__DOT__nrd_ptr),6);
        bufp->chgCData(oldp+203,(vlSelfRef.FIFO_TX__DOT__wrt_ptr),6);
        bufp->chgQData(oldp+204,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0U])))),64);
        bufp->chgQData(oldp+206,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[2U])))),64);
        bufp->chgQData(oldp+208,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[5U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[4U])))),64);
        bufp->chgQData(oldp+210,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[7U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[6U])))),64);
        bufp->chgQData(oldp+212,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[9U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[8U])))),64);
        bufp->chgQData(oldp+214,((((QData)((IData)(
                                                   vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0xbU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0xaU])))),64);
        bufp->chgBit(oldp+216,(vlSelfRef.FIFO_TX__DOT__out_order_req_l));
        bufp->chgBit(oldp+217,(vlSelfRef.FIFO_TX__DOT__ACK_rcv_flag_l));
        bufp->chgIData(oldp+218,(vlSelfRef.FIFO_TX__DOT__ACK_num_l),32);
        bufp->chgBit(oldp+219,(vlSelfRef.FIFO_TX__DOT__rd_debug_1));
        bufp->chgBit(oldp+220,(vlSelfRef.FIFO_TX__DOT__rd_debug_2));
    }
    bufp->chgBit(oldp+221,(vlSelfRef.CLK));
    bufp->chgBit(oldp+222,(vlSelfRef.nRST));
    bufp->chgBit(oldp+223,(vlSelfRef.seq_up));
    bufp->chgIData(oldp+224,(vlSelfRef.seq_num_tx),32);
    bufp->chgBit(oldp+225,(vlSelfRef.rd_FIFO_en));
    bufp->chgBit(oldp+226,(vlSelfRef.rd_FIFO_valid));
    bufp->chgBit(oldp+227,(vlSelfRef.rd_FIFO_last));
    bufp->chgQData(oldp+228,(vlSelfRef.rd_FIFO_payload),64);
    bufp->chgSData(oldp+230,(vlSelfRef.bytes_abt_sent),16);
    bufp->chgIData(oldp+231,(vlSelfRef.ACK_num),32);
    bufp->chgBit(oldp+232,(vlSelfRef.ACK_rcv_flag));
    bufp->chgBit(oldp+233,(vlSelfRef.out_order_req));
    bufp->chgBit(oldp+234,(vlSelfRef.axis_last));
    bufp->chgBit(oldp+235,(vlSelfRef.wr_FIFO_en));
    bufp->chgIData(oldp+236,(vlSelfRef.len_seq),32);
    bufp->chgQData(oldp+237,(vlSelfRef.soupbin_TCP_payload),64);
    bufp->chgBit(oldp+239,(vlSelfRef.wr_FIFO_valid));
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
