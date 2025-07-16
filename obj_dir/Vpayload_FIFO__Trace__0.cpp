// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vpayload_FIFO__Syms.h"


void Vpayload_FIFO___024root__trace_chg_0_sub_0(Vpayload_FIFO___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vpayload_FIFO___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpayload_FIFO___024root__trace_chg_0\n"); );
    // Init
    Vpayload_FIFO___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpayload_FIFO___024root*>(voidSelf);
    Vpayload_FIFO__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vpayload_FIFO___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vpayload_FIFO___024root__trace_chg_0_sub_0(Vpayload_FIFO___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpayload_FIFO___024root__trace_chg_0_sub_0\n"); );
    Vpayload_FIFO__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgQData(oldp+0,((((QData)((IData)(vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
                                                 [0U][2U])) 
                                 << 0x38U) | (((QData)((IData)(
                                                               vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
                                                               [0U][1U])) 
                                               << 0x18U) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
                                                                 [0U][0U])) 
                                                 >> 8U)))),64);
        bufp->chgCData(oldp+2,((0xffU & vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
                                [0U][0U])),8);
        bufp->chgQData(oldp+3,((((QData)((IData)(vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
                                                 [1U][2U])) 
                                 << 0x38U) | (((QData)((IData)(
                                                               vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
                                                               [1U][1U])) 
                                               << 0x18U) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
                                                                 [1U][0U])) 
                                                 >> 8U)))),64);
        bufp->chgCData(oldp+5,((0xffU & vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
                                [1U][0U])),8);
        bufp->chgQData(oldp+6,((((QData)((IData)(vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
                                                 [2U][2U])) 
                                 << 0x38U) | (((QData)((IData)(
                                                               vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
                                                               [2U][1U])) 
                                               << 0x18U) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
                                                                 [2U][0U])) 
                                                 >> 8U)))),64);
        bufp->chgCData(oldp+8,((0xffU & vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
                                [2U][0U])),8);
        bufp->chgQData(oldp+9,((((QData)((IData)(vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
                                                 [3U][2U])) 
                                 << 0x38U) | (((QData)((IData)(
                                                               vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
                                                               [3U][1U])) 
                                               << 0x18U) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
                                                                 [3U][0U])) 
                                                 >> 8U)))),64);
        bufp->chgCData(oldp+11,((0xffU & vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
                                 [3U][0U])),8);
        bufp->chgQData(oldp+12,((((QData)((IData)(vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
                                                  [4U][2U])) 
                                  << 0x38U) | (((QData)((IData)(
                                                                vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
                                                                [4U][1U])) 
                                                << 0x18U) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
                                                                  [4U][0U])) 
                                                  >> 8U)))),64);
        bufp->chgCData(oldp+14,((0xffU & vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
                                 [4U][0U])),8);
        bufp->chgCData(oldp+15,(vlSelfRef.payload_FIFO__DOT__nflush_ptr),3);
        bufp->chgCData(oldp+16,(vlSelfRef.payload_FIFO__DOT__nlen_TCP_flush),3);
        bufp->chgIData(oldp+17,(vlSelfRef.payload_FIFO__DOT__nseq_trk_rd),32);
        bufp->chgBit(oldp+18,(vlSelfRef.payload_FIFO__DOT__nrd_FIFO_valid_l));
        bufp->chgBit(oldp+19,(vlSelfRef.payload_FIFO__DOT__naxis_r_valid));
        bufp->chgBit(oldp+20,(vlSelfRef.payload_FIFO__DOT__nTCP_flush_l));
        bufp->chgCData(oldp+21,(vlSelfRef.payload_FIFO__DOT__nwr_ptr),3);
        bufp->chgCData(oldp+22,(vlSelfRef.payload_FIFO__DOT__nrd_ptr),3);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgQData(oldp+23,((((QData)((IData)(vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                  [0U][2U])) 
                                  << 0x38U) | (((QData)((IData)(
                                                                vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                                [0U][1U])) 
                                                << 0x18U) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                                  [0U][0U])) 
                                                  >> 8U)))),64);
        bufp->chgCData(oldp+25,((0xffU & vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                 [0U][0U])),8);
        bufp->chgQData(oldp+26,((((QData)((IData)(vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                  [1U][2U])) 
                                  << 0x38U) | (((QData)((IData)(
                                                                vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                                [1U][1U])) 
                                                << 0x18U) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                                  [1U][0U])) 
                                                  >> 8U)))),64);
        bufp->chgCData(oldp+28,((0xffU & vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                 [1U][0U])),8);
        bufp->chgQData(oldp+29,((((QData)((IData)(vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                  [2U][2U])) 
                                  << 0x38U) | (((QData)((IData)(
                                                                vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                                [2U][1U])) 
                                                << 0x18U) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                                  [2U][0U])) 
                                                  >> 8U)))),64);
        bufp->chgCData(oldp+31,((0xffU & vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                 [2U][0U])),8);
        bufp->chgQData(oldp+32,((((QData)((IData)(vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                  [3U][2U])) 
                                  << 0x38U) | (((QData)((IData)(
                                                                vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                                [3U][1U])) 
                                                << 0x18U) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                                  [3U][0U])) 
                                                  >> 8U)))),64);
        bufp->chgCData(oldp+34,((0xffU & vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                 [3U][0U])),8);
        bufp->chgQData(oldp+35,((((QData)((IData)(vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                  [4U][2U])) 
                                  << 0x38U) | (((QData)((IData)(
                                                                vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                                [4U][1U])) 
                                                << 0x18U) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                                  [4U][0U])) 
                                                  >> 8U)))),64);
        bufp->chgCData(oldp+37,((0xffU & vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                 [4U][0U])),8);
        bufp->chgQData(oldp+38,((((QData)((IData)(vlSelfRef.payload_FIFO__DOT__fifo_entry_rd[2U])) 
                                  << 0x38U) | (((QData)((IData)(
                                                                vlSelfRef.payload_FIFO__DOT__fifo_entry_rd[1U])) 
                                                << 0x18U) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.payload_FIFO__DOT__fifo_entry_rd[0U])) 
                                                  >> 8U)))),64);
        bufp->chgCData(oldp+40,((0xffU & vlSelfRef.payload_FIFO__DOT__fifo_entry_rd[0U])),8);
        bufp->chgCData(oldp+41,(vlSelfRef.payload_FIFO__DOT__flush_ptr),3);
        bufp->chgCData(oldp+42,(vlSelfRef.payload_FIFO__DOT__len_TCP_flush),3);
        bufp->chgCData(oldp+43,(vlSelfRef.payload_FIFO__DOT__rd_len_ptr),3);
        bufp->chgIData(oldp+44,(vlSelfRef.payload_FIFO__DOT__seq_trk_rd),32);
        bufp->chgBit(oldp+45,(vlSelfRef.payload_FIFO__DOT__TCP_flush_l));
        bufp->chgQData(oldp+46,((((QData)((IData)(vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                  [0U][2U])) 
                                  << 0x38U) | (((QData)((IData)(
                                                                vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                                [0U][1U])) 
                                                << 0x18U) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                                  [0U][0U])) 
                                                  >> 8U)))),64);
        bufp->chgQData(oldp+48,((((QData)((IData)(vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                  [1U][2U])) 
                                  << 0x38U) | (((QData)((IData)(
                                                                vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                                [1U][1U])) 
                                                << 0x18U) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                                  [1U][0U])) 
                                                  >> 8U)))),64);
        bufp->chgQData(oldp+50,((((QData)((IData)(vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                  [2U][2U])) 
                                  << 0x38U) | (((QData)((IData)(
                                                                vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                                [2U][1U])) 
                                                << 0x18U) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                                  [2U][0U])) 
                                                  >> 8U)))),64);
        bufp->chgQData(oldp+52,((((QData)((IData)(vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                  [3U][2U])) 
                                  << 0x38U) | (((QData)((IData)(
                                                                vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                                [3U][1U])) 
                                                << 0x18U) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                                  [3U][0U])) 
                                                  >> 8U)))),64);
        bufp->chgQData(oldp+54,((((QData)((IData)(vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                  [4U][2U])) 
                                  << 0x38U) | (((QData)((IData)(
                                                                vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                                [4U][1U])) 
                                                << 0x18U) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                                  [4U][0U])) 
                                                  >> 8U)))),64);
        bufp->chgCData(oldp+56,((0xffU & vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                 [0U][0U])),8);
        bufp->chgCData(oldp+57,((0xffU & vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                 [1U][0U])),8);
        bufp->chgCData(oldp+58,((0xffU & vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                 [2U][0U])),8);
        bufp->chgCData(oldp+59,((0xffU & vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                 [3U][0U])),8);
        bufp->chgCData(oldp+60,((0xffU & vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                 [4U][0U])),8);
        bufp->chgCData(oldp+61,(vlSelfRef.payload_FIFO__DOT__wr_ptr),3);
        bufp->chgCData(oldp+62,(vlSelfRef.payload_FIFO__DOT__rd_ptr),3);
        bufp->chgIData(oldp+63,(vlSelfRef.payload_FIFO__DOT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+64,(vlSelfRef.CLK));
    bufp->chgBit(oldp+65,(vlSelfRef.nRST));
    bufp->chgBit(oldp+66,(vlSelfRef.nw_segment));
    bufp->chgBit(oldp+67,(vlSelfRef.handshake_done));
    bufp->chgIData(oldp+68,(vlSelfRef.seq_rcv_start),32);
    bufp->chgBit(oldp+69,(vlSelfRef.TCP_flush));
    bufp->chgBit(oldp+70,(vlSelfRef.axis_t_last));
    bufp->chgBit(oldp+71,(vlSelfRef.wr_FIFO_en));
    bufp->chgQData(oldp+72,(vlSelfRef.axis_data_rx),64);
    bufp->chgCData(oldp+74,(vlSelfRef.wr_FIFO_offset),8);
    bufp->chgCData(oldp+75,(vlSelfRef.wr_ptr_out),3);
    bufp->chgCData(oldp+76,(vlSelfRef.wr_FIFO_len),3);
    bufp->chgBit(oldp+77,(vlSelfRef.rd_FIFO_en));
    bufp->chgIData(oldp+78,(vlSelfRef.seq_rx_FIFO_rd),32);
    bufp->chgBit(oldp+79,(vlSelfRef.rd_FIFO_valid));
    bufp->chgCData(oldp+80,(vlSelfRef.rd_FIFO_ptr),3);
    bufp->chgCData(oldp+81,(vlSelfRef.rd_FIFO_len),3);
    bufp->chgBit(oldp+82,(vlSelfRef.axis_r_en));
    bufp->chgBit(oldp+83,(vlSelfRef.axis_r_valid));
    bufp->chgQData(oldp+84,(vlSelfRef.axis_rd_data),64);
    bufp->chgCData(oldp+86,((0xfU & ((1U & ((IData)(vlSelfRef.wr_FIFO_offset) 
                                            >> 7U)) 
                                     + ((1U & ((IData)(vlSelfRef.wr_FIFO_offset) 
                                               >> 6U)) 
                                        + ((1U & ((IData)(vlSelfRef.wr_FIFO_offset) 
                                                  >> 5U)) 
                                           + ((1U & 
                                               ((IData)(vlSelfRef.wr_FIFO_offset) 
                                                >> 4U)) 
                                              + ((1U 
                                                  & ((IData)(vlSelfRef.wr_FIFO_offset) 
                                                     >> 3U)) 
                                                 + 
                                                 ((1U 
                                                   & ((IData)(vlSelfRef.wr_FIFO_offset) 
                                                      >> 2U)) 
                                                  + 
                                                  ((1U 
                                                    & ((IData)(vlSelfRef.wr_FIFO_offset) 
                                                       >> 1U)) 
                                                   + 
                                                   (1U 
                                                    & (IData)(vlSelfRef.wr_FIFO_offset))))))))))),4);
}

void Vpayload_FIFO___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpayload_FIFO___024root__trace_cleanup\n"); );
    // Init
    Vpayload_FIFO___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpayload_FIFO___024root*>(voidSelf);
    Vpayload_FIFO__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
