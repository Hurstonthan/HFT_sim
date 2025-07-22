// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vpayload_FIFO__Syms.h"


VL_ATTR_COLD void Vpayload_FIFO___024root__trace_init_sub__TOP__0(Vpayload_FIFO___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpayload_FIFO___024root__trace_init_sub__TOP__0\n"); );
    Vpayload_FIFO__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+65,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"nw_segment",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"TCP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"axis_t_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+70,0,"axis_data_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+72,0,"handshake_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+73,0,"seq_rcv_start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+74,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+75,0,"wr_FIFO_offset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+76,0,"wr_ptr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+77,0,"wr_FIFO_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+78,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"rd_FIFO_ptr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+80,0,"rd_FIFO_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+81,0,"rd_FIFO_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"seq_rx_FIFO_rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+83,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"axis_r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"axis_r_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+86,0,"axis_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("payload_FIFO", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+89,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+90,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+91,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+91,0,"WORD_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+92,0,"FIFO_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+93,0,"WINDOW_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+65,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"nw_segment",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"TCP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"axis_t_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+70,0,"axis_data_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+72,0,"handshake_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+73,0,"seq_rcv_start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+74,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+75,0,"wr_FIFO_offset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+76,0,"wr_ptr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+77,0,"wr_FIFO_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+78,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"rd_FIFO_ptr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+80,0,"rd_FIFO_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+81,0,"rd_FIFO_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"seq_rx_FIFO_rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+83,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"axis_r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"axis_r_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+86,0,"axis_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("TCP_FIFO", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+24,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+26,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+27,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+29,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+30,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+32,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+33,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+35,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+36,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+38,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("nTCP_FIFO", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+1,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+3,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+4,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+6,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+7,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+9,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+10,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+12,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+13,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+15,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fifo_entry_rd", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+39,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+41,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->declBus(c+42,0,"flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+16,0,"nflush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+43,0,"len_TCP_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+17,0,"nlen_TCP_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+44,0,"rd_len_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+45,0,"seq_trk_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"nseq_trk_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,0,"bytes_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+94,0,"rd_FIFO_valid_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"nrd_FIFO_valid_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"naxis_r_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"TCP_flush_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"nTCP_flush_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+47,0,"payload1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+49,0,"payload2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+51,0,"payload3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+53,0,"payload4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+55,0,"payload5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+57,0,"bytes_offset1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+58,0,"bytes_offset2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+59,0,"bytes_offset3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+60,0,"bytes_offset4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+61,0,"bytes_offset5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+62,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+22,0,"nwr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+63,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+23,0,"nrd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+64,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vpayload_FIFO___024root__trace_init_top(Vpayload_FIFO___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpayload_FIFO___024root__trace_init_top\n"); );
    Vpayload_FIFO__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vpayload_FIFO___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vpayload_FIFO___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vpayload_FIFO___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vpayload_FIFO___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vpayload_FIFO___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vpayload_FIFO___024root__trace_register(Vpayload_FIFO___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpayload_FIFO___024root__trace_register\n"); );
    Vpayload_FIFO__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vpayload_FIFO___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vpayload_FIFO___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vpayload_FIFO___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vpayload_FIFO___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vpayload_FIFO___024root__trace_const_0_sub_0(Vpayload_FIFO___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vpayload_FIFO___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpayload_FIFO___024root__trace_const_0\n"); );
    // Init
    Vpayload_FIFO___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpayload_FIFO___024root*>(voidSelf);
    Vpayload_FIFO__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vpayload_FIFO___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vpayload_FIFO___024root__trace_const_0_sub_0(Vpayload_FIFO___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpayload_FIFO___024root__trace_const_0_sub_0\n"); );
    Vpayload_FIFO__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+89,(5U),32);
    bufp->fullIData(oldp+90,(0x40U),32);
    bufp->fullIData(oldp+91,(8U),32);
    bufp->fullIData(oldp+92,(3U),32);
    bufp->fullIData(oldp+93,(0x28U),32);
    bufp->fullBit(oldp+94,(vlSelfRef.payload_FIFO__DOT__rd_FIFO_valid_l));
}

VL_ATTR_COLD void Vpayload_FIFO___024root__trace_full_0_sub_0(Vpayload_FIFO___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vpayload_FIFO___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpayload_FIFO___024root__trace_full_0\n"); );
    // Init
    Vpayload_FIFO___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpayload_FIFO___024root*>(voidSelf);
    Vpayload_FIFO__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vpayload_FIFO___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vpayload_FIFO___024root__trace_full_0_sub_0(Vpayload_FIFO___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpayload_FIFO___024root__trace_full_0_sub_0\n"); );
    Vpayload_FIFO__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullQData(oldp+1,((((QData)((IData)(vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
                                              [0U][2U])) 
                              << 0x38U) | (((QData)((IData)(
                                                            vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
                                                            [0U][1U])) 
                                            << 0x18U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
                                                              [0U][0U])) 
                                              >> 8U)))),64);
    bufp->fullCData(oldp+3,((0xffU & vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
                             [0U][0U])),8);
    bufp->fullQData(oldp+4,((((QData)((IData)(vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
                                              [1U][2U])) 
                              << 0x38U) | (((QData)((IData)(
                                                            vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
                                                            [1U][1U])) 
                                            << 0x18U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
                                                              [1U][0U])) 
                                              >> 8U)))),64);
    bufp->fullCData(oldp+6,((0xffU & vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
                             [1U][0U])),8);
    bufp->fullQData(oldp+7,((((QData)((IData)(vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
                                              [2U][2U])) 
                              << 0x38U) | (((QData)((IData)(
                                                            vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
                                                            [2U][1U])) 
                                            << 0x18U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
                                                              [2U][0U])) 
                                              >> 8U)))),64);
    bufp->fullCData(oldp+9,((0xffU & vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
                             [2U][0U])),8);
    bufp->fullQData(oldp+10,((((QData)((IData)(vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
                                               [3U][2U])) 
                               << 0x38U) | (((QData)((IData)(
                                                             vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
                                                             [3U][1U])) 
                                             << 0x18U) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
                                                               [3U][0U])) 
                                               >> 8U)))),64);
    bufp->fullCData(oldp+12,((0xffU & vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
                              [3U][0U])),8);
    bufp->fullQData(oldp+13,((((QData)((IData)(vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
                                               [4U][2U])) 
                               << 0x38U) | (((QData)((IData)(
                                                             vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
                                                             [4U][1U])) 
                                             << 0x18U) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
                                                               [4U][0U])) 
                                               >> 8U)))),64);
    bufp->fullCData(oldp+15,((0xffU & vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
                              [4U][0U])),8);
    bufp->fullCData(oldp+16,(vlSelfRef.payload_FIFO__DOT__nflush_ptr),3);
    bufp->fullCData(oldp+17,(vlSelfRef.payload_FIFO__DOT__nlen_TCP_flush),3);
    bufp->fullIData(oldp+18,(vlSelfRef.payload_FIFO__DOT__nseq_trk_rd),32);
    bufp->fullBit(oldp+19,(vlSelfRef.payload_FIFO__DOT__nrd_FIFO_valid_l));
    bufp->fullBit(oldp+20,(vlSelfRef.payload_FIFO__DOT__naxis_r_valid));
    bufp->fullBit(oldp+21,(vlSelfRef.payload_FIFO__DOT__nTCP_flush_l));
    bufp->fullCData(oldp+22,(vlSelfRef.payload_FIFO__DOT__nwr_ptr),3);
    bufp->fullCData(oldp+23,(vlSelfRef.payload_FIFO__DOT__nrd_ptr),3);
    bufp->fullQData(oldp+24,((((QData)((IData)(vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                               [0U][2U])) 
                               << 0x38U) | (((QData)((IData)(
                                                             vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                             [0U][1U])) 
                                             << 0x18U) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                               [0U][0U])) 
                                               >> 8U)))),64);
    bufp->fullCData(oldp+26,((0xffU & vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                              [0U][0U])),8);
    bufp->fullQData(oldp+27,((((QData)((IData)(vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                               [1U][2U])) 
                               << 0x38U) | (((QData)((IData)(
                                                             vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                             [1U][1U])) 
                                             << 0x18U) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                               [1U][0U])) 
                                               >> 8U)))),64);
    bufp->fullCData(oldp+29,((0xffU & vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                              [1U][0U])),8);
    bufp->fullQData(oldp+30,((((QData)((IData)(vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                               [2U][2U])) 
                               << 0x38U) | (((QData)((IData)(
                                                             vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                             [2U][1U])) 
                                             << 0x18U) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                               [2U][0U])) 
                                               >> 8U)))),64);
    bufp->fullCData(oldp+32,((0xffU & vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                              [2U][0U])),8);
    bufp->fullQData(oldp+33,((((QData)((IData)(vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                               [3U][2U])) 
                               << 0x38U) | (((QData)((IData)(
                                                             vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                             [3U][1U])) 
                                             << 0x18U) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                               [3U][0U])) 
                                               >> 8U)))),64);
    bufp->fullCData(oldp+35,((0xffU & vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                              [3U][0U])),8);
    bufp->fullQData(oldp+36,((((QData)((IData)(vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                               [4U][2U])) 
                               << 0x38U) | (((QData)((IData)(
                                                             vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                             [4U][1U])) 
                                             << 0x18U) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                               [4U][0U])) 
                                               >> 8U)))),64);
    bufp->fullCData(oldp+38,((0xffU & vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                              [4U][0U])),8);
    bufp->fullQData(oldp+39,((((QData)((IData)(vlSelfRef.payload_FIFO__DOT__fifo_entry_rd[2U])) 
                               << 0x38U) | (((QData)((IData)(
                                                             vlSelfRef.payload_FIFO__DOT__fifo_entry_rd[1U])) 
                                             << 0x18U) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.payload_FIFO__DOT__fifo_entry_rd[0U])) 
                                               >> 8U)))),64);
    bufp->fullCData(oldp+41,((0xffU & vlSelfRef.payload_FIFO__DOT__fifo_entry_rd[0U])),8);
    bufp->fullCData(oldp+42,(vlSelfRef.payload_FIFO__DOT__flush_ptr),3);
    bufp->fullCData(oldp+43,(vlSelfRef.payload_FIFO__DOT__len_TCP_flush),3);
    bufp->fullCData(oldp+44,(vlSelfRef.payload_FIFO__DOT__rd_len_ptr),3);
    bufp->fullIData(oldp+45,(vlSelfRef.payload_FIFO__DOT__seq_trk_rd),32);
    bufp->fullBit(oldp+46,(vlSelfRef.payload_FIFO__DOT__TCP_flush_l));
    bufp->fullQData(oldp+47,((((QData)((IData)(vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                               [0U][2U])) 
                               << 0x38U) | (((QData)((IData)(
                                                             vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                             [0U][1U])) 
                                             << 0x18U) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                               [0U][0U])) 
                                               >> 8U)))),64);
    bufp->fullQData(oldp+49,((((QData)((IData)(vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                               [1U][2U])) 
                               << 0x38U) | (((QData)((IData)(
                                                             vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                             [1U][1U])) 
                                             << 0x18U) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                               [1U][0U])) 
                                               >> 8U)))),64);
    bufp->fullQData(oldp+51,((((QData)((IData)(vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                               [2U][2U])) 
                               << 0x38U) | (((QData)((IData)(
                                                             vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                             [2U][1U])) 
                                             << 0x18U) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                               [2U][0U])) 
                                               >> 8U)))),64);
    bufp->fullQData(oldp+53,((((QData)((IData)(vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                               [3U][2U])) 
                               << 0x38U) | (((QData)((IData)(
                                                             vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                             [3U][1U])) 
                                             << 0x18U) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                               [3U][0U])) 
                                               >> 8U)))),64);
    bufp->fullQData(oldp+55,((((QData)((IData)(vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                               [4U][2U])) 
                               << 0x38U) | (((QData)((IData)(
                                                             vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                             [4U][1U])) 
                                             << 0x18U) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                                                               [4U][0U])) 
                                               >> 8U)))),64);
    bufp->fullCData(oldp+57,((0xffU & vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                              [0U][0U])),8);
    bufp->fullCData(oldp+58,((0xffU & vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                              [1U][0U])),8);
    bufp->fullCData(oldp+59,((0xffU & vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                              [2U][0U])),8);
    bufp->fullCData(oldp+60,((0xffU & vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                              [3U][0U])),8);
    bufp->fullCData(oldp+61,((0xffU & vlSelfRef.payload_FIFO__DOT__TCP_FIFO
                              [4U][0U])),8);
    bufp->fullCData(oldp+62,(vlSelfRef.payload_FIFO__DOT__wr_ptr),3);
    bufp->fullCData(oldp+63,(vlSelfRef.payload_FIFO__DOT__rd_ptr),3);
    bufp->fullIData(oldp+64,(vlSelfRef.payload_FIFO__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+65,(vlSelfRef.CLK));
    bufp->fullBit(oldp+66,(vlSelfRef.nRST));
    bufp->fullBit(oldp+67,(vlSelfRef.nw_segment));
    bufp->fullBit(oldp+68,(vlSelfRef.TCP_flush));
    bufp->fullBit(oldp+69,(vlSelfRef.axis_t_last));
    bufp->fullQData(oldp+70,(vlSelfRef.axis_data_rx),64);
    bufp->fullBit(oldp+72,(vlSelfRef.handshake_done));
    bufp->fullIData(oldp+73,(vlSelfRef.seq_rcv_start),32);
    bufp->fullBit(oldp+74,(vlSelfRef.wr_FIFO_en));
    bufp->fullCData(oldp+75,(vlSelfRef.wr_FIFO_offset),8);
    bufp->fullCData(oldp+76,(vlSelfRef.wr_ptr_out),3);
    bufp->fullCData(oldp+77,(vlSelfRef.wr_FIFO_len),3);
    bufp->fullBit(oldp+78,(vlSelfRef.rd_FIFO_valid));
    bufp->fullCData(oldp+79,(vlSelfRef.rd_FIFO_ptr),3);
    bufp->fullCData(oldp+80,(vlSelfRef.rd_FIFO_len),3);
    bufp->fullBit(oldp+81,(vlSelfRef.rd_FIFO_en));
    bufp->fullIData(oldp+82,(vlSelfRef.seq_rx_FIFO_rd),32);
    bufp->fullBit(oldp+83,(vlSelfRef.full));
    bufp->fullBit(oldp+84,(vlSelfRef.axis_r_en));
    bufp->fullBit(oldp+85,(vlSelfRef.axis_r_valid));
    bufp->fullQData(oldp+86,(vlSelfRef.axis_rd_data),64);
    bufp->fullCData(oldp+88,((0xfU & ((1U & ((IData)(vlSelfRef.wr_FIFO_offset) 
                                             >> 7U)) 
                                      + ((1U & ((IData)(vlSelfRef.wr_FIFO_offset) 
                                                >> 6U)) 
                                         + ((1U & ((IData)(vlSelfRef.wr_FIFO_offset) 
                                                   >> 5U)) 
                                            + ((1U 
                                                & ((IData)(vlSelfRef.wr_FIFO_offset) 
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
