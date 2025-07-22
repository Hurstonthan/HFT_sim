// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+889,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+890,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+891,0,"IP_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+892,0,"IP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+893,0,"IP_pseuder",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+894,0,"IP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+896,0,"TCP_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+897,0,"IP_bytes_rcv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+898,0,"TCP_send",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+899,0,"TCP_transmit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+901,0,"TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+902,0,"axis_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+903,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+904,0,"len_seq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+905,0,"soupbin_TCP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+907,0,"axis_r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+908,0,"axis_r_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+909,0,"axis_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+911,0,"TCP_stop_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+912,0,"rcv_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+913,0,"seq_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+914,0,"wr_FIFO_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+919,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+919,0,"FIFO_DEPTH_TX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+920,0,"FIFO_DEPTH_RX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+921,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+889,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+890,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+891,0,"IP_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+892,0,"IP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+893,0,"IP_pseuder",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+894,0,"IP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+896,0,"TCP_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+897,0,"IP_bytes_rcv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+898,0,"TCP_send",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+899,0,"TCP_transmit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+901,0,"TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+902,0,"axis_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+903,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+904,0,"len_seq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+905,0,"soupbin_TCP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+907,0,"axis_r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+908,0,"axis_r_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+909,0,"axis_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+911,0,"TCP_stop_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+912,0,"rcv_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+913,0,"seq_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+914,0,"wr_FIFO_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+922,0,"FIFO_WIDTH_TX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+923,0,"FIFO_WIDTH_RX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+293,0,"nw_segment",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+294,0,"axis_t_last_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+915,0,"TCP_flush_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+295,0,"axis_data_rx_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+924,0,"handshake_done_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+925,0,"seq_rcv_start_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+153,0,"wr_pfifo_en_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+154,0,"wr_pfifo_offset_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+297,0,"wr_ptr_out_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+298,0,"wr_pfifo_len_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+155,0,"rd_pfifo_valid_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+156,0,"rd_pfifo_ptr_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+157,0,"rd_pfifo_len_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+907,0,"rd_pfifo_en_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+299,0,"seq_rx_FIFO_rd_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+300,0,"rd_ftx_en_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+301,0,"rd_ftx_payload_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+303,0,"rd_ftx_valid_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+304,0,"rd_ftx_last_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+305,0,"bytes_abt_sent_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+306,0,"ACK_num_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+307,0,"ACK_rcv_flag_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+875,0,"out_order_req_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"TCP_stop_flg_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+926,0,"end_ss_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+308,0,"re_trans_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+927,0,"checksum_re_trans_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+928,0,"seq_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+929,0,"seq_num_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+930,0,"checksum_TX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+309,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+303,0,"rd_FIFO_valid_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+304,0,"rd_FIFO_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+301,0,"rd_FIFO_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+305,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+310,0,"wr_TX_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_fifo_tx", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+931,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+931,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+932,0,"FIFO_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+889,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+890,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+928,0,"seq_up",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+929,0,"seq_num_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+300,0,"rd_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+901,0,"TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+930,0,"checksum_TX",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+303,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+304,0,"rd_FIFO_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+301,0,"rd_FIFO_payload",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+305,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+306,0,"ACK_num",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+307,0,"ACK_rcv_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+875,0,"out_order_req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"TCP_stop_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+926,0,"end_ss",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+902,0,"axis_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+903,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+904,0,"len_seq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+905,0,"soupbin_TCP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+310,0,"wr_FIFO_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+308,0,"re_trans",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+927,0,"checksum_re_trans",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1,0,"nbytes_abt_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+311,0,"bytes_msg_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+933,0,"nbytes_msg_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+312,0,"nrd_FIFO_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+314,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+2,0,"nptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+315,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+3,0,"nptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+316,0,"flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+317,0,"nflush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+318,0,"bytes_abt_sent_msg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+4,0,"nbytes_abt_sent_msg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+319,0,"msg_end_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+5,0,"nmsg_end_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+320,0,"rd_state",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+6,0,"nrd_state",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+321,0,"wr_state",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+7,0,"nwr_state",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("dict_tx", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+322,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+323,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+324,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+325,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+326,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+327,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+328,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+329,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+330,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+331,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+332,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+333,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+334,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+335,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+336,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+337,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+338,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+339,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+340,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+341,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+342,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+343,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+344,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+345,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+346,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+347,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+348,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+349,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+350,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+351,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+352,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+353,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+354,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+355,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+356,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+357,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+358,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+359,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+360,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+361,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+362,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+363,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+364,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+365,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+366,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+367,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+368,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+369,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+370,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+371,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+372,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+373,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+374,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+375,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+376,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+377,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+378,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+379,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+380,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+381,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+382,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+383,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+384,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+385,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+386,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+387,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+388,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+389,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+390,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+391,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+392,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+393,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+394,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+395,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+396,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+397,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+398,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+399,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+400,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+401,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+402,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+403,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+404,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+405,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+406,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+407,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+408,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+409,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+410,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+411,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+412,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+413,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+414,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+415,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+416,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+417,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ndict_tx", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+418,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+419,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+420,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+421,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+422,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+423,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+424,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+425,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+426,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+427,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+428,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+429,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+430,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+431,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+432,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+433,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+434,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+435,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+436,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+437,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+438,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+439,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+440,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+441,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+442,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+443,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+444,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+445,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+446,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+447,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+448,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+449,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+450,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+451,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+452,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+453,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+454,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+455,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+456,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+457,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+458,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+459,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+460,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+461,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+462,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+463,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+464,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+465,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+466,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+467,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+468,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+469,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+470,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+471,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+472,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+473,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+474,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+475,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+476,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+477,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+478,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+479,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+480,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+481,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+482,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+483,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+484,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+485,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+486,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+487,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+488,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+489,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+490,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+491,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+492,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+493,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+494,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+495,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+496,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+497,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+498,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+499,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+500,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+501,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+502,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+503,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+504,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+505,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+506,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+507,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+508,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+509,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+510,0,"len_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+511,0,"checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+512,0,"ptr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+513,0,"ptr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+514,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+515,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+516,0,"nrd_FIFO_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+517,0,"nrd_FIFO_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"nwr_FIFO_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+518,0,"dict_wrt_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+519,0,"ndict_wrt_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+520,0,"dict_rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+521,0,"ndict_rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+522,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+523,0,"nrd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+524,0,"wrt_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+9,0,"nwrt_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->pushPrefix("TCP_tx_order", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declQuad(c+525,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+527,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+529,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+531,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+533,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+535,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+537,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+539,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+541,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+543,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+545,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+547,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+549,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+551,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+553,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+555,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+557,0,"[16]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+559,0,"[17]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+561,0,"[18]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+563,0,"[19]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+565,0,"[20]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+567,0,"[21]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+569,0,"[22]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+571,0,"[23]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+573,0,"[24]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+575,0,"[25]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+577,0,"[26]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+579,0,"[27]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+581,0,"[28]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+583,0,"[29]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+585,0,"[30]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+587,0,"[31]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+589,0,"[32]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+591,0,"[33]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+593,0,"[34]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+595,0,"[35]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+597,0,"[36]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+599,0,"[37]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+601,0,"[38]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+603,0,"[39]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+605,0,"[40]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+607,0,"[41]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+609,0,"[42]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+611,0,"[43]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+613,0,"[44]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+615,0,"[45]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+617,0,"[46]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+619,0,"[47]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+621,0,"[48]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+623,0,"[49]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+625,0,"[50]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+627,0,"[51]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+629,0,"[52]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+631,0,"[53]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+633,0,"[54]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+635,0,"[55]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+637,0,"[56]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+639,0,"[57]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+641,0,"[58]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+643,0,"[59]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+645,0,"[60]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+647,0,"[61]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+649,0,"[62]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+651,0,"[63]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("nTCP_tx_order", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declQuad(c+10,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+12,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+14,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+16,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+18,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+20,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+22,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+24,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+26,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+28,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+30,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+32,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+34,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+36,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+38,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+40,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+42,0,"[16]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+44,0,"[17]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+46,0,"[18]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+48,0,"[19]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+50,0,"[20]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+52,0,"[21]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+54,0,"[22]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+56,0,"[23]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+58,0,"[24]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+60,0,"[25]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+62,0,"[26]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+64,0,"[27]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+66,0,"[28]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+68,0,"[29]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+70,0,"[30]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+72,0,"[31]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+74,0,"[32]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+76,0,"[33]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+78,0,"[34]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+80,0,"[35]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+82,0,"[36]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+84,0,"[37]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+86,0,"[38]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+88,0,"[39]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+90,0,"[40]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+92,0,"[41]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+94,0,"[42]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+96,0,"[43]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+98,0,"[44]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+100,0,"[45]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+102,0,"[46]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+104,0,"[47]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+106,0,"[48]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+108,0,"[49]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+110,0,"[50]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+112,0,"[51]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+114,0,"[52]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+116,0,"[53]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+118,0,"[54]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+120,0,"[55]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+122,0,"[56]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+124,0,"[57]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+126,0,"[58]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+128,0,"[59]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+130,0,"[60]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+132,0,"[61]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+134,0,"[62]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+136,0,"[63]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->declBit(c+308,0,"out_order_req_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+877,0,"nout_order_req_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+653,0,"ACK_rcv_flag_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+654,0,"nACK_rcv_flag_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+655,0,"ACK_num_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+656,0,"nACK_num_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+657,0,"rd_debug_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+658,0,"rd_debug_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+659,0,"rd_upd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+660,0,"nrd_upd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+661,0,"bytes_abt_sent_msg_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+662,0,"nbytes_abt_sent_msg_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+663,0,"checksum_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+138,0,"nchecksum_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_payload_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+920,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+919,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+921,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+921,0,"WORD_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+923,0,"FIFO_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+934,0,"WINDOW_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+889,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+890,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"nw_segment",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+915,0,"TCP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+294,0,"axis_t_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+295,0,"axis_data_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+924,0,"handshake_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+925,0,"seq_rcv_start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+153,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+154,0,"wr_FIFO_offset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+297,0,"wr_ptr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+298,0,"wr_FIFO_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+155,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+156,0,"rd_FIFO_ptr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+157,0,"rd_FIFO_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+907,0,"rd_FIFO_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+299,0,"seq_rx_FIFO_rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+309,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+907,0,"axis_r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+908,0,"axis_r_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+909,0,"axis_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("TCP_FIFO", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+664,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+666,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+667,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+669,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+670,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+672,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+673,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+675,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+676,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+678,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("nTCP_FIFO", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+158,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+160,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+161,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+163,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+164,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+166,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+167,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+169,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+170,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+172,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fifo_entry_rd", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+679,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+681,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->declBus(c+682,0,"flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+173,0,"nflush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+683,0,"len_TCP_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+174,0,"nlen_TCP_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+684,0,"rd_len_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+299,0,"seq_trk_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+175,0,"nseq_trk_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"bytes_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+935,0,"rd_FIFO_valid_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"nrd_FIFO_valid_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"naxis_r_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+685,0,"TCP_flush_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"nTCP_flush_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+686,0,"payload1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+688,0,"payload2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+690,0,"payload3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+692,0,"payload4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+694,0,"payload5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+696,0,"bytes_offset1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+697,0,"bytes_offset2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+698,0,"bytes_offset3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+699,0,"bytes_offset4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+700,0,"bytes_offset5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+298,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+179,0,"nwr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+701,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+180,0,"nrd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+702,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_tcp", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+931,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+920,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+921,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+921,0,"WORD_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+923,0,"FIFO_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+934,0,"WINDOW_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+889,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+890,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+901,0,"TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+891,0,"IP_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+892,0,"IP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+893,0,"IP_pseuder",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+894,0,"IP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+896,0,"TCP_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+897,0,"IP_bytes_rcv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+293,0,"nw_segment",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+294,0,"axis_t_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+915,0,"TCP_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+295,0,"axis_data_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+924,0,"handshake_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+925,0,"seq_rcv_start",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+153,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+154,0,"wr_FIFO_offset",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+155,0,"rd_FIFO_valid_rcv",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+156,0,"rd_FIFO_ptr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+157,0,"rd_FIFO_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+297,0,"wr_ptr_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+298,0,"wr_FIFO_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+907,0,"rd_FIFO_en_rcv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+299,0,"seq_rx_FIFO_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+309,0,"full",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+306,0,"ACK_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+307,0,"ACK_rcv_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+875,0,"out_order_req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"TCP_stop_flg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+926,0,"end_ss",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+301,0,"rd_FIFO_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+303,0,"rd_FIFO_valid_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+304,0,"rd_FIFO_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+305,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+300,0,"rd_FIFO_en_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+898,0,"TCP_send",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+899,0,"TCP_transmit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+308,0,"re_trans",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+927,0,"checksum_re_trans",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+912,0,"rcv_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+913,0,"seq_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+703,0,"rcv_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+704,0,"TCP_control_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+705,0,"seq_num_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+306,0,"ACK_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+706,0,"offset_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+707,0,"window_size_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+708,0,"checksum_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+709,0,"urgent_pointer_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+710,0,"payload_len_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+711,0,"seq_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+747,0,"TCP_control_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+748,0,"seq_num_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+749,0,"ACK_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+916,0,"ISN_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+712,0,"bytes_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+936,0,"offset_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+713,0,"window_size_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+933,0,"urgent_pointer_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+714,0,"TCP_basesum_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+715,0,"TCP_checksum_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+937,0,"timeout_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+750,0,"hand_shake_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"seq_rcv_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+938,0,"wr_FIFO_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+716,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+939,0,"axis_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ISN_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+940,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+889,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+890,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+941,0,"gen_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+916,0,"ISN_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+717,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("TCP_tx", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+931,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+942,0,"OFF_SET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+943,0,"SRC_PORT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+944,0,"DEST_PORT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+889,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+890,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+747,0,"TCP_control_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+748,0,"seq_num_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+749,0,"ACK_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+936,0,"offset_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+713,0,"window_size_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+933,0,"urgent_pointer_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+300,0,"rd_FIFO_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+303,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+304,0,"rd_FIFO_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+301,0,"rd_FIFO_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+718,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+711,0,"seq_up",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+712,0,"bytes_sent",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+898,0,"TCP_send",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+719,0,"TCP_tx_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+720,0,"TCP_tx_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+899,0,"TCP_transmit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+714,0,"TCP_basesum_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+943,0,"src_port",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+944,0,"dest_port",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+878,0,"nbytes_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+721,0,"TCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+879,0,"nTCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBit(c+722,0,"valid_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+723,0,"state",3, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+140,0,"nstate",3, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declQuad(c+181,0,"nTCP_transmit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+719,0,"nTCP_tx_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+724,0,"nTCP_tx_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+725,0,"nseq_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+931,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+889,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+890,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+941,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+939,0,"axis_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+301,0,"TCP_payload_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+901,0,"TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+308,0,"re_trans",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+726,0,"TCP_checksum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+183,0,"nTCP_checksum_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+727,0,"TCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+184,0,"nTCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+728,0,"TCP_checksum_send",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+185,0,"nTCP_checksum_send",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+186,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+187,0,"temp1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+141,0,"up_send",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("tcp_flow", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+945,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+946,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+947,0,"FIFO_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+948,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+949,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+703,0,"rcv_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+704,0,"TCP_control_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+705,0,"seq_num_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+306,0,"ACK_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+706,0,"offset_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+707,0,"window_size_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+708,0,"checksum_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+709,0,"urgent_pointer_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+926,0,"end_ss",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+711,0,"seq_up",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+747,0,"TCP_control_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+748,0,"seq_num_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+749,0,"ACK_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+936,0,"offset_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+713,0,"window_size_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+933,0,"urgent_pointer_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+876,0,"TCP_stop_flg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+309,0,"full",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+937,0,"timeout_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+750,0,"hand_shake_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+752,0,"seq_rcv_str",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+916,0,"ISN_num",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+712,0,"bytes_sent",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+718,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+729,0,"payload_len_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+294,0,"TCP_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+912,0,"rcv_next_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+913,0,"seq_num_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"seq_rx_FIFO_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+897,0,"TCP_bytes_trk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+154,0,"wr_FIFO_offset",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+730,0,"wr_FIFO_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+188,0,"rd_FIFO_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+950,0,"wr_FIFO_ptr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+189,0,"rd_FIFO_ptr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+153,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+907,0,"rd_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"nw_segment",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+915,0,"TCP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+306,0,"ACK_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+307,0,"ACK_rcv_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+875,0,"out_order_req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+190,0,"case_bug",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+191,0,"case_bug_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+753,0,"state",5, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+880,0,"nstate",5, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("rcv_pkg_type", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+731,0,"CWR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+732,0,"ECE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+733,0,"URG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+734,0,"ACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+735,0,"PSH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+736,0,"RST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+737,0,"SYN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+738,0,"FIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("tx_pkg_type", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+754,0,"CWR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+755,0,"ECE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+756,0,"URG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+757,0,"ACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+758,0,"PSH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+759,0,"RST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+760,0,"SYN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+761,0,"FIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("ack_num", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+762,0,"dup_chk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+763,0,"ACK_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("nack_num", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+881,0,"dup_chk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+882,0,"ACK_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("seq_num", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+764,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+765,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("nseq_num", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+883,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+884,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->declBus(c+766,0,"window_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+885,0,"nwindow_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+917,0,"bytes_in_flight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+886,0,"wnd_allow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+887,0,"nhand_shake_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+888,0,"nseq_rcv_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("nTCP_order", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+192,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+194,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+195,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+196,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+197,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+198,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+199,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+200,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+201,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+202,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+203,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+204,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+205,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+206,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+207,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+208,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+209,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+210,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+211,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+212,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+213,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+214,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+215,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+216,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+217,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+218,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+219,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+220,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+221,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+222,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+223,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+224,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+225,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+226,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+227,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+228,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+229,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+230,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+231,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+232,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+233,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+234,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+235,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+236,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+237,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+238,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+239,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+240,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+241,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+242,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+243,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+244,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+245,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+246,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+247,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+249,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+250,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+251,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+252,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+253,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+254,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+255,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+256,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+257,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+258,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+259,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+260,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+261,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+262,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+263,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+264,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+265,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+266,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+267,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+268,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+269,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+270,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+271,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("TCP_order", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+767,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+768,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+769,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+770,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+771,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+772,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+773,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+774,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+775,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+776,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+777,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+778,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+779,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+780,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+781,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+782,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+783,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+784,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+785,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+786,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+787,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+788,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+789,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+790,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+791,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+792,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+793,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+794,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+795,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+796,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+797,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+798,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+799,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+800,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+801,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+802,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+803,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+804,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+805,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+806,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+807,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+808,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+809,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+810,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+811,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+812,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+813,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+814,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+815,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+816,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+817,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+818,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+819,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+820,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+821,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+822,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+823,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+824,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+825,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+826,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+827,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+828,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+829,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+830,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+831,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+832,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+833,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+834,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+835,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+836,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+837,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+838,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+839,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+840,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+841,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+842,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+843,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+844,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+845,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+846,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+847,0,"rcv_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+272,0,"nrcv_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+941,0,"out_of_order_flg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+848,0,"free_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+849,0,"match_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+850,0,"v_vec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+851,0,"free_vec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("seq_vec", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+951,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+952,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+953,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+954,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+955,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+956,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+957,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+958,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+959,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+960,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+961,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+962,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+963,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+964,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+965,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+966,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+967,0,"[16]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+968,0,"[17]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+969,0,"[18]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+970,0,"[19]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+971,0,"[20]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+972,0,"[21]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+973,0,"[22]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+974,0,"[23]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+975,0,"[24]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+976,0,"[25]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+977,0,"[26]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+978,0,"[27]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+979,0,"[28]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+980,0,"[29]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+981,0,"[30]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+982,0,"[31]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->declBit(c+852,0,"free_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+853,0,"match_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+854,0,"match_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+918,0,"overlap_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+855,0,"flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+856,0,"nflush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+857,0,"len_flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+273,0,"nlen_flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+858,0,"seq_rx_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+274,0,"nseq_rx_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+275,0,"bytes_drop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+276,0,"bytes_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("flush_list", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+859,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+860,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+861,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+862,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+863,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+864,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+865,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+866,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+867,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+868,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+869,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+870,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+871,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+872,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+873,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+874,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("nflush_list", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+277,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+278,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+279,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+280,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+281,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+282,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+283,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+284,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+285,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+286,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+287,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+288,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+289,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+290,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+291,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+292,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("me", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+941,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+984,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+854,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+853,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+849,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+985,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+941,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+984,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+851,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+852,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+848,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+985,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+983,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("tcp_rcv", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+931,0,"WORD_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+942,0,"OFF_SET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+943,0,"SRC_PORT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+944,0,"DEST_PORT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+986,0,"IP_HEADER_LENGTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+889,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+890,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+894,0,"IP_payload_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+891,0,"valid_IP_header_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+892,0,"IP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+896,0,"TCP_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+893,0,"IP_pseuder",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+703,0,"rcv_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+704,0,"TCP_control_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+705,0,"seq_num_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+306,0,"ACK_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+706,0,"offset_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+707,0,"window_size_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+708,0,"checksum_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+709,0,"urgent_pointer_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+710,0,"TCP_len_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+295,0,"TCP_payload_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+716,0,"TCP_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+915,0,"TCP_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"nw_segment",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+294,0,"TCP_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+142,0,"nTCP_control_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+143,0,"nseq_num_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+144,0,"nACK_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,0,"noffset_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+146,0,"nwindow_size_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+147,0,"nchecksum_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+148,0,"nurgent_pointer_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+739,0,"bytes_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+740,0,"nbytes_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+987,0,"checksum_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+710,0,"nTCP_len_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+741,0,"TCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+149,0,"nTCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+988,0,"TCP_data_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+989,0,"nTCP_data_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+150,0,"nTCP_payload_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+742,0,"nTCP_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+743,0,"nrcv_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+990,0,"checksum_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+991,0,"nchecksum_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+744,0,"n_nw_segment",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+745,0,"nTCP_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+746,0,"state",6, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+152,0,"nstate",6, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
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
    bufp->fullIData(oldp+919,(0x40U),32);
    bufp->fullIData(oldp+920,(5U),32);
    bufp->fullIData(oldp+921,(8U),32);
    bufp->fullIData(oldp+922,(6U),32);
    bufp->fullIData(oldp+923,(3U),32);
    bufp->fullBit(oldp+924,(vlSelfRef.top__DOT__handshake_done_int));
    bufp->fullIData(oldp+925,(vlSelfRef.top__DOT__seq_rcv_start_int),32);
    bufp->fullBit(oldp+926,(vlSelfRef.top__DOT__end_ss_int));
    bufp->fullSData(oldp+927,(vlSelfRef.top__DOT__checksum_re_trans_int),16);
    bufp->fullBit(oldp+928,(vlSelfRef.top__DOT__seq_up));
    bufp->fullIData(oldp+929,(vlSelfRef.top__DOT__seq_num_tx),32);
    bufp->fullSData(oldp+930,(vlSelfRef.top__DOT__checksum_TX),16);
    bufp->fullIData(oldp+931,(0x40U),32);
    bufp->fullIData(oldp+932,(6U),32);
    bufp->fullSData(oldp+933,(0U),16);
    bufp->fullIData(oldp+934,(0x28U),32);
    bufp->fullBit(oldp+935,(vlSelfRef.top__DOT__u_payload_fifo__DOT__rd_FIFO_valid_l));
    bufp->fullCData(oldp+936,(5U),4);
    bufp->fullBit(oldp+937,(vlSelfRef.top__DOT__u_tcp__DOT__timeout_flag));
    bufp->fullBit(oldp+938,(vlSelfRef.top__DOT__u_tcp__DOT__wr_FIFO_ptr));
    bufp->fullBit(oldp+939,(vlSelfRef.top__DOT__u_tcp__DOT__axis_last));
    bufp->fullIData(oldp+940,(0x20U),32);
    bufp->fullBit(oldp+941,(0U));
    bufp->fullIData(oldp+942,(5U),32);
    bufp->fullSData(oldp+943,(0x1234U),16);
    bufp->fullSData(oldp+944,(0x5678U),16);
    bufp->fullIData(oldp+945,(0x10U),32);
    bufp->fullIData(oldp+946,(0x800U),32);
    bufp->fullIData(oldp+947,(0xbU),32);
    bufp->fullBit(oldp+948,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__CLK));
    bufp->fullBit(oldp+949,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nRST));
    bufp->fullSData(oldp+950,(vlSelfRef.top__DOT__u_tcp__DOT__wr_FIFO_ptr),11);
    bufp->fullSData(oldp+951,((0xffffU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_vec[0U])),16);
    bufp->fullSData(oldp+952,((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_vec[0U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+953,((0xffffU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_vec[1U])),16);
    bufp->fullSData(oldp+954,((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_vec[1U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+955,((0xffffU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_vec[2U])),16);
    bufp->fullSData(oldp+956,((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_vec[2U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+957,((0xffffU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_vec[3U])),16);
    bufp->fullSData(oldp+958,((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_vec[3U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+959,((0xffffU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_vec[4U])),16);
    bufp->fullSData(oldp+960,((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_vec[4U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+961,((0xffffU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_vec[5U])),16);
    bufp->fullSData(oldp+962,((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_vec[5U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+963,((0xffffU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_vec[6U])),16);
    bufp->fullSData(oldp+964,((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_vec[6U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+965,((0xffffU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_vec[7U])),16);
    bufp->fullSData(oldp+966,((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_vec[7U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+967,((0xffffU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_vec[8U])),16);
    bufp->fullSData(oldp+968,((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_vec[8U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+969,((0xffffU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_vec[9U])),16);
    bufp->fullSData(oldp+970,((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_vec[9U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+971,((0xffffU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_vec[0xaU])),16);
    bufp->fullSData(oldp+972,((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_vec[0xaU] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+973,((0xffffU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_vec[0xbU])),16);
    bufp->fullSData(oldp+974,((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_vec[0xbU] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+975,((0xffffU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_vec[0xcU])),16);
    bufp->fullSData(oldp+976,((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_vec[0xcU] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+977,((0xffffU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_vec[0xdU])),16);
    bufp->fullSData(oldp+978,((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_vec[0xdU] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+979,((0xffffU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_vec[0xeU])),16);
    bufp->fullSData(oldp+980,((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_vec[0xeU] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+981,((0xffffU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_vec[0xfU])),16);
    bufp->fullSData(oldp+982,((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_vec[0xfU] 
                               >> 0x10U)),16);
    bufp->fullIData(oldp+983,(0x10U),32);
    bufp->fullIData(oldp+984,(4U),32);
    bufp->fullIData(oldp+985,(0x10U),32);
    bufp->fullIData(oldp+986,(0x14U),32);
    bufp->fullSData(oldp+987,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__checksum_in),16);
    bufp->fullCData(oldp+988,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__TCP_data_dl),8);
    bufp->fullCData(oldp+989,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nTCP_data_dl),8);
    bufp->fullBit(oldp+990,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__checksum_en));
    bufp->fullBit(oldp+991,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nchecksum_en));
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
    bufp->fullSData(oldp+1,(vlSelfRef.top__DOT__u_fifo_tx__DOT__nbytes_abt_sent),16);
    bufp->fullCData(oldp+2,(vlSelfRef.top__DOT__u_fifo_tx__DOT__nptr_str),6);
    bufp->fullCData(oldp+3,(vlSelfRef.top__DOT__u_fifo_tx__DOT__nptr_end),6);
    bufp->fullSData(oldp+4,(vlSelfRef.top__DOT__u_fifo_tx__DOT__nbytes_abt_sent_msg),16);
    bufp->fullCData(oldp+5,(vlSelfRef.top__DOT__u_fifo_tx__DOT__nmsg_end_ptr),6);
    bufp->fullCData(oldp+6,(vlSelfRef.top__DOT__u_fifo_tx__DOT__nrd_state),2);
    bufp->fullCData(oldp+7,(vlSelfRef.top__DOT__u_fifo_tx__DOT__nwr_state),2);
    bufp->fullBit(oldp+8,(vlSelfRef.top__DOT__u_fifo_tx__DOT__nwr_FIFO_valid));
    bufp->fullCData(oldp+9,(vlSelfRef.top__DOT__u_fifo_tx__DOT__nwrt_ptr),6);
    bufp->fullQData(oldp+10,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0U])))),64);
    bufp->fullQData(oldp+12,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[3U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[2U])))),64);
    bufp->fullQData(oldp+14,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[5U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[4U])))),64);
    bufp->fullQData(oldp+16,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[7U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[6U])))),64);
    bufp->fullQData(oldp+18,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[9U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[8U])))),64);
    bufp->fullQData(oldp+20,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0xbU])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0xaU])))),64);
    bufp->fullQData(oldp+22,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0xdU])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0xcU])))),64);
    bufp->fullQData(oldp+24,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0xfU])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0xeU])))),64);
    bufp->fullQData(oldp+26,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x11U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x10U])))),64);
    bufp->fullQData(oldp+28,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x13U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x12U])))),64);
    bufp->fullQData(oldp+30,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x15U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x14U])))),64);
    bufp->fullQData(oldp+32,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x17U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x16U])))),64);
    bufp->fullQData(oldp+34,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x19U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x18U])))),64);
    bufp->fullQData(oldp+36,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x1bU])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x1aU])))),64);
    bufp->fullQData(oldp+38,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x1dU])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x1cU])))),64);
    bufp->fullQData(oldp+40,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x1fU])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x1eU])))),64);
    bufp->fullQData(oldp+42,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x21U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x20U])))),64);
    bufp->fullQData(oldp+44,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x23U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x22U])))),64);
    bufp->fullQData(oldp+46,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x25U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x24U])))),64);
    bufp->fullQData(oldp+48,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x27U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x26U])))),64);
    bufp->fullQData(oldp+50,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x29U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x28U])))),64);
    bufp->fullQData(oldp+52,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x2bU])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x2aU])))),64);
    bufp->fullQData(oldp+54,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x2dU])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x2cU])))),64);
    bufp->fullQData(oldp+56,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x2fU])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x2eU])))),64);
    bufp->fullQData(oldp+58,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x31U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x30U])))),64);
    bufp->fullQData(oldp+60,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x33U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x32U])))),64);
    bufp->fullQData(oldp+62,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x35U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x34U])))),64);
    bufp->fullQData(oldp+64,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x37U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x36U])))),64);
    bufp->fullQData(oldp+66,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x39U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x38U])))),64);
    bufp->fullQData(oldp+68,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x3bU])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x3aU])))),64);
    bufp->fullQData(oldp+70,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x3dU])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x3cU])))),64);
    bufp->fullQData(oldp+72,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x3fU])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x3eU])))),64);
    bufp->fullQData(oldp+74,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x41U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x40U])))),64);
    bufp->fullQData(oldp+76,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x43U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x42U])))),64);
    bufp->fullQData(oldp+78,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x45U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x44U])))),64);
    bufp->fullQData(oldp+80,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x47U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x46U])))),64);
    bufp->fullQData(oldp+82,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x49U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x48U])))),64);
    bufp->fullQData(oldp+84,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x4bU])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x4aU])))),64);
    bufp->fullQData(oldp+86,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x4dU])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x4cU])))),64);
    bufp->fullQData(oldp+88,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x4fU])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x4eU])))),64);
    bufp->fullQData(oldp+90,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x51U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x50U])))),64);
    bufp->fullQData(oldp+92,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x53U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x52U])))),64);
    bufp->fullQData(oldp+94,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x55U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x54U])))),64);
    bufp->fullQData(oldp+96,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x57U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x56U])))),64);
    bufp->fullQData(oldp+98,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x59U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x58U])))),64);
    bufp->fullQData(oldp+100,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x5bU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x5aU])))),64);
    bufp->fullQData(oldp+102,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x5dU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x5cU])))),64);
    bufp->fullQData(oldp+104,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x5fU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x5eU])))),64);
    bufp->fullQData(oldp+106,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x61U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x60U])))),64);
    bufp->fullQData(oldp+108,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x63U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x62U])))),64);
    bufp->fullQData(oldp+110,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x65U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x64U])))),64);
    bufp->fullQData(oldp+112,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x67U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x66U])))),64);
    bufp->fullQData(oldp+114,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x69U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x68U])))),64);
    bufp->fullQData(oldp+116,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x6bU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x6aU])))),64);
    bufp->fullQData(oldp+118,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x6dU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x6cU])))),64);
    bufp->fullQData(oldp+120,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x6fU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x6eU])))),64);
    bufp->fullQData(oldp+122,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x71U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x70U])))),64);
    bufp->fullQData(oldp+124,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x73U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x72U])))),64);
    bufp->fullQData(oldp+126,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x75U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x74U])))),64);
    bufp->fullQData(oldp+128,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x77U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x76U])))),64);
    bufp->fullQData(oldp+130,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x79U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x78U])))),64);
    bufp->fullQData(oldp+132,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x7bU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x7aU])))),64);
    bufp->fullQData(oldp+134,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x7dU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x7cU])))),64);
    bufp->fullQData(oldp+136,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x7fU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order[0x7eU])))),64);
    bufp->fullSData(oldp+138,(vlSelfRef.top__DOT__u_fifo_tx__DOT__nchecksum_l),16);
    bufp->fullBit(oldp+139,(vlSelfRef.top__DOT__u_payload_fifo__DOT__naxis_r_valid));
    bufp->fullCData(oldp+140,(vlSelfRef.top__DOT__u_tcp__DOT__TCP_tx__DOT__nstate),7);
    bufp->fullBit(oldp+141,(vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__up_send));
    bufp->fullCData(oldp+142,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nTCP_control_rx),8);
    bufp->fullIData(oldp+143,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nseq_num_rx),32);
    bufp->fullIData(oldp+144,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nACK_rx),32);
    bufp->fullCData(oldp+145,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__noffset_rx),4);
    bufp->fullSData(oldp+146,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nwindow_size_rx),16);
    bufp->fullSData(oldp+147,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nchecksum_rx),16);
    bufp->fullSData(oldp+148,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nurgent_pointer_rx),16);
    bufp->fullIData(oldp+149,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nTCP_checksum),17);
    bufp->fullQData(oldp+150,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nTCP_payload_rx),64);
    bufp->fullCData(oldp+152,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nstate),3);
    bufp->fullBit(oldp+153,(vlSelfRef.top__DOT__wr_pfifo_en_int));
    bufp->fullCData(oldp+154,(vlSelfRef.top__DOT__wr_pfifo_offset_int),8);
    bufp->fullBit(oldp+155,(vlSelfRef.top__DOT__rd_pfifo_valid_int));
    bufp->fullCData(oldp+156,((7U & (IData)(vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__tcp_flow__rd_FIFO_ptr))),3);
    bufp->fullCData(oldp+157,((7U & (IData)(vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__tcp_flow__rd_FIFO_len))),3);
    bufp->fullQData(oldp+158,((((QData)((IData)(vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_FIFO
                                                [0U][2U])) 
                                << 0x38U) | (((QData)((IData)(
                                                              vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_FIFO
                                                              [0U][1U])) 
                                              << 0x18U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_FIFO
                                                                [0U][0U])) 
                                                >> 8U)))),64);
    bufp->fullCData(oldp+160,((0xffU & vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_FIFO
                               [0U][0U])),8);
    bufp->fullQData(oldp+161,((((QData)((IData)(vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_FIFO
                                                [1U][2U])) 
                                << 0x38U) | (((QData)((IData)(
                                                              vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_FIFO
                                                              [1U][1U])) 
                                              << 0x18U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_FIFO
                                                                [1U][0U])) 
                                                >> 8U)))),64);
    bufp->fullCData(oldp+163,((0xffU & vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_FIFO
                               [1U][0U])),8);
    bufp->fullQData(oldp+164,((((QData)((IData)(vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_FIFO
                                                [2U][2U])) 
                                << 0x38U) | (((QData)((IData)(
                                                              vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_FIFO
                                                              [2U][1U])) 
                                              << 0x18U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_FIFO
                                                                [2U][0U])) 
                                                >> 8U)))),64);
    bufp->fullCData(oldp+166,((0xffU & vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_FIFO
                               [2U][0U])),8);
    bufp->fullQData(oldp+167,((((QData)((IData)(vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_FIFO
                                                [3U][2U])) 
                                << 0x38U) | (((QData)((IData)(
                                                              vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_FIFO
                                                              [3U][1U])) 
                                              << 0x18U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_FIFO
                                                                [3U][0U])) 
                                                >> 8U)))),64);
    bufp->fullCData(oldp+169,((0xffU & vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_FIFO
                               [3U][0U])),8);
    bufp->fullQData(oldp+170,((((QData)((IData)(vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_FIFO
                                                [4U][2U])) 
                                << 0x38U) | (((QData)((IData)(
                                                              vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_FIFO
                                                              [4U][1U])) 
                                              << 0x18U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_FIFO
                                                                [4U][0U])) 
                                                >> 8U)))),64);
    bufp->fullCData(oldp+172,((0xffU & vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_FIFO
                               [4U][0U])),8);
    bufp->fullCData(oldp+173,(vlSelfRef.top__DOT__u_payload_fifo__DOT__nflush_ptr),3);
    bufp->fullCData(oldp+174,(vlSelfRef.top__DOT__u_payload_fifo__DOT__nlen_TCP_flush),3);
    bufp->fullIData(oldp+175,(vlSelfRef.top__DOT__u_payload_fifo__DOT__nseq_trk_rd),32);
    bufp->fullCData(oldp+176,((0xfU & ((1U & ((IData)(vlSelfRef.top__DOT__wr_pfifo_offset_int) 
                                              >> 7U)) 
                                       + ((1U & ((IData)(vlSelfRef.top__DOT__wr_pfifo_offset_int) 
                                                 >> 6U)) 
                                          + ((1U & 
                                              ((IData)(vlSelfRef.top__DOT__wr_pfifo_offset_int) 
                                               >> 5U)) 
                                             + ((1U 
                                                 & ((IData)(vlSelfRef.top__DOT__wr_pfifo_offset_int) 
                                                    >> 4U)) 
                                                + (
                                                   (1U 
                                                    & ((IData)(vlSelfRef.top__DOT__wr_pfifo_offset_int) 
                                                       >> 3U)) 
                                                   + 
                                                   ((1U 
                                                     & ((IData)(vlSelfRef.top__DOT__wr_pfifo_offset_int) 
                                                        >> 2U)) 
                                                    + 
                                                    ((1U 
                                                      & ((IData)(vlSelfRef.top__DOT__wr_pfifo_offset_int) 
                                                         >> 1U)) 
                                                     + 
                                                     (1U 
                                                      & (IData)(vlSelfRef.top__DOT__wr_pfifo_offset_int))))))))))),4);
    bufp->fullBit(oldp+177,(vlSelfRef.top__DOT__u_payload_fifo__DOT__nrd_FIFO_valid_l));
    bufp->fullBit(oldp+178,(vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_flush_l));
    bufp->fullCData(oldp+179,(vlSelfRef.top__DOT__u_payload_fifo__DOT__nwr_ptr),3);
    bufp->fullCData(oldp+180,(vlSelfRef.top__DOT__u_payload_fifo__DOT__nrd_ptr),3);
    bufp->fullQData(oldp+181,(vlSelfRef.top__DOT__u_tcp__DOT__TCP_tx__DOT__nTCP_transmit),64);
    bufp->fullSData(oldp+183,(vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__nTCP_checksum_out),16);
    bufp->fullIData(oldp+184,(vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__nTCP_checksum),17);
    bufp->fullIData(oldp+185,(vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__nTCP_checksum_send),17);
    bufp->fullIData(oldp+186,(vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__temp),20);
    bufp->fullIData(oldp+187,(vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__temp1),20);
    bufp->fullCData(oldp+188,(vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__tcp_flow__rd_FIFO_len),8);
    bufp->fullSData(oldp+189,(vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__tcp_flow__rd_FIFO_ptr),11);
    bufp->fullCData(oldp+190,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug),2);
    bufp->fullBit(oldp+191,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug_0));
    bufp->fullIData(oldp+192,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[2U] 
                                << 0xfU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[1U] 
                                            >> 0x11U))),32);
    bufp->fullSData(oldp+193,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[1U] 
                                          >> 1U))),16);
    bufp->fullSData(oldp+194,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[1U] 
                                           << 0xfU) 
                                          | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0U] 
                                             >> 0x11U)))),16);
    bufp->fullSData(oldp+195,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0U] 
                                          >> 1U))),16);
    bufp->fullBit(oldp+196,((1U & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0U])));
    bufp->fullIData(oldp+197,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[5U] 
                                << 0x1eU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[4U] 
                                             >> 2U))),32);
    bufp->fullSData(oldp+198,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[4U] 
                                           << 0xeU) 
                                          | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[3U] 
                                             >> 0x12U)))),16);
    bufp->fullSData(oldp+199,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[3U] 
                                          >> 2U))),16);
    bufp->fullSData(oldp+200,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[3U] 
                                           << 0xeU) 
                                          | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[2U] 
                                             >> 0x12U)))),16);
    bufp->fullBit(oldp+201,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[2U] 
                                   >> 0x11U))));
    bufp->fullIData(oldp+202,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[7U] 
                                << 0xdU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[6U] 
                                            >> 0x13U))),32);
    bufp->fullSData(oldp+203,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[6U] 
                                          >> 3U))),16);
    bufp->fullSData(oldp+204,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[6U] 
                                           << 0xdU) 
                                          | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[5U] 
                                             >> 0x13U)))),16);
    bufp->fullSData(oldp+205,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[5U] 
                                          >> 3U))),16);
    bufp->fullBit(oldp+206,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[5U] 
                                   >> 2U))));
    bufp->fullIData(oldp+207,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0xaU] 
                                << 0x1cU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[9U] 
                                             >> 4U))),32);
    bufp->fullSData(oldp+208,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[9U] 
                                           << 0xcU) 
                                          | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[8U] 
                                             >> 0x14U)))),16);
    bufp->fullSData(oldp+209,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[8U] 
                                          >> 4U))),16);
    bufp->fullSData(oldp+210,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[8U] 
                                           << 0xcU) 
                                          | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[7U] 
                                             >> 0x14U)))),16);
    bufp->fullBit(oldp+211,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[7U] 
                                   >> 0x13U))));
    bufp->fullIData(oldp+212,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0xcU] 
                                << 0xbU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0xbU] 
                                            >> 0x15U))),32);
    bufp->fullSData(oldp+213,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0xbU] 
                                          >> 5U))),16);
    bufp->fullSData(oldp+214,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0xbU] 
                                           << 0xbU) 
                                          | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0xaU] 
                                             >> 0x15U)))),16);
    bufp->fullSData(oldp+215,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0xaU] 
                                          >> 5U))),16);
    bufp->fullBit(oldp+216,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0xaU] 
                                   >> 4U))));
    bufp->fullIData(oldp+217,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0xfU] 
                                << 0x1aU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0xeU] 
                                             >> 6U))),32);
    bufp->fullSData(oldp+218,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0xeU] 
                                           << 0xaU) 
                                          | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0xdU] 
                                             >> 0x16U)))),16);
    bufp->fullSData(oldp+219,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0xdU] 
                                          >> 6U))),16);
    bufp->fullSData(oldp+220,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0xdU] 
                                           << 0xaU) 
                                          | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0xcU] 
                                             >> 0x16U)))),16);
    bufp->fullBit(oldp+221,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0xcU] 
                                   >> 0x15U))));
    bufp->fullIData(oldp+222,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x11U] 
                                << 9U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x10U] 
                                          >> 0x17U))),32);
    bufp->fullSData(oldp+223,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x10U] 
                                          >> 7U))),16);
    bufp->fullSData(oldp+224,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x10U] 
                                           << 9U) | 
                                          (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0xfU] 
                                           >> 0x17U)))),16);
    bufp->fullSData(oldp+225,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0xfU] 
                                          >> 7U))),16);
    bufp->fullBit(oldp+226,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0xfU] 
                                   >> 6U))));
    bufp->fullIData(oldp+227,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x14U] 
                                << 0x18U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x13U] 
                                             >> 8U))),32);
    bufp->fullSData(oldp+228,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x13U] 
                                           << 8U) | 
                                          (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x12U] 
                                           >> 0x18U)))),16);
    bufp->fullSData(oldp+229,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x12U] 
                                          >> 8U))),16);
    bufp->fullSData(oldp+230,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x12U] 
                                           << 8U) | 
                                          (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x11U] 
                                           >> 0x18U)))),16);
    bufp->fullBit(oldp+231,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x11U] 
                                   >> 0x17U))));
    bufp->fullIData(oldp+232,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x16U] 
                                << 7U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x15U] 
                                          >> 0x19U))),32);
    bufp->fullSData(oldp+233,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x15U] 
                                          >> 9U))),16);
    bufp->fullSData(oldp+234,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x15U] 
                                           << 7U) | 
                                          (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x14U] 
                                           >> 0x19U)))),16);
    bufp->fullSData(oldp+235,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x14U] 
                                          >> 9U))),16);
    bufp->fullBit(oldp+236,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x14U] 
                                   >> 8U))));
    bufp->fullIData(oldp+237,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x19U] 
                                << 0x16U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x18U] 
                                             >> 0xaU))),32);
    bufp->fullSData(oldp+238,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x18U] 
                                           << 6U) | 
                                          (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x17U] 
                                           >> 0x1aU)))),16);
    bufp->fullSData(oldp+239,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x17U] 
                                          >> 0xaU))),16);
    bufp->fullSData(oldp+240,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x17U] 
                                           << 6U) | 
                                          (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x16U] 
                                           >> 0x1aU)))),16);
    bufp->fullBit(oldp+241,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x16U] 
                                   >> 0x19U))));
    bufp->fullIData(oldp+242,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x1bU] 
                                << 5U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x1aU] 
                                          >> 0x1bU))),32);
    bufp->fullSData(oldp+243,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x1aU] 
                                          >> 0xbU))),16);
    bufp->fullSData(oldp+244,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x1aU] 
                                           << 5U) | 
                                          (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x19U] 
                                           >> 0x1bU)))),16);
    bufp->fullSData(oldp+245,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x19U] 
                                          >> 0xbU))),16);
    bufp->fullBit(oldp+246,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x19U] 
                                   >> 0xaU))));
    bufp->fullIData(oldp+247,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x1eU] 
                                << 0x14U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x1dU] 
                                             >> 0xcU))),32);
    bufp->fullSData(oldp+248,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x1dU] 
                                           << 4U) | 
                                          (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x1cU] 
                                           >> 0x1cU)))),16);
    bufp->fullSData(oldp+249,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x1cU] 
                                          >> 0xcU))),16);
    bufp->fullSData(oldp+250,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x1cU] 
                                           << 4U) | 
                                          (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x1bU] 
                                           >> 0x1cU)))),16);
    bufp->fullBit(oldp+251,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x1bU] 
                                   >> 0x1bU))));
    bufp->fullIData(oldp+252,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x20U] 
                                << 3U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x1fU] 
                                          >> 0x1dU))),32);
    bufp->fullSData(oldp+253,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x1fU] 
                                          >> 0xdU))),16);
    bufp->fullSData(oldp+254,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x1fU] 
                                           << 3U) | 
                                          (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x1eU] 
                                           >> 0x1dU)))),16);
    bufp->fullSData(oldp+255,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x1eU] 
                                          >> 0xdU))),16);
    bufp->fullBit(oldp+256,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x1eU] 
                                   >> 0xcU))));
    bufp->fullIData(oldp+257,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x23U] 
                                << 0x12U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x22U] 
                                             >> 0xeU))),32);
    bufp->fullSData(oldp+258,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x22U] 
                                           << 2U) | 
                                          (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x21U] 
                                           >> 0x1eU)))),16);
    bufp->fullSData(oldp+259,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x21U] 
                                          >> 0xeU))),16);
    bufp->fullSData(oldp+260,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x21U] 
                                           << 2U) | 
                                          (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x20U] 
                                           >> 0x1eU)))),16);
    bufp->fullBit(oldp+261,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x20U] 
                                   >> 0x1dU))));
    bufp->fullIData(oldp+262,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x25U] 
                                << 1U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x24U] 
                                          >> 0x1fU))),32);
    bufp->fullSData(oldp+263,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x24U] 
                                          >> 0xfU))),16);
    bufp->fullSData(oldp+264,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x24U] 
                                           << 1U) | 
                                          (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x23U] 
                                           >> 0x1fU)))),16);
    bufp->fullSData(oldp+265,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x23U] 
                                          >> 0xfU))),16);
    bufp->fullBit(oldp+266,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x23U] 
                                   >> 0xeU))));
    bufp->fullIData(oldp+267,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x28U] 
                                << 0x10U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x27U] 
                                             >> 0x10U))),32);
    bufp->fullSData(oldp+268,((0xffffU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x27U])),16);
    bufp->fullSData(oldp+269,((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x26U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+270,((0xffffU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x26U])),16);
    bufp->fullBit(oldp+271,((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x25U] 
                             >> 0x1fU)));
    bufp->fullIData(oldp+272,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nrcv_next),32);
    bufp->fullCData(oldp+273,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nlen_flush_ptr),8);
    bufp->fullIData(oldp+274,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nseq_rx_trk),32);
    bufp->fullCData(oldp+275,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop),8);
    bufp->fullCData(oldp+276,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left),8);
    bufp->fullCData(oldp+277,((0xfU & (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list))),4);
    bufp->fullCData(oldp+278,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                                               >> 4U)))),4);
    bufp->fullCData(oldp+279,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                                               >> 8U)))),4);
    bufp->fullCData(oldp+280,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                                               >> 0xcU)))),4);
    bufp->fullCData(oldp+281,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                                               >> 0x10U)))),4);
    bufp->fullCData(oldp+282,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                                               >> 0x14U)))),4);
    bufp->fullCData(oldp+283,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                                               >> 0x18U)))),4);
    bufp->fullCData(oldp+284,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                                               >> 0x1cU)))),4);
    bufp->fullCData(oldp+285,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                                               >> 0x20U)))),4);
    bufp->fullCData(oldp+286,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                                               >> 0x24U)))),4);
    bufp->fullCData(oldp+287,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                                               >> 0x28U)))),4);
    bufp->fullCData(oldp+288,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                                               >> 0x2cU)))),4);
    bufp->fullCData(oldp+289,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                                               >> 0x30U)))),4);
    bufp->fullCData(oldp+290,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                                               >> 0x34U)))),4);
    bufp->fullCData(oldp+291,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                                               >> 0x38U)))),4);
    bufp->fullCData(oldp+292,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                                               >> 0x3cU)))),4);
    bufp->fullBit(oldp+293,(vlSelfRef.top__DOT__nw_segment));
    bufp->fullBit(oldp+294,(vlSelfRef.top__DOT__axis_t_last_int));
    bufp->fullQData(oldp+295,(vlSelfRef.top__DOT__axis_data_rx_int),64);
    bufp->fullCData(oldp+297,(vlSelfRef.top__DOT__wr_ptr_out_int),3);
    bufp->fullCData(oldp+298,(vlSelfRef.top__DOT__u_payload_fifo__DOT__wr_ptr),3);
    bufp->fullIData(oldp+299,(vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd),32);
    bufp->fullBit(oldp+300,(vlSelfRef.top__DOT__rd_ftx_en_int));
    bufp->fullQData(oldp+301,(vlSelfRef.top__DOT__rd_ftx_payload_int),64);
    bufp->fullBit(oldp+303,(vlSelfRef.top__DOT__rd_ftx_valid_int));
    bufp->fullBit(oldp+304,(vlSelfRef.top__DOT__rd_ftx_last_int));
    bufp->fullSData(oldp+305,(vlSelfRef.top__DOT__bytes_abt_sent_int),16);
    bufp->fullIData(oldp+306,(vlSelfRef.top__DOT__u_tcp__DOT__ACK_rx),32);
    bufp->fullBit(oldp+307,(vlSelfRef.top__DOT__ACK_rcv_flag_int));
    bufp->fullBit(oldp+308,(vlSelfRef.top__DOT__u_fifo_tx__DOT__out_order_req_l));
    bufp->fullBit(oldp+309,((((IData)(vlSelfRef.top__DOT__u_payload_fifo__DOT__rd_ptr) 
                              - (IData)(1U)) == (IData)(vlSelfRef.top__DOT__wr_ptr_out_int))));
    bufp->fullBit(oldp+310,(vlSelfRef.top__DOT__wr_TX_full));
    bufp->fullSData(oldp+311,(vlSelfRef.top__DOT__u_fifo_tx__DOT__bytes_msg_trk),16);
    bufp->fullQData(oldp+312,(vlSelfRef.top__DOT__u_fifo_tx__DOT__nrd_FIFO_payload),64);
    bufp->fullCData(oldp+314,(vlSelfRef.top__DOT__u_fifo_tx__DOT__ptr_str),6);
    bufp->fullCData(oldp+315,(vlSelfRef.top__DOT__u_fifo_tx__DOT__ptr_end),6);
    bufp->fullCData(oldp+316,(vlSelfRef.top__DOT__u_fifo_tx__DOT__flush_ptr),6);
    bufp->fullCData(oldp+317,(vlSelfRef.top__DOT__u_fifo_tx__DOT__nflush_ptr),6);
    bufp->fullSData(oldp+318,(vlSelfRef.top__DOT__u_fifo_tx__DOT__bytes_abt_sent_msg),16);
    bufp->fullCData(oldp+319,(vlSelfRef.top__DOT__u_fifo_tx__DOT__msg_end_ptr),6);
    bufp->fullCData(oldp+320,(vlSelfRef.top__DOT__u_fifo_tx__DOT__rd_state),2);
    bufp->fullCData(oldp+321,(vlSelfRef.top__DOT__u_fifo_tx__DOT__wr_state),2);
    bufp->fullBit(oldp+322,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[2U] 
                                   >> 0x1cU))));
    bufp->fullIData(oldp+323,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[2U] 
                                << 4U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[1U] 
                                          >> 0x1cU))),32);
    bufp->fullIData(oldp+324,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[1U] 
                                << 4U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0U] 
                                          >> 0x1cU))),32);
    bufp->fullSData(oldp+325,((0xffffU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0U] 
                                          >> 0xcU))),16);
    bufp->fullCData(oldp+326,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0U] 
                                        >> 6U))),6);
    bufp->fullCData(oldp+327,((0x3fU & vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0U])),6);
    bufp->fullBit(oldp+328,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[5U] 
                                   >> 0x19U))));
    bufp->fullIData(oldp+329,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[5U] 
                                << 7U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[4U] 
                                          >> 0x19U))),32);
    bufp->fullIData(oldp+330,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[4U] 
                                << 7U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[3U] 
                                          >> 0x19U))),32);
    bufp->fullSData(oldp+331,((0xffffU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[3U] 
                                          >> 9U))),16);
    bufp->fullCData(oldp+332,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[3U] 
                                        >> 3U))),6);
    bufp->fullCData(oldp+333,((0x3fU & ((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[3U] 
                                         << 3U) | (
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[2U] 
                                                   >> 0x1dU)))),6);
    bufp->fullBit(oldp+334,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[8U] 
                                   >> 0x16U))));
    bufp->fullIData(oldp+335,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[8U] 
                                << 0xaU) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[7U] 
                                            >> 0x16U))),32);
    bufp->fullIData(oldp+336,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[7U] 
                                << 0xaU) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[6U] 
                                            >> 0x16U))),32);
    bufp->fullSData(oldp+337,((0xffffU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[6U] 
                                          >> 6U))),16);
    bufp->fullCData(oldp+338,((0x3fU & vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[6U])),6);
    bufp->fullCData(oldp+339,((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[5U] 
                               >> 0x1aU)),6);
    bufp->fullBit(oldp+340,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0xbU] 
                                   >> 0x13U))));
    bufp->fullIData(oldp+341,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0xbU] 
                                << 0xdU) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0xaU] 
                                            >> 0x13U))),32);
    bufp->fullIData(oldp+342,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0xaU] 
                                << 0xdU) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[9U] 
                                            >> 0x13U))),32);
    bufp->fullSData(oldp+343,((0xffffU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[9U] 
                                          >> 3U))),16);
    bufp->fullCData(oldp+344,((0x3fU & ((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[9U] 
                                         << 3U) | (
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[8U] 
                                                   >> 0x1dU)))),6);
    bufp->fullCData(oldp+345,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[8U] 
                                        >> 0x17U))),6);
    bufp->fullBit(oldp+346,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0xeU] 
                                   >> 0x10U))));
    bufp->fullIData(oldp+347,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0xeU] 
                                << 0x10U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0xdU] 
                                             >> 0x10U))),32);
    bufp->fullIData(oldp+348,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0xdU] 
                                << 0x10U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0xcU] 
                                             >> 0x10U))),32);
    bufp->fullSData(oldp+349,((0xffffU & vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0xcU])),16);
    bufp->fullCData(oldp+350,((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0xbU] 
                               >> 0x1aU)),6);
    bufp->fullCData(oldp+351,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0xbU] 
                                        >> 0x14U))),6);
    bufp->fullBit(oldp+352,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x11U] 
                                   >> 0xdU))));
    bufp->fullIData(oldp+353,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x11U] 
                                << 0x13U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x10U] 
                                             >> 0xdU))),32);
    bufp->fullIData(oldp+354,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x10U] 
                                << 0x13U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0xfU] 
                                             >> 0xdU))),32);
    bufp->fullSData(oldp+355,((0xffffU & ((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0xfU] 
                                           << 3U) | 
                                          (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0xeU] 
                                           >> 0x1dU)))),16);
    bufp->fullCData(oldp+356,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0xeU] 
                                        >> 0x17U))),6);
    bufp->fullCData(oldp+357,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0xeU] 
                                        >> 0x11U))),6);
    bufp->fullBit(oldp+358,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x14U] 
                                   >> 0xaU))));
    bufp->fullIData(oldp+359,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x14U] 
                                << 0x16U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x13U] 
                                             >> 0xaU))),32);
    bufp->fullIData(oldp+360,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x13U] 
                                << 0x16U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x12U] 
                                             >> 0xaU))),32);
    bufp->fullSData(oldp+361,((0xffffU & ((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x12U] 
                                           << 6U) | 
                                          (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x11U] 
                                           >> 0x1aU)))),16);
    bufp->fullCData(oldp+362,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x11U] 
                                        >> 0x14U))),6);
    bufp->fullCData(oldp+363,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x11U] 
                                        >> 0xeU))),6);
    bufp->fullBit(oldp+364,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x17U] 
                                   >> 7U))));
    bufp->fullIData(oldp+365,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x17U] 
                                << 0x19U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x16U] 
                                             >> 7U))),32);
    bufp->fullIData(oldp+366,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x16U] 
                                << 0x19U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x15U] 
                                             >> 7U))),32);
    bufp->fullSData(oldp+367,((0xffffU & ((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x15U] 
                                           << 9U) | 
                                          (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x14U] 
                                           >> 0x17U)))),16);
    bufp->fullCData(oldp+368,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x14U] 
                                        >> 0x11U))),6);
    bufp->fullCData(oldp+369,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x14U] 
                                        >> 0xbU))),6);
    bufp->fullBit(oldp+370,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x1aU] 
                                   >> 4U))));
    bufp->fullIData(oldp+371,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x1aU] 
                                << 0x1cU) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x19U] 
                                             >> 4U))),32);
    bufp->fullIData(oldp+372,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x19U] 
                                << 0x1cU) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x18U] 
                                             >> 4U))),32);
    bufp->fullSData(oldp+373,((0xffffU & ((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x18U] 
                                           << 0xcU) 
                                          | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x17U] 
                                             >> 0x14U)))),16);
    bufp->fullCData(oldp+374,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x17U] 
                                        >> 0xeU))),6);
    bufp->fullCData(oldp+375,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x17U] 
                                        >> 8U))),6);
    bufp->fullBit(oldp+376,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x1dU] 
                                   >> 1U))));
    bufp->fullIData(oldp+377,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x1dU] 
                                << 0x1fU) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x1cU] 
                                             >> 1U))),32);
    bufp->fullIData(oldp+378,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x1cU] 
                                << 0x1fU) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x1bU] 
                                             >> 1U))),32);
    bufp->fullSData(oldp+379,((0xffffU & ((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x1bU] 
                                           << 0xfU) 
                                          | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x1aU] 
                                             >> 0x11U)))),16);
    bufp->fullCData(oldp+380,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x1aU] 
                                        >> 0xbU))),6);
    bufp->fullCData(oldp+381,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x1aU] 
                                        >> 5U))),6);
    bufp->fullBit(oldp+382,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x1fU] 
                                   >> 0x1eU))));
    bufp->fullIData(oldp+383,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x1fU] 
                                << 2U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x1eU] 
                                          >> 0x1eU))),32);
    bufp->fullIData(oldp+384,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x1eU] 
                                << 2U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x1dU] 
                                          >> 0x1eU))),32);
    bufp->fullSData(oldp+385,((0xffffU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x1dU] 
                                          >> 0xeU))),16);
    bufp->fullCData(oldp+386,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x1dU] 
                                        >> 8U))),6);
    bufp->fullCData(oldp+387,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x1dU] 
                                        >> 2U))),6);
    bufp->fullBit(oldp+388,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x22U] 
                                   >> 0x1bU))));
    bufp->fullIData(oldp+389,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x22U] 
                                << 5U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x21U] 
                                          >> 0x1bU))),32);
    bufp->fullIData(oldp+390,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x21U] 
                                << 5U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x20U] 
                                          >> 0x1bU))),32);
    bufp->fullSData(oldp+391,((0xffffU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x20U] 
                                          >> 0xbU))),16);
    bufp->fullCData(oldp+392,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x20U] 
                                        >> 5U))),6);
    bufp->fullCData(oldp+393,((0x3fU & ((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x20U] 
                                         << 1U) | (
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x1fU] 
                                                   >> 0x1fU)))),6);
    bufp->fullBit(oldp+394,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x25U] 
                                   >> 0x18U))));
    bufp->fullIData(oldp+395,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x25U] 
                                << 8U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x24U] 
                                          >> 0x18U))),32);
    bufp->fullIData(oldp+396,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x24U] 
                                << 8U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x23U] 
                                          >> 0x18U))),32);
    bufp->fullSData(oldp+397,((0xffffU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x23U] 
                                          >> 8U))),16);
    bufp->fullCData(oldp+398,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x23U] 
                                        >> 2U))),6);
    bufp->fullCData(oldp+399,((0x3fU & ((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x23U] 
                                         << 4U) | (
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x22U] 
                                                   >> 0x1cU)))),6);
    bufp->fullBit(oldp+400,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x28U] 
                                   >> 0x15U))));
    bufp->fullIData(oldp+401,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x28U] 
                                << 0xbU) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x27U] 
                                            >> 0x15U))),32);
    bufp->fullIData(oldp+402,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x27U] 
                                << 0xbU) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x26U] 
                                            >> 0x15U))),32);
    bufp->fullSData(oldp+403,((0xffffU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x26U] 
                                          >> 5U))),16);
    bufp->fullCData(oldp+404,((0x3fU & ((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x26U] 
                                         << 1U) | (
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x25U] 
                                                   >> 0x1fU)))),6);
    bufp->fullCData(oldp+405,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x25U] 
                                        >> 0x19U))),6);
    bufp->fullBit(oldp+406,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x2bU] 
                                   >> 0x12U))));
    bufp->fullIData(oldp+407,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x2bU] 
                                << 0xeU) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x2aU] 
                                            >> 0x12U))),32);
    bufp->fullIData(oldp+408,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x2aU] 
                                << 0xeU) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x29U] 
                                            >> 0x12U))),32);
    bufp->fullSData(oldp+409,((0xffffU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x29U] 
                                          >> 2U))),16);
    bufp->fullCData(oldp+410,((0x3fU & ((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x29U] 
                                         << 4U) | (
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x28U] 
                                                   >> 0x1cU)))),6);
    bufp->fullCData(oldp+411,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x28U] 
                                        >> 0x16U))),6);
    bufp->fullBit(oldp+412,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x2eU] 
                                   >> 0xfU))));
    bufp->fullIData(oldp+413,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x2eU] 
                                << 0x11U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x2dU] 
                                             >> 0xfU))),32);
    bufp->fullIData(oldp+414,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x2dU] 
                                << 0x11U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x2cU] 
                                             >> 0xfU))),32);
    bufp->fullSData(oldp+415,((0xffffU & ((vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x2cU] 
                                           << 1U) | 
                                          (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x2bU] 
                                           >> 0x1fU)))),16);
    bufp->fullCData(oldp+416,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x2bU] 
                                        >> 0x19U))),6);
    bufp->fullCData(oldp+417,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[0x2bU] 
                                        >> 0x13U))),6);
    bufp->fullBit(oldp+418,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[2U] 
                                   >> 0x1cU))));
    bufp->fullIData(oldp+419,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[2U] 
                                << 4U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[1U] 
                                          >> 0x1cU))),32);
    bufp->fullIData(oldp+420,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[1U] 
                                << 4U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0U] 
                                          >> 0x1cU))),32);
    bufp->fullSData(oldp+421,((0xffffU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0U] 
                                          >> 0xcU))),16);
    bufp->fullCData(oldp+422,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0U] 
                                        >> 6U))),6);
    bufp->fullCData(oldp+423,((0x3fU & vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0U])),6);
    bufp->fullBit(oldp+424,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[5U] 
                                   >> 0x19U))));
    bufp->fullIData(oldp+425,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[5U] 
                                << 7U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[4U] 
                                          >> 0x19U))),32);
    bufp->fullIData(oldp+426,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[4U] 
                                << 7U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[3U] 
                                          >> 0x19U))),32);
    bufp->fullSData(oldp+427,((0xffffU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[3U] 
                                          >> 9U))),16);
    bufp->fullCData(oldp+428,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[3U] 
                                        >> 3U))),6);
    bufp->fullCData(oldp+429,((0x3fU & ((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[3U] 
                                         << 3U) | (
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[2U] 
                                                   >> 0x1dU)))),6);
    bufp->fullBit(oldp+430,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[8U] 
                                   >> 0x16U))));
    bufp->fullIData(oldp+431,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[8U] 
                                << 0xaU) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[7U] 
                                            >> 0x16U))),32);
    bufp->fullIData(oldp+432,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[7U] 
                                << 0xaU) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[6U] 
                                            >> 0x16U))),32);
    bufp->fullSData(oldp+433,((0xffffU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[6U] 
                                          >> 6U))),16);
    bufp->fullCData(oldp+434,((0x3fU & vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[6U])),6);
    bufp->fullCData(oldp+435,((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[5U] 
                               >> 0x1aU)),6);
    bufp->fullBit(oldp+436,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0xbU] 
                                   >> 0x13U))));
    bufp->fullIData(oldp+437,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0xbU] 
                                << 0xdU) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0xaU] 
                                            >> 0x13U))),32);
    bufp->fullIData(oldp+438,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0xaU] 
                                << 0xdU) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[9U] 
                                            >> 0x13U))),32);
    bufp->fullSData(oldp+439,((0xffffU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[9U] 
                                          >> 3U))),16);
    bufp->fullCData(oldp+440,((0x3fU & ((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[9U] 
                                         << 3U) | (
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[8U] 
                                                   >> 0x1dU)))),6);
    bufp->fullCData(oldp+441,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[8U] 
                                        >> 0x17U))),6);
    bufp->fullBit(oldp+442,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0xeU] 
                                   >> 0x10U))));
    bufp->fullIData(oldp+443,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0xeU] 
                                << 0x10U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0xdU] 
                                             >> 0x10U))),32);
    bufp->fullIData(oldp+444,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0xdU] 
                                << 0x10U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0xcU] 
                                             >> 0x10U))),32);
    bufp->fullSData(oldp+445,((0xffffU & vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0xcU])),16);
    bufp->fullCData(oldp+446,((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0xbU] 
                               >> 0x1aU)),6);
    bufp->fullCData(oldp+447,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0xbU] 
                                        >> 0x14U))),6);
    bufp->fullBit(oldp+448,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x11U] 
                                   >> 0xdU))));
    bufp->fullIData(oldp+449,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x11U] 
                                << 0x13U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x10U] 
                                             >> 0xdU))),32);
    bufp->fullIData(oldp+450,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x10U] 
                                << 0x13U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0xfU] 
                                             >> 0xdU))),32);
    bufp->fullSData(oldp+451,((0xffffU & ((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0xfU] 
                                           << 3U) | 
                                          (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0xeU] 
                                           >> 0x1dU)))),16);
    bufp->fullCData(oldp+452,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0xeU] 
                                        >> 0x17U))),6);
    bufp->fullCData(oldp+453,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0xeU] 
                                        >> 0x11U))),6);
    bufp->fullBit(oldp+454,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x14U] 
                                   >> 0xaU))));
    bufp->fullIData(oldp+455,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x14U] 
                                << 0x16U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x13U] 
                                             >> 0xaU))),32);
    bufp->fullIData(oldp+456,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x13U] 
                                << 0x16U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x12U] 
                                             >> 0xaU))),32);
    bufp->fullSData(oldp+457,((0xffffU & ((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x12U] 
                                           << 6U) | 
                                          (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x11U] 
                                           >> 0x1aU)))),16);
    bufp->fullCData(oldp+458,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x11U] 
                                        >> 0x14U))),6);
    bufp->fullCData(oldp+459,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x11U] 
                                        >> 0xeU))),6);
    bufp->fullBit(oldp+460,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x17U] 
                                   >> 7U))));
    bufp->fullIData(oldp+461,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x17U] 
                                << 0x19U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x16U] 
                                             >> 7U))),32);
    bufp->fullIData(oldp+462,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x16U] 
                                << 0x19U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x15U] 
                                             >> 7U))),32);
    bufp->fullSData(oldp+463,((0xffffU & ((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x15U] 
                                           << 9U) | 
                                          (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x14U] 
                                           >> 0x17U)))),16);
    bufp->fullCData(oldp+464,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x14U] 
                                        >> 0x11U))),6);
    bufp->fullCData(oldp+465,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x14U] 
                                        >> 0xbU))),6);
    bufp->fullBit(oldp+466,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x1aU] 
                                   >> 4U))));
    bufp->fullIData(oldp+467,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x1aU] 
                                << 0x1cU) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x19U] 
                                             >> 4U))),32);
    bufp->fullIData(oldp+468,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x19U] 
                                << 0x1cU) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x18U] 
                                             >> 4U))),32);
    bufp->fullSData(oldp+469,((0xffffU & ((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x18U] 
                                           << 0xcU) 
                                          | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x17U] 
                                             >> 0x14U)))),16);
    bufp->fullCData(oldp+470,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x17U] 
                                        >> 0xeU))),6);
    bufp->fullCData(oldp+471,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x17U] 
                                        >> 8U))),6);
    bufp->fullBit(oldp+472,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x1dU] 
                                   >> 1U))));
    bufp->fullIData(oldp+473,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x1dU] 
                                << 0x1fU) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x1cU] 
                                             >> 1U))),32);
    bufp->fullIData(oldp+474,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x1cU] 
                                << 0x1fU) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x1bU] 
                                             >> 1U))),32);
    bufp->fullSData(oldp+475,((0xffffU & ((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x1bU] 
                                           << 0xfU) 
                                          | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x1aU] 
                                             >> 0x11U)))),16);
    bufp->fullCData(oldp+476,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x1aU] 
                                        >> 0xbU))),6);
    bufp->fullCData(oldp+477,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x1aU] 
                                        >> 5U))),6);
    bufp->fullBit(oldp+478,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x1fU] 
                                   >> 0x1eU))));
    bufp->fullIData(oldp+479,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x1fU] 
                                << 2U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x1eU] 
                                          >> 0x1eU))),32);
    bufp->fullIData(oldp+480,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x1eU] 
                                << 2U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x1dU] 
                                          >> 0x1eU))),32);
    bufp->fullSData(oldp+481,((0xffffU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x1dU] 
                                          >> 0xeU))),16);
    bufp->fullCData(oldp+482,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x1dU] 
                                        >> 8U))),6);
    bufp->fullCData(oldp+483,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x1dU] 
                                        >> 2U))),6);
    bufp->fullBit(oldp+484,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x22U] 
                                   >> 0x1bU))));
    bufp->fullIData(oldp+485,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x22U] 
                                << 5U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x21U] 
                                          >> 0x1bU))),32);
    bufp->fullIData(oldp+486,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x21U] 
                                << 5U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x20U] 
                                          >> 0x1bU))),32);
    bufp->fullSData(oldp+487,((0xffffU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x20U] 
                                          >> 0xbU))),16);
    bufp->fullCData(oldp+488,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x20U] 
                                        >> 5U))),6);
    bufp->fullCData(oldp+489,((0x3fU & ((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x20U] 
                                         << 1U) | (
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x1fU] 
                                                   >> 0x1fU)))),6);
    bufp->fullBit(oldp+490,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x25U] 
                                   >> 0x18U))));
    bufp->fullIData(oldp+491,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x25U] 
                                << 8U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x24U] 
                                          >> 0x18U))),32);
    bufp->fullIData(oldp+492,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x24U] 
                                << 8U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x23U] 
                                          >> 0x18U))),32);
    bufp->fullSData(oldp+493,((0xffffU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x23U] 
                                          >> 8U))),16);
    bufp->fullCData(oldp+494,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x23U] 
                                        >> 2U))),6);
    bufp->fullCData(oldp+495,((0x3fU & ((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x23U] 
                                         << 4U) | (
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x22U] 
                                                   >> 0x1cU)))),6);
    bufp->fullBit(oldp+496,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x28U] 
                                   >> 0x15U))));
    bufp->fullIData(oldp+497,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x28U] 
                                << 0xbU) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x27U] 
                                            >> 0x15U))),32);
    bufp->fullIData(oldp+498,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x27U] 
                                << 0xbU) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x26U] 
                                            >> 0x15U))),32);
    bufp->fullSData(oldp+499,((0xffffU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x26U] 
                                          >> 5U))),16);
    bufp->fullCData(oldp+500,((0x3fU & ((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x26U] 
                                         << 1U) | (
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x25U] 
                                                   >> 0x1fU)))),6);
    bufp->fullCData(oldp+501,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x25U] 
                                        >> 0x19U))),6);
    bufp->fullBit(oldp+502,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x2bU] 
                                   >> 0x12U))));
    bufp->fullIData(oldp+503,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x2bU] 
                                << 0xeU) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x2aU] 
                                            >> 0x12U))),32);
    bufp->fullIData(oldp+504,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x2aU] 
                                << 0xeU) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x29U] 
                                            >> 0x12U))),32);
    bufp->fullSData(oldp+505,((0xffffU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x29U] 
                                          >> 2U))),16);
    bufp->fullCData(oldp+506,((0x3fU & ((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x29U] 
                                         << 4U) | (
                                                   vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x28U] 
                                                   >> 0x1cU)))),6);
    bufp->fullCData(oldp+507,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x28U] 
                                        >> 0x16U))),6);
    bufp->fullBit(oldp+508,((1U & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x2eU] 
                                   >> 0xfU))));
    bufp->fullIData(oldp+509,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x2eU] 
                                << 0x11U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x2dU] 
                                             >> 0xfU))),32);
    bufp->fullIData(oldp+510,(((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x2dU] 
                                << 0x11U) | (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x2cU] 
                                             >> 0xfU))),32);
    bufp->fullSData(oldp+511,((0xffffU & ((vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x2cU] 
                                           << 1U) | 
                                          (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x2bU] 
                                           >> 0x1fU)))),16);
    bufp->fullCData(oldp+512,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x2bU] 
                                        >> 0x19U))),6);
    bufp->fullCData(oldp+513,((0x3fU & (vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_tx[0x2bU] 
                                        >> 0x13U))),6);
    bufp->fullBit(oldp+514,(vlSelfRef.top__DOT__u_fifo_tx__DOT__full));
    bufp->fullBit(oldp+515,(((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__rd_ptr) 
                             == (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__wrt_ptr))));
    bufp->fullBit(oldp+516,(vlSelfRef.top__DOT__u_fifo_tx__DOT__nrd_FIFO_last));
    bufp->fullBit(oldp+517,(vlSelfRef.top__DOT__u_fifo_tx__DOT__nrd_FIFO_valid));
    bufp->fullCData(oldp+518,(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_wrt_ptr),4);
    bufp->fullCData(oldp+519,(vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_wrt_ptr),4);
    bufp->fullCData(oldp+520,(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_rd_ptr),4);
    bufp->fullCData(oldp+521,(vlSelfRef.top__DOT__u_fifo_tx__DOT__ndict_rd_ptr),4);
    bufp->fullCData(oldp+522,(vlSelfRef.top__DOT__u_fifo_tx__DOT__rd_ptr),6);
    bufp->fullCData(oldp+523,(vlSelfRef.top__DOT__u_fifo_tx__DOT__nrd_ptr),6);
    bufp->fullCData(oldp+524,(vlSelfRef.top__DOT__u_fifo_tx__DOT__wrt_ptr),6);
    bufp->fullQData(oldp+525,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0U])))),64);
    bufp->fullQData(oldp+527,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[2U])))),64);
    bufp->fullQData(oldp+529,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[5U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[4U])))),64);
    bufp->fullQData(oldp+531,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[7U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[6U])))),64);
    bufp->fullQData(oldp+533,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[9U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[8U])))),64);
    bufp->fullQData(oldp+535,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0xbU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0xaU])))),64);
    bufp->fullQData(oldp+537,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0xdU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0xcU])))),64);
    bufp->fullQData(oldp+539,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0xfU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0xeU])))),64);
    bufp->fullQData(oldp+541,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x11U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x10U])))),64);
    bufp->fullQData(oldp+543,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x13U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x12U])))),64);
    bufp->fullQData(oldp+545,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x15U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x14U])))),64);
    bufp->fullQData(oldp+547,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x17U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x16U])))),64);
    bufp->fullQData(oldp+549,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x19U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x18U])))),64);
    bufp->fullQData(oldp+551,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x1bU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x1aU])))),64);
    bufp->fullQData(oldp+553,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x1dU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x1cU])))),64);
    bufp->fullQData(oldp+555,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x1fU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x1eU])))),64);
    bufp->fullQData(oldp+557,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x21U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x20U])))),64);
    bufp->fullQData(oldp+559,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x23U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x22U])))),64);
    bufp->fullQData(oldp+561,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x25U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x24U])))),64);
    bufp->fullQData(oldp+563,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x27U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x26U])))),64);
    bufp->fullQData(oldp+565,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x29U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x28U])))),64);
    bufp->fullQData(oldp+567,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x2bU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x2aU])))),64);
    bufp->fullQData(oldp+569,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x2dU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x2cU])))),64);
    bufp->fullQData(oldp+571,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x2fU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x2eU])))),64);
    bufp->fullQData(oldp+573,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x31U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x30U])))),64);
    bufp->fullQData(oldp+575,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x33U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x32U])))),64);
    bufp->fullQData(oldp+577,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x35U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x34U])))),64);
    bufp->fullQData(oldp+579,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x37U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x36U])))),64);
    bufp->fullQData(oldp+581,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x39U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x38U])))),64);
    bufp->fullQData(oldp+583,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x3bU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x3aU])))),64);
    bufp->fullQData(oldp+585,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x3dU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x3cU])))),64);
    bufp->fullQData(oldp+587,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x3fU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x3eU])))),64);
    bufp->fullQData(oldp+589,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x41U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x40U])))),64);
    bufp->fullQData(oldp+591,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x43U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x42U])))),64);
    bufp->fullQData(oldp+593,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x45U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x44U])))),64);
    bufp->fullQData(oldp+595,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x47U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x46U])))),64);
    bufp->fullQData(oldp+597,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x49U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x48U])))),64);
    bufp->fullQData(oldp+599,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x4bU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x4aU])))),64);
    bufp->fullQData(oldp+601,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x4dU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x4cU])))),64);
    bufp->fullQData(oldp+603,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x4fU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x4eU])))),64);
    bufp->fullQData(oldp+605,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x51U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x50U])))),64);
    bufp->fullQData(oldp+607,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x53U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x52U])))),64);
    bufp->fullQData(oldp+609,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x55U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x54U])))),64);
    bufp->fullQData(oldp+611,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x57U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x56U])))),64);
    bufp->fullQData(oldp+613,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x59U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x58U])))),64);
    bufp->fullQData(oldp+615,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x5bU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x5aU])))),64);
    bufp->fullQData(oldp+617,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x5dU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x5cU])))),64);
    bufp->fullQData(oldp+619,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x5fU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x5eU])))),64);
    bufp->fullQData(oldp+621,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x61U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x60U])))),64);
    bufp->fullQData(oldp+623,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x63U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x62U])))),64);
    bufp->fullQData(oldp+625,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x65U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x64U])))),64);
    bufp->fullQData(oldp+627,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x67U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x66U])))),64);
    bufp->fullQData(oldp+629,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x69U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x68U])))),64);
    bufp->fullQData(oldp+631,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x6bU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x6aU])))),64);
    bufp->fullQData(oldp+633,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x6dU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x6cU])))),64);
    bufp->fullQData(oldp+635,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x6fU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x6eU])))),64);
    bufp->fullQData(oldp+637,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x71U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x70U])))),64);
    bufp->fullQData(oldp+639,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x73U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x72U])))),64);
    bufp->fullQData(oldp+641,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x75U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x74U])))),64);
    bufp->fullQData(oldp+643,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x77U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x76U])))),64);
    bufp->fullQData(oldp+645,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x79U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x78U])))),64);
    bufp->fullQData(oldp+647,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x7bU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x7aU])))),64);
    bufp->fullQData(oldp+649,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x7dU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x7cU])))),64);
    bufp->fullQData(oldp+651,((((QData)((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x7fU])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order[0x7eU])))),64);
    bufp->fullBit(oldp+653,(vlSelfRef.top__DOT__u_fifo_tx__DOT__ACK_rcv_flag_l));
    bufp->fullBit(oldp+654,(vlSelfRef.top__DOT__u_fifo_tx__DOT__nACK_rcv_flag_l));
    bufp->fullIData(oldp+655,(vlSelfRef.top__DOT__u_fifo_tx__DOT__ACK_num_l),32);
    bufp->fullIData(oldp+656,(vlSelfRef.top__DOT__u_fifo_tx__DOT__nACK_num_l),32);
    bufp->fullBit(oldp+657,(vlSelfRef.top__DOT__u_fifo_tx__DOT__rd_debug_1));
    bufp->fullBit(oldp+658,(vlSelfRef.top__DOT__u_fifo_tx__DOT__rd_debug_2));
    bufp->fullBit(oldp+659,(vlSelfRef.top__DOT__u_fifo_tx__DOT__rd_upd));
    bufp->fullBit(oldp+660,(vlSelfRef.top__DOT__u_fifo_tx__DOT__nrd_upd));
    bufp->fullSData(oldp+661,(vlSelfRef.top__DOT__u_fifo_tx__DOT__bytes_abt_sent_msg_rd),16);
    bufp->fullSData(oldp+662,(vlSelfRef.top__DOT__u_fifo_tx__DOT__nbytes_abt_sent_msg_rd),16);
    bufp->fullSData(oldp+663,(vlSelfRef.top__DOT__u_fifo_tx__DOT__checksum_l),16);
    bufp->fullQData(oldp+664,((((QData)((IData)(vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                [0U][2U])) 
                                << 0x38U) | (((QData)((IData)(
                                                              vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                              [0U][1U])) 
                                              << 0x18U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                                [0U][0U])) 
                                                >> 8U)))),64);
    bufp->fullCData(oldp+666,((0xffU & vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                               [0U][0U])),8);
    bufp->fullQData(oldp+667,((((QData)((IData)(vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                [1U][2U])) 
                                << 0x38U) | (((QData)((IData)(
                                                              vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                              [1U][1U])) 
                                              << 0x18U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                                [1U][0U])) 
                                                >> 8U)))),64);
    bufp->fullCData(oldp+669,((0xffU & vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                               [1U][0U])),8);
    bufp->fullQData(oldp+670,((((QData)((IData)(vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                [2U][2U])) 
                                << 0x38U) | (((QData)((IData)(
                                                              vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                              [2U][1U])) 
                                              << 0x18U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                                [2U][0U])) 
                                                >> 8U)))),64);
    bufp->fullCData(oldp+672,((0xffU & vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                               [2U][0U])),8);
    bufp->fullQData(oldp+673,((((QData)((IData)(vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                [3U][2U])) 
                                << 0x38U) | (((QData)((IData)(
                                                              vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                              [3U][1U])) 
                                              << 0x18U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                                [3U][0U])) 
                                                >> 8U)))),64);
    bufp->fullCData(oldp+675,((0xffU & vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                               [3U][0U])),8);
    bufp->fullQData(oldp+676,((((QData)((IData)(vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                [4U][2U])) 
                                << 0x38U) | (((QData)((IData)(
                                                              vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                              [4U][1U])) 
                                              << 0x18U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                                [4U][0U])) 
                                                >> 8U)))),64);
    bufp->fullCData(oldp+678,((0xffU & vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                               [4U][0U])),8);
    bufp->fullQData(oldp+679,((((QData)((IData)(vlSelfRef.top__DOT__u_payload_fifo__DOT__fifo_entry_rd[2U])) 
                                << 0x38U) | (((QData)((IData)(
                                                              vlSelfRef.top__DOT__u_payload_fifo__DOT__fifo_entry_rd[1U])) 
                                              << 0x18U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.top__DOT__u_payload_fifo__DOT__fifo_entry_rd[0U])) 
                                                >> 8U)))),64);
    bufp->fullCData(oldp+681,((0xffU & vlSelfRef.top__DOT__u_payload_fifo__DOT__fifo_entry_rd[0U])),8);
    bufp->fullCData(oldp+682,(vlSelfRef.top__DOT__u_payload_fifo__DOT__flush_ptr),3);
    bufp->fullCData(oldp+683,(vlSelfRef.top__DOT__u_payload_fifo__DOT__len_TCP_flush),3);
    bufp->fullCData(oldp+684,(vlSelfRef.top__DOT__u_payload_fifo__DOT__rd_len_ptr),3);
    bufp->fullBit(oldp+685,(vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_flush_l));
    bufp->fullQData(oldp+686,((((QData)((IData)(vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                [0U][2U])) 
                                << 0x38U) | (((QData)((IData)(
                                                              vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                              [0U][1U])) 
                                              << 0x18U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                                [0U][0U])) 
                                                >> 8U)))),64);
    bufp->fullQData(oldp+688,((((QData)((IData)(vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                [1U][2U])) 
                                << 0x38U) | (((QData)((IData)(
                                                              vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                              [1U][1U])) 
                                              << 0x18U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                                [1U][0U])) 
                                                >> 8U)))),64);
    bufp->fullQData(oldp+690,((((QData)((IData)(vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                [2U][2U])) 
                                << 0x38U) | (((QData)((IData)(
                                                              vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                              [2U][1U])) 
                                              << 0x18U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                                [2U][0U])) 
                                                >> 8U)))),64);
    bufp->fullQData(oldp+692,((((QData)((IData)(vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                [3U][2U])) 
                                << 0x38U) | (((QData)((IData)(
                                                              vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                              [3U][1U])) 
                                              << 0x18U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                                [3U][0U])) 
                                                >> 8U)))),64);
    bufp->fullQData(oldp+694,((((QData)((IData)(vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                [4U][2U])) 
                                << 0x38U) | (((QData)((IData)(
                                                              vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                              [4U][1U])) 
                                              << 0x18U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                                                                [4U][0U])) 
                                                >> 8U)))),64);
    bufp->fullCData(oldp+696,((0xffU & vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                               [0U][0U])),8);
    bufp->fullCData(oldp+697,((0xffU & vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                               [1U][0U])),8);
    bufp->fullCData(oldp+698,((0xffU & vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                               [2U][0U])),8);
    bufp->fullCData(oldp+699,((0xffU & vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                               [3U][0U])),8);
    bufp->fullCData(oldp+700,((0xffU & vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_FIFO
                               [4U][0U])),8);
    bufp->fullCData(oldp+701,(vlSelfRef.top__DOT__u_payload_fifo__DOT__rd_ptr),3);
    bufp->fullIData(oldp+702,(vlSelfRef.top__DOT__u_payload_fifo__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+703,(vlSelfRef.top__DOT__u_tcp__DOT__rcv_data));
    bufp->fullCData(oldp+704,(vlSelfRef.top__DOT__u_tcp__DOT__TCP_control_rx),8);
    bufp->fullIData(oldp+705,(vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx),32);
    bufp->fullCData(oldp+706,(vlSelfRef.top__DOT__u_tcp__DOT__offset_rx),4);
    bufp->fullSData(oldp+707,(vlSelfRef.top__DOT__u_tcp__DOT__window_size_rx),16);
    bufp->fullSData(oldp+708,(vlSelfRef.top__DOT__u_tcp__DOT__checksum_rx),16);
    bufp->fullSData(oldp+709,(vlSelfRef.top__DOT__u_tcp__DOT__urgent_pointer_rx),16);
    bufp->fullSData(oldp+710,(vlSelfRef.top__DOT__u_tcp__DOT__payload_len_rx),16);
    bufp->fullBit(oldp+711,(vlSelfRef.top__DOT__u_tcp__DOT__seq_up));
    bufp->fullIData(oldp+712,(vlSelfRef.top__DOT__u_tcp__DOT__bytes_sent),32);
    bufp->fullSData(oldp+713,(((((IData)(vlSelfRef.top__DOT__u_payload_fifo__DOT__rd_ptr) 
                                 - (IData)(1U)) == (IData)(vlSelfRef.top__DOT__wr_ptr_out_int))
                                ? 0U : 0xffffU)),16);
    bufp->fullSData(oldp+714,(((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__out_order_req_l)
                                ? (IData)(vlSelfRef.top__DOT__checksum_re_trans_int)
                                : (1U & (IData)(vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__inst__TCP_checksum_out)))),16);
    bufp->fullBit(oldp+715,((1U & (IData)(vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__inst__TCP_checksum_out))));
    bufp->fullBit(oldp+716,(vlSelfRef.top__DOT__u_tcp__DOT__rd_FIFO_valid));
    bufp->fullIData(oldp+717,(vlSelfRef.top__DOT__u_tcp__DOT__ISN_gen__DOT__counter),32);
    bufp->fullIData(oldp+718,(vlSelfRef.top__DOT__bytes_abt_sent_int),32);
    bufp->fullBit(oldp+719,(vlSelfRef.top__DOT__u_tcp__DOT__TCP_tx__DOT__TCP_tx_valid));
    bufp->fullBit(oldp+720,(vlSelfRef.top__DOT__u_tcp__DOT__TCP_tx__DOT__TCP_tx_last));
    bufp->fullIData(oldp+721,(vlSelfRef.top__DOT__u_tcp__DOT__TCP_tx__DOT__TCP_checksum),17);
    bufp->fullBit(oldp+722,(vlSelfRef.top__DOT__u_tcp__DOT__TCP_tx__DOT__valid_checksum));
    bufp->fullCData(oldp+723,(vlSelfRef.top__DOT__u_tcp__DOT__TCP_tx__DOT__state),7);
    bufp->fullBit(oldp+724,(vlSelfRef.top__DOT__u_tcp__DOT__TCP_tx__DOT__nTCP_tx_last));
    bufp->fullBit(oldp+725,(vlSelfRef.top__DOT__u_tcp__DOT__TCP_tx__DOT__nseq_up));
    bufp->fullSData(oldp+726,(vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__inst__TCP_checksum_out),16);
    bufp->fullIData(oldp+727,(vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__TCP_checksum),17);
    bufp->fullIData(oldp+728,(vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__TCP_checksum_send),17);
    bufp->fullIData(oldp+729,(vlSelfRef.top__DOT__u_tcp__DOT__payload_len_rx),32);
    bufp->fullCData(oldp+730,(vlSelfRef.top__DOT__u_payload_fifo__DOT__wr_ptr),8);
    bufp->fullBit(oldp+731,((1U & ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__TCP_control_rx) 
                                   >> 7U))));
    bufp->fullBit(oldp+732,((1U & ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__TCP_control_rx) 
                                   >> 6U))));
    bufp->fullBit(oldp+733,((1U & ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__TCP_control_rx) 
                                   >> 5U))));
    bufp->fullBit(oldp+734,((1U & ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__TCP_control_rx) 
                                   >> 4U))));
    bufp->fullBit(oldp+735,((1U & ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__TCP_control_rx) 
                                   >> 3U))));
    bufp->fullBit(oldp+736,((1U & ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__TCP_control_rx) 
                                   >> 2U))));
    bufp->fullBit(oldp+737,((1U & ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__TCP_control_rx) 
                                   >> 1U))));
    bufp->fullBit(oldp+738,((1U & (IData)(vlSelfRef.top__DOT__u_tcp__DOT__TCP_control_rx))));
    bufp->fullSData(oldp+739,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__bytes_trk),16);
    bufp->fullSData(oldp+740,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nbytes_trk),16);
    bufp->fullIData(oldp+741,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__TCP_checksum),17);
    bufp->fullBit(oldp+742,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nTCP_valid));
    bufp->fullBit(oldp+743,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nrcv_data));
    bufp->fullBit(oldp+744,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__n_nw_segment));
    bufp->fullBit(oldp+745,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nTCP_last));
    bufp->fullCData(oldp+746,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__state),3);
    bufp->fullCData(oldp+747,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__tx_pkg_type),8);
    bufp->fullIData(oldp+748,(vlSelfRef.top__DOT__u_tcp__DOT__seq_num_tx),32);
    bufp->fullIData(oldp+749,(vlSelfRef.top__DOT__u_tcp__DOT__ACK_tx),32);
    bufp->fullBit(oldp+750,(vlSelfRef.top__DOT__u_tcp__DOT__hand_shake_done));
    bufp->fullBit(oldp+751,((1U & vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__tcp_flow__seq_rcv_str)));
    bufp->fullIData(oldp+752,(vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__tcp_flow__seq_rcv_str),32);
    bufp->fullCData(oldp+753,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__state),7);
    bufp->fullBit(oldp+754,((1U & ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__tx_pkg_type) 
                                   >> 7U))));
    bufp->fullBit(oldp+755,((1U & ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__tx_pkg_type) 
                                   >> 6U))));
    bufp->fullBit(oldp+756,((1U & ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__tx_pkg_type) 
                                   >> 5U))));
    bufp->fullBit(oldp+757,((1U & ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__tx_pkg_type) 
                                   >> 4U))));
    bufp->fullBit(oldp+758,((1U & ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__tx_pkg_type) 
                                   >> 3U))));
    bufp->fullBit(oldp+759,((1U & ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__tx_pkg_type) 
                                   >> 2U))));
    bufp->fullBit(oldp+760,((1U & ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__tx_pkg_type) 
                                   >> 1U))));
    bufp->fullBit(oldp+761,((1U & (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__tx_pkg_type))));
    bufp->fullCData(oldp+762,((7U & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__ack_num 
                                             >> 0x20U)))),3);
    bufp->fullIData(oldp+763,((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__ack_num)),32);
    bufp->fullBit(oldp+764,((1U & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_num 
                                           >> 0x20U)))));
    bufp->fullIData(oldp+765,((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_num)),32);
    bufp->fullSData(oldp+766,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__window_size),16);
    bufp->fullIData(oldp+767,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
                                << 0xfU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[1U] 
                                            >> 0x11U))),32);
    bufp->fullSData(oldp+768,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[1U] 
                                          >> 1U))),16);
    bufp->fullSData(oldp+769,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[1U] 
                                           << 0xfU) 
                                          | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0U] 
                                             >> 0x11U)))),16);
    bufp->fullSData(oldp+770,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0U] 
                                          >> 1U))),16);
    bufp->fullBit(oldp+771,((1U & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0U])));
    bufp->fullIData(oldp+772,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U] 
                                << 0x1eU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[4U] 
                                             >> 2U))),32);
    bufp->fullSData(oldp+773,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[4U] 
                                           << 0xeU) 
                                          | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[3U] 
                                             >> 0x12U)))),16);
    bufp->fullSData(oldp+774,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[3U] 
                                          >> 2U))),16);
    bufp->fullSData(oldp+775,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[3U] 
                                           << 0xeU) 
                                          | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
                                             >> 0x12U)))),16);
    bufp->fullBit(oldp+776,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
                                   >> 0x11U))));
    bufp->fullIData(oldp+777,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[7U] 
                                << 0xdU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[6U] 
                                            >> 0x13U))),32);
    bufp->fullSData(oldp+778,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[6U] 
                                          >> 3U))),16);
    bufp->fullSData(oldp+779,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[6U] 
                                           << 0xdU) 
                                          | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U] 
                                             >> 0x13U)))),16);
    bufp->fullSData(oldp+780,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U] 
                                          >> 3U))),16);
    bufp->fullBit(oldp+781,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U] 
                                   >> 2U))));
    bufp->fullIData(oldp+782,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                                << 0x1cU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[9U] 
                                             >> 4U))),32);
    bufp->fullSData(oldp+783,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[9U] 
                                           << 0xcU) 
                                          | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[8U] 
                                             >> 0x14U)))),16);
    bufp->fullSData(oldp+784,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[8U] 
                                          >> 4U))),16);
    bufp->fullSData(oldp+785,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[8U] 
                                           << 0xcU) 
                                          | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[7U] 
                                             >> 0x14U)))),16);
    bufp->fullBit(oldp+786,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[7U] 
                                   >> 0x13U))));
    bufp->fullIData(oldp+787,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                                << 0xbU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                            >> 0x15U))),32);
    bufp->fullSData(oldp+788,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                          >> 5U))),16);
    bufp->fullSData(oldp+789,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                           << 0xbU) 
                                          | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                                             >> 0x15U)))),16);
    bufp->fullSData(oldp+790,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                                          >> 5U))),16);
    bufp->fullBit(oldp+791,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                                   >> 4U))));
    bufp->fullIData(oldp+792,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                                << 0x1aU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                             >> 6U))),32);
    bufp->fullSData(oldp+793,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                           << 0xaU) 
                                          | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xdU] 
                                             >> 0x16U)))),16);
    bufp->fullSData(oldp+794,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xdU] 
                                          >> 6U))),16);
    bufp->fullSData(oldp+795,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xdU] 
                                           << 0xaU) 
                                          | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                                             >> 0x16U)))),16);
    bufp->fullBit(oldp+796,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                                   >> 0x15U))));
    bufp->fullIData(oldp+797,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                                << 9U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                          >> 0x17U))),32);
    bufp->fullSData(oldp+798,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                          >> 7U))),16);
    bufp->fullSData(oldp+799,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                           << 9U) | 
                                          (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                                           >> 0x17U)))),16);
    bufp->fullSData(oldp+800,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                                          >> 7U))),16);
    bufp->fullBit(oldp+801,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                                   >> 6U))));
    bufp->fullIData(oldp+802,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                                << 0x18U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                             >> 8U))),32);
    bufp->fullSData(oldp+803,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                           << 8U) | 
                                          (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x12U] 
                                           >> 0x18U)))),16);
    bufp->fullSData(oldp+804,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x12U] 
                                          >> 8U))),16);
    bufp->fullSData(oldp+805,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x12U] 
                                           << 8U) | 
                                          (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                                           >> 0x18U)))),16);
    bufp->fullBit(oldp+806,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                                   >> 0x17U))));
    bufp->fullIData(oldp+807,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                << 7U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                          >> 0x19U))),32);
    bufp->fullSData(oldp+808,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                          >> 9U))),16);
    bufp->fullSData(oldp+809,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                           << 7U) | 
                                          (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                                           >> 0x19U)))),16);
    bufp->fullSData(oldp+810,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                                          >> 9U))),16);
    bufp->fullBit(oldp+811,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                                   >> 8U))));
    bufp->fullIData(oldp+812,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                                << 0x16U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                             >> 0xaU))),32);
    bufp->fullSData(oldp+813,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                           << 6U) | 
                                          (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x17U] 
                                           >> 0x1aU)))),16);
    bufp->fullSData(oldp+814,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x17U] 
                                          >> 0xaU))),16);
    bufp->fullSData(oldp+815,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x17U] 
                                           << 6U) | 
                                          (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                           >> 0x1aU)))),16);
    bufp->fullBit(oldp+816,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                   >> 0x19U))));
    bufp->fullIData(oldp+817,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                << 5U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                          >> 0x1bU))),32);
    bufp->fullSData(oldp+818,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                          >> 0xbU))),16);
    bufp->fullSData(oldp+819,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                           << 5U) | 
                                          (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                                           >> 0x1bU)))),16);
    bufp->fullSData(oldp+820,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                                          >> 0xbU))),16);
    bufp->fullBit(oldp+821,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                                   >> 0xaU))));
    bufp->fullIData(oldp+822,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                                << 0x14U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                             >> 0xcU))),32);
    bufp->fullSData(oldp+823,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                           << 4U) | 
                                          (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1cU] 
                                           >> 0x1cU)))),16);
    bufp->fullSData(oldp+824,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1cU] 
                                          >> 0xcU))),16);
    bufp->fullSData(oldp+825,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1cU] 
                                           << 4U) | 
                                          (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                           >> 0x1cU)))),16);
    bufp->fullBit(oldp+826,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                   >> 0x1bU))));
    bufp->fullIData(oldp+827,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                << 3U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                          >> 0x1dU))),32);
    bufp->fullSData(oldp+828,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                          >> 0xdU))),16);
    bufp->fullSData(oldp+829,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                           << 3U) | 
                                          (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                                           >> 0x1dU)))),16);
    bufp->fullSData(oldp+830,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                                          >> 0xdU))),16);
    bufp->fullBit(oldp+831,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                                   >> 0xcU))));
    bufp->fullIData(oldp+832,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                                << 0x12U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                             >> 0xeU))),32);
    bufp->fullSData(oldp+833,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                           << 2U) | 
                                          (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x21U] 
                                           >> 0x1eU)))),16);
    bufp->fullSData(oldp+834,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x21U] 
                                          >> 0xeU))),16);
    bufp->fullSData(oldp+835,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x21U] 
                                           << 2U) | 
                                          (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                           >> 0x1eU)))),16);
    bufp->fullBit(oldp+836,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                   >> 0x1dU))));
    bufp->fullIData(oldp+837,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                                << 1U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                          >> 0x1fU))),32);
    bufp->fullSData(oldp+838,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                          >> 0xfU))),16);
    bufp->fullSData(oldp+839,((0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                           << 1U) | 
                                          (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                                           >> 0x1fU)))),16);
    bufp->fullSData(oldp+840,((0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                                          >> 0xfU))),16);
    bufp->fullBit(oldp+841,((1U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                                   >> 0xeU))));
    bufp->fullIData(oldp+842,(((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x28U] 
                                << 0x10U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x27U] 
                                             >> 0x10U))),32);
    bufp->fullSData(oldp+843,((0xffffU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x27U])),16);
    bufp->fullSData(oldp+844,((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x26U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+845,((0xffffU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x26U])),16);
    bufp->fullBit(oldp+846,((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                             >> 0x1fU)));
    bufp->fullIData(oldp+847,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__rcv_next),32);
    bufp->fullCData(oldp+848,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx),4);
    bufp->fullCData(oldp+849,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__match_idx),4);
    bufp->fullSData(oldp+850,((((((0x8000U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                                              >> 0x10U)) 
                                  | (0x4000U & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x23U])) 
                                 | ((0x2000U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                                >> 0x10U)) 
                                    | (0x1000U & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1eU]))) 
                                | (((0x800U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                               >> 0x10U)) 
                                    | (0x400U & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x19U])) 
                                   | ((0x200U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                                 >> 0x10U)) 
                                      | (0x100U & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x14U])))) 
                               | ((((0x80U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                                              >> 0x10U)) 
                                    | (0x40U & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xfU])) 
                                   | ((0x20U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                                                >> 0x10U)) 
                                      | (0x10U & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xaU]))) 
                                  | (((8U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[7U] 
                                             >> 0x10U)) 
                                      | (4U & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U])) 
                                     | ((2U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
                                               >> 0x10U)) 
                                        | (1U & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0U])))))),16);
    bufp->fullSData(oldp+851,((0xffffU & (~ (((((0x8000U 
                                                 & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                                                    >> 0x10U)) 
                                                | (0x4000U 
                                                   & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x23U])) 
                                               | ((0x2000U 
                                                   & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                                      >> 0x10U)) 
                                                  | (0x1000U 
                                                     & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1eU]))) 
                                              | (((0x800U 
                                                   & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                                      >> 0x10U)) 
                                                  | (0x400U 
                                                     & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x19U])) 
                                                 | ((0x200U 
                                                     & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                                        >> 0x10U)) 
                                                    | (0x100U 
                                                       & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x14U])))) 
                                             | ((((0x80U 
                                                   & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                                                      >> 0x10U)) 
                                                  | (0x40U 
                                                     & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xfU])) 
                                                 | ((0x20U 
                                                     & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                                                        >> 0x10U)) 
                                                    | (0x10U 
                                                       & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xaU]))) 
                                                | (((8U 
                                                     & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[7U] 
                                                        >> 0x10U)) 
                                                    | (4U 
                                                       & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U])) 
                                                   | ((2U 
                                                       & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
                                                          >> 0x10U)) 
                                                      | (1U 
                                                         & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0U])))))))),16);
    bufp->fullBit(oldp+852,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask));
    bufp->fullBit(oldp+853,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__match_found));
    bufp->fullSData(oldp+854,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__match_mask),16);
    bufp->fullCData(oldp+855,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_ptr),4);
    bufp->fullCData(oldp+856,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_ptr),4);
    bufp->fullCData(oldp+857,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr),4);
    bufp->fullIData(oldp+858,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk),32);
    bufp->fullCData(oldp+859,((0xfU & (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_list))),4);
    bufp->fullCData(oldp+860,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_list 
                                               >> 4U)))),4);
    bufp->fullCData(oldp+861,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_list 
                                               >> 8U)))),4);
    bufp->fullCData(oldp+862,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_list 
                                               >> 0xcU)))),4);
    bufp->fullCData(oldp+863,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_list 
                                               >> 0x10U)))),4);
    bufp->fullCData(oldp+864,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_list 
                                               >> 0x14U)))),4);
    bufp->fullCData(oldp+865,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_list 
                                               >> 0x18U)))),4);
    bufp->fullCData(oldp+866,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_list 
                                               >> 0x1cU)))),4);
    bufp->fullCData(oldp+867,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_list 
                                               >> 0x20U)))),4);
    bufp->fullCData(oldp+868,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_list 
                                               >> 0x24U)))),4);
    bufp->fullCData(oldp+869,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_list 
                                               >> 0x28U)))),4);
    bufp->fullCData(oldp+870,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_list 
                                               >> 0x2cU)))),4);
    bufp->fullCData(oldp+871,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_list 
                                               >> 0x30U)))),4);
    bufp->fullCData(oldp+872,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_list 
                                               >> 0x34U)))),4);
    bufp->fullCData(oldp+873,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_list 
                                               >> 0x38U)))),4);
    bufp->fullCData(oldp+874,((0xfU & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_list 
                                               >> 0x3cU)))),4);
    bufp->fullBit(oldp+875,(vlSelfRef.top__DOT__out_order_req_int));
    bufp->fullBit(oldp+876,(vlSelfRef.top__DOT__TCP_stop_flg_int));
    bufp->fullBit(oldp+877,(vlSelfRef.top__DOT__u_fifo_tx__DOT__nout_order_req_l));
    bufp->fullIData(oldp+878,(vlSelfRef.top__DOT__u_tcp__DOT__TCP_tx__DOT__nbytes_sent),32);
    bufp->fullIData(oldp+879,(vlSelfRef.top__DOT__u_tcp__DOT__TCP_tx__DOT__nTCP_checksum),17);
    bufp->fullCData(oldp+880,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nstate),7);
    bufp->fullCData(oldp+881,((7U & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nack_num 
                                             >> 0x20U)))),3);
    bufp->fullIData(oldp+882,((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nack_num)),32);
    bufp->fullBit(oldp+883,((1U & (IData)((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nseq_num 
                                           >> 0x20U)))));
    bufp->fullIData(oldp+884,((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nseq_num)),32);
    bufp->fullSData(oldp+885,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nwindow_size),16);
    bufp->fullIData(oldp+886,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__wnd_allow),32);
    bufp->fullBit(oldp+887,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nhand_shake_done));
    bufp->fullIData(oldp+888,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nseq_rcv_str),32);
    bufp->fullBit(oldp+889,(vlSelfRef.CLK));
    bufp->fullBit(oldp+890,(vlSelfRef.nRST));
    bufp->fullBit(oldp+891,(vlSelfRef.IP_valid));
    bufp->fullBit(oldp+892,(vlSelfRef.IP_flush));
    bufp->fullSData(oldp+893,(vlSelfRef.IP_pseuder),16);
    bufp->fullQData(oldp+894,(vlSelfRef.IP_payload),64);
    bufp->fullSData(oldp+896,(vlSelfRef.TCP_len),16);
    bufp->fullCData(oldp+897,(vlSelfRef.IP_bytes_rcv),8);
    bufp->fullBit(oldp+898,(vlSelfRef.TCP_send));
    bufp->fullQData(oldp+899,(vlSelfRef.TCP_transmit),64);
    bufp->fullBit(oldp+901,(vlSelfRef.TX_en));
    bufp->fullBit(oldp+902,(vlSelfRef.axis_last));
    bufp->fullBit(oldp+903,(vlSelfRef.wr_FIFO_en));
    bufp->fullIData(oldp+904,(vlSelfRef.len_seq),32);
    bufp->fullQData(oldp+905,(vlSelfRef.soupbin_TCP_payload),64);
    bufp->fullBit(oldp+907,(vlSelfRef.axis_r_en));
    bufp->fullBit(oldp+908,(vlSelfRef.axis_r_valid));
    bufp->fullQData(oldp+909,(vlSelfRef.axis_rd_data),64);
    bufp->fullBit(oldp+911,(vlSelfRef.TCP_stop_flag));
    bufp->fullIData(oldp+912,(vlSelfRef.rcv_next),32);
    bufp->fullIData(oldp+913,(vlSelfRef.seq_num),32);
    bufp->fullBit(oldp+914,(vlSelfRef.wr_FIFO_full));
    bufp->fullBit(oldp+915,(vlSelfRef.top__DOT__TCP_flush_int));
    bufp->fullIData(oldp+916,(vlSelfRef.top__DOT__u_tcp__DOT__ISN_num),32);
    bufp->fullIData(oldp+917,(((vlSelfRef.seq_num + (IData)(vlSelfRef.top__DOT__bytes_abt_sent_int)) 
                               - ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__ack_num) 
                                  - vlSelfRef.top__DOT__u_tcp__DOT__ISN_num))),32);
    bufp->fullSData(oldp+918,(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask),16);
}
