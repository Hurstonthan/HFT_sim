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
    tracep->declBit(c+978,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+979,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+980,0,"tb_count",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+981,0,"IP_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+982,0,"IP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+983,0,"IP_pseuder",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+984,0,"IP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+986,0,"TCP_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+987,0,"IP_bytes_rcv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+988,0,"TCP_send",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+989,0,"TCP_transmit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+991,0,"TCP_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+992,0,"TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+993,0,"axis_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+994,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+995,0,"len_seq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+996,0,"soupbin_TCP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+998,0,"axis_r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+999,0,"axis_r_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1000,0,"axis_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1002,0,"TCP_stop_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1003,0,"rcv_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1004,0,"seq_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1005,0,"wr_FIFO_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
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
    tracep->declBus(c+1016,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1017,0,"FIFO_DEPTH_TX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1017,0,"FIFO_DEPTH_RX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1018,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
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
    tracep->declQuad(c+861,0,"TCP_transmit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+863,0,"TCP_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"axis_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"len_seq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+28,0,"soupbin_TCP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+30,0,"axis_r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+440,0,"axis_r_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+441,0,"axis_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+121,0,"TCP_stop_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+575,0,"rcv_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+576,0,"seq_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1019,0,"wr_FIFO_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1020,0,"FIFO_WIDTH_TX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1020,0,"FIFO_WIDTH_RX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+879,0,"nw_segment",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+880,0,"axis_t_last_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"TCP_flush_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+881,0,"axis_data_rx_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+577,0,"handshake_done_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+578,0,"seq_rcv_start_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+122,0,"wr_pfifo_en_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"wr_pfifo_offset_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+443,0,"wr_ptr_out_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+444,0,"wr_pfifo_len_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+124,0,"rd_pfifo_valid_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+125,0,"rd_pfifo_ptr_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+126,0,"rd_pfifo_len_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+445,0,"rd_pfifo_en_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+446,0,"seq_rx_FIFO_rd_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+109,0,"rd_ftx_en_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+681,0,"rd_ftx_payload_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+683,0,"rd_ftx_valid_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+684,0,"rd_ftx_last_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+685,0,"bytes_abt_sent_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+883,0,"ACK_num_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+884,0,"ACK_rcv_flag_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"out_order_req_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"TCP_stop_flg_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"end_ss_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+686,0,"re_trans_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"checksum_re_trans_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1021,0,"seq_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+948,0,"seq_num_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1022,0,"checksum_TX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+447,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+687,0,"rd_FIFO_valid_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+688,0,"rd_FIFO_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+689,0,"rd_FIFO_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+691,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("u_tcp", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__top__u_tcp__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("u_payload_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__top__u_payload_fifo__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("u_fifo_tx", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__top__u_fifo_tx__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+692,0,"wr_TX_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_payload_fifo__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__u_payload_fifo__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1017,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1016,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1018,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1018,0,"WORD_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1020,0,"FIFO_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1023,0,"WINDOW_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+31,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+885,0,"nw_segment",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"TCP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+886,0,"axis_t_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+887,0,"axis_data_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+579,0,"handshake_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+580,0,"seq_rcv_start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+129,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+130,0,"wr_FIFO_offset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+448,0,"wr_ptr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+449,0,"wr_FIFO_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+131,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+132,0,"rd_FIFO_ptr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+133,0,"rd_FIFO_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+450,0,"rd_FIFO_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+451,0,"seq_rx_FIFO_rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+452,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"axis_r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+453,0,"axis_r_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+454,0,"axis_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("TCP_FIFO", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+456,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+458,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+459,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+461,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+462,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+464,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+465,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+467,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+468,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+470,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+471,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+473,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+474,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+476,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+477,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+479,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+480,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+482,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+483,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+485,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+486,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+488,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+489,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+491,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+492,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+494,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+495,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+497,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+498,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+500,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+501,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+503,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("nTCP_FIFO", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+134,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+136,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+137,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+139,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+140,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+142,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+143,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+145,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+146,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+148,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+149,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+151,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+152,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+154,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+155,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+157,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+158,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+160,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+161,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+163,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+164,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+166,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+167,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+169,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+170,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+172,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+173,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+175,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+176,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+178,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+179,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+181,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fifo_entry_rd", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+504,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+506,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->declBus(c+507,0,"flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+182,0,"nflush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+508,0,"len_TCP_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+183,0,"nlen_TCP_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+509,0,"rd_len_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+184,0,"nrd_len_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+510,0,"seq_trk_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+185,0,"nseq_trk_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+511,0,"bytes_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+512,0,"rd_FIFO_valid_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"nrd_FIFO_valid_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"naxis_r_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+513,0,"TCP_flush_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"nTCP_flush_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("payload", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+514+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("bytes_offset", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+546+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+562,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+189,0,"nwr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+563,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+190,0,"nrd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+564,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
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
    tracep->declBus(c+1024,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1017,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1018,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1018,0,"WORD_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1020,0,"FIFO_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1023,0,"WINDOW_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+34,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"IP_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"IP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"IP_pseuder",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+40,0,"IP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+42,0,"TCP_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+43,0,"IP_bytes_rcv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+889,0,"nw_segment",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+890,0,"axis_t_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"TCP_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+891,0,"axis_data_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+581,0,"handshake_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+582,0,"seq_rcv_start",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+191,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+192,0,"wr_FIFO_offset",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+193,0,"rd_FIFO_valid_rcv",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+194,0,"rd_FIFO_ptr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+195,0,"rd_FIFO_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+565,0,"wr_ptr_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+566,0,"wr_FIFO_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+567,0,"rd_FIFO_en_rcv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+568,0,"seq_rx_FIFO_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+569,0,"full",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+893,0,"ACK_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+894,0,"ACK_rcv_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"out_order_req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"TCP_stop_flg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"end_ss",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+693,0,"rd_FIFO_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+695,0,"rd_FIFO_valid_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+696,0,"rd_FIFO_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+697,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+110,0,"rd_FIFO_en_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+949,0,"seq_num_tx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+44,0,"TCP_send",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+864,0,"TCP_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+865,0,"TCP_transmit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+698,0,"re_trans",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"checksum_re_trans",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+45,0,"wr_FIFO_TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"wr_axis_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+47,0,"soupbin_TCP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+583,0,"rcv_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+584,0,"seq_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+895,0,"rcv_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+896,0,"TCP_control_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+897,0,"bytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+898,0,"seq_num_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+899,0,"ACK_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+900,0,"offset_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+901,0,"window_size_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+902,0,"checksum_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+903,0,"urgent_pointer_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+904,0,"payload_len_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+867,0,"seq_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+950,0,"TCP_control_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+951,0,"seq_num_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+952,0,"ACK_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+437,0,"ISN_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+868,0,"bytes_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+953,0,"offset_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+954,0,"window_size_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+955,0,"urgent_pointer_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1006,0,"TCP_basesum_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+677,0,"TCP_checksum_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("tcp_flow", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_flow__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+1025,0,"timeout_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("tcp_rcv", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_rcv__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+905,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
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

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_fifo_tx__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__u_fifo_tx__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1024,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1026,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1027,0,"FIFO_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+49,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"seq_up",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+956,0,"seq_num_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+111,0,"rd_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+585,0,"hand_shake_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"checksum_TX",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+699,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+700,0,"rd_FIFO_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+701,0,"rd_FIFO_payload",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+703,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+906,0,"ACK_num",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+907,0,"ACK_rcv_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"out_order_req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1028,0,"TCP_stop_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1029,0,"end_ss",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"axis_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"len_seq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+55,0,"soupbin_TCP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+704,0,"wr_FIFO_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+705,0,"re_trans",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1030,0,"checksum_re_trans",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+199,0,"nbytes_abt_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+706,0,"bytes_msg_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+200,0,"nbytes_msg_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+201,0,"nrd_FIFO_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+707,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+203,0,"nptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+708,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+204,0,"nptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+709,0,"flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+205,0,"nflush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+710,0,"bytes_abt_sent_msg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+206,0,"nbytes_abt_sent_msg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+711,0,"msg_end_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+207,0,"nmsg_end_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+712,0,"rd_state",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+208,0,"nrd_state",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+713,0,"wr_state",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+209,0,"nwr_state",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("dict_tx", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+714,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+715,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+716,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+717,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+718,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+719,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+720,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+721,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+722,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+723,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+724,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+725,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+726,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+727,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+728,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+729,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+730,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+731,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+732,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+733,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+734,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+735,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+736,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+737,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+738,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+739,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+740,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+741,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+742,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+743,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+744,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+745,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+746,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+747,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+748,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+749,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+750,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+751,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+752,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+753,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+754,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+755,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+756,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+757,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+758,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+759,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+760,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+761,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+762,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+763,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+764,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+765,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+766,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+767,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+768,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+769,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+770,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+771,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+772,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+773,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+774,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+775,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+776,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+777,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+778,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+779,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+780,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+781,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+782,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+783,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+784,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+785,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+786,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+787,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+788,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+789,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+790,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+791,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+792,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+793,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+794,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+795,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+796,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+797,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+798,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+799,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+800,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+801,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+802,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+803,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+804,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+805,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+806,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+807,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+808,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+809,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ndict_tx", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+210,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+211,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+212,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+213,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+214,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+215,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+216,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+217,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+218,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+219,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+220,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+221,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+222,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+223,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+224,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+225,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+226,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+227,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+228,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+229,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+230,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+231,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+232,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+233,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+234,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+235,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+236,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+237,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+238,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+239,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+240,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+241,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+242,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+243,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+244,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+245,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+246,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+247,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+249,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+250,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+251,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+252,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+253,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+254,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+255,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+256,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+257,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+258,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+259,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+260,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+261,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+262,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+263,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+264,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+265,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+266,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+267,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+268,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+269,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+270,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+271,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+272,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+273,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+274,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+275,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+276,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+277,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+278,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+279,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+280,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+281,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+282,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+283,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+284,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+285,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+286,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+287,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+288,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+289,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+290,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+291,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+292,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+293,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+294,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+295,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+296,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+297,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+298,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+299,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+300,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+301,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+302,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+303,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+304,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+305,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+810,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+811,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+306,0,"nrd_FIFO_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+307,0,"nrd_FIFO_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+308,0,"nwr_FIFO_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+812,0,"dict_wrt_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+309,0,"ndict_wrt_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+813,0,"dict_rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+310,0,"ndict_rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+814,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+311,0,"nrd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+815,0,"wrt_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+312,0,"nwrt_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("TCP_tx_order", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declQuad(c+816,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+818,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+820,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+822,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+824,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+826,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+828,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+830,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+832,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+834,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+836,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+838,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+840,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+842,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+844,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+846,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("nTCP_tx_order", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declQuad(c+313,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+315,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+317,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+319,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+321,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+323,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+325,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+327,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+329,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+331,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+333,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+335,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+337,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+339,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+341,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+343,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->declBit(c+848,0,"out_order_req_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+345,0,"nout_order_req_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+849,0,"ACK_rcv_flag_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+346,0,"nACK_rcv_flag_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+850,0,"ACK_num_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+347,0,"nACK_num_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+348,0,"rd_debug_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"rd_debug_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+851,0,"rd_upd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+350,0,"nrd_upd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+852,0,"bytes_abt_sent_msg_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+351,0,"nbytes_abt_sent_msg_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+853,0,"checksum_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+352,0,"nchecksum_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_tcp__ISN_gen__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__u_tcp__ISN_gen__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1031,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+57,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"gen_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+438,0,"ISN_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+439,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_tcp__inst__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__u_tcp__inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1024,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+59,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"axis_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+63,0,"TCP_payload_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+65,0,"TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+854,0,"re_trans",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+678,0,"TCP_checksum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+104,0,"nTCP_checksum_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+679,0,"TCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+105,0,"nTCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+680,0,"TCP_checksum_send",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+106,0,"nTCP_checksum_send",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+107,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+108,0,"temp1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+1007,0,"up_send",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_tcp__TCP_tx__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__u_tcp__TCP_tx__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1024,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1032,0,"OFF_SET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1033,0,"SRC_PORT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1034,0,"DEST_PORT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+66,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+957,0,"TCP_control_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+958,0,"seq_num_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+959,0,"ACK_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+960,0,"offset_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+961,0,"window_size_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+962,0,"urgent_pointer_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+112,0,"rd_FIFO_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+855,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+856,0,"rd_FIFO_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+857,0,"rd_FIFO_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+859,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+869,0,"seq_up",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+870,0,"bytes_sent",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+68,0,"TCP_send",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+871,0,"TCP_tx_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+872,0,"TCP_tx_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+873,0,"TCP_transmit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1008,0,"TCP_basesum_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+9,0,"src_port",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+10,0,"dest_port",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+113,0,"nbytes_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+875,0,"TCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+1009,0,"nTCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBit(c+114,0,"valid_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+876,0,"state",3, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+115,0,"nstate",3, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declQuad(c+116,0,"nTCP_transmit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1010,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+118,0,"nTCP_tx_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"nTCP_tx_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"nseq_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_rcv__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_rcv__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1024,0,"WORD_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1032,0,"OFF_SET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1033,0,"SRC_PORT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1034,0,"DEST_PORT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1035,0,"IP_HEADER_LENGTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+69,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+71,0,"IP_payload_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+73,0,"valid_IP_header_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"IP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+75,0,"TCP_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+76,0,"IP_pseuder",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+908,0,"rcv_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+909,0,"TCP_control_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+910,0,"seq_num_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+911,0,"ACK_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+912,0,"offset_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+913,0,"window_size_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+914,0,"checksum_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+915,0,"urgent_pointer_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+916,0,"bytes_rcv",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+917,0,"TCP_len_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+918,0,"TCP_payload_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+920,0,"TCP_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"TCP_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+921,0,"nw_segment",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+922,0,"TCP_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"nTCP_control_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+84,0,"nseq_num_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"nACK_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"noffset_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+87,0,"nwindow_size_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+88,0,"nchecksum_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+89,0,"nurgent_pointer_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+923,0,"bytes_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+90,0,"nbytes_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1036,0,"checksum_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+91,0,"nTCP_len_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+924,0,"TCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+92,0,"nTCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+93,0,"TCP_checksum_comp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1037,0,"TCP_data_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1038,0,"nTCP_data_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+94,0,"nTCP_payload_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+96,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+97,0,"nTCP_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"nrcv_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1039,0,"checksum_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1040,0,"nchecksum_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"n_nw_segment",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"nTCP_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+101,0,"nbytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+925,0,"state",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+102,0,"nstate",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
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
    tracep->declBus(c+1041,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1042,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1043,0,"FIFO_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+77,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+926,0,"rcv_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+927,0,"TCP_control_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+928,0,"seq_num_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+929,0,"ACK_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+930,0,"offset_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+931,0,"window_size_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+932,0,"checksum_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+933,0,"urgent_pointer_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+11,0,"end_ss",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+877,0,"seq_up",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+963,0,"TCP_control_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+964,0,"seq_num_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+965,0,"ACK_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+966,0,"offset_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+967,0,"window_size_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+968,0,"urgent_pointer_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+353,0,"TCP_stop_flg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+570,0,"full",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"timeout_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+586,0,"hand_shake_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+587,0,"seq_rcv_str",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1011,0,"ISN_num",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+878,0,"bytes_sent",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+860,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+934,0,"payload_len_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+935,0,"TCP_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+588,0,"rcv_next_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+589,0,"seq_num_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+571,0,"seq_rx_FIFO_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+936,0,"TCP_bytes_trk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+354,0,"wr_FIFO_offset",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+572,0,"wr_FIFO_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+355,0,"rd_FIFO_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+573,0,"wr_FIFO_ptr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+356,0,"rd_FIFO_ptr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+357,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+574,0,"rd_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+937,0,"nw_segment",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"TCP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+358,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+938,0,"ACK_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+939,0,"ACK_rcv_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+359,0,"out_order_req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+360,0,"case_bug",5, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+361,0,"case_bug_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+590,0,"state",6, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+362,0,"nstate",6, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("rcv_pkg_type", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+940,0,"CWR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+941,0,"ECE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+942,0,"URG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+943,0,"ACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+944,0,"PSH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+945,0,"RST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+946,0,"SYN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+947,0,"FIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("tx_pkg_type", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+969,0,"CWR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+970,0,"ECE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+971,0,"URG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+972,0,"ACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+973,0,"PSH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+974,0,"RST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+975,0,"SYN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+976,0,"FIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("ack_num", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+591,0,"dup_chk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+592,0,"ACK_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("nack_num", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+363,0,"dup_chk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+364,0,"ACK_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("seq_num", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+593,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+594,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("nseq_num", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+365,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+366,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->declBus(c+595,0,"window_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+367,0,"nwindow_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1012,0,"bytes_in_flight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1013,0,"wnd_allow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+977,0,"nhand_shake_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+368,0,"nseq_rcv_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("nTCP_order", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+369,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+370,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+371,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+372,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+373,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+374,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+375,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+376,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+377,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+378,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+379,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+380,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+381,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+382,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+383,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+384,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+385,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+386,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+387,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+388,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+389,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+390,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+391,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+392,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+393,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+394,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+395,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+396,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+397,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+398,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+399,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+400,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+401,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+402,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+403,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+404,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+405,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+406,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+407,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+408,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+409,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+410,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+411,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+412,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+413,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+414,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+415,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+416,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+417,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+418,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("TCP_order", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+596,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+597,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+598,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+599,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+600,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+601,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+602,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+603,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+604,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+605,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+606,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+607,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+608,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+609,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+610,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+611,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+612,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+613,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+614,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+615,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+616,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+617,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+618,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+619,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+620,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+621,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+622,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+623,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+624,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+625,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+626,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+627,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+628,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+629,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+630,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+631,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+632,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+633,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+634,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+635,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+636,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+637,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+638,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+639,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+640,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+641,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+642,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+643,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+644,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+645,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+646,0,"rcv_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+419,0,"nrcv_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+420,0,"out_of_order_flg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+647,0,"free_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+648,0,"match_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+649,0,"v_vec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+650,0,"free_vec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->pushPrefix("seq_vec", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+1044,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1045,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1046,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1047,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1048,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1049,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1050,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1051,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1052,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1053,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1054,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1055,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1056,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1057,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1058,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1059,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1060,0,"[16]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1061,0,"[17]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1062,0,"[18]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1063,0,"[19]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1064,0,"[20]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1065,0,"[21]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1066,0,"[22]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1067,0,"[23]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1068,0,"[24]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1069,0,"[25]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1070,0,"[26]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1071,0,"[27]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1072,0,"[28]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1073,0,"[29]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1074,0,"[30]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1075,0,"[31]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->declBit(c+651,0,"free_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+652,0,"match_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+653,0,"match_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1014,0,"overlap_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+654,0,"flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+421,0,"nflush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+655,0,"len_flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+422,0,"nlen_flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1015,0,"debug",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+656,0,"seq_rx_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+423,0,"nseq_rx_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+424,0,"bytes_drop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+425,0,"bytes_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("flush_list", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+657,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+658,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+659,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+660,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+661,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+662,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+663,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+664,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+665,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+666,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("nflush_list", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+426,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+427,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+428,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+429,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+430,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+431,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+432,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+433,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+434,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+435,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("me", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_flow__me__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_flow__pe__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+667,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+668,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+436,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_flow__me__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_flow__me__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1076,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1077,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1020,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+669,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+670,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+671,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+672,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_flow__pe__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__u_tcp__tcp_flow__pe__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1076,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1077,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1020,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+673,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+674,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+675,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+676,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
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
    bufp->fullIData(oldp+1016,(0x40U),32);
    bufp->fullIData(oldp+1017,(0x10U),32);
    bufp->fullIData(oldp+1018,(8U),32);
    bufp->fullBit(oldp+1019,(vlSymsp->TOP__top.wr_FIFO_full));
    bufp->fullIData(oldp+1020,(4U),32);
    bufp->fullBit(oldp+1021,(vlSymsp->TOP__top.__PVT__seq_up));
    bufp->fullSData(oldp+1022,(vlSymsp->TOP__top.__PVT__checksum_TX),16);
    bufp->fullIData(oldp+1023,(0x80U),32);
    bufp->fullIData(oldp+1024,(0x40U),32);
    bufp->fullBit(oldp+1025,(vlSymsp->TOP__top__u_tcp.__PVT__timeout_flag));
    bufp->fullIData(oldp+1026,(0x10U),32);
    bufp->fullIData(oldp+1027,(4U),32);
    bufp->fullBit(oldp+1028,(vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_stop_flag));
    bufp->fullBit(oldp+1029,(vlSymsp->TOP__top__u_fifo_tx.__PVT__end_ss));
    bufp->fullSData(oldp+1030,(vlSymsp->TOP__top__u_fifo_tx.__PVT__checksum_re_trans),16);
    bufp->fullIData(oldp+1031,(0x20U),32);
    bufp->fullIData(oldp+1032,(5U),32);
    bufp->fullSData(oldp+1033,(0x1234U),16);
    bufp->fullSData(oldp+1034,(0x5678U),16);
    bufp->fullIData(oldp+1035,(0x14U),32);
    bufp->fullSData(oldp+1036,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__checksum_in),16);
    bufp->fullCData(oldp+1037,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_data_dl),8);
    bufp->fullCData(oldp+1038,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nTCP_data_dl),8);
    bufp->fullBit(oldp+1039,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__checksum_en));
    bufp->fullBit(oldp+1040,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nchecksum_en));
    bufp->fullIData(oldp+1041,(0xaU),32);
    bufp->fullIData(oldp+1042,(0x800U),32);
    bufp->fullIData(oldp+1043,(0xbU),32);
    bufp->fullSData(oldp+1044,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0U, 0xaU))),10);
    bufp->fullSData(oldp+1045,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0xaU, 0xaU))),10);
    bufp->fullSData(oldp+1046,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x14U, 0xaU))),10);
    bufp->fullSData(oldp+1047,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x1eU, 0xaU))),10);
    bufp->fullSData(oldp+1048,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x28U, 0xaU))),10);
    bufp->fullSData(oldp+1049,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x32U, 0xaU))),10);
    bufp->fullSData(oldp+1050,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x3cU, 0xaU))),10);
    bufp->fullSData(oldp+1051,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x46U, 0xaU))),10);
    bufp->fullSData(oldp+1052,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x50U, 0xaU))),10);
    bufp->fullSData(oldp+1053,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x5aU, 0xaU))),10);
    bufp->fullSData(oldp+1054,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x64U, 0xaU))),10);
    bufp->fullSData(oldp+1055,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x6eU, 0xaU))),10);
    bufp->fullSData(oldp+1056,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x78U, 0xaU))),10);
    bufp->fullSData(oldp+1057,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x82U, 0xaU))),10);
    bufp->fullSData(oldp+1058,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x8cU, 0xaU))),10);
    bufp->fullSData(oldp+1059,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x96U, 0xaU))),10);
    bufp->fullSData(oldp+1060,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0xa0U, 0xaU))),10);
    bufp->fullSData(oldp+1061,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0xaaU, 0xaU))),10);
    bufp->fullSData(oldp+1062,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0xb4U, 0xaU))),10);
    bufp->fullSData(oldp+1063,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0xbeU, 0xaU))),10);
    bufp->fullSData(oldp+1064,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0xc8U, 0xaU))),10);
    bufp->fullSData(oldp+1065,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0xd2U, 0xaU))),10);
    bufp->fullSData(oldp+1066,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0xdcU, 0xaU))),10);
    bufp->fullSData(oldp+1067,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0xe6U, 0xaU))),10);
    bufp->fullSData(oldp+1068,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0xf0U, 0xaU))),10);
    bufp->fullSData(oldp+1069,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0xfaU, 0xaU))),10);
    bufp->fullSData(oldp+1070,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x104U, 0xaU))),10);
    bufp->fullSData(oldp+1071,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x10eU, 0xaU))),10);
    bufp->fullSData(oldp+1072,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x118U, 0xaU))),10);
    bufp->fullSData(oldp+1073,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x122U, 0xaU))),10);
    bufp->fullSData(oldp+1074,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x12cU, 0xaU))),10);
    bufp->fullSData(oldp+1075,((0x3ffU & VL_SEL_IWII(320, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_vec, 0x136U, 0xaU))),10);
    bufp->fullIData(oldp+1076,(0xaU),32);
    bufp->fullBit(oldp+1077,(0U));
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
    bufp->fullSData(oldp+6,(vlSymsp->TOP__top__u_fifo_tx.__PVT__checksum_TX),16);
    bufp->fullBit(oldp+7,(vlSymsp->TOP__top__u_tcp__ISN_gen.__PVT__gen_en));
    bufp->fullBit(oldp+8,(vlSymsp->TOP__top__u_tcp__inst.__PVT__clear));
    bufp->fullSData(oldp+9,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__src_port),16);
    bufp->fullSData(oldp+10,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__dest_port),16);
    bufp->fullBit(oldp+11,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__end_ss));
    bufp->fullBit(oldp+12,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__timeout_flag));
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
    bufp->fullBit(oldp+79,(vlSymsp->TOP__top.__PVT__TCP_flush_int));
    bufp->fullBit(oldp+80,(vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_flush));
    bufp->fullBit(oldp+81,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_flush));
    bufp->fullBit(oldp+82,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_flush));
    bufp->fullCData(oldp+83,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nTCP_control_rx),8);
    bufp->fullIData(oldp+84,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nseq_num_rx),32);
    bufp->fullIData(oldp+85,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nACK_rx),32);
    bufp->fullCData(oldp+86,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__noffset_rx),4);
    bufp->fullSData(oldp+87,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nwindow_size_rx),16);
    bufp->fullSData(oldp+88,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nchecksum_rx),16);
    bufp->fullSData(oldp+89,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nurgent_pointer_rx),16);
    bufp->fullSData(oldp+90,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nbytes_trk),16);
    bufp->fullSData(oldp+91,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nTCP_len_data),16);
    bufp->fullIData(oldp+92,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nTCP_checksum),17);
    bufp->fullSData(oldp+93,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_checksum_comp),16);
    bufp->fullQData(oldp+94,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nTCP_payload_rx),64);
    bufp->fullIData(oldp+96,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__temp),20);
    bufp->fullBit(oldp+97,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nTCP_valid));
    bufp->fullBit(oldp+98,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nrcv_data));
    bufp->fullBit(oldp+99,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__n_nw_segment));
    bufp->fullBit(oldp+100,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nTCP_last));
    bufp->fullCData(oldp+101,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nbytes_rcv),8);
    bufp->fullCData(oldp+102,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nstate),3);
    bufp->fullBit(oldp+103,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_flush));
    bufp->fullSData(oldp+104,(vlSymsp->TOP__top__u_tcp__inst.__PVT__nTCP_checksum_out),16);
    bufp->fullIData(oldp+105,(vlSymsp->TOP__top__u_tcp__inst.__PVT__nTCP_checksum),17);
    bufp->fullIData(oldp+106,(vlSymsp->TOP__top__u_tcp__inst.__PVT__nTCP_checksum_send),17);
    bufp->fullIData(oldp+107,(vlSymsp->TOP__top__u_tcp__inst.__PVT__temp),20);
    bufp->fullIData(oldp+108,(vlSymsp->TOP__top__u_tcp__inst.__PVT__temp1),20);
    bufp->fullBit(oldp+109,(vlSymsp->TOP__top.__PVT__rd_ftx_en_int));
    bufp->fullBit(oldp+110,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_en_tx));
    bufp->fullBit(oldp+111,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_FIFO_en));
    bufp->fullBit(oldp+112,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__rd_FIFO_en));
    bufp->fullIData(oldp+113,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nbytes_sent),32);
    bufp->fullBit(oldp+114,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__valid_checksum));
    bufp->fullCData(oldp+115,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nstate),7);
    bufp->fullQData(oldp+116,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nTCP_transmit),64);
    bufp->fullBit(oldp+118,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nTCP_tx_valid));
    bufp->fullBit(oldp+119,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nTCP_tx_last));
    bufp->fullBit(oldp+120,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nseq_up));
    bufp->fullBit(oldp+121,(vlSymsp->TOP__top.TCP_stop_flag));
    bufp->fullBit(oldp+122,(vlSymsp->TOP__top.__PVT__wr_pfifo_en_int));
    bufp->fullCData(oldp+123,(vlSymsp->TOP__top.__PVT__wr_pfifo_offset_int),8);
    bufp->fullBit(oldp+124,(vlSymsp->TOP__top.__PVT__rd_pfifo_valid_int));
    bufp->fullCData(oldp+125,(vlSymsp->TOP__top.__PVT__rd_pfifo_ptr_int),4);
    bufp->fullCData(oldp+126,(vlSymsp->TOP__top.__PVT__rd_pfifo_len_int),4);
    bufp->fullBit(oldp+127,(vlSymsp->TOP__top.__PVT__out_order_req_int));
    bufp->fullBit(oldp+128,(vlSymsp->TOP__top.__PVT__TCP_stop_flg_int));
    bufp->fullBit(oldp+129,(vlSymsp->TOP__top__u_payload_fifo.__PVT__wr_FIFO_en));
    bufp->fullCData(oldp+130,(vlSymsp->TOP__top__u_payload_fifo.__PVT__wr_FIFO_offset),8);
    bufp->fullBit(oldp+131,(vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_FIFO_valid));
    bufp->fullCData(oldp+132,(vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_FIFO_ptr),4);
    bufp->fullCData(oldp+133,(vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_FIFO_len),4);
    bufp->fullQData(oldp+134,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                          [0U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+136,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [0U], 0U, 8U))),8);
    bufp->fullQData(oldp+137,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                          [1U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+139,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [1U], 0U, 8U))),8);
    bufp->fullQData(oldp+140,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                          [2U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+142,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [2U], 0U, 8U))),8);
    bufp->fullQData(oldp+143,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                          [3U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+145,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [3U], 0U, 8U))),8);
    bufp->fullQData(oldp+146,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                          [4U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+148,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [4U], 0U, 8U))),8);
    bufp->fullQData(oldp+149,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                          [5U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+151,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [5U], 0U, 8U))),8);
    bufp->fullQData(oldp+152,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                          [6U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+154,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [6U], 0U, 8U))),8);
    bufp->fullQData(oldp+155,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                          [7U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+157,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [7U], 0U, 8U))),8);
    bufp->fullQData(oldp+158,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                          [8U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+160,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [8U], 0U, 8U))),8);
    bufp->fullQData(oldp+161,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                          [9U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+163,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [9U], 0U, 8U))),8);
    bufp->fullQData(oldp+164,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                          [0xaU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+166,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [0xaU], 0U, 8U))),8);
    bufp->fullQData(oldp+167,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                          [0xbU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+169,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [0xbU], 0U, 8U))),8);
    bufp->fullQData(oldp+170,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                          [0xcU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+172,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [0xcU], 0U, 8U))),8);
    bufp->fullQData(oldp+173,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                          [0xdU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+175,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [0xdU], 0U, 8U))),8);
    bufp->fullQData(oldp+176,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                          [0xeU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+178,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [0xeU], 0U, 8U))),8);
    bufp->fullQData(oldp+179,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                          [0xfU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+181,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__nTCP_FIFO
                                                   [0xfU], 0U, 8U))),8);
    bufp->fullCData(oldp+182,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nflush_ptr),4);
    bufp->fullCData(oldp+183,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nlen_TCP_flush),4);
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
    bufp->fullBit(oldp+196,(vlSymsp->TOP__top__u_tcp.__PVT__out_order_req));
    bufp->fullBit(oldp+197,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_stop_flg));
    bufp->fullBit(oldp+198,(vlSymsp->TOP__top__u_fifo_tx.__PVT__out_order_req));
    bufp->fullSData(oldp+199,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nbytes_abt_sent),16);
    bufp->fullSData(oldp+200,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nbytes_msg_trk),16);
    bufp->fullQData(oldp+201,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nrd_FIFO_payload),64);
    bufp->fullCData(oldp+203,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nptr_str),4);
    bufp->fullCData(oldp+204,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nptr_end),4);
    bufp->fullCData(oldp+205,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nflush_ptr),4);
    bufp->fullSData(oldp+206,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nbytes_abt_sent_msg),16);
    bufp->fullCData(oldp+207,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nmsg_end_ptr),4);
    bufp->fullCData(oldp+208,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nrd_state),2);
    bufp->fullCData(oldp+209,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nwr_state),2);
    bufp->fullBit(oldp+210,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x58U))));
    bufp->fullIData(oldp+211,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x38U, 0x20U)),32);
    bufp->fullIData(oldp+212,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x18U, 0x20U)),32);
    bufp->fullSData(oldp+213,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 8U, 0x10U))),16);
    bufp->fullCData(oldp+214,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 4U, 4U))),4);
    bufp->fullCData(oldp+215,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0U, 4U))),4);
    bufp->fullBit(oldp+216,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0xb1U))));
    bufp->fullIData(oldp+217,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x91U, 0x20U)),32);
    bufp->fullIData(oldp+218,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x71U, 0x20U)),32);
    bufp->fullSData(oldp+219,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x61U, 0x10U))),16);
    bufp->fullCData(oldp+220,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x5dU, 4U))),4);
    bufp->fullCData(oldp+221,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x59U, 4U))),4);
    bufp->fullBit(oldp+222,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x10aU))));
    bufp->fullIData(oldp+223,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0xeaU, 0x20U)),32);
    bufp->fullIData(oldp+224,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0xcaU, 0x20U)),32);
    bufp->fullSData(oldp+225,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0xbaU, 0x10U))),16);
    bufp->fullCData(oldp+226,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0xb6U, 4U))),4);
    bufp->fullCData(oldp+227,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0xb2U, 4U))),4);
    bufp->fullBit(oldp+228,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x163U))));
    bufp->fullIData(oldp+229,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x143U, 0x20U)),32);
    bufp->fullIData(oldp+230,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x123U, 0x20U)),32);
    bufp->fullSData(oldp+231,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x113U, 0x10U))),16);
    bufp->fullCData(oldp+232,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x10fU, 4U))),4);
    bufp->fullCData(oldp+233,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x10bU, 4U))),4);
    bufp->fullBit(oldp+234,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x1bcU))));
    bufp->fullIData(oldp+235,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x19cU, 0x20U)),32);
    bufp->fullIData(oldp+236,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x17cU, 0x20U)),32);
    bufp->fullSData(oldp+237,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x16cU, 0x10U))),16);
    bufp->fullCData(oldp+238,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x168U, 4U))),4);
    bufp->fullCData(oldp+239,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x164U, 4U))),4);
    bufp->fullBit(oldp+240,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x215U))));
    bufp->fullIData(oldp+241,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x1f5U, 0x20U)),32);
    bufp->fullIData(oldp+242,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x1d5U, 0x20U)),32);
    bufp->fullSData(oldp+243,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x1c5U, 0x10U))),16);
    bufp->fullCData(oldp+244,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x1c1U, 4U))),4);
    bufp->fullCData(oldp+245,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x1bdU, 4U))),4);
    bufp->fullBit(oldp+246,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x26eU))));
    bufp->fullIData(oldp+247,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x24eU, 0x20U)),32);
    bufp->fullIData(oldp+248,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x22eU, 0x20U)),32);
    bufp->fullSData(oldp+249,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x21eU, 0x10U))),16);
    bufp->fullCData(oldp+250,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x21aU, 4U))),4);
    bufp->fullCData(oldp+251,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x216U, 4U))),4);
    bufp->fullBit(oldp+252,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x2c7U))));
    bufp->fullIData(oldp+253,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x2a7U, 0x20U)),32);
    bufp->fullIData(oldp+254,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x287U, 0x20U)),32);
    bufp->fullSData(oldp+255,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x277U, 0x10U))),16);
    bufp->fullCData(oldp+256,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x273U, 4U))),4);
    bufp->fullCData(oldp+257,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x26fU, 4U))),4);
    bufp->fullBit(oldp+258,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x320U))));
    bufp->fullIData(oldp+259,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x300U, 0x20U)),32);
    bufp->fullIData(oldp+260,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x2e0U, 0x20U)),32);
    bufp->fullSData(oldp+261,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x2d0U, 0x10U))),16);
    bufp->fullCData(oldp+262,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x2ccU, 4U))),4);
    bufp->fullCData(oldp+263,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x2c8U, 4U))),4);
    bufp->fullBit(oldp+264,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x379U))));
    bufp->fullIData(oldp+265,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x359U, 0x20U)),32);
    bufp->fullIData(oldp+266,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x339U, 0x20U)),32);
    bufp->fullSData(oldp+267,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x329U, 0x10U))),16);
    bufp->fullCData(oldp+268,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x325U, 4U))),4);
    bufp->fullCData(oldp+269,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x321U, 4U))),4);
    bufp->fullBit(oldp+270,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x3d2U))));
    bufp->fullIData(oldp+271,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x3b2U, 0x20U)),32);
    bufp->fullIData(oldp+272,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x392U, 0x20U)),32);
    bufp->fullSData(oldp+273,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x382U, 0x10U))),16);
    bufp->fullCData(oldp+274,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x37eU, 4U))),4);
    bufp->fullCData(oldp+275,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x37aU, 4U))),4);
    bufp->fullBit(oldp+276,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x42bU))));
    bufp->fullIData(oldp+277,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x40bU, 0x20U)),32);
    bufp->fullIData(oldp+278,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x3ebU, 0x20U)),32);
    bufp->fullSData(oldp+279,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x3dbU, 0x10U))),16);
    bufp->fullCData(oldp+280,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x3d7U, 4U))),4);
    bufp->fullCData(oldp+281,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x3d3U, 4U))),4);
    bufp->fullBit(oldp+282,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x484U))));
    bufp->fullIData(oldp+283,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x464U, 0x20U)),32);
    bufp->fullIData(oldp+284,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x444U, 0x20U)),32);
    bufp->fullSData(oldp+285,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x434U, 0x10U))),16);
    bufp->fullCData(oldp+286,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x430U, 4U))),4);
    bufp->fullCData(oldp+287,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x42cU, 4U))),4);
    bufp->fullBit(oldp+288,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x4ddU))));
    bufp->fullIData(oldp+289,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x4bdU, 0x20U)),32);
    bufp->fullIData(oldp+290,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x49dU, 0x20U)),32);
    bufp->fullSData(oldp+291,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x48dU, 0x10U))),16);
    bufp->fullCData(oldp+292,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x489U, 4U))),4);
    bufp->fullCData(oldp+293,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x485U, 4U))),4);
    bufp->fullBit(oldp+294,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x536U))));
    bufp->fullIData(oldp+295,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x516U, 0x20U)),32);
    bufp->fullIData(oldp+296,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x4f6U, 0x20U)),32);
    bufp->fullSData(oldp+297,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x4e6U, 0x10U))),16);
    bufp->fullCData(oldp+298,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x4e2U, 4U))),4);
    bufp->fullCData(oldp+299,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x4deU, 4U))),4);
    bufp->fullBit(oldp+300,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x58fU))));
    bufp->fullIData(oldp+301,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x56fU, 0x20U)),32);
    bufp->fullIData(oldp+302,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x54fU, 0x20U)),32);
    bufp->fullSData(oldp+303,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x53fU, 0x10U))),16);
    bufp->fullCData(oldp+304,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x53bU, 4U))),4);
    bufp->fullCData(oldp+305,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_tx, 0x537U, 4U))),4);
    bufp->fullBit(oldp+306,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nrd_FIFO_last));
    bufp->fullBit(oldp+307,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nrd_FIFO_valid));
    bufp->fullBit(oldp+308,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nwr_FIFO_valid));
    bufp->fullCData(oldp+309,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_wrt_ptr),4);
    bufp->fullCData(oldp+310,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ndict_rd_ptr),4);
    bufp->fullCData(oldp+311,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nrd_ptr),4);
    bufp->fullCData(oldp+312,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nwrt_ptr),4);
    bufp->fullQData(oldp+313,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0U, 0x40U)),64);
    bufp->fullQData(oldp+315,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x40U, 0x40U)),64);
    bufp->fullQData(oldp+317,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x80U, 0x40U)),64);
    bufp->fullQData(oldp+319,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0xc0U, 0x40U)),64);
    bufp->fullQData(oldp+321,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x100U, 0x40U)),64);
    bufp->fullQData(oldp+323,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x140U, 0x40U)),64);
    bufp->fullQData(oldp+325,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x180U, 0x40U)),64);
    bufp->fullQData(oldp+327,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x1c0U, 0x40U)),64);
    bufp->fullQData(oldp+329,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x200U, 0x40U)),64);
    bufp->fullQData(oldp+331,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x240U, 0x40U)),64);
    bufp->fullQData(oldp+333,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x280U, 0x40U)),64);
    bufp->fullQData(oldp+335,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x2c0U, 0x40U)),64);
    bufp->fullQData(oldp+337,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x300U, 0x40U)),64);
    bufp->fullQData(oldp+339,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x340U, 0x40U)),64);
    bufp->fullQData(oldp+341,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x380U, 0x40U)),64);
    bufp->fullQData(oldp+343,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__nTCP_tx_order, 0x3c0U, 0x40U)),64);
    bufp->fullBit(oldp+345,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nout_order_req_l));
    bufp->fullBit(oldp+346,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nACK_rcv_flag_l));
    bufp->fullIData(oldp+347,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nACK_num_l),32);
    bufp->fullBit(oldp+348,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_debug_1));
    bufp->fullBit(oldp+349,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_debug_2));
    bufp->fullBit(oldp+350,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nrd_upd));
    bufp->fullSData(oldp+351,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nbytes_abt_sent_msg_rd),16);
    bufp->fullSData(oldp+352,(vlSymsp->TOP__top__u_fifo_tx.__PVT__nchecksum_l),16);
    bufp->fullBit(oldp+353,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_stop_flg));
    bufp->fullCData(oldp+354,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__wr_FIFO_offset),8);
    bufp->fullCData(oldp+355,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rd_FIFO_len),8);
    bufp->fullSData(oldp+356,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rd_FIFO_ptr),11);
    bufp->fullBit(oldp+357,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__wr_FIFO_en));
    bufp->fullBit(oldp+358,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rd_FIFO_valid));
    bufp->fullBit(oldp+359,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__out_order_req));
    bufp->fullCData(oldp+360,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__case_bug),2);
    bufp->fullBit(oldp+361,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__case_bug_0));
    bufp->fullCData(oldp+362,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nstate),7);
    bufp->fullCData(oldp+363,((7U & VL_SEL_IQII(35, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nack_num, 0x20U, 3U))),3);
    bufp->fullIData(oldp+364,(VL_SEL_IQII(35, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nack_num, 0U, 0x20U)),32);
    bufp->fullBit(oldp+365,((1U & VL_BITSEL_IQII(33, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nseq_num, 0x20U))));
    bufp->fullIData(oldp+366,(VL_SEL_IQII(33, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nseq_num, 0U, 0x20U)),32);
    bufp->fullSData(oldp+367,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nwindow_size),16);
    bufp->fullIData(oldp+368,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nseq_rcv_str),32);
    bufp->fullBit(oldp+369,((1U & VL_BITSEL_IWII(81, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [0U], 0x50U))));
    bufp->fullIData(oldp+370,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [0U], 0x30U, 0x20U)),32);
    bufp->fullSData(oldp+371,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [0U], 0x20U, 0x10U))),16);
    bufp->fullSData(oldp+372,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [0U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+373,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [0U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+374,((1U & VL_BITSEL_IWII(81, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [1U], 0x50U))));
    bufp->fullIData(oldp+375,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [1U], 0x30U, 0x20U)),32);
    bufp->fullSData(oldp+376,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [1U], 0x20U, 0x10U))),16);
    bufp->fullSData(oldp+377,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [1U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+378,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [1U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+379,((1U & VL_BITSEL_IWII(81, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [2U], 0x50U))));
    bufp->fullIData(oldp+380,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [2U], 0x30U, 0x20U)),32);
    bufp->fullSData(oldp+381,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [2U], 0x20U, 0x10U))),16);
    bufp->fullSData(oldp+382,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [2U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+383,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [2U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+384,((1U & VL_BITSEL_IWII(81, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [3U], 0x50U))));
    bufp->fullIData(oldp+385,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [3U], 0x30U, 0x20U)),32);
    bufp->fullSData(oldp+386,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [3U], 0x20U, 0x10U))),16);
    bufp->fullSData(oldp+387,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [3U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+388,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [3U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+389,((1U & VL_BITSEL_IWII(81, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [4U], 0x50U))));
    bufp->fullIData(oldp+390,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [4U], 0x30U, 0x20U)),32);
    bufp->fullSData(oldp+391,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [4U], 0x20U, 0x10U))),16);
    bufp->fullSData(oldp+392,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [4U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+393,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [4U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+394,((1U & VL_BITSEL_IWII(81, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [5U], 0x50U))));
    bufp->fullIData(oldp+395,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [5U], 0x30U, 0x20U)),32);
    bufp->fullSData(oldp+396,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [5U], 0x20U, 0x10U))),16);
    bufp->fullSData(oldp+397,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [5U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+398,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [5U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+399,((1U & VL_BITSEL_IWII(81, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [6U], 0x50U))));
    bufp->fullIData(oldp+400,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [6U], 0x30U, 0x20U)),32);
    bufp->fullSData(oldp+401,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [6U], 0x20U, 0x10U))),16);
    bufp->fullSData(oldp+402,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [6U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+403,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [6U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+404,((1U & VL_BITSEL_IWII(81, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [7U], 0x50U))));
    bufp->fullIData(oldp+405,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [7U], 0x30U, 0x20U)),32);
    bufp->fullSData(oldp+406,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [7U], 0x20U, 0x10U))),16);
    bufp->fullSData(oldp+407,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [7U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+408,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [7U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+409,((1U & VL_BITSEL_IWII(81, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [8U], 0x50U))));
    bufp->fullIData(oldp+410,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [8U], 0x30U, 0x20U)),32);
    bufp->fullSData(oldp+411,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [8U], 0x20U, 0x10U))),16);
    bufp->fullSData(oldp+412,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [8U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+413,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [8U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+414,((1U & VL_BITSEL_IWII(81, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                 [9U], 0x50U))));
    bufp->fullIData(oldp+415,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                          [9U], 0x30U, 0x20U)),32);
    bufp->fullSData(oldp+416,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [9U], 0x20U, 0x10U))),16);
    bufp->fullSData(oldp+417,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [9U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+418,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nTCP_order
                                                     [9U], 0U, 0x10U))),16);
    bufp->fullIData(oldp+419,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nrcv_next),32);
    bufp->fullBit(oldp+420,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__out_of_order_flg));
    bufp->fullCData(oldp+421,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_ptr),4);
    bufp->fullCData(oldp+422,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nlen_flush_ptr),8);
    bufp->fullIData(oldp+423,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nseq_rx_trk),32);
    bufp->fullCData(oldp+424,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__bytes_drop),8);
    bufp->fullCData(oldp+425,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__bytes_left),8);
    bufp->fullCData(oldp+426,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0U, 4U))),4);
    bufp->fullCData(oldp+427,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 4U, 4U))),4);
    bufp->fullCData(oldp+428,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 8U, 4U))),4);
    bufp->fullCData(oldp+429,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0xcU, 4U))),4);
    bufp->fullCData(oldp+430,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0x10U, 4U))),4);
    bufp->fullCData(oldp+431,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0x14U, 4U))),4);
    bufp->fullCData(oldp+432,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0x18U, 4U))),4);
    bufp->fullCData(oldp+433,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0x1cU, 4U))),4);
    bufp->fullCData(oldp+434,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0x20U, 4U))),4);
    bufp->fullCData(oldp+435,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nflush_list, 0x24U, 4U))),4);
    bufp->fullIData(oldp+436,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+437,(vlSymsp->TOP__top__u_tcp.__PVT__ISN_num),32);
    bufp->fullIData(oldp+438,(vlSymsp->TOP__top__u_tcp__ISN_gen.__PVT__ISN_num),32);
    bufp->fullIData(oldp+439,(vlSymsp->TOP__top__u_tcp__ISN_gen.__PVT__counter),32);
    bufp->fullBit(oldp+440,(vlSymsp->TOP__top.axis_r_valid));
    bufp->fullQData(oldp+441,(vlSymsp->TOP__top.axis_rd_data),64);
    bufp->fullCData(oldp+443,(vlSymsp->TOP__top.__PVT__wr_ptr_out_int),4);
    bufp->fullCData(oldp+444,(vlSymsp->TOP__top.__PVT__wr_pfifo_len_int),4);
    bufp->fullBit(oldp+445,(vlSymsp->TOP__top.__PVT__rd_pfifo_en_int));
    bufp->fullIData(oldp+446,(vlSymsp->TOP__top.__PVT__seq_rx_FIFO_rd_int),32);
    bufp->fullBit(oldp+447,(vlSymsp->TOP__top.__PVT__full));
    bufp->fullCData(oldp+448,(vlSymsp->TOP__top__u_payload_fifo.__PVT__wr_ptr_out),4);
    bufp->fullCData(oldp+449,(vlSymsp->TOP__top__u_payload_fifo.__PVT__wr_FIFO_len),4);
    bufp->fullBit(oldp+450,(vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_FIFO_en));
    bufp->fullIData(oldp+451,(vlSymsp->TOP__top__u_payload_fifo.__PVT__seq_rx_FIFO_rd),32);
    bufp->fullBit(oldp+452,(vlSymsp->TOP__top__u_payload_fifo.__PVT__full));
    bufp->fullBit(oldp+453,(vlSymsp->TOP__top__u_payload_fifo.__PVT__axis_r_valid));
    bufp->fullQData(oldp+454,(vlSymsp->TOP__top__u_payload_fifo.__PVT__axis_rd_data),64);
    bufp->fullQData(oldp+456,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                          [0U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+458,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                   [0U], 0U, 8U))),8);
    bufp->fullQData(oldp+459,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                          [1U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+461,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                   [1U], 0U, 8U))),8);
    bufp->fullQData(oldp+462,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                          [2U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+464,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                   [2U], 0U, 8U))),8);
    bufp->fullQData(oldp+465,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                          [3U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+467,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                   [3U], 0U, 8U))),8);
    bufp->fullQData(oldp+468,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                          [4U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+470,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                   [4U], 0U, 8U))),8);
    bufp->fullQData(oldp+471,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                          [5U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+473,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                   [5U], 0U, 8U))),8);
    bufp->fullQData(oldp+474,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                          [6U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+476,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                   [6U], 0U, 8U))),8);
    bufp->fullQData(oldp+477,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                          [7U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+479,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                   [7U], 0U, 8U))),8);
    bufp->fullQData(oldp+480,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                          [8U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+482,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                   [8U], 0U, 8U))),8);
    bufp->fullQData(oldp+483,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                          [9U], 8U, 0x40U)),64);
    bufp->fullCData(oldp+485,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                   [9U], 0U, 8U))),8);
    bufp->fullQData(oldp+486,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                          [0xaU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+488,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                   [0xaU], 0U, 8U))),8);
    bufp->fullQData(oldp+489,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                          [0xbU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+491,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                   [0xbU], 0U, 8U))),8);
    bufp->fullQData(oldp+492,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                          [0xcU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+494,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                   [0xcU], 0U, 8U))),8);
    bufp->fullQData(oldp+495,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                          [0xdU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+497,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                   [0xdU], 0U, 8U))),8);
    bufp->fullQData(oldp+498,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                          [0xeU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+500,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                   [0xeU], 0U, 8U))),8);
    bufp->fullQData(oldp+501,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                          [0xfU], 8U, 0x40U)),64);
    bufp->fullCData(oldp+503,((0xffU & VL_SEL_IWII(72, 
                                                   vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_FIFO
                                                   [0xfU], 0U, 8U))),8);
    bufp->fullQData(oldp+504,(VL_SEL_QWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__fifo_entry_rd, 8U, 0x40U)),64);
    bufp->fullCData(oldp+506,((0xffU & VL_SEL_IWII(72, vlSymsp->TOP__top__u_payload_fifo.__PVT__fifo_entry_rd, 0U, 8U))),8);
    bufp->fullCData(oldp+507,(vlSymsp->TOP__top__u_payload_fifo.__PVT__flush_ptr),4);
    bufp->fullCData(oldp+508,(vlSymsp->TOP__top__u_payload_fifo.__PVT__len_TCP_flush),4);
    bufp->fullCData(oldp+509,(vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_len_ptr),4);
    bufp->fullIData(oldp+510,(vlSymsp->TOP__top__u_payload_fifo.__PVT__seq_trk_rd),32);
    bufp->fullCData(oldp+511,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_len),4);
    bufp->fullBit(oldp+512,(vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_FIFO_valid_l));
    bufp->fullBit(oldp+513,(vlSymsp->TOP__top__u_payload_fifo.__PVT__TCP_flush_l));
    bufp->fullQData(oldp+514,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[0]),64);
    bufp->fullQData(oldp+516,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[1]),64);
    bufp->fullQData(oldp+518,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[2]),64);
    bufp->fullQData(oldp+520,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[3]),64);
    bufp->fullQData(oldp+522,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[4]),64);
    bufp->fullQData(oldp+524,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[5]),64);
    bufp->fullQData(oldp+526,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[6]),64);
    bufp->fullQData(oldp+528,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[7]),64);
    bufp->fullQData(oldp+530,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[8]),64);
    bufp->fullQData(oldp+532,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[9]),64);
    bufp->fullQData(oldp+534,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[10]),64);
    bufp->fullQData(oldp+536,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[11]),64);
    bufp->fullQData(oldp+538,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[12]),64);
    bufp->fullQData(oldp+540,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[13]),64);
    bufp->fullQData(oldp+542,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[14]),64);
    bufp->fullQData(oldp+544,(vlSymsp->TOP__top__u_payload_fifo.__PVT__payload[15]),64);
    bufp->fullCData(oldp+546,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[0]),8);
    bufp->fullCData(oldp+547,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[1]),8);
    bufp->fullCData(oldp+548,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[2]),8);
    bufp->fullCData(oldp+549,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[3]),8);
    bufp->fullCData(oldp+550,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[4]),8);
    bufp->fullCData(oldp+551,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[5]),8);
    bufp->fullCData(oldp+552,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[6]),8);
    bufp->fullCData(oldp+553,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[7]),8);
    bufp->fullCData(oldp+554,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[8]),8);
    bufp->fullCData(oldp+555,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[9]),8);
    bufp->fullCData(oldp+556,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[10]),8);
    bufp->fullCData(oldp+557,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[11]),8);
    bufp->fullCData(oldp+558,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[12]),8);
    bufp->fullCData(oldp+559,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[13]),8);
    bufp->fullCData(oldp+560,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[14]),8);
    bufp->fullCData(oldp+561,(vlSymsp->TOP__top__u_payload_fifo.__PVT__bytes_offset[15]),8);
    bufp->fullCData(oldp+562,(vlSymsp->TOP__top__u_payload_fifo.__PVT__wr_ptr),4);
    bufp->fullCData(oldp+563,(vlSymsp->TOP__top__u_payload_fifo.__PVT__rd_ptr),4);
    bufp->fullIData(oldp+564,(vlSymsp->TOP__top__u_payload_fifo.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+565,(vlSymsp->TOP__top__u_tcp.__PVT__wr_ptr_out),4);
    bufp->fullCData(oldp+566,(vlSymsp->TOP__top__u_tcp.__PVT__wr_FIFO_len),4);
    bufp->fullBit(oldp+567,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_en_rcv));
    bufp->fullIData(oldp+568,(vlSymsp->TOP__top__u_tcp.__PVT__seq_rx_FIFO_rd),32);
    bufp->fullBit(oldp+569,(vlSymsp->TOP__top__u_tcp.__PVT__full));
    bufp->fullBit(oldp+570,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__full));
    bufp->fullIData(oldp+571,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_rx_FIFO_rd),32);
    bufp->fullCData(oldp+572,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__wr_FIFO_len),8);
    bufp->fullSData(oldp+573,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__wr_FIFO_ptr),11);
    bufp->fullBit(oldp+574,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rd_FIFO_en));
    bufp->fullIData(oldp+575,(vlSymsp->TOP__top.rcv_next),32);
    bufp->fullIData(oldp+576,(vlSymsp->TOP__top.seq_num),32);
    bufp->fullBit(oldp+577,(vlSymsp->TOP__top.__PVT__handshake_done_int));
    bufp->fullIData(oldp+578,(vlSymsp->TOP__top.__PVT__seq_rcv_start_int),32);
    bufp->fullBit(oldp+579,(vlSymsp->TOP__top__u_payload_fifo.__PVT__handshake_done));
    bufp->fullIData(oldp+580,(vlSymsp->TOP__top__u_payload_fifo.__PVT__seq_rcv_start),32);
    bufp->fullBit(oldp+581,(vlSymsp->TOP__top__u_tcp.__PVT__handshake_done));
    bufp->fullIData(oldp+582,(vlSymsp->TOP__top__u_tcp.__PVT__seq_rcv_start),32);
    bufp->fullIData(oldp+583,(vlSymsp->TOP__top__u_tcp.__PVT__rcv_next),32);
    bufp->fullIData(oldp+584,(vlSymsp->TOP__top__u_tcp.__PVT__seq_num),32);
    bufp->fullBit(oldp+585,(vlSymsp->TOP__top__u_fifo_tx.__PVT__hand_shake_done));
    bufp->fullBit(oldp+586,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__hand_shake_done));
    bufp->fullIData(oldp+587,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_rcv_str),32);
    bufp->fullIData(oldp+588,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_next_out),32);
    bufp->fullIData(oldp+589,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_num_out),32);
    bufp->fullCData(oldp+590,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__state),7);
    bufp->fullCData(oldp+591,((7U & VL_SEL_IQII(35, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ack_num, 0x20U, 3U))),3);
    bufp->fullIData(oldp+592,(VL_SEL_IQII(35, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ack_num, 0U, 0x20U)),32);
    bufp->fullBit(oldp+593,((1U & VL_BITSEL_IQII(33, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_num, 0x20U))));
    bufp->fullIData(oldp+594,(VL_SEL_IQII(33, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_num, 0U, 0x20U)),32);
    bufp->fullSData(oldp+595,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__window_size),16);
    bufp->fullBit(oldp+596,((1U & VL_BITSEL_IWII(81, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                 [0U], 0x50U))));
    bufp->fullIData(oldp+597,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                          [0U], 0x30U, 0x20U)),32);
    bufp->fullSData(oldp+598,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [0U], 0x20U, 0x10U))),16);
    bufp->fullSData(oldp+599,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [0U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+600,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [0U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+601,((1U & VL_BITSEL_IWII(81, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                 [1U], 0x50U))));
    bufp->fullIData(oldp+602,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                          [1U], 0x30U, 0x20U)),32);
    bufp->fullSData(oldp+603,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [1U], 0x20U, 0x10U))),16);
    bufp->fullSData(oldp+604,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [1U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+605,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [1U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+606,((1U & VL_BITSEL_IWII(81, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                 [2U], 0x50U))));
    bufp->fullIData(oldp+607,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                          [2U], 0x30U, 0x20U)),32);
    bufp->fullSData(oldp+608,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [2U], 0x20U, 0x10U))),16);
    bufp->fullSData(oldp+609,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [2U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+610,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [2U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+611,((1U & VL_BITSEL_IWII(81, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                 [3U], 0x50U))));
    bufp->fullIData(oldp+612,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                          [3U], 0x30U, 0x20U)),32);
    bufp->fullSData(oldp+613,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [3U], 0x20U, 0x10U))),16);
    bufp->fullSData(oldp+614,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [3U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+615,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [3U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+616,((1U & VL_BITSEL_IWII(81, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                 [4U], 0x50U))));
    bufp->fullIData(oldp+617,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                          [4U], 0x30U, 0x20U)),32);
    bufp->fullSData(oldp+618,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [4U], 0x20U, 0x10U))),16);
    bufp->fullSData(oldp+619,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [4U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+620,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [4U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+621,((1U & VL_BITSEL_IWII(81, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                 [5U], 0x50U))));
    bufp->fullIData(oldp+622,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                          [5U], 0x30U, 0x20U)),32);
    bufp->fullSData(oldp+623,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [5U], 0x20U, 0x10U))),16);
    bufp->fullSData(oldp+624,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [5U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+625,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [5U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+626,((1U & VL_BITSEL_IWII(81, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                 [6U], 0x50U))));
    bufp->fullIData(oldp+627,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                          [6U], 0x30U, 0x20U)),32);
    bufp->fullSData(oldp+628,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [6U], 0x20U, 0x10U))),16);
    bufp->fullSData(oldp+629,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [6U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+630,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [6U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+631,((1U & VL_BITSEL_IWII(81, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                 [7U], 0x50U))));
    bufp->fullIData(oldp+632,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                          [7U], 0x30U, 0x20U)),32);
    bufp->fullSData(oldp+633,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [7U], 0x20U, 0x10U))),16);
    bufp->fullSData(oldp+634,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [7U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+635,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [7U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+636,((1U & VL_BITSEL_IWII(81, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                 [8U], 0x50U))));
    bufp->fullIData(oldp+637,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                          [8U], 0x30U, 0x20U)),32);
    bufp->fullSData(oldp+638,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [8U], 0x20U, 0x10U))),16);
    bufp->fullSData(oldp+639,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [8U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+640,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [8U], 0U, 0x10U))),16);
    bufp->fullBit(oldp+641,((1U & VL_BITSEL_IWII(81, 
                                                 vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                 [9U], 0x50U))));
    bufp->fullIData(oldp+642,(VL_SEL_IWII(81, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                          [9U], 0x30U, 0x20U)),32);
    bufp->fullSData(oldp+643,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [9U], 0x20U, 0x10U))),16);
    bufp->fullSData(oldp+644,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [9U], 0x10U, 0x10U))),16);
    bufp->fullSData(oldp+645,((0xffffU & VL_SEL_IWII(81, 
                                                     vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_order
                                                     [9U], 0U, 0x10U))),16);
    bufp->fullIData(oldp+646,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_next),32);
    bufp->fullCData(oldp+647,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__free_idx),4);
    bufp->fullCData(oldp+648,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__match_idx),4);
    bufp->fullSData(oldp+649,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__v_vec),10);
    bufp->fullSData(oldp+650,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__free_vec),10);
    bufp->fullBit(oldp+651,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__free_mask));
    bufp->fullBit(oldp+652,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__match_found));
    bufp->fullSData(oldp+653,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__match_mask),10);
    bufp->fullCData(oldp+654,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_ptr),4);
    bufp->fullCData(oldp+655,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__len_flush_ptr),4);
    bufp->fullIData(oldp+656,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_rx_trk),32);
    bufp->fullCData(oldp+657,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0U, 4U))),4);
    bufp->fullCData(oldp+658,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 4U, 4U))),4);
    bufp->fullCData(oldp+659,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 8U, 4U))),4);
    bufp->fullCData(oldp+660,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0xcU, 4U))),4);
    bufp->fullCData(oldp+661,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0x10U, 4U))),4);
    bufp->fullCData(oldp+662,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0x14U, 4U))),4);
    bufp->fullCData(oldp+663,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0x18U, 4U))),4);
    bufp->fullCData(oldp+664,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0x1cU, 4U))),4);
    bufp->fullCData(oldp+665,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0x20U, 4U))),4);
    bufp->fullCData(oldp+666,((0xfU & VL_SEL_IQII(40, vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__flush_list, 0x24U, 4U))),4);
    bufp->fullIData(oldp+667,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__unnamedblk1__DOT__x),32);
    bufp->fullIData(oldp+668,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__unnamedblk2__DOT__x),32);
    bufp->fullSData(oldp+669,(vlSymsp->TOP__top__u_tcp__tcp_flow__me.__PVT__din),10);
    bufp->fullBit(oldp+670,(vlSymsp->TOP__top__u_tcp__tcp_flow__me.__PVT__valid));
    bufp->fullCData(oldp+671,(vlSymsp->TOP__top__u_tcp__tcp_flow__me.__PVT__idx),4);
    bufp->fullIData(oldp+672,(vlSymsp->TOP__top__u_tcp__tcp_flow__me.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullSData(oldp+673,(vlSymsp->TOP__top__u_tcp__tcp_flow__pe.__PVT__din),10);
    bufp->fullBit(oldp+674,(vlSymsp->TOP__top__u_tcp__tcp_flow__pe.__PVT__valid));
    bufp->fullCData(oldp+675,(vlSymsp->TOP__top__u_tcp__tcp_flow__pe.__PVT__idx),4);
    bufp->fullIData(oldp+676,(vlSymsp->TOP__top__u_tcp__tcp_flow__pe.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullSData(oldp+677,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_checksum_out),16);
    bufp->fullSData(oldp+678,(vlSymsp->TOP__top__u_tcp__inst.__PVT__TCP_checksum_out),16);
    bufp->fullIData(oldp+679,(vlSymsp->TOP__top__u_tcp__inst.__PVT__TCP_checksum),17);
    bufp->fullIData(oldp+680,(vlSymsp->TOP__top__u_tcp__inst.__PVT__TCP_checksum_send),17);
    bufp->fullQData(oldp+681,(vlSymsp->TOP__top.__PVT__rd_ftx_payload_int),64);
    bufp->fullBit(oldp+683,(vlSymsp->TOP__top.__PVT__rd_ftx_valid_int));
    bufp->fullBit(oldp+684,(vlSymsp->TOP__top.__PVT__rd_ftx_last_int));
    bufp->fullSData(oldp+685,(vlSymsp->TOP__top.__PVT__bytes_abt_sent_int),16);
    bufp->fullBit(oldp+686,(vlSymsp->TOP__top.__PVT__re_trans_int));
    bufp->fullBit(oldp+687,(vlSymsp->TOP__top.__PVT__rd_FIFO_valid_tx));
    bufp->fullBit(oldp+688,(vlSymsp->TOP__top.__PVT__rd_FIFO_last));
    bufp->fullQData(oldp+689,(vlSymsp->TOP__top.__PVT__rd_FIFO_payload),64);
    bufp->fullSData(oldp+691,(vlSymsp->TOP__top.__PVT__bytes_abt_sent),16);
    bufp->fullBit(oldp+692,(vlSymsp->TOP__top.__PVT__wr_TX_full));
    bufp->fullQData(oldp+693,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_payload),64);
    bufp->fullBit(oldp+695,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_valid_tx));
    bufp->fullBit(oldp+696,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_last));
    bufp->fullSData(oldp+697,(vlSymsp->TOP__top__u_tcp.__PVT__bytes_abt_sent),16);
    bufp->fullBit(oldp+698,(vlSymsp->TOP__top__u_tcp.__PVT__re_trans));
    bufp->fullBit(oldp+699,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_FIFO_valid));
    bufp->fullBit(oldp+700,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_FIFO_last));
    bufp->fullQData(oldp+701,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_FIFO_payload),64);
    bufp->fullSData(oldp+703,(vlSymsp->TOP__top__u_fifo_tx.__PVT__bytes_abt_sent),16);
    bufp->fullBit(oldp+704,(vlSymsp->TOP__top__u_fifo_tx.__PVT__wr_FIFO_valid));
    bufp->fullBit(oldp+705,(vlSymsp->TOP__top__u_fifo_tx.__PVT__re_trans));
    bufp->fullSData(oldp+706,(vlSymsp->TOP__top__u_fifo_tx.__PVT__bytes_msg_trk),16);
    bufp->fullCData(oldp+707,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ptr_str),4);
    bufp->fullCData(oldp+708,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ptr_end),4);
    bufp->fullCData(oldp+709,(vlSymsp->TOP__top__u_fifo_tx.__PVT__flush_ptr),4);
    bufp->fullSData(oldp+710,(vlSymsp->TOP__top__u_fifo_tx.__PVT__bytes_abt_sent_msg),16);
    bufp->fullCData(oldp+711,(vlSymsp->TOP__top__u_fifo_tx.__PVT__msg_end_ptr),4);
    bufp->fullCData(oldp+712,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_state),2);
    bufp->fullCData(oldp+713,(vlSymsp->TOP__top__u_fifo_tx.__PVT__wr_state),2);
    bufp->fullBit(oldp+714,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x58U))));
    bufp->fullIData(oldp+715,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x38U, 0x20U)),32);
    bufp->fullIData(oldp+716,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x18U, 0x20U)),32);
    bufp->fullSData(oldp+717,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 8U, 0x10U))),16);
    bufp->fullCData(oldp+718,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 4U, 4U))),4);
    bufp->fullCData(oldp+719,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0U, 4U))),4);
    bufp->fullBit(oldp+720,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0xb1U))));
    bufp->fullIData(oldp+721,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x91U, 0x20U)),32);
    bufp->fullIData(oldp+722,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x71U, 0x20U)),32);
    bufp->fullSData(oldp+723,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x61U, 0x10U))),16);
    bufp->fullCData(oldp+724,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x5dU, 4U))),4);
    bufp->fullCData(oldp+725,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x59U, 4U))),4);
    bufp->fullBit(oldp+726,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x10aU))));
    bufp->fullIData(oldp+727,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0xeaU, 0x20U)),32);
    bufp->fullIData(oldp+728,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0xcaU, 0x20U)),32);
    bufp->fullSData(oldp+729,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0xbaU, 0x10U))),16);
    bufp->fullCData(oldp+730,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0xb6U, 4U))),4);
    bufp->fullCData(oldp+731,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0xb2U, 4U))),4);
    bufp->fullBit(oldp+732,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x163U))));
    bufp->fullIData(oldp+733,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x143U, 0x20U)),32);
    bufp->fullIData(oldp+734,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x123U, 0x20U)),32);
    bufp->fullSData(oldp+735,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x113U, 0x10U))),16);
    bufp->fullCData(oldp+736,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x10fU, 4U))),4);
    bufp->fullCData(oldp+737,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x10bU, 4U))),4);
    bufp->fullBit(oldp+738,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x1bcU))));
    bufp->fullIData(oldp+739,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x19cU, 0x20U)),32);
    bufp->fullIData(oldp+740,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x17cU, 0x20U)),32);
    bufp->fullSData(oldp+741,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x16cU, 0x10U))),16);
    bufp->fullCData(oldp+742,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x168U, 4U))),4);
    bufp->fullCData(oldp+743,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x164U, 4U))),4);
    bufp->fullBit(oldp+744,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x215U))));
    bufp->fullIData(oldp+745,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x1f5U, 0x20U)),32);
    bufp->fullIData(oldp+746,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x1d5U, 0x20U)),32);
    bufp->fullSData(oldp+747,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x1c5U, 0x10U))),16);
    bufp->fullCData(oldp+748,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x1c1U, 4U))),4);
    bufp->fullCData(oldp+749,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x1bdU, 4U))),4);
    bufp->fullBit(oldp+750,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x26eU))));
    bufp->fullIData(oldp+751,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x24eU, 0x20U)),32);
    bufp->fullIData(oldp+752,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x22eU, 0x20U)),32);
    bufp->fullSData(oldp+753,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x21eU, 0x10U))),16);
    bufp->fullCData(oldp+754,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x21aU, 4U))),4);
    bufp->fullCData(oldp+755,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x216U, 4U))),4);
    bufp->fullBit(oldp+756,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x2c7U))));
    bufp->fullIData(oldp+757,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x2a7U, 0x20U)),32);
    bufp->fullIData(oldp+758,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x287U, 0x20U)),32);
    bufp->fullSData(oldp+759,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x277U, 0x10U))),16);
    bufp->fullCData(oldp+760,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x273U, 4U))),4);
    bufp->fullCData(oldp+761,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x26fU, 4U))),4);
    bufp->fullBit(oldp+762,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x320U))));
    bufp->fullIData(oldp+763,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x300U, 0x20U)),32);
    bufp->fullIData(oldp+764,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x2e0U, 0x20U)),32);
    bufp->fullSData(oldp+765,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x2d0U, 0x10U))),16);
    bufp->fullCData(oldp+766,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x2ccU, 4U))),4);
    bufp->fullCData(oldp+767,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x2c8U, 4U))),4);
    bufp->fullBit(oldp+768,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x379U))));
    bufp->fullIData(oldp+769,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x359U, 0x20U)),32);
    bufp->fullIData(oldp+770,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x339U, 0x20U)),32);
    bufp->fullSData(oldp+771,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x329U, 0x10U))),16);
    bufp->fullCData(oldp+772,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x325U, 4U))),4);
    bufp->fullCData(oldp+773,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x321U, 4U))),4);
    bufp->fullBit(oldp+774,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x3d2U))));
    bufp->fullIData(oldp+775,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x3b2U, 0x20U)),32);
    bufp->fullIData(oldp+776,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x392U, 0x20U)),32);
    bufp->fullSData(oldp+777,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x382U, 0x10U))),16);
    bufp->fullCData(oldp+778,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x37eU, 4U))),4);
    bufp->fullCData(oldp+779,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x37aU, 4U))),4);
    bufp->fullBit(oldp+780,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x42bU))));
    bufp->fullIData(oldp+781,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x40bU, 0x20U)),32);
    bufp->fullIData(oldp+782,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x3ebU, 0x20U)),32);
    bufp->fullSData(oldp+783,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x3dbU, 0x10U))),16);
    bufp->fullCData(oldp+784,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x3d7U, 4U))),4);
    bufp->fullCData(oldp+785,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x3d3U, 4U))),4);
    bufp->fullBit(oldp+786,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x484U))));
    bufp->fullIData(oldp+787,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x464U, 0x20U)),32);
    bufp->fullIData(oldp+788,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x444U, 0x20U)),32);
    bufp->fullSData(oldp+789,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x434U, 0x10U))),16);
    bufp->fullCData(oldp+790,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x430U, 4U))),4);
    bufp->fullCData(oldp+791,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x42cU, 4U))),4);
    bufp->fullBit(oldp+792,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x4ddU))));
    bufp->fullIData(oldp+793,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x4bdU, 0x20U)),32);
    bufp->fullIData(oldp+794,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x49dU, 0x20U)),32);
    bufp->fullSData(oldp+795,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x48dU, 0x10U))),16);
    bufp->fullCData(oldp+796,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x489U, 4U))),4);
    bufp->fullCData(oldp+797,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x485U, 4U))),4);
    bufp->fullBit(oldp+798,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x536U))));
    bufp->fullIData(oldp+799,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x516U, 0x20U)),32);
    bufp->fullIData(oldp+800,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x4f6U, 0x20U)),32);
    bufp->fullSData(oldp+801,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x4e6U, 0x10U))),16);
    bufp->fullCData(oldp+802,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x4e2U, 4U))),4);
    bufp->fullCData(oldp+803,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x4deU, 4U))),4);
    bufp->fullBit(oldp+804,((1U & VL_BITSEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x58fU))));
    bufp->fullIData(oldp+805,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x56fU, 0x20U)),32);
    bufp->fullIData(oldp+806,(VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x54fU, 0x20U)),32);
    bufp->fullSData(oldp+807,((0xffffU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x53fU, 0x10U))),16);
    bufp->fullCData(oldp+808,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x53bU, 4U))),4);
    bufp->fullCData(oldp+809,((0xfU & VL_SEL_IWII(1424, vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_tx, 0x537U, 4U))),4);
    bufp->fullBit(oldp+810,(vlSymsp->TOP__top__u_fifo_tx.__PVT__full));
    bufp->fullBit(oldp+811,(vlSymsp->TOP__top__u_fifo_tx.__PVT__empty));
    bufp->fullCData(oldp+812,(vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_wrt_ptr),4);
    bufp->fullCData(oldp+813,(vlSymsp->TOP__top__u_fifo_tx.__PVT__dict_rd_ptr),4);
    bufp->fullCData(oldp+814,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_ptr),4);
    bufp->fullCData(oldp+815,(vlSymsp->TOP__top__u_fifo_tx.__PVT__wrt_ptr),4);
    bufp->fullQData(oldp+816,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0U, 0x40U)),64);
    bufp->fullQData(oldp+818,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x40U, 0x40U)),64);
    bufp->fullQData(oldp+820,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x80U, 0x40U)),64);
    bufp->fullQData(oldp+822,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0xc0U, 0x40U)),64);
    bufp->fullQData(oldp+824,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x100U, 0x40U)),64);
    bufp->fullQData(oldp+826,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x140U, 0x40U)),64);
    bufp->fullQData(oldp+828,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x180U, 0x40U)),64);
    bufp->fullQData(oldp+830,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x1c0U, 0x40U)),64);
    bufp->fullQData(oldp+832,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x200U, 0x40U)),64);
    bufp->fullQData(oldp+834,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x240U, 0x40U)),64);
    bufp->fullQData(oldp+836,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x280U, 0x40U)),64);
    bufp->fullQData(oldp+838,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x2c0U, 0x40U)),64);
    bufp->fullQData(oldp+840,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x300U, 0x40U)),64);
    bufp->fullQData(oldp+842,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x340U, 0x40U)),64);
    bufp->fullQData(oldp+844,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x380U, 0x40U)),64);
    bufp->fullQData(oldp+846,(VL_SEL_QWII(1024, vlSymsp->TOP__top__u_fifo_tx.__PVT__TCP_tx_order, 0x3c0U, 0x40U)),64);
    bufp->fullBit(oldp+848,(vlSymsp->TOP__top__u_fifo_tx.__PVT__out_order_req_l));
    bufp->fullBit(oldp+849,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ACK_rcv_flag_l));
    bufp->fullIData(oldp+850,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ACK_num_l),32);
    bufp->fullBit(oldp+851,(vlSymsp->TOP__top__u_fifo_tx.__PVT__rd_upd));
    bufp->fullSData(oldp+852,(vlSymsp->TOP__top__u_fifo_tx.__PVT__bytes_abt_sent_msg_rd),16);
    bufp->fullSData(oldp+853,(vlSymsp->TOP__top__u_fifo_tx.__PVT__checksum_l),16);
    bufp->fullBit(oldp+854,(vlSymsp->TOP__top__u_tcp__inst.__PVT__re_trans));
    bufp->fullBit(oldp+855,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__rd_FIFO_valid));
    bufp->fullBit(oldp+856,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__rd_FIFO_last));
    bufp->fullQData(oldp+857,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__rd_FIFO_payload),64);
    bufp->fullIData(oldp+859,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__bytes_abt_sent),32);
    bufp->fullIData(oldp+860,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__bytes_abt_sent),32);
    bufp->fullQData(oldp+861,(vlSymsp->TOP__top.TCP_transmit),64);
    bufp->fullBit(oldp+863,(vlSymsp->TOP__top.TCP_last));
    bufp->fullBit(oldp+864,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_last));
    bufp->fullQData(oldp+865,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_transmit),64);
    bufp->fullBit(oldp+867,(vlSymsp->TOP__top__u_tcp.__PVT__seq_up));
    bufp->fullIData(oldp+868,(vlSymsp->TOP__top__u_tcp.__PVT__bytes_sent),32);
    bufp->fullBit(oldp+869,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__seq_up));
    bufp->fullIData(oldp+870,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__bytes_sent),32);
    bufp->fullBit(oldp+871,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_tx_valid));
    bufp->fullBit(oldp+872,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_tx_last));
    bufp->fullQData(oldp+873,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_transmit),64);
    bufp->fullIData(oldp+875,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_checksum),17);
    bufp->fullCData(oldp+876,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__state),7);
    bufp->fullBit(oldp+877,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_up));
    bufp->fullIData(oldp+878,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__bytes_sent),32);
    bufp->fullBit(oldp+879,(vlSymsp->TOP__top.__PVT__nw_segment));
    bufp->fullBit(oldp+880,(vlSymsp->TOP__top.__PVT__axis_t_last_int));
    bufp->fullQData(oldp+881,(vlSymsp->TOP__top.__PVT__axis_data_rx_int),64);
    bufp->fullIData(oldp+883,(vlSymsp->TOP__top.__PVT__ACK_num_int),32);
    bufp->fullBit(oldp+884,(vlSymsp->TOP__top.__PVT__ACK_rcv_flag_int));
    bufp->fullBit(oldp+885,(vlSymsp->TOP__top__u_payload_fifo.__PVT__nw_segment));
    bufp->fullBit(oldp+886,(vlSymsp->TOP__top__u_payload_fifo.__PVT__axis_t_last));
    bufp->fullQData(oldp+887,(vlSymsp->TOP__top__u_payload_fifo.__PVT__axis_data_rx),64);
    bufp->fullBit(oldp+889,(vlSymsp->TOP__top__u_tcp.__PVT__nw_segment));
    bufp->fullBit(oldp+890,(vlSymsp->TOP__top__u_tcp.__PVT__axis_t_last));
    bufp->fullQData(oldp+891,(vlSymsp->TOP__top__u_tcp.__PVT__axis_data_rx),64);
    bufp->fullIData(oldp+893,(vlSymsp->TOP__top__u_tcp.__PVT__ACK_num),32);
    bufp->fullBit(oldp+894,(vlSymsp->TOP__top__u_tcp.__PVT__ACK_rcv_flag));
    bufp->fullBit(oldp+895,(vlSymsp->TOP__top__u_tcp.__PVT__rcv_data));
    bufp->fullCData(oldp+896,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_control_rx),8);
    bufp->fullCData(oldp+897,(vlSymsp->TOP__top__u_tcp.__PVT__bytes_rcv),8);
    bufp->fullIData(oldp+898,(vlSymsp->TOP__top__u_tcp.__PVT__seq_num_rx),32);
    bufp->fullIData(oldp+899,(vlSymsp->TOP__top__u_tcp.__PVT__ACK_rx),32);
    bufp->fullCData(oldp+900,(vlSymsp->TOP__top__u_tcp.__PVT__offset_rx),4);
    bufp->fullSData(oldp+901,(vlSymsp->TOP__top__u_tcp.__PVT__window_size_rx),16);
    bufp->fullSData(oldp+902,(vlSymsp->TOP__top__u_tcp.__PVT__checksum_rx),16);
    bufp->fullSData(oldp+903,(vlSymsp->TOP__top__u_tcp.__PVT__urgent_pointer_rx),16);
    bufp->fullSData(oldp+904,(vlSymsp->TOP__top__u_tcp.__PVT__payload_len_rx),16);
    bufp->fullBit(oldp+905,(vlSymsp->TOP__top__u_tcp.__PVT__rd_FIFO_valid));
    bufp->fullIData(oldp+906,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ACK_num),32);
    bufp->fullBit(oldp+907,(vlSymsp->TOP__top__u_fifo_tx.__PVT__ACK_rcv_flag));
    bufp->fullBit(oldp+908,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__rcv_data));
    bufp->fullCData(oldp+909,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_control_rx),8);
    bufp->fullIData(oldp+910,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__seq_num_rx),32);
    bufp->fullIData(oldp+911,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__ACK_rx),32);
    bufp->fullCData(oldp+912,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__offset_rx),4);
    bufp->fullSData(oldp+913,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__window_size_rx),16);
    bufp->fullSData(oldp+914,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__checksum_rx),16);
    bufp->fullSData(oldp+915,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__urgent_pointer_rx),16);
    bufp->fullCData(oldp+916,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__bytes_rcv),8);
    bufp->fullSData(oldp+917,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_len_data),16);
    bufp->fullQData(oldp+918,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_payload_rx),64);
    bufp->fullBit(oldp+920,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_valid));
    bufp->fullBit(oldp+921,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nw_segment));
    bufp->fullBit(oldp+922,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_last));
    bufp->fullSData(oldp+923,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__bytes_trk),16);
    bufp->fullIData(oldp+924,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__TCP_checksum),17);
    bufp->fullCData(oldp+925,(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__state),3);
    bufp->fullBit(oldp+926,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_data));
    bufp->fullCData(oldp+927,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_control_rx),8);
    bufp->fullIData(oldp+928,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_num_rx),32);
    bufp->fullIData(oldp+929,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ACK_rx),32);
    bufp->fullCData(oldp+930,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__offset_rx),4);
    bufp->fullSData(oldp+931,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__window_size_rx),16);
    bufp->fullSData(oldp+932,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__checksum_rx),16);
    bufp->fullSData(oldp+933,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__urgent_pointer_rx),16);
    bufp->fullIData(oldp+934,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__payload_len_rx),32);
    bufp->fullBit(oldp+935,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_last));
    bufp->fullCData(oldp+936,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_bytes_trk),8);
    bufp->fullBit(oldp+937,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nw_segment));
    bufp->fullIData(oldp+938,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ACK_num),32);
    bufp->fullBit(oldp+939,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ACK_rcv_flag));
    bufp->fullBit(oldp+940,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 7U))));
    bufp->fullBit(oldp+941,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 6U))));
    bufp->fullBit(oldp+942,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 5U))));
    bufp->fullBit(oldp+943,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 4U))));
    bufp->fullBit(oldp+944,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 3U))));
    bufp->fullBit(oldp+945,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 2U))));
    bufp->fullBit(oldp+946,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 1U))));
    bufp->fullBit(oldp+947,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__rcv_pkg_type), 0U))));
    bufp->fullIData(oldp+948,(vlSymsp->TOP__top.__PVT__seq_num_tx),32);
    bufp->fullIData(oldp+949,(vlSymsp->TOP__top__u_tcp.__PVT__seq_num_tx_out),32);
    bufp->fullCData(oldp+950,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_control_tx),8);
    bufp->fullIData(oldp+951,(vlSymsp->TOP__top__u_tcp.__PVT__seq_num_tx),32);
    bufp->fullIData(oldp+952,(vlSymsp->TOP__top__u_tcp.__PVT__ACK_tx),32);
    bufp->fullCData(oldp+953,(vlSymsp->TOP__top__u_tcp.__PVT__offset_tx),4);
    bufp->fullSData(oldp+954,(vlSymsp->TOP__top__u_tcp.__PVT__window_size_tx),16);
    bufp->fullSData(oldp+955,(vlSymsp->TOP__top__u_tcp.__PVT__urgent_pointer_tx),16);
    bufp->fullIData(oldp+956,(vlSymsp->TOP__top__u_fifo_tx.__PVT__seq_num_tx),32);
    bufp->fullCData(oldp+957,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_control_tx),8);
    bufp->fullIData(oldp+958,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__seq_num_tx),32);
    bufp->fullIData(oldp+959,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__ACK_tx),32);
    bufp->fullCData(oldp+960,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__offset_tx),4);
    bufp->fullSData(oldp+961,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__window_size_tx),16);
    bufp->fullSData(oldp+962,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__urgent_pointer_tx),16);
    bufp->fullCData(oldp+963,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__TCP_control_tx),8);
    bufp->fullIData(oldp+964,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__seq_num_tx),32);
    bufp->fullIData(oldp+965,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ACK_tx),32);
    bufp->fullCData(oldp+966,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__offset_tx),4);
    bufp->fullSData(oldp+967,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__window_size_tx),16);
    bufp->fullSData(oldp+968,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__urgent_pointer_tx),16);
    bufp->fullBit(oldp+969,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 7U))));
    bufp->fullBit(oldp+970,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 6U))));
    bufp->fullBit(oldp+971,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 5U))));
    bufp->fullBit(oldp+972,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 4U))));
    bufp->fullBit(oldp+973,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 3U))));
    bufp->fullBit(oldp+974,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 2U))));
    bufp->fullBit(oldp+975,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 1U))));
    bufp->fullBit(oldp+976,((1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__tx_pkg_type), 0U))));
    bufp->fullBit(oldp+977,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nhand_shake_done));
    bufp->fullBit(oldp+978,(vlSelfRef.CLK));
    bufp->fullBit(oldp+979,(vlSelfRef.nRST));
    bufp->fullCData(oldp+980,(vlSelfRef.tb_count),8);
    bufp->fullBit(oldp+981,(vlSelfRef.IP_valid));
    bufp->fullBit(oldp+982,(vlSelfRef.IP_flush));
    bufp->fullSData(oldp+983,(vlSelfRef.IP_pseuder),16);
    bufp->fullQData(oldp+984,(vlSelfRef.IP_payload),64);
    bufp->fullSData(oldp+986,(vlSelfRef.TCP_len),16);
    bufp->fullCData(oldp+987,(vlSelfRef.IP_bytes_rcv),8);
    bufp->fullBit(oldp+988,(vlSelfRef.TCP_send));
    bufp->fullQData(oldp+989,(vlSelfRef.TCP_transmit),64);
    bufp->fullBit(oldp+991,(vlSelfRef.TCP_last));
    bufp->fullBit(oldp+992,(vlSelfRef.TX_en));
    bufp->fullBit(oldp+993,(vlSelfRef.axis_last));
    bufp->fullBit(oldp+994,(vlSelfRef.wr_FIFO_en));
    bufp->fullIData(oldp+995,(vlSelfRef.len_seq),32);
    bufp->fullQData(oldp+996,(vlSelfRef.soupbin_TCP_payload),64);
    bufp->fullBit(oldp+998,(vlSelfRef.axis_r_en));
    bufp->fullBit(oldp+999,(vlSelfRef.axis_r_valid));
    bufp->fullQData(oldp+1000,(vlSelfRef.axis_rd_data),64);
    bufp->fullBit(oldp+1002,(vlSelfRef.TCP_stop_flag));
    bufp->fullIData(oldp+1003,(vlSelfRef.rcv_next),32);
    bufp->fullIData(oldp+1004,(vlSelfRef.seq_num),32);
    bufp->fullBit(oldp+1005,(vlSelfRef.wr_FIFO_full));
    bufp->fullSData(oldp+1006,(vlSymsp->TOP__top__u_tcp.__PVT__TCP_basesum_payload),16);
    bufp->fullBit(oldp+1007,(vlSymsp->TOP__top__u_tcp__inst.__PVT__up_send));
    bufp->fullSData(oldp+1008,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__TCP_basesum_payload),16);
    bufp->fullIData(oldp+1009,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nTCP_checksum),17);
    bufp->fullIData(oldp+1010,(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__temp),20);
    bufp->fullIData(oldp+1011,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__ISN_num),32);
    bufp->fullIData(oldp+1012,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__bytes_in_flight),32);
    bufp->fullIData(oldp+1013,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__wnd_allow),32);
    bufp->fullSData(oldp+1014,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__overlap_mask),10);
    bufp->fullBit(oldp+1015,(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__debug));
}
