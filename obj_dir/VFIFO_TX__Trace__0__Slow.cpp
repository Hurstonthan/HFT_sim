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
    tracep->declBit(c+222,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+223,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+224,0,"seq_up",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+225,0,"seq_num_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+226,0,"rd_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+227,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"rd_FIFO_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+229,0,"rd_FIFO_payload",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+231,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+232,0,"ACK_num",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+233,0,"ACK_rcv_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"out_order_req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"axis_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+236,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+237,0,"len_seq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+238,0,"soupbin_TCP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+240,0,"wr_FIFO_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("FIFO_TX", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+241,0,"DATA_WIDRH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+241,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+242,0,"FIFO_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+222,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+223,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+224,0,"seq_up",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+225,0,"seq_num_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+226,0,"rd_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+227,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"rd_FIFO_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+229,0,"rd_FIFO_payload",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+231,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+232,0,"ACK_num",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+233,0,"ACK_rcv_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"out_order_req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"axis_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+236,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+237,0,"len_seq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+238,0,"soupbin_TCP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+240,0,"wr_FIFO_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"nbytes_abt_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+105,0,"bytes_msg_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+243,0,"nbytes_msg_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+106,0,"nrd_FIFO_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+107,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+2,0,"nptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+108,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+3,0,"nptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+109,0,"flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+110,0,"nflush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+111,0,"bytes_abt_sent_msg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+4,0,"nbytes_abt_sent_msg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+112,0,"msg_end_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+5,0,"nmsg_end_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+113,0,"rd_state",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+6,0,"nrd_state",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+114,0,"wr_state",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+7,0,"nwr_state",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("dict_tx", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+115,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+119,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+120,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+121,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+124,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+125,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+126,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+129,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+130,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+131,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+132,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+134,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+135,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+136,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+139,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+140,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+141,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+142,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+144,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+145,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+146,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+149,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+150,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+151,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+152,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+154,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+155,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+156,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+157,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+158,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+159,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+160,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+161,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+162,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+164,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+165,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+166,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+167,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+168,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+169,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+170,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+171,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+174,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+175,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+176,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+178,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+179,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+180,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+181,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+182,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+183,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+184,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+185,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+186,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+187,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+189,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+190,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+191,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+192,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+194,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ndict_tx", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+8,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+12,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+13,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+17,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+18,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+22,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+23,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+27,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+28,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+32,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+33,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+37,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+38,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+42,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+43,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+47,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+48,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+52,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+53,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+57,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+58,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+62,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+63,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+67,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+68,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+72,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+73,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+77,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+78,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+82,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+83,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+84,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+87,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+195,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"nrd_FIFO_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"nrd_FIFO_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"nwr_FIFO_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+199,0,"dict_wrt_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+199,0,"ndict_wrt_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+200,0,"dict_rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+201,0,"ndict_rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+202,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+203,0,"nrd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+204,0,"wrt_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+89,0,"nwrt_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->pushPrefix("TCP_tx_order", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declQuad(c+205,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+207,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+209,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+211,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+213,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+215,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("nTCP_tx_order", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declQuad(c+90,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+92,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+94,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+96,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+98,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+100,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->declBit(c+217,0,"out_order_req_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"nout_order_req_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+218,0,"ACK_rcv_flag_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"nACK_rcv_flag_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+219,0,"ACK_num_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"nACK_num_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+220,0,"rd_debug_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+221,0,"rd_debug_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+244,0,"hoho",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
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
    bufp->fullIData(oldp+241,(0x40U),32);
    bufp->fullIData(oldp+242,(6U),32);
    bufp->fullSData(oldp+243,(0U),16);
    bufp->fullCData(oldp+244,(7U),3);
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
    bufp->fullCData(oldp+2,(vlSelfRef.FIFO_TX__DOT__nptr_str),6);
    bufp->fullCData(oldp+3,(vlSelfRef.FIFO_TX__DOT__nptr_end),6);
    bufp->fullSData(oldp+4,(vlSelfRef.FIFO_TX__DOT__nbytes_abt_sent_msg),16);
    bufp->fullCData(oldp+5,(vlSelfRef.FIFO_TX__DOT__nmsg_end_ptr),6);
    bufp->fullCData(oldp+6,(vlSelfRef.FIFO_TX__DOT__nrd_state),2);
    bufp->fullCData(oldp+7,(vlSelfRef.FIFO_TX__DOT__nwr_state),2);
    bufp->fullBit(oldp+8,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[2U] 
                                 >> 0xcU))));
    bufp->fullIData(oldp+9,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[2U] 
                              << 0x14U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[1U] 
                                           >> 0xcU))),32);
    bufp->fullIData(oldp+10,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[1U] 
                               << 0x14U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0U] 
                                            >> 0xcU))),32);
    bufp->fullCData(oldp+11,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0U] 
                                       >> 6U))),6);
    bufp->fullCData(oldp+12,((0x3fU & vlSelfRef.FIFO_TX__DOT__ndict_tx[0U])),6);
    bufp->fullBit(oldp+13,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[4U] 
                                  >> 0x19U))));
    bufp->fullIData(oldp+14,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[4U] 
                               << 7U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[3U] 
                                         >> 0x19U))),32);
    bufp->fullIData(oldp+15,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[3U] 
                               << 7U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[2U] 
                                         >> 0x19U))),32);
    bufp->fullCData(oldp+16,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[2U] 
                                       >> 0x13U))),6);
    bufp->fullCData(oldp+17,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[2U] 
                                       >> 0xdU))),6);
    bufp->fullBit(oldp+18,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[7U] 
                                  >> 6U))));
    bufp->fullIData(oldp+19,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[7U] 
                               << 0x1aU) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[6U] 
                                            >> 6U))),32);
    bufp->fullIData(oldp+20,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[6U] 
                               << 0x1aU) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[5U] 
                                            >> 6U))),32);
    bufp->fullCData(oldp+21,((0x3fU & vlSelfRef.FIFO_TX__DOT__ndict_tx[5U])),6);
    bufp->fullCData(oldp+22,((vlSelfRef.FIFO_TX__DOT__ndict_tx[4U] 
                              >> 0x1aU)),6);
    bufp->fullBit(oldp+23,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[9U] 
                                  >> 0x13U))));
    bufp->fullIData(oldp+24,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[9U] 
                               << 0xdU) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[8U] 
                                           >> 0x13U))),32);
    bufp->fullIData(oldp+25,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[8U] 
                               << 0xdU) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[7U] 
                                           >> 0x13U))),32);
    bufp->fullCData(oldp+26,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[7U] 
                                       >> 0xdU))),6);
    bufp->fullCData(oldp+27,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[7U] 
                                       >> 7U))),6);
    bufp->fullBit(oldp+28,((1U & vlSelfRef.FIFO_TX__DOT__ndict_tx[0xcU])));
    bufp->fullIData(oldp+29,(vlSelfRef.FIFO_TX__DOT__ndict_tx[0xbU]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.FIFO_TX__DOT__ndict_tx[0xaU]),32);
    bufp->fullCData(oldp+31,((vlSelfRef.FIFO_TX__DOT__ndict_tx[9U] 
                              >> 0x1aU)),6);
    bufp->fullCData(oldp+32,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[9U] 
                                       >> 0x14U))),6);
    bufp->fullBit(oldp+33,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0xeU] 
                                  >> 0xdU))));
    bufp->fullIData(oldp+34,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0xeU] 
                               << 0x13U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0xdU] 
                                            >> 0xdU))),32);
    bufp->fullIData(oldp+35,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0xdU] 
                               << 0x13U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0xcU] 
                                            >> 0xdU))),32);
    bufp->fullCData(oldp+36,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0xcU] 
                                       >> 7U))),6);
    bufp->fullCData(oldp+37,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0xcU] 
                                       >> 1U))),6);
    bufp->fullBit(oldp+38,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x10U] 
                                  >> 0x1aU))));
    bufp->fullIData(oldp+39,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x10U] 
                               << 6U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0xfU] 
                                         >> 0x1aU))),32);
    bufp->fullIData(oldp+40,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0xfU] 
                               << 6U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0xeU] 
                                         >> 0x1aU))),32);
    bufp->fullCData(oldp+41,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0xeU] 
                                       >> 0x14U))),6);
    bufp->fullCData(oldp+42,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0xeU] 
                                       >> 0xeU))),6);
    bufp->fullBit(oldp+43,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x13U] 
                                  >> 7U))));
    bufp->fullIData(oldp+44,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x13U] 
                               << 0x19U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x12U] 
                                            >> 7U))),32);
    bufp->fullIData(oldp+45,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x12U] 
                               << 0x19U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x11U] 
                                            >> 7U))),32);
    bufp->fullCData(oldp+46,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x11U] 
                                       >> 1U))),6);
    bufp->fullCData(oldp+47,((0x3fU & ((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x11U] 
                                        << 5U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x10U] 
                                                  >> 0x1bU)))),6);
    bufp->fullBit(oldp+48,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x15U] 
                                  >> 0x14U))));
    bufp->fullIData(oldp+49,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x15U] 
                               << 0xcU) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x14U] 
                                           >> 0x14U))),32);
    bufp->fullIData(oldp+50,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x14U] 
                               << 0xcU) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x13U] 
                                           >> 0x14U))),32);
    bufp->fullCData(oldp+51,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x13U] 
                                       >> 0xeU))),6);
    bufp->fullCData(oldp+52,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x13U] 
                                       >> 8U))),6);
    bufp->fullBit(oldp+53,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x18U] 
                                  >> 1U))));
    bufp->fullIData(oldp+54,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x18U] 
                               << 0x1fU) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x17U] 
                                            >> 1U))),32);
    bufp->fullIData(oldp+55,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x17U] 
                               << 0x1fU) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x16U] 
                                            >> 1U))),32);
    bufp->fullCData(oldp+56,((0x3fU & ((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x16U] 
                                        << 5U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x15U] 
                                                  >> 0x1bU)))),6);
    bufp->fullCData(oldp+57,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x15U] 
                                       >> 0x15U))),6);
    bufp->fullBit(oldp+58,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1aU] 
                                  >> 0xeU))));
    bufp->fullIData(oldp+59,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1aU] 
                               << 0x12U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x19U] 
                                            >> 0xeU))),32);
    bufp->fullIData(oldp+60,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x19U] 
                               << 0x12U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x18U] 
                                            >> 0xeU))),32);
    bufp->fullCData(oldp+61,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x18U] 
                                       >> 8U))),6);
    bufp->fullCData(oldp+62,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x18U] 
                                       >> 2U))),6);
    bufp->fullBit(oldp+63,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1cU] 
                                  >> 0x1bU))));
    bufp->fullIData(oldp+64,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1cU] 
                               << 5U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1bU] 
                                         >> 0x1bU))),32);
    bufp->fullIData(oldp+65,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1bU] 
                               << 5U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1aU] 
                                         >> 0x1bU))),32);
    bufp->fullCData(oldp+66,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1aU] 
                                       >> 0x15U))),6);
    bufp->fullCData(oldp+67,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1aU] 
                                       >> 0xfU))),6);
    bufp->fullBit(oldp+68,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1fU] 
                                  >> 8U))));
    bufp->fullIData(oldp+69,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1fU] 
                               << 0x18U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1eU] 
                                            >> 8U))),32);
    bufp->fullIData(oldp+70,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1eU] 
                               << 0x18U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1dU] 
                                            >> 8U))),32);
    bufp->fullCData(oldp+71,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1dU] 
                                       >> 2U))),6);
    bufp->fullCData(oldp+72,((0x3fU & ((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1dU] 
                                        << 4U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1cU] 
                                                  >> 0x1cU)))),6);
    bufp->fullBit(oldp+73,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x21U] 
                                  >> 0x15U))));
    bufp->fullIData(oldp+74,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x21U] 
                               << 0xbU) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x20U] 
                                           >> 0x15U))),32);
    bufp->fullIData(oldp+75,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x20U] 
                               << 0xbU) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1fU] 
                                           >> 0x15U))),32);
    bufp->fullCData(oldp+76,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1fU] 
                                       >> 0xfU))),6);
    bufp->fullCData(oldp+77,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1fU] 
                                       >> 9U))),6);
    bufp->fullBit(oldp+78,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x24U] 
                                  >> 2U))));
    bufp->fullIData(oldp+79,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x24U] 
                               << 0x1eU) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x23U] 
                                            >> 2U))),32);
    bufp->fullIData(oldp+80,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x23U] 
                               << 0x1eU) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x22U] 
                                            >> 2U))),32);
    bufp->fullCData(oldp+81,((0x3fU & ((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x22U] 
                                        << 4U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x21U] 
                                                  >> 0x1cU)))),6);
    bufp->fullCData(oldp+82,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x21U] 
                                       >> 0x16U))),6);
    bufp->fullBit(oldp+83,((1U & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x26U] 
                                  >> 0xfU))));
    bufp->fullIData(oldp+84,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x26U] 
                               << 0x11U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x25U] 
                                            >> 0xfU))),32);
    bufp->fullIData(oldp+85,(((vlSelfRef.FIFO_TX__DOT__ndict_tx[0x25U] 
                               << 0x11U) | (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x24U] 
                                            >> 0xfU))),32);
    bufp->fullCData(oldp+86,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x24U] 
                                       >> 9U))),6);
    bufp->fullCData(oldp+87,((0x3fU & (vlSelfRef.FIFO_TX__DOT__ndict_tx[0x24U] 
                                       >> 3U))),6);
    bufp->fullBit(oldp+88,(vlSelfRef.FIFO_TX__DOT__nwr_FIFO_valid));
    bufp->fullCData(oldp+89,(vlSelfRef.FIFO_TX__DOT__nwrt_ptr),6);
    bufp->fullQData(oldp+90,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0U])))),64);
    bufp->fullQData(oldp+92,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[3U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[2U])))),64);
    bufp->fullQData(oldp+94,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[5U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[4U])))),64);
    bufp->fullQData(oldp+96,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[7U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[6U])))),64);
    bufp->fullQData(oldp+98,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[9U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[8U])))),64);
    bufp->fullQData(oldp+100,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0xbU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0xaU])))),64);
    bufp->fullBit(oldp+102,(vlSelfRef.FIFO_TX__DOT__nout_order_req_l));
    bufp->fullBit(oldp+103,(vlSelfRef.FIFO_TX__DOT__nACK_rcv_flag_l));
    bufp->fullIData(oldp+104,(vlSelfRef.FIFO_TX__DOT__nACK_num_l),32);
    bufp->fullSData(oldp+105,(vlSelfRef.FIFO_TX__DOT__bytes_msg_trk),16);
    bufp->fullCData(oldp+106,(vlSelfRef.FIFO_TX__DOT__nrd_FIFO_payload),6);
    bufp->fullCData(oldp+107,(vlSelfRef.FIFO_TX__DOT__ptr_str),6);
    bufp->fullCData(oldp+108,(vlSelfRef.FIFO_TX__DOT__ptr_end),6);
    bufp->fullCData(oldp+109,(vlSelfRef.FIFO_TX__DOT__flush_ptr),6);
    bufp->fullCData(oldp+110,(vlSelfRef.FIFO_TX__DOT__nflush_ptr),6);
    bufp->fullSData(oldp+111,(vlSelfRef.FIFO_TX__DOT__bytes_abt_sent_msg),16);
    bufp->fullCData(oldp+112,(vlSelfRef.FIFO_TX__DOT__msg_end_ptr),6);
    bufp->fullCData(oldp+113,(vlSelfRef.FIFO_TX__DOT__rd_state),2);
    bufp->fullCData(oldp+114,(vlSelfRef.FIFO_TX__DOT__wr_state),2);
    bufp->fullBit(oldp+115,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[2U] 
                                   >> 0xcU))));
    bufp->fullIData(oldp+116,(((vlSelfRef.FIFO_TX__DOT__dict_tx[2U] 
                                << 0x14U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[1U] 
                                             >> 0xcU))),32);
    bufp->fullIData(oldp+117,(((vlSelfRef.FIFO_TX__DOT__dict_tx[1U] 
                                << 0x14U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0U] 
                                             >> 0xcU))),32);
    bufp->fullCData(oldp+118,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0U] 
                                        >> 6U))),6);
    bufp->fullCData(oldp+119,((0x3fU & vlSelfRef.FIFO_TX__DOT__dict_tx[0U])),6);
    bufp->fullBit(oldp+120,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[4U] 
                                   >> 0x19U))));
    bufp->fullIData(oldp+121,(((vlSelfRef.FIFO_TX__DOT__dict_tx[4U] 
                                << 7U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[3U] 
                                          >> 0x19U))),32);
    bufp->fullIData(oldp+122,(((vlSelfRef.FIFO_TX__DOT__dict_tx[3U] 
                                << 7U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[2U] 
                                          >> 0x19U))),32);
    bufp->fullCData(oldp+123,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[2U] 
                                        >> 0x13U))),6);
    bufp->fullCData(oldp+124,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[2U] 
                                        >> 0xdU))),6);
    bufp->fullBit(oldp+125,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[7U] 
                                   >> 6U))));
    bufp->fullIData(oldp+126,(((vlSelfRef.FIFO_TX__DOT__dict_tx[7U] 
                                << 0x1aU) | (vlSelfRef.FIFO_TX__DOT__dict_tx[6U] 
                                             >> 6U))),32);
    bufp->fullIData(oldp+127,(((vlSelfRef.FIFO_TX__DOT__dict_tx[6U] 
                                << 0x1aU) | (vlSelfRef.FIFO_TX__DOT__dict_tx[5U] 
                                             >> 6U))),32);
    bufp->fullCData(oldp+128,((0x3fU & vlSelfRef.FIFO_TX__DOT__dict_tx[5U])),6);
    bufp->fullCData(oldp+129,((vlSelfRef.FIFO_TX__DOT__dict_tx[4U] 
                               >> 0x1aU)),6);
    bufp->fullBit(oldp+130,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[9U] 
                                   >> 0x13U))));
    bufp->fullIData(oldp+131,(((vlSelfRef.FIFO_TX__DOT__dict_tx[9U] 
                                << 0xdU) | (vlSelfRef.FIFO_TX__DOT__dict_tx[8U] 
                                            >> 0x13U))),32);
    bufp->fullIData(oldp+132,(((vlSelfRef.FIFO_TX__DOT__dict_tx[8U] 
                                << 0xdU) | (vlSelfRef.FIFO_TX__DOT__dict_tx[7U] 
                                            >> 0x13U))),32);
    bufp->fullCData(oldp+133,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[7U] 
                                        >> 0xdU))),6);
    bufp->fullCData(oldp+134,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[7U] 
                                        >> 7U))),6);
    bufp->fullBit(oldp+135,((1U & vlSelfRef.FIFO_TX__DOT__dict_tx[0xcU])));
    bufp->fullIData(oldp+136,(vlSelfRef.FIFO_TX__DOT__dict_tx[0xbU]),32);
    bufp->fullIData(oldp+137,(vlSelfRef.FIFO_TX__DOT__dict_tx[0xaU]),32);
    bufp->fullCData(oldp+138,((vlSelfRef.FIFO_TX__DOT__dict_tx[9U] 
                               >> 0x1aU)),6);
    bufp->fullCData(oldp+139,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[9U] 
                                        >> 0x14U))),6);
    bufp->fullBit(oldp+140,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[0xeU] 
                                   >> 0xdU))));
    bufp->fullIData(oldp+141,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0xeU] 
                                << 0x13U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0xdU] 
                                             >> 0xdU))),32);
    bufp->fullIData(oldp+142,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0xdU] 
                                << 0x13U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0xcU] 
                                             >> 0xdU))),32);
    bufp->fullCData(oldp+143,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0xcU] 
                                        >> 7U))),6);
    bufp->fullCData(oldp+144,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0xcU] 
                                        >> 1U))),6);
    bufp->fullBit(oldp+145,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x10U] 
                                   >> 0x1aU))));
    bufp->fullIData(oldp+146,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x10U] 
                                << 6U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0xfU] 
                                          >> 0x1aU))),32);
    bufp->fullIData(oldp+147,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0xfU] 
                                << 6U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0xeU] 
                                          >> 0x1aU))),32);
    bufp->fullCData(oldp+148,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0xeU] 
                                        >> 0x14U))),6);
    bufp->fullCData(oldp+149,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0xeU] 
                                        >> 0xeU))),6);
    bufp->fullBit(oldp+150,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x13U] 
                                   >> 7U))));
    bufp->fullIData(oldp+151,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x13U] 
                                << 0x19U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x12U] 
                                             >> 7U))),32);
    bufp->fullIData(oldp+152,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x12U] 
                                << 0x19U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x11U] 
                                             >> 7U))),32);
    bufp->fullCData(oldp+153,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x11U] 
                                        >> 1U))),6);
    bufp->fullCData(oldp+154,((0x3fU & ((vlSelfRef.FIFO_TX__DOT__dict_tx[0x11U] 
                                         << 5U) | (
                                                   vlSelfRef.FIFO_TX__DOT__dict_tx[0x10U] 
                                                   >> 0x1bU)))),6);
    bufp->fullBit(oldp+155,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x15U] 
                                   >> 0x14U))));
    bufp->fullIData(oldp+156,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x15U] 
                                << 0xcU) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x14U] 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+157,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x14U] 
                                << 0xcU) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x13U] 
                                            >> 0x14U))),32);
    bufp->fullCData(oldp+158,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x13U] 
                                        >> 0xeU))),6);
    bufp->fullCData(oldp+159,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x13U] 
                                        >> 8U))),6);
    bufp->fullBit(oldp+160,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x18U] 
                                   >> 1U))));
    bufp->fullIData(oldp+161,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x18U] 
                                << 0x1fU) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x17U] 
                                             >> 1U))),32);
    bufp->fullIData(oldp+162,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x17U] 
                                << 0x1fU) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x16U] 
                                             >> 1U))),32);
    bufp->fullCData(oldp+163,((0x3fU & ((vlSelfRef.FIFO_TX__DOT__dict_tx[0x16U] 
                                         << 5U) | (
                                                   vlSelfRef.FIFO_TX__DOT__dict_tx[0x15U] 
                                                   >> 0x1bU)))),6);
    bufp->fullCData(oldp+164,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x15U] 
                                        >> 0x15U))),6);
    bufp->fullBit(oldp+165,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1aU] 
                                   >> 0xeU))));
    bufp->fullIData(oldp+166,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x1aU] 
                                << 0x12U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x19U] 
                                             >> 0xeU))),32);
    bufp->fullIData(oldp+167,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x19U] 
                                << 0x12U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x18U] 
                                             >> 0xeU))),32);
    bufp->fullCData(oldp+168,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x18U] 
                                        >> 8U))),6);
    bufp->fullCData(oldp+169,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x18U] 
                                        >> 2U))),6);
    bufp->fullBit(oldp+170,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1cU] 
                                   >> 0x1bU))));
    bufp->fullIData(oldp+171,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x1cU] 
                                << 5U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1bU] 
                                          >> 0x1bU))),32);
    bufp->fullIData(oldp+172,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x1bU] 
                                << 5U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1aU] 
                                          >> 0x1bU))),32);
    bufp->fullCData(oldp+173,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1aU] 
                                        >> 0x15U))),6);
    bufp->fullCData(oldp+174,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1aU] 
                                        >> 0xfU))),6);
    bufp->fullBit(oldp+175,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1fU] 
                                   >> 8U))));
    bufp->fullIData(oldp+176,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x1fU] 
                                << 0x18U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1eU] 
                                             >> 8U))),32);
    bufp->fullIData(oldp+177,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x1eU] 
                                << 0x18U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1dU] 
                                             >> 8U))),32);
    bufp->fullCData(oldp+178,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1dU] 
                                        >> 2U))),6);
    bufp->fullCData(oldp+179,((0x3fU & ((vlSelfRef.FIFO_TX__DOT__dict_tx[0x1dU] 
                                         << 4U) | (
                                                   vlSelfRef.FIFO_TX__DOT__dict_tx[0x1cU] 
                                                   >> 0x1cU)))),6);
    bufp->fullBit(oldp+180,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x21U] 
                                   >> 0x15U))));
    bufp->fullIData(oldp+181,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x21U] 
                                << 0xbU) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x20U] 
                                            >> 0x15U))),32);
    bufp->fullIData(oldp+182,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x20U] 
                                << 0xbU) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1fU] 
                                            >> 0x15U))),32);
    bufp->fullCData(oldp+183,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1fU] 
                                        >> 0xfU))),6);
    bufp->fullCData(oldp+184,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x1fU] 
                                        >> 9U))),6);
    bufp->fullBit(oldp+185,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x24U] 
                                   >> 2U))));
    bufp->fullIData(oldp+186,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x24U] 
                                << 0x1eU) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x23U] 
                                             >> 2U))),32);
    bufp->fullIData(oldp+187,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x23U] 
                                << 0x1eU) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x22U] 
                                             >> 2U))),32);
    bufp->fullCData(oldp+188,((0x3fU & ((vlSelfRef.FIFO_TX__DOT__dict_tx[0x22U] 
                                         << 4U) | (
                                                   vlSelfRef.FIFO_TX__DOT__dict_tx[0x21U] 
                                                   >> 0x1cU)))),6);
    bufp->fullCData(oldp+189,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x21U] 
                                        >> 0x16U))),6);
    bufp->fullBit(oldp+190,((1U & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x26U] 
                                   >> 0xfU))));
    bufp->fullIData(oldp+191,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x26U] 
                                << 0x11U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x25U] 
                                             >> 0xfU))),32);
    bufp->fullIData(oldp+192,(((vlSelfRef.FIFO_TX__DOT__dict_tx[0x25U] 
                                << 0x11U) | (vlSelfRef.FIFO_TX__DOT__dict_tx[0x24U] 
                                             >> 0xfU))),32);
    bufp->fullCData(oldp+193,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x24U] 
                                        >> 9U))),6);
    bufp->fullCData(oldp+194,((0x3fU & (vlSelfRef.FIFO_TX__DOT__dict_tx[0x24U] 
                                        >> 3U))),6);
    bufp->fullBit(oldp+195,(vlSelfRef.FIFO_TX__DOT__full));
    bufp->fullBit(oldp+196,(((IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr) 
                             == (IData)(vlSelfRef.FIFO_TX__DOT__wrt_ptr))));
    bufp->fullBit(oldp+197,(vlSelfRef.FIFO_TX__DOT__nrd_FIFO_last));
    bufp->fullBit(oldp+198,(vlSelfRef.FIFO_TX__DOT__nrd_FIFO_valid));
    bufp->fullCData(oldp+199,(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr),4);
    bufp->fullCData(oldp+200,(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr),4);
    bufp->fullCData(oldp+201,(vlSelfRef.FIFO_TX__DOT__ndict_rd_ptr),4);
    bufp->fullCData(oldp+202,(vlSelfRef.FIFO_TX__DOT__rd_ptr),6);
    bufp->fullCData(oldp+203,(vlSelfRef.FIFO_TX__DOT__nrd_ptr),6);
    bufp->fullCData(oldp+204,(vlSelfRef.FIFO_TX__DOT__wrt_ptr),6);
    bufp->fullQData(oldp+205,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0U])))),64);
    bufp->fullQData(oldp+207,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[2U])))),64);
    bufp->fullQData(oldp+209,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[5U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[4U])))),64);
    bufp->fullQData(oldp+211,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[7U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[6U])))),64);
    bufp->fullQData(oldp+213,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[9U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[8U])))),64);
    bufp->fullQData(oldp+215,((((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0xbU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0xaU])))),64);
    bufp->fullBit(oldp+217,(vlSelfRef.FIFO_TX__DOT__out_order_req_l));
    bufp->fullBit(oldp+218,(vlSelfRef.FIFO_TX__DOT__ACK_rcv_flag_l));
    bufp->fullIData(oldp+219,(vlSelfRef.FIFO_TX__DOT__ACK_num_l),32);
    bufp->fullBit(oldp+220,(vlSelfRef.FIFO_TX__DOT__rd_debug_1));
    bufp->fullBit(oldp+221,(vlSelfRef.FIFO_TX__DOT__rd_debug_2));
    bufp->fullBit(oldp+222,(vlSelfRef.CLK));
    bufp->fullBit(oldp+223,(vlSelfRef.nRST));
    bufp->fullBit(oldp+224,(vlSelfRef.seq_up));
    bufp->fullIData(oldp+225,(vlSelfRef.seq_num_tx),32);
    bufp->fullBit(oldp+226,(vlSelfRef.rd_FIFO_en));
    bufp->fullBit(oldp+227,(vlSelfRef.rd_FIFO_valid));
    bufp->fullBit(oldp+228,(vlSelfRef.rd_FIFO_last));
    bufp->fullQData(oldp+229,(vlSelfRef.rd_FIFO_payload),64);
    bufp->fullSData(oldp+231,(vlSelfRef.bytes_abt_sent),16);
    bufp->fullIData(oldp+232,(vlSelfRef.ACK_num),32);
    bufp->fullBit(oldp+233,(vlSelfRef.ACK_rcv_flag));
    bufp->fullBit(oldp+234,(vlSelfRef.out_order_req));
    bufp->fullBit(oldp+235,(vlSelfRef.axis_last));
    bufp->fullBit(oldp+236,(vlSelfRef.wr_FIFO_en));
    bufp->fullIData(oldp+237,(vlSelfRef.len_seq),32);
    bufp->fullQData(oldp+238,(vlSelfRef.soupbin_TCP_payload),64);
    bufp->fullBit(oldp+240,(vlSelfRef.wr_FIFO_valid));
}
