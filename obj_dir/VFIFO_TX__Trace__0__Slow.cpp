// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VFIFO_TX__Syms.h"


VL_ATTR_COLD void VFIFO_TX___024root__trace_init_sub__TOP__0(VFIFO_TX___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_TX___024root__trace_init_sub__TOP__0\n"); );
    VFIFO_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+494,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+495,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+496,0,"seq_up",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+497,0,"seq_num_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+498,0,"rd_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+499,0,"TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+500,0,"checksum_TX",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+501,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+502,0,"rd_FIFO_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+503,0,"rd_FIFO_payload",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+505,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+506,0,"ACK_num",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+507,0,"ACK_rcv_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+508,0,"out_order_req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+509,0,"TCP_stop_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+510,0,"end_ss",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+511,0,"axis_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+512,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+513,0,"len_seq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+514,0,"soupbin_TCP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+516,0,"wr_FIFO_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+517,0,"re_trans",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+518,0,"checksum_re_trans",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("FIFO_TX", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+519,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+519,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+520,0,"FIFO_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+494,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+495,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+496,0,"seq_up",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+497,0,"seq_num_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+498,0,"rd_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+499,0,"TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+500,0,"checksum_TX",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+501,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+502,0,"rd_FIFO_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+503,0,"rd_FIFO_payload",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+505,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+506,0,"ACK_num",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+507,0,"ACK_rcv_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+508,0,"out_order_req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+509,0,"TCP_stop_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+510,0,"end_ss",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+511,0,"axis_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+512,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+513,0,"len_seq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+514,0,"soupbin_TCP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+516,0,"wr_FIFO_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+517,0,"re_trans",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+518,0,"checksum_re_trans",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1,0,"nbytes_abt_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+246,0,"bytes_msg_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+521,0,"nbytes_msg_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+2,0,"nrd_FIFO_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+247,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+4,0,"nptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+248,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+5,0,"nptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+249,0,"flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+250,0,"nflush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+251,0,"bytes_abt_sent_msg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+6,0,"nbytes_abt_sent_msg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+252,0,"msg_end_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+7,0,"nmsg_end_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+253,0,"rd_state",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+8,0,"nrd_state",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+254,0,"wr_state",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+9,0,"nwr_state",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("dict_tx", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+255,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+256,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+257,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+258,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+259,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+260,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+261,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+262,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+263,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+264,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+265,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+266,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+267,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+268,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+269,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+270,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+271,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+272,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+273,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+274,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+275,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+276,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+277,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+278,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+279,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+280,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+281,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+282,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+283,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+284,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+285,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+286,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+287,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+288,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+289,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+290,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+291,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+292,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+293,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+294,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+295,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+296,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+297,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+298,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+300,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+301,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+302,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+303,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+304,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+305,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+306,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+307,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+308,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+309,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+310,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+311,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+312,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+313,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+314,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+315,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+316,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+317,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+318,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+319,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+320,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+321,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+322,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+323,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+324,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+325,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+326,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+327,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+328,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+329,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+330,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+331,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+332,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+333,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+334,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+335,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+336,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+337,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+338,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+339,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+340,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+341,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+342,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+343,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+344,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+345,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+346,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+347,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+348,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+349,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+350,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ndict_tx", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+10,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+14,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+15,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+16,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+20,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+21,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+22,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+26,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+27,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+28,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+32,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+33,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+34,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+38,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+39,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+40,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+44,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+45,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+46,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+50,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+51,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+52,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+56,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+57,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+58,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+62,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+63,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+64,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+68,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+69,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+70,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+74,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+75,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+76,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+77,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+80,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+81,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+82,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+86,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+87,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+88,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+89,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+92,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+93,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+94,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+97,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+98,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+99,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+100,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+101,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+104,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+105,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+351,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+352,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"nrd_FIFO_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"nrd_FIFO_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"nwr_FIFO_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+353,0,"dict_wrt_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+109,0,"ndict_wrt_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+354,0,"dict_rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+355,0,"ndict_rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+356,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+110,0,"nrd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+357,0,"wrt_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+111,0,"nwrt_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->pushPrefix("TCP_tx_order", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declQuad(c+358,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+360,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+362,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+364,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+366,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+368,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+370,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+372,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+374,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+376,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+378,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+380,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+382,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+384,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+386,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+388,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+390,0,"[16]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+392,0,"[17]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+394,0,"[18]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+396,0,"[19]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+398,0,"[20]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+400,0,"[21]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+402,0,"[22]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+404,0,"[23]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+406,0,"[24]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+408,0,"[25]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+410,0,"[26]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+412,0,"[27]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+414,0,"[28]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+416,0,"[29]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+418,0,"[30]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+420,0,"[31]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+422,0,"[32]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+424,0,"[33]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+426,0,"[34]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+428,0,"[35]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+430,0,"[36]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+432,0,"[37]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+434,0,"[38]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+436,0,"[39]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+438,0,"[40]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+440,0,"[41]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+442,0,"[42]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+444,0,"[43]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+446,0,"[44]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+448,0,"[45]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+450,0,"[46]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+452,0,"[47]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+454,0,"[48]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+456,0,"[49]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+458,0,"[50]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+460,0,"[51]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+462,0,"[52]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+464,0,"[53]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+466,0,"[54]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+468,0,"[55]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+470,0,"[56]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+472,0,"[57]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+474,0,"[58]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+476,0,"[59]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+478,0,"[60]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+480,0,"[61]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+482,0,"[62]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+484,0,"[63]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("nTCP_tx_order", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declQuad(c+112,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+114,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+116,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+118,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+120,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+122,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+124,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+126,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+128,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+130,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+132,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+134,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+136,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+138,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+140,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+142,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+144,0,"[16]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+146,0,"[17]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+148,0,"[18]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+150,0,"[19]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+152,0,"[20]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+154,0,"[21]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+156,0,"[22]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+158,0,"[23]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+160,0,"[24]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+162,0,"[25]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+164,0,"[26]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+166,0,"[27]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+168,0,"[28]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+170,0,"[29]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+172,0,"[30]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+174,0,"[31]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+176,0,"[32]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+178,0,"[33]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+180,0,"[34]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+182,0,"[35]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+184,0,"[36]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+186,0,"[37]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+188,0,"[38]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+190,0,"[39]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+192,0,"[40]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+194,0,"[41]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+196,0,"[42]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+198,0,"[43]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+200,0,"[44]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+202,0,"[45]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+204,0,"[46]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+206,0,"[47]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+208,0,"[48]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+210,0,"[49]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+212,0,"[50]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+214,0,"[51]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+216,0,"[52]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+218,0,"[53]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+220,0,"[54]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+222,0,"[55]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+224,0,"[56]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+226,0,"[57]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+228,0,"[58]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+230,0,"[59]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+232,0,"[60]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+234,0,"[61]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+236,0,"[62]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+238,0,"[63]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->declBit(c+486,0,"out_order_req_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+240,0,"nout_order_req_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+487,0,"ACK_rcv_flag_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"nACK_rcv_flag_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+488,0,"ACK_num_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+242,0,"nACK_num_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+489,0,"rd_debug_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"rd_debug_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+491,0,"rd_upd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+243,0,"nrd_upd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+492,0,"bytes_abt_sent_msg_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+244,0,"nbytes_abt_sent_msg_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+493,0,"checksum_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+245,0,"nchecksum_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void VFIFO_TX___024root__trace_init_top(VFIFO_TX___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_TX___024root__trace_init_top\n"); );
    VFIFO_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VFIFO_TX___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VFIFO_TX___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void VFIFO_TX___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void VFIFO_TX___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void VFIFO_TX___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void VFIFO_TX___024root__trace_register(VFIFO_TX___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_TX___024root__trace_register\n"); );
    VFIFO_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VFIFO_TX___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VFIFO_TX___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VFIFO_TX___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VFIFO_TX___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VFIFO_TX___024root__trace_const_0_sub_0(VFIFO_TX___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void VFIFO_TX___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_TX___024root__trace_const_0\n"); );
    // Init
    VFIFO_TX___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFIFO_TX___024root*>(voidSelf);
    VFIFO_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VFIFO_TX___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VFIFO_TX___024root__trace_const_0_sub_0(VFIFO_TX___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_TX___024root__trace_const_0_sub_0\n"); );
    VFIFO_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+519,(0x40U),32);
    bufp->fullIData(oldp+520,(6U),32);
    bufp->fullSData(oldp+521,(0U),16);
}

VL_ATTR_COLD void VFIFO_TX___024root__trace_full_0_sub_0(VFIFO_TX___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void VFIFO_TX___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_TX___024root__trace_full_0\n"); );
    // Init
    VFIFO_TX___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFIFO_TX___024root*>(voidSelf);
    VFIFO_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VFIFO_TX___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VFIFO_TX___024root__trace_full_0_sub_0(VFIFO_TX___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_TX___024root__trace_full_0_sub_0\n"); );
    VFIFO_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+1,(vlSelfRef.FIFO_TX__DOT__nbytes_abt_sent),16);
    bufp->fullQData(oldp+2,(vlSelfRef.FIFO_TX__DOT__nrd_FIFO_payload),64);
    bufp->fullCData(oldp+4,(vlSelfRef.FIFO_TX__DOT__nptr_str),6);
    bufp->fullCData(oldp+5,(vlSelfRef.FIFO_TX__DOT__nptr_end),6);
    bufp->fullSData(oldp+6,(vlSelfRef.FIFO_TX__DOT__nbytes_abt_sent_msg),16);
    bufp->fullCData(oldp+7,(vlSelfRef.FIFO_TX__DOT__nmsg_end_ptr),6);
    bufp->fullCData(oldp+8,(vlSelfRef.FIFO_TX__DOT__nrd_state),2);
    bufp->fullCData(oldp+9,(vlSelfRef.FIFO_TX__DOT__nwr_state),2);
    bufp->fullBit(oldp+10,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[2U] 
                                  >> 0x1cU))));
    bufp->fullIData(oldp+11,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[2U] 
                               << 4U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[1U] 
                                         >> 0x1cU))),32);
    bufp->fullIData(oldp+12,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[1U] 
                               << 4U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0U] 
                                         >> 0x1cU))),32);
    bufp->fullSData(oldp+13,((0xffffU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0U] 
                                         >> 0xcU))),16);
    bufp->fullCData(oldp+14,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0U] 
                                       >> 6U))),6);
    bufp->fullCData(oldp+15,((0x3fU & vlSelfRef.FIFO_TX__DOT__ndict_tx[0U])),6);
    bufp->fullBit(oldp+16,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[5U] 
                                  >> 0x19U))));
    bufp->fullIData(oldp+17,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[5U] 
                               << 7U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[4U] 
                                         >> 0x19U))),32);
    bufp->fullIData(oldp+18,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[4U] 
                               << 7U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[3U] 
                                         >> 0x19U))),32);
    bufp->fullSData(oldp+19,((0xffffU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[3U] 
                                         >> 9U))),16);
    bufp->fullCData(oldp+20,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[3U] 
                                       >> 3U))),6);
    bufp->fullCData(oldp+21,((0x3fU & ((vlSelfRef.FIFO_TX__DOT__ndict_tx[3U] 
                                        << 3U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[2U] 
                                                  >> 0x1dU)))),6);
    bufp->fullBit(oldp+22,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[8U] 
                                  >> 0x16U))));
    bufp->fullIData(oldp+23,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[8U] 
                               << 0xaU) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[7U] 
                                           >> 0x16U))),32);
    bufp->fullIData(oldp+24,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[7U] 
                               << 0xaU) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[6U] 
                                           >> 0x16U))),32);
    bufp->fullSData(oldp+25,((0xffffU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[6U] 
                                         >> 6U))),16);
    bufp->fullCData(oldp+26,((0x3fU & vlSelfRef.FIFO_TX__DOT__ndict_tx[6U])),6);
    bufp->fullCData(oldp+27,((vlSelfRef.FIFO_TX__DOT__ndict_tx[5U] 
                              >> 0x1aU)),6);
    bufp->fullBit(oldp+28,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0xbU] 
                                  >> 0x13U))));
    bufp->fullIData(oldp+29,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0xbU] 
                               << 0xdU) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0xaU] 
                                           >> 0x13U))),32);
    bufp->fullIData(oldp+30,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0xaU] 
                               << 0xdU) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[9U] 
                                           >> 0x13U))),32);
    bufp->fullSData(oldp+31,((0xffffU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[9U] 
                                         >> 3U))),16);
    bufp->fullCData(oldp+32,((0x3fU & ((vlSelfRef.FIFO_TX__DOT__ndict_tx[9U] 
                                        << 3U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[8U] 
                                                  >> 0x1dU)))),6);
    bufp->fullCData(oldp+33,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[8U] 
                                       >> 0x17U))),6);
    bufp->fullBit(oldp+34,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0xeU] 
                                  >> 0x10U))));
    bufp->fullIData(oldp+35,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0xeU] 
                               << 0x10U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0xdU] 
                                            >> 0x10U))),32);
    bufp->fullIData(oldp+36,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0xdU] 
                               << 0x10U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0xcU] 
                                            >> 0x10U))),32);
    bufp->fullSData(oldp+37,((0xffffU & vlSelfRef.FIFO_TX__DOT__ndict_tx[0xcU])),16);
    bufp->fullCData(oldp+38,((vlSelfRef.FIFO_TX__DOT__ndict_tx[0xbU] 
                              >> 0x1aU)),6);
    bufp->fullCData(oldp+39,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0xbU] 
                                       >> 0x14U))),6);
    bufp->fullBit(oldp+40,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x11U] 
                                  >> 0xdU))));
    bufp->fullIData(oldp+41,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x11U] 
                               << 0x13U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x10U] 
                                            >> 0xdU))),32);
    bufp->fullIData(oldp+42,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x10U] 
                               << 0x13U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0xfU] 
                                            >> 0xdU))),32);
    bufp->fullSData(oldp+43,((0xffffU & ((vlSelfRef.FIFO_TX__DOT__ndict_tx[0xfU] 
                                          << 3U) | 
                                         (vlSelfRef.FIFO_TX__DOT__ndict_tx[0xeU] 
                                          >> 0x1dU)))),16);
    bufp->fullCData(oldp+44,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0xeU] 
                                       >> 0x17U))),6);
    bufp->fullCData(oldp+45,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0xeU] 
                                       >> 0x11U))),6);
    bufp->fullBit(oldp+46,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x14U] 
                                  >> 0xaU))));
    bufp->fullIData(oldp+47,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x14U] 
                               << 0x16U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x13U] 
                                            >> 0xaU))),32);
    bufp->fullIData(oldp+48,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x13U] 
                               << 0x16U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x12U] 
                                            >> 0xaU))),32);
    bufp->fullSData(oldp+49,((0xffffU & ((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x12U] 
                                          << 6U) | 
                                         (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x11U] 
                                          >> 0x1aU)))),16);
    bufp->fullCData(oldp+50,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x11U] 
                                       >> 0x14U))),6);
    bufp->fullCData(oldp+51,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x11U] 
                                       >> 0xeU))),6);
    bufp->fullBit(oldp+52,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x17U] 
                                  >> 7U))));
    bufp->fullIData(oldp+53,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x17U] 
                               << 0x19U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x16U] 
                                            >> 7U))),32);
    bufp->fullIData(oldp+54,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x16U] 
                               << 0x19U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x15U] 
                                            >> 7U))),32);
    bufp->fullSData(oldp+55,((0xffffU & ((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x15U] 
                                          << 9U) | 
                                         (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x14U] 
                                          >> 0x17U)))),16);
    bufp->fullCData(oldp+56,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x14U] 
                                       >> 0x11U))),6);
    bufp->fullCData(oldp+57,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x14U] 
                                       >> 0xbU))),6);
    bufp->fullBit(oldp+58,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1aU] 
                                  >> 4U))));
    bufp->fullIData(oldp+59,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1aU] 
                               << 0x1cU) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x19U] 
                                            >> 4U))),32);
    bufp->fullIData(oldp+60,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x19U] 
                               << 0x1cU) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x18U] 
                                            >> 4U))),32);
    bufp->fullSData(oldp+61,((0xffffU & ((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x18U] 
                                          << 0xcU) 
                                         | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x17U] 
                                            >> 0x14U)))),16);
    bufp->fullCData(oldp+62,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x17U] 
                                       >> 0xeU))),6);
    bufp->fullCData(oldp+63,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x17U] 
                                       >> 8U))),6);
    bufp->fullBit(oldp+64,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1dU] 
                                  >> 1U))));
    bufp->fullIData(oldp+65,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1dU] 
                               << 0x1fU) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1cU] 
                                            >> 1U))),32);
    bufp->fullIData(oldp+66,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1cU] 
                               << 0x1fU) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1bU] 
                                            >> 1U))),32);
    bufp->fullSData(oldp+67,((0xffffU & ((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1bU] 
                                          << 0xfU) 
                                         | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1aU] 
                                            >> 0x11U)))),16);
    bufp->fullCData(oldp+68,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1aU] 
                                       >> 0xbU))),6);
    bufp->fullCData(oldp+69,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1aU] 
                                       >> 5U))),6);
    bufp->fullBit(oldp+70,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1fU] 
                                  >> 0x1eU))));
    bufp->fullIData(oldp+71,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1fU] 
                               << 2U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1eU] 
                                         >> 0x1eU))),32);
    bufp->fullIData(oldp+72,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1eU] 
                               << 2U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1dU] 
                                         >> 0x1eU))),32);
    bufp->fullSData(oldp+73,((0xffffU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1dU] 
                                         >> 0xeU))),16);
    bufp->fullCData(oldp+74,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1dU] 
                                       >> 8U))),6);
    bufp->fullCData(oldp+75,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1dU] 
                                       >> 2U))),6);
    bufp->fullBit(oldp+76,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x22U] 
                                  >> 0x1bU))));
    bufp->fullIData(oldp+77,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x22U] 
                               << 5U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x21U] 
                                         >> 0x1bU))),32);
    bufp->fullIData(oldp+78,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x21U] 
                               << 5U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x20U] 
                                         >> 0x1bU))),32);
    bufp->fullSData(oldp+79,((0xffffU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x20U] 
                                         >> 0xbU))),16);
    bufp->fullCData(oldp+80,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x20U] 
                                       >> 5U))),6);
    bufp->fullCData(oldp+81,((0x3fU & ((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x20U] 
                                        << 1U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1fU] 
                                                  >> 0x1fU)))),6);
    bufp->fullBit(oldp+82,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x25U] 
                                  >> 0x18U))));
    bufp->fullIData(oldp+83,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x25U] 
                               << 8U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x24U] 
                                         >> 0x18U))),32);
    bufp->fullIData(oldp+84,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x24U] 
                               << 8U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x23U] 
                                         >> 0x18U))),32);
    bufp->fullSData(oldp+85,((0xffffU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x23U] 
                                         >> 8U))),16);
    bufp->fullCData(oldp+86,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x23U] 
                                       >> 2U))),6);
    bufp->fullCData(oldp+87,((0x3fU & ((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x23U] 
                                        << 4U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x22U] 
                                                  >> 0x1cU)))),6);
    bufp->fullBit(oldp+88,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x28U] 
                                  >> 0x15U))));
    bufp->fullIData(oldp+89,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x28U] 
                               << 0xbU) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x27U] 
                                           >> 0x15U))),32);
    bufp->fullIData(oldp+90,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x27U] 
                               << 0xbU) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x26U] 
                                           >> 0x15U))),32);
    bufp->fullSData(oldp+91,((0xffffU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x26U] 
                                         >> 5U))),16);
    bufp->fullCData(oldp+92,((0x3fU & ((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x26U] 
                                        << 1U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x25U] 
                                                  >> 0x1fU)))),6);
    bufp->fullCData(oldp+93,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x25U] 
                                       >> 0x19U))),6);
    bufp->fullBit(oldp+94,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x2bU] 
                                  >> 0x12U))));
    bufp->fullIData(oldp+95,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x2bU] 
                               << 0xeU) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x2aU] 
                                           >> 0x12U))),32);
    bufp->fullIData(oldp+96,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x2aU] 
                               << 0xeU) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x29U] 
                                           >> 0x12U))),32);
    bufp->fullSData(oldp+97,((0xffffU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x29U] 
                                         >> 2U))),16);
    bufp->fullCData(oldp+98,((0x3fU & ((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x29U] 
                                        << 4U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x28U] 
                                                  >> 0x1cU)))),6);
    bufp->fullCData(oldp+99,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x28U] 
                                       >> 0x16U))),6);
    bufp->fullBit(oldp+100,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x2eU] 
                                   >> 0xfU))));
    bufp->fullIData(oldp+101,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x2eU] 
                                << 0x11U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x2dU] 
                                             >> 0xfU))),32);
    bufp->fullIData(oldp+102,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x2dU] 
                                << 0x11U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x2cU] 
                                             >> 0xfU))),32);
    bufp->fullSData(oldp+103,((0xffffU & ((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x2cU] 
                                           << 1U) | 
                                          (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x2bU] 
                                           >> 0x1fU)))),16);
    bufp->fullCData(oldp+104,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x2bU] 
                                        >> 0x19U))),6);
    bufp->fullCData(oldp+105,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x2bU] 
                                        >> 0x13U))),6);
    bufp->fullBit(oldp+106,(vlSelfRef.FIFO_TX__DOT__nrd_FIFO_last));
    bufp->fullBit(oldp+107,(vlSelfRef.FIFO_TX__DOT__nrd_FIFO_valid));
    bufp->fullBit(oldp+108,(vlSelfRef.FIFO_TX__DOT__nwr_FIFO_valid));
    bufp->fullCData(oldp+109,(vlSelfRef.FIFO_TX__DOT__ndict_wrt_ptr),4);
    bufp->fullCData(oldp+110,(vlSelfRef.FIFO_TX__DOT__nrd_ptr),6);
    bufp->fullCData(oldp+111,(vlSelfRef.FIFO_TX__DOT__nwrt_ptr),6);
    bufp->fullQData(oldp+112,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0U])))),64);
    bufp->fullQData(oldp+114,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[2U])))),64);
    bufp->fullQData(oldp+116,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[5U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[4U])))),64);
    bufp->fullQData(oldp+118,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[7U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[6U])))),64);
    bufp->fullQData(oldp+120,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[9U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[8U])))),64);
    bufp->fullQData(oldp+122,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0xbU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0xaU])))),64);
    bufp->fullQData(oldp+124,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0xdU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0xcU])))),64);
    bufp->fullQData(oldp+126,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0xfU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0xeU])))),64);
    bufp->fullQData(oldp+128,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x11U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x10U])))),64);
    bufp->fullQData(oldp+130,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x13U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x12U])))),64);
    bufp->fullQData(oldp+132,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x15U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x14U])))),64);
    bufp->fullQData(oldp+134,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x17U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x16U])))),64);
    bufp->fullQData(oldp+136,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x19U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x18U])))),64);
    bufp->fullQData(oldp+138,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x1bU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x1aU])))),64);
    bufp->fullQData(oldp+140,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x1dU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x1cU])))),64);
    bufp->fullQData(oldp+142,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x1fU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x1eU])))),64);
    bufp->fullQData(oldp+144,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x21U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x20U])))),64);
    bufp->fullQData(oldp+146,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x23U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x22U])))),64);
    bufp->fullQData(oldp+148,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x25U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x24U])))),64);
    bufp->fullQData(oldp+150,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x27U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x26U])))),64);
    bufp->fullQData(oldp+152,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x29U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x28U])))),64);
    bufp->fullQData(oldp+154,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x2bU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x2aU])))),64);
    bufp->fullQData(oldp+156,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x2dU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x2cU])))),64);
    bufp->fullQData(oldp+158,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x2fU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x2eU])))),64);
    bufp->fullQData(oldp+160,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x31U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x30U])))),64);
    bufp->fullQData(oldp+162,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x33U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x32U])))),64);
    bufp->fullQData(oldp+164,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x35U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x34U])))),64);
    bufp->fullQData(oldp+166,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x37U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x36U])))),64);
    bufp->fullQData(oldp+168,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x39U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x38U])))),64);
    bufp->fullQData(oldp+170,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x3bU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x3aU])))),64);
    bufp->fullQData(oldp+172,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x3dU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x3cU])))),64);
    bufp->fullQData(oldp+174,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x3fU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x3eU])))),64);
    bufp->fullQData(oldp+176,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x41U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x40U])))),64);
    bufp->fullQData(oldp+178,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x43U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x42U])))),64);
    bufp->fullQData(oldp+180,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x45U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x44U])))),64);
    bufp->fullQData(oldp+182,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x47U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x46U])))),64);
    bufp->fullQData(oldp+184,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x49U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x48U])))),64);
    bufp->fullQData(oldp+186,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x4bU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x4aU])))),64);
    bufp->fullQData(oldp+188,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x4dU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x4cU])))),64);
    bufp->fullQData(oldp+190,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x4fU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x4eU])))),64);
    bufp->fullQData(oldp+192,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x51U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x50U])))),64);
    bufp->fullQData(oldp+194,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x53U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x52U])))),64);
    bufp->fullQData(oldp+196,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x55U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x54U])))),64);
    bufp->fullQData(oldp+198,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x57U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x56U])))),64);
    bufp->fullQData(oldp+200,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x59U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x58U])))),64);
    bufp->fullQData(oldp+202,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x5bU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x5aU])))),64);
    bufp->fullQData(oldp+204,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x5dU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x5cU])))),64);
    bufp->fullQData(oldp+206,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x5fU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x5eU])))),64);
    bufp->fullQData(oldp+208,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x61U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x60U])))),64);
    bufp->fullQData(oldp+210,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x63U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x62U])))),64);
    bufp->fullQData(oldp+212,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x65U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x64U])))),64);
    bufp->fullQData(oldp+214,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x67U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x66U])))),64);
    bufp->fullQData(oldp+216,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x69U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x68U])))),64);
    bufp->fullQData(oldp+218,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x6bU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x6aU])))),64);
    bufp->fullQData(oldp+220,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x6dU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x6cU])))),64);
    bufp->fullQData(oldp+222,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x6fU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x6eU])))),64);
    bufp->fullQData(oldp+224,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x71U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x70U])))),64);
    bufp->fullQData(oldp+226,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x73U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x72U])))),64);
    bufp->fullQData(oldp+228,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x75U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x74U])))),64);
    bufp->fullQData(oldp+230,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x77U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x76U])))),64);
    bufp->fullQData(oldp+232,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x79U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x78U])))),64);
    bufp->fullQData(oldp+234,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x7bU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x7aU])))),64);
    bufp->fullQData(oldp+236,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x7dU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x7cU])))),64);
    bufp->fullQData(oldp+238,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x7fU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0x7eU])))),64);
    bufp->fullBit(oldp+240,(vlSelfRef.FIFO_TX__DOT__nout_order_req_l));
    bufp->fullBit(oldp+241,(vlSelfRef.FIFO_TX__DOT__nACK_rcv_flag_l));
    bufp->fullIData(oldp+242,(vlSelfRef.FIFO_TX__DOT__nACK_num_l),32);
    bufp->fullBit(oldp+243,(vlSelfRef.FIFO_TX__DOT__nrd_upd));
    bufp->fullSData(oldp+244,(vlSelfRef.FIFO_TX__DOT__nbytes_abt_sent_msg_rd),16);
    bufp->fullSData(oldp+245,(vlSelfRef.FIFO_TX__DOT__nchecksum_l),16);
    bufp->fullSData(oldp+246,(vlSelfRef.FIFO_TX__DOT__bytes_msg_trk),16);
    bufp->fullCData(oldp+247,(vlSelfRef.FIFO_TX__DOT__ptr_str),6);
    bufp->fullCData(oldp+248,(vlSelfRef.FIFO_TX__DOT__ptr_end),6);
    bufp->fullCData(oldp+249,(vlSelfRef.FIFO_TX__DOT__flush_ptr),6);
    bufp->fullCData(oldp+250,(vlSelfRef.FIFO_TX__DOT__nflush_ptr),6);
    bufp->fullSData(oldp+251,(vlSelfRef.FIFO_TX__DOT__bytes_abt_sent_msg),16);
    bufp->fullCData(oldp+252,(vlSelfRef.FIFO_TX__DOT__msg_end_ptr),6);
    bufp->fullCData(oldp+253,(vlSelfRef.FIFO_TX__DOT__rd_state),2);
    bufp->fullCData(oldp+254,(vlSelfRef.FIFO_TX__DOT__wr_state),2);
    bufp->fullBit(oldp+255,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[2U] 
                                   >> 0x1cU))));
    bufp->fullIData(oldp+256,(((vlSelfRef.FIFO_TX__DOT__dict_tx[2U] 
                                << 4U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[1U] 
                                          >> 0x1cU))),32);
    bufp->fullIData(oldp+257,(((vlSelfRef.FIFO_TX__DOT__dict_tx[1U] 
                                << 4U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0U] 
                                          >> 0x1cU))),32);
    bufp->fullSData(oldp+258,((0xffffU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0U] 
                                          >> 0xcU))),16);
    bufp->fullCData(oldp+259,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0U] 
                                        >> 6U))),6);
    bufp->fullCData(oldp+260,((0x3fU & vlSelfRef.FIFO_TX__DOT__dict_tx[0U])),6);
    bufp->fullBit(oldp+261,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[5U] 
                                   >> 0x19U))));
    bufp->fullIData(oldp+262,(((vlSelfRef.FIFO_TX__DOT__dict_tx[5U] 
                                << 7U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[4U] 
                                          >> 0x19U))),32);
    bufp->fullIData(oldp+263,(((vlSelfRef.FIFO_TX__DOT__dict_tx[4U] 
                                << 7U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[3U] 
                                          >> 0x19U))),32);
    bufp->fullSData(oldp+264,((0xffffU & (vlSelfRef.FIFO_TX__DOT__dict_tx[3U] 
                                          >> 9U))),16);
    bufp->fullCData(oldp+265,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[3U] 
                                        >> 3U))),6);
    bufp->fullCData(oldp+266,((0x3fU & ((vlSelfRef.FIFO_TX__DOT__dict_tx[3U] 
                                         << 3U) | (
                                                   vlSelfRef.FIFO_TX__DOT__dict_tx[2U] 
                                                   >> 0x1dU)))),6);
    bufp->fullBit(oldp+267,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[8U] 
                                   >> 0x16U))));
    bufp->fullIData(oldp+268,(((vlSelfRef.FIFO_TX__DOT__dict_tx[8U] 
                                << 0xaU) | (vlSelfRef.FIFO_TX__DOT__dict_tx[7U] 
                                            >> 0x16U))),32);
    bufp->fullIData(oldp+269,(((vlSelfRef.FIFO_TX__DOT__dict_tx[7U] 
                                << 0xaU) | (vlSelfRef.FIFO_TX__DOT__dict_tx[6U] 
                                            >> 0x16U))),32);
    bufp->fullSData(oldp+270,((0xffffU & (vlSelfRef.FIFO_TX__DOT__dict_tx[6U] 
                                          >> 6U))),16);
    bufp->fullCData(oldp+271,((0x3fU & vlSelfRef.FIFO_TX__DOT__dict_tx[6U])),6);
    bufp->fullCData(oldp+272,((vlSelfRef.FIFO_TX__DOT__dict_tx[5U] 
                               >> 0x1aU)),6);
    bufp->fullBit(oldp+273,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[0xbU] 
                                   >> 0x13U))));
    bufp->fullIData(oldp+274,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0xbU] 
                                << 0xdU) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0xaU] 
                                            >> 0x13U))),32);
    bufp->fullIData(oldp+275,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0xaU] 
                                << 0xdU) | (vlSelfRef.FIFO_TX__DOT__dict_tx[9U] 
                                            >> 0x13U))),32);
    bufp->fullSData(oldp+276,((0xffffU & (vlSelfRef.FIFO_TX__DOT__dict_tx[9U] 
                                          >> 3U))),16);
    bufp->fullCData(oldp+277,((0x3fU & ((vlSelfRef.FIFO_TX__DOT__dict_tx[9U] 
                                         << 3U) | (
                                                   vlSelfRef.FIFO_TX__DOT__dict_tx[8U] 
                                                   >> 0x1dU)))),6);
    bufp->fullCData(oldp+278,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[8U] 
                                        >> 0x17U))),6);
    bufp->fullBit(oldp+279,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[0xeU] 
                                   >> 0x10U))));
    bufp->fullIData(oldp+280,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0xeU] 
                                << 0x10U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0xdU] 
                                             >> 0x10U))),32);
    bufp->fullIData(oldp+281,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0xdU] 
                                << 0x10U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0xcU] 
                                             >> 0x10U))),32);
    bufp->fullSData(oldp+282,((0xffffU & vlSelfRef.FIFO_TX__DOT__dict_tx[0xcU])),16);
    bufp->fullCData(oldp+283,((vlSelfRef.FIFO_TX__DOT__dict_tx[0xbU] 
                               >> 0x1aU)),6);
    bufp->fullCData(oldp+284,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0xbU] 
                                        >> 0x14U))),6);
    bufp->fullBit(oldp+285,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x11U] 
                                   >> 0xdU))));
    bufp->fullIData(oldp+286,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x11U] 
                                << 0x13U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x10U] 
                                             >> 0xdU))),32);
    bufp->fullIData(oldp+287,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x10U] 
                                << 0x13U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0xfU] 
                                             >> 0xdU))),32);
    bufp->fullSData(oldp+288,((0xffffU & ((vlSelfRef.FIFO_TX__DOT__dict_tx[0xfU] 
                                           << 3U) | 
                                          (vlSelfRef.FIFO_TX__DOT__dict_tx[0xeU] 
                                           >> 0x1dU)))),16);
    bufp->fullCData(oldp+289,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0xeU] 
                                        >> 0x17U))),6);
    bufp->fullCData(oldp+290,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0xeU] 
                                        >> 0x11U))),6);
    bufp->fullBit(oldp+291,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x14U] 
                                   >> 0xaU))));
    bufp->fullIData(oldp+292,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x14U] 
                                << 0x16U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x13U] 
                                             >> 0xaU))),32);
    bufp->fullIData(oldp+293,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x13U] 
                                << 0x16U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x12U] 
                                             >> 0xaU))),32);
    bufp->fullSData(oldp+294,((0xffffU & ((vlSelfRef.FIFO_TX__DOT__dict_tx[0x12U] 
                                           << 6U) | 
                                          (vlSelfRef.FIFO_TX__DOT__dict_tx[0x11U] 
                                           >> 0x1aU)))),16);
    bufp->fullCData(oldp+295,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x11U] 
                                        >> 0x14U))),6);
    bufp->fullCData(oldp+296,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x11U] 
                                        >> 0xeU))),6);
    bufp->fullBit(oldp+297,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x17U] 
                                   >> 7U))));
    bufp->fullIData(oldp+298,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x17U] 
                                << 0x19U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x16U] 
                                             >> 7U))),32);
    bufp->fullIData(oldp+299,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x16U] 
                                << 0x19U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x15U] 
                                             >> 7U))),32);
    bufp->fullSData(oldp+300,((0xffffU & ((vlSelfRef.FIFO_TX__DOT__dict_tx[0x15U] 
                                           << 9U) | 
                                          (vlSelfRef.FIFO_TX__DOT__dict_tx[0x14U] 
                                           >> 0x17U)))),16);
    bufp->fullCData(oldp+301,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x14U] 
                                        >> 0x11U))),6);
    bufp->fullCData(oldp+302,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x14U] 
                                        >> 0xbU))),6);
    bufp->fullBit(oldp+303,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1aU] 
                                   >> 4U))));
    bufp->fullIData(oldp+304,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x1aU] 
                                << 0x1cU) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x19U] 
                                             >> 4U))),32);
    bufp->fullIData(oldp+305,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x19U] 
                                << 0x1cU) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x18U] 
                                             >> 4U))),32);
    bufp->fullSData(oldp+306,((0xffffU & ((vlSelfRef.FIFO_TX__DOT__dict_tx[0x18U] 
                                           << 0xcU) 
                                          | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x17U] 
                                             >> 0x14U)))),16);
    bufp->fullCData(oldp+307,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x17U] 
                                        >> 0xeU))),6);
    bufp->fullCData(oldp+308,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x17U] 
                                        >> 8U))),6);
    bufp->fullBit(oldp+309,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1dU] 
                                   >> 1U))));
    bufp->fullIData(oldp+310,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x1dU] 
                                << 0x1fU) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1cU] 
                                             >> 1U))),32);
    bufp->fullIData(oldp+311,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x1cU] 
                                << 0x1fU) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1bU] 
                                             >> 1U))),32);
    bufp->fullSData(oldp+312,((0xffffU & ((vlSelfRef.FIFO_TX__DOT__dict_tx[0x1bU] 
                                           << 0xfU) 
                                          | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1aU] 
                                             >> 0x11U)))),16);
    bufp->fullCData(oldp+313,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1aU] 
                                        >> 0xbU))),6);
    bufp->fullCData(oldp+314,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1aU] 
                                        >> 5U))),6);
    bufp->fullBit(oldp+315,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1fU] 
                                   >> 0x1eU))));
    bufp->fullIData(oldp+316,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x1fU] 
                                << 2U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1eU] 
                                          >> 0x1eU))),32);
    bufp->fullIData(oldp+317,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x1eU] 
                                << 2U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1dU] 
                                          >> 0x1eU))),32);
    bufp->fullSData(oldp+318,((0xffffU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1dU] 
                                          >> 0xeU))),16);
    bufp->fullCData(oldp+319,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1dU] 
                                        >> 8U))),6);
    bufp->fullCData(oldp+320,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1dU] 
                                        >> 2U))),6);
    bufp->fullBit(oldp+321,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x22U] 
                                   >> 0x1bU))));
    bufp->fullIData(oldp+322,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x22U] 
                                << 5U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x21U] 
                                          >> 0x1bU))),32);
    bufp->fullIData(oldp+323,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x21U] 
                                << 5U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x20U] 
                                          >> 0x1bU))),32);
    bufp->fullSData(oldp+324,((0xffffU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x20U] 
                                          >> 0xbU))),16);
    bufp->fullCData(oldp+325,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x20U] 
                                        >> 5U))),6);
    bufp->fullCData(oldp+326,((0x3fU & ((vlSelfRef.FIFO_TX__DOT__dict_tx[0x20U] 
                                         << 1U) | (
                                                   vlSelfRef.FIFO_TX__DOT__dict_tx[0x1fU] 
                                                   >> 0x1fU)))),6);
    bufp->fullBit(oldp+327,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x25U] 
                                   >> 0x18U))));
    bufp->fullIData(oldp+328,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x25U] 
                                << 8U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x24U] 
                                          >> 0x18U))),32);
    bufp->fullIData(oldp+329,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x24U] 
                                << 8U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x23U] 
                                          >> 0x18U))),32);
    bufp->fullSData(oldp+330,((0xffffU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x23U] 
                                          >> 8U))),16);
    bufp->fullCData(oldp+331,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x23U] 
                                        >> 2U))),6);
    bufp->fullCData(oldp+332,((0x3fU & ((vlSelfRef.FIFO_TX__DOT__dict_tx[0x23U] 
                                         << 4U) | (
                                                   vlSelfRef.FIFO_TX__DOT__dict_tx[0x22U] 
                                                   >> 0x1cU)))),6);
    bufp->fullBit(oldp+333,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x28U] 
                                   >> 0x15U))));
    bufp->fullIData(oldp+334,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x28U] 
                                << 0xbU) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x27U] 
                                            >> 0x15U))),32);
    bufp->fullIData(oldp+335,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x27U] 
                                << 0xbU) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x26U] 
                                            >> 0x15U))),32);
    bufp->fullSData(oldp+336,((0xffffU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x26U] 
                                          >> 5U))),16);
    bufp->fullCData(oldp+337,((0x3fU & ((vlSelfRef.FIFO_TX__DOT__dict_tx[0x26U] 
                                         << 1U) | (
                                                   vlSelfRef.FIFO_TX__DOT__dict_tx[0x25U] 
                                                   >> 0x1fU)))),6);
    bufp->fullCData(oldp+338,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x25U] 
                                        >> 0x19U))),6);
    bufp->fullBit(oldp+339,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x2bU] 
                                   >> 0x12U))));
    bufp->fullIData(oldp+340,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x2bU] 
                                << 0xeU) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x2aU] 
                                            >> 0x12U))),32);
    bufp->fullIData(oldp+341,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x2aU] 
                                << 0xeU) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x29U] 
                                            >> 0x12U))),32);
    bufp->fullSData(oldp+342,((0xffffU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x29U] 
                                          >> 2U))),16);
    bufp->fullCData(oldp+343,((0x3fU & ((vlSelfRef.FIFO_TX__DOT__dict_tx[0x29U] 
                                         << 4U) | (
                                                   vlSelfRef.FIFO_TX__DOT__dict_tx[0x28U] 
                                                   >> 0x1cU)))),6);
    bufp->fullCData(oldp+344,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x28U] 
                                        >> 0x16U))),6);
    bufp->fullBit(oldp+345,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x2eU] 
                                   >> 0xfU))));
    bufp->fullIData(oldp+346,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x2eU] 
                                << 0x11U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x2dU] 
                                             >> 0xfU))),32);
    bufp->fullIData(oldp+347,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x2dU] 
                                << 0x11U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x2cU] 
                                             >> 0xfU))),32);
    bufp->fullSData(oldp+348,((0xffffU & ((vlSelfRef.FIFO_TX__DOT__dict_tx[0x2cU] 
                                           << 1U) | 
                                          (vlSelfRef.FIFO_TX__DOT__dict_tx[0x2bU] 
                                           >> 0x1fU)))),16);
    bufp->fullCData(oldp+349,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x2bU] 
                                        >> 0x19U))),6);
    bufp->fullCData(oldp+350,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x2bU] 
                                        >> 0x13U))),6);
    bufp->fullBit(oldp+351,(vlSelfRef.FIFO_TX__DOT__full));
    bufp->fullBit(oldp+352,(((IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr) 
                             == (IData)(vlSelfRef.FIFO_TX__DOT__wrt_ptr))));
    bufp->fullCData(oldp+353,(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr),4);
    bufp->fullCData(oldp+354,(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr),4);
    bufp->fullCData(oldp+355,(vlSelfRef.FIFO_TX__DOT__ndict_rd_ptr),4);
    bufp->fullCData(oldp+356,(vlSelfRef.FIFO_TX__DOT__rd_ptr),6);
    bufp->fullCData(oldp+357,(vlSelfRef.FIFO_TX__DOT__wrt_ptr),6);
    bufp->fullQData(oldp+358,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0U])))),64);
    bufp->fullQData(oldp+360,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[2U])))),64);
    bufp->fullQData(oldp+362,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[5U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[4U])))),64);
    bufp->fullQData(oldp+364,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[7U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[6U])))),64);
    bufp->fullQData(oldp+366,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[9U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[8U])))),64);
    bufp->fullQData(oldp+368,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0xbU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0xaU])))),64);
    bufp->fullQData(oldp+370,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0xdU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0xcU])))),64);
    bufp->fullQData(oldp+372,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0xfU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0xeU])))),64);
    bufp->fullQData(oldp+374,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x11U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x10U])))),64);
    bufp->fullQData(oldp+376,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x13U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x12U])))),64);
    bufp->fullQData(oldp+378,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x15U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x14U])))),64);
    bufp->fullQData(oldp+380,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x17U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x16U])))),64);
    bufp->fullQData(oldp+382,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x19U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x18U])))),64);
    bufp->fullQData(oldp+384,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x1bU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x1aU])))),64);
    bufp->fullQData(oldp+386,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x1dU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x1cU])))),64);
    bufp->fullQData(oldp+388,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x1fU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x1eU])))),64);
    bufp->fullQData(oldp+390,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x21U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x20U])))),64);
    bufp->fullQData(oldp+392,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x23U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x22U])))),64);
    bufp->fullQData(oldp+394,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x25U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x24U])))),64);
    bufp->fullQData(oldp+396,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x27U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x26U])))),64);
    bufp->fullQData(oldp+398,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x29U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x28U])))),64);
    bufp->fullQData(oldp+400,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x2bU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x2aU])))),64);
    bufp->fullQData(oldp+402,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x2dU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x2cU])))),64);
    bufp->fullQData(oldp+404,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x2fU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x2eU])))),64);
    bufp->fullQData(oldp+406,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x31U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x30U])))),64);
    bufp->fullQData(oldp+408,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x33U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x32U])))),64);
    bufp->fullQData(oldp+410,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x35U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x34U])))),64);
    bufp->fullQData(oldp+412,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x37U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x36U])))),64);
    bufp->fullQData(oldp+414,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x39U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x38U])))),64);
    bufp->fullQData(oldp+416,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x3bU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x3aU])))),64);
    bufp->fullQData(oldp+418,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x3dU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x3cU])))),64);
    bufp->fullQData(oldp+420,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x3fU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x3eU])))),64);
    bufp->fullQData(oldp+422,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x41U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x40U])))),64);
    bufp->fullQData(oldp+424,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x43U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x42U])))),64);
    bufp->fullQData(oldp+426,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x45U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x44U])))),64);
    bufp->fullQData(oldp+428,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x47U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x46U])))),64);
    bufp->fullQData(oldp+430,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x49U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x48U])))),64);
    bufp->fullQData(oldp+432,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x4bU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x4aU])))),64);
    bufp->fullQData(oldp+434,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x4dU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x4cU])))),64);
    bufp->fullQData(oldp+436,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x4fU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x4eU])))),64);
    bufp->fullQData(oldp+438,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x51U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x50U])))),64);
    bufp->fullQData(oldp+440,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x53U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x52U])))),64);
    bufp->fullQData(oldp+442,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x55U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x54U])))),64);
    bufp->fullQData(oldp+444,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x57U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x56U])))),64);
    bufp->fullQData(oldp+446,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x59U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x58U])))),64);
    bufp->fullQData(oldp+448,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x5bU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x5aU])))),64);
    bufp->fullQData(oldp+450,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x5dU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x5cU])))),64);
    bufp->fullQData(oldp+452,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x5fU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x5eU])))),64);
    bufp->fullQData(oldp+454,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x61U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x60U])))),64);
    bufp->fullQData(oldp+456,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x63U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x62U])))),64);
    bufp->fullQData(oldp+458,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x65U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x64U])))),64);
    bufp->fullQData(oldp+460,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x67U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x66U])))),64);
    bufp->fullQData(oldp+462,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x69U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x68U])))),64);
    bufp->fullQData(oldp+464,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x6bU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x6aU])))),64);
    bufp->fullQData(oldp+466,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x6dU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x6cU])))),64);
    bufp->fullQData(oldp+468,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x6fU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x6eU])))),64);
    bufp->fullQData(oldp+470,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x71U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x70U])))),64);
    bufp->fullQData(oldp+472,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x73U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x72U])))),64);
    bufp->fullQData(oldp+474,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x75U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x74U])))),64);
    bufp->fullQData(oldp+476,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x77U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x76U])))),64);
    bufp->fullQData(oldp+478,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x79U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x78U])))),64);
    bufp->fullQData(oldp+480,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x7bU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x7aU])))),64);
    bufp->fullQData(oldp+482,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x7dU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x7cU])))),64);
    bufp->fullQData(oldp+484,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x7fU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0x7eU])))),64);
    bufp->fullBit(oldp+486,(vlSelfRef.FIFO_TX__DOT__out_order_req_l));
    bufp->fullBit(oldp+487,(vlSelfRef.FIFO_TX__DOT__ACK_rcv_flag_l));
    bufp->fullIData(oldp+488,(vlSelfRef.FIFO_TX__DOT__ACK_num_l),32);
    bufp->fullBit(oldp+489,(vlSelfRef.FIFO_TX__DOT__rd_debug_1));
    bufp->fullBit(oldp+490,(vlSelfRef.FIFO_TX__DOT__rd_debug_2));
    bufp->fullBit(oldp+491,(vlSelfRef.FIFO_TX__DOT__rd_upd));
    bufp->fullSData(oldp+492,(vlSelfRef.FIFO_TX__DOT__bytes_abt_sent_msg_rd),16);
    bufp->fullSData(oldp+493,(vlSelfRef.FIFO_TX__DOT__checksum_l),16);
    bufp->fullBit(oldp+494,(vlSelfRef.CLK));
    bufp->fullBit(oldp+495,(vlSelfRef.nRST));
    bufp->fullBit(oldp+496,(vlSelfRef.seq_up));
    bufp->fullIData(oldp+497,(vlSelfRef.seq_num_tx),32);
    bufp->fullBit(oldp+498,(vlSelfRef.rd_FIFO_en));
    bufp->fullBit(oldp+499,(vlSelfRef.TX_en));
    bufp->fullSData(oldp+500,(vlSelfRef.checksum_TX),16);
    bufp->fullBit(oldp+501,(vlSelfRef.rd_FIFO_valid));
    bufp->fullBit(oldp+502,(vlSelfRef.rd_FIFO_last));
    bufp->fullQData(oldp+503,(vlSelfRef.rd_FIFO_payload),64);
    bufp->fullSData(oldp+505,(vlSelfRef.bytes_abt_sent),16);
    bufp->fullIData(oldp+506,(vlSelfRef.ACK_num),32);
    bufp->fullBit(oldp+507,(vlSelfRef.ACK_rcv_flag));
    bufp->fullBit(oldp+508,(vlSelfRef.out_order_req));
    bufp->fullBit(oldp+509,(vlSelfRef.TCP_stop_flag));
    bufp->fullBit(oldp+510,(vlSelfRef.end_ss));
    bufp->fullBit(oldp+511,(vlSelfRef.axis_last));
    bufp->fullBit(oldp+512,(vlSelfRef.wr_FIFO_en));
    bufp->fullIData(oldp+513,(vlSelfRef.len_seq),32);
    bufp->fullQData(oldp+514,(vlSelfRef.soupbin_TCP_payload),64);
    bufp->fullBit(oldp+516,(vlSelfRef.wr_FIFO_valid));
    bufp->fullBit(oldp+517,(vlSelfRef.re_trans));
    bufp->fullSData(oldp+518,(vlSelfRef.checksum_re_trans),16);
}
