// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__0(Vtop___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("top", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__top__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+877,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+878,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+879,0,"IP_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+880,0,"IP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+881,0,"IP_pseuder",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+882,0,"IP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+884,0,"TCP_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+885,0,"IP_bytes_rcv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+886,0,"TCP_send",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+887,0,"TCP_transmit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+889,0,"TCP_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+890,0,"TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+891,0,"axis_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+892,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+893,0,"len_seq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+894,0,"soupbin_TCP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+896,0,"axis_r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+897,0,"axis_r_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+898,0,"axis_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+900,0,"TCP_stop_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+901,0,"rcv_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+902,0,"seq_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+903,0,"wr_FIFO_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_tcp__0(Vtop___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_payload_fifo__0(Vtop___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_fifo_tx__0(Vtop___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+913,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+914,0,"FIFO_DEPTH_TX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+914,0,"FIFO_DEPTH_RX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+915,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+17,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"IP_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"IP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"IP_pseuder",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+22,0,"IP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+24,0,"TCP_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+25,0,"IP_bytes_rcv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+26,0,"TCP_send",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+766,0,"TCP_transmit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+768,0,"TCP_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"axis_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"len_seq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+31,0,"soupbin_TCP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+33,0,"axis_r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+413,0,"axis_r_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+414,0,"axis_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+124,0,"TCP_stop_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+494,0,"rcv_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+495,0,"seq_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+916,0,"wr_FIFO_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+917,0,"FIFO_WIDTH_TX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+917,0,"FIFO_WIDTH_RX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+784,0,"nw_segment",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"axis_t_last_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"TCP_flush_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+786,0,"axis_data_rx_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+496,0,"handshake_done_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"seq_rcv_start_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+125,0,"wr_pfifo_en_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+126,0,"wr_pfifo_offset_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+416,0,"wr_ptr_out_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+417,0,"wr_pfifo_len_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+127,0,"rd_pfifo_valid_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+128,0,"rd_pfifo_ptr_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+129,0,"rd_pfifo_len_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+418,0,"rd_pfifo_en_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+419,0,"seq_rx_FIFO_rd_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+112,0,"rd_ftx_en_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+598,0,"rd_ftx_payload_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+600,0,"rd_ftx_valid_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+601,0,"rd_ftx_last_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+602,0,"bytes_abt_sent_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+788,0,"ACK_num_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+789,0,"ACK_rcv_flag_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"out_order_req_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"TCP_stop_flg_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"end_ss_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+603,0,"re_trans_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"checksum_re_trans_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+918,0,"seq_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+919,0,"seq_num_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+920,0,"checksum_TX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+420,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+604,0,"rd_FIFO_valid_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+605,0,"rd_FIFO_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+606,0,"rd_FIFO_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+608,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("u_tcp", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__top__u_tcp__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("u_payload_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__top__u_payload_fifo__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("u_fifo_tx", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__top__u_fifo_tx__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+609,0,"wr_TX_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_fifo_tx__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__u_fifo_tx__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+921,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+922,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+923,0,"FIFO_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+34,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"seq_up",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"seq_num_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+113,0,"rd_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+497,0,"hand_shake_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"checksum_TX",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+610,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+611,0,"rd_FIFO_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+612,0,"rd_FIFO_payload",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+614,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+790,0,"ACK_num",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+791,0,"ACK_rcv_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"out_order_req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+924,0,"TCP_stop_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+925,0,"end_ss",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"axis_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"len_seq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+40,0,"soupbin_TCP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+615,0,"wr_FIFO_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+616,0,"re_trans",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+926,0,"checksum_re_trans",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+133,0,"nbytes_abt_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+617,0,"bytes_msg_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+134,0,"nbytes_msg_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+135,0,"nrd_FIFO_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+618,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+137,0,"nptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+619,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+138,0,"nptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+620,0,"flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+139,0,"nflush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+621,0,"bytes_abt_sent_msg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+140,0,"nbytes_abt_sent_msg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+622,0,"msg_end_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+141,0,"nmsg_end_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+623,0,"rd_state",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+142,0,"nrd_state",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+624,0,"wr_state",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+143,0,"nwr_state",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("dict_tx", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+625,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+626,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+627,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+628,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+629,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+630,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+631,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+632,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+633,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+634,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+635,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+636,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+637,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+638,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+639,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+640,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+641,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+642,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+643,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+644,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+645,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+646,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+647,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+648,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+649,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+650,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+651,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+652,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+653,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+654,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+655,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+656,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+657,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+658,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+659,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+660,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+661,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+662,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+663,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+664,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+665,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+666,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+667,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+668,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+669,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+670,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+671,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+672,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+673,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+674,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+675,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+676,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+677,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+678,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+679,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+680,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+681,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+682,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+683,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+684,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+685,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+686,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+687,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+688,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+689,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+690,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+691,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+692,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+693,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+694,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+695,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+696,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+697,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+698,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+699,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+700,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+701,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+702,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+703,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+704,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+705,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+706,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+707,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+708,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+709,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+710,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+711,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+712,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+713,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+714,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+715,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+716,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+717,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+718,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+719,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+720,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ndict_tx", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+144,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+145,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+148,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+149,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+150,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+151,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+152,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+154,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+155,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+156,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+157,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+158,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+159,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+160,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+161,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+162,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+163,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+164,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+165,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+166,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+167,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+168,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+169,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+170,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+172,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+173,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+174,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+175,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+178,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+179,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+180,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+181,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+182,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+183,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+184,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+185,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+186,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+187,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+190,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+191,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+192,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+193,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+196,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+197,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+198,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+199,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+200,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+201,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+202,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+203,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+204,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+205,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+206,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+207,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+208,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+209,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+210,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+211,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+212,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+213,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+214,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+215,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+216,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+217,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+218,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+219,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+220,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+221,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+222,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+223,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+224,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+225,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+226,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+227,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+228,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+229,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+230,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+231,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+232,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+233,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+234,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+235,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+236,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+237,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+238,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+239,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+721,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+722,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+240,0,"nrd_FIFO_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"nrd_FIFO_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+242,0,"nwr_FIFO_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+723,0,"dict_wrt_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+243,0,"ndict_wrt_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+724,0,"dict_rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+244,0,"ndict_rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+725,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+245,0,"nrd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+726,0,"wrt_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+246,0,"nwrt_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("TCP_tx_order", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declQuad(c+727,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+729,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+731,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+733,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+735,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+737,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+739,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+741,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+743,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+745,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("nTCP_tx_order", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declQuad(c+247,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+249,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+251,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+253,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+255,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+257,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+259,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+261,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+263,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+265,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->declBit(c+747,0,"out_order_req_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"nout_order_req_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+748,0,"ACK_rcv_flag_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+268,0,"nACK_rcv_flag_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+749,0,"ACK_num_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+269,0,"nACK_num_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+270,0,"rd_debug_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"rd_debug_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+750,0,"rd_upd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+272,0,"nrd_upd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+751,0,"bytes_abt_sent_msg_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+273,0,"nbytes_abt_sent_msg_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+752,0,"checksum_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+274,0,"nchecksum_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_payload_fifo__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__u_payload_fifo__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+914,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+913,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+915,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+915,0,"WORD_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+917,0,"FIFO_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+927,0,"WINDOW_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+42,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+792,0,"nw_segment",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"TCP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+793,0,"axis_t_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+794,0,"axis_data_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+498,0,"handshake_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"seq_rcv_start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+275,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+276,0,"wr_FIFO_offset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+421,0,"wr_ptr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+422,0,"wr_FIFO_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+277,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+278,0,"rd_FIFO_ptr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+279,0,"rd_FIFO_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+423,0,"rd_FIFO_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+424,0,"seq_rx_FIFO_rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+425,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"axis_r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+426,0,"axis_r_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+427,0,"axis_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("TCP_FIFO", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+429,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+431,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+432,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+434,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+435,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+437,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+438,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+440,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+441,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+443,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+444,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+446,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+447,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+449,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+450,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+452,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+453,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+455,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+456,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+458,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("nTCP_FIFO", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+280,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+282,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+283,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+285,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+286,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+288,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+289,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+291,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+292,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+294,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+295,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+297,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+298,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+300,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+301,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+303,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+304,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+306,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+307,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+309,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fifo_entry_rd", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+459,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+461,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->declBus(c+462,0,"flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+310,0,"nflush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+463,0,"len_TCP_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+311,0,"nlen_TCP_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+464,0,"rd_len_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+465,0,"seq_trk_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+312,0,"nseq_trk_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+313,0,"bytes_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+928,0,"rd_FIFO_valid_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+314,0,"nrd_FIFO_valid_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+315,0,"naxis_r_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+466,0,"TCP_flush_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+316,0,"nTCP_flush_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+467,0,"payload1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+469,0,"payload2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+471,0,"payload3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+473,0,"payload4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+475,0,"payload5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+477,0,"bytes_offset1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+478,0,"bytes_offset2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+479,0,"bytes_offset3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+480,0,"bytes_offset4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+481,0,"bytes_offset5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+482,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+317,0,"nwr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+483,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+318,0,"nrd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+484,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_flow__0(Vtop___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_rcv__0(Vtop___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_tcp__TCP_tx__0(Vtop___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_tcp__ISN_gen__0(Vtop___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_tcp__inst__0(Vtop___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_tcp__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__u_tcp__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+921,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+914,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+915,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+915,0,"WORD_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+917,0,"FIFO_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+927,0,"WINDOW_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+45,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"IP_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"IP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"IP_pseuder",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+51,0,"IP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+53,0,"TCP_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+54,0,"IP_bytes_rcv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+796,0,"nw_segment",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+797,0,"axis_t_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"TCP_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+798,0,"axis_data_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+499,0,"handshake_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+929,0,"seq_rcv_start",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+319,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+320,0,"wr_FIFO_offset",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+321,0,"rd_FIFO_valid_rcv",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+322,0,"rd_FIFO_ptr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+323,0,"rd_FIFO_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+485,0,"wr_ptr_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+486,0,"wr_FIFO_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+487,0,"rd_FIFO_en_rcv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+488,0,"seq_rx_FIFO_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+489,0,"full",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+800,0,"ACK_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+801,0,"ACK_rcv_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"out_order_req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+325,0,"TCP_stop_flg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"end_ss",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+753,0,"rd_FIFO_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+755,0,"rd_FIFO_valid_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+756,0,"rd_FIFO_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+757,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+114,0,"rd_FIFO_en_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"TCP_send",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+769,0,"TCP_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+770,0,"TCP_transmit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+758,0,"re_trans",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"checksum_re_trans",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+56,0,"wr_FIFO_TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"wr_axis_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+58,0,"soupbin_TCP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+500,0,"rcv_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+501,0,"seq_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+802,0,"rcv_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+803,0,"TCP_control_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+804,0,"seq_num_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+805,0,"ACK_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+806,0,"offset_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+807,0,"window_size_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+808,0,"checksum_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+809,0,"urgent_pointer_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+810,0,"payload_len_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+772,0,"seq_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+850,0,"TCP_control_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+851,0,"seq_num_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+852,0,"ACK_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+410,0,"ISN_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+773,0,"bytes_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+853,0,"offset_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+854,0,"window_size_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+855,0,"urgent_pointer_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+904,0,"TCP_basesum_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+594,0,"TCP_checksum_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("tcp_flow", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_flow__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+930,0,"timeout_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+502,0,"seq_rcv_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+931,0,"wr_FIFO_ptr_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("tcp_rcv", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_rcv__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+811,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("TCP_tx", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__top__u_tcp__TCP_tx__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("ISN_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__top__u_tcp__ISN_gen__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("inst", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__top__u_tcp__inst__0(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_tcp__ISN_gen__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__u_tcp__ISN_gen__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+932,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+60,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"gen_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+411,0,"ISN_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+412,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_tcp__inst__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__u_tcp__inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+921,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+62,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"axis_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+66,0,"TCP_payload_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+68,0,"TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+759,0,"re_trans",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+595,0,"TCP_checksum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+107,0,"nTCP_checksum_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+596,0,"TCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+108,0,"nTCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+597,0,"TCP_checksum_send",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+109,0,"nTCP_checksum_send",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+110,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+111,0,"temp1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+905,0,"up_send",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_tcp__TCP_tx__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__u_tcp__TCP_tx__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+921,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+933,0,"OFF_SET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+934,0,"SRC_PORT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+935,0,"DEST_PORT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+69,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+856,0,"TCP_control_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+857,0,"seq_num_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+858,0,"ACK_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+859,0,"offset_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+860,0,"window_size_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+861,0,"urgent_pointer_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+115,0,"rd_FIFO_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+760,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+761,0,"rd_FIFO_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+762,0,"rd_FIFO_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+764,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+774,0,"seq_up",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+775,0,"bytes_sent",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+71,0,"TCP_send",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+776,0,"TCP_tx_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+777,0,"TCP_tx_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+778,0,"TCP_transmit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+906,0,"TCP_basesum_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+12,0,"src_port",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+13,0,"dest_port",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+116,0,"nbytes_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+780,0,"TCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+907,0,"nTCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBit(c+117,0,"valid_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+781,0,"state",3, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+118,0,"nstate",3, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declQuad(c+119,0,"nTCP_transmit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+121,0,"nTCP_tx_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"nTCP_tx_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"nseq_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_rcv__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_rcv__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+921,0,"WORD_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+933,0,"OFF_SET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+934,0,"SRC_PORT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+935,0,"DEST_PORT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+936,0,"IP_HEADER_LENGTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+72,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+74,0,"IP_payload_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+76,0,"valid_IP_header_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"IP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+78,0,"TCP_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+79,0,"IP_pseuder",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+812,0,"rcv_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+813,0,"TCP_control_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+814,0,"seq_num_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+815,0,"ACK_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+816,0,"offset_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+817,0,"window_size_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+818,0,"checksum_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+819,0,"urgent_pointer_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+820,0,"TCP_len_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+821,0,"TCP_payload_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+823,0,"TCP_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"TCP_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+824,0,"nw_segment",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+825,0,"TCP_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"nTCP_control_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+88,0,"nseq_num_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"nACK_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"noffset_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+91,0,"nwindow_size_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+92,0,"nchecksum_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+93,0,"nurgent_pointer_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+826,0,"bytes_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+94,0,"nbytes_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+937,0,"checksum_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+95,0,"nTCP_len_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+827,0,"TCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+96,0,"nTCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+97,0,"TCP_checksum_comp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+938,0,"TCP_data_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+939,0,"nTCP_data_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+98,0,"nTCP_payload_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+100,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+101,0,"nTCP_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"nrcv_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+940,0,"checksum_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+941,0,"nchecksum_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"n_nw_segment",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"nTCP_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+828,0,"state",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+105,0,"nstate",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_flow__me__0(Vtop___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_flow__pe__0(Vtop___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_flow__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_flow__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+922,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+942,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+943,0,"FIFO_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+80,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+829,0,"rcv_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+830,0,"TCP_control_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+831,0,"seq_num_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+832,0,"ACK_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+833,0,"offset_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+834,0,"window_size_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+835,0,"checksum_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+836,0,"urgent_pointer_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+14,0,"end_ss",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+782,0,"seq_up",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+862,0,"TCP_control_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+863,0,"seq_num_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+864,0,"ACK_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+865,0,"offset_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+866,0,"window_size_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+867,0,"urgent_pointer_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+326,0,"TCP_stop_flg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"full",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"timeout_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+503,0,"hand_shake_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+504,0,"seq_rcv_str",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+908,0,"ISN_num",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+783,0,"bytes_sent",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+765,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+837,0,"payload_len_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+838,0,"TCP_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+505,0,"rcv_next_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+506,0,"seq_num_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+491,0,"seq_rx_FIFO_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"TCP_bytes_trk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+327,0,"wr_FIFO_offset",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+492,0,"wr_FIFO_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+328,0,"rd_FIFO_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+16,0,"wr_FIFO_ptr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+329,0,"rd_FIFO_ptr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+330,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"rd_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+839,0,"nw_segment",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"TCP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+331,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+840,0,"ACK_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+841,0,"ACK_rcv_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+332,0,"out_order_req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+333,0,"case_bug",5, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+334,0,"case_bug_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+507,0,"state",6, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+335,0,"nstate",6, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("rcv_pkg_type", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+842,0,"CWR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+843,0,"ECE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+844,0,"URG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+845,0,"ACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+846,0,"PSH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+847,0,"RST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+848,0,"SYN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+849,0,"FIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("tx_pkg_type", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+868,0,"CWR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+869,0,"ECE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+870,0,"URG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+871,0,"ACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+872,0,"PSH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+873,0,"RST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+874,0,"SYN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+875,0,"FIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("ack_num", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+508,0,"dup_chk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+509,0,"ACK_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("nack_num", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+336,0,"dup_chk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+337,0,"ACK_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("seq_num", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+510,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+511,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("nseq_num", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+338,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+339,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->declBus(c+512,0,"window_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+340,0,"nwindow_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+909,0,"bytes_in_flight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+910,0,"wnd_allow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+876,0,"nhand_shake_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+341,0,"nseq_rcv_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("nTCP_order", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+342,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+343,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+344,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+345,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+346,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+347,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+348,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+349,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+350,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+351,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+352,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+353,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+354,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+355,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+356,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+357,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+358,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+359,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+360,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+361,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+362,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+363,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+364,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+365,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+366,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+367,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+368,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+369,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+370,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+371,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+372,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+373,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+374,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+375,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+376,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+377,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+378,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+379,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+380,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+381,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+382,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+383,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+384,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+385,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+386,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+387,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+388,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+389,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+390,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+391,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("TCP_order", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+513,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+514,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+515,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+516,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+517,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+518,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+519,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+520,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+521,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+522,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+523,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+524,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+525,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+526,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+527,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+528,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+529,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+530,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+531,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+532,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+533,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+534,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+535,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+536,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+537,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+538,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+539,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+540,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+541,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+542,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+543,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+544,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+545,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+546,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+547,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+548,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+549,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+550,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+551,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+552,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+553,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+554,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+555,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+556,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+557,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+558,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+559,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+560,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+561,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+562,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+563,0,"rcv_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+392,0,"nrcv_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+393,0,"out_of_order_flg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+564,0,"free_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+565,0,"match_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+566,0,"v_vec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+567,0,"free_vec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->pushPrefix("seq_vec", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+944,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+945,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+946,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+947,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+948,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+949,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+950,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+951,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+952,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+953,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+954,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+955,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+956,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+957,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+958,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+959,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+960,0,"[16]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+961,0,"[17]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+962,0,"[18]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+963,0,"[19]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+964,0,"[20]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+965,0,"[21]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+966,0,"[22]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+967,0,"[23]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+968,0,"[24]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+969,0,"[25]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+970,0,"[26]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+971,0,"[27]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+972,0,"[28]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+973,0,"[29]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+974,0,"[30]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+975,0,"[31]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->declBit(c+568,0,"free_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+569,0,"match_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+570,0,"match_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+911,0,"overlap_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+571,0,"flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+394,0,"nflush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+572,0,"len_flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+395,0,"nlen_flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+912,0,"debug",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+573,0,"seq_rx_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+396,0,"nseq_rx_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+397,0,"bytes_drop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+398,0,"bytes_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("flush_list", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+574,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+575,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+576,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+577,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+578,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+579,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+580,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+581,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+582,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+583,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("nflush_list", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+399,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+400,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+401,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+402,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+403,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+404,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+405,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+406,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+407,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+408,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("me", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_flow__me__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_flow__pe__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+584,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+585,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+409,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_flow__me__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_flow__me__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+914,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+976,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+917,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+586,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+587,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+588,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+589,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_flow__pe__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_flow__pe__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+914,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+976,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+917,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+590,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+591,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+592,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+593,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+913,(0x40U),32);
    bufp->fullIData(oldp+914,(0xaU),32);
    bufp->fullIData(oldp+915,(8U),32);
    bufp->fullBit(oldp+916,(vlSymsp->TOP__top.wr_FIFO_full));
    bufp->fullIData(oldp+917,(4U),32);
    bufp->fullBit(oldp+918,(vlSymsp->TOP__top.__PVT__seq_up));
    bufp->fullIData(oldp+919,(vlSymsp->TOP__top.__PVT__seq_num_tx),32);
    bufp->fullSData(oldp+920,(vlSymsp->TOP__top.__PVT__checksum_TX),16);
    bufp->fullIData(oldp+921,(0x40U),32);
    bufp->fullIData(oldp+922,(0xaU),32);
    bufp->fullIData(oldp+923,(4U),32);
    bufp->fullBit(oldp+924,(vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_stop_flag));
    bufp->fullBit(oldp+925,(vlSymsp->TOP__top__u_fifo_tx.__PVT__end_ss));
    bufp->fullSData(oldp+926,(vlSymsp->TOP__top__u_fifo_tx.__PVT__checksum_re_trans),16);
    bufp->fullIData(oldp+927,(0x50U),32);
    bufp->fullBit(oldp+928,(vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_FIFO_valid_l));
    bufp->fullIData(oldp+929,(vlSymsp->TOP__top__u_tcp.__PVT__seq_rcv_start),32);
    bufp->fullBit(oldp+930,(vlSymsp->TOP__top__u_tcp.__PVT__timeout_flag));
    bufp->fullBit(oldp+931,(vlSymsp->TOP__top__u_tcp.__PVT__wr_FIFO_ptr_out));
    bufp->fullIData(oldp+932,(0x20U),32);
    bufp->fullIData(oldp+933,(5U),32);
    bufp->fullSData(oldp+934,(0x1234U),16);
    bufp->fullSData(oldp+935,(0x5678U),16);
    bufp->fullIData(oldp+936,(0x14U),32);
    bufp->fullSData(oldp+937,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__checksum_in),16);
    bufp->fullCData(oldp+938,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_data_dl),8);
    bufp->fullCData(oldp+939,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nTCP_data_dl),8);
    bufp->fullBit(oldp+940,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__checksum_en));
    bufp->fullBit(oldp+941,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nchecksum_en));
    bufp->fullIData(oldp+942,(0x800U),32);
    bufp->fullIData(oldp+943,(0xbU),32);
    bufp->fullSData(oldp+944,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0U, 0xaU))),10);
    bufp->fullSData(oldp+945,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0xaU, 0xaU))),10);
    bufp->fullSData(oldp+946,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x14U, 0xaU))),10);
    bufp->fullSData(oldp+947,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x1eU, 0xaU))),10);
    bufp->fullSData(oldp+948,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x28U, 0xaU))),10);
    bufp->fullSData(oldp+949,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x32U, 0xaU))),10);
    bufp->fullSData(oldp+950,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x3cU, 0xaU))),10);
    bufp->fullSData(oldp+951,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x46U, 0xaU))),10);
    bufp->fullSData(oldp+952,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x50U, 0xaU))),10);
    bufp->fullSData(oldp+953,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x5aU, 0xaU))),10);
    bufp->fullSData(oldp+954,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x64U, 0xaU))),10);
    bufp->fullSData(oldp+955,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x6eU, 0xaU))),10);
    bufp->fullSData(oldp+956,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x78U, 0xaU))),10);
    bufp->fullSData(oldp+957,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x82U, 0xaU))),10);
    bufp->fullSData(oldp+958,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x8cU, 0xaU))),10);
    bufp->fullSData(oldp+959,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x96U, 0xaU))),10);
    bufp->fullSData(oldp+960,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0xa0U, 0xaU))),10);
    bufp->fullSData(oldp+961,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0xaaU, 0xaU))),10);
    bufp->fullSData(oldp+962,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0xb4U, 0xaU))),10);
    bufp->fullSData(oldp+963,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0xbeU, 0xaU))),10);
    bufp->fullSData(oldp+964,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0xc8U, 0xaU))),10);
    bufp->fullSData(oldp+965,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0xd2U, 0xaU))),10);
    bufp->fullSData(oldp+966,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0xdcU, 0xaU))),10);
    bufp->fullSData(oldp+967,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0xe6U, 0xaU))),10);
    bufp->fullSData(oldp+968,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0xf0U, 0xaU))),10);
    bufp->fullSData(oldp+969,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0xfaU, 0xaU))),10);
    bufp->fullSData(oldp+970,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x104U, 0xaU))),10);
    bufp->fullSData(oldp+971,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x10eU, 0xaU))),10);
    bufp->fullSData(oldp+972,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x118U, 0xaU))),10);
    bufp->fullSData(oldp+973,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x122U, 0xaU))),10);
    bufp->fullSData(oldp+974,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x12cU, 0xaU))),10);
    bufp->fullSData(oldp+975,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x136U, 0xaU))),10);
    bufp->fullBit(oldp+976,(0U));
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSymsp->TOP__top.__PVT__seq_rcv_start_int),32);
    bufp->fullBit(oldp+2,(vlSymsp->TOP__top.__PVT__end_ss_int));
    bufp->fullSData(oldp+3,(vlSymsp->TOP__top.__PVT__checksum_re_trans_int),16);
    bufp->fullBit(oldp+4,(vlSymsp->TOP__top__u_fifo_tx.__PVT__seq_up));
    bufp->fullIData(oldp+5,(vlSymsp->TOP__top__u_fifo_tx.__PVT__seq_num_tx),32);
    bufp->fullSData(oldp+6,(vlSymsp->TOP__top__u_fifo_tx.__PVT__checksum_TX),16);
    bufp->fullIData(oldp+7,(vlSymsp->TOP__top__u_payload_fifo.__PVT__seq_rcv_start),32);
    bufp->fullBit(oldp+8,(vlSymsp->TOP__top__u_tcp.__PVT__end_ss));
    bufp->fullSData(oldp+9,(vlSymsp->TOP__top__u_tcp.__PVT__checksum_re_trans),16);
    bufp->fullBit(oldp+10,(vlSymsp->TOP__top__u_tcp__ISN_gen.__PVT__gen_en));
    bufp->fullBit(oldp+11,(vlSymsp->TOP__top__u_tcp__inst.__PVT__clear));
    bufp->fullSData(oldp+12,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__src_port),16);
    bufp->fullSData(oldp+13,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__dest_port),16);
    bufp->fullBit(oldp+14,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__end_ss));
    bufp->fullBit(oldp+15,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__timeout_flag));
    bufp->fullSData(oldp+16,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__wr_FIFO_ptr),11);
    bufp->fullBit(oldp+17,(vlSymsp->TOP__top.CLK));
    bufp->fullBit(oldp+18,(vlSymsp->TOP__top.nRST));
    bufp->fullBit(oldp+19,(vlSymsp->TOP__top.IP_valid));
    bufp->fullBit(oldp+20,(vlSymsp->TOP__top.IP_flush));
    bufp->fullSData(oldp+21,(vlSymsp->TOP__top.IP_pseuder),16);
    bufp->fullQData(oldp+22,(vlSymsp->TOP__top.IP_payload),64);
    bufp->fullSData(oldp+24,(vlSymsp->TOP__top.TCP_len),16);
    bufp->fullCData(oldp+25,(vlSymsp->TOP__top.IP_bytes_rcv),8);
    bufp->fullBit(oldp+26,(vlSymsp->TOP__top.TCP_send));
    bufp->fullBit(oldp+27,(vlSymsp->TOP__top.TX_en));
    bufp->fullBit(oldp+28,(vlSymsp->TOP__top.axis_last));
    bufp->fullBit(oldp+29,(vlSymsp->TOP__top.wr_FIFO_en));
    bufp->fullIData(oldp+30,(vlSymsp->TOP__top.len_seq),32);
    bufp->fullQData(oldp+31,(vlSymsp->TOP__top.soupbin_TCP_payload),64);
    bufp->fullBit(oldp+33,(vlSymsp->TOP__top.axis_r_en));
    bufp->fullBit(oldp+34,(vlSymsp->TOP__top__u_fifo_tx.__PVT__CLK));
    bufp->fullBit(oldp+35,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nRST));
    bufp->fullBit(oldp+36,(vlSymsp->TOP__top__u_fifo_tx.__PVT__TX_en));
    bufp->fullBit(oldp+37,(vlSymsp->TOP__top__u_fifo_tx.__PVT__axis_last));
    bufp->fullBit(oldp+38,(vlSymsp->TOP__top__u_fifo_tx.__PVT__wr_FIFO_en));
    bufp->fullIData(oldp+39,(vlSymsp->TOP__top__u_fifo_tx.__PVT__len_seq),32);
    bufp->fullQData(oldp+40,(vlSymsp->TOP__top__u_fifo_tx.__PVT__soupbin_TCP_payload),64);
    bufp->fullBit(oldp+42,(vlSymsp->TOP__top__u_payload_fifo.__PVT__CLK));
    bufp->fullBit(oldp+43,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nRST));
    bufp->fullBit(oldp+44,(vlSymsp->TOP__top__u_payload_fifo.__PVT__axis_r_en));
    bufp->fullBit(oldp+45,(vlSymsp->TOP__top__u_tcp.__PVT__CLK));
    bufp->fullBit(oldp+46,(vlSymsp->TOP__top__u_tcp.__PVT__nRST));
    bufp->fullBit(oldp+47,(vlSymsp->TOP__top__u_tcp.__PVT__TX_en));
    bufp->fullBit(oldp+48,(vlSymsp->TOP__top__u_tcp.__PVT__IP_valid));
    bufp->fullBit(oldp+49,(vlSymsp->TOP__top__u_tcp.__PVT__IP_flush));
    bufp->fullSData(oldp+50,(vlSymsp->TOP__top__u_tcp.__PVT__IP_pseuder),16);
    bufp->fullQData(oldp+51,(vlSymsp->TOP__top__u_tcp.__PVT__IP_payload),64);
    bufp->fullSData(oldp+53,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_len),16);
    bufp->fullCData(oldp+54,(vlSymsp->TOP__top__u_tcp.__PVT__IP_bytes_rcv),8);
    bufp->fullBit(oldp+55,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_send));
    bufp->fullBit(oldp+56,(vlSymsp->TOP__top__u_tcp.__PVT__wr_FIFO_TX_en));
    bufp->fullBit(oldp+57,(vlSymsp->TOP__top__u_tcp.__PVT__wr_axis_last));
    bufp->fullQData(oldp+58,(vlSymsp->TOP__top__u_tcp.__PVT__soupbin_TCP_payload),64);
    bufp->fullBit(oldp+60,(vlSymsp->TOP__top__u_tcp__ISN_gen.__PVT__CLK));
    bufp->fullBit(oldp+61,(vlSymsp->TOP__top__u_tcp__ISN_gen.__PVT__nRST));
    bufp->fullBit(oldp+62,(vlSymsp->TOP__top__u_tcp__inst.__PVT__CLK));
    bufp->fullBit(oldp+63,(vlSymsp->TOP__top__u_tcp__inst.__PVT__nRST));
    bufp->fullBit(oldp+64,(vlSymsp->TOP__top__u_tcp__inst.__PVT__wr_FIFO_en));
    bufp->fullBit(oldp+65,(vlSymsp->TOP__top__u_tcp__inst.__PVT__axis_last));
    bufp->fullQData(oldp+66,(vlSymsp->TOP__top__u_tcp__inst.__PVT__TCP_payload_tx),64);
    bufp->fullBit(oldp+68,(vlSymsp->TOP__top__u_tcp__inst.__PVT__TX_en));
    bufp->fullBit(oldp+69,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__CLK));
    bufp->fullBit(oldp+70,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nRST));
    bufp->fullBit(oldp+71,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_send));
    bufp->fullBit(oldp+72,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__CLK));
    bufp->fullBit(oldp+73,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nRST));
    bufp->fullQData(oldp+74,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__IP_payload_rx),64);
    bufp->fullBit(oldp+76,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__valid_IP_header_rx));
    bufp->fullBit(oldp+77,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__IP_flush));
    bufp->fullSData(oldp+78,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_len),16);
    bufp->fullSData(oldp+79,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__IP_pseuder),16);
    bufp->fullBit(oldp+80,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__CLK));
    bufp->fullBit(oldp+81,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nRST));
    bufp->fullCData(oldp+82,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_bytes_trk),8);
    bufp->fullBit(oldp+83,(vlSymsp->TOP__top.__PVT__TCP_flush_int));
    bufp->fullBit(oldp+84,(vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_flush));
    bufp->fullBit(oldp+85,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_flush));
    bufp->fullBit(oldp+86,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_flush));
    bufp->fullCData(oldp+87,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nTCP_control_rx),8);
    bufp->fullIData(oldp+88,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nseq_num_rx),32);
    bufp->fullIData(oldp+89,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nACK_rx),32);
    bufp->fullCData(oldp+90,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__noffset_rx),4);
    bufp->fullSData(oldp+91,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nwindow_size_rx),16);
    bufp->fullSData(oldp+92,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nchecksum_rx),16);
    bufp->fullSData(oldp+93,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nurgent_pointer_rx),16);
    bufp->fullSData(oldp+94,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nbytes_trk),16);
    bufp->fullSData(oldp+95,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nTCP_len_data),16);
    bufp->fullIData(oldp+96,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nTCP_checksum),17);
    bufp->fullSData(oldp+97,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_checksum_comp),16);
    bufp->fullQData(oldp+98,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nTCP_payload_rx),64);
    bufp->fullIData(oldp+100,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__temp),20);
    bufp->fullBit(oldp+101,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nTCP_valid));
    bufp->fullBit(oldp+102,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nrcv_data));
    bufp->fullBit(oldp+103,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__n_nw_segment));
    bufp->fullBit(oldp+104,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nTCP_last));
    bufp->fullCData(oldp+105,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nstate),3);
    bufp->fullBit(oldp+106,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_flush));
    bufp->fullSData(oldp+107,(vlSymsp->TOP__top__u_tcp__inst.__PVT__nTCP_checksum_out),16);
    bufp->fullIData(oldp+108,(vlSymsp->TOP__top__u_tcp__inst.__PVT__nTCP_checksum),17);
    bufp->fullIData(oldp+109,(vlSymsp->TOP__top__u_tcp__inst.__PVT__nTCP_checksum_send),17);
    bufp->fullIData(oldp+110,(vlSymsp->TOP__top__u_tcp__inst.__PVT__temp),20);
    bufp->fullIData(oldp+111,(vlSymsp->TOP__top__u_tcp__inst.__PVT__temp1),20);
    bufp->fullBit(oldp+112,(vlSymsp->TOP__top.__PVT__rd_ftx_en_int));
    bufp->fullBit(oldp+113,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_FIFO_en));
    bufp->fullBit(oldp+114,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_en_tx));
    bufp->fullBit(oldp+115,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__rd_FIFO_en));
    bufp->fullIData(oldp+116,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nbytes_sent),32);
    bufp->fullBit(oldp+117,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__valid_checksum));
    bufp->fullCData(oldp+118,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nstate),7);
    bufp->fullQData(oldp+119,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nTCP_transmit),64);
    bufp->fullBit(oldp+121,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nTCP_tx_valid));
    bufp->fullBit(oldp+122,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nTCP_tx_last));
    bufp->fullBit(oldp+123,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nseq_up));
    bufp->fullBit(oldp+124,(vlSymsp->TOP__top.TCP_stop_flag));
    bufp->fullBit(oldp+125,(vlSymsp->TOP__top.__PVT__wr_pfifo_en_int));
    bufp->fullCData(oldp+126,(vlSymsp->TOP__top.__PVT__wr_pfifo_offset_int),8);
    bufp->fullBit(oldp+127,(vlSymsp->TOP__top.__PVT__rd_pfifo_valid_int));
    bufp->fullCData(oldp+128,(vlSymsp->TOP__top.__PVT__rd_pfifo_ptr_int),4);
    bufp->fullCData(oldp+129,(vlSymsp->TOP__top.__PVT__rd_pfifo_len_int),4);
    bufp->fullBit(oldp+130,(vlSymsp->TOP__top.__PVT__out_order_req_int));
    bufp->fullBit(oldp+131,(vlSymsp->TOP__top.__PVT__TCP_stop_flg_int));
    bufp->fullBit(oldp+132,(vlSymsp->TOP__top__u_fifo_tx.__PVT__out_order_req));
    bufp->fullSData(oldp+133,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nbytes_abt_sent),16);
    bufp->fullSData(oldp+134,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nbytes_msg_trk),16);
    bufp->fullQData(oldp+135,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nrd_FIFO_payload),64);
    bufp->fullCData(oldp+137,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nptr_str),4);
    bufp->fullCData(oldp+138,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nptr_end),4);
    bufp->fullCData(oldp+139,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nflush_ptr),4);
    bufp->fullSData(oldp+140,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nbytes_abt_sent_msg),16);
    bufp->fullCData(oldp+141,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nmsg_end_ptr),4);
    bufp->fullCData(oldp+142,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nrd_state),2);
    bufp->fullCData(oldp+143,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nwr_state),2);
    bufp->fullBit(oldp+144,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x58U))));
    bufp->fullIData(oldp+145,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x38U, 0x20U)),32);
    bufp->fullIData(oldp+146,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x18U, 0x20U)),32);
    bufp->fullSData(oldp+147,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 8U, 0x10U))),16);
    bufp->fullCData(oldp+148,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 4U, 4U))),4);
    bufp->fullCData(oldp+149,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0U, 4U))),4);
    bufp->fullBit(oldp+150,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0xb1U))));
    bufp->fullIData(oldp+151,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x91U, 0x20U)),32);
    bufp->fullIData(oldp+152,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x71U, 0x20U)),32);
    bufp->fullSData(oldp+153,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x61U, 0x10U))),16);
    bufp->fullCData(oldp+154,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x5dU, 4U))),4);
    bufp->fullCData(oldp+155,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x59U, 4U))),4);
    bufp->fullBit(oldp+156,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x10aU))));
    bufp->fullIData(oldp+157,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0xeaU, 0x20U)),32);
    bufp->fullIData(oldp+158,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0xcaU, 0x20U)),32);
    bufp->fullSData(oldp+159,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0xbaU, 0x10U))),16);
    bufp->fullCData(oldp+160,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0xb6U, 4U))),4);
    bufp->fullCData(oldp+161,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0xb2U, 4U))),4);
    bufp->fullBit(oldp+162,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x163U))));
    bufp->fullIData(oldp+163,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x143U, 0x20U)),32);
    bufp->fullIData(oldp+164,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x123U, 0x20U)),32);
    bufp->fullSData(oldp+165,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x113U, 0x10U))),16);
    bufp->fullCData(oldp+166,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x10fU, 4U))),4);
    bufp->fullCData(oldp+167,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x10bU, 4U))),4);
    bufp->fullBit(oldp+168,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x1bcU))));
    bufp->fullIData(oldp+169,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x19cU, 0x20U)),32);
    bufp->fullIData(oldp+170,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x17cU, 0x20U)),32);
    bufp->fullSData(oldp+171,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x16cU, 0x10U))),16);
    bufp->fullCData(oldp+172,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x168U, 4U))),4);
    bufp->fullCData(oldp+173,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x164U, 4U))),4);
    bufp->fullBit(oldp+174,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x215U))));
    bufp->fullIData(oldp+175,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x1f5U, 0x20U)),32);
    bufp->fullIData(oldp+176,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x1d5U, 0x20U)),32);
    bufp->fullSData(oldp+177,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x1c5U, 0x10U))),16);
    bufp->fullCData(oldp+178,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x1c1U, 4U))),4);
    bufp->fullCData(oldp+179,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x1bdU, 4U))),4);
    bufp->fullBit(oldp+180,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x26eU))));
    bufp->fullIData(oldp+181,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x24eU, 0x20U)),32);
    bufp->fullIData(oldp+182,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x22eU, 0x20U)),32);
    bufp->fullSData(oldp+183,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x21eU, 0x10U))),16);
    bufp->fullCData(oldp+184,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x21aU, 4U))),4);
    bufp->fullCData(oldp+185,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x216U, 4U))),4);
    bufp->fullBit(oldp+186,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x2c7U))));
    bufp->fullIData(oldp+187,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x2a7U, 0x20U)),32);
    bufp->fullIData(oldp+188,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x287U, 0x20U)),32);
    bufp->fullSData(oldp+189,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x277U, 0x10U))),16);
    bufp->fullCData(oldp+190,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x273U, 4U))),4);
    bufp->fullCData(oldp+191,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x26fU, 4U))),4);
    bufp->fullBit(oldp+192,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x320U))));
    bufp->fullIData(oldp+193,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x300U, 0x20U)),32);
    bufp->fullIData(oldp+194,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x2e0U, 0x20U)),32);
    bufp->fullSData(oldp+195,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x2d0U, 0x10U))),16);
    bufp->fullCData(oldp+196,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x2ccU, 4U))),4);
    bufp->fullCData(oldp+197,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x2c8U, 4U))),4);
    bufp->fullBit(oldp+198,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x379U))));
    bufp->fullIData(oldp+199,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x359U, 0x20U)),32);
    bufp->fullIData(oldp+200,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x339U, 0x20U)),32);
    bufp->fullSData(oldp+201,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x329U, 0x10U))),16);
    bufp->fullCData(oldp+202,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x325U, 4U))),4);
    bufp->fullCData(oldp+203,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x321U, 4U))),4);
    bufp->fullBit(oldp+204,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x3d2U))));
    bufp->fullIData(oldp+205,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x3b2U, 0x20U)),32);
    bufp->fullIData(oldp+206,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x392U, 0x20U)),32);
    bufp->fullSData(oldp+207,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x382U, 0x10U))),16);
    bufp->fullCData(oldp+208,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x37eU, 4U))),4);
    bufp->fullCData(oldp+209,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x37aU, 4U))),4);
    bufp->fullBit(oldp+210,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x42bU))));
    bufp->fullIData(oldp+211,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x40bU, 0x20U)),32);
    bufp->fullIData(oldp+212,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x3ebU, 0x20U)),32);
    bufp->fullSData(oldp+213,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x3dbU, 0x10U))),16);
    bufp->fullCData(oldp+214,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x3d7U, 4U))),4);
    bufp->fullCData(oldp+215,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x3d3U, 4U))),4);
    bufp->fullBit(oldp+216,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x484U))));
    bufp->fullIData(oldp+217,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x464U, 0x20U)),32);
    bufp->fullIData(oldp+218,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x444U, 0x20U)),32);
    bufp->fullSData(oldp+219,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x434U, 0x10U))),16);
    bufp->fullCData(oldp+220,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x430U, 4U))),4);
    bufp->fullCData(oldp+221,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x42cU, 4U))),4);
    bufp->fullBit(oldp+222,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x4ddU))));
    bufp->fullIData(oldp+223,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x4bdU, 0x20U)),32);
    bufp->fullIData(oldp+224,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x49dU, 0x20U)),32);
    bufp->fullSData(oldp+225,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x48dU, 0x10U))),16);
    bufp->fullCData(oldp+226,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x489U, 4U))),4);
    bufp->fullCData(oldp+227,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x485U, 4U))),4);
    bufp->fullBit(oldp+228,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x536U))));
    bufp->fullIData(oldp+229,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x516U, 0x20U)),32);
    bufp->fullIData(oldp+230,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x4f6U, 0x20U)),32);
    bufp->fullSData(oldp+231,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x4e6U, 0x10U))),16);
    bufp->fullCData(oldp+232,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x4e2U, 4U))),4);
    bufp->fullCData(oldp+233,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x4deU, 4U))),4);
    bufp->fullBit(oldp+234,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x58fU))));
    bufp->fullIData(oldp+235,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x56fU, 0x20U)),32);
    bufp->fullIData(oldp+236,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x54fU, 0x20U)),32);
    bufp->fullSData(oldp+237,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x53fU, 0x10U))),16);
    bufp->fullCData(oldp+238,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x53bU, 4U))),4);
    bufp->fullCData(oldp+239,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x537U, 4U))),4);
    bufp->fullBit(oldp+240,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nrd_FIFO_last));
    bufp->fullBit(oldp+241,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nrd_FIFO_valid));
    bufp->fullBit(oldp+242,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nwr_FIFO_valid));
    bufp->fullCData(oldp+243,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_wrt_ptr),4);
    bufp->fullCData(oldp+244,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_rd_ptr),4);
    bufp->fullCData(oldp+245,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nrd_ptr),4);
    bufp->fullCData(oldp+246,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nwrt_ptr),4);
    bufp->fullQData(oldp+247,(VL_SEL_QWII(640, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0U, 0x40U)),64);
    bufp->fullQData(oldp+249,(VL_SEL_QWII(640, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x40U, 0x40U)),64);
    bufp->fullQData(oldp+251,(VL_SEL_QWII(640, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x80U, 0x40U)),64);
    bufp->fullQData(oldp+253,(VL_SEL_QWII(640, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0xc0U, 0x40U)),64);
    bufp->fullQData(oldp+255,(VL_SEL_QWII(640, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x100U, 0x40U)),64);
    bufp->fullQData(oldp+257,(VL_SEL_QWII(640, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x140U, 0x40U)),64);
    bufp->fullQData(oldp+259,(VL_SEL_QWII(640, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x180U, 0x40U)),64);
    bufp->fullQData(oldp+261,(VL_SEL_QWII(640, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x1c0U, 0x40U)),64);
    bufp->fullQData(oldp+263,(VL_SEL_QWII(640, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x200U, 0x40U)),64);
    bufp->fullQData(oldp+265,(VL_SEL_QWII(640, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x240U, 0x40U)),64);
    bufp->fullBit(oldp+267,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nout_order_req_l));
    bufp->fullBit(oldp+268,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nACK_rcv_flag_l));
    bufp->fullIData(oldp+269,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nACK_num_l),32);
    bufp->fullBit(oldp+270,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_debug_1));
    bufp->fullBit(oldp+271,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_debug_2));
    bufp->fullBit(oldp+272,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nrd_upd));
    bufp->fullSData(oldp+273,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nbytes_abt_sent_msg_rd),16);
    bufp->fullSData(oldp+274,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nchecksum_l),16);
    bufp->fullBit(oldp+275,(vlSymsp->TOP__top__u_payload_fifo.__PVT__wr_FIFO_en));
    bufp->fullCData(oldp+276,(vlSymsp->TOP__top__u_payload_fifo.__PVT__wr_FIFO_offset),8);
    bufp->fullBit(oldp+277,(vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_FIFO_valid));
    bufp->fullCData(oldp+278,(vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_FIFO_ptr),4);
    bufp->fullCData(oldp+279,(vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_FIFO_len),4);
    bufp->fullQData(oldp+280,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                          [0U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+282,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [0U], 0U, 8U))),8);
    bufp->fullQData(oldp+283,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                          [1U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+285,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [1U], 0U, 8U))),8);
    bufp->fullQData(oldp+286,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                          [2U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+288,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [2U], 0U, 8U))),8);
    bufp->fullQData(oldp+289,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                          [3U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+291,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [3U], 0U, 8U))),8);
    bufp->fullQData(oldp+292,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                          [4U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+294,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [4U], 0U, 8U))),8);
    bufp->fullQData(oldp+295,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                          [5U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+297,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [5U], 0U, 8U))),8);
    bufp->fullQData(oldp+298,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                          [6U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+300,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [6U], 0U, 8U))),8);
    bufp->fullQData(oldp+301,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                          [7U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+303,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [7U], 0U, 8U))),8);
    bufp->fullQData(oldp+304,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                          [8U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+306,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [8U], 0U, 8U))),8);
    bufp->fullQData(oldp+307,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                          [9U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+309,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [9U], 0U, 8U))),8);
    bufp->fullCData(oldp+310,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nflush_ptr),4);
    bufp->fullCData(oldp+311,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nlen_TCP_flush),4);
    bufp->fullIData(oldp+312,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nseq_trk_rd),32);
    bufp->fullCData(oldp+313,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_len),4);
    bufp->fullBit(oldp+314,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nrd_FIFO_valid_l));
    bufp->fullBit(oldp+315,(vlSymsp->TOP__top__u_payload_fifo.__PVT__naxis_r_valid));
    bufp->fullBit(oldp+316,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_flush_l));
    bufp->fullCData(oldp+317,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nwr_ptr),4);
    bufp->fullCData(oldp+318,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nrd_ptr),4);
    bufp->fullBit(oldp+319,(vlSymsp->TOP__top__u_tcp.__PVT__wr_FIFO_en));
    bufp->fullCData(oldp+320,(vlSymsp->TOP__top__u_tcp.__PVT__wr_FIFO_offset),8);
    bufp->fullBit(oldp+321,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_valid_rcv));
    bufp->fullCData(oldp+322,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_ptr),4);
    bufp->fullCData(oldp+323,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_len),4);
    bufp->fullBit(oldp+324,(vlSymsp->TOP__top__u_tcp.__PVT__out_order_req));
    bufp->fullBit(oldp+325,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_stop_flg));
    bufp->fullBit(oldp+326,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_stop_flg));
    bufp->fullCData(oldp+327,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__wr_FIFO_offset),8);
    bufp->fullCData(oldp+328,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rd_FIFO_len),8);
    bufp->fullSData(oldp+329,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rd_FIFO_ptr),11);
    bufp->fullBit(oldp+330,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__wr_FIFO_en));
    bufp->fullBit(oldp+331,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rd_FIFO_valid));
    bufp->fullBit(oldp+332,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__out_order_req));
    bufp->fullCData(oldp+333,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__case_bug),2);
    bufp->fullBit(oldp+334,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__case_bug_0));
    bufp->fullCData(oldp+335,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nstate),7);
    bufp->fullCData(oldp+336,((7U & VL_SEL_IQII(35, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nack_num, 0x20U, 3U))),3);
    bufp->fullIData(oldp+337,(VL_SEL_IQII(35, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nack_num, 0U, 0x20U)),32);
    bufp->fullBit(oldp+338,((1U & VL_BITSEL_IQII(33, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nseq_num, 0x20U))));
    bufp->fullIData(oldp+339,(VL_SEL_IQII(33, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nseq_num, 0U, 0x20U)),32);
    bufp->fullSData(oldp+340,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nwindow_size),16);
    bufp->fullIData(oldp+341,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nseq_rcv_str),32);
    bufp->fullBit(oldp+342,((1U & VL_BITSEL_IWII(81, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [0U], 0x50U))));
    bufp->fullIData(oldp+343,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [0U], 0x30U, 0x20U)),32);
    bufp->fullSData(oldp+344,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [0U], 0x20U, 0x10U))),16);
    bufp->fullSData(oldp+345,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [0U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+346,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [0U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+347,((1U & VL_BITSEL_IWII(81, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [1U], 0x50U))));
    bufp->fullIData(oldp+348,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [1U], 0x30U, 0x20U)),32);
    bufp->fullSData(oldp+349,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [1U], 0x20U, 0x10U))),16);
    bufp->fullSData(oldp+350,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [1U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+351,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [1U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+352,((1U & VL_BITSEL_IWII(81, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [2U], 0x50U))));
    bufp->fullIData(oldp+353,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [2U], 0x30U, 0x20U)),32);
    bufp->fullSData(oldp+354,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [2U], 0x20U, 0x10U))),16);
    bufp->fullSData(oldp+355,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [2U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+356,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [2U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+357,((1U & VL_BITSEL_IWII(81, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [3U], 0x50U))));
    bufp->fullIData(oldp+358,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [3U], 0x30U, 0x20U)),32);
    bufp->fullSData(oldp+359,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [3U], 0x20U, 0x10U))),16);
    bufp->fullSData(oldp+360,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [3U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+361,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [3U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+362,((1U & VL_BITSEL_IWII(81, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [4U], 0x50U))));
    bufp->fullIData(oldp+363,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [4U], 0x30U, 0x20U)),32);
    bufp->fullSData(oldp+364,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [4U], 0x20U, 0x10U))),16);
    bufp->fullSData(oldp+365,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [4U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+366,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [4U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+367,((1U & VL_BITSEL_IWII(81, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [5U], 0x50U))));
    bufp->fullIData(oldp+368,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [5U], 0x30U, 0x20U)),32);
    bufp->fullSData(oldp+369,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [5U], 0x20U, 0x10U))),16);
    bufp->fullSData(oldp+370,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [5U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+371,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [5U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+372,((1U & VL_BITSEL_IWII(81, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [6U], 0x50U))));
    bufp->fullIData(oldp+373,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [6U], 0x30U, 0x20U)),32);
    bufp->fullSData(oldp+374,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [6U], 0x20U, 0x10U))),16);
    bufp->fullSData(oldp+375,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [6U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+376,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [6U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+377,((1U & VL_BITSEL_IWII(81, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [7U], 0x50U))));
    bufp->fullIData(oldp+378,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [7U], 0x30U, 0x20U)),32);
    bufp->fullSData(oldp+379,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [7U], 0x20U, 0x10U))),16);
    bufp->fullSData(oldp+380,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [7U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+381,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [7U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+382,((1U & VL_BITSEL_IWII(81, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [8U], 0x50U))));
    bufp->fullIData(oldp+383,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [8U], 0x30U, 0x20U)),32);
    bufp->fullSData(oldp+384,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [8U], 0x20U, 0x10U))),16);
    bufp->fullSData(oldp+385,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [8U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+386,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [8U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+387,((1U & VL_BITSEL_IWII(81, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [9U], 0x50U))));
    bufp->fullIData(oldp+388,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [9U], 0x30U, 0x20U)),32);
    bufp->fullSData(oldp+389,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [9U], 0x20U, 0x10U))),16);
    bufp->fullSData(oldp+390,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [9U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+391,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [9U], 0U, 0x10U))),16);
    bufp->fullIData(oldp+392,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nrcv_next),32);
    bufp->fullBit(oldp+393,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__out_of_order_flg));
    bufp->fullCData(oldp+394,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_ptr),4);
    bufp->fullCData(oldp+395,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nlen_flush_ptr),8);
    bufp->fullIData(oldp+396,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nseq_rx_trk),32);
    bufp->fullCData(oldp+397,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__bytes_drop),8);
    bufp->fullCData(oldp+398,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__bytes_left),8);
    bufp->fullCData(oldp+399,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0U, 4U))),4);
    bufp->fullCData(oldp+400,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 4U, 4U))),4);
    bufp->fullCData(oldp+401,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 8U, 4U))),4);
    bufp->fullCData(oldp+402,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0xcU, 4U))),4);
    bufp->fullCData(oldp+403,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0x10U, 4U))),4);
    bufp->fullCData(oldp+404,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0x14U, 4U))),4);
    bufp->fullCData(oldp+405,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0x18U, 4U))),4);
    bufp->fullCData(oldp+406,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0x1cU, 4U))),4);
    bufp->fullCData(oldp+407,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0x20U, 4U))),4);
    bufp->fullCData(oldp+408,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0x24U, 4U))),4);
    bufp->fullIData(oldp+409,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+410,(vlSymsp->TOP__top__u_tcp.__PVT__ISN_num),32);
    bufp->fullIData(oldp+411,(vlSymsp->TOP__top__u_tcp__ISN_gen.__PVT__ISN_num),32);
    bufp->fullIData(oldp+412,(vlSymsp->TOP__top__u_tcp__ISN_gen.__PVT__counter),32);
    bufp->fullBit(oldp+413,(vlSymsp->TOP__top.axis_r_valid));
    bufp->fullQData(oldp+414,(vlSymsp->TOP__top.axis_rd_data),64);
    bufp->fullCData(oldp+416,(vlSymsp->TOP__top.__PVT__wr_ptr_out_int),4);
    bufp->fullCData(oldp+417,(vlSymsp->TOP__top.__PVT__wr_pfifo_len_int),4);
    bufp->fullBit(oldp+418,(vlSymsp->TOP__top.__PVT__rd_pfifo_en_int));
    bufp->fullIData(oldp+419,(vlSymsp->TOP__top.__PVT__seq_rx_FIFO_rd_int),32);
    bufp->fullBit(oldp+420,(vlSymsp->TOP__top.__PVT__full));
    bufp->fullCData(oldp+421,(vlSymsp->TOP__top__u_payload_fifo.__PVT__wr_ptr_out),4);
    bufp->fullCData(oldp+422,(vlSymsp->TOP__top__u_payload_fifo.__PVT__wr_FIFO_len),4);
    bufp->fullBit(oldp+423,(vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_FIFO_en));
    bufp->fullIData(oldp+424,(vlSymsp->TOP__top__u_payload_fifo.__PVT__seq_rx_FIFO_rd),32);
    bufp->fullBit(oldp+425,(vlSymsp->TOP__top__u_payload_fifo.__PVT__full));
    bufp->fullBit(oldp+426,(vlSymsp->TOP__top__u_payload_fifo.__PVT__axis_r_valid));
    bufp->fullQData(oldp+427,(vlSymsp->TOP__top__u_payload_fifo.__PVT__axis_rd_data),64);
    bufp->fullQData(oldp+429,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                          [0U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+431,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                   [0U], 0U, 8U))),8);
    bufp->fullQData(oldp+432,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                          [1U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+434,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                   [1U], 0U, 8U))),8);
    bufp->fullQData(oldp+435,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                          [2U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+437,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                   [2U], 0U, 8U))),8);
    bufp->fullQData(oldp+438,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                          [3U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+440,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                   [3U], 0U, 8U))),8);
    bufp->fullQData(oldp+441,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                          [4U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+443,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                   [4U], 0U, 8U))),8);
    bufp->fullQData(oldp+444,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                          [5U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+446,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                   [5U], 0U, 8U))),8);
    bufp->fullQData(oldp+447,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                          [6U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+449,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                   [6U], 0U, 8U))),8);
    bufp->fullQData(oldp+450,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                          [7U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+452,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                   [7U], 0U, 8U))),8);
    bufp->fullQData(oldp+453,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                          [8U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+455,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                   [8U], 0U, 8U))),8);
    bufp->fullQData(oldp+456,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                          [9U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+458,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                   [9U], 0U, 8U))),8);
    bufp->fullQData(oldp+459,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__fifo_entry_rd, 8U, 0x40U)),64);
    bufp->fullCData(oldp+461,((0xffU & VL_SEL_IWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__fifo_entry_rd, 0U, 8U))),8);
    bufp->fullCData(oldp+462,(vlSymsp->TOP__top__u_payload_fifo.__PVT__flush_ptr),4);
    bufp->fullCData(oldp+463,(vlSymsp->TOP__top__u_payload_fifo.__PVT__len_TCP_flush),4);
    bufp->fullCData(oldp+464,(vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_len_ptr),4);
    bufp->fullIData(oldp+465,(vlSymsp->TOP__top__u_payload_fifo.__PVT__seq_trk_rd),32);
    bufp->fullBit(oldp+466,(vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_flush_l));
    bufp->fullQData(oldp+467,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload1),64);
    bufp->fullQData(oldp+469,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload2),64);
    bufp->fullQData(oldp+471,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload3),64);
    bufp->fullQData(oldp+473,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload4),64);
    bufp->fullQData(oldp+475,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload5),64);
    bufp->fullCData(oldp+477,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset1),8);
    bufp->fullCData(oldp+478,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset2),8);
    bufp->fullCData(oldp+479,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset3),8);
    bufp->fullCData(oldp+480,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset4),8);
    bufp->fullCData(oldp+481,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset5),8);
    bufp->fullCData(oldp+482,(vlSymsp->TOP__top__u_payload_fifo.__PVT__wr_ptr),4);
    bufp->fullCData(oldp+483,(vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_ptr),4);
    bufp->fullIData(oldp+484,(vlSymsp->TOP__top__u_payload_fifo.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+485,(vlSymsp->TOP__top__u_tcp.__PVT__wr_ptr_out),4);
    bufp->fullCData(oldp+486,(vlSymsp->TOP__top__u_tcp.__PVT__wr_FIFO_len),4);
    bufp->fullBit(oldp+487,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_en_rcv));
    bufp->fullIData(oldp+488,(vlSymsp->TOP__top__u_tcp.__PVT__seq_rx_FIFO_rd),32);
    bufp->fullBit(oldp+489,(vlSymsp->TOP__top__u_tcp.__PVT__full));
    bufp->fullBit(oldp+490,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__full));
    bufp->fullIData(oldp+491,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_rx_FIFO_rd),32);
    bufp->fullCData(oldp+492,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__wr_FIFO_len),8);
    bufp->fullBit(oldp+493,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rd_FIFO_en));
    bufp->fullIData(oldp+494,(vlSymsp->TOP__top.rcv_next),32);
    bufp->fullIData(oldp+495,(vlSymsp->TOP__top.seq_num),32);
    bufp->fullBit(oldp+496,(vlSymsp->TOP__top.__PVT__handshake_done_int));
    bufp->fullBit(oldp+497,(vlSymsp->TOP__top__u_fifo_tx.__PVT__hand_shake_done));
    bufp->fullBit(oldp+498,(vlSymsp->TOP__top__u_payload_fifo.__PVT__handshake_done));
    bufp->fullBit(oldp+499,(vlSymsp->TOP__top__u_tcp.__PVT__handshake_done));
    bufp->fullIData(oldp+500,(vlSymsp->TOP__top__u_tcp.__PVT__rcv_next),32);
    bufp->fullIData(oldp+501,(vlSymsp->TOP__top__u_tcp.__PVT__seq_num),32);
    bufp->fullBit(oldp+502,(vlSymsp->TOP__top__u_tcp.__PVT__seq_rcv_str));
    bufp->fullBit(oldp+503,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__hand_shake_done));
    bufp->fullIData(oldp+504,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_rcv_str),32);
    bufp->fullIData(oldp+505,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_next_out),32);
    bufp->fullIData(oldp+506,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_num_out),32);
    bufp->fullCData(oldp+507,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__state),7);
    bufp->fullCData(oldp+508,((7U & VL_SEL_IQII(35, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ack_num, 0x20U, 3U))),3);
    bufp->fullIData(oldp+509,(VL_SEL_IQII(35, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ack_num, 0U, 0x20U)),32);
    bufp->fullBit(oldp+510,((1U & VL_BITSEL_IQII(33, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_num, 0x20U))));
    bufp->fullIData(oldp+511,(VL_SEL_IQII(33, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_num, 0U, 0x20U)),32);
    bufp->fullSData(oldp+512,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__window_size),16);
    bufp->fullBit(oldp+513,((1U & VL_BITSEL_IWII(81, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                 [0U], 0x50U))));
    bufp->fullIData(oldp+514,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                          [0U], 0x30U, 0x20U)),32);
    bufp->fullSData(oldp+515,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [0U], 0x20U, 0x10U))),16);
    bufp->fullSData(oldp+516,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [0U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+517,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [0U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+518,((1U & VL_BITSEL_IWII(81, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                 [1U], 0x50U))));
    bufp->fullIData(oldp+519,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                          [1U], 0x30U, 0x20U)),32);
    bufp->fullSData(oldp+520,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [1U], 0x20U, 0x10U))),16);
    bufp->fullSData(oldp+521,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [1U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+522,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [1U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+523,((1U & VL_BITSEL_IWII(81, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                 [2U], 0x50U))));
    bufp->fullIData(oldp+524,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                          [2U], 0x30U, 0x20U)),32);
    bufp->fullSData(oldp+525,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [2U], 0x20U, 0x10U))),16);
    bufp->fullSData(oldp+526,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [2U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+527,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [2U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+528,((1U & VL_BITSEL_IWII(81, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                 [3U], 0x50U))));
    bufp->fullIData(oldp+529,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                          [3U], 0x30U, 0x20U)),32);
    bufp->fullSData(oldp+530,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [3U], 0x20U, 0x10U))),16);
    bufp->fullSData(oldp+531,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [3U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+532,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [3U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+533,((1U & VL_BITSEL_IWII(81, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                 [4U], 0x50U))));
    bufp->fullIData(oldp+534,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                          [4U], 0x30U, 0x20U)),32);
    bufp->fullSData(oldp+535,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [4U], 0x20U, 0x10U))),16);
    bufp->fullSData(oldp+536,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [4U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+537,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [4U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+538,((1U & VL_BITSEL_IWII(81, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                 [5U], 0x50U))));
    bufp->fullIData(oldp+539,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                          [5U], 0x30U, 0x20U)),32);
    bufp->fullSData(oldp+540,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [5U], 0x20U, 0x10U))),16);
    bufp->fullSData(oldp+541,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [5U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+542,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [5U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+543,((1U & VL_BITSEL_IWII(81, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                 [6U], 0x50U))));
    bufp->fullIData(oldp+544,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                          [6U], 0x30U, 0x20U)),32);
    bufp->fullSData(oldp+545,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [6U], 0x20U, 0x10U))),16);
    bufp->fullSData(oldp+546,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [6U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+547,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [6U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+548,((1U & VL_BITSEL_IWII(81, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                 [7U], 0x50U))));
    bufp->fullIData(oldp+549,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                          [7U], 0x30U, 0x20U)),32);
    bufp->fullSData(oldp+550,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [7U], 0x20U, 0x10U))),16);
    bufp->fullSData(oldp+551,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [7U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+552,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [7U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+553,((1U & VL_BITSEL_IWII(81, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                 [8U], 0x50U))));
    bufp->fullIData(oldp+554,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                          [8U], 0x30U, 0x20U)),32);
    bufp->fullSData(oldp+555,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [8U], 0x20U, 0x10U))),16);
    bufp->fullSData(oldp+556,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [8U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+557,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [8U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+558,((1U & VL_BITSEL_IWII(81, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                 [9U], 0x50U))));
    bufp->fullIData(oldp+559,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                          [9U], 0x30U, 0x20U)),32);
    bufp->fullSData(oldp+560,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [9U], 0x20U, 0x10U))),16);
    bufp->fullSData(oldp+561,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [9U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+562,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [9U], 0U, 0x10U))),16);
    bufp->fullIData(oldp+563,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_next),32);
    bufp->fullCData(oldp+564,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__free_idx),4);
    bufp->fullCData(oldp+565,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__match_idx),4);
    bufp->fullSData(oldp+566,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__v_vec),10);
    bufp->fullSData(oldp+567,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__free_vec),10);
    bufp->fullBit(oldp+568,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__free_mask));
    bufp->fullBit(oldp+569,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__match_found));
    bufp->fullSData(oldp+570,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__match_mask),10);
    bufp->fullCData(oldp+571,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_ptr),4);
    bufp->fullCData(oldp+572,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__len_flush_ptr),4);
    bufp->fullIData(oldp+573,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_rx_trk),32);
    bufp->fullCData(oldp+574,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0U, 4U))),4);
    bufp->fullCData(oldp+575,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 4U, 4U))),4);
    bufp->fullCData(oldp+576,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 8U, 4U))),4);
    bufp->fullCData(oldp+577,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0xcU, 4U))),4);
    bufp->fullCData(oldp+578,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0x10U, 4U))),4);
    bufp->fullCData(oldp+579,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0x14U, 4U))),4);
    bufp->fullCData(oldp+580,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0x18U, 4U))),4);
    bufp->fullCData(oldp+581,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0x1cU, 4U))),4);
    bufp->fullCData(oldp+582,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0x20U, 4U))),4);
    bufp->fullCData(oldp+583,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0x24U, 4U))),4);
    bufp->fullIData(oldp+584,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__unnamedblk1__DOT__x),32);
    bufp->fullIData(oldp+585,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__unnamedblk2__DOT__x),32);
    bufp->fullSData(oldp+586,(vlSymsp->TOP__top__u_tcp__tcp_flow__me.__PVT__din),10);
    bufp->fullBit(oldp+587,(vlSymsp->TOP__top__u_tcp__tcp_flow__me.__PVT__valid));
    bufp->fullCData(oldp+588,(vlSymsp->TOP__top__u_tcp__tcp_flow__me.__PVT__idx),4);
    bufp->fullIData(oldp+589,(vlSymsp->TOP__top__u_tcp__tcp_flow__me.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullSData(oldp+590,(vlSymsp->TOP__top__u_tcp__tcp_flow__pe.__PVT__din),10);
    bufp->fullBit(oldp+591,(vlSymsp->TOP__top__u_tcp__tcp_flow__pe.__PVT__valid));
    bufp->fullCData(oldp+592,(vlSymsp->TOP__top__u_tcp__tcp_flow__pe.__PVT__idx),4);
    bufp->fullIData(oldp+593,(vlSymsp->TOP__top__u_tcp__tcp_flow__pe.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullSData(oldp+594,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_checksum_out),16);
    bufp->fullSData(oldp+595,(vlSymsp->TOP__top__u_tcp__inst.__PVT__TCP_checksum_out),16);
    bufp->fullIData(oldp+596,(vlSymsp->TOP__top__u_tcp__inst.__PVT__TCP_checksum),17);
    bufp->fullIData(oldp+597,(vlSymsp->TOP__top__u_tcp__inst.__PVT__TCP_checksum_send),17);
    bufp->fullQData(oldp+598,(vlSymsp->TOP__top.__PVT__rd_ftx_payload_int),64);
    bufp->fullBit(oldp+600,(vlSymsp->TOP__top.__PVT__rd_ftx_valid_int));
    bufp->fullBit(oldp+601,(vlSymsp->TOP__top.__PVT__rd_ftx_last_int));
    bufp->fullSData(oldp+602,(vlSymsp->TOP__top.__PVT__bytes_abt_sent_int),16);
    bufp->fullBit(oldp+603,(vlSymsp->TOP__top.__PVT__re_trans_int));
    bufp->fullBit(oldp+604,(vlSymsp->TOP__top.__PVT__rd_FIFO_valid_tx));
    bufp->fullBit(oldp+605,(vlSymsp->TOP__top.__PVT__rd_FIFO_last));
    bufp->fullQData(oldp+606,(vlSymsp->TOP__top.__PVT__rd_FIFO_payload),64);
    bufp->fullSData(oldp+608,(vlSymsp->TOP__top.__PVT__bytes_abt_sent),16);
    bufp->fullBit(oldp+609,(vlSymsp->TOP__top.__PVT__wr_TX_full));
    bufp->fullBit(oldp+610,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_FIFO_valid));
    bufp->fullBit(oldp+611,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_FIFO_last));
    bufp->fullQData(oldp+612,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_FIFO_payload),64);
    bufp->fullSData(oldp+614,(vlSymsp->TOP__top__u_fifo_tx.__PVT__bytes_abt_sent),16);
    bufp->fullBit(oldp+615,(vlSymsp->TOP__top__u_fifo_tx.__PVT__wr_FIFO_valid));
    bufp->fullBit(oldp+616,(vlSymsp->TOP__top__u_fifo_tx.__PVT__re_trans));
    bufp->fullSData(oldp+617,(vlSymsp->TOP__top__u_fifo_tx.__PVT__bytes_msg_trk),16);
    bufp->fullCData(oldp+618,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ptr_str),4);
    bufp->fullCData(oldp+619,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ptr_end),4);
    bufp->fullCData(oldp+620,(vlSymsp->TOP__top__u_fifo_tx.__PVT__flush_ptr),4);
    bufp->fullSData(oldp+621,(vlSymsp->TOP__top__u_fifo_tx.__PVT__bytes_abt_sent_msg),16);
    bufp->fullCData(oldp+622,(vlSymsp->TOP__top__u_fifo_tx.__PVT__msg_end_ptr),4);
    bufp->fullCData(oldp+623,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_state),2);
    bufp->fullCData(oldp+624,(vlSymsp->TOP__top__u_fifo_tx.__PVT__wr_state),2);
    bufp->fullBit(oldp+625,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x58U))));
    bufp->fullIData(oldp+626,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x38U, 0x20U)),32);
    bufp->fullIData(oldp+627,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x18U, 0x20U)),32);
    bufp->fullSData(oldp+628,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 8U, 0x10U))),16);
    bufp->fullCData(oldp+629,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 4U, 4U))),4);
    bufp->fullCData(oldp+630,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0U, 4U))),4);
    bufp->fullBit(oldp+631,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0xb1U))));
    bufp->fullIData(oldp+632,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x91U, 0x20U)),32);
    bufp->fullIData(oldp+633,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x71U, 0x20U)),32);
    bufp->fullSData(oldp+634,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x61U, 0x10U))),16);
    bufp->fullCData(oldp+635,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x5dU, 4U))),4);
    bufp->fullCData(oldp+636,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x59U, 4U))),4);
    bufp->fullBit(oldp+637,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x10aU))));
    bufp->fullIData(oldp+638,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0xeaU, 0x20U)),32);
    bufp->fullIData(oldp+639,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0xcaU, 0x20U)),32);
    bufp->fullSData(oldp+640,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0xbaU, 0x10U))),16);
    bufp->fullCData(oldp+641,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0xb6U, 4U))),4);
    bufp->fullCData(oldp+642,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0xb2U, 4U))),4);
    bufp->fullBit(oldp+643,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x163U))));
    bufp->fullIData(oldp+644,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x143U, 0x20U)),32);
    bufp->fullIData(oldp+645,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x123U, 0x20U)),32);
    bufp->fullSData(oldp+646,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x113U, 0x10U))),16);
    bufp->fullCData(oldp+647,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x10fU, 4U))),4);
    bufp->fullCData(oldp+648,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x10bU, 4U))),4);
    bufp->fullBit(oldp+649,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x1bcU))));
    bufp->fullIData(oldp+650,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x19cU, 0x20U)),32);
    bufp->fullIData(oldp+651,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x17cU, 0x20U)),32);
    bufp->fullSData(oldp+652,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x16cU, 0x10U))),16);
    bufp->fullCData(oldp+653,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x168U, 4U))),4);
    bufp->fullCData(oldp+654,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x164U, 4U))),4);
    bufp->fullBit(oldp+655,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x215U))));
    bufp->fullIData(oldp+656,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x1f5U, 0x20U)),32);
    bufp->fullIData(oldp+657,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x1d5U, 0x20U)),32);
    bufp->fullSData(oldp+658,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x1c5U, 0x10U))),16);
    bufp->fullCData(oldp+659,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x1c1U, 4U))),4);
    bufp->fullCData(oldp+660,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x1bdU, 4U))),4);
    bufp->fullBit(oldp+661,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x26eU))));
    bufp->fullIData(oldp+662,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x24eU, 0x20U)),32);
    bufp->fullIData(oldp+663,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x22eU, 0x20U)),32);
    bufp->fullSData(oldp+664,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x21eU, 0x10U))),16);
    bufp->fullCData(oldp+665,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x21aU, 4U))),4);
    bufp->fullCData(oldp+666,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x216U, 4U))),4);
    bufp->fullBit(oldp+667,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x2c7U))));
    bufp->fullIData(oldp+668,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x2a7U, 0x20U)),32);
    bufp->fullIData(oldp+669,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x287U, 0x20U)),32);
    bufp->fullSData(oldp+670,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x277U, 0x10U))),16);
    bufp->fullCData(oldp+671,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x273U, 4U))),4);
    bufp->fullCData(oldp+672,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x26fU, 4U))),4);
    bufp->fullBit(oldp+673,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x320U))));
    bufp->fullIData(oldp+674,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x300U, 0x20U)),32);
    bufp->fullIData(oldp+675,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x2e0U, 0x20U)),32);
    bufp->fullSData(oldp+676,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x2d0U, 0x10U))),16);
    bufp->fullCData(oldp+677,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x2ccU, 4U))),4);
    bufp->fullCData(oldp+678,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x2c8U, 4U))),4);
    bufp->fullBit(oldp+679,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x379U))));
    bufp->fullIData(oldp+680,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x359U, 0x20U)),32);
    bufp->fullIData(oldp+681,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x339U, 0x20U)),32);
    bufp->fullSData(oldp+682,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x329U, 0x10U))),16);
    bufp->fullCData(oldp+683,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x325U, 4U))),4);
    bufp->fullCData(oldp+684,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x321U, 4U))),4);
    bufp->fullBit(oldp+685,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x3d2U))));
    bufp->fullIData(oldp+686,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x3b2U, 0x20U)),32);
    bufp->fullIData(oldp+687,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x392U, 0x20U)),32);
    bufp->fullSData(oldp+688,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x382U, 0x10U))),16);
    bufp->fullCData(oldp+689,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x37eU, 4U))),4);
    bufp->fullCData(oldp+690,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x37aU, 4U))),4);
    bufp->fullBit(oldp+691,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x42bU))));
    bufp->fullIData(oldp+692,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x40bU, 0x20U)),32);
    bufp->fullIData(oldp+693,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x3ebU, 0x20U)),32);
    bufp->fullSData(oldp+694,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x3dbU, 0x10U))),16);
    bufp->fullCData(oldp+695,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x3d7U, 4U))),4);
    bufp->fullCData(oldp+696,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x3d3U, 4U))),4);
    bufp->fullBit(oldp+697,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x484U))));
    bufp->fullIData(oldp+698,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x464U, 0x20U)),32);
    bufp->fullIData(oldp+699,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x444U, 0x20U)),32);
    bufp->fullSData(oldp+700,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x434U, 0x10U))),16);
    bufp->fullCData(oldp+701,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x430U, 4U))),4);
    bufp->fullCData(oldp+702,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x42cU, 4U))),4);
    bufp->fullBit(oldp+703,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x4ddU))));
    bufp->fullIData(oldp+704,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x4bdU, 0x20U)),32);
    bufp->fullIData(oldp+705,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x49dU, 0x20U)),32);
    bufp->fullSData(oldp+706,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x48dU, 0x10U))),16);
    bufp->fullCData(oldp+707,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x489U, 4U))),4);
    bufp->fullCData(oldp+708,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x485U, 4U))),4);
    bufp->fullBit(oldp+709,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x536U))));
    bufp->fullIData(oldp+710,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x516U, 0x20U)),32);
    bufp->fullIData(oldp+711,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x4f6U, 0x20U)),32);
    bufp->fullSData(oldp+712,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x4e6U, 0x10U))),16);
    bufp->fullCData(oldp+713,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x4e2U, 4U))),4);
    bufp->fullCData(oldp+714,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x4deU, 4U))),4);
    bufp->fullBit(oldp+715,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x58fU))));
    bufp->fullIData(oldp+716,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x56fU, 0x20U)),32);
    bufp->fullIData(oldp+717,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x54fU, 0x20U)),32);
    bufp->fullSData(oldp+718,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x53fU, 0x10U))),16);
    bufp->fullCData(oldp+719,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x53bU, 4U))),4);
    bufp->fullCData(oldp+720,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x537U, 4U))),4);
    bufp->fullBit(oldp+721,(vlSymsp->TOP__top__u_fifo_tx.__PVT__full));
    bufp->fullBit(oldp+722,(vlSymsp->TOP__top__u_fifo_tx.__PVT__empty));
    bufp->fullCData(oldp+723,(vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_wrt_ptr),4);
    bufp->fullCData(oldp+724,(vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_rd_ptr),4);
    bufp->fullCData(oldp+725,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_ptr),4);
    bufp->fullCData(oldp+726,(vlSymsp->TOP__top__u_fifo_tx.__PVT__wrt_ptr),4);
    bufp->fullQData(oldp+727,(VL_SEL_QWII(640, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0U, 0x40U)),64);
    bufp->fullQData(oldp+729,(VL_SEL_QWII(640, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x40U, 0x40U)),64);
    bufp->fullQData(oldp+731,(VL_SEL_QWII(640, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x80U, 0x40U)),64);
    bufp->fullQData(oldp+733,(VL_SEL_QWII(640, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0xc0U, 0x40U)),64);
    bufp->fullQData(oldp+735,(VL_SEL_QWII(640, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x100U, 0x40U)),64);
    bufp->fullQData(oldp+737,(VL_SEL_QWII(640, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x140U, 0x40U)),64);
    bufp->fullQData(oldp+739,(VL_SEL_QWII(640, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x180U, 0x40U)),64);
    bufp->fullQData(oldp+741,(VL_SEL_QWII(640, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x1c0U, 0x40U)),64);
    bufp->fullQData(oldp+743,(VL_SEL_QWII(640, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x200U, 0x40U)),64);
    bufp->fullQData(oldp+745,(VL_SEL_QWII(640, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x240U, 0x40U)),64);
    bufp->fullBit(oldp+747,(vlSymsp->TOP__top__u_fifo_tx.__PVT__out_order_req_l));
    bufp->fullBit(oldp+748,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ACK_rcv_flag_l));
    bufp->fullIData(oldp+749,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ACK_num_l),32);
    bufp->fullBit(oldp+750,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_upd));
    bufp->fullSData(oldp+751,(vlSymsp->TOP__top__u_fifo_tx.__PVT__bytes_abt_sent_msg_rd),16);
    bufp->fullSData(oldp+752,(vlSymsp->TOP__top__u_fifo_tx.__PVT__checksum_l),16);
    bufp->fullQData(oldp+753,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_payload),64);
    bufp->fullBit(oldp+755,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_valid_tx));
    bufp->fullBit(oldp+756,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_last));
    bufp->fullSData(oldp+757,(vlSymsp->TOP__top__u_tcp.__PVT__bytes_abt_sent),16);
    bufp->fullBit(oldp+758,(vlSymsp->TOP__top__u_tcp.__PVT__re_trans));
    bufp->fullBit(oldp+759,(vlSymsp->TOP__top__u_tcp__inst.__PVT__re_trans));
    bufp->fullBit(oldp+760,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__rd_FIFO_valid));
    bufp->fullBit(oldp+761,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__rd_FIFO_last));
    bufp->fullQData(oldp+762,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__rd_FIFO_payload),64);
    bufp->fullIData(oldp+764,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__bytes_abt_sent),32);
    bufp->fullIData(oldp+765,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__bytes_abt_sent),32);
    bufp->fullQData(oldp+766,(vlSymsp->TOP__top.TCP_transmit),64);
    bufp->fullBit(oldp+768,(vlSymsp->TOP__top.TCP_last));
    bufp->fullBit(oldp+769,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_last));
    bufp->fullQData(oldp+770,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_transmit),64);
    bufp->fullBit(oldp+772,(vlSymsp->TOP__top__u_tcp.__PVT__seq_up));
    bufp->fullIData(oldp+773,(vlSymsp->TOP__top__u_tcp.__PVT__bytes_sent),32);
    bufp->fullBit(oldp+774,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__seq_up));
    bufp->fullIData(oldp+775,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__bytes_sent),32);
    bufp->fullBit(oldp+776,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_tx_valid));
    bufp->fullBit(oldp+777,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_tx_last));
    bufp->fullQData(oldp+778,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_transmit),64);
    bufp->fullIData(oldp+780,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_checksum),17);
    bufp->fullCData(oldp+781,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__state),7);
    bufp->fullBit(oldp+782,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_up));
    bufp->fullIData(oldp+783,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__bytes_sent),32);
    bufp->fullBit(oldp+784,(vlSymsp->TOP__top.__PVT__nw_segment));
    bufp->fullBit(oldp+785,(vlSymsp->TOP__top.__PVT__axis_t_last_int));
    bufp->fullQData(oldp+786,(vlSymsp->TOP__top.__PVT__axis_data_rx_int),64);
    bufp->fullIData(oldp+788,(vlSymsp->TOP__top.__PVT__ACK_num_int),32);
    bufp->fullBit(oldp+789,(vlSymsp->TOP__top.__PVT__ACK_rcv_flag_int));
    bufp->fullIData(oldp+790,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ACK_num),32);
    bufp->fullBit(oldp+791,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ACK_rcv_flag));
    bufp->fullBit(oldp+792,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nw_segment));
    bufp->fullBit(oldp+793,(vlSymsp->TOP__top__u_payload_fifo.__PVT__axis_t_last));
    bufp->fullQData(oldp+794,(vlSymsp->TOP__top__u_payload_fifo.__PVT__axis_data_rx),64);
    bufp->fullBit(oldp+796,(vlSymsp->TOP__top__u_tcp.__PVT__nw_segment));
    bufp->fullBit(oldp+797,(vlSymsp->TOP__top__u_tcp.__PVT__axis_t_last));
    bufp->fullQData(oldp+798,(vlSymsp->TOP__top__u_tcp.__PVT__axis_data_rx),64);
    bufp->fullIData(oldp+800,(vlSymsp->TOP__top__u_tcp.__PVT__ACK_num),32);
    bufp->fullBit(oldp+801,(vlSymsp->TOP__top__u_tcp.__PVT__ACK_rcv_flag));
    bufp->fullBit(oldp+802,(vlSymsp->TOP__top__u_tcp.__PVT__rcv_data));
    bufp->fullCData(oldp+803,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_control_rx),8);
    bufp->fullIData(oldp+804,(vlSymsp->TOP__top__u_tcp.__PVT__seq_num_rx),32);
    bufp->fullIData(oldp+805,(vlSymsp->TOP__top__u_tcp.__PVT__ACK_rx),32);
    bufp->fullCData(oldp+806,(vlSymsp->TOP__top__u_tcp.__PVT__offset_rx),4);
    bufp->fullSData(oldp+807,(vlSymsp->TOP__top__u_tcp.__PVT__window_size_rx),16);
    bufp->fullSData(oldp+808,(vlSymsp->TOP__top__u_tcp.__PVT__checksum_rx),16);
    bufp->fullSData(oldp+809,(vlSymsp->TOP__top__u_tcp.__PVT__urgent_pointer_rx),16);
    bufp->fullSData(oldp+810,(vlSymsp->TOP__top__u_tcp.__PVT__payload_len_rx),16);
    bufp->fullBit(oldp+811,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_valid));
    bufp->fullBit(oldp+812,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__rcv_data));
    bufp->fullCData(oldp+813,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_control_rx),8);
    bufp->fullIData(oldp+814,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__seq_num_rx),32);
    bufp->fullIData(oldp+815,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__ACK_rx),32);
    bufp->fullCData(oldp+816,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__offset_rx),4);
    bufp->fullSData(oldp+817,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__window_size_rx),16);
    bufp->fullSData(oldp+818,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__checksum_rx),16);
    bufp->fullSData(oldp+819,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__urgent_pointer_rx),16);
    bufp->fullSData(oldp+820,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_len_data),16);
    bufp->fullQData(oldp+821,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_payload_rx),64);
    bufp->fullBit(oldp+823,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_valid));
    bufp->fullBit(oldp+824,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nw_segment));
    bufp->fullBit(oldp+825,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_last));
    bufp->fullSData(oldp+826,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__bytes_trk),16);
    bufp->fullIData(oldp+827,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_checksum),17);
    bufp->fullCData(oldp+828,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__state),3);
    bufp->fullBit(oldp+829,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_data));
    bufp->fullCData(oldp+830,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_control_rx),8);
    bufp->fullIData(oldp+831,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_num_rx),32);
    bufp->fullIData(oldp+832,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ACK_rx),32);
    bufp->fullCData(oldp+833,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__offset_rx),4);
    bufp->fullSData(oldp+834,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__window_size_rx),16);
    bufp->fullSData(oldp+835,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__checksum_rx),16);
    bufp->fullSData(oldp+836,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__urgent_pointer_rx),16);
    bufp->fullIData(oldp+837,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__payload_len_rx),32);
    bufp->fullBit(oldp+838,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_last));
    bufp->fullBit(oldp+839,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nw_segment));
    bufp->fullIData(oldp+840,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ACK_num),32);
    bufp->fullBit(oldp+841,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ACK_rcv_flag));
    bufp->fullBit(oldp+842,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 7U))));
    bufp->fullBit(oldp+843,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 6U))));
    bufp->fullBit(oldp+844,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 5U))));
    bufp->fullBit(oldp+845,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 4U))));
    bufp->fullBit(oldp+846,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 3U))));
    bufp->fullBit(oldp+847,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 2U))));
    bufp->fullBit(oldp+848,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 1U))));
    bufp->fullBit(oldp+849,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 0U))));
    bufp->fullCData(oldp+850,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_control_tx),8);
    bufp->fullIData(oldp+851,(vlSymsp->TOP__top__u_tcp.__PVT__seq_num_tx),32);
    bufp->fullIData(oldp+852,(vlSymsp->TOP__top__u_tcp.__PVT__ACK_tx),32);
    bufp->fullCData(oldp+853,(vlSymsp->TOP__top__u_tcp.__PVT__offset_tx),4);
    bufp->fullSData(oldp+854,(vlSymsp->TOP__top__u_tcp.__PVT__window_size_tx),16);
    bufp->fullSData(oldp+855,(vlSymsp->TOP__top__u_tcp.__PVT__urgent_pointer_tx),16);
    bufp->fullCData(oldp+856,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_control_tx),8);
    bufp->fullIData(oldp+857,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__seq_num_tx),32);
    bufp->fullIData(oldp+858,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__ACK_tx),32);
    bufp->fullCData(oldp+859,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__offset_tx),4);
    bufp->fullSData(oldp+860,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__window_size_tx),16);
    bufp->fullSData(oldp+861,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__urgent_pointer_tx),16);
    bufp->fullCData(oldp+862,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_control_tx),8);
    bufp->fullIData(oldp+863,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_num_tx),32);
    bufp->fullIData(oldp+864,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ACK_tx),32);
    bufp->fullCData(oldp+865,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__offset_tx),4);
    bufp->fullSData(oldp+866,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__window_size_tx),16);
    bufp->fullSData(oldp+867,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__urgent_pointer_tx),16);
    bufp->fullBit(oldp+868,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 7U))));
    bufp->fullBit(oldp+869,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 6U))));
    bufp->fullBit(oldp+870,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 5U))));
    bufp->fullBit(oldp+871,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 4U))));
    bufp->fullBit(oldp+872,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 3U))));
    bufp->fullBit(oldp+873,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 2U))));
    bufp->fullBit(oldp+874,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 1U))));
    bufp->fullBit(oldp+875,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 0U))));
    bufp->fullBit(oldp+876,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nhand_shake_done));
    bufp->fullBit(oldp+877,(vlSelfRef.CLK));
    bufp->fullBit(oldp+878,(vlSelfRef.nRST));
    bufp->fullBit(oldp+879,(vlSelfRef.IP_valid));
    bufp->fullBit(oldp+880,(vlSelfRef.IP_flush));
    bufp->fullSData(oldp+881,(vlSelfRef.IP_pseuder),16);
    bufp->fullQData(oldp+882,(vlSelfRef.IP_payload),64);
    bufp->fullSData(oldp+884,(vlSelfRef.TCP_len),16);
    bufp->fullCData(oldp+885,(vlSelfRef.IP_bytes_rcv),8);
    bufp->fullBit(oldp+886,(vlSelfRef.TCP_send));
    bufp->fullQData(oldp+887,(vlSelfRef.TCP_transmit),64);
    bufp->fullBit(oldp+889,(vlSelfRef.TCP_last));
    bufp->fullBit(oldp+890,(vlSelfRef.TX_en));
    bufp->fullBit(oldp+891,(vlSelfRef.axis_last));
    bufp->fullBit(oldp+892,(vlSelfRef.wr_FIFO_en));
    bufp->fullIData(oldp+893,(vlSelfRef.len_seq),32);
    bufp->fullQData(oldp+894,(vlSelfRef.soupbin_TCP_payload),64);
    bufp->fullBit(oldp+896,(vlSelfRef.axis_r_en));
    bufp->fullBit(oldp+897,(vlSelfRef.axis_r_valid));
    bufp->fullQData(oldp+898,(vlSelfRef.axis_rd_data),64);
    bufp->fullBit(oldp+900,(vlSelfRef.TCP_stop_flag));
    bufp->fullIData(oldp+901,(vlSelfRef.rcv_next),32);
    bufp->fullIData(oldp+902,(vlSelfRef.seq_num),32);
    bufp->fullBit(oldp+903,(vlSelfRef.wr_FIFO_full));
    bufp->fullSData(oldp+904,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_basesum_payload),16);
    bufp->fullBit(oldp+905,(vlSymsp->TOP__top__u_tcp__inst.__PVT__up_send));
    bufp->fullSData(oldp+906,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_basesum_payload),16);
    bufp->fullIData(oldp+907,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nTCP_checksum),17);
    bufp->fullIData(oldp+908,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ISN_num),32);
    bufp->fullIData(oldp+909,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__bytes_in_flight),32);
    bufp->fullIData(oldp+910,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__wnd_allow),32);
    bufp->fullSData(oldp+911,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__overlap_mask),10);
    bufp->fullBit(oldp+912,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__debug));
}
