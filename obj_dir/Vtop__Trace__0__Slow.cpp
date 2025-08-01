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
    tracep->declBit(c+1021,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1022,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1023,0,"tb_count",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1024,0,"IP_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1025,0,"IP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1026,0,"IP_pseuder",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+1027,0,"IP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1029,0,"TCP_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1030,0,"IP_bytes_rcv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1031,0,"TCP_send",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1032,0,"TCP_transmit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1034,0,"TCP_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1035,0,"TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1036,0,"axis_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1037,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1038,0,"len_seq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+1039,0,"soupbin_TCP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1041,0,"axis_r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1042,0,"axis_r_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1043,0,"axis_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1045,0,"TCP_stop_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1046,0,"rcv_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1047,0,"seq_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1048,0,"wr_FIFO_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
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
    tracep->declBus(c+1057,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1058,0,"FIFO_DEPTH_TX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1058,0,"FIFO_DEPTH_RX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1059,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+13,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"tb_count",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+16,0,"IP_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"IP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"IP_pseuder",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+19,0,"IP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+21,0,"TCP_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+22,0,"IP_bytes_rcv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+23,0,"TCP_send",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+881,0,"TCP_transmit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+883,0,"TCP_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"axis_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"len_seq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+28,0,"soupbin_TCP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+30,0,"axis_r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+443,0,"axis_r_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+444,0,"axis_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+123,0,"TCP_stop_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+578,0,"rcv_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+579,0,"seq_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1060,0,"wr_FIFO_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1061,0,"FIFO_WIDTH_TX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1061,0,"FIFO_WIDTH_RX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+899,0,"nw_segment",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+900,0,"axis_t_last_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"TCP_flush_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+901,0,"axis_data_rx_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+580,0,"handshake_done_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+581,0,"seq_rcv_start_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+124,0,"wr_pfifo_en_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+125,0,"wr_pfifo_offset_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+446,0,"wr_ptr_out_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+447,0,"wr_pfifo_len_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+126,0,"rd_pfifo_valid_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+127,0,"rd_pfifo_ptr_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+128,0,"rd_pfifo_len_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+448,0,"rd_pfifo_en_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+449,0,"seq_rx_FIFO_rd_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+111,0,"rd_ftx_en_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+701,0,"rd_ftx_payload_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+703,0,"rd_ftx_valid_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+704,0,"rd_ftx_last_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+705,0,"bytes_abt_sent_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+903,0,"ACK_num_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+904,0,"ACK_rcv_flag_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+582,0,"out_order_req_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"TCP_stop_flg_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"end_ss_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+706,0,"re_trans_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"checksum_re_trans_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1062,0,"seq_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+973,0,"seq_num_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+968,0,"checksum_TX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+450,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+707,0,"rd_FIFO_valid_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+708,0,"rd_FIFO_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+709,0,"rd_FIFO_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+711,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("u_tcp", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__top__u_tcp__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("u_payload_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__top__u_payload_fifo__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("u_fifo_tx", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__top__u_fifo_tx__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+712,0,"wr_TX_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_payload_fifo__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__u_payload_fifo__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1058,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1057,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1059,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1059,0,"WORD_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1061,0,"FIFO_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1063,0,"WINDOW_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+31,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+905,0,"nw_segment",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"TCP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+906,0,"axis_t_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+907,0,"axis_data_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+583,0,"handshake_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+584,0,"seq_rcv_start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+130,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+131,0,"wr_FIFO_offset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+451,0,"wr_ptr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+452,0,"wr_FIFO_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+132,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"rd_FIFO_ptr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+134,0,"rd_FIFO_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+453,0,"rd_FIFO_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+454,0,"seq_rx_FIFO_rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+455,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"axis_r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+456,0,"axis_r_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+457,0,"axis_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("TCP_FIFO", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+459,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+461,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+462,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+464,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+465,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+467,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+468,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+470,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+471,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+473,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+474,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+476,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+477,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+479,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+480,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+482,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+483,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+485,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+486,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+488,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+489,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+491,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+492,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+494,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+495,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+497,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+498,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+500,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+501,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+503,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+504,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+506,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("nTCP_FIFO", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+135,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+137,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+138,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+140,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+141,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+143,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+144,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+146,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+147,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+149,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+150,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+152,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+153,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+155,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+156,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+158,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+159,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+161,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+162,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+164,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+165,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+167,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+168,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+170,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+171,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+173,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+174,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+176,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+177,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+179,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+180,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+182,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fifo_entry_rd", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+507,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+509,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->declBus(c+510,0,"flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+183,0,"nflush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+511,0,"len_TCP_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1064,0,"nlen_TCP_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+512,0,"rd_len_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+184,0,"nrd_len_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+513,0,"seq_trk_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+185,0,"nseq_trk_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+514,0,"bytes_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+515,0,"rd_FIFO_valid_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"nrd_FIFO_valid_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"naxis_r_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+516,0,"TCP_flush_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"nTCP_flush_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("payload", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+517+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("bytes_offset", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+549+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+565,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+189,0,"nwr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+566,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+190,0,"nrd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+567,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_flow__0(Vtop___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_rcv__0(Vtop___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_tcp__TCP_tx__0(Vtop___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_tcp__ISN_gen__0(Vtop___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_tcp__timeout_fl__0(Vtop___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_tcp__inst__0(Vtop___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_tcp__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__u_tcp__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1065,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1058,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1059,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1059,0,"WORD_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1061,0,"FIFO_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1063,0,"WINDOW_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+34,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+969,0,"checksum_TX",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+37,0,"IP_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"IP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"IP_pseuder",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+40,0,"IP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+42,0,"TCP_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+43,0,"IP_bytes_rcv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+909,0,"nw_segment",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+910,0,"axis_t_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"TCP_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+911,0,"axis_data_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+585,0,"handshake_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+586,0,"seq_rcv_start",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+191,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+192,0,"wr_FIFO_offset",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+193,0,"rd_FIFO_valid_rcv",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+194,0,"rd_FIFO_ptr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+195,0,"rd_FIFO_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+568,0,"wr_ptr_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+569,0,"wr_FIFO_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+570,0,"rd_FIFO_en_rcv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+571,0,"seq_rx_FIFO_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+572,0,"full",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+913,0,"ACK_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+914,0,"ACK_rcv_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+587,0,"out_order_req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"TCP_stop_flg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"end_ss",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+713,0,"rd_FIFO_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+715,0,"rd_FIFO_valid_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+716,0,"rd_FIFO_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+717,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+112,0,"rd_FIFO_en_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+974,0,"seq_num_tx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+44,0,"TCP_send",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+884,0,"TCP_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+885,0,"TCP_transmit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+718,0,"re_trans",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"checksum_re_trans",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+45,0,"wr_FIFO_TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"wr_axis_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+47,0,"soupbin_TCP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+588,0,"rcv_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+589,0,"seq_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+915,0,"rcv_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+916,0,"TCP_control_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+917,0,"bytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+918,0,"seq_num_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+919,0,"ACK_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+920,0,"offset_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+921,0,"window_size_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+922,0,"checksum_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+923,0,"urgent_pointer_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+924,0,"payload_len_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+887,0,"seq_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+975,0,"TCP_control_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+976,0,"seq_num_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+977,0,"ACK_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+440,0,"ISN_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+888,0,"bytes_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+978,0,"offset_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+979,0,"window_size_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+980,0,"urgent_pointer_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+970,0,"TCP_basesum_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+693,0,"TCP_checksum_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+697,0,"timeout_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+590,0,"clear_timeout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+591,0,"count_en_timeout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("tcp_flow", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_flow__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("tcp_rcv", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_rcv__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+925,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("TCP_tx", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__top__u_tcp__TCP_tx__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("ISN_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__top__u_tcp__ISN_gen__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("timeout_fl", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__top__u_tcp__timeout_fl__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("inst", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__top__u_tcp__inst__0(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_fifo_tx__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__u_fifo_tx__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1065,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1066,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1067,0,"FIFO_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+49,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"seq_up",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+981,0,"seq_num_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+113,0,"rd_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+592,0,"hand_shake_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+971,0,"checksum_TX",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+719,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+720,0,"rd_FIFO_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+721,0,"rd_FIFO_payload",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+723,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+926,0,"ACK_num",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+927,0,"ACK_rcv_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+593,0,"out_order_req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1068,0,"TCP_stop_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1069,0,"end_ss",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"axis_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"len_seq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+55,0,"soupbin_TCP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+724,0,"wr_FIFO_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+725,0,"re_trans",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1070,0,"checksum_re_trans",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+286,0,"nbytes_abt_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+726,0,"bytes_msg_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+287,0,"nbytes_msg_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+288,0,"nrd_FIFO_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+727,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+290,0,"nptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+728,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+291,0,"nptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+729,0,"flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+292,0,"nflush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+730,0,"bytes_abt_sent_msg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+293,0,"nbytes_abt_sent_msg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+731,0,"msg_end_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+294,0,"nmsg_end_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+732,0,"rd_state",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+295,0,"nrd_state",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+733,0,"wr_state",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+296,0,"nwr_state",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("dict_tx", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+734,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+735,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+736,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+737,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+738,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+739,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+740,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+741,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+742,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+743,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+744,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+745,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+746,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+747,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+748,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+749,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+750,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+751,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+752,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+753,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+754,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+755,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+756,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+757,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+758,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+759,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+760,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+761,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+762,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+763,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+764,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+765,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+766,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+767,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+768,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+769,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+770,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+771,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+772,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+773,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+774,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+775,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+776,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+777,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+778,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+779,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+780,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+781,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+782,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+783,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+784,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+785,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+786,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+787,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+788,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+789,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+790,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+791,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+792,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+793,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+794,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+795,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+796,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+797,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+798,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+799,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+800,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+801,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+802,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+803,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+804,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+805,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+806,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+807,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+808,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+809,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+810,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+811,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+812,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+813,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+814,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+815,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+816,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+817,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+818,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+819,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+820,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+821,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+822,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+823,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+824,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+825,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+826,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+827,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+828,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+829,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ndict_tx", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+297,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+298,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+300,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+301,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+302,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+303,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+304,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+305,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+306,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+307,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+308,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+309,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+310,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+311,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+312,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+313,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+314,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+315,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+316,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+317,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+318,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+319,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+320,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+321,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+322,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+323,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+324,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+325,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+326,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+327,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+328,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+329,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+330,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+331,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+332,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+333,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+334,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+335,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+336,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+337,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+338,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+339,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+340,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+341,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+342,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+343,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+344,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+345,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+346,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+347,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+348,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+349,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+350,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+351,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+352,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+353,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+354,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+355,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+356,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+357,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+358,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+359,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+360,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+361,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+362,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+363,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+364,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+365,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+366,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+367,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+368,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+369,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+370,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+371,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+372,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+373,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+374,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+375,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+376,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+377,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+378,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+379,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+380,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+381,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+382,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+383,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+384,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+385,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+386,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+387,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+388,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+389,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+390,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+391,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+392,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+830,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+831,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+393,0,"nrd_FIFO_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+394,0,"nrd_FIFO_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+395,0,"nwr_FIFO_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+832,0,"dict_wrt_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+396,0,"ndict_wrt_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+833,0,"dict_rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+397,0,"ndict_rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+834,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+398,0,"nrd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+835,0,"wrt_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+399,0,"nwrt_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("TCP_tx_order", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declQuad(c+836,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+838,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+840,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+842,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+844,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+846,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+848,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+850,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+852,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+854,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+856,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+858,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+860,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+862,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+864,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+866,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("nTCP_tx_order", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declQuad(c+400,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+402,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+404,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+406,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+408,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+410,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+412,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+414,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+416,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+418,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+420,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+422,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+424,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+426,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+428,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+430,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->declBit(c+868,0,"out_order_req_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+432,0,"nout_order_req_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+869,0,"ACK_rcv_flag_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+433,0,"nACK_rcv_flag_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+870,0,"ACK_num_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+434,0,"nACK_num_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+435,0,"rd_debug_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+436,0,"rd_debug_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+871,0,"rd_upd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+437,0,"nrd_upd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+872,0,"bytes_abt_sent_msg_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+438,0,"nbytes_abt_sent_msg_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+873,0,"checksum_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+439,0,"nchecksum_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_tcp__ISN_gen__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__u_tcp__ISN_gen__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1071,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+57,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"gen_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+441,0,"ISN_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+442,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_tcp__inst__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__u_tcp__inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1065,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+59,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"axis_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+63,0,"TCP_payload_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+65,0,"TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+874,0,"re_trans",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+694,0,"TCP_checksum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+106,0,"nTCP_checksum_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+695,0,"TCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+107,0,"nTCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+696,0,"TCP_checksum_send",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+108,0,"nTCP_checksum_send",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+109,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+110,0,"temp1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+1049,0,"up_send",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_tcp__TCP_tx__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__u_tcp__TCP_tx__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1065,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1072,0,"OFF_SET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1073,0,"SRC_PORT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1074,0,"DEST_PORT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+66,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+982,0,"TCP_control_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+983,0,"seq_num_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+984,0,"ACK_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+985,0,"offset_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+986,0,"window_size_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+987,0,"urgent_pointer_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+114,0,"rd_FIFO_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+875,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"rd_FIFO_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+877,0,"rd_FIFO_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+879,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+889,0,"seq_up",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+890,0,"bytes_sent",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+68,0,"TCP_send",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+891,0,"TCP_tx_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+892,0,"TCP_tx_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+893,0,"TCP_transmit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+972,0,"TCP_basesum_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+8,0,"src_port",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+9,0,"dest_port",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+115,0,"nbytes_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+895,0,"TCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+1050,0,"nTCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBit(c+116,0,"valid_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+896,0,"state",3, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+117,0,"nstate",3, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declQuad(c+118,0,"nTCP_transmit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1051,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+120,0,"nTCP_tx_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"nTCP_tx_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"nseq_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_rcv__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_rcv__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1065,0,"WORD_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1072,0,"OFF_SET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1073,0,"SRC_PORT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1074,0,"DEST_PORT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1075,0,"IP_HEADER_LENGTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+69,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+71,0,"IP_payload_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+73,0,"valid_IP_header_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"IP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+75,0,"TCP_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+76,0,"IP_pseuder",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+928,0,"rcv_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+929,0,"TCP_control_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+930,0,"seq_num_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+931,0,"ACK_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+932,0,"offset_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+933,0,"window_size_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+934,0,"checksum_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+935,0,"urgent_pointer_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+936,0,"bytes_rcv",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+937,0,"TCP_len_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+938,0,"TCP_payload_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+940,0,"TCP_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"TCP_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+941,0,"nw_segment",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+942,0,"TCP_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"nTCP_control_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+86,0,"nseq_num_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"nACK_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,0,"noffset_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+89,0,"nwindow_size_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+90,0,"nchecksum_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+91,0,"nurgent_pointer_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+943,0,"bytes_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+92,0,"nbytes_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1076,0,"checksum_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+93,0,"nTCP_len_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+944,0,"TCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+94,0,"nTCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+95,0,"TCP_checksum_comp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1077,0,"TCP_data_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1078,0,"nTCP_data_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+96,0,"nTCP_payload_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+98,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+99,0,"nTCP_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"nrcv_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1079,0,"checksum_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1080,0,"nchecksum_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"n_nw_segment",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"nTCP_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+103,0,"nbytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+945,0,"state",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+104,0,"nstate",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_flow__me__0(Vtop___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_flow__pe__0(Vtop___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_flow__lt__0(Vtop___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_flow__rt__0(Vtop___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_flow__ov__0(Vtop___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_flow__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_flow__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1081,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1082,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1083,0,"FIFO_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+77,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+946,0,"rcv_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+947,0,"TCP_control_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+948,0,"seq_num_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+949,0,"ACK_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+950,0,"offset_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+951,0,"window_size_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+952,0,"checksum_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+953,0,"urgent_pointer_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+10,0,"end_ss",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+897,0,"seq_up",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+988,0,"TCP_control_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+989,0,"seq_num_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+990,0,"ACK_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+991,0,"offset_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+992,0,"window_size_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+993,0,"urgent_pointer_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+197,0,"TCP_stop_flg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+573,0,"full",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+698,0,"timeout_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+594,0,"hand_shake_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+595,0,"seq_rcv_str",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1052,0,"ISN_num",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+898,0,"bytes_sent",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+880,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+954,0,"payload_len_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+955,0,"TCP_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+596,0,"rcv_next_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+597,0,"seq_num_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+574,0,"seq_rx_FIFO_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+956,0,"TCP_bytes_trk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+198,0,"wr_FIFO_offset",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+575,0,"wr_FIFO_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+199,0,"rd_FIFO_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+576,0,"wr_FIFO_ptr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+200,0,"rd_FIFO_ptr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+201,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+577,0,"rd_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+957,0,"nw_segment",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"TCP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+958,0,"ACK_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+959,0,"ACK_rcv_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+598,0,"out_order_req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+599,0,"count_en_timeout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+600,0,"clear_timeout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+203,0,"case_bug",5, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+204,0,"case_bug_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+601,0,"state",6, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+205,0,"nstate",6, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("rcv_pkg_type", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+960,0,"CWR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+961,0,"ECE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+962,0,"URG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+963,0,"ACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+964,0,"PSH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+965,0,"RST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+966,0,"SYN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+967,0,"FIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("tx_pkg_type", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+994,0,"CWR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+995,0,"ECE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+996,0,"URG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+997,0,"ACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+998,0,"PSH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+999,0,"RST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1000,0,"SYN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1001,0,"FIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("ack_num", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+602,0,"dup_chk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+603,0,"ACK_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("nack_num", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+206,0,"dup_chk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+207,0,"ACK_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("seq_num", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+604,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+605,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("nseq_num", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+208,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+209,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->declBus(c+606,0,"window_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+210,0,"nwindow_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1053,0,"bytes_in_flight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1054,0,"wnd_allow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1002,0,"nhand_shake_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+211,0,"nseq_rcv_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+212,0,"ncount_en_timeout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+213,0,"nclear_timeout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("nTCP_order", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+214,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+215,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+216,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+217,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+218,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+219,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+220,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+221,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+222,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+223,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+224,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+225,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+226,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+227,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+228,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+229,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+230,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+231,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+232,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+233,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+234,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+235,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+236,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+237,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+238,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+239,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+240,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+241,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+242,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+243,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+244,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+245,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+246,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+247,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+248,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+249,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+250,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+251,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+252,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+253,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+254,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+255,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+256,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+257,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+258,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+259,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+260,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+261,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+263,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("TCP_order", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+607,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+608,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+609,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+610,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+611,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+612,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+613,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+614,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+615,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+616,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+617,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+618,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+619,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+620,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+621,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+622,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+623,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+624,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+625,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+626,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+627,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+628,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+629,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+630,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+631,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+632,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+633,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+634,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+635,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+636,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+637,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+638,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+639,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+640,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+641,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+642,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+643,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+644,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+645,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+646,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+647,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+648,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+649,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+650,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+651,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+652,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+653,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+654,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+655,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+656,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+657,0,"rcv_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+264,0,"nrcv_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+658,0,"rcv_next_prev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+265,0,"out_of_order_flg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+266,0,"nout_order_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+659,0,"seq_tx_retrans",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+267,0,"nseq_tx_retrans",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+660,0,"free_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+661,0,"match_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+662,0,"v_vec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+663,0,"free_vec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->pushPrefix("seq_vec", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+1084,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1085,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1086,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1087,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1088,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1089,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1090,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1091,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1092,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1093,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1094,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1095,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1096,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1097,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1098,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1099,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1100,0,"[16]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1101,0,"[17]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1102,0,"[18]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1103,0,"[19]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1104,0,"[20]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1105,0,"[21]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1106,0,"[22]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1107,0,"[23]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1108,0,"[24]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1109,0,"[25]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1110,0,"[26]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1111,0,"[27]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1112,0,"[28]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1113,0,"[29]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1114,0,"[30]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1115,0,"[31]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->declBit(c+664,0,"free_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+665,0,"match_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+666,0,"flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+268,0,"nflush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+667,0,"len_flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+269,0,"nlen_flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1003,0,"debug",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+668,0,"match_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1004,0,"overlap_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1005,0,"left_trim_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1006,0,"right_trim_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1007,0,"lt_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1008,0,"rt_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1116,0,"ov_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+669,0,"seq_rx_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+270,0,"nseq_rx_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+670,0,"seq_rx_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+271,0,"nseq_rx_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+272,0,"bytes_drop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+273,0,"bytes_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("flush_list", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+671,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+672,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+673,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+674,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+675,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+676,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+677,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+678,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+679,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+680,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("nflush_list", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+274,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+275,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+276,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+277,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+278,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+279,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+280,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+281,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+282,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+283,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("me", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_flow__me__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_flow__pe__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("lt", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_flow__lt__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("rt", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_flow__rt__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("ov", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_flow__ov__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+681,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+682,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+284,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+285,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_tcp__timeout_fl__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__u_tcp__timeout_fl__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1071,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+79,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+683,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+684,0,"count_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"rollover_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"initial_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+699,0,"count_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+700,0,"rollover_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1055,0,"nxt_count_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1056,0,"nxt_rollover_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_flow__me__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_flow__me__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1117,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1118,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1061,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+685,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+686,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+687,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+688,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_flow__pe__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_flow__pe__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1117,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1118,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1061,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+689,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+690,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+691,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+692,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_flow__lt__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_flow__lt__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1117,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1118,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1061,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1009,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+1010,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1011,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1012,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_flow__rt__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_flow__rt__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1117,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1118,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1061,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1013,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+1014,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1015,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1016,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_flow__ov__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_flow__ov__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1117,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1118,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1061,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1017,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+1018,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1019,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1020,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
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
    bufp->fullIData(oldp+1057,(0x40U),32);
    bufp->fullIData(oldp+1058,(0x10U),32);
    bufp->fullIData(oldp+1059,(8U),32);
    bufp->fullBit(oldp+1060,(vlSymsp->TOP__top.wr_FIFO_full));
    bufp->fullIData(oldp+1061,(4U),32);
    bufp->fullBit(oldp+1062,(vlSymsp->TOP__top.__PVT__seq_up));
    bufp->fullIData(oldp+1063,(0x80U),32);
    bufp->fullCData(oldp+1064,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nlen_TCP_flush),4);
    bufp->fullIData(oldp+1065,(0x40U),32);
    bufp->fullIData(oldp+1066,(0x10U),32);
    bufp->fullIData(oldp+1067,(4U),32);
    bufp->fullBit(oldp+1068,(vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_stop_flag));
    bufp->fullBit(oldp+1069,(vlSymsp->TOP__top__u_fifo_tx.__PVT__end_ss));
    bufp->fullSData(oldp+1070,(vlSymsp->TOP__top__u_fifo_tx.__PVT__checksum_re_trans),16);
    bufp->fullIData(oldp+1071,(0x20U),32);
    bufp->fullIData(oldp+1072,(5U),32);
    bufp->fullSData(oldp+1073,(0x1234U),16);
    bufp->fullSData(oldp+1074,(0x5678U),16);
    bufp->fullIData(oldp+1075,(0x14U),32);
    bufp->fullSData(oldp+1076,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__checksum_in),16);
    bufp->fullCData(oldp+1077,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_data_dl),8);
    bufp->fullCData(oldp+1078,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nTCP_data_dl),8);
    bufp->fullBit(oldp+1079,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__checksum_en));
    bufp->fullBit(oldp+1080,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nchecksum_en));
    bufp->fullIData(oldp+1081,(0xaU),32);
    bufp->fullIData(oldp+1082,(0x800U),32);
    bufp->fullIData(oldp+1083,(0xbU),32);
    bufp->fullSData(oldp+1084,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0U, 0xaU))),10);
    bufp->fullSData(oldp+1085,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0xaU, 0xaU))),10);
    bufp->fullSData(oldp+1086,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x14U, 0xaU))),10);
    bufp->fullSData(oldp+1087,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x1eU, 0xaU))),10);
    bufp->fullSData(oldp+1088,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x28U, 0xaU))),10);
    bufp->fullSData(oldp+1089,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x32U, 0xaU))),10);
    bufp->fullSData(oldp+1090,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x3cU, 0xaU))),10);
    bufp->fullSData(oldp+1091,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x46U, 0xaU))),10);
    bufp->fullSData(oldp+1092,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x50U, 0xaU))),10);
    bufp->fullSData(oldp+1093,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x5aU, 0xaU))),10);
    bufp->fullSData(oldp+1094,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x64U, 0xaU))),10);
    bufp->fullSData(oldp+1095,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x6eU, 0xaU))),10);
    bufp->fullSData(oldp+1096,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x78U, 0xaU))),10);
    bufp->fullSData(oldp+1097,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x82U, 0xaU))),10);
    bufp->fullSData(oldp+1098,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x8cU, 0xaU))),10);
    bufp->fullSData(oldp+1099,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x96U, 0xaU))),10);
    bufp->fullSData(oldp+1100,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0xa0U, 0xaU))),10);
    bufp->fullSData(oldp+1101,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0xaaU, 0xaU))),10);
    bufp->fullSData(oldp+1102,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0xb4U, 0xaU))),10);
    bufp->fullSData(oldp+1103,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0xbeU, 0xaU))),10);
    bufp->fullSData(oldp+1104,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0xc8U, 0xaU))),10);
    bufp->fullSData(oldp+1105,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0xd2U, 0xaU))),10);
    bufp->fullSData(oldp+1106,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0xdcU, 0xaU))),10);
    bufp->fullSData(oldp+1107,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0xe6U, 0xaU))),10);
    bufp->fullSData(oldp+1108,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0xf0U, 0xaU))),10);
    bufp->fullSData(oldp+1109,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0xfaU, 0xaU))),10);
    bufp->fullSData(oldp+1110,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x104U, 0xaU))),10);
    bufp->fullSData(oldp+1111,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x10eU, 0xaU))),10);
    bufp->fullSData(oldp+1112,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x118U, 0xaU))),10);
    bufp->fullSData(oldp+1113,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x122U, 0xaU))),10);
    bufp->fullSData(oldp+1114,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x12cU, 0xaU))),10);
    bufp->fullSData(oldp+1115,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x136U, 0xaU))),10);
    bufp->fullCData(oldp+1116,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ov_idx),4);
    bufp->fullIData(oldp+1117,(0xaU),32);
    bufp->fullBit(oldp+1118,(0U));
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
    bufp->fullBit(oldp+1,(vlSymsp->TOP__top.__PVT__end_ss_int));
    bufp->fullSData(oldp+2,(vlSymsp->TOP__top.__PVT__checksum_re_trans_int),16);
    bufp->fullBit(oldp+3,(vlSymsp->TOP__top__u_tcp.__PVT__end_ss));
    bufp->fullSData(oldp+4,(vlSymsp->TOP__top__u_tcp.__PVT__checksum_re_trans),16);
    bufp->fullBit(oldp+5,(vlSymsp->TOP__top__u_fifo_tx.__PVT__seq_up));
    bufp->fullBit(oldp+6,(vlSymsp->TOP__top__u_tcp__ISN_gen.__PVT__gen_en));
    bufp->fullBit(oldp+7,(vlSymsp->TOP__top__u_tcp__inst.__PVT__clear));
    bufp->fullSData(oldp+8,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__src_port),16);
    bufp->fullSData(oldp+9,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__dest_port),16);
    bufp->fullBit(oldp+10,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__end_ss));
    bufp->fullIData(oldp+11,(vlSymsp->TOP__top__u_tcp__timeout_fl.__PVT__rollover_val),32);
    bufp->fullIData(oldp+12,(vlSymsp->TOP__top__u_tcp__timeout_fl.__PVT__initial_val),32);
    bufp->fullBit(oldp+13,(vlSymsp->TOP__top.CLK));
    bufp->fullBit(oldp+14,(vlSymsp->TOP__top.nRST));
    bufp->fullCData(oldp+15,(vlSymsp->TOP__top.tb_count),8);
    bufp->fullBit(oldp+16,(vlSymsp->TOP__top.IP_valid));
    bufp->fullBit(oldp+17,(vlSymsp->TOP__top.IP_flush));
    bufp->fullSData(oldp+18,(vlSymsp->TOP__top.IP_pseuder),16);
    bufp->fullQData(oldp+19,(vlSymsp->TOP__top.IP_payload),64);
    bufp->fullSData(oldp+21,(vlSymsp->TOP__top.TCP_len),16);
    bufp->fullCData(oldp+22,(vlSymsp->TOP__top.IP_bytes_rcv),8);
    bufp->fullBit(oldp+23,(vlSymsp->TOP__top.TCP_send));
    bufp->fullBit(oldp+24,(vlSymsp->TOP__top.TX_en));
    bufp->fullBit(oldp+25,(vlSymsp->TOP__top.axis_last));
    bufp->fullBit(oldp+26,(vlSymsp->TOP__top.wr_FIFO_en));
    bufp->fullIData(oldp+27,(vlSymsp->TOP__top.len_seq),32);
    bufp->fullQData(oldp+28,(vlSymsp->TOP__top.soupbin_TCP_payload),64);
    bufp->fullBit(oldp+30,(vlSymsp->TOP__top.axis_r_en));
    bufp->fullBit(oldp+31,(vlSymsp->TOP__top__u_payload_fifo.__PVT__CLK));
    bufp->fullBit(oldp+32,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nRST));
    bufp->fullBit(oldp+33,(vlSymsp->TOP__top__u_payload_fifo.__PVT__axis_r_en));
    bufp->fullBit(oldp+34,(vlSymsp->TOP__top__u_tcp.__PVT__CLK));
    bufp->fullBit(oldp+35,(vlSymsp->TOP__top__u_tcp.__PVT__nRST));
    bufp->fullBit(oldp+36,(vlSymsp->TOP__top__u_tcp.__PVT__TX_en));
    bufp->fullBit(oldp+37,(vlSymsp->TOP__top__u_tcp.__PVT__IP_valid));
    bufp->fullBit(oldp+38,(vlSymsp->TOP__top__u_tcp.__PVT__IP_flush));
    bufp->fullSData(oldp+39,(vlSymsp->TOP__top__u_tcp.__PVT__IP_pseuder),16);
    bufp->fullQData(oldp+40,(vlSymsp->TOP__top__u_tcp.__PVT__IP_payload),64);
    bufp->fullSData(oldp+42,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_len),16);
    bufp->fullCData(oldp+43,(vlSymsp->TOP__top__u_tcp.__PVT__IP_bytes_rcv),8);
    bufp->fullBit(oldp+44,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_send));
    bufp->fullBit(oldp+45,(vlSymsp->TOP__top__u_tcp.__PVT__wr_FIFO_TX_en));
    bufp->fullBit(oldp+46,(vlSymsp->TOP__top__u_tcp.__PVT__wr_axis_last));
    bufp->fullQData(oldp+47,(vlSymsp->TOP__top__u_tcp.__PVT__soupbin_TCP_payload),64);
    bufp->fullBit(oldp+49,(vlSymsp->TOP__top__u_fifo_tx.__PVT__CLK));
    bufp->fullBit(oldp+50,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nRST));
    bufp->fullBit(oldp+51,(vlSymsp->TOP__top__u_fifo_tx.__PVT__TX_en));
    bufp->fullBit(oldp+52,(vlSymsp->TOP__top__u_fifo_tx.__PVT__wr_FIFO_en));
    bufp->fullBit(oldp+53,(vlSymsp->TOP__top__u_fifo_tx.__PVT__axis_last));
    bufp->fullIData(oldp+54,(vlSymsp->TOP__top__u_fifo_tx.__PVT__len_seq),32);
    bufp->fullQData(oldp+55,(vlSymsp->TOP__top__u_fifo_tx.__PVT__soupbin_TCP_payload),64);
    bufp->fullBit(oldp+57,(vlSymsp->TOP__top__u_tcp__ISN_gen.__PVT__CLK));
    bufp->fullBit(oldp+58,(vlSymsp->TOP__top__u_tcp__ISN_gen.__PVT__nRST));
    bufp->fullBit(oldp+59,(vlSymsp->TOP__top__u_tcp__inst.__PVT__CLK));
    bufp->fullBit(oldp+60,(vlSymsp->TOP__top__u_tcp__inst.__PVT__nRST));
    bufp->fullBit(oldp+61,(vlSymsp->TOP__top__u_tcp__inst.__PVT__wr_FIFO_en));
    bufp->fullBit(oldp+62,(vlSymsp->TOP__top__u_tcp__inst.__PVT__axis_last));
    bufp->fullQData(oldp+63,(vlSymsp->TOP__top__u_tcp__inst.__PVT__TCP_payload_tx),64);
    bufp->fullBit(oldp+65,(vlSymsp->TOP__top__u_tcp__inst.__PVT__TX_en));
    bufp->fullBit(oldp+66,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__CLK));
    bufp->fullBit(oldp+67,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nRST));
    bufp->fullBit(oldp+68,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_send));
    bufp->fullBit(oldp+69,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__CLK));
    bufp->fullBit(oldp+70,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nRST));
    bufp->fullQData(oldp+71,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__IP_payload_rx),64);
    bufp->fullBit(oldp+73,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__valid_IP_header_rx));
    bufp->fullBit(oldp+74,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__IP_flush));
    bufp->fullSData(oldp+75,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_len),16);
    bufp->fullSData(oldp+76,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__IP_pseuder),16);
    bufp->fullBit(oldp+77,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__CLK));
    bufp->fullBit(oldp+78,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nRST));
    bufp->fullBit(oldp+79,(vlSymsp->TOP__top__u_tcp__timeout_fl.__PVT__CLK));
    bufp->fullBit(oldp+80,(vlSymsp->TOP__top__u_tcp__timeout_fl.__PVT__nRST));
    bufp->fullBit(oldp+81,(vlSymsp->TOP__top.__PVT__TCP_flush_int));
    bufp->fullBit(oldp+82,(vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_flush));
    bufp->fullBit(oldp+83,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_flush));
    bufp->fullBit(oldp+84,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_flush));
    bufp->fullCData(oldp+85,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nTCP_control_rx),8);
    bufp->fullIData(oldp+86,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nseq_num_rx),32);
    bufp->fullIData(oldp+87,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nACK_rx),32);
    bufp->fullCData(oldp+88,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__noffset_rx),4);
    bufp->fullSData(oldp+89,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nwindow_size_rx),16);
    bufp->fullSData(oldp+90,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nchecksum_rx),16);
    bufp->fullSData(oldp+91,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nurgent_pointer_rx),16);
    bufp->fullSData(oldp+92,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nbytes_trk),16);
    bufp->fullSData(oldp+93,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nTCP_len_data),16);
    bufp->fullIData(oldp+94,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nTCP_checksum),17);
    bufp->fullSData(oldp+95,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_checksum_comp),16);
    bufp->fullQData(oldp+96,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nTCP_payload_rx),64);
    bufp->fullIData(oldp+98,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__temp),20);
    bufp->fullBit(oldp+99,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nTCP_valid));
    bufp->fullBit(oldp+100,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nrcv_data));
    bufp->fullBit(oldp+101,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__n_nw_segment));
    bufp->fullBit(oldp+102,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nTCP_last));
    bufp->fullCData(oldp+103,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nbytes_rcv),8);
    bufp->fullCData(oldp+104,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nstate),3);
    bufp->fullBit(oldp+105,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_flush));
    bufp->fullSData(oldp+106,(vlSymsp->TOP__top__u_tcp__inst.__PVT__nTCP_checksum_out),16);
    bufp->fullIData(oldp+107,(vlSymsp->TOP__top__u_tcp__inst.__PVT__nTCP_checksum),17);
    bufp->fullIData(oldp+108,(vlSymsp->TOP__top__u_tcp__inst.__PVT__nTCP_checksum_send),17);
    bufp->fullIData(oldp+109,(vlSymsp->TOP__top__u_tcp__inst.__PVT__temp),20);
    bufp->fullIData(oldp+110,(vlSymsp->TOP__top__u_tcp__inst.__PVT__temp1),20);
    bufp->fullBit(oldp+111,(vlSymsp->TOP__top.__PVT__rd_ftx_en_int));
    bufp->fullBit(oldp+112,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_en_tx));
    bufp->fullBit(oldp+113,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_FIFO_en));
    bufp->fullBit(oldp+114,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__rd_FIFO_en));
    bufp->fullIData(oldp+115,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nbytes_sent),32);
    bufp->fullBit(oldp+116,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__valid_checksum));
    bufp->fullCData(oldp+117,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nstate),7);
    bufp->fullQData(oldp+118,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nTCP_transmit),64);
    bufp->fullBit(oldp+120,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nTCP_tx_valid));
    bufp->fullBit(oldp+121,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nTCP_tx_last));
    bufp->fullBit(oldp+122,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nseq_up));
    bufp->fullBit(oldp+123,(vlSymsp->TOP__top.TCP_stop_flag));
    bufp->fullBit(oldp+124,(vlSymsp->TOP__top.__PVT__wr_pfifo_en_int));
    bufp->fullCData(oldp+125,(vlSymsp->TOP__top.__PVT__wr_pfifo_offset_int),8);
    bufp->fullBit(oldp+126,(vlSymsp->TOP__top.__PVT__rd_pfifo_valid_int));
    bufp->fullCData(oldp+127,(vlSymsp->TOP__top.__PVT__rd_pfifo_ptr_int),4);
    bufp->fullCData(oldp+128,(vlSymsp->TOP__top.__PVT__rd_pfifo_len_int),4);
    bufp->fullBit(oldp+129,(vlSymsp->TOP__top.__PVT__TCP_stop_flg_int));
    bufp->fullBit(oldp+130,(vlSymsp->TOP__top__u_payload_fifo.__PVT__wr_FIFO_en));
    bufp->fullCData(oldp+131,(vlSymsp->TOP__top__u_payload_fifo.__PVT__wr_FIFO_offset),8);
    bufp->fullBit(oldp+132,(vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_FIFO_valid));
    bufp->fullCData(oldp+133,(vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_FIFO_ptr),4);
    bufp->fullCData(oldp+134,(vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_FIFO_len),4);
    bufp->fullQData(oldp+135,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                          [0U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+137,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [0U], 0U, 8U))),8);
    bufp->fullQData(oldp+138,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                          [1U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+140,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [1U], 0U, 8U))),8);
    bufp->fullQData(oldp+141,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                          [2U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+143,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [2U], 0U, 8U))),8);
    bufp->fullQData(oldp+144,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                          [3U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+146,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [3U], 0U, 8U))),8);
    bufp->fullQData(oldp+147,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                          [4U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+149,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [4U], 0U, 8U))),8);
    bufp->fullQData(oldp+150,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                          [5U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+152,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [5U], 0U, 8U))),8);
    bufp->fullQData(oldp+153,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                          [6U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+155,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [6U], 0U, 8U))),8);
    bufp->fullQData(oldp+156,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                          [7U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+158,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [7U], 0U, 8U))),8);
    bufp->fullQData(oldp+159,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                          [8U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+161,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [8U], 0U, 8U))),8);
    bufp->fullQData(oldp+162,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                          [9U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+164,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [9U], 0U, 8U))),8);
    bufp->fullQData(oldp+165,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                          [0xaU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+167,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [0xaU], 0U, 8U))),8);
    bufp->fullQData(oldp+168,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                          [0xbU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+170,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [0xbU], 0U, 8U))),8);
    bufp->fullQData(oldp+171,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                          [0xcU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+173,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [0xcU], 0U, 8U))),8);
    bufp->fullQData(oldp+174,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                          [0xdU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+176,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [0xdU], 0U, 8U))),8);
    bufp->fullQData(oldp+177,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                          [0xeU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+179,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [0xeU], 0U, 8U))),8);
    bufp->fullQData(oldp+180,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                          [0xfU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+182,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [0xfU], 0U, 8U))),8);
    bufp->fullCData(oldp+183,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nflush_ptr),4);
    bufp->fullCData(oldp+184,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nrd_len_ptr),4);
    bufp->fullIData(oldp+185,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nseq_trk_rd),32);
    bufp->fullBit(oldp+186,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nrd_FIFO_valid_l));
    bufp->fullBit(oldp+187,(vlSymsp->TOP__top__u_payload_fifo.__PVT__naxis_r_valid));
    bufp->fullBit(oldp+188,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_flush_l));
    bufp->fullCData(oldp+189,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nwr_ptr),4);
    bufp->fullCData(oldp+190,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nrd_ptr),4);
    bufp->fullBit(oldp+191,(vlSymsp->TOP__top__u_tcp.__PVT__wr_FIFO_en));
    bufp->fullCData(oldp+192,(vlSymsp->TOP__top__u_tcp.__PVT__wr_FIFO_offset),8);
    bufp->fullBit(oldp+193,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_valid_rcv));
    bufp->fullCData(oldp+194,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_ptr),4);
    bufp->fullCData(oldp+195,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_len),4);
    bufp->fullBit(oldp+196,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_stop_flg));
    bufp->fullBit(oldp+197,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_stop_flg));
    bufp->fullCData(oldp+198,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__wr_FIFO_offset),8);
    bufp->fullCData(oldp+199,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rd_FIFO_len),8);
    bufp->fullSData(oldp+200,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rd_FIFO_ptr),11);
    bufp->fullBit(oldp+201,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__wr_FIFO_en));
    bufp->fullBit(oldp+202,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rd_FIFO_valid));
    bufp->fullCData(oldp+203,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__case_bug),2);
    bufp->fullBit(oldp+204,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__case_bug_0));
    bufp->fullCData(oldp+205,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nstate),7);
    bufp->fullCData(oldp+206,((7U & VL_SEL_IQII(35, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nack_num, 0x20U, 3U))),3);
    bufp->fullIData(oldp+207,(VL_SEL_IQII(35, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nack_num, 0U, 0x20U)),32);
    bufp->fullBit(oldp+208,((1U & VL_BITSEL_IQII(33, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nseq_num, 0x20U))));
    bufp->fullIData(oldp+209,(VL_SEL_IQII(33, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nseq_num, 0U, 0x20U)),32);
    bufp->fullSData(oldp+210,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nwindow_size),16);
    bufp->fullIData(oldp+211,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nseq_rcv_str),32);
    bufp->fullBit(oldp+212,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ncount_en_timeout));
    bufp->fullBit(oldp+213,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nclear_timeout));
    bufp->fullBit(oldp+214,((1U & VL_BITSEL_IWII(97, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [0U], 0x60U))));
    bufp->fullIData(oldp+215,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [0U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+216,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [0U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+217,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [0U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+218,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [0U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+219,((1U & VL_BITSEL_IWII(97, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [1U], 0x60U))));
    bufp->fullIData(oldp+220,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [1U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+221,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [1U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+222,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [1U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+223,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [1U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+224,((1U & VL_BITSEL_IWII(97, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [2U], 0x60U))));
    bufp->fullIData(oldp+225,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [2U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+226,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [2U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+227,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [2U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+228,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [2U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+229,((1U & VL_BITSEL_IWII(97, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [3U], 0x60U))));
    bufp->fullIData(oldp+230,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [3U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+231,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [3U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+232,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [3U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+233,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [3U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+234,((1U & VL_BITSEL_IWII(97, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [4U], 0x60U))));
    bufp->fullIData(oldp+235,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [4U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+236,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [4U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+237,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [4U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+238,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [4U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+239,((1U & VL_BITSEL_IWII(97, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [5U], 0x60U))));
    bufp->fullIData(oldp+240,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [5U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+241,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [5U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+242,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [5U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+243,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [5U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+244,((1U & VL_BITSEL_IWII(97, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [6U], 0x60U))));
    bufp->fullIData(oldp+245,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [6U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+246,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [6U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+247,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [6U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+248,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [6U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+249,((1U & VL_BITSEL_IWII(97, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [7U], 0x60U))));
    bufp->fullIData(oldp+250,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [7U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+251,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [7U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+252,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [7U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+253,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [7U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+254,((1U & VL_BITSEL_IWII(97, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [8U], 0x60U))));
    bufp->fullIData(oldp+255,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [8U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+256,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [8U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+257,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [8U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+258,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [8U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+259,((1U & VL_BITSEL_IWII(97, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [9U], 0x60U))));
    bufp->fullIData(oldp+260,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [9U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+261,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [9U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+262,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [9U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+263,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [9U], 0U, 0x10U))),16);
    bufp->fullIData(oldp+264,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nrcv_next),32);
    bufp->fullBit(oldp+265,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__out_of_order_flg));
    bufp->fullBit(oldp+266,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nout_order_req));
    bufp->fullIData(oldp+267,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nseq_tx_retrans),32);
    bufp->fullCData(oldp+268,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_ptr),4);
    bufp->fullCData(oldp+269,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nlen_flush_ptr),8);
    bufp->fullIData(oldp+270,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nseq_rx_trk),32);
    bufp->fullIData(oldp+271,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nseq_rx_str),32);
    bufp->fullCData(oldp+272,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__bytes_drop),8);
    bufp->fullCData(oldp+273,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__bytes_left),8);
    bufp->fullCData(oldp+274,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0U, 4U))),4);
    bufp->fullCData(oldp+275,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 4U, 4U))),4);
    bufp->fullCData(oldp+276,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 8U, 4U))),4);
    bufp->fullCData(oldp+277,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0xcU, 4U))),4);
    bufp->fullCData(oldp+278,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0x10U, 4U))),4);
    bufp->fullCData(oldp+279,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0x14U, 4U))),4);
    bufp->fullCData(oldp+280,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0x18U, 4U))),4);
    bufp->fullCData(oldp+281,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0x1cU, 4U))),4);
    bufp->fullCData(oldp+282,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0x20U, 4U))),4);
    bufp->fullCData(oldp+283,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0x24U, 4U))),4);
    bufp->fullIData(oldp+284,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+285,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__unnamedblk4__DOT__i),32);
    bufp->fullSData(oldp+286,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nbytes_abt_sent),16);
    bufp->fullSData(oldp+287,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nbytes_msg_trk),16);
    bufp->fullQData(oldp+288,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nrd_FIFO_payload),64);
    bufp->fullCData(oldp+290,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nptr_str),4);
    bufp->fullCData(oldp+291,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nptr_end),4);
    bufp->fullCData(oldp+292,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nflush_ptr),4);
    bufp->fullSData(oldp+293,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nbytes_abt_sent_msg),16);
    bufp->fullCData(oldp+294,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nmsg_end_ptr),4);
    bufp->fullCData(oldp+295,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nrd_state),2);
    bufp->fullCData(oldp+296,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nwr_state),2);
    bufp->fullBit(oldp+297,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x58U))));
    bufp->fullIData(oldp+298,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x38U, 0x20U)),32);
    bufp->fullIData(oldp+299,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x18U, 0x20U)),32);
    bufp->fullSData(oldp+300,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 8U, 0x10U))),16);
    bufp->fullCData(oldp+301,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 4U, 4U))),4);
    bufp->fullCData(oldp+302,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0U, 4U))),4);
    bufp->fullBit(oldp+303,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0xb1U))));
    bufp->fullIData(oldp+304,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x91U, 0x20U)),32);
    bufp->fullIData(oldp+305,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x71U, 0x20U)),32);
    bufp->fullSData(oldp+306,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x61U, 0x10U))),16);
    bufp->fullCData(oldp+307,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x5dU, 4U))),4);
    bufp->fullCData(oldp+308,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x59U, 4U))),4);
    bufp->fullBit(oldp+309,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x10aU))));
    bufp->fullIData(oldp+310,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0xeaU, 0x20U)),32);
    bufp->fullIData(oldp+311,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0xcaU, 0x20U)),32);
    bufp->fullSData(oldp+312,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0xbaU, 0x10U))),16);
    bufp->fullCData(oldp+313,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0xb6U, 4U))),4);
    bufp->fullCData(oldp+314,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0xb2U, 4U))),4);
    bufp->fullBit(oldp+315,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x163U))));
    bufp->fullIData(oldp+316,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x143U, 0x20U)),32);
    bufp->fullIData(oldp+317,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x123U, 0x20U)),32);
    bufp->fullSData(oldp+318,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x113U, 0x10U))),16);
    bufp->fullCData(oldp+319,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x10fU, 4U))),4);
    bufp->fullCData(oldp+320,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x10bU, 4U))),4);
    bufp->fullBit(oldp+321,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x1bcU))));
    bufp->fullIData(oldp+322,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x19cU, 0x20U)),32);
    bufp->fullIData(oldp+323,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x17cU, 0x20U)),32);
    bufp->fullSData(oldp+324,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x16cU, 0x10U))),16);
    bufp->fullCData(oldp+325,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x168U, 4U))),4);
    bufp->fullCData(oldp+326,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x164U, 4U))),4);
    bufp->fullBit(oldp+327,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x215U))));
    bufp->fullIData(oldp+328,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x1f5U, 0x20U)),32);
    bufp->fullIData(oldp+329,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x1d5U, 0x20U)),32);
    bufp->fullSData(oldp+330,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x1c5U, 0x10U))),16);
    bufp->fullCData(oldp+331,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x1c1U, 4U))),4);
    bufp->fullCData(oldp+332,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x1bdU, 4U))),4);
    bufp->fullBit(oldp+333,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x26eU))));
    bufp->fullIData(oldp+334,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x24eU, 0x20U)),32);
    bufp->fullIData(oldp+335,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x22eU, 0x20U)),32);
    bufp->fullSData(oldp+336,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x21eU, 0x10U))),16);
    bufp->fullCData(oldp+337,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x21aU, 4U))),4);
    bufp->fullCData(oldp+338,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x216U, 4U))),4);
    bufp->fullBit(oldp+339,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x2c7U))));
    bufp->fullIData(oldp+340,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x2a7U, 0x20U)),32);
    bufp->fullIData(oldp+341,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x287U, 0x20U)),32);
    bufp->fullSData(oldp+342,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x277U, 0x10U))),16);
    bufp->fullCData(oldp+343,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x273U, 4U))),4);
    bufp->fullCData(oldp+344,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x26fU, 4U))),4);
    bufp->fullBit(oldp+345,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x320U))));
    bufp->fullIData(oldp+346,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x300U, 0x20U)),32);
    bufp->fullIData(oldp+347,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x2e0U, 0x20U)),32);
    bufp->fullSData(oldp+348,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x2d0U, 0x10U))),16);
    bufp->fullCData(oldp+349,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x2ccU, 4U))),4);
    bufp->fullCData(oldp+350,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x2c8U, 4U))),4);
    bufp->fullBit(oldp+351,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x379U))));
    bufp->fullIData(oldp+352,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x359U, 0x20U)),32);
    bufp->fullIData(oldp+353,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x339U, 0x20U)),32);
    bufp->fullSData(oldp+354,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x329U, 0x10U))),16);
    bufp->fullCData(oldp+355,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x325U, 4U))),4);
    bufp->fullCData(oldp+356,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x321U, 4U))),4);
    bufp->fullBit(oldp+357,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x3d2U))));
    bufp->fullIData(oldp+358,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x3b2U, 0x20U)),32);
    bufp->fullIData(oldp+359,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x392U, 0x20U)),32);
    bufp->fullSData(oldp+360,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x382U, 0x10U))),16);
    bufp->fullCData(oldp+361,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x37eU, 4U))),4);
    bufp->fullCData(oldp+362,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x37aU, 4U))),4);
    bufp->fullBit(oldp+363,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x42bU))));
    bufp->fullIData(oldp+364,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x40bU, 0x20U)),32);
    bufp->fullIData(oldp+365,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x3ebU, 0x20U)),32);
    bufp->fullSData(oldp+366,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x3dbU, 0x10U))),16);
    bufp->fullCData(oldp+367,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x3d7U, 4U))),4);
    bufp->fullCData(oldp+368,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x3d3U, 4U))),4);
    bufp->fullBit(oldp+369,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x484U))));
    bufp->fullIData(oldp+370,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x464U, 0x20U)),32);
    bufp->fullIData(oldp+371,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x444U, 0x20U)),32);
    bufp->fullSData(oldp+372,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x434U, 0x10U))),16);
    bufp->fullCData(oldp+373,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x430U, 4U))),4);
    bufp->fullCData(oldp+374,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x42cU, 4U))),4);
    bufp->fullBit(oldp+375,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x4ddU))));
    bufp->fullIData(oldp+376,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x4bdU, 0x20U)),32);
    bufp->fullIData(oldp+377,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x49dU, 0x20U)),32);
    bufp->fullSData(oldp+378,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x48dU, 0x10U))),16);
    bufp->fullCData(oldp+379,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x489U, 4U))),4);
    bufp->fullCData(oldp+380,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x485U, 4U))),4);
    bufp->fullBit(oldp+381,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x536U))));
    bufp->fullIData(oldp+382,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x516U, 0x20U)),32);
    bufp->fullIData(oldp+383,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x4f6U, 0x20U)),32);
    bufp->fullSData(oldp+384,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x4e6U, 0x10U))),16);
    bufp->fullCData(oldp+385,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x4e2U, 4U))),4);
    bufp->fullCData(oldp+386,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x4deU, 4U))),4);
    bufp->fullBit(oldp+387,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x58fU))));
    bufp->fullIData(oldp+388,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x56fU, 0x20U)),32);
    bufp->fullIData(oldp+389,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x54fU, 0x20U)),32);
    bufp->fullSData(oldp+390,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x53fU, 0x10U))),16);
    bufp->fullCData(oldp+391,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x53bU, 4U))),4);
    bufp->fullCData(oldp+392,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x537U, 4U))),4);
    bufp->fullBit(oldp+393,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nrd_FIFO_last));
    bufp->fullBit(oldp+394,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nrd_FIFO_valid));
    bufp->fullBit(oldp+395,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nwr_FIFO_valid));
    bufp->fullCData(oldp+396,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_wrt_ptr),4);
    bufp->fullCData(oldp+397,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_rd_ptr),4);
    bufp->fullCData(oldp+398,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nrd_ptr),4);
    bufp->fullCData(oldp+399,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nwrt_ptr),4);
    bufp->fullQData(oldp+400,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0U, 0x40U)),64);
    bufp->fullQData(oldp+402,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x40U, 0x40U)),64);
    bufp->fullQData(oldp+404,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x80U, 0x40U)),64);
    bufp->fullQData(oldp+406,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0xc0U, 0x40U)),64);
    bufp->fullQData(oldp+408,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x100U, 0x40U)),64);
    bufp->fullQData(oldp+410,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x140U, 0x40U)),64);
    bufp->fullQData(oldp+412,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x180U, 0x40U)),64);
    bufp->fullQData(oldp+414,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x1c0U, 0x40U)),64);
    bufp->fullQData(oldp+416,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x200U, 0x40U)),64);
    bufp->fullQData(oldp+418,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x240U, 0x40U)),64);
    bufp->fullQData(oldp+420,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x280U, 0x40U)),64);
    bufp->fullQData(oldp+422,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x2c0U, 0x40U)),64);
    bufp->fullQData(oldp+424,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x300U, 0x40U)),64);
    bufp->fullQData(oldp+426,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x340U, 0x40U)),64);
    bufp->fullQData(oldp+428,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x380U, 0x40U)),64);
    bufp->fullQData(oldp+430,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x3c0U, 0x40U)),64);
    bufp->fullBit(oldp+432,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nout_order_req_l));
    bufp->fullBit(oldp+433,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nACK_rcv_flag_l));
    bufp->fullIData(oldp+434,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nACK_num_l),32);
    bufp->fullBit(oldp+435,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_debug_1));
    bufp->fullBit(oldp+436,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_debug_2));
    bufp->fullBit(oldp+437,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nrd_upd));
    bufp->fullSData(oldp+438,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nbytes_abt_sent_msg_rd),16);
    bufp->fullSData(oldp+439,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nchecksum_l),16);
    bufp->fullIData(oldp+440,(vlSymsp->TOP__top__u_tcp.__PVT__ISN_num),32);
    bufp->fullIData(oldp+441,(vlSymsp->TOP__top__u_tcp__ISN_gen.__PVT__ISN_num),32);
    bufp->fullIData(oldp+442,(vlSymsp->TOP__top__u_tcp__ISN_gen.__PVT__counter),32);
    bufp->fullBit(oldp+443,(vlSymsp->TOP__top.axis_r_valid));
    bufp->fullQData(oldp+444,(vlSymsp->TOP__top.axis_rd_data),64);
    bufp->fullCData(oldp+446,(vlSymsp->TOP__top.__PVT__wr_ptr_out_int),4);
    bufp->fullCData(oldp+447,(vlSymsp->TOP__top.__PVT__wr_pfifo_len_int),4);
    bufp->fullBit(oldp+448,(vlSymsp->TOP__top.__PVT__rd_pfifo_en_int));
    bufp->fullIData(oldp+449,(vlSymsp->TOP__top.__PVT__seq_rx_FIFO_rd_int),32);
    bufp->fullBit(oldp+450,(vlSymsp->TOP__top.__PVT__full));
    bufp->fullCData(oldp+451,(vlSymsp->TOP__top__u_payload_fifo.__PVT__wr_ptr_out),4);
    bufp->fullCData(oldp+452,(vlSymsp->TOP__top__u_payload_fifo.__PVT__wr_FIFO_len),4);
    bufp->fullBit(oldp+453,(vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_FIFO_en));
    bufp->fullIData(oldp+454,(vlSymsp->TOP__top__u_payload_fifo.__PVT__seq_rx_FIFO_rd),32);
    bufp->fullBit(oldp+455,(vlSymsp->TOP__top__u_payload_fifo.__PVT__full));
    bufp->fullBit(oldp+456,(vlSymsp->TOP__top__u_payload_fifo.__PVT__axis_r_valid));
    bufp->fullQData(oldp+457,(vlSymsp->TOP__top__u_payload_fifo.__PVT__axis_rd_data),64);
    bufp->fullQData(oldp+459,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                          [0U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+461,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                   [0U], 0U, 8U))),8);
    bufp->fullQData(oldp+462,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                          [1U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+464,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                   [1U], 0U, 8U))),8);
    bufp->fullQData(oldp+465,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                          [2U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+467,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                   [2U], 0U, 8U))),8);
    bufp->fullQData(oldp+468,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                          [3U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+470,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                   [3U], 0U, 8U))),8);
    bufp->fullQData(oldp+471,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                          [4U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+473,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                   [4U], 0U, 8U))),8);
    bufp->fullQData(oldp+474,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                          [5U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+476,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                   [5U], 0U, 8U))),8);
    bufp->fullQData(oldp+477,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                          [6U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+479,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                   [6U], 0U, 8U))),8);
    bufp->fullQData(oldp+480,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                          [7U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+482,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                   [7U], 0U, 8U))),8);
    bufp->fullQData(oldp+483,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                          [8U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+485,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                   [8U], 0U, 8U))),8);
    bufp->fullQData(oldp+486,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                          [9U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+488,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                   [9U], 0U, 8U))),8);
    bufp->fullQData(oldp+489,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                          [0xaU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+491,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                   [0xaU], 0U, 8U))),8);
    bufp->fullQData(oldp+492,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                          [0xbU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+494,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                   [0xbU], 0U, 8U))),8);
    bufp->fullQData(oldp+495,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                          [0xcU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+497,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                   [0xcU], 0U, 8U))),8);
    bufp->fullQData(oldp+498,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                          [0xdU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+500,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                   [0xdU], 0U, 8U))),8);
    bufp->fullQData(oldp+501,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                          [0xeU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+503,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                   [0xeU], 0U, 8U))),8);
    bufp->fullQData(oldp+504,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                          [0xfU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+506,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                   [0xfU], 0U, 8U))),8);
    bufp->fullQData(oldp+507,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__fifo_entry_rd, 8U, 0x40U)),64);
    bufp->fullCData(oldp+509,((0xffU & VL_SEL_IWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__fifo_entry_rd, 0U, 8U))),8);
    bufp->fullCData(oldp+510,(vlSymsp->TOP__top__u_payload_fifo.__PVT__flush_ptr),4);
    bufp->fullCData(oldp+511,(vlSymsp->TOP__top__u_payload_fifo.__PVT__len_TCP_flush),4);
    bufp->fullCData(oldp+512,(vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_len_ptr),4);
    bufp->fullIData(oldp+513,(vlSymsp->TOP__top__u_payload_fifo.__PVT__seq_trk_rd),32);
    bufp->fullCData(oldp+514,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_len),4);
    bufp->fullBit(oldp+515,(vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_FIFO_valid_l));
    bufp->fullBit(oldp+516,(vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_flush_l));
    bufp->fullQData(oldp+517,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[0]),64);
    bufp->fullQData(oldp+519,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[1]),64);
    bufp->fullQData(oldp+521,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[2]),64);
    bufp->fullQData(oldp+523,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[3]),64);
    bufp->fullQData(oldp+525,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[4]),64);
    bufp->fullQData(oldp+527,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[5]),64);
    bufp->fullQData(oldp+529,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[6]),64);
    bufp->fullQData(oldp+531,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[7]),64);
    bufp->fullQData(oldp+533,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[8]),64);
    bufp->fullQData(oldp+535,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[9]),64);
    bufp->fullQData(oldp+537,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[10]),64);
    bufp->fullQData(oldp+539,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[11]),64);
    bufp->fullQData(oldp+541,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[12]),64);
    bufp->fullQData(oldp+543,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[13]),64);
    bufp->fullQData(oldp+545,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[14]),64);
    bufp->fullQData(oldp+547,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[15]),64);
    bufp->fullCData(oldp+549,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[0]),8);
    bufp->fullCData(oldp+550,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[1]),8);
    bufp->fullCData(oldp+551,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[2]),8);
    bufp->fullCData(oldp+552,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[3]),8);
    bufp->fullCData(oldp+553,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[4]),8);
    bufp->fullCData(oldp+554,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[5]),8);
    bufp->fullCData(oldp+555,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[6]),8);
    bufp->fullCData(oldp+556,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[7]),8);
    bufp->fullCData(oldp+557,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[8]),8);
    bufp->fullCData(oldp+558,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[9]),8);
    bufp->fullCData(oldp+559,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[10]),8);
    bufp->fullCData(oldp+560,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[11]),8);
    bufp->fullCData(oldp+561,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[12]),8);
    bufp->fullCData(oldp+562,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[13]),8);
    bufp->fullCData(oldp+563,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[14]),8);
    bufp->fullCData(oldp+564,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[15]),8);
    bufp->fullCData(oldp+565,(vlSymsp->TOP__top__u_payload_fifo.__PVT__wr_ptr),4);
    bufp->fullCData(oldp+566,(vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_ptr),4);
    bufp->fullIData(oldp+567,(vlSymsp->TOP__top__u_payload_fifo.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+568,(vlSymsp->TOP__top__u_tcp.__PVT__wr_ptr_out),4);
    bufp->fullCData(oldp+569,(vlSymsp->TOP__top__u_tcp.__PVT__wr_FIFO_len),4);
    bufp->fullBit(oldp+570,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_en_rcv));
    bufp->fullIData(oldp+571,(vlSymsp->TOP__top__u_tcp.__PVT__seq_rx_FIFO_rd),32);
    bufp->fullBit(oldp+572,(vlSymsp->TOP__top__u_tcp.__PVT__full));
    bufp->fullBit(oldp+573,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__full));
    bufp->fullIData(oldp+574,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_rx_FIFO_rd),32);
    bufp->fullCData(oldp+575,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__wr_FIFO_len),8);
    bufp->fullSData(oldp+576,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__wr_FIFO_ptr),11);
    bufp->fullBit(oldp+577,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rd_FIFO_en));
    bufp->fullIData(oldp+578,(vlSymsp->TOP__top.rcv_next),32);
    bufp->fullIData(oldp+579,(vlSymsp->TOP__top.seq_num),32);
    bufp->fullBit(oldp+580,(vlSymsp->TOP__top.__PVT__handshake_done_int));
    bufp->fullIData(oldp+581,(vlSymsp->TOP__top.__PVT__seq_rcv_start_int),32);
    bufp->fullBit(oldp+582,(vlSymsp->TOP__top.__PVT__out_order_req_int));
    bufp->fullBit(oldp+583,(vlSymsp->TOP__top__u_payload_fifo.__PVT__handshake_done));
    bufp->fullIData(oldp+584,(vlSymsp->TOP__top__u_payload_fifo.__PVT__seq_rcv_start),32);
    bufp->fullBit(oldp+585,(vlSymsp->TOP__top__u_tcp.__PVT__handshake_done));
    bufp->fullIData(oldp+586,(vlSymsp->TOP__top__u_tcp.__PVT__seq_rcv_start),32);
    bufp->fullBit(oldp+587,(vlSymsp->TOP__top__u_tcp.__PVT__out_order_req));
    bufp->fullIData(oldp+588,(vlSymsp->TOP__top__u_tcp.__PVT__rcv_next),32);
    bufp->fullIData(oldp+589,(vlSymsp->TOP__top__u_tcp.__PVT__seq_num),32);
    bufp->fullBit(oldp+590,(vlSymsp->TOP__top__u_tcp.__PVT__clear_timeout));
    bufp->fullBit(oldp+591,(vlSymsp->TOP__top__u_tcp.__PVT__count_en_timeout));
    bufp->fullBit(oldp+592,(vlSymsp->TOP__top__u_fifo_tx.__PVT__hand_shake_done));
    bufp->fullBit(oldp+593,(vlSymsp->TOP__top__u_fifo_tx.__PVT__out_order_req));
    bufp->fullBit(oldp+594,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__hand_shake_done));
    bufp->fullIData(oldp+595,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_rcv_str),32);
    bufp->fullIData(oldp+596,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_next_out),32);
    bufp->fullIData(oldp+597,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_num_out),32);
    bufp->fullBit(oldp+598,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__out_order_req));
    bufp->fullBit(oldp+599,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__count_en_timeout));
    bufp->fullBit(oldp+600,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__clear_timeout));
    bufp->fullCData(oldp+601,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__state),7);
    bufp->fullCData(oldp+602,((7U & VL_SEL_IQII(35, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ack_num, 0x20U, 3U))),3);
    bufp->fullIData(oldp+603,(VL_SEL_IQII(35, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ack_num, 0U, 0x20U)),32);
    bufp->fullBit(oldp+604,((1U & VL_BITSEL_IQII(33, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_num, 0x20U))));
    bufp->fullIData(oldp+605,(VL_SEL_IQII(33, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_num, 0U, 0x20U)),32);
    bufp->fullSData(oldp+606,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__window_size),16);
    bufp->fullBit(oldp+607,((1U & VL_BITSEL_IWII(97, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                 [0U], 0x60U))));
    bufp->fullIData(oldp+608,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                          [0U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+609,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                          [0U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+610,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [0U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+611,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [0U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+612,((1U & VL_BITSEL_IWII(97, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                 [1U], 0x60U))));
    bufp->fullIData(oldp+613,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                          [1U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+614,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                          [1U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+615,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [1U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+616,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [1U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+617,((1U & VL_BITSEL_IWII(97, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                 [2U], 0x60U))));
    bufp->fullIData(oldp+618,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                          [2U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+619,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                          [2U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+620,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [2U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+621,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [2U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+622,((1U & VL_BITSEL_IWII(97, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                 [3U], 0x60U))));
    bufp->fullIData(oldp+623,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                          [3U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+624,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                          [3U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+625,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [3U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+626,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [3U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+627,((1U & VL_BITSEL_IWII(97, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                 [4U], 0x60U))));
    bufp->fullIData(oldp+628,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                          [4U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+629,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                          [4U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+630,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [4U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+631,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [4U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+632,((1U & VL_BITSEL_IWII(97, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                 [5U], 0x60U))));
    bufp->fullIData(oldp+633,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                          [5U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+634,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                          [5U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+635,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [5U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+636,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [5U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+637,((1U & VL_BITSEL_IWII(97, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                 [6U], 0x60U))));
    bufp->fullIData(oldp+638,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                          [6U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+639,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                          [6U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+640,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [6U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+641,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [6U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+642,((1U & VL_BITSEL_IWII(97, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                 [7U], 0x60U))));
    bufp->fullIData(oldp+643,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                          [7U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+644,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                          [7U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+645,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [7U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+646,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [7U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+647,((1U & VL_BITSEL_IWII(97, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                 [8U], 0x60U))));
    bufp->fullIData(oldp+648,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                          [8U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+649,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                          [8U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+650,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [8U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+651,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [8U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+652,((1U & VL_BITSEL_IWII(97, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                 [9U], 0x60U))));
    bufp->fullIData(oldp+653,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                          [9U], 0x40U, 0x20U)),32);
    bufp->fullIData(oldp+654,(VL_SEL_IWII(97, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                          [9U], 0x20U, 0x20U)),32);
    bufp->fullSData(oldp+655,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [9U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+656,((0xffffU & VL_SEL_IWII(97, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [9U], 0U, 0x10U))),16);
    bufp->fullIData(oldp+657,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_next),32);
    bufp->fullIData(oldp+658,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_next_prev),32);
    bufp->fullIData(oldp+659,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_tx_retrans),32);
    bufp->fullCData(oldp+660,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__free_idx),4);
    bufp->fullCData(oldp+661,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__match_idx),4);
    bufp->fullSData(oldp+662,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__v_vec),10);
    bufp->fullSData(oldp+663,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__free_vec),10);
    bufp->fullBit(oldp+664,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__free_mask));
    bufp->fullBit(oldp+665,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__match_found));
    bufp->fullCData(oldp+666,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_ptr),4);
    bufp->fullCData(oldp+667,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__len_flush_ptr),4);
    bufp->fullSData(oldp+668,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__match_mask),10);
    bufp->fullIData(oldp+669,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_rx_trk),32);
    bufp->fullIData(oldp+670,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_rx_str),32);
    bufp->fullCData(oldp+671,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0U, 4U))),4);
    bufp->fullCData(oldp+672,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 4U, 4U))),4);
    bufp->fullCData(oldp+673,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 8U, 4U))),4);
    bufp->fullCData(oldp+674,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0xcU, 4U))),4);
    bufp->fullCData(oldp+675,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0x10U, 4U))),4);
    bufp->fullCData(oldp+676,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0x14U, 4U))),4);
    bufp->fullCData(oldp+677,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0x18U, 4U))),4);
    bufp->fullCData(oldp+678,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0x1cU, 4U))),4);
    bufp->fullCData(oldp+679,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0x20U, 4U))),4);
    bufp->fullCData(oldp+680,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0x24U, 4U))),4);
    bufp->fullIData(oldp+681,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__unnamedblk1__DOT__x),32);
    bufp->fullIData(oldp+682,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__unnamedblk2__DOT__x),32);
    bufp->fullBit(oldp+683,(vlSymsp->TOP__top__u_tcp__timeout_fl.__PVT__clear));
    bufp->fullBit(oldp+684,(vlSymsp->TOP__top__u_tcp__timeout_fl.__PVT__count_enable));
    bufp->fullSData(oldp+685,(vlSymsp->TOP__top__u_tcp__tcp_flow__me.__PVT__din),10);
    bufp->fullBit(oldp+686,(vlSymsp->TOP__top__u_tcp__tcp_flow__me.__PVT__valid));
    bufp->fullCData(oldp+687,(vlSymsp->TOP__top__u_tcp__tcp_flow__me.__PVT__idx),4);
    bufp->fullIData(oldp+688,(vlSymsp->TOP__top__u_tcp__tcp_flow__me.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullSData(oldp+689,(vlSymsp->TOP__top__u_tcp__tcp_flow__pe.__PVT__din),10);
    bufp->fullBit(oldp+690,(vlSymsp->TOP__top__u_tcp__tcp_flow__pe.__PVT__valid));
    bufp->fullCData(oldp+691,(vlSymsp->TOP__top__u_tcp__tcp_flow__pe.__PVT__idx),4);
    bufp->fullIData(oldp+692,(vlSymsp->TOP__top__u_tcp__tcp_flow__pe.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullSData(oldp+693,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_checksum_out),16);
    bufp->fullSData(oldp+694,(vlSymsp->TOP__top__u_tcp__inst.__PVT__TCP_checksum_out),16);
    bufp->fullIData(oldp+695,(vlSymsp->TOP__top__u_tcp__inst.__PVT__TCP_checksum),17);
    bufp->fullIData(oldp+696,(vlSymsp->TOP__top__u_tcp__inst.__PVT__TCP_checksum_send),17);
    bufp->fullBit(oldp+697,(vlSymsp->TOP__top__u_tcp.__PVT__timeout_flag));
    bufp->fullBit(oldp+698,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__timeout_flag));
    bufp->fullIData(oldp+699,(vlSymsp->TOP__top__u_tcp__timeout_fl.__PVT__count_out),32);
    bufp->fullBit(oldp+700,(vlSymsp->TOP__top__u_tcp__timeout_fl.__PVT__rollover_flag));
    bufp->fullQData(oldp+701,(vlSymsp->TOP__top.__PVT__rd_ftx_payload_int),64);
    bufp->fullBit(oldp+703,(vlSymsp->TOP__top.__PVT__rd_ftx_valid_int));
    bufp->fullBit(oldp+704,(vlSymsp->TOP__top.__PVT__rd_ftx_last_int));
    bufp->fullSData(oldp+705,(vlSymsp->TOP__top.__PVT__bytes_abt_sent_int),16);
    bufp->fullBit(oldp+706,(vlSymsp->TOP__top.__PVT__re_trans_int));
    bufp->fullBit(oldp+707,(vlSymsp->TOP__top.__PVT__rd_FIFO_valid_tx));
    bufp->fullBit(oldp+708,(vlSymsp->TOP__top.__PVT__rd_FIFO_last));
    bufp->fullQData(oldp+709,(vlSymsp->TOP__top.__PVT__rd_FIFO_payload),64);
    bufp->fullSData(oldp+711,(vlSymsp->TOP__top.__PVT__bytes_abt_sent),16);
    bufp->fullBit(oldp+712,(vlSymsp->TOP__top.__PVT__wr_TX_full));
    bufp->fullQData(oldp+713,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_payload),64);
    bufp->fullBit(oldp+715,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_valid_tx));
    bufp->fullBit(oldp+716,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_last));
    bufp->fullSData(oldp+717,(vlSymsp->TOP__top__u_tcp.__PVT__bytes_abt_sent),16);
    bufp->fullBit(oldp+718,(vlSymsp->TOP__top__u_tcp.__PVT__re_trans));
    bufp->fullBit(oldp+719,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_FIFO_valid));
    bufp->fullBit(oldp+720,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_FIFO_last));
    bufp->fullQData(oldp+721,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_FIFO_payload),64);
    bufp->fullSData(oldp+723,(vlSymsp->TOP__top__u_fifo_tx.__PVT__bytes_abt_sent),16);
    bufp->fullBit(oldp+724,(vlSymsp->TOP__top__u_fifo_tx.__PVT__wr_FIFO_valid));
    bufp->fullBit(oldp+725,(vlSymsp->TOP__top__u_fifo_tx.__PVT__re_trans));
    bufp->fullSData(oldp+726,(vlSymsp->TOP__top__u_fifo_tx.__PVT__bytes_msg_trk),16);
    bufp->fullCData(oldp+727,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ptr_str),4);
    bufp->fullCData(oldp+728,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ptr_end),4);
    bufp->fullCData(oldp+729,(vlSymsp->TOP__top__u_fifo_tx.__PVT__flush_ptr),4);
    bufp->fullSData(oldp+730,(vlSymsp->TOP__top__u_fifo_tx.__PVT__bytes_abt_sent_msg),16);
    bufp->fullCData(oldp+731,(vlSymsp->TOP__top__u_fifo_tx.__PVT__msg_end_ptr),4);
    bufp->fullCData(oldp+732,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_state),2);
    bufp->fullCData(oldp+733,(vlSymsp->TOP__top__u_fifo_tx.__PVT__wr_state),2);
    bufp->fullBit(oldp+734,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x58U))));
    bufp->fullIData(oldp+735,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x38U, 0x20U)),32);
    bufp->fullIData(oldp+736,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x18U, 0x20U)),32);
    bufp->fullSData(oldp+737,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 8U, 0x10U))),16);
    bufp->fullCData(oldp+738,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 4U, 4U))),4);
    bufp->fullCData(oldp+739,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0U, 4U))),4);
    bufp->fullBit(oldp+740,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0xb1U))));
    bufp->fullIData(oldp+741,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x91U, 0x20U)),32);
    bufp->fullIData(oldp+742,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x71U, 0x20U)),32);
    bufp->fullSData(oldp+743,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x61U, 0x10U))),16);
    bufp->fullCData(oldp+744,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x5dU, 4U))),4);
    bufp->fullCData(oldp+745,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x59U, 4U))),4);
    bufp->fullBit(oldp+746,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x10aU))));
    bufp->fullIData(oldp+747,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0xeaU, 0x20U)),32);
    bufp->fullIData(oldp+748,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0xcaU, 0x20U)),32);
    bufp->fullSData(oldp+749,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0xbaU, 0x10U))),16);
    bufp->fullCData(oldp+750,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0xb6U, 4U))),4);
    bufp->fullCData(oldp+751,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0xb2U, 4U))),4);
    bufp->fullBit(oldp+752,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x163U))));
    bufp->fullIData(oldp+753,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x143U, 0x20U)),32);
    bufp->fullIData(oldp+754,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x123U, 0x20U)),32);
    bufp->fullSData(oldp+755,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x113U, 0x10U))),16);
    bufp->fullCData(oldp+756,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x10fU, 4U))),4);
    bufp->fullCData(oldp+757,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x10bU, 4U))),4);
    bufp->fullBit(oldp+758,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x1bcU))));
    bufp->fullIData(oldp+759,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x19cU, 0x20U)),32);
    bufp->fullIData(oldp+760,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x17cU, 0x20U)),32);
    bufp->fullSData(oldp+761,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x16cU, 0x10U))),16);
    bufp->fullCData(oldp+762,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x168U, 4U))),4);
    bufp->fullCData(oldp+763,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x164U, 4U))),4);
    bufp->fullBit(oldp+764,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x215U))));
    bufp->fullIData(oldp+765,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x1f5U, 0x20U)),32);
    bufp->fullIData(oldp+766,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x1d5U, 0x20U)),32);
    bufp->fullSData(oldp+767,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x1c5U, 0x10U))),16);
    bufp->fullCData(oldp+768,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x1c1U, 4U))),4);
    bufp->fullCData(oldp+769,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x1bdU, 4U))),4);
    bufp->fullBit(oldp+770,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x26eU))));
    bufp->fullIData(oldp+771,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x24eU, 0x20U)),32);
    bufp->fullIData(oldp+772,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x22eU, 0x20U)),32);
    bufp->fullSData(oldp+773,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x21eU, 0x10U))),16);
    bufp->fullCData(oldp+774,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x21aU, 4U))),4);
    bufp->fullCData(oldp+775,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x216U, 4U))),4);
    bufp->fullBit(oldp+776,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x2c7U))));
    bufp->fullIData(oldp+777,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x2a7U, 0x20U)),32);
    bufp->fullIData(oldp+778,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x287U, 0x20U)),32);
    bufp->fullSData(oldp+779,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x277U, 0x10U))),16);
    bufp->fullCData(oldp+780,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x273U, 4U))),4);
    bufp->fullCData(oldp+781,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x26fU, 4U))),4);
    bufp->fullBit(oldp+782,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x320U))));
    bufp->fullIData(oldp+783,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x300U, 0x20U)),32);
    bufp->fullIData(oldp+784,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x2e0U, 0x20U)),32);
    bufp->fullSData(oldp+785,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x2d0U, 0x10U))),16);
    bufp->fullCData(oldp+786,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x2ccU, 4U))),4);
    bufp->fullCData(oldp+787,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x2c8U, 4U))),4);
    bufp->fullBit(oldp+788,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x379U))));
    bufp->fullIData(oldp+789,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x359U, 0x20U)),32);
    bufp->fullIData(oldp+790,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x339U, 0x20U)),32);
    bufp->fullSData(oldp+791,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x329U, 0x10U))),16);
    bufp->fullCData(oldp+792,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x325U, 4U))),4);
    bufp->fullCData(oldp+793,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x321U, 4U))),4);
    bufp->fullBit(oldp+794,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x3d2U))));
    bufp->fullIData(oldp+795,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x3b2U, 0x20U)),32);
    bufp->fullIData(oldp+796,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x392U, 0x20U)),32);
    bufp->fullSData(oldp+797,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x382U, 0x10U))),16);
    bufp->fullCData(oldp+798,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x37eU, 4U))),4);
    bufp->fullCData(oldp+799,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x37aU, 4U))),4);
    bufp->fullBit(oldp+800,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x42bU))));
    bufp->fullIData(oldp+801,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x40bU, 0x20U)),32);
    bufp->fullIData(oldp+802,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x3ebU, 0x20U)),32);
    bufp->fullSData(oldp+803,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x3dbU, 0x10U))),16);
    bufp->fullCData(oldp+804,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x3d7U, 4U))),4);
    bufp->fullCData(oldp+805,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x3d3U, 4U))),4);
    bufp->fullBit(oldp+806,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x484U))));
    bufp->fullIData(oldp+807,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x464U, 0x20U)),32);
    bufp->fullIData(oldp+808,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x444U, 0x20U)),32);
    bufp->fullSData(oldp+809,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x434U, 0x10U))),16);
    bufp->fullCData(oldp+810,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x430U, 4U))),4);
    bufp->fullCData(oldp+811,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x42cU, 4U))),4);
    bufp->fullBit(oldp+812,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x4ddU))));
    bufp->fullIData(oldp+813,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x4bdU, 0x20U)),32);
    bufp->fullIData(oldp+814,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x49dU, 0x20U)),32);
    bufp->fullSData(oldp+815,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x48dU, 0x10U))),16);
    bufp->fullCData(oldp+816,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x489U, 4U))),4);
    bufp->fullCData(oldp+817,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x485U, 4U))),4);
    bufp->fullBit(oldp+818,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x536U))));
    bufp->fullIData(oldp+819,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x516U, 0x20U)),32);
    bufp->fullIData(oldp+820,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x4f6U, 0x20U)),32);
    bufp->fullSData(oldp+821,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x4e6U, 0x10U))),16);
    bufp->fullCData(oldp+822,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x4e2U, 4U))),4);
    bufp->fullCData(oldp+823,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x4deU, 4U))),4);
    bufp->fullBit(oldp+824,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x58fU))));
    bufp->fullIData(oldp+825,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x56fU, 0x20U)),32);
    bufp->fullIData(oldp+826,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x54fU, 0x20U)),32);
    bufp->fullSData(oldp+827,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x53fU, 0x10U))),16);
    bufp->fullCData(oldp+828,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x53bU, 4U))),4);
    bufp->fullCData(oldp+829,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x537U, 4U))),4);
    bufp->fullBit(oldp+830,(vlSymsp->TOP__top__u_fifo_tx.__PVT__full));
    bufp->fullBit(oldp+831,(vlSymsp->TOP__top__u_fifo_tx.__PVT__empty));
    bufp->fullCData(oldp+832,(vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_wrt_ptr),4);
    bufp->fullCData(oldp+833,(vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_rd_ptr),4);
    bufp->fullCData(oldp+834,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_ptr),4);
    bufp->fullCData(oldp+835,(vlSymsp->TOP__top__u_fifo_tx.__PVT__wrt_ptr),4);
    bufp->fullQData(oldp+836,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0U, 0x40U)),64);
    bufp->fullQData(oldp+838,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x40U, 0x40U)),64);
    bufp->fullQData(oldp+840,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x80U, 0x40U)),64);
    bufp->fullQData(oldp+842,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0xc0U, 0x40U)),64);
    bufp->fullQData(oldp+844,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x100U, 0x40U)),64);
    bufp->fullQData(oldp+846,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x140U, 0x40U)),64);
    bufp->fullQData(oldp+848,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x180U, 0x40U)),64);
    bufp->fullQData(oldp+850,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x1c0U, 0x40U)),64);
    bufp->fullQData(oldp+852,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x200U, 0x40U)),64);
    bufp->fullQData(oldp+854,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x240U, 0x40U)),64);
    bufp->fullQData(oldp+856,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x280U, 0x40U)),64);
    bufp->fullQData(oldp+858,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x2c0U, 0x40U)),64);
    bufp->fullQData(oldp+860,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x300U, 0x40U)),64);
    bufp->fullQData(oldp+862,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x340U, 0x40U)),64);
    bufp->fullQData(oldp+864,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x380U, 0x40U)),64);
    bufp->fullQData(oldp+866,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x3c0U, 0x40U)),64);
    bufp->fullBit(oldp+868,(vlSymsp->TOP__top__u_fifo_tx.__PVT__out_order_req_l));
    bufp->fullBit(oldp+869,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ACK_rcv_flag_l));
    bufp->fullIData(oldp+870,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ACK_num_l),32);
    bufp->fullBit(oldp+871,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_upd));
    bufp->fullSData(oldp+872,(vlSymsp->TOP__top__u_fifo_tx.__PVT__bytes_abt_sent_msg_rd),16);
    bufp->fullSData(oldp+873,(vlSymsp->TOP__top__u_fifo_tx.__PVT__checksum_l),16);
    bufp->fullBit(oldp+874,(vlSymsp->TOP__top__u_tcp__inst.__PVT__re_trans));
    bufp->fullBit(oldp+875,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__rd_FIFO_valid));
    bufp->fullBit(oldp+876,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__rd_FIFO_last));
    bufp->fullQData(oldp+877,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__rd_FIFO_payload),64);
    bufp->fullIData(oldp+879,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__bytes_abt_sent),32);
    bufp->fullIData(oldp+880,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__bytes_abt_sent),32);
    bufp->fullQData(oldp+881,(vlSymsp->TOP__top.TCP_transmit),64);
    bufp->fullBit(oldp+883,(vlSymsp->TOP__top.TCP_last));
    bufp->fullBit(oldp+884,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_last));
    bufp->fullQData(oldp+885,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_transmit),64);
    bufp->fullBit(oldp+887,(vlSymsp->TOP__top__u_tcp.__PVT__seq_up));
    bufp->fullIData(oldp+888,(vlSymsp->TOP__top__u_tcp.__PVT__bytes_sent),32);
    bufp->fullBit(oldp+889,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__seq_up));
    bufp->fullIData(oldp+890,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__bytes_sent),32);
    bufp->fullBit(oldp+891,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_tx_valid));
    bufp->fullBit(oldp+892,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_tx_last));
    bufp->fullQData(oldp+893,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_transmit),64);
    bufp->fullIData(oldp+895,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_checksum),17);
    bufp->fullCData(oldp+896,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__state),7);
    bufp->fullBit(oldp+897,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_up));
    bufp->fullIData(oldp+898,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__bytes_sent),32);
    bufp->fullBit(oldp+899,(vlSymsp->TOP__top.__PVT__nw_segment));
    bufp->fullBit(oldp+900,(vlSymsp->TOP__top.__PVT__axis_t_last_int));
    bufp->fullQData(oldp+901,(vlSymsp->TOP__top.__PVT__axis_data_rx_int),64);
    bufp->fullIData(oldp+903,(vlSymsp->TOP__top.__PVT__ACK_num_int),32);
    bufp->fullBit(oldp+904,(vlSymsp->TOP__top.__PVT__ACK_rcv_flag_int));
    bufp->fullBit(oldp+905,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nw_segment));
    bufp->fullBit(oldp+906,(vlSymsp->TOP__top__u_payload_fifo.__PVT__axis_t_last));
    bufp->fullQData(oldp+907,(vlSymsp->TOP__top__u_payload_fifo.__PVT__axis_data_rx),64);
    bufp->fullBit(oldp+909,(vlSymsp->TOP__top__u_tcp.__PVT__nw_segment));
    bufp->fullBit(oldp+910,(vlSymsp->TOP__top__u_tcp.__PVT__axis_t_last));
    bufp->fullQData(oldp+911,(vlSymsp->TOP__top__u_tcp.__PVT__axis_data_rx),64);
    bufp->fullIData(oldp+913,(vlSymsp->TOP__top__u_tcp.__PVT__ACK_num),32);
    bufp->fullBit(oldp+914,(vlSymsp->TOP__top__u_tcp.__PVT__ACK_rcv_flag));
    bufp->fullBit(oldp+915,(vlSymsp->TOP__top__u_tcp.__PVT__rcv_data));
    bufp->fullCData(oldp+916,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_control_rx),8);
    bufp->fullCData(oldp+917,(vlSymsp->TOP__top__u_tcp.__PVT__bytes_rcv),8);
    bufp->fullIData(oldp+918,(vlSymsp->TOP__top__u_tcp.__PVT__seq_num_rx),32);
    bufp->fullIData(oldp+919,(vlSymsp->TOP__top__u_tcp.__PVT__ACK_rx),32);
    bufp->fullCData(oldp+920,(vlSymsp->TOP__top__u_tcp.__PVT__offset_rx),4);
    bufp->fullSData(oldp+921,(vlSymsp->TOP__top__u_tcp.__PVT__window_size_rx),16);
    bufp->fullSData(oldp+922,(vlSymsp->TOP__top__u_tcp.__PVT__checksum_rx),16);
    bufp->fullSData(oldp+923,(vlSymsp->TOP__top__u_tcp.__PVT__urgent_pointer_rx),16);
    bufp->fullSData(oldp+924,(vlSymsp->TOP__top__u_tcp.__PVT__payload_len_rx),16);
    bufp->fullBit(oldp+925,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_valid));
    bufp->fullIData(oldp+926,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ACK_num),32);
    bufp->fullBit(oldp+927,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ACK_rcv_flag));
    bufp->fullBit(oldp+928,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__rcv_data));
    bufp->fullCData(oldp+929,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_control_rx),8);
    bufp->fullIData(oldp+930,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__seq_num_rx),32);
    bufp->fullIData(oldp+931,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__ACK_rx),32);
    bufp->fullCData(oldp+932,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__offset_rx),4);
    bufp->fullSData(oldp+933,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__window_size_rx),16);
    bufp->fullSData(oldp+934,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__checksum_rx),16);
    bufp->fullSData(oldp+935,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__urgent_pointer_rx),16);
    bufp->fullCData(oldp+936,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__bytes_rcv),8);
    bufp->fullSData(oldp+937,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_len_data),16);
    bufp->fullQData(oldp+938,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_payload_rx),64);
    bufp->fullBit(oldp+940,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_valid));
    bufp->fullBit(oldp+941,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nw_segment));
    bufp->fullBit(oldp+942,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_last));
    bufp->fullSData(oldp+943,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__bytes_trk),16);
    bufp->fullIData(oldp+944,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_checksum),17);
    bufp->fullCData(oldp+945,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__state),3);
    bufp->fullBit(oldp+946,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_data));
    bufp->fullCData(oldp+947,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_control_rx),8);
    bufp->fullIData(oldp+948,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_num_rx),32);
    bufp->fullIData(oldp+949,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ACK_rx),32);
    bufp->fullCData(oldp+950,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__offset_rx),4);
    bufp->fullSData(oldp+951,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__window_size_rx),16);
    bufp->fullSData(oldp+952,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__checksum_rx),16);
    bufp->fullSData(oldp+953,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__urgent_pointer_rx),16);
    bufp->fullIData(oldp+954,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__payload_len_rx),32);
    bufp->fullBit(oldp+955,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_last));
    bufp->fullCData(oldp+956,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_bytes_trk),8);
    bufp->fullBit(oldp+957,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nw_segment));
    bufp->fullIData(oldp+958,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ACK_num),32);
    bufp->fullBit(oldp+959,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ACK_rcv_flag));
    bufp->fullBit(oldp+960,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 7U))));
    bufp->fullBit(oldp+961,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 6U))));
    bufp->fullBit(oldp+962,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 5U))));
    bufp->fullBit(oldp+963,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 4U))));
    bufp->fullBit(oldp+964,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 3U))));
    bufp->fullBit(oldp+965,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 2U))));
    bufp->fullBit(oldp+966,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 1U))));
    bufp->fullBit(oldp+967,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 0U))));
    bufp->fullSData(oldp+968,(vlSymsp->TOP__top.__PVT__checksum_TX),16);
    bufp->fullSData(oldp+969,(vlSymsp->TOP__top__u_tcp.__PVT__checksum_TX),16);
    bufp->fullSData(oldp+970,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_basesum_payload),16);
    bufp->fullSData(oldp+971,(vlSymsp->TOP__top__u_fifo_tx.__PVT__checksum_TX),16);
    bufp->fullSData(oldp+972,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_basesum_payload),16);
    bufp->fullIData(oldp+973,(vlSymsp->TOP__top.__PVT__seq_num_tx),32);
    bufp->fullIData(oldp+974,(vlSymsp->TOP__top__u_tcp.__PVT__seq_num_tx_out),32);
    bufp->fullCData(oldp+975,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_control_tx),8);
    bufp->fullIData(oldp+976,(vlSymsp->TOP__top__u_tcp.__PVT__seq_num_tx),32);
    bufp->fullIData(oldp+977,(vlSymsp->TOP__top__u_tcp.__PVT__ACK_tx),32);
    bufp->fullCData(oldp+978,(vlSymsp->TOP__top__u_tcp.__PVT__offset_tx),4);
    bufp->fullSData(oldp+979,(vlSymsp->TOP__top__u_tcp.__PVT__window_size_tx),16);
    bufp->fullSData(oldp+980,(vlSymsp->TOP__top__u_tcp.__PVT__urgent_pointer_tx),16);
    bufp->fullIData(oldp+981,(vlSymsp->TOP__top__u_fifo_tx.__PVT__seq_num_tx),32);
    bufp->fullCData(oldp+982,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_control_tx),8);
    bufp->fullIData(oldp+983,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__seq_num_tx),32);
    bufp->fullIData(oldp+984,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__ACK_tx),32);
    bufp->fullCData(oldp+985,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__offset_tx),4);
    bufp->fullSData(oldp+986,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__window_size_tx),16);
    bufp->fullSData(oldp+987,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__urgent_pointer_tx),16);
    bufp->fullCData(oldp+988,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_control_tx),8);
    bufp->fullIData(oldp+989,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_num_tx),32);
    bufp->fullIData(oldp+990,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ACK_tx),32);
    bufp->fullCData(oldp+991,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__offset_tx),4);
    bufp->fullSData(oldp+992,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__window_size_tx),16);
    bufp->fullSData(oldp+993,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__urgent_pointer_tx),16);
    bufp->fullBit(oldp+994,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 7U))));
    bufp->fullBit(oldp+995,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 6U))));
    bufp->fullBit(oldp+996,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 5U))));
    bufp->fullBit(oldp+997,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 4U))));
    bufp->fullBit(oldp+998,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 3U))));
    bufp->fullBit(oldp+999,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 2U))));
    bufp->fullBit(oldp+1000,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 1U))));
    bufp->fullBit(oldp+1001,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 0U))));
    bufp->fullBit(oldp+1002,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nhand_shake_done));
    bufp->fullBit(oldp+1003,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__debug));
    bufp->fullSData(oldp+1004,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__overlap_mask),10);
    bufp->fullSData(oldp+1005,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__left_trim_mask),10);
    bufp->fullSData(oldp+1006,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__right_trim_mask),10);
    bufp->fullCData(oldp+1007,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__lt_idx),4);
    bufp->fullCData(oldp+1008,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rt_idx),4);
    bufp->fullSData(oldp+1009,(vlSymsp->TOP__top__u_tcp__tcp_flow__lt.__PVT__din),10);
    bufp->fullBit(oldp+1010,(vlSymsp->TOP__top__u_tcp__tcp_flow__lt.__PVT__valid));
    bufp->fullCData(oldp+1011,(vlSymsp->TOP__top__u_tcp__tcp_flow__lt.__PVT__idx),4);
    bufp->fullIData(oldp+1012,(vlSymsp->TOP__top__u_tcp__tcp_flow__lt.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullSData(oldp+1013,(vlSymsp->TOP__top__u_tcp__tcp_flow__rt.__PVT__din),10);
    bufp->fullBit(oldp+1014,(vlSymsp->TOP__top__u_tcp__tcp_flow__rt.__PVT__valid));
    bufp->fullCData(oldp+1015,(vlSymsp->TOP__top__u_tcp__tcp_flow__rt.__PVT__idx),4);
    bufp->fullIData(oldp+1016,(vlSymsp->TOP__top__u_tcp__tcp_flow__rt.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullSData(oldp+1017,(vlSymsp->TOP__top__u_tcp__tcp_flow__ov.__PVT__din),10);
    bufp->fullBit(oldp+1018,(vlSymsp->TOP__top__u_tcp__tcp_flow__ov.__PVT__valid));
    bufp->fullCData(oldp+1019,(vlSymsp->TOP__top__u_tcp__tcp_flow__ov.__PVT__idx),4);
    bufp->fullIData(oldp+1020,(vlSymsp->TOP__top__u_tcp__tcp_flow__ov.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+1021,(vlSelfRef.CLK));
    bufp->fullBit(oldp+1022,(vlSelfRef.nRST));
    bufp->fullCData(oldp+1023,(vlSelfRef.tb_count),8);
    bufp->fullBit(oldp+1024,(vlSelfRef.IP_valid));
    bufp->fullBit(oldp+1025,(vlSelfRef.IP_flush));
    bufp->fullSData(oldp+1026,(vlSelfRef.IP_pseuder),16);
    bufp->fullQData(oldp+1027,(vlSelfRef.IP_payload),64);
    bufp->fullSData(oldp+1029,(vlSelfRef.TCP_len),16);
    bufp->fullCData(oldp+1030,(vlSelfRef.IP_bytes_rcv),8);
    bufp->fullBit(oldp+1031,(vlSelfRef.TCP_send));
    bufp->fullQData(oldp+1032,(vlSelfRef.TCP_transmit),64);
    bufp->fullBit(oldp+1034,(vlSelfRef.TCP_last));
    bufp->fullBit(oldp+1035,(vlSelfRef.TX_en));
    bufp->fullBit(oldp+1036,(vlSelfRef.axis_last));
    bufp->fullBit(oldp+1037,(vlSelfRef.wr_FIFO_en));
    bufp->fullIData(oldp+1038,(vlSelfRef.len_seq),32);
    bufp->fullQData(oldp+1039,(vlSelfRef.soupbin_TCP_payload),64);
    bufp->fullBit(oldp+1041,(vlSelfRef.axis_r_en));
    bufp->fullBit(oldp+1042,(vlSelfRef.axis_r_valid));
    bufp->fullQData(oldp+1043,(vlSelfRef.axis_rd_data),64);
    bufp->fullBit(oldp+1045,(vlSelfRef.TCP_stop_flag));
    bufp->fullIData(oldp+1046,(vlSelfRef.rcv_next),32);
    bufp->fullIData(oldp+1047,(vlSelfRef.seq_num),32);
    bufp->fullBit(oldp+1048,(vlSelfRef.wr_FIFO_full));
    bufp->fullBit(oldp+1049,(vlSymsp->TOP__top__u_tcp__inst.__PVT__up_send));
    bufp->fullIData(oldp+1050,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nTCP_checksum),17);
    bufp->fullIData(oldp+1051,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__temp),20);
    bufp->fullIData(oldp+1052,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ISN_num),32);
    bufp->fullIData(oldp+1053,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__bytes_in_flight),32);
    bufp->fullIData(oldp+1054,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__wnd_allow),32);
    bufp->fullIData(oldp+1055,(vlSymsp->TOP__top__u_tcp__timeout_fl.__PVT__nxt_count_out),32);
    bufp->fullBit(oldp+1056,(vlSymsp->TOP__top__u_tcp__timeout_fl.__PVT__nxt_rollover_flag));
}
