// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VTCP_flow_ctrl__Syms.h"


VL_ATTR_COLD void VTCP_flow_ctrl___024root__trace_init_sub__TOP__0(VTCP_flow_ctrl___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTCP_flow_ctrl___024root__trace_init_sub__TOP__0\n"); );
    VTCP_flow_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+234,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+236,0,"TCP_control_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+237,0,"seq_num_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+238,0,"ACK_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+239,0,"offset_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+240,0,"window_size_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+241,0,"checksum_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+242,0,"urgent_pointer_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+243,0,"rcv_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+244,0,"TCP_tx_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+245,0,"seq_up",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+246,0,"TCP_control_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+247,0,"seq_num_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"ACK_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+249,0,"offset_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+250,0,"window_size_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+251,0,"checksum_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+252,0,"urgent_pointer_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+253,0,"end_ss",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"TCP_stop_flg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+256,0,"timeout_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"hand_shake_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+258,0,"ISN_num",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+259,0,"bytes_sent",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+260,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+261,0,"payload_len_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+262,0,"TCP_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+263,0,"rcv_next_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+264,0,"seq_num_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+265,0,"seq_rx_FIFO_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+266,0,"TCP_bytes_trk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+267,0,"wr_FIFO_offset",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+268,0,"wr_FIFO_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+269,0,"rd_FIFO_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+270,0,"wr_FIFO_ptr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+271,0,"rd_FIFO_ptr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+272,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+273,0,"rd_FIFO_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"nw_segment",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+275,0,"TCP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+276,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("TCP_flow_ctrl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+286,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+287,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+288,0,"FIFO_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+234,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+236,0,"TCP_control_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+237,0,"seq_num_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+238,0,"ACK_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+239,0,"offset_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+240,0,"window_size_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+241,0,"checksum_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+242,0,"urgent_pointer_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+243,0,"rcv_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+244,0,"TCP_tx_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+245,0,"seq_up",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+246,0,"TCP_control_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+247,0,"seq_num_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"ACK_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+249,0,"offset_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+250,0,"window_size_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+251,0,"checksum_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+252,0,"urgent_pointer_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+253,0,"end_ss",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"TCP_stop_flg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+256,0,"timeout_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"hand_shake_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+258,0,"ISN_num",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+259,0,"bytes_sent",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+260,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+261,0,"payload_len_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+262,0,"TCP_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+263,0,"rcv_next_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+264,0,"seq_num_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+265,0,"seq_rx_FIFO_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+266,0,"TCP_bytes_trk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+267,0,"wr_FIFO_offset",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+268,0,"wr_FIFO_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+269,0,"rd_FIFO_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+270,0,"wr_FIFO_ptr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+271,0,"rd_FIFO_ptr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+272,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+273,0,"rd_FIFO_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"nw_segment",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+275,0,"TCP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+276,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"case_bug",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2,0,"case_bug_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+112,0,"state",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+3,0,"nstate",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("rcv_pkg_type", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+277,0,"CWR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+278,0,"ECE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+279,0,"URG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+280,0,"ACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"PSH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"RST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+283,0,"SYN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+284,0,"FIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("tx_pkg_type", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+113,0,"CWR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"ECE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"URG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"ACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"PSH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"RST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"SYN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"FIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("ack_num", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+121,0,"dup_chk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+122,0,"ACK_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("nack_num", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+4,0,"dup_chk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+5,0,"ACK_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("seq_num", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+123,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+124,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("nseq_num", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+6,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->declBus(c+125,0,"window_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+8,0,"nwindow_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+285,0,"bytes_in_flight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"wnd_allow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("nTCP_order", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+10,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+12,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+13,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+14,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+15,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+17,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+18,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+19,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+20,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+22,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+23,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+24,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+25,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+27,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+28,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+29,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+30,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+32,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+33,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+34,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+35,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+37,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+38,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+39,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+40,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+42,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+43,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+44,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+45,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+47,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+48,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+49,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+50,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+52,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+53,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+54,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+55,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+57,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+58,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+59,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+60,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+62,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+63,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+64,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+65,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+67,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+68,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+69,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+70,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+72,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+73,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+74,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+75,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+77,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+78,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+79,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+80,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+82,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+83,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+84,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+85,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+87,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+88,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+89,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("TCP_order", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+126,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+128,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+129,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+130,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+131,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+132,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+133,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+134,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+135,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+136,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+138,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+139,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+140,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+141,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+142,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+143,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+144,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+145,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+146,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+148,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+149,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+150,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+151,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+152,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+153,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+154,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+155,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+156,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+157,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+158,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+159,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+160,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+161,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+162,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+163,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+164,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+165,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+166,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+167,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+168,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+169,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+170,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+171,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+173,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+174,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+175,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+176,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+178,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+179,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+180,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+181,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+182,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+183,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+184,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+185,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+186,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+187,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+188,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+189,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+190,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+191,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+192,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+193,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+194,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+195,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+196,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+197,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+198,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+199,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+200,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+201,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+202,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+203,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+204,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+205,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+206,0,"rcv_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"nrcv_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+289,0,"out_of_order_flg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+207,0,"free_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+208,0,"match_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+209,0,"v_vec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+210,0,"free_vec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("seq_vec", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+290,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+291,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+292,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+293,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+294,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+295,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+296,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+297,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+298,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+299,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+300,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+301,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+302,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+303,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+304,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+305,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+306,0,"[16]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+307,0,"[17]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+308,0,"[18]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+309,0,"[19]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+310,0,"[20]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+311,0,"[21]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+312,0,"[22]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+313,0,"[23]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+314,0,"[24]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+315,0,"[25]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+316,0,"[26]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+317,0,"[27]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+318,0,"[28]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+319,0,"[29]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+320,0,"[30]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+321,0,"[31]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->declBit(c+211,0,"free_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"match_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+213,0,"match_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+91,0,"overlap_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+214,0,"flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+215,0,"nflush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+216,0,"len_flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+92,0,"nlen_flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+217,0,"seq_rx_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"nseq_rx_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"bytes_drop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+95,0,"bytes_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("flush_list", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+218,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+219,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+220,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+221,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+222,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+223,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+224,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+225,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+226,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+227,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+228,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+229,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+230,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+231,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+232,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+233,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("nflush_list", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+96,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+97,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+98,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+99,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+100,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+101,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+102,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+103,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+104,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+105,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+106,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+107,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+108,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+109,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+110,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+111,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("me", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+322,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+289,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+323,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+213,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+212,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+208,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+324,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+322,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+289,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+323,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+210,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+211,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+207,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+324,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+322,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VTCP_flow_ctrl___024root__trace_init_top(VTCP_flow_ctrl___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTCP_flow_ctrl___024root__trace_init_top\n"); );
    VTCP_flow_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VTCP_flow_ctrl___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VTCP_flow_ctrl___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void VTCP_flow_ctrl___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void VTCP_flow_ctrl___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void VTCP_flow_ctrl___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void VTCP_flow_ctrl___024root__trace_register(VTCP_flow_ctrl___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTCP_flow_ctrl___024root__trace_register\n"); );
    VTCP_flow_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VTCP_flow_ctrl___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VTCP_flow_ctrl___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VTCP_flow_ctrl___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VTCP_flow_ctrl___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VTCP_flow_ctrl___024root__trace_const_0_sub_0(VTCP_flow_ctrl___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void VTCP_flow_ctrl___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTCP_flow_ctrl___024root__trace_const_0\n"); );
    // Init
    VTCP_flow_ctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTCP_flow_ctrl___024root*>(voidSelf);
    VTCP_flow_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTCP_flow_ctrl___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTCP_flow_ctrl___024root__trace_const_0_sub_0(VTCP_flow_ctrl___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTCP_flow_ctrl___024root__trace_const_0_sub_0\n"); );
    VTCP_flow_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+286,(0x10U),32);
    bufp->fullIData(oldp+287,(0x800U),32);
    bufp->fullIData(oldp+288,(0xbU),32);
    bufp->fullBit(oldp+289,(0U));
    bufp->fullSData(oldp+290,((0xffffU & vlSelfRef.TCP_flow_ctrl__DOT__seq_vec[0U])),16);
    bufp->fullSData(oldp+291,((vlSelfRef.TCP_flow_ctrl__DOT__seq_vec[0U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+292,((0xffffU & vlSelfRef.TCP_flow_ctrl__DOT__seq_vec[1U])),16);
    bufp->fullSData(oldp+293,((vlSelfRef.TCP_flow_ctrl__DOT__seq_vec[1U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+294,((0xffffU & vlSelfRef.TCP_flow_ctrl__DOT__seq_vec[2U])),16);
    bufp->fullSData(oldp+295,((vlSelfRef.TCP_flow_ctrl__DOT__seq_vec[2U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+296,((0xffffU & vlSelfRef.TCP_flow_ctrl__DOT__seq_vec[3U])),16);
    bufp->fullSData(oldp+297,((vlSelfRef.TCP_flow_ctrl__DOT__seq_vec[3U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+298,((0xffffU & vlSelfRef.TCP_flow_ctrl__DOT__seq_vec[4U])),16);
    bufp->fullSData(oldp+299,((vlSelfRef.TCP_flow_ctrl__DOT__seq_vec[4U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+300,((0xffffU & vlSelfRef.TCP_flow_ctrl__DOT__seq_vec[5U])),16);
    bufp->fullSData(oldp+301,((vlSelfRef.TCP_flow_ctrl__DOT__seq_vec[5U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+302,((0xffffU & vlSelfRef.TCP_flow_ctrl__DOT__seq_vec[6U])),16);
    bufp->fullSData(oldp+303,((vlSelfRef.TCP_flow_ctrl__DOT__seq_vec[6U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+304,((0xffffU & vlSelfRef.TCP_flow_ctrl__DOT__seq_vec[7U])),16);
    bufp->fullSData(oldp+305,((vlSelfRef.TCP_flow_ctrl__DOT__seq_vec[7U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+306,((0xffffU & vlSelfRef.TCP_flow_ctrl__DOT__seq_vec[8U])),16);
    bufp->fullSData(oldp+307,((vlSelfRef.TCP_flow_ctrl__DOT__seq_vec[8U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+308,((0xffffU & vlSelfRef.TCP_flow_ctrl__DOT__seq_vec[9U])),16);
    bufp->fullSData(oldp+309,((vlSelfRef.TCP_flow_ctrl__DOT__seq_vec[9U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+310,((0xffffU & vlSelfRef.TCP_flow_ctrl__DOT__seq_vec[0xaU])),16);
    bufp->fullSData(oldp+311,((vlSelfRef.TCP_flow_ctrl__DOT__seq_vec[0xaU] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+312,((0xffffU & vlSelfRef.TCP_flow_ctrl__DOT__seq_vec[0xbU])),16);
    bufp->fullSData(oldp+313,((vlSelfRef.TCP_flow_ctrl__DOT__seq_vec[0xbU] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+314,((0xffffU & vlSelfRef.TCP_flow_ctrl__DOT__seq_vec[0xcU])),16);
    bufp->fullSData(oldp+315,((vlSelfRef.TCP_flow_ctrl__DOT__seq_vec[0xcU] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+316,((0xffffU & vlSelfRef.TCP_flow_ctrl__DOT__seq_vec[0xdU])),16);
    bufp->fullSData(oldp+317,((vlSelfRef.TCP_flow_ctrl__DOT__seq_vec[0xdU] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+318,((0xffffU & vlSelfRef.TCP_flow_ctrl__DOT__seq_vec[0xeU])),16);
    bufp->fullSData(oldp+319,((vlSelfRef.TCP_flow_ctrl__DOT__seq_vec[0xeU] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+320,((0xffffU & vlSelfRef.TCP_flow_ctrl__DOT__seq_vec[0xfU])),16);
    bufp->fullSData(oldp+321,((vlSelfRef.TCP_flow_ctrl__DOT__seq_vec[0xfU] 
                               >> 0x10U)),16);
    bufp->fullIData(oldp+322,(0x10U),32);
    bufp->fullIData(oldp+323,(4U),32);
    bufp->fullIData(oldp+324,(0x10U),32);
}

VL_ATTR_COLD void VTCP_flow_ctrl___024root__trace_full_0_sub_0(VTCP_flow_ctrl___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void VTCP_flow_ctrl___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTCP_flow_ctrl___024root__trace_full_0\n"); );
    // Init
    VTCP_flow_ctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTCP_flow_ctrl___024root*>(voidSelf);
    VTCP_flow_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTCP_flow_ctrl___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTCP_flow_ctrl___024root__trace_full_0_sub_0(VTCP_flow_ctrl___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTCP_flow_ctrl___024root__trace_full_0_sub_0\n"); );
    VTCP_flow_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.TCP_flow_ctrl__DOT__case_bug),2);
    bufp->fullBit(oldp+2,(vlSelfRef.TCP_flow_ctrl__DOT__case_bug_0));
    bufp->fullCData(oldp+3,(vlSelfRef.TCP_flow_ctrl__DOT__nstate),7);
    bufp->fullCData(oldp+4,((7U & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__nack_num 
                                           >> 0x20U)))),3);
    bufp->fullIData(oldp+5,((IData)(vlSelfRef.TCP_flow_ctrl__DOT__nack_num)),32);
    bufp->fullBit(oldp+6,((1U & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__nseq_num 
                                         >> 0x20U)))));
    bufp->fullIData(oldp+7,((IData)(vlSelfRef.TCP_flow_ctrl__DOT__nseq_num)),32);
    bufp->fullSData(oldp+8,(vlSelfRef.TCP_flow_ctrl__DOT__nwindow_size),16);
    bufp->fullIData(oldp+9,(vlSelfRef.TCP_flow_ctrl__DOT__wnd_allow),32);
    bufp->fullIData(oldp+10,(((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[2U] 
                               << 0xfU) | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[1U] 
                                           >> 0x11U))),32);
    bufp->fullSData(oldp+11,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[1U] 
                                         >> 1U))),16);
    bufp->fullSData(oldp+12,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[1U] 
                                          << 0xfU) 
                                         | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0U] 
                                            >> 0x11U)))),16);
    bufp->fullSData(oldp+13,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0U] 
                                         >> 1U))),16);
    bufp->fullBit(oldp+14,((1U & vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0U])));
    bufp->fullIData(oldp+15,(((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[5U] 
                               << 0x1eU) | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[4U] 
                                            >> 2U))),32);
    bufp->fullSData(oldp+16,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[4U] 
                                          << 0xeU) 
                                         | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[3U] 
                                            >> 0x12U)))),16);
    bufp->fullSData(oldp+17,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[3U] 
                                         >> 2U))),16);
    bufp->fullSData(oldp+18,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[3U] 
                                          << 0xeU) 
                                         | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[2U] 
                                            >> 0x12U)))),16);
    bufp->fullBit(oldp+19,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[2U] 
                                  >> 0x11U))));
    bufp->fullIData(oldp+20,(((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[7U] 
                               << 0xdU) | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[6U] 
                                           >> 0x13U))),32);
    bufp->fullSData(oldp+21,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[6U] 
                                         >> 3U))),16);
    bufp->fullSData(oldp+22,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[6U] 
                                          << 0xdU) 
                                         | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[5U] 
                                            >> 0x13U)))),16);
    bufp->fullSData(oldp+23,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[5U] 
                                         >> 3U))),16);
    bufp->fullBit(oldp+24,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[5U] 
                                  >> 2U))));
    bufp->fullIData(oldp+25,(((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0xaU] 
                               << 0x1cU) | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[9U] 
                                            >> 4U))),32);
    bufp->fullSData(oldp+26,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[9U] 
                                          << 0xcU) 
                                         | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[8U] 
                                            >> 0x14U)))),16);
    bufp->fullSData(oldp+27,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[8U] 
                                         >> 4U))),16);
    bufp->fullSData(oldp+28,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[8U] 
                                          << 0xcU) 
                                         | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[7U] 
                                            >> 0x14U)))),16);
    bufp->fullBit(oldp+29,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[7U] 
                                  >> 0x13U))));
    bufp->fullIData(oldp+30,(((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0xcU] 
                               << 0xbU) | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0xbU] 
                                           >> 0x15U))),32);
    bufp->fullSData(oldp+31,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0xbU] 
                                         >> 5U))),16);
    bufp->fullSData(oldp+32,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0xbU] 
                                          << 0xbU) 
                                         | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0xaU] 
                                            >> 0x15U)))),16);
    bufp->fullSData(oldp+33,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0xaU] 
                                         >> 5U))),16);
    bufp->fullBit(oldp+34,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0xaU] 
                                  >> 4U))));
    bufp->fullIData(oldp+35,(((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0xfU] 
                               << 0x1aU) | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0xeU] 
                                            >> 6U))),32);
    bufp->fullSData(oldp+36,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0xeU] 
                                          << 0xaU) 
                                         | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0xdU] 
                                            >> 0x16U)))),16);
    bufp->fullSData(oldp+37,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0xdU] 
                                         >> 6U))),16);
    bufp->fullSData(oldp+38,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0xdU] 
                                          << 0xaU) 
                                         | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0xcU] 
                                            >> 0x16U)))),16);
    bufp->fullBit(oldp+39,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0xcU] 
                                  >> 0x15U))));
    bufp->fullIData(oldp+40,(((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x11U] 
                               << 9U) | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x10U] 
                                         >> 0x17U))),32);
    bufp->fullSData(oldp+41,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x10U] 
                                         >> 7U))),16);
    bufp->fullSData(oldp+42,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x10U] 
                                          << 9U) | 
                                         (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0xfU] 
                                          >> 0x17U)))),16);
    bufp->fullSData(oldp+43,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0xfU] 
                                         >> 7U))),16);
    bufp->fullBit(oldp+44,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0xfU] 
                                  >> 6U))));
    bufp->fullIData(oldp+45,(((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x14U] 
                               << 0x18U) | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x13U] 
                                            >> 8U))),32);
    bufp->fullSData(oldp+46,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x13U] 
                                          << 8U) | 
                                         (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x12U] 
                                          >> 0x18U)))),16);
    bufp->fullSData(oldp+47,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x12U] 
                                         >> 8U))),16);
    bufp->fullSData(oldp+48,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x12U] 
                                          << 8U) | 
                                         (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x11U] 
                                          >> 0x18U)))),16);
    bufp->fullBit(oldp+49,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x11U] 
                                  >> 0x17U))));
    bufp->fullIData(oldp+50,(((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x16U] 
                               << 7U) | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x15U] 
                                         >> 0x19U))),32);
    bufp->fullSData(oldp+51,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x15U] 
                                         >> 9U))),16);
    bufp->fullSData(oldp+52,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x15U] 
                                          << 7U) | 
                                         (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x14U] 
                                          >> 0x19U)))),16);
    bufp->fullSData(oldp+53,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x14U] 
                                         >> 9U))),16);
    bufp->fullBit(oldp+54,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x14U] 
                                  >> 8U))));
    bufp->fullIData(oldp+55,(((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x19U] 
                               << 0x16U) | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x18U] 
                                            >> 0xaU))),32);
    bufp->fullSData(oldp+56,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x18U] 
                                          << 6U) | 
                                         (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x17U] 
                                          >> 0x1aU)))),16);
    bufp->fullSData(oldp+57,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x17U] 
                                         >> 0xaU))),16);
    bufp->fullSData(oldp+58,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x17U] 
                                          << 6U) | 
                                         (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x16U] 
                                          >> 0x1aU)))),16);
    bufp->fullBit(oldp+59,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x16U] 
                                  >> 0x19U))));
    bufp->fullIData(oldp+60,(((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x1bU] 
                               << 5U) | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x1aU] 
                                         >> 0x1bU))),32);
    bufp->fullSData(oldp+61,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x1aU] 
                                         >> 0xbU))),16);
    bufp->fullSData(oldp+62,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x1aU] 
                                          << 5U) | 
                                         (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x19U] 
                                          >> 0x1bU)))),16);
    bufp->fullSData(oldp+63,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x19U] 
                                         >> 0xbU))),16);
    bufp->fullBit(oldp+64,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x19U] 
                                  >> 0xaU))));
    bufp->fullIData(oldp+65,(((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x1eU] 
                               << 0x14U) | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x1dU] 
                                            >> 0xcU))),32);
    bufp->fullSData(oldp+66,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x1dU] 
                                          << 4U) | 
                                         (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x1cU] 
                                          >> 0x1cU)))),16);
    bufp->fullSData(oldp+67,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x1cU] 
                                         >> 0xcU))),16);
    bufp->fullSData(oldp+68,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x1cU] 
                                          << 4U) | 
                                         (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x1bU] 
                                          >> 0x1cU)))),16);
    bufp->fullBit(oldp+69,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x1bU] 
                                  >> 0x1bU))));
    bufp->fullIData(oldp+70,(((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x20U] 
                               << 3U) | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x1fU] 
                                         >> 0x1dU))),32);
    bufp->fullSData(oldp+71,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x1fU] 
                                         >> 0xdU))),16);
    bufp->fullSData(oldp+72,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x1fU] 
                                          << 3U) | 
                                         (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x1eU] 
                                          >> 0x1dU)))),16);
    bufp->fullSData(oldp+73,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x1eU] 
                                         >> 0xdU))),16);
    bufp->fullBit(oldp+74,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x1eU] 
                                  >> 0xcU))));
    bufp->fullIData(oldp+75,(((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x23U] 
                               << 0x12U) | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x22U] 
                                            >> 0xeU))),32);
    bufp->fullSData(oldp+76,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x22U] 
                                          << 2U) | 
                                         (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x21U] 
                                          >> 0x1eU)))),16);
    bufp->fullSData(oldp+77,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x21U] 
                                         >> 0xeU))),16);
    bufp->fullSData(oldp+78,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x21U] 
                                          << 2U) | 
                                         (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x20U] 
                                          >> 0x1eU)))),16);
    bufp->fullBit(oldp+79,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x20U] 
                                  >> 0x1dU))));
    bufp->fullIData(oldp+80,(((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x25U] 
                               << 1U) | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x24U] 
                                         >> 0x1fU))),32);
    bufp->fullSData(oldp+81,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x24U] 
                                         >> 0xfU))),16);
    bufp->fullSData(oldp+82,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x24U] 
                                          << 1U) | 
                                         (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x23U] 
                                          >> 0x1fU)))),16);
    bufp->fullSData(oldp+83,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x23U] 
                                         >> 0xfU))),16);
    bufp->fullBit(oldp+84,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x23U] 
                                  >> 0xeU))));
    bufp->fullIData(oldp+85,(((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x28U] 
                               << 0x10U) | (vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x27U] 
                                            >> 0x10U))),32);
    bufp->fullSData(oldp+86,((0xffffU & vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x27U])),16);
    bufp->fullSData(oldp+87,((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x26U] 
                              >> 0x10U)),16);
    bufp->fullSData(oldp+88,((0xffffU & vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x26U])),16);
    bufp->fullBit(oldp+89,((vlSelfRef.TCP_flow_ctrl__DOT__nTCP_order[0x25U] 
                            >> 0x1fU)));
    bufp->fullIData(oldp+90,(vlSelfRef.TCP_flow_ctrl__DOT__nrcv_next),32);
    bufp->fullSData(oldp+91,(vlSelfRef.TCP_flow_ctrl__DOT__overlap_mask),16);
    bufp->fullCData(oldp+92,(vlSelfRef.TCP_flow_ctrl__DOT__nlen_flush_ptr),8);
    bufp->fullIData(oldp+93,(vlSelfRef.TCP_flow_ctrl__DOT__nseq_rx_trk),32);
    bufp->fullCData(oldp+94,(vlSelfRef.TCP_flow_ctrl__DOT__bytes_drop),8);
    bufp->fullCData(oldp+95,(vlSelfRef.TCP_flow_ctrl__DOT__bytes_left),8);
    bufp->fullCData(oldp+96,((0xfU & (IData)(vlSelfRef.TCP_flow_ctrl__DOT__nflush_list))),4);
    bufp->fullCData(oldp+97,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__nflush_list 
                                              >> 4U)))),4);
    bufp->fullCData(oldp+98,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__nflush_list 
                                              >> 8U)))),4);
    bufp->fullCData(oldp+99,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__nflush_list 
                                              >> 0xcU)))),4);
    bufp->fullCData(oldp+100,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__nflush_list 
                                               >> 0x10U)))),4);
    bufp->fullCData(oldp+101,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__nflush_list 
                                               >> 0x14U)))),4);
    bufp->fullCData(oldp+102,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__nflush_list 
                                               >> 0x18U)))),4);
    bufp->fullCData(oldp+103,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__nflush_list 
                                               >> 0x1cU)))),4);
    bufp->fullCData(oldp+104,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__nflush_list 
                                               >> 0x20U)))),4);
    bufp->fullCData(oldp+105,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__nflush_list 
                                               >> 0x24U)))),4);
    bufp->fullCData(oldp+106,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__nflush_list 
                                               >> 0x28U)))),4);
    bufp->fullCData(oldp+107,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__nflush_list 
                                               >> 0x2cU)))),4);
    bufp->fullCData(oldp+108,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__nflush_list 
                                               >> 0x30U)))),4);
    bufp->fullCData(oldp+109,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__nflush_list 
                                               >> 0x34U)))),4);
    bufp->fullCData(oldp+110,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__nflush_list 
                                               >> 0x38U)))),4);
    bufp->fullCData(oldp+111,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__nflush_list 
                                               >> 0x3cU)))),4);
    bufp->fullCData(oldp+112,(vlSelfRef.TCP_flow_ctrl__DOT__state),7);
    bufp->fullBit(oldp+113,((1U & ((IData)(vlSelfRef.TCP_flow_ctrl__DOT__tx_pkg_type) 
                                   >> 7U))));
    bufp->fullBit(oldp+114,((1U & ((IData)(vlSelfRef.TCP_flow_ctrl__DOT__tx_pkg_type) 
                                   >> 6U))));
    bufp->fullBit(oldp+115,((1U & ((IData)(vlSelfRef.TCP_flow_ctrl__DOT__tx_pkg_type) 
                                   >> 5U))));
    bufp->fullBit(oldp+116,((1U & ((IData)(vlSelfRef.TCP_flow_ctrl__DOT__tx_pkg_type) 
                                   >> 4U))));
    bufp->fullBit(oldp+117,((1U & ((IData)(vlSelfRef.TCP_flow_ctrl__DOT__tx_pkg_type) 
                                   >> 3U))));
    bufp->fullBit(oldp+118,((1U & ((IData)(vlSelfRef.TCP_flow_ctrl__DOT__tx_pkg_type) 
                                   >> 2U))));
    bufp->fullBit(oldp+119,((1U & ((IData)(vlSelfRef.TCP_flow_ctrl__DOT__tx_pkg_type) 
                                   >> 1U))));
    bufp->fullBit(oldp+120,((1U & (IData)(vlSelfRef.TCP_flow_ctrl__DOT__tx_pkg_type))));
    bufp->fullCData(oldp+121,((7U & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__ack_num 
                                             >> 0x20U)))),3);
    bufp->fullIData(oldp+122,((IData)(vlSelfRef.TCP_flow_ctrl__DOT__ack_num)),32);
    bufp->fullBit(oldp+123,((1U & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__seq_num 
                                           >> 0x20U)))));
    bufp->fullIData(oldp+124,((IData)(vlSelfRef.TCP_flow_ctrl__DOT__seq_num)),32);
    bufp->fullSData(oldp+125,(vlSelfRef.TCP_flow_ctrl__DOT__window_size),16);
    bufp->fullIData(oldp+126,(((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[2U] 
                                << 0xfU) | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[1U] 
                                            >> 0x11U))),32);
    bufp->fullSData(oldp+127,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[1U] 
                                          >> 1U))),16);
    bufp->fullSData(oldp+128,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[1U] 
                                           << 0xfU) 
                                          | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0U] 
                                             >> 0x11U)))),16);
    bufp->fullSData(oldp+129,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0U] 
                                          >> 1U))),16);
    bufp->fullBit(oldp+130,((1U & vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0U])));
    bufp->fullIData(oldp+131,(((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[5U] 
                                << 0x1eU) | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[4U] 
                                             >> 2U))),32);
    bufp->fullSData(oldp+132,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[4U] 
                                           << 0xeU) 
                                          | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[3U] 
                                             >> 0x12U)))),16);
    bufp->fullSData(oldp+133,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[3U] 
                                          >> 2U))),16);
    bufp->fullSData(oldp+134,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[3U] 
                                           << 0xeU) 
                                          | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[2U] 
                                             >> 0x12U)))),16);
    bufp->fullBit(oldp+135,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[2U] 
                                   >> 0x11U))));
    bufp->fullIData(oldp+136,(((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[7U] 
                                << 0xdU) | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[6U] 
                                            >> 0x13U))),32);
    bufp->fullSData(oldp+137,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[6U] 
                                          >> 3U))),16);
    bufp->fullSData(oldp+138,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[6U] 
                                           << 0xdU) 
                                          | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[5U] 
                                             >> 0x13U)))),16);
    bufp->fullSData(oldp+139,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[5U] 
                                          >> 3U))),16);
    bufp->fullBit(oldp+140,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[5U] 
                                   >> 2U))));
    bufp->fullIData(oldp+141,(((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0xaU] 
                                << 0x1cU) | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[9U] 
                                             >> 4U))),32);
    bufp->fullSData(oldp+142,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[9U] 
                                           << 0xcU) 
                                          | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[8U] 
                                             >> 0x14U)))),16);
    bufp->fullSData(oldp+143,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[8U] 
                                          >> 4U))),16);
    bufp->fullSData(oldp+144,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[8U] 
                                           << 0xcU) 
                                          | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[7U] 
                                             >> 0x14U)))),16);
    bufp->fullBit(oldp+145,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[7U] 
                                   >> 0x13U))));
    bufp->fullIData(oldp+146,(((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0xcU] 
                                << 0xbU) | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0xbU] 
                                            >> 0x15U))),32);
    bufp->fullSData(oldp+147,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0xbU] 
                                          >> 5U))),16);
    bufp->fullSData(oldp+148,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0xbU] 
                                           << 0xbU) 
                                          | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0xaU] 
                                             >> 0x15U)))),16);
    bufp->fullSData(oldp+149,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0xaU] 
                                          >> 5U))),16);
    bufp->fullBit(oldp+150,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0xaU] 
                                   >> 4U))));
    bufp->fullIData(oldp+151,(((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0xfU] 
                                << 0x1aU) | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0xeU] 
                                             >> 6U))),32);
    bufp->fullSData(oldp+152,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0xeU] 
                                           << 0xaU) 
                                          | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0xdU] 
                                             >> 0x16U)))),16);
    bufp->fullSData(oldp+153,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0xdU] 
                                          >> 6U))),16);
    bufp->fullSData(oldp+154,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0xdU] 
                                           << 0xaU) 
                                          | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0xcU] 
                                             >> 0x16U)))),16);
    bufp->fullBit(oldp+155,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0xcU] 
                                   >> 0x15U))));
    bufp->fullIData(oldp+156,(((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x11U] 
                                << 9U) | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x10U] 
                                          >> 0x17U))),32);
    bufp->fullSData(oldp+157,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x10U] 
                                          >> 7U))),16);
    bufp->fullSData(oldp+158,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x10U] 
                                           << 9U) | 
                                          (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0xfU] 
                                           >> 0x17U)))),16);
    bufp->fullSData(oldp+159,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0xfU] 
                                          >> 7U))),16);
    bufp->fullBit(oldp+160,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0xfU] 
                                   >> 6U))));
    bufp->fullIData(oldp+161,(((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x14U] 
                                << 0x18U) | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x13U] 
                                             >> 8U))),32);
    bufp->fullSData(oldp+162,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x13U] 
                                           << 8U) | 
                                          (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x12U] 
                                           >> 0x18U)))),16);
    bufp->fullSData(oldp+163,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x12U] 
                                          >> 8U))),16);
    bufp->fullSData(oldp+164,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x12U] 
                                           << 8U) | 
                                          (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x11U] 
                                           >> 0x18U)))),16);
    bufp->fullBit(oldp+165,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x11U] 
                                   >> 0x17U))));
    bufp->fullIData(oldp+166,(((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x16U] 
                                << 7U) | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x15U] 
                                          >> 0x19U))),32);
    bufp->fullSData(oldp+167,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x15U] 
                                          >> 9U))),16);
    bufp->fullSData(oldp+168,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x15U] 
                                           << 7U) | 
                                          (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x14U] 
                                           >> 0x19U)))),16);
    bufp->fullSData(oldp+169,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x14U] 
                                          >> 9U))),16);
    bufp->fullBit(oldp+170,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x14U] 
                                   >> 8U))));
    bufp->fullIData(oldp+171,(((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x19U] 
                                << 0x16U) | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x18U] 
                                             >> 0xaU))),32);
    bufp->fullSData(oldp+172,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x18U] 
                                           << 6U) | 
                                          (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x17U] 
                                           >> 0x1aU)))),16);
    bufp->fullSData(oldp+173,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x17U] 
                                          >> 0xaU))),16);
    bufp->fullSData(oldp+174,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x17U] 
                                           << 6U) | 
                                          (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x16U] 
                                           >> 0x1aU)))),16);
    bufp->fullBit(oldp+175,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x16U] 
                                   >> 0x19U))));
    bufp->fullIData(oldp+176,(((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x1bU] 
                                << 5U) | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x1aU] 
                                          >> 0x1bU))),32);
    bufp->fullSData(oldp+177,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x1aU] 
                                          >> 0xbU))),16);
    bufp->fullSData(oldp+178,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x1aU] 
                                           << 5U) | 
                                          (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x19U] 
                                           >> 0x1bU)))),16);
    bufp->fullSData(oldp+179,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x19U] 
                                          >> 0xbU))),16);
    bufp->fullBit(oldp+180,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x19U] 
                                   >> 0xaU))));
    bufp->fullIData(oldp+181,(((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x1eU] 
                                << 0x14U) | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x1dU] 
                                             >> 0xcU))),32);
    bufp->fullSData(oldp+182,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x1dU] 
                                           << 4U) | 
                                          (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x1cU] 
                                           >> 0x1cU)))),16);
    bufp->fullSData(oldp+183,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x1cU] 
                                          >> 0xcU))),16);
    bufp->fullSData(oldp+184,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x1cU] 
                                           << 4U) | 
                                          (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x1bU] 
                                           >> 0x1cU)))),16);
    bufp->fullBit(oldp+185,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x1bU] 
                                   >> 0x1bU))));
    bufp->fullIData(oldp+186,(((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x20U] 
                                << 3U) | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x1fU] 
                                          >> 0x1dU))),32);
    bufp->fullSData(oldp+187,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x1fU] 
                                          >> 0xdU))),16);
    bufp->fullSData(oldp+188,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x1fU] 
                                           << 3U) | 
                                          (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x1eU] 
                                           >> 0x1dU)))),16);
    bufp->fullSData(oldp+189,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x1eU] 
                                          >> 0xdU))),16);
    bufp->fullBit(oldp+190,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x1eU] 
                                   >> 0xcU))));
    bufp->fullIData(oldp+191,(((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x23U] 
                                << 0x12U) | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x22U] 
                                             >> 0xeU))),32);
    bufp->fullSData(oldp+192,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x22U] 
                                           << 2U) | 
                                          (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x21U] 
                                           >> 0x1eU)))),16);
    bufp->fullSData(oldp+193,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x21U] 
                                          >> 0xeU))),16);
    bufp->fullSData(oldp+194,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x21U] 
                                           << 2U) | 
                                          (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x20U] 
                                           >> 0x1eU)))),16);
    bufp->fullBit(oldp+195,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x20U] 
                                   >> 0x1dU))));
    bufp->fullIData(oldp+196,(((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x25U] 
                                << 1U) | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x24U] 
                                          >> 0x1fU))),32);
    bufp->fullSData(oldp+197,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x24U] 
                                          >> 0xfU))),16);
    bufp->fullSData(oldp+198,((0xffffU & ((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x24U] 
                                           << 1U) | 
                                          (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x23U] 
                                           >> 0x1fU)))),16);
    bufp->fullSData(oldp+199,((0xffffU & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x23U] 
                                          >> 0xfU))),16);
    bufp->fullBit(oldp+200,((1U & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x23U] 
                                   >> 0xeU))));
    bufp->fullIData(oldp+201,(((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x28U] 
                                << 0x10U) | (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x27U] 
                                             >> 0x10U))),32);
    bufp->fullSData(oldp+202,((0xffffU & vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x27U])),16);
    bufp->fullSData(oldp+203,((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x26U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+204,((0xffffU & vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x26U])),16);
    bufp->fullBit(oldp+205,((vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x25U] 
                             >> 0x1fU)));
    bufp->fullIData(oldp+206,(vlSelfRef.TCP_flow_ctrl__DOT__rcv_next),32);
    bufp->fullCData(oldp+207,(vlSelfRef.TCP_flow_ctrl__DOT__free_idx),4);
    bufp->fullCData(oldp+208,(vlSelfRef.TCP_flow_ctrl__DOT__match_idx),4);
    bufp->fullSData(oldp+209,((((((0x8000U & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x25U] 
                                              >> 0x10U)) 
                                  | (0x4000U & vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x23U])) 
                                 | ((0x2000U & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x20U] 
                                                >> 0x10U)) 
                                    | (0x1000U & vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x1eU]))) 
                                | (((0x800U & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x1bU] 
                                               >> 0x10U)) 
                                    | (0x400U & vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x19U])) 
                                   | ((0x200U & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x16U] 
                                                 >> 0x10U)) 
                                      | (0x100U & vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x14U])))) 
                               | ((((0x80U & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0x11U] 
                                              >> 0x10U)) 
                                    | (0x40U & vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0xfU])) 
                                   | ((0x20U & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0xcU] 
                                                >> 0x10U)) 
                                      | (0x10U & vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0xaU]))) 
                                  | (((8U & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[7U] 
                                             >> 0x10U)) 
                                      | (4U & vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[5U])) 
                                     | ((2U & (vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[2U] 
                                               >> 0x10U)) 
                                        | (1U & vlSelfRef.TCP_flow_ctrl__DOT__TCP_order[0U])))))),16);
    bufp->fullSData(oldp+210,((0xffffU & (~ (((((0x8000U 
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
    bufp->fullBit(oldp+211,(vlSelfRef.TCP_flow_ctrl__DOT__free_mask));
    bufp->fullBit(oldp+212,(vlSelfRef.TCP_flow_ctrl__DOT__match_found));
    bufp->fullSData(oldp+213,(vlSelfRef.TCP_flow_ctrl__DOT__match_mask),16);
    bufp->fullCData(oldp+214,(vlSelfRef.TCP_flow_ctrl__DOT__flush_ptr),4);
    bufp->fullCData(oldp+215,(vlSelfRef.TCP_flow_ctrl__DOT__nflush_ptr),4);
    bufp->fullCData(oldp+216,(vlSelfRef.TCP_flow_ctrl__DOT__len_flush_ptr),4);
    bufp->fullIData(oldp+217,(vlSelfRef.TCP_flow_ctrl__DOT__seq_rx_trk),32);
    bufp->fullCData(oldp+218,((0xfU & (IData)(vlSelfRef.TCP_flow_ctrl__DOT__flush_list))),4);
    bufp->fullCData(oldp+219,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__flush_list 
                                               >> 4U)))),4);
    bufp->fullCData(oldp+220,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__flush_list 
                                               >> 8U)))),4);
    bufp->fullCData(oldp+221,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__flush_list 
                                               >> 0xcU)))),4);
    bufp->fullCData(oldp+222,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__flush_list 
                                               >> 0x10U)))),4);
    bufp->fullCData(oldp+223,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__flush_list 
                                               >> 0x14U)))),4);
    bufp->fullCData(oldp+224,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__flush_list 
                                               >> 0x18U)))),4);
    bufp->fullCData(oldp+225,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__flush_list 
                                               >> 0x1cU)))),4);
    bufp->fullCData(oldp+226,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__flush_list 
                                               >> 0x20U)))),4);
    bufp->fullCData(oldp+227,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__flush_list 
                                               >> 0x24U)))),4);
    bufp->fullCData(oldp+228,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__flush_list 
                                               >> 0x28U)))),4);
    bufp->fullCData(oldp+229,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__flush_list 
                                               >> 0x2cU)))),4);
    bufp->fullCData(oldp+230,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__flush_list 
                                               >> 0x30U)))),4);
    bufp->fullCData(oldp+231,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__flush_list 
                                               >> 0x34U)))),4);
    bufp->fullCData(oldp+232,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__flush_list 
                                               >> 0x38U)))),4);
    bufp->fullCData(oldp+233,((0xfU & (IData)((vlSelfRef.TCP_flow_ctrl__DOT__flush_list 
                                               >> 0x3cU)))),4);
    bufp->fullBit(oldp+234,(vlSelfRef.CLK));
    bufp->fullBit(oldp+235,(vlSelfRef.nRST));
    bufp->fullCData(oldp+236,(vlSelfRef.TCP_control_rx),8);
    bufp->fullIData(oldp+237,(vlSelfRef.seq_num_rx),32);
    bufp->fullIData(oldp+238,(vlSelfRef.ACK_rx),32);
    bufp->fullCData(oldp+239,(vlSelfRef.offset_rx),4);
    bufp->fullSData(oldp+240,(vlSelfRef.window_size_rx),16);
    bufp->fullSData(oldp+241,(vlSelfRef.checksum_rx),16);
    bufp->fullSData(oldp+242,(vlSelfRef.urgent_pointer_rx),16);
    bufp->fullBit(oldp+243,(vlSelfRef.rcv_data));
    bufp->fullBit(oldp+244,(vlSelfRef.TCP_tx_en));
    bufp->fullBit(oldp+245,(vlSelfRef.seq_up));
    bufp->fullCData(oldp+246,(vlSelfRef.TCP_control_tx),8);
    bufp->fullIData(oldp+247,(vlSelfRef.seq_num_tx),32);
    bufp->fullIData(oldp+248,(vlSelfRef.ACK_tx),32);
    bufp->fullCData(oldp+249,(vlSelfRef.offset_tx),4);
    bufp->fullSData(oldp+250,(vlSelfRef.window_size_tx),16);
    bufp->fullSData(oldp+251,(vlSelfRef.checksum_tx),16);
    bufp->fullSData(oldp+252,(vlSelfRef.urgent_pointer_tx),16);
    bufp->fullBit(oldp+253,(vlSelfRef.end_ss));
    bufp->fullBit(oldp+254,(vlSelfRef.TCP_stop_flg));
    bufp->fullBit(oldp+255,(vlSelfRef.full));
    bufp->fullBit(oldp+256,(vlSelfRef.timeout_flag));
    bufp->fullBit(oldp+257,(vlSelfRef.hand_shake_done));
    bufp->fullIData(oldp+258,(vlSelfRef.ISN_num),32);
    bufp->fullIData(oldp+259,(vlSelfRef.bytes_sent),32);
    bufp->fullIData(oldp+260,(vlSelfRef.bytes_abt_sent),32);
    bufp->fullIData(oldp+261,(vlSelfRef.payload_len_rx),32);
    bufp->fullBit(oldp+262,(vlSelfRef.TCP_last));
    bufp->fullIData(oldp+263,(vlSelfRef.rcv_next_out),32);
    bufp->fullIData(oldp+264,(vlSelfRef.seq_num_out),32);
    bufp->fullIData(oldp+265,(vlSelfRef.seq_rx_FIFO_rd),32);
    bufp->fullCData(oldp+266,(vlSelfRef.TCP_bytes_trk),8);
    bufp->fullCData(oldp+267,(vlSelfRef.wr_FIFO_offset),8);
    bufp->fullCData(oldp+268,(vlSelfRef.wr_FIFO_len),8);
    bufp->fullCData(oldp+269,(vlSelfRef.rd_FIFO_len),8);
    bufp->fullSData(oldp+270,(vlSelfRef.wr_FIFO_ptr),11);
    bufp->fullSData(oldp+271,(vlSelfRef.rd_FIFO_ptr),11);
    bufp->fullBit(oldp+272,(vlSelfRef.wr_FIFO_en));
    bufp->fullBit(oldp+273,(vlSelfRef.rd_FIFO_en));
    bufp->fullBit(oldp+274,(vlSelfRef.nw_segment));
    bufp->fullBit(oldp+275,(vlSelfRef.TCP_flush));
    bufp->fullBit(oldp+276,(vlSelfRef.rd_FIFO_valid));
    bufp->fullBit(oldp+277,((1U & ((IData)(vlSelfRef.TCP_control_rx) 
                                   >> 7U))));
    bufp->fullBit(oldp+278,((1U & ((IData)(vlSelfRef.TCP_control_rx) 
                                   >> 6U))));
    bufp->fullBit(oldp+279,((1U & ((IData)(vlSelfRef.TCP_control_rx) 
                                   >> 5U))));
    bufp->fullBit(oldp+280,((1U & ((IData)(vlSelfRef.TCP_control_rx) 
                                   >> 4U))));
    bufp->fullBit(oldp+281,((1U & ((IData)(vlSelfRef.TCP_control_rx) 
                                   >> 3U))));
    bufp->fullBit(oldp+282,((1U & ((IData)(vlSelfRef.TCP_control_rx) 
                                   >> 2U))));
    bufp->fullBit(oldp+283,((1U & ((IData)(vlSelfRef.TCP_control_rx) 
                                   >> 1U))));
    bufp->fullBit(oldp+284,((1U & (IData)(vlSelfRef.TCP_control_rx))));
    bufp->fullIData(oldp+285,(((vlSelfRef.seq_num_out 
                                + vlSelfRef.bytes_abt_sent) 
                               - ((IData)(vlSelfRef.TCP_flow_ctrl__DOT__ack_num) 
                                  - vlSelfRef.ISN_num))),32);
}
