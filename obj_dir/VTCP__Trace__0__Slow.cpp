// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VTCP__Syms.h"


VL_ATTR_COLD void VTCP___024root__trace_init_sub__TOP__0(VTCP___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTCP___024root__trace_init_sub__TOP__0\n"); );
    VTCP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+303,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+304,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+305,0,"TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+306,0,"IP_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+307,0,"IP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+308,0,"IP_pseuder",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+309,0,"IP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+311,0,"TCP_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+312,0,"IP_bytes_rcv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+313,0,"nw_segment",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+314,0,"axis_t_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+315,0,"TCP_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+316,0,"axis_data_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+318,0,"handshake_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+319,0,"seq_rcv_start",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+320,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+321,0,"wr_FIFO_offset",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+322,0,"rd_FIFO_valid_rcv",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+323,0,"rd_FIFO_ptr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+324,0,"rd_FIFO_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+325,0,"wr_ptr_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+326,0,"wr_FIFO_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+327,0,"rd_FIFO_en_rcv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+328,0,"seq_rx_FIFO_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+329,0,"full",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+330,0,"ACK_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+331,0,"ACK_rcv_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+332,0,"out_order_req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+333,0,"TCP_stop_flg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+334,0,"end_ss",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+335,0,"rd_FIFO_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+337,0,"rd_FIFO_valid_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+338,0,"rd_FIFO_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+339,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+340,0,"rd_FIFO_en_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+341,0,"TCP_send",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+342,0,"TCP_transmit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+344,0,"re_trans",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+345,0,"checksum_re_trans",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+346,0,"rcv_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+347,0,"seq_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("TCP", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+358,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+359,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+360,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+360,0,"WORD_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+361,0,"FIFO_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+362,0,"WINDOW_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+303,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+304,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+305,0,"TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+306,0,"IP_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+307,0,"IP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+308,0,"IP_pseuder",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+309,0,"IP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+311,0,"TCP_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+312,0,"IP_bytes_rcv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+313,0,"nw_segment",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+314,0,"axis_t_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+315,0,"TCP_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+316,0,"axis_data_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+318,0,"handshake_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+319,0,"seq_rcv_start",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+320,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+321,0,"wr_FIFO_offset",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+322,0,"rd_FIFO_valid_rcv",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+323,0,"rd_FIFO_ptr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+324,0,"rd_FIFO_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+325,0,"wr_ptr_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+326,0,"wr_FIFO_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+327,0,"rd_FIFO_en_rcv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+328,0,"seq_rx_FIFO_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+329,0,"full",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+330,0,"ACK_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+331,0,"ACK_rcv_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+332,0,"out_order_req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+333,0,"TCP_stop_flg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+334,0,"end_ss",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+335,0,"rd_FIFO_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+337,0,"rd_FIFO_valid_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+338,0,"rd_FIFO_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+339,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+340,0,"rd_FIFO_en_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+341,0,"TCP_send",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+342,0,"TCP_transmit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+344,0,"re_trans",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+345,0,"checksum_re_trans",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+346,0,"rcv_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+347,0,"seq_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+130,0,"rcv_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+131,0,"TCP_control_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+132,0,"seq_num_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"ACK_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"offset_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+135,0,"window_size_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+136,0,"checksum_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+137,0,"urgent_pointer_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+138,0,"payload_len_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+139,0,"seq_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+169,0,"TCP_control_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+170,0,"seq_num_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"ACK_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+348,0,"ISN_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"bytes_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+363,0,"offset_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+349,0,"window_size_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+364,0,"urgent_pointer_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+350,0,"TCP_basesum_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+141,0,"TCP_checksum_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+365,0,"timeout_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"hand_shake_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"seq_rcv_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+366,0,"wr_FIFO_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+367,0,"axis_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ISN_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+368,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+303,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+304,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+369,0,"gen_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+348,0,"ISN_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("TCP_tx", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+358,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+370,0,"OFF_SET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+371,0,"SRC_PORT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+372,0,"DEST_PORT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+303,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+304,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+169,0,"TCP_control_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+170,0,"seq_num_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"ACK_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+363,0,"offset_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+349,0,"window_size_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+364,0,"urgent_pointer_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+340,0,"rd_FIFO_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+337,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+338,0,"rd_FIFO_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+335,0,"rd_FIFO_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+351,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+139,0,"seq_up",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+140,0,"bytes_sent",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+341,0,"TCP_send",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"TCP_tx_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"TCP_tx_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+342,0,"TCP_transmit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+350,0,"TCP_basesum_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+371,0,"src_port",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+372,0,"dest_port",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+15,0,"nbytes_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"TCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+16,0,"nTCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBit(c+147,0,"valid_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+148,0,"state",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1,0,"nstate",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declQuad(c+17,0,"nTCP_transmit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+144,0,"nTCP_tx_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"nTCP_tx_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"nseq_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+358,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+303,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+304,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+369,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+320,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+367,0,"axis_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+335,0,"TCP_payload_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+305,0,"TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+344,0,"re_trans",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+149,0,"TCP_checksum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+19,0,"nTCP_checksum_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+150,0,"TCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+20,0,"nTCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+151,0,"TCP_checksum_send",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+21,0,"nTCP_checksum_send",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+22,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+23,0,"temp1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+352,0,"up_send",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("tcp_flow", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+373,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+374,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+375,0,"FIFO_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+376,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+377,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"rcv_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+131,0,"TCP_control_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+132,0,"seq_num_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"ACK_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"offset_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+135,0,"window_size_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+136,0,"checksum_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+137,0,"urgent_pointer_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+334,0,"end_ss",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"seq_up",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+169,0,"TCP_control_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+170,0,"seq_num_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"ACK_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+363,0,"offset_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+349,0,"window_size_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+364,0,"urgent_pointer_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+333,0,"TCP_stop_flg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+329,0,"full",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+365,0,"timeout_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"hand_shake_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+174,0,"seq_rcv_str",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+348,0,"ISN_num",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"bytes_sent",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+351,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+152,0,"payload_len_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+314,0,"TCP_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+346,0,"rcv_next_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+347,0,"seq_num_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+328,0,"seq_rx_FIFO_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+312,0,"TCP_bytes_trk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+321,0,"wr_FIFO_offset",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+353,0,"wr_FIFO_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+354,0,"rd_FIFO_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+378,0,"wr_FIFO_ptr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+355,0,"rd_FIFO_ptr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+320,0,"wr_FIFO_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+327,0,"rd_FIFO_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+313,0,"nw_segment",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+315,0,"TCP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+322,0,"rd_FIFO_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+330,0,"ACK_num",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+331,0,"ACK_rcv_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+332,0,"out_order_req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"case_bug",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+25,0,"case_bug_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+175,0,"state",3, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+297,0,"nstate",3, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("rcv_pkg_type", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+153,0,"CWR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"ECE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"URG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"ACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"PSH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"RST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"SYN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"FIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("tx_pkg_type", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+176,0,"CWR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"ECE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"URG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"ACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"PSH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"RST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"SYN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"FIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("ack_num", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+184,0,"dup_chk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+185,0,"ACK_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("nack_num", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+298,0,"dup_chk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+299,0,"ACK_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("seq_num", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+186,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+187,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("nseq_num", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+26,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->declBus(c+188,0,"window_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+300,0,"nwindow_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+356,0,"bytes_in_flight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"wnd_allow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+301,0,"nhand_shake_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+302,0,"nseq_rcv_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("nTCP_order", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+29,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+31,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+32,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+33,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+34,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+36,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+37,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+38,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+39,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+41,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+42,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+43,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+44,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+46,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+47,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+48,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+49,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+51,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+52,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+53,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+54,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+56,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+57,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+58,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+59,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+61,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+62,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+63,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+64,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+66,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+67,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+68,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+69,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+71,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+72,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+73,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+74,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+76,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+77,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+78,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+79,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+81,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+82,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+83,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+84,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+86,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+87,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+88,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+89,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+91,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+92,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+93,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+94,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+96,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+97,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+98,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+99,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+101,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+102,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+103,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+104,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+106,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+107,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+108,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("TCP_order", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+189,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+191,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+192,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+193,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+194,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+196,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+197,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+198,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+199,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+200,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+201,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+202,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+203,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+204,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+205,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+206,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+207,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+208,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+209,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+210,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+211,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+212,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+213,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+214,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+215,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+216,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+217,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+218,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+219,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+221,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+222,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+223,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+224,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+225,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+226,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+227,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+228,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+229,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+230,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+231,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+232,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+233,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+234,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+235,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+236,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+237,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+238,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+239,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+240,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+241,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+242,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+243,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+244,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+245,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+246,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+247,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+248,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+249,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+250,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+251,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+252,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+253,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+254,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+255,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+256,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+257,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+258,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+259,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+260,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+261,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+262,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+263,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+264,0,"seq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+265,0,"seq_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+266,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+267,0,"length_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+268,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+269,0,"rcv_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"nrcv_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+369,0,"out_of_order_flg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+270,0,"free_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+271,0,"match_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+272,0,"v_vec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+273,0,"free_vec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("seq_vec", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+379,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+380,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+381,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+382,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+383,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+384,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+385,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+386,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+387,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+388,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+389,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+390,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+391,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+392,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+393,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+394,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+395,0,"[16]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+396,0,"[17]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+397,0,"[18]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+398,0,"[19]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+399,0,"[20]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+400,0,"[21]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+401,0,"[22]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+402,0,"[23]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+403,0,"[24]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+404,0,"[25]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+405,0,"[26]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+406,0,"[27]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+407,0,"[28]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+408,0,"[29]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+409,0,"[30]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+410,0,"[31]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->declBit(c+274,0,"free_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+275,0,"match_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+276,0,"match_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+357,0,"overlap_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+277,0,"flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+278,0,"nflush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+279,0,"len_flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+110,0,"nlen_flush_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+280,0,"seq_rx_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"nseq_rx_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"bytes_drop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+113,0,"bytes_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("flush_list", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+281,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+282,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+283,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+284,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+285,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+286,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+287,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+288,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+289,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+290,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+291,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+292,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+293,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+294,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+295,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+296,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("nflush_list", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+114,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+115,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+116,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+117,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+118,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+119,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+120,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+121,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+122,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+123,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+124,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+125,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+126,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+127,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+128,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+129,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("me", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+411,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+369,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+412,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+276,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+275,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+271,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+413,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+411,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+369,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+412,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+273,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+274,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+270,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+413,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+411,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("tcp_rcv", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+358,0,"WORD_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+370,0,"OFF_SET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+371,0,"SRC_PORT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+372,0,"DEST_PORT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+414,0,"IP_HEADER_LENGTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+303,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+304,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+309,0,"IP_payload_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+306,0,"valid_IP_header_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+307,0,"IP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+311,0,"TCP_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+308,0,"IP_pseuder",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+130,0,"rcv_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+131,0,"TCP_control_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+132,0,"seq_num_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"ACK_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"offset_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+135,0,"window_size_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+136,0,"checksum_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+137,0,"urgent_pointer_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+138,0,"TCP_len_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+316,0,"TCP_payload_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+142,0,"TCP_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+315,0,"TCP_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+313,0,"nw_segment",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+314,0,"TCP_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"nTCP_control_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+5,0,"nseq_num_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"nACK_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"noffset_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+8,0,"nwindow_size_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+9,0,"nchecksum_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+10,0,"nurgent_pointer_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+161,0,"bytes_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+162,0,"nbytes_trk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+415,0,"checksum_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+138,0,"nTCP_len_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+163,0,"TCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+11,0,"nTCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+416,0,"TCP_data_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+417,0,"nTCP_data_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+12,0,"nTCP_payload_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+164,0,"nTCP_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"nrcv_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+418,0,"checksum_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+419,0,"nchecksum_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"n_nw_segment",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"nTCP_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+168,0,"state",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+14,0,"nstate",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VTCP___024root__trace_init_top(VTCP___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTCP___024root__trace_init_top\n"); );
    VTCP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VTCP___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VTCP___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void VTCP___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void VTCP___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void VTCP___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void VTCP___024root__trace_register(VTCP___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTCP___024root__trace_register\n"); );
    VTCP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VTCP___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VTCP___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VTCP___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VTCP___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VTCP___024root__trace_const_0_sub_0(VTCP___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void VTCP___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTCP___024root__trace_const_0\n"); );
    // Init
    VTCP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTCP___024root*>(voidSelf);
    VTCP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTCP___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTCP___024root__trace_const_0_sub_0(VTCP___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTCP___024root__trace_const_0_sub_0\n"); );
    VTCP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+358,(0x40U),32);
    bufp->fullIData(oldp+359,(5U),32);
    bufp->fullIData(oldp+360,(8U),32);
    bufp->fullIData(oldp+361,(3U),32);
    bufp->fullIData(oldp+362,(0x28U),32);
    bufp->fullCData(oldp+363,(5U),4);
    bufp->fullSData(oldp+364,(0U),16);
    bufp->fullBit(oldp+365,(vlSelfRef.TCP__DOT__timeout_flag));
    bufp->fullBit(oldp+366,(vlSelfRef.TCP__DOT__wr_FIFO_ptr));
    bufp->fullBit(oldp+367,(vlSelfRef.TCP__DOT__axis_last));
    bufp->fullIData(oldp+368,(0x20U),32);
    bufp->fullBit(oldp+369,(0U));
    bufp->fullIData(oldp+370,(5U),32);
    bufp->fullSData(oldp+371,(0x1234U),16);
    bufp->fullSData(oldp+372,(0x5678U),16);
    bufp->fullIData(oldp+373,(0x10U),32);
    bufp->fullIData(oldp+374,(0x800U),32);
    bufp->fullIData(oldp+375,(0xbU),32);
    bufp->fullBit(oldp+376,(vlSelfRef.TCP__DOT__tcp_flow__DOT__CLK));
    bufp->fullBit(oldp+377,(vlSelfRef.TCP__DOT__tcp_flow__DOT__nRST));
    bufp->fullSData(oldp+378,(vlSelfRef.TCP__DOT__wr_FIFO_ptr),11);
    bufp->fullSData(oldp+379,((0xffffU & vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_vec[0U])),16);
    bufp->fullSData(oldp+380,((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_vec[0U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+381,((0xffffU & vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_vec[1U])),16);
    bufp->fullSData(oldp+382,((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_vec[1U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+383,((0xffffU & vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_vec[2U])),16);
    bufp->fullSData(oldp+384,((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_vec[2U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+385,((0xffffU & vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_vec[3U])),16);
    bufp->fullSData(oldp+386,((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_vec[3U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+387,((0xffffU & vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_vec[4U])),16);
    bufp->fullSData(oldp+388,((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_vec[4U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+389,((0xffffU & vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_vec[5U])),16);
    bufp->fullSData(oldp+390,((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_vec[5U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+391,((0xffffU & vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_vec[6U])),16);
    bufp->fullSData(oldp+392,((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_vec[6U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+393,((0xffffU & vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_vec[7U])),16);
    bufp->fullSData(oldp+394,((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_vec[7U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+395,((0xffffU & vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_vec[8U])),16);
    bufp->fullSData(oldp+396,((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_vec[8U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+397,((0xffffU & vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_vec[9U])),16);
    bufp->fullSData(oldp+398,((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_vec[9U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+399,((0xffffU & vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_vec[0xaU])),16);
    bufp->fullSData(oldp+400,((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_vec[0xaU] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+401,((0xffffU & vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_vec[0xbU])),16);
    bufp->fullSData(oldp+402,((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_vec[0xbU] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+403,((0xffffU & vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_vec[0xcU])),16);
    bufp->fullSData(oldp+404,((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_vec[0xcU] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+405,((0xffffU & vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_vec[0xdU])),16);
    bufp->fullSData(oldp+406,((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_vec[0xdU] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+407,((0xffffU & vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_vec[0xeU])),16);
    bufp->fullSData(oldp+408,((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_vec[0xeU] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+409,((0xffffU & vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_vec[0xfU])),16);
    bufp->fullSData(oldp+410,((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_vec[0xfU] 
                               >> 0x10U)),16);
    bufp->fullIData(oldp+411,(0x10U),32);
    bufp->fullIData(oldp+412,(4U),32);
    bufp->fullIData(oldp+413,(0x10U),32);
    bufp->fullIData(oldp+414,(0x14U),32);
    bufp->fullSData(oldp+415,(vlSelfRef.TCP__DOT__tcp_rcv__DOT__checksum_in),16);
    bufp->fullCData(oldp+416,(vlSelfRef.TCP__DOT__tcp_rcv__DOT__TCP_data_dl),8);
    bufp->fullCData(oldp+417,(vlSelfRef.TCP__DOT__tcp_rcv__DOT__nTCP_data_dl),8);
    bufp->fullBit(oldp+418,(vlSelfRef.TCP__DOT__tcp_rcv__DOT__checksum_en));
    bufp->fullBit(oldp+419,(vlSelfRef.TCP__DOT__tcp_rcv__DOT__nchecksum_en));
}

VL_ATTR_COLD void VTCP___024root__trace_full_0_sub_0(VTCP___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void VTCP___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTCP___024root__trace_full_0\n"); );
    // Init
    VTCP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTCP___024root*>(voidSelf);
    VTCP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTCP___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTCP___024root__trace_full_0_sub_0(VTCP___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTCP___024root__trace_full_0_sub_0\n"); );
    VTCP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.TCP__DOT__TCP_tx__DOT__nstate),7);
    bufp->fullBit(oldp+2,(vlSelfRef.TCP__DOT__TCP_tx__DOT__nTCP_tx_last));
    bufp->fullBit(oldp+3,(vlSelfRef.TCP__DOT__TCP_tx__DOT__nseq_up));
    bufp->fullCData(oldp+4,(vlSelfRef.TCP__DOT__tcp_rcv__DOT__nTCP_control_rx),8);
    bufp->fullIData(oldp+5,(vlSelfRef.TCP__DOT__tcp_rcv__DOT__nseq_num_rx),32);
    bufp->fullIData(oldp+6,(vlSelfRef.TCP__DOT__tcp_rcv__DOT__nACK_rx),32);
    bufp->fullCData(oldp+7,(vlSelfRef.TCP__DOT__tcp_rcv__DOT__noffset_rx),4);
    bufp->fullSData(oldp+8,(vlSelfRef.TCP__DOT__tcp_rcv__DOT__nwindow_size_rx),16);
    bufp->fullSData(oldp+9,(vlSelfRef.TCP__DOT__tcp_rcv__DOT__nchecksum_rx),16);
    bufp->fullSData(oldp+10,(vlSelfRef.TCP__DOT__tcp_rcv__DOT__nurgent_pointer_rx),16);
    bufp->fullIData(oldp+11,(vlSelfRef.TCP__DOT__tcp_rcv__DOT__nTCP_checksum),17);
    bufp->fullQData(oldp+12,(vlSelfRef.TCP__DOT__tcp_rcv__DOT__nTCP_payload_rx),64);
    bufp->fullCData(oldp+14,(vlSelfRef.TCP__DOT__tcp_rcv__DOT__nstate),3);
    bufp->fullIData(oldp+15,(vlSelfRef.TCP__DOT__TCP_tx__DOT__nbytes_sent),32);
    bufp->fullIData(oldp+16,(vlSelfRef.TCP__DOT__TCP_tx__DOT__nTCP_checksum),17);
    bufp->fullQData(oldp+17,(vlSelfRef.TCP__DOT__TCP_tx__DOT__nTCP_transmit),64);
    bufp->fullSData(oldp+19,(vlSelfRef.TCP__DOT__inst__DOT__nTCP_checksum_out),16);
    bufp->fullIData(oldp+20,(vlSelfRef.TCP__DOT__inst__DOT__nTCP_checksum),17);
    bufp->fullIData(oldp+21,(vlSelfRef.TCP__DOT__inst__DOT__nTCP_checksum_send),17);
    bufp->fullIData(oldp+22,(vlSelfRef.TCP__DOT__inst__DOT__temp),20);
    bufp->fullIData(oldp+23,(vlSelfRef.TCP__DOT__inst__DOT__temp1),20);
    bufp->fullCData(oldp+24,(vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug),2);
    bufp->fullBit(oldp+25,(vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug_0));
    bufp->fullBit(oldp+26,((1U & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_num 
                                          >> 0x20U)))));
    bufp->fullIData(oldp+27,((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_num)),32);
    bufp->fullIData(oldp+28,(vlSelfRef.TCP__DOT__tcp_flow__DOT__wnd_allow),32);
    bufp->fullIData(oldp+29,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[2U] 
                               << 0xfU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[1U] 
                                           >> 0x11U))),32);
    bufp->fullSData(oldp+30,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[1U] 
                                         >> 1U))),16);
    bufp->fullSData(oldp+31,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[1U] 
                                          << 0xfU) 
                                         | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0U] 
                                            >> 0x11U)))),16);
    bufp->fullSData(oldp+32,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0U] 
                                         >> 1U))),16);
    bufp->fullBit(oldp+33,((1U & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0U])));
    bufp->fullIData(oldp+34,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[5U] 
                               << 0x1eU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[4U] 
                                            >> 2U))),32);
    bufp->fullSData(oldp+35,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[4U] 
                                          << 0xeU) 
                                         | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[3U] 
                                            >> 0x12U)))),16);
    bufp->fullSData(oldp+36,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[3U] 
                                         >> 2U))),16);
    bufp->fullSData(oldp+37,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[3U] 
                                          << 0xeU) 
                                         | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[2U] 
                                            >> 0x12U)))),16);
    bufp->fullBit(oldp+38,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[2U] 
                                  >> 0x11U))));
    bufp->fullIData(oldp+39,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[7U] 
                               << 0xdU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[6U] 
                                           >> 0x13U))),32);
    bufp->fullSData(oldp+40,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[6U] 
                                         >> 3U))),16);
    bufp->fullSData(oldp+41,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[6U] 
                                          << 0xdU) 
                                         | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[5U] 
                                            >> 0x13U)))),16);
    bufp->fullSData(oldp+42,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[5U] 
                                         >> 3U))),16);
    bufp->fullBit(oldp+43,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[5U] 
                                  >> 2U))));
    bufp->fullIData(oldp+44,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0xaU] 
                               << 0x1cU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[9U] 
                                            >> 4U))),32);
    bufp->fullSData(oldp+45,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[9U] 
                                          << 0xcU) 
                                         | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[8U] 
                                            >> 0x14U)))),16);
    bufp->fullSData(oldp+46,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[8U] 
                                         >> 4U))),16);
    bufp->fullSData(oldp+47,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[8U] 
                                          << 0xcU) 
                                         | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[7U] 
                                            >> 0x14U)))),16);
    bufp->fullBit(oldp+48,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[7U] 
                                  >> 0x13U))));
    bufp->fullIData(oldp+49,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0xcU] 
                               << 0xbU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0xbU] 
                                           >> 0x15U))),32);
    bufp->fullSData(oldp+50,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0xbU] 
                                         >> 5U))),16);
    bufp->fullSData(oldp+51,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0xbU] 
                                          << 0xbU) 
                                         | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0xaU] 
                                            >> 0x15U)))),16);
    bufp->fullSData(oldp+52,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0xaU] 
                                         >> 5U))),16);
    bufp->fullBit(oldp+53,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0xaU] 
                                  >> 4U))));
    bufp->fullIData(oldp+54,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0xfU] 
                               << 0x1aU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0xeU] 
                                            >> 6U))),32);
    bufp->fullSData(oldp+55,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0xeU] 
                                          << 0xaU) 
                                         | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0xdU] 
                                            >> 0x16U)))),16);
    bufp->fullSData(oldp+56,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0xdU] 
                                         >> 6U))),16);
    bufp->fullSData(oldp+57,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0xdU] 
                                          << 0xaU) 
                                         | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0xcU] 
                                            >> 0x16U)))),16);
    bufp->fullBit(oldp+58,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0xcU] 
                                  >> 0x15U))));
    bufp->fullIData(oldp+59,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x11U] 
                               << 9U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x10U] 
                                         >> 0x17U))),32);
    bufp->fullSData(oldp+60,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x10U] 
                                         >> 7U))),16);
    bufp->fullSData(oldp+61,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x10U] 
                                          << 9U) | 
                                         (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0xfU] 
                                          >> 0x17U)))),16);
    bufp->fullSData(oldp+62,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0xfU] 
                                         >> 7U))),16);
    bufp->fullBit(oldp+63,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0xfU] 
                                  >> 6U))));
    bufp->fullIData(oldp+64,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x14U] 
                               << 0x18U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x13U] 
                                            >> 8U))),32);
    bufp->fullSData(oldp+65,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x13U] 
                                          << 8U) | 
                                         (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x12U] 
                                          >> 0x18U)))),16);
    bufp->fullSData(oldp+66,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x12U] 
                                         >> 8U))),16);
    bufp->fullSData(oldp+67,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x12U] 
                                          << 8U) | 
                                         (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x11U] 
                                          >> 0x18U)))),16);
    bufp->fullBit(oldp+68,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x11U] 
                                  >> 0x17U))));
    bufp->fullIData(oldp+69,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x16U] 
                               << 7U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x15U] 
                                         >> 0x19U))),32);
    bufp->fullSData(oldp+70,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x15U] 
                                         >> 9U))),16);
    bufp->fullSData(oldp+71,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x15U] 
                                          << 7U) | 
                                         (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x14U] 
                                          >> 0x19U)))),16);
    bufp->fullSData(oldp+72,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x14U] 
                                         >> 9U))),16);
    bufp->fullBit(oldp+73,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x14U] 
                                  >> 8U))));
    bufp->fullIData(oldp+74,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x19U] 
                               << 0x16U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x18U] 
                                            >> 0xaU))),32);
    bufp->fullSData(oldp+75,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x18U] 
                                          << 6U) | 
                                         (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x17U] 
                                          >> 0x1aU)))),16);
    bufp->fullSData(oldp+76,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x17U] 
                                         >> 0xaU))),16);
    bufp->fullSData(oldp+77,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x17U] 
                                          << 6U) | 
                                         (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x16U] 
                                          >> 0x1aU)))),16);
    bufp->fullBit(oldp+78,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x16U] 
                                  >> 0x19U))));
    bufp->fullIData(oldp+79,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x1bU] 
                               << 5U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x1aU] 
                                         >> 0x1bU))),32);
    bufp->fullSData(oldp+80,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x1aU] 
                                         >> 0xbU))),16);
    bufp->fullSData(oldp+81,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x1aU] 
                                          << 5U) | 
                                         (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x19U] 
                                          >> 0x1bU)))),16);
    bufp->fullSData(oldp+82,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x19U] 
                                         >> 0xbU))),16);
    bufp->fullBit(oldp+83,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x19U] 
                                  >> 0xaU))));
    bufp->fullIData(oldp+84,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x1eU] 
                               << 0x14U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x1dU] 
                                            >> 0xcU))),32);
    bufp->fullSData(oldp+85,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x1dU] 
                                          << 4U) | 
                                         (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x1cU] 
                                          >> 0x1cU)))),16);
    bufp->fullSData(oldp+86,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x1cU] 
                                         >> 0xcU))),16);
    bufp->fullSData(oldp+87,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x1cU] 
                                          << 4U) | 
                                         (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x1bU] 
                                          >> 0x1cU)))),16);
    bufp->fullBit(oldp+88,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x1bU] 
                                  >> 0x1bU))));
    bufp->fullIData(oldp+89,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x20U] 
                               << 3U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x1fU] 
                                         >> 0x1dU))),32);
    bufp->fullSData(oldp+90,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x1fU] 
                                         >> 0xdU))),16);
    bufp->fullSData(oldp+91,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x1fU] 
                                          << 3U) | 
                                         (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x1eU] 
                                          >> 0x1dU)))),16);
    bufp->fullSData(oldp+92,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x1eU] 
                                         >> 0xdU))),16);
    bufp->fullBit(oldp+93,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x1eU] 
                                  >> 0xcU))));
    bufp->fullIData(oldp+94,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x23U] 
                               << 0x12U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x22U] 
                                            >> 0xeU))),32);
    bufp->fullSData(oldp+95,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x22U] 
                                          << 2U) | 
                                         (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x21U] 
                                          >> 0x1eU)))),16);
    bufp->fullSData(oldp+96,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x21U] 
                                         >> 0xeU))),16);
    bufp->fullSData(oldp+97,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x21U] 
                                          << 2U) | 
                                         (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x20U] 
                                          >> 0x1eU)))),16);
    bufp->fullBit(oldp+98,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x20U] 
                                  >> 0x1dU))));
    bufp->fullIData(oldp+99,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x25U] 
                               << 1U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x24U] 
                                         >> 0x1fU))),32);
    bufp->fullSData(oldp+100,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x24U] 
                                          >> 0xfU))),16);
    bufp->fullSData(oldp+101,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x24U] 
                                           << 1U) | 
                                          (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x23U] 
                                           >> 0x1fU)))),16);
    bufp->fullSData(oldp+102,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x23U] 
                                          >> 0xfU))),16);
    bufp->fullBit(oldp+103,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x23U] 
                                   >> 0xeU))));
    bufp->fullIData(oldp+104,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x28U] 
                                << 0x10U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x27U] 
                                             >> 0x10U))),32);
    bufp->fullSData(oldp+105,((0xffffU & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x27U])),16);
    bufp->fullSData(oldp+106,((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x26U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+107,((0xffffU & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x26U])),16);
    bufp->fullBit(oldp+108,((vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x25U] 
                             >> 0x1fU)));
    bufp->fullIData(oldp+109,(vlSelfRef.TCP__DOT__tcp_flow__DOT__nrcv_next),32);
    bufp->fullCData(oldp+110,(vlSelfRef.TCP__DOT__tcp_flow__DOT__nlen_flush_ptr),8);
    bufp->fullIData(oldp+111,(vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_rx_trk),32);
    bufp->fullCData(oldp+112,(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop),8);
    bufp->fullCData(oldp+113,(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left),8);
    bufp->fullCData(oldp+114,((0xfU & (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list))),4);
    bufp->fullCData(oldp+115,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                                               >> 4U)))),4);
    bufp->fullCData(oldp+116,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                                               >> 8U)))),4);
    bufp->fullCData(oldp+117,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                                               >> 0xcU)))),4);
    bufp->fullCData(oldp+118,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                                               >> 0x10U)))),4);
    bufp->fullCData(oldp+119,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                                               >> 0x14U)))),4);
    bufp->fullCData(oldp+120,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                                               >> 0x18U)))),4);
    bufp->fullCData(oldp+121,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                                               >> 0x1cU)))),4);
    bufp->fullCData(oldp+122,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                                               >> 0x20U)))),4);
    bufp->fullCData(oldp+123,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                                               >> 0x24U)))),4);
    bufp->fullCData(oldp+124,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                                               >> 0x28U)))),4);
    bufp->fullCData(oldp+125,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                                               >> 0x2cU)))),4);
    bufp->fullCData(oldp+126,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                                               >> 0x30U)))),4);
    bufp->fullCData(oldp+127,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                                               >> 0x34U)))),4);
    bufp->fullCData(oldp+128,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                                               >> 0x38U)))),4);
    bufp->fullCData(oldp+129,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                                               >> 0x3cU)))),4);
    bufp->fullBit(oldp+130,(vlSelfRef.TCP__DOT__rcv_data));
    bufp->fullCData(oldp+131,(vlSelfRef.TCP__DOT__TCP_control_rx),8);
    bufp->fullIData(oldp+132,(vlSelfRef.TCP__DOT__seq_num_rx),32);
    bufp->fullIData(oldp+133,(vlSelfRef.TCP__DOT__ACK_rx),32);
    bufp->fullCData(oldp+134,(vlSelfRef.TCP__DOT__offset_rx),4);
    bufp->fullSData(oldp+135,(vlSelfRef.TCP__DOT__window_size_rx),16);
    bufp->fullSData(oldp+136,(vlSelfRef.TCP__DOT__checksum_rx),16);
    bufp->fullSData(oldp+137,(vlSelfRef.TCP__DOT__urgent_pointer_rx),16);
    bufp->fullSData(oldp+138,(vlSelfRef.TCP__DOT__payload_len_rx),16);
    bufp->fullBit(oldp+139,(vlSelfRef.TCP__DOT__seq_up));
    bufp->fullIData(oldp+140,(vlSelfRef.TCP__DOT__bytes_sent),32);
    bufp->fullBit(oldp+141,((1U & (IData)(vlSelfRef.TCP__DOT____Vcellout__inst__TCP_checksum_out))));
    bufp->fullBit(oldp+142,(vlSelfRef.TCP__DOT__rd_FIFO_valid));
    bufp->fullIData(oldp+143,(vlSelfRef.TCP__DOT__ISN_gen__DOT__counter),32);
    bufp->fullBit(oldp+144,(vlSelfRef.TCP__DOT__TCP_tx__DOT__TCP_tx_valid));
    bufp->fullBit(oldp+145,(vlSelfRef.TCP__DOT__TCP_tx__DOT__TCP_tx_last));
    bufp->fullIData(oldp+146,(vlSelfRef.TCP__DOT__TCP_tx__DOT__TCP_checksum),17);
    bufp->fullBit(oldp+147,(vlSelfRef.TCP__DOT__TCP_tx__DOT__valid_checksum));
    bufp->fullCData(oldp+148,(vlSelfRef.TCP__DOT__TCP_tx__DOT__state),7);
    bufp->fullSData(oldp+149,(vlSelfRef.TCP__DOT____Vcellout__inst__TCP_checksum_out),16);
    bufp->fullIData(oldp+150,(vlSelfRef.TCP__DOT__inst__DOT__TCP_checksum),17);
    bufp->fullIData(oldp+151,(vlSelfRef.TCP__DOT__inst__DOT__TCP_checksum_send),17);
    bufp->fullIData(oldp+152,(vlSelfRef.TCP__DOT__payload_len_rx),32);
    bufp->fullBit(oldp+153,((1U & ((IData)(vlSelfRef.TCP__DOT__TCP_control_rx) 
                                   >> 7U))));
    bufp->fullBit(oldp+154,((1U & ((IData)(vlSelfRef.TCP__DOT__TCP_control_rx) 
                                   >> 6U))));
    bufp->fullBit(oldp+155,((1U & ((IData)(vlSelfRef.TCP__DOT__TCP_control_rx) 
                                   >> 5U))));
    bufp->fullBit(oldp+156,((1U & ((IData)(vlSelfRef.TCP__DOT__TCP_control_rx) 
                                   >> 4U))));
    bufp->fullBit(oldp+157,((1U & ((IData)(vlSelfRef.TCP__DOT__TCP_control_rx) 
                                   >> 3U))));
    bufp->fullBit(oldp+158,((1U & ((IData)(vlSelfRef.TCP__DOT__TCP_control_rx) 
                                   >> 2U))));
    bufp->fullBit(oldp+159,((1U & ((IData)(vlSelfRef.TCP__DOT__TCP_control_rx) 
                                   >> 1U))));
    bufp->fullBit(oldp+160,((1U & (IData)(vlSelfRef.TCP__DOT__TCP_control_rx))));
    bufp->fullSData(oldp+161,(vlSelfRef.TCP__DOT__tcp_rcv__DOT__bytes_trk),16);
    bufp->fullSData(oldp+162,(vlSelfRef.TCP__DOT__tcp_rcv__DOT__nbytes_trk),16);
    bufp->fullIData(oldp+163,(vlSelfRef.TCP__DOT__tcp_rcv__DOT__TCP_checksum),17);
    bufp->fullBit(oldp+164,(vlSelfRef.TCP__DOT__tcp_rcv__DOT__nTCP_valid));
    bufp->fullBit(oldp+165,(vlSelfRef.TCP__DOT__tcp_rcv__DOT__nrcv_data));
    bufp->fullBit(oldp+166,(vlSelfRef.TCP__DOT__tcp_rcv__DOT__n_nw_segment));
    bufp->fullBit(oldp+167,(vlSelfRef.TCP__DOT__tcp_rcv__DOT__nTCP_last));
    bufp->fullCData(oldp+168,(vlSelfRef.TCP__DOT__tcp_rcv__DOT__state),3);
    bufp->fullCData(oldp+169,(vlSelfRef.TCP__DOT__tcp_flow__DOT__tx_pkg_type),8);
    bufp->fullIData(oldp+170,(vlSelfRef.TCP__DOT__seq_num_tx),32);
    bufp->fullIData(oldp+171,(vlSelfRef.TCP__DOT__ACK_tx),32);
    bufp->fullBit(oldp+172,(vlSelfRef.TCP__DOT__hand_shake_done));
    bufp->fullBit(oldp+173,((1U & vlSelfRef.TCP__DOT____Vcellout__tcp_flow__seq_rcv_str)));
    bufp->fullIData(oldp+174,(vlSelfRef.TCP__DOT____Vcellout__tcp_flow__seq_rcv_str),32);
    bufp->fullCData(oldp+175,(vlSelfRef.TCP__DOT__tcp_flow__DOT__state),7);
    bufp->fullBit(oldp+176,((1U & ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__tx_pkg_type) 
                                   >> 7U))));
    bufp->fullBit(oldp+177,((1U & ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__tx_pkg_type) 
                                   >> 6U))));
    bufp->fullBit(oldp+178,((1U & ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__tx_pkg_type) 
                                   >> 5U))));
    bufp->fullBit(oldp+179,((1U & ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__tx_pkg_type) 
                                   >> 4U))));
    bufp->fullBit(oldp+180,((1U & ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__tx_pkg_type) 
                                   >> 3U))));
    bufp->fullBit(oldp+181,((1U & ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__tx_pkg_type) 
                                   >> 2U))));
    bufp->fullBit(oldp+182,((1U & ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__tx_pkg_type) 
                                   >> 1U))));
    bufp->fullBit(oldp+183,((1U & (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__tx_pkg_type))));
    bufp->fullCData(oldp+184,((7U & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__ack_num 
                                             >> 0x20U)))),3);
    bufp->fullIData(oldp+185,((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__ack_num)),32);
    bufp->fullBit(oldp+186,((1U & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_num 
                                           >> 0x20U)))));
    bufp->fullIData(oldp+187,((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_num)),32);
    bufp->fullSData(oldp+188,(vlSelfRef.TCP__DOT__tcp_flow__DOT__window_size),16);
    bufp->fullIData(oldp+189,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
                                << 0xfU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[1U] 
                                            >> 0x11U))),32);
    bufp->fullSData(oldp+190,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[1U] 
                                          >> 1U))),16);
    bufp->fullSData(oldp+191,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[1U] 
                                           << 0xfU) 
                                          | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0U] 
                                             >> 0x11U)))),16);
    bufp->fullSData(oldp+192,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0U] 
                                          >> 1U))),16);
    bufp->fullBit(oldp+193,((1U & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0U])));
    bufp->fullIData(oldp+194,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U] 
                                << 0x1eU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[4U] 
                                             >> 2U))),32);
    bufp->fullSData(oldp+195,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[4U] 
                                           << 0xeU) 
                                          | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[3U] 
                                             >> 0x12U)))),16);
    bufp->fullSData(oldp+196,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[3U] 
                                          >> 2U))),16);
    bufp->fullSData(oldp+197,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[3U] 
                                           << 0xeU) 
                                          | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
                                             >> 0x12U)))),16);
    bufp->fullBit(oldp+198,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
                                   >> 0x11U))));
    bufp->fullIData(oldp+199,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[7U] 
                                << 0xdU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[6U] 
                                            >> 0x13U))),32);
    bufp->fullSData(oldp+200,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[6U] 
                                          >> 3U))),16);
    bufp->fullSData(oldp+201,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[6U] 
                                           << 0xdU) 
                                          | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U] 
                                             >> 0x13U)))),16);
    bufp->fullSData(oldp+202,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U] 
                                          >> 3U))),16);
    bufp->fullBit(oldp+203,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U] 
                                   >> 2U))));
    bufp->fullIData(oldp+204,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                                << 0x1cU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[9U] 
                                             >> 4U))),32);
    bufp->fullSData(oldp+205,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[9U] 
                                           << 0xcU) 
                                          | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[8U] 
                                             >> 0x14U)))),16);
    bufp->fullSData(oldp+206,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[8U] 
                                          >> 4U))),16);
    bufp->fullSData(oldp+207,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[8U] 
                                           << 0xcU) 
                                          | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[7U] 
                                             >> 0x14U)))),16);
    bufp->fullBit(oldp+208,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[7U] 
                                   >> 0x13U))));
    bufp->fullIData(oldp+209,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                                << 0xbU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                            >> 0x15U))),32);
    bufp->fullSData(oldp+210,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                          >> 5U))),16);
    bufp->fullSData(oldp+211,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                           << 0xbU) 
                                          | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                                             >> 0x15U)))),16);
    bufp->fullSData(oldp+212,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                                          >> 5U))),16);
    bufp->fullBit(oldp+213,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                                   >> 4U))));
    bufp->fullIData(oldp+214,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                                << 0x1aU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                             >> 6U))),32);
    bufp->fullSData(oldp+215,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                           << 0xaU) 
                                          | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xdU] 
                                             >> 0x16U)))),16);
    bufp->fullSData(oldp+216,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xdU] 
                                          >> 6U))),16);
    bufp->fullSData(oldp+217,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xdU] 
                                           << 0xaU) 
                                          | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                                             >> 0x16U)))),16);
    bufp->fullBit(oldp+218,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                                   >> 0x15U))));
    bufp->fullIData(oldp+219,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                                << 9U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                          >> 0x17U))),32);
    bufp->fullSData(oldp+220,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                          >> 7U))),16);
    bufp->fullSData(oldp+221,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                           << 9U) | 
                                          (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                                           >> 0x17U)))),16);
    bufp->fullSData(oldp+222,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                                          >> 7U))),16);
    bufp->fullBit(oldp+223,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                                   >> 6U))));
    bufp->fullIData(oldp+224,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                                << 0x18U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                             >> 8U))),32);
    bufp->fullSData(oldp+225,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                           << 8U) | 
                                          (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x12U] 
                                           >> 0x18U)))),16);
    bufp->fullSData(oldp+226,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x12U] 
                                          >> 8U))),16);
    bufp->fullSData(oldp+227,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x12U] 
                                           << 8U) | 
                                          (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                                           >> 0x18U)))),16);
    bufp->fullBit(oldp+228,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                                   >> 0x17U))));
    bufp->fullIData(oldp+229,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                << 7U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                          >> 0x19U))),32);
    bufp->fullSData(oldp+230,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                          >> 9U))),16);
    bufp->fullSData(oldp+231,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                           << 7U) | 
                                          (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                                           >> 0x19U)))),16);
    bufp->fullSData(oldp+232,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                                          >> 9U))),16);
    bufp->fullBit(oldp+233,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                                   >> 8U))));
    bufp->fullIData(oldp+234,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                                << 0x16U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                             >> 0xaU))),32);
    bufp->fullSData(oldp+235,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                           << 6U) | 
                                          (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x17U] 
                                           >> 0x1aU)))),16);
    bufp->fullSData(oldp+236,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x17U] 
                                          >> 0xaU))),16);
    bufp->fullSData(oldp+237,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x17U] 
                                           << 6U) | 
                                          (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                           >> 0x1aU)))),16);
    bufp->fullBit(oldp+238,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                   >> 0x19U))));
    bufp->fullIData(oldp+239,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                << 5U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                          >> 0x1bU))),32);
    bufp->fullSData(oldp+240,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                          >> 0xbU))),16);
    bufp->fullSData(oldp+241,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                           << 5U) | 
                                          (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                                           >> 0x1bU)))),16);
    bufp->fullSData(oldp+242,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                                          >> 0xbU))),16);
    bufp->fullBit(oldp+243,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                                   >> 0xaU))));
    bufp->fullIData(oldp+244,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                                << 0x14U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                             >> 0xcU))),32);
    bufp->fullSData(oldp+245,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                           << 4U) | 
                                          (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1cU] 
                                           >> 0x1cU)))),16);
    bufp->fullSData(oldp+246,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1cU] 
                                          >> 0xcU))),16);
    bufp->fullSData(oldp+247,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1cU] 
                                           << 4U) | 
                                          (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                           >> 0x1cU)))),16);
    bufp->fullBit(oldp+248,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                   >> 0x1bU))));
    bufp->fullIData(oldp+249,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                << 3U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                          >> 0x1dU))),32);
    bufp->fullSData(oldp+250,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                          >> 0xdU))),16);
    bufp->fullSData(oldp+251,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                           << 3U) | 
                                          (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                                           >> 0x1dU)))),16);
    bufp->fullSData(oldp+252,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                                          >> 0xdU))),16);
    bufp->fullBit(oldp+253,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                                   >> 0xcU))));
    bufp->fullIData(oldp+254,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                                << 0x12U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                             >> 0xeU))),32);
    bufp->fullSData(oldp+255,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                           << 2U) | 
                                          (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x21U] 
                                           >> 0x1eU)))),16);
    bufp->fullSData(oldp+256,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x21U] 
                                          >> 0xeU))),16);
    bufp->fullSData(oldp+257,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x21U] 
                                           << 2U) | 
                                          (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                           >> 0x1eU)))),16);
    bufp->fullBit(oldp+258,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                   >> 0x1dU))));
    bufp->fullIData(oldp+259,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                                << 1U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                          >> 0x1fU))),32);
    bufp->fullSData(oldp+260,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                          >> 0xfU))),16);
    bufp->fullSData(oldp+261,((0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                           << 1U) | 
                                          (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                                           >> 0x1fU)))),16);
    bufp->fullSData(oldp+262,((0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                                          >> 0xfU))),16);
    bufp->fullBit(oldp+263,((1U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                                   >> 0xeU))));
    bufp->fullIData(oldp+264,(((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x28U] 
                                << 0x10U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x27U] 
                                             >> 0x10U))),32);
    bufp->fullSData(oldp+265,((0xffffU & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x27U])),16);
    bufp->fullSData(oldp+266,((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x26U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+267,((0xffffU & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x26U])),16);
    bufp->fullBit(oldp+268,((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                             >> 0x1fU)));
    bufp->fullIData(oldp+269,(vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next),32);
    bufp->fullCData(oldp+270,(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx),4);
    bufp->fullCData(oldp+271,(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_idx),4);
    bufp->fullSData(oldp+272,((((((0x8000U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                                              >> 0x10U)) 
                                  | (0x4000U & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x23U])) 
                                 | ((0x2000U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                                >> 0x10U)) 
                                    | (0x1000U & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1eU]))) 
                                | (((0x800U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                               >> 0x10U)) 
                                    | (0x400U & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x19U])) 
                                   | ((0x200U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                                 >> 0x10U)) 
                                      | (0x100U & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x14U])))) 
                               | ((((0x80U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                                              >> 0x10U)) 
                                    | (0x40U & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xfU])) 
                                   | ((0x20U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                                                >> 0x10U)) 
                                      | (0x10U & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xaU]))) 
                                  | (((8U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[7U] 
                                             >> 0x10U)) 
                                      | (4U & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U])) 
                                     | ((2U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
                                               >> 0x10U)) 
                                        | (1U & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0U])))))),16);
    bufp->fullSData(oldp+273,((0xffffU & (~ (((((0x8000U 
                                                 & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                                                    >> 0x10U)) 
                                                | (0x4000U 
                                                   & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x23U])) 
                                               | ((0x2000U 
                                                   & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                                      >> 0x10U)) 
                                                  | (0x1000U 
                                                     & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1eU]))) 
                                              | (((0x800U 
                                                   & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                                      >> 0x10U)) 
                                                  | (0x400U 
                                                     & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x19U])) 
                                                 | ((0x200U 
                                                     & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                                        >> 0x10U)) 
                                                    | (0x100U 
                                                       & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x14U])))) 
                                             | ((((0x80U 
                                                   & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                                                      >> 0x10U)) 
                                                  | (0x40U 
                                                     & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xfU])) 
                                                 | ((0x20U 
                                                     & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                                                        >> 0x10U)) 
                                                    | (0x10U 
                                                       & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xaU]))) 
                                                | (((8U 
                                                     & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[7U] 
                                                        >> 0x10U)) 
                                                    | (4U 
                                                       & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U])) 
                                                   | ((2U 
                                                       & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
                                                          >> 0x10U)) 
                                                      | (1U 
                                                         & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0U])))))))),16);
    bufp->fullBit(oldp+274,(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask));
    bufp->fullBit(oldp+275,(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_found));
    bufp->fullSData(oldp+276,(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_mask),16);
    bufp->fullCData(oldp+277,(vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_ptr),4);
    bufp->fullCData(oldp+278,(vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_ptr),4);
    bufp->fullCData(oldp+279,(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr),4);
    bufp->fullIData(oldp+280,(vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk),32);
    bufp->fullCData(oldp+281,((0xfU & (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_list))),4);
    bufp->fullCData(oldp+282,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_list 
                                               >> 4U)))),4);
    bufp->fullCData(oldp+283,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_list 
                                               >> 8U)))),4);
    bufp->fullCData(oldp+284,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_list 
                                               >> 0xcU)))),4);
    bufp->fullCData(oldp+285,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_list 
                                               >> 0x10U)))),4);
    bufp->fullCData(oldp+286,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_list 
                                               >> 0x14U)))),4);
    bufp->fullCData(oldp+287,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_list 
                                               >> 0x18U)))),4);
    bufp->fullCData(oldp+288,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_list 
                                               >> 0x1cU)))),4);
    bufp->fullCData(oldp+289,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_list 
                                               >> 0x20U)))),4);
    bufp->fullCData(oldp+290,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_list 
                                               >> 0x24U)))),4);
    bufp->fullCData(oldp+291,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_list 
                                               >> 0x28U)))),4);
    bufp->fullCData(oldp+292,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_list 
                                               >> 0x2cU)))),4);
    bufp->fullCData(oldp+293,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_list 
                                               >> 0x30U)))),4);
    bufp->fullCData(oldp+294,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_list 
                                               >> 0x34U)))),4);
    bufp->fullCData(oldp+295,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_list 
                                               >> 0x38U)))),4);
    bufp->fullCData(oldp+296,((0xfU & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_list 
                                               >> 0x3cU)))),4);
    bufp->fullCData(oldp+297,(vlSelfRef.TCP__DOT__tcp_flow__DOT__nstate),7);
    bufp->fullCData(oldp+298,((7U & (IData)((vlSelfRef.TCP__DOT__tcp_flow__DOT__nack_num 
                                             >> 0x20U)))),3);
    bufp->fullIData(oldp+299,((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__nack_num)),32);
    bufp->fullSData(oldp+300,(vlSelfRef.TCP__DOT__tcp_flow__DOT__nwindow_size),16);
    bufp->fullBit(oldp+301,(vlSelfRef.TCP__DOT__tcp_flow__DOT__nhand_shake_done));
    bufp->fullIData(oldp+302,(vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_rcv_str),32);
    bufp->fullBit(oldp+303,(vlSelfRef.CLK));
    bufp->fullBit(oldp+304,(vlSelfRef.nRST));
    bufp->fullBit(oldp+305,(vlSelfRef.TX_en));
    bufp->fullBit(oldp+306,(vlSelfRef.IP_valid));
    bufp->fullBit(oldp+307,(vlSelfRef.IP_flush));
    bufp->fullSData(oldp+308,(vlSelfRef.IP_pseuder),16);
    bufp->fullQData(oldp+309,(vlSelfRef.IP_payload),64);
    bufp->fullSData(oldp+311,(vlSelfRef.TCP_len),16);
    bufp->fullCData(oldp+312,(vlSelfRef.IP_bytes_rcv),8);
    bufp->fullBit(oldp+313,(vlSelfRef.nw_segment));
    bufp->fullBit(oldp+314,(vlSelfRef.axis_t_last));
    bufp->fullBit(oldp+315,(vlSelfRef.TCP_flush));
    bufp->fullQData(oldp+316,(vlSelfRef.axis_data_rx),64);
    bufp->fullBit(oldp+318,(vlSelfRef.handshake_done));
    bufp->fullIData(oldp+319,(vlSelfRef.seq_rcv_start),32);
    bufp->fullBit(oldp+320,(vlSelfRef.wr_FIFO_en));
    bufp->fullCData(oldp+321,(vlSelfRef.wr_FIFO_offset),8);
    bufp->fullBit(oldp+322,(vlSelfRef.rd_FIFO_valid_rcv));
    bufp->fullCData(oldp+323,(vlSelfRef.rd_FIFO_ptr),3);
    bufp->fullCData(oldp+324,(vlSelfRef.rd_FIFO_len),3);
    bufp->fullCData(oldp+325,(vlSelfRef.wr_ptr_out),3);
    bufp->fullCData(oldp+326,(vlSelfRef.wr_FIFO_len),3);
    bufp->fullBit(oldp+327,(vlSelfRef.rd_FIFO_en_rcv));
    bufp->fullIData(oldp+328,(vlSelfRef.seq_rx_FIFO_rd),32);
    bufp->fullBit(oldp+329,(vlSelfRef.full));
    bufp->fullIData(oldp+330,(vlSelfRef.ACK_num),32);
    bufp->fullBit(oldp+331,(vlSelfRef.ACK_rcv_flag));
    bufp->fullBit(oldp+332,(vlSelfRef.out_order_req));
    bufp->fullBit(oldp+333,(vlSelfRef.TCP_stop_flg));
    bufp->fullBit(oldp+334,(vlSelfRef.end_ss));
    bufp->fullQData(oldp+335,(vlSelfRef.rd_FIFO_payload),64);
    bufp->fullBit(oldp+337,(vlSelfRef.rd_FIFO_valid_tx));
    bufp->fullBit(oldp+338,(vlSelfRef.rd_FIFO_last));
    bufp->fullSData(oldp+339,(vlSelfRef.bytes_abt_sent),16);
    bufp->fullBit(oldp+340,(vlSelfRef.rd_FIFO_en_tx));
    bufp->fullBit(oldp+341,(vlSelfRef.TCP_send));
    bufp->fullQData(oldp+342,(vlSelfRef.TCP_transmit),64);
    bufp->fullBit(oldp+344,(vlSelfRef.re_trans));
    bufp->fullSData(oldp+345,(vlSelfRef.checksum_re_trans),16);
    bufp->fullIData(oldp+346,(vlSelfRef.rcv_next),32);
    bufp->fullIData(oldp+347,(vlSelfRef.seq_num),32);
    bufp->fullIData(oldp+348,(vlSelfRef.TCP__DOT__ISN_num),32);
    bufp->fullSData(oldp+349,(((IData)(vlSelfRef.full)
                                ? 0U : 0xffffU)),16);
    bufp->fullSData(oldp+350,(((IData)(vlSelfRef.re_trans)
                                ? (IData)(vlSelfRef.checksum_re_trans)
                                : (1U & (IData)(vlSelfRef.TCP__DOT____Vcellout__inst__TCP_checksum_out)))),16);
    bufp->fullIData(oldp+351,(vlSelfRef.bytes_abt_sent),32);
    bufp->fullBit(oldp+352,(vlSelfRef.TCP__DOT__inst__DOT__up_send));
    bufp->fullCData(oldp+353,(vlSelfRef.wr_FIFO_len),8);
    bufp->fullCData(oldp+354,(vlSelfRef.TCP__DOT____Vcellout__tcp_flow__rd_FIFO_len),8);
    bufp->fullSData(oldp+355,(vlSelfRef.TCP__DOT____Vcellout__tcp_flow__rd_FIFO_ptr),11);
    bufp->fullIData(oldp+356,(((vlSelfRef.seq_num + (IData)(vlSelfRef.bytes_abt_sent)) 
                               - ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__ack_num) 
                                  - vlSelfRef.TCP__DOT__ISN_num))),32);
    bufp->fullSData(oldp+357,(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask),16);
}
