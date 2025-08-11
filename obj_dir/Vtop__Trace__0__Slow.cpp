// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__rx_pkg__0(Vtop___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+183,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+186,0,"UDP_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+187,0,"xgmii_txd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+189,0,"xgmii_txc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+190,0,"frame_end",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+191,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+193,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+194,0,"protocol_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("rx_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__rx_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+202,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+203,0,"FIFO_DEPTH_TX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+203,0,"FIFO_DEPTH_RX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+204,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+205,0,"CLT_OR_SVR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+183,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+186,0,"UDP_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+187,0,"xgmii_txd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+189,0,"xgmii_txc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+190,0,"frame_end",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+191,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+193,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+194,0,"protocol_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"IP_send",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"IP_tx_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+53,0,"IP_transmit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+55,0,"tt_len_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+206,0,"TCP_send",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"TCP_tx_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"TCP_tx_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+209,0,"TCP_len_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+210,0,"TCP_transmit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+212,0,"FIFO_WIDTH_TX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+212,0,"FIFO_WIDTH_RX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+56,0,"IP_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"IP_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"IP_rx_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"IP_pseuder",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+60,0,"IP_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+213,0,"TCP_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+62,0,"IP_bytes_rcv_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+63,0,"protocol_data_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+64,0,"MAC_payload_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+66,0,"MAC_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"CRC_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"frame_ok",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"bytes_rcv_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+70,0,"UDP_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"UDP_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"is_udp_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"is_tcp_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+74,0,"UDP_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+214,0,"nw_segment",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+215,0,"TCP_rx_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+216,0,"TCP_flush_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+217,0,"axis_data_rx_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+219,0,"handshake_done_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+220,0,"seq_rcv_start_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+221,0,"wr_pfifo_en_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+222,0,"wr_pfifo_offset_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+223,0,"wr_ptr_out_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+224,0,"wr_pfifo_len_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+225,0,"rd_pfifo_valid_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+226,0,"rd_pfifo_ptr_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+227,0,"rd_pfifo_len_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+228,0,"rd_pfifo_en_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+229,0,"seq_rx_FIFO_rd_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+230,0,"rd_ftx_en_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+231,0,"rd_ftx_payload_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+233,0,"rd_ftx_valid_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"rd_ftx_last_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+235,0,"bytes_abt_sent_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+236,0,"ACK_num_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+237,0,"ACK_rcv_flag_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+238,0,"out_order_req_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+239,0,"TCP_stop_flg_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+240,0,"end_ss_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"re_trans_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+242,0,"checksum_re_trans_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+243,0,"seq_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+244,0,"seq_num_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+245,0,"checksum_TX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+246,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"rd_FIFO_valid_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"rd_FIFO_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+231,0,"rd_FIFO_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+235,0,"bytes_abt_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+239,0,"TCP_stop_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"UDP_send",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+77,0,"UDP_transmit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+186,0,"UDP_len_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+78,0,"UDP_tx_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"UDP_tx_send",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ip_rx", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+248,0,"PROTOCOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+249,0,"PROTOCOL_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+183,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"MAC_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+64,0,"MAC_payload_rcv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+67,0,"MAC_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"bytes_rcv_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+56,0,"IP_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"IP_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"IP_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+60,0,"IP_payload",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+62,0,"IP_bytes_rcv_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+59,0,"IP_pseuder",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+63,0,"protocol_data_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"is_udp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"is_tcp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"state",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+80,0,"nstate",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+81,0,"IP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+82,0,"nIP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+83,0,"nIP_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+85,0,"bytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+86,0,"nbytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+87,0,"chksum_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"chksum_clear",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+89,0,"chksum_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+91,0,"chksum_pl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+92,0,"chksum_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+93,0,"dst_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+94,0,"ndst_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+95,0,"IP_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+96,0,"nIP_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+97,0,"nIP_bytes_rcv_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+98,0,"nIP_pseuder",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+99,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+100,0,"nIP_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"nIP_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"next_is_udp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"next_is_tcp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"nprotocol_data_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+105,0,"total_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+106,0,"frags_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+107,0,"ttl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+108,0,"flags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+109,0,"fragoff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+110,0,"test_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+111,0,"ip_version",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+112,0,"is_src_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"is_ip_version_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+114,0,"src_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"dest_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("chksum_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+250,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+183,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"FIFO_rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+89,0,"TCP_payload_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+91,0,"TCP_checksum_pl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+116,0,"TCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+117,0,"nTCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+118,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+119,0,"temp1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+120,0,"temp2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ip_tx", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"ETHER_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+250,0,"WORD_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+252,0,"TYPE_OF_SERVICE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+253,0,"IPV4_VER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+249,0,"LENGTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+254,0,"IP_IDENFICATION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+255,0,"IP_FLAG_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+256,0,"IP_TLL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+248,0,"IP_PROTOCOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+249,0,"IP_PROTOCOL_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+257,0,"IP_SRC_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+258,0,"IP_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+183,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"IP_send",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"protocol_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+186,0,"len_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+121,0,"protocol_transmit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+53,0,"IP_transmit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+55,0,"tt_len_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+52,0,"IP_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"protocol_send",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"IP_state",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+124,0,"nxIP_state",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+5,0,"nxIP_transmit_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+125,0,"chk_sum_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+8,0,"temp1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+9,0,"temp2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+126,0,"IPv4_chk_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+10,0,"nIPv4_chk_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+11,0,"ntt_len_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+127,0,"chksum_rslt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("mac_rx", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+250,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+259,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+260,0,"MAC_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+262,0,"MAC_SRC_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+264,0,"ETHER_TYPE_MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+265,0,"CRC_MAGIC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+183,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+191,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+193,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+64,0,"MAC_payload_rcv",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+66,0,"MAC_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"CRC_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"frame_ok",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"bytes_rcv_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+128,0,"crc_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"end_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+129,0,"crc_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+33,0,"crc_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+35,0,"crc_in_big",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+130,0,"xgmii_rxc_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+195,0,"nxgmii_rxc_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2,0,"bytes_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+266,0,"end_FCS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+267,0,"str_FCS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+131,0,"sof_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"crc_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"nsof_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"sof_lane",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+13,0,"nsof_lane",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+33,0,"xgmii_rxd_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+268,0,"nxgmii_rxd_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+270,0,"xgmii_rxd_MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+35,0,"xgmii_rxd_f_cvt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+272,0,"xgmii_rxc_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+273,0,"nxgmii_rxc_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+274,0,"xgmii_rxc_MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+134,0,"FCS_rxc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+196,0,"nFCS_rxc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+14,0,"FCS_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+135,0,"crc_check",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"ncrc_check",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+136,0,"frame_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+15,0,"nframe_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+197,0,"FCS_grap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+275,0,"crc_ind",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+276,0,"ncrc_ind",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+3,0,"shift_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+4,0,"byte_END",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+140,0,"FCS_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"nFCS_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+141,0,"rg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+141,0,"nrg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+142,0,"FCS_frame_cvt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+144,0,"crc_delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"ncrc_delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"ncrc_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+277,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+145,0,"soft_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"nsoft_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"case_debug",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+147,0,"MAC_payload_rcv_cvrt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+37,0,"nMAC_payload_rcv_cvrt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+69,0,"bytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+39,0,"nbytes_rcv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+149,0,"bytes_rcv_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+23,0,"nbytes_rcv_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+40,0,"nMAC_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+150,0,"state",3, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+41,0,"next_state",3, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declQuad(c+42,0,"mac_dest_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+44,0,"mac_src_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+46,0,"second_half_src_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+278,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+47,0,"mac_dest_addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"mac_src_addr_first_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"mac_src_addr_second_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("CRC", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+183,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"crc_init",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+35,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+129,0,"crc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"crc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"next_crc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("crc_check_encoder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+204,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+282,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+283,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+193,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+277,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("crc_convert", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+33,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+284,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+35,0,"be_rxd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+285,0,"be_rxc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("crc_frame_convert", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+152,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+286,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+142,0,"be_rxd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+287,0,"be_rxc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("payload_cvrt", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+147,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+288,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+64,0,"be_rxd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+289,0,"be_rxc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("xgmii_cvrt", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+33,0,"xgmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+290,0,"xgmii_rxc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+35,0,"be_rxd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+291,0,"be_rxc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("xgmii_fcs", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+203,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+282,0,"MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+212,0,"IDW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+24,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+25,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+292,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mac_tx", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+250,0,"WORD_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+259,0,"CTRL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+260,0,"MAC_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+262,0,"MAC_SRC_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+251,0,"ETHER_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+183,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"TX_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+187,0,"xgmii_txd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+189,0,"xgmii_txc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+53,0,"IP_transmit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+55,0,"tt_len_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+52,0,"IP_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"IP_send",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"frame_end",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+154,0,"xgmii_txd_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+26,0,"nxgmii_txd_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+156,0,"xgmii_txc_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+28,0,"nxgmii_txc_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+29,0,"IP_send_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+157,0,"state",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+30,0,"nstate",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+158,0,"crc_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"nvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"IP_last_dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+161,0,"crc_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+162,0,"len_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+163,0,"nlen_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("CRC", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+183,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"crc_init",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+294,0,"rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+26,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+161,0,"crc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+164,0,"crc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"next_crc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("udp_rx", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+183,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"IP_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"IP_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+60,0,"IP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+72,0,"is_udp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"UDP_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"UDP_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+74,0,"UDP_payload",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+165,0,"cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+166,0,"next_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+167,0,"UDP_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+168,0,"next_UDP_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+169,0,"current_state",5, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+170,0,"nstate",5, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+171,0,"next_UDP_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+172,0,"next_UDP_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+174,0,"is_udp_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"is_udp_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("udp_tx", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+295,0,"UDP_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+296,0,"UDP_SRC_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+264,0,"UDP_HEADER_LENGTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+297,0,"UDP_CHECKSUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+258,0,"IP_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+183,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+74,0,"UDP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+186,0,"UDP_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+194,0,"protocol_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+176,0,"IP_payload",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+78,0,"UDP_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+186,0,"protocol_Data_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+178,0,"next_IP_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+180,0,"current_state",6, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+32,0,"nstate",6, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+298,0,"computed_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+181,0,"header_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+201,0,"IP_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__rx_pkg__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__rx_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declQuad(c+299,0,"FPGA_MAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+301,0,"NASDAQ_MAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+251,0,"IP_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+303,0,"IP_VERSION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+304,0,"IP_HDL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+305,0,"UDP_PROTOCOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+248,0,"TCP_PROTOCOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+306,0,"ICMP_PROTOCOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+256,0,"IP_TTL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+307,0,"IP_SRC_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+308,0,"IP_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+295,0,"UDP_SRC_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+296,0,"UDP_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+264,0,"UDP_HEADER_LENGTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+297,0,"UDP_CHECKSUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
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
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+202,(0x40U),32);
    bufp->fullIData(oldp+203,(0x10U),32);
    bufp->fullIData(oldp+204,(8U),32);
    bufp->fullBit(oldp+205,(0U));
    bufp->fullBit(oldp+206,(vlSelf->top__DOT__TCP_send));
    bufp->fullBit(oldp+207,(vlSelf->top__DOT__TCP_tx_valid));
    bufp->fullBit(oldp+208,(vlSelf->top__DOT__TCP_tx_last));
    bufp->fullSData(oldp+209,(vlSelf->top__DOT__TCP_len_data),16);
    bufp->fullQData(oldp+210,(vlSelf->top__DOT__TCP_transmit),64);
    bufp->fullIData(oldp+212,(4U),32);
    bufp->fullSData(oldp+213,(vlSelf->top__DOT__TCP_len),16);
    bufp->fullBit(oldp+214,(vlSelf->top__DOT__nw_segment));
    bufp->fullBit(oldp+215,(vlSelf->top__DOT__TCP_rx_last));
    bufp->fullBit(oldp+216,(vlSelf->top__DOT__TCP_flush_int));
    bufp->fullQData(oldp+217,(vlSelf->top__DOT__axis_data_rx_int),64);
    bufp->fullBit(oldp+219,(vlSelf->top__DOT__handshake_done_int));
    bufp->fullIData(oldp+220,(vlSelf->top__DOT__seq_rcv_start_int),32);
    bufp->fullBit(oldp+221,(vlSelf->top__DOT__wr_pfifo_en_int));
    bufp->fullCData(oldp+222,(vlSelf->top__DOT__wr_pfifo_offset_int),8);
    bufp->fullCData(oldp+223,(vlSelf->top__DOT__wr_ptr_out_int),4);
    bufp->fullCData(oldp+224,(vlSelf->top__DOT__wr_pfifo_len_int),4);
    bufp->fullBit(oldp+225,(vlSelf->top__DOT__rd_pfifo_valid_int));
    bufp->fullCData(oldp+226,(vlSelf->top__DOT__rd_pfifo_ptr_int),4);
    bufp->fullCData(oldp+227,(vlSelf->top__DOT__rd_pfifo_len_int),4);
    bufp->fullBit(oldp+228,(vlSelf->top__DOT__rd_pfifo_en_int));
    bufp->fullIData(oldp+229,(vlSelf->top__DOT__seq_rx_FIFO_rd_int),32);
    bufp->fullBit(oldp+230,(vlSelf->top__DOT__rd_ftx_en_int));
    bufp->fullQData(oldp+231,(vlSelf->top__DOT__rd_ftx_payload_int),64);
    bufp->fullBit(oldp+233,(vlSelf->top__DOT__rd_ftx_valid_int));
    bufp->fullBit(oldp+234,(vlSelf->top__DOT__rd_ftx_last_int));
    bufp->fullSData(oldp+235,(vlSelf->top__DOT__bytes_abt_sent_int),16);
    bufp->fullIData(oldp+236,(vlSelf->top__DOT__ACK_num_int),32);
    bufp->fullBit(oldp+237,(vlSelf->top__DOT__ACK_rcv_flag_int));
    bufp->fullBit(oldp+238,(vlSelf->top__DOT__out_order_req_int));
    bufp->fullBit(oldp+239,(vlSelf->top__DOT__TCP_stop_flg_int));
    bufp->fullBit(oldp+240,(vlSelf->top__DOT__end_ss_int));
    bufp->fullBit(oldp+241,(vlSelf->top__DOT__re_trans_int));
    bufp->fullSData(oldp+242,(vlSelf->top__DOT__checksum_re_trans_int),16);
    bufp->fullBit(oldp+243,(vlSelf->top__DOT__seq_up));
    bufp->fullIData(oldp+244,(vlSelf->top__DOT__seq_num_tx),32);
    bufp->fullSData(oldp+245,(vlSelf->top__DOT__checksum_TX),16);
    bufp->fullBit(oldp+246,(vlSelf->top__DOT__full));
    bufp->fullBit(oldp+247,(vlSelf->top__DOT__UDP_tx_send));
    bufp->fullCData(oldp+248,(6U),8);
    bufp->fullSData(oldp+249,(0x14U),16);
    bufp->fullIData(oldp+250,(0x40U),32);
    bufp->fullSData(oldp+251,(0x800U),16);
    bufp->fullCData(oldp+252,(0U),8);
    bufp->fullCData(oldp+253,(0x45U),8);
    bufp->fullSData(oldp+254,(1U),16);
    bufp->fullSData(oldp+255,(0x4000U),16);
    bufp->fullCData(oldp+256,(0x40U),8);
    bufp->fullIData(oldp+257,(0xc0a80101U),32);
    bufp->fullIData(oldp+258,(0xc0a80102U),32);
    bufp->fullIData(oldp+259,(8U),32);
    bufp->fullQData(oldp+260,(0xffffffccbbaaULL),48);
    bufp->fullQData(oldp+262,(0xaaccbbffffffULL),48);
    bufp->fullSData(oldp+264,(8U),16);
    bufp->fullIData(oldp+265,(0xc704dd7bU),32);
    bufp->fullCData(oldp+266,(vlSelf->top__DOT__mac_rx__DOT__end_FCS),3);
    bufp->fullCData(oldp+267,(vlSelf->top__DOT__mac_rx__DOT__str_FCS),3);
    bufp->fullQData(oldp+268,(vlSelf->top__DOT__mac_rx__DOT__nxgmii_rxd_f),64);
    bufp->fullQData(oldp+270,(vlSelf->top__DOT__mac_rx__DOT__xgmii_rxd_MSB),64);
    bufp->fullCData(oldp+272,(vlSelf->top__DOT__mac_rx__DOT__xgmii_rxc_f),8);
    bufp->fullCData(oldp+273,(vlSelf->top__DOT__mac_rx__DOT__nxgmii_rxc_f),8);
    bufp->fullCData(oldp+274,(vlSelf->top__DOT__mac_rx__DOT__xgmii_rxc_MSB),8);
    bufp->fullSData(oldp+275,(vlSelf->top__DOT__mac_rx__DOT__crc_ind),16);
    bufp->fullSData(oldp+276,(vlSelf->top__DOT__mac_rx__DOT__ncrc_ind),16);
    bufp->fullIData(oldp+277,(8U),32);
    bufp->fullWData(oldp+278,(vlSelf->top__DOT__mac_rx__DOT__temp),128);
    bufp->fullBit(oldp+282,(0U));
    bufp->fullIData(oldp+283,(3U),32);
    bufp->fullCData(oldp+284,(vlSelf->top__DOT__mac_rx__DOT__crc_convert__DOT__xgmii_rxc),8);
    bufp->fullCData(oldp+285,(((0x80U & ((IData)(vlSelf->top__DOT__mac_rx__DOT__crc_convert__DOT__xgmii_rxc) 
                                         << 7U)) | 
                               ((0x40U & ((IData)(vlSelf->top__DOT__mac_rx__DOT__crc_convert__DOT__xgmii_rxc) 
                                          << 5U)) | 
                                ((0x20U & ((IData)(vlSelf->top__DOT__mac_rx__DOT__crc_convert__DOT__xgmii_rxc) 
                                           << 3U)) 
                                 | ((0x10U & ((IData)(vlSelf->top__DOT__mac_rx__DOT__crc_convert__DOT__xgmii_rxc) 
                                              << 1U)) 
                                    | ((8U & ((IData)(vlSelf->top__DOT__mac_rx__DOT__crc_convert__DOT__xgmii_rxc) 
                                              >> 1U)) 
                                       | ((4U & ((IData)(vlSelf->top__DOT__mac_rx__DOT__crc_convert__DOT__xgmii_rxc) 
                                                 >> 3U)) 
                                          | ((2U & 
                                              ((IData)(vlSelf->top__DOT__mac_rx__DOT__crc_convert__DOT__xgmii_rxc) 
                                               >> 5U)) 
                                             | (1U 
                                                & ((IData)(vlSelf->top__DOT__mac_rx__DOT__crc_convert__DOT__xgmii_rxc) 
                                                   >> 7U)))))))))),8);
    bufp->fullCData(oldp+286,(vlSelf->top__DOT__mac_rx__DOT__crc_frame_convert__DOT__xgmii_rxc),8);
    bufp->fullCData(oldp+287,(((0x80U & ((IData)(vlSelf->top__DOT__mac_rx__DOT__crc_frame_convert__DOT__xgmii_rxc) 
                                         << 7U)) | 
                               ((0x40U & ((IData)(vlSelf->top__DOT__mac_rx__DOT__crc_frame_convert__DOT__xgmii_rxc) 
                                          << 5U)) | 
                                ((0x20U & ((IData)(vlSelf->top__DOT__mac_rx__DOT__crc_frame_convert__DOT__xgmii_rxc) 
                                           << 3U)) 
                                 | ((0x10U & ((IData)(vlSelf->top__DOT__mac_rx__DOT__crc_frame_convert__DOT__xgmii_rxc) 
                                              << 1U)) 
                                    | ((8U & ((IData)(vlSelf->top__DOT__mac_rx__DOT__crc_frame_convert__DOT__xgmii_rxc) 
                                              >> 1U)) 
                                       | ((4U & ((IData)(vlSelf->top__DOT__mac_rx__DOT__crc_frame_convert__DOT__xgmii_rxc) 
                                                 >> 3U)) 
                                          | ((2U & 
                                              ((IData)(vlSelf->top__DOT__mac_rx__DOT__crc_frame_convert__DOT__xgmii_rxc) 
                                               >> 5U)) 
                                             | (1U 
                                                & ((IData)(vlSelf->top__DOT__mac_rx__DOT__crc_frame_convert__DOT__xgmii_rxc) 
                                                   >> 7U)))))))))),8);
    bufp->fullCData(oldp+288,(vlSelf->top__DOT__mac_rx__DOT__payload_cvrt__DOT__xgmii_rxc),8);
    bufp->fullCData(oldp+289,(((0x80U & ((IData)(vlSelf->top__DOT__mac_rx__DOT__payload_cvrt__DOT__xgmii_rxc) 
                                         << 7U)) | 
                               ((0x40U & ((IData)(vlSelf->top__DOT__mac_rx__DOT__payload_cvrt__DOT__xgmii_rxc) 
                                          << 5U)) | 
                                ((0x20U & ((IData)(vlSelf->top__DOT__mac_rx__DOT__payload_cvrt__DOT__xgmii_rxc) 
                                           << 3U)) 
                                 | ((0x10U & ((IData)(vlSelf->top__DOT__mac_rx__DOT__payload_cvrt__DOT__xgmii_rxc) 
                                              << 1U)) 
                                    | ((8U & ((IData)(vlSelf->top__DOT__mac_rx__DOT__payload_cvrt__DOT__xgmii_rxc) 
                                              >> 1U)) 
                                       | ((4U & ((IData)(vlSelf->top__DOT__mac_rx__DOT__payload_cvrt__DOT__xgmii_rxc) 
                                                 >> 3U)) 
                                          | ((2U & 
                                              ((IData)(vlSelf->top__DOT__mac_rx__DOT__payload_cvrt__DOT__xgmii_rxc) 
                                               >> 5U)) 
                                             | (1U 
                                                & ((IData)(vlSelf->top__DOT__mac_rx__DOT__payload_cvrt__DOT__xgmii_rxc) 
                                                   >> 7U)))))))))),8);
    bufp->fullCData(oldp+290,(vlSelf->top__DOT__mac_rx__DOT__xgmii_cvrt__DOT__xgmii_rxc),8);
    bufp->fullCData(oldp+291,(((0x80U & ((IData)(vlSelf->top__DOT__mac_rx__DOT__xgmii_cvrt__DOT__xgmii_rxc) 
                                         << 7U)) | 
                               ((0x40U & ((IData)(vlSelf->top__DOT__mac_rx__DOT__xgmii_cvrt__DOT__xgmii_rxc) 
                                          << 5U)) | 
                                ((0x20U & ((IData)(vlSelf->top__DOT__mac_rx__DOT__xgmii_cvrt__DOT__xgmii_rxc) 
                                           << 3U)) 
                                 | ((0x10U & ((IData)(vlSelf->top__DOT__mac_rx__DOT__xgmii_cvrt__DOT__xgmii_rxc) 
                                              << 1U)) 
                                    | ((8U & ((IData)(vlSelf->top__DOT__mac_rx__DOT__xgmii_cvrt__DOT__xgmii_rxc) 
                                              >> 1U)) 
                                       | ((4U & ((IData)(vlSelf->top__DOT__mac_rx__DOT__xgmii_cvrt__DOT__xgmii_rxc) 
                                                 >> 3U)) 
                                          | ((2U & 
                                              ((IData)(vlSelf->top__DOT__mac_rx__DOT__xgmii_cvrt__DOT__xgmii_rxc) 
                                               >> 5U)) 
                                             | (1U 
                                                & ((IData)(vlSelf->top__DOT__mac_rx__DOT__xgmii_cvrt__DOT__xgmii_rxc) 
                                                   >> 7U)))))))))),8);
    bufp->fullIData(oldp+292,(0x10U),32);
    bufp->fullBit(oldp+293,(vlSelf->top__DOT__mac_tx__DOT__nvalid));
    bufp->fullBit(oldp+294,(vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__rx));
    bufp->fullSData(oldp+295,(0x1234U),16);
    bufp->fullSData(oldp+296,(0x4321U),16);
    bufp->fullSData(oldp+297,(0U),16);
    bufp->fullSData(oldp+298,(vlSelf->top__DOT__udp_tx__DOT__computed_len),16);
    bufp->fullQData(oldp+299,(0x123456ULL),48);
    bufp->fullQData(oldp+301,(0x65431ULL),48);
    bufp->fullCData(oldp+303,(4U),4);
    bufp->fullCData(oldp+304,(5U),4);
    bufp->fullCData(oldp+305,(0x11U),8);
    bufp->fullCData(oldp+306,(1U),8);
    bufp->fullIData(oldp+307,(0xffffffffU),32);
    bufp->fullIData(oldp+308,(0xaaaaaaaaU),32);
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
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    bufp->fullBit(oldp+1,(vlSelf->top__DOT__mac_rx__DOT__end_valid));
    bufp->fullCData(oldp+2,(vlSelf->top__DOT__mac_rx__DOT__bytes_offset),3);
    bufp->fullCData(oldp+3,((0x3fU & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->top__DOT__mac_rx__DOT__bytes_offset), 3U))),6);
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__mac_rx__DOT__byte_END),8);
    bufp->fullQData(oldp+5,(vlSelf->top__DOT__ip_tx__DOT__nxIP_transmit_l),64);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__ip_tx__DOT__temp),20);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__ip_tx__DOT__temp1),20);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__ip_tx__DOT__temp2),20);
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__ip_tx__DOT__nIPv4_chk_sum),17);
    bufp->fullSData(oldp+11,(vlSelf->top__DOT__ip_tx__DOT__ntt_len_data),16);
    bufp->fullBit(oldp+12,(vlSelf->top__DOT__mac_rx__DOT__nsof_found));
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__mac_rx__DOT__nsof_lane),3);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__mac_rx__DOT__FCS_offset),4);
    bufp->fullWData(oldp+15,(vlSelf->top__DOT__mac_rx__DOT__nframe_store),128);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__mac_rx__DOT__nFCS_frame),32);
    bufp->fullBit(oldp+20,(vlSelf->top__DOT__mac_rx__DOT__ncrc_delay));
    bufp->fullBit(oldp+21,(vlSelf->top__DOT__mac_rx__DOT__ncrc_valid));
    bufp->fullBit(oldp+22,(vlSelf->top__DOT__mac_rx__DOT__case_debug));
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__mac_rx__DOT__nbytes_rcv_dl),8);
    bufp->fullSData(oldp+24,(vlSelf->top__DOT__mac_rx__DOT____Vcellinp__xgmii_fcs__din),16);
    bufp->fullBit(oldp+25,(vlSelf->top__DOT__mac_rx__DOT__xgmii_fcs__DOT__valid));
    bufp->fullQData(oldp+26,(vlSelf->top__DOT__mac_tx__DOT__nxgmii_txd_l),64);
    bufp->fullCData(oldp+28,(vlSelf->top__DOT__mac_tx__DOT__nxgmii_txc_l),8);
    bufp->fullBit(oldp+29,(vlSelf->top__DOT__mac_tx__DOT__IP_send_l));
    bufp->fullCData(oldp+30,(vlSelf->top__DOT__mac_tx__DOT__nstate),7);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__next_crc),32);
    bufp->fullCData(oldp+32,(vlSelf->top__DOT__udp_tx__DOT__nstate),3);
    bufp->fullQData(oldp+33,(vlSelf->top__DOT__mac_rx__DOT__xgmii_rxd_f),64);
    bufp->fullQData(oldp+35,(vlSelf->top__DOT__mac_rx__DOT__crc_in_big),64);
    bufp->fullQData(oldp+37,(vlSelf->top__DOT__mac_rx__DOT__nMAC_payload_rcv_cvrt),64);
    bufp->fullCData(oldp+39,(vlSelf->top__DOT__mac_rx__DOT__nbytes_rcv),8);
    bufp->fullBit(oldp+40,(vlSelf->top__DOT__mac_rx__DOT__nMAC_valid));
    bufp->fullCData(oldp+41,(vlSelf->top__DOT__mac_rx__DOT__next_state),6);
    bufp->fullQData(oldp+42,((((QData)((IData)((0xffU 
                                                & (IData)(vlSelf->top__DOT__mac_rx__DOT__xgmii_rxd_f)))) 
                               << 0x28U) | (((QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__mac_rx__DOT__xgmii_rxd_f 
                                                                         >> 8U))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              (((IData)(
                                                                        (vlSelf->top__DOT__mac_rx__DOT__xgmii_rxd_f 
                                                                         >> 0x10U)) 
                                                                << 0x18U) 
                                                               | ((0xff0000U 
                                                                   & ((IData)(
                                                                              (vlSelf->top__DOT__mac_rx__DOT__xgmii_rxd_f 
                                                                               >> 0x18U)) 
                                                                      << 0x10U)) 
                                                                  | ((0xff00U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT__mac_rx__DOT__xgmii_rxd_f 
                                                                                >> 0x20U)) 
                                                                         << 8U)) 
                                                                     | (0xffU 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__mac_rx__DOT__xgmii_rxd_f 
                                                                                >> 0x28U))))))))))),48);
    bufp->fullQData(oldp+44,((((QData)((IData)((0xffffU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__mac_rx__DOT__xgmii_rxd_f 
                                                           >> 0x30U))))) 
                               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mac_rx__DOT__xgmii_rxd_f)))),48);
    bufp->fullIData(oldp+46,((((IData)(vlSelf->top__DOT__mac_rx__DOT__xgmii_rxd_f) 
                               << 0x18U) | ((0xff0000U 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__mac_rx__DOT__xgmii_rxd_f 
                                                         >> 8U)) 
                                                << 0x10U)) 
                                            | ((0xff00U 
                                                & ((IData)(
                                                           (vlSelf->top__DOT__mac_rx__DOT__xgmii_rxd_f 
                                                            >> 0x10U)) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__mac_rx__DOT__xgmii_rxd_f 
                                                             >> 0x18U))))))),32);
    bufp->fullBit(oldp+47,((0xffffffccbbaaULL == (((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->top__DOT__mac_rx__DOT__xgmii_rxd_f)))) 
                                                   << 0x28U) 
                                                  | (((QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__mac_rx__DOT__xgmii_rxd_f 
                                                                                >> 8U))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       (((IData)(
                                                                                (vlSelf->top__DOT__mac_rx__DOT__xgmii_rxd_f 
                                                                                >> 0x10U)) 
                                                                         << 0x18U) 
                                                                        | ((0xff0000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT__mac_rx__DOT__xgmii_rxd_f 
                                                                                >> 0x18U)) 
                                                                               << 0x10U)) 
                                                                           | ((0xff00U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT__mac_rx__DOT__xgmii_rxd_f 
                                                                                >> 0x20U)) 
                                                                                << 8U)) 
                                                                              | (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__mac_rx__DOT__xgmii_rxd_f 
                                                                                >> 0x28U)))))))))))));
    bufp->fullBit(oldp+48,((0xaaccU == (0xffffU & (IData)(
                                                          (vlSelf->top__DOT__mac_rx__DOT__xgmii_rxd_f 
                                                           >> 0x30U))))));
    bufp->fullBit(oldp+49,((0xbbffffffU == (IData)(vlSelf->top__DOT__mac_rx__DOT__xgmii_rxd_f))));
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__mac_rx__DOT__CRC__DOT__next_crc),32);
    bufp->fullBit(oldp+51,(vlSelf->top__DOT__IP_send));
    bufp->fullBit(oldp+52,(vlSelf->top__DOT__IP_tx_last));
    bufp->fullQData(oldp+53,(vlSelf->top__DOT__IP_transmit),64);
    bufp->fullSData(oldp+55,(vlSelf->top__DOT__tt_len_data),16);
    bufp->fullBit(oldp+56,(vlSelf->top__DOT__IP_valid));
    bufp->fullBit(oldp+57,(vlSelf->top__DOT__IP_flush));
    bufp->fullBit(oldp+58,(vlSelf->top__DOT__IP_rx_last));
    bufp->fullSData(oldp+59,(vlSelf->top__DOT__IP_pseuder),16);
    bufp->fullQData(oldp+60,(vlSelf->top__DOT__IP_payload),64);
    bufp->fullCData(oldp+62,(vlSelf->top__DOT__IP_bytes_rcv_len),8);
    bufp->fullBit(oldp+63,(vlSelf->top__DOT__protocol_data_flag));
    bufp->fullQData(oldp+64,(vlSelf->top__DOT__MAC_payload_rcv),64);
    bufp->fullBit(oldp+66,(vlSelf->top__DOT__MAC_valid));
    bufp->fullBit(oldp+67,(vlSelf->top__DOT__CRC_flush));
    bufp->fullBit(oldp+68,(vlSelf->top__DOT__frame_ok));
    bufp->fullCData(oldp+69,(vlSelf->top__DOT__mac_rx__DOT__bytes_rcv),8);
    bufp->fullBit(oldp+70,(vlSelf->top__DOT__UDP_flush));
    bufp->fullBit(oldp+71,(vlSelf->top__DOT__UDP_valid));
    bufp->fullBit(oldp+72,(vlSelf->top__DOT__is_udp_rx));
    bufp->fullBit(oldp+73,(vlSelf->top__DOT__is_tcp_rx));
    bufp->fullQData(oldp+74,(vlSelf->top__DOT__UDP_payload),64);
    bufp->fullBit(oldp+76,(vlSelf->top__DOT__UDP_send));
    bufp->fullSData(oldp+77,((0xffffU & (IData)(vlSelf->top__DOT____Vcellout__udp_tx__IP_payload))),16);
    bufp->fullBit(oldp+78,(vlSelf->top__DOT__UDP_tx_last));
    bufp->fullCData(oldp+79,(vlSelf->top__DOT__ip_rx__DOT__state),4);
    bufp->fullCData(oldp+80,(vlSelf->top__DOT__ip_rx__DOT__nstate),4);
    bufp->fullSData(oldp+81,(vlSelf->top__DOT__ip_rx__DOT__IP_checksum),16);
    bufp->fullSData(oldp+82,(vlSelf->top__DOT__ip_rx__DOT__nIP_checksum),16);
    bufp->fullQData(oldp+83,(vlSelf->top__DOT__ip_rx__DOT__nIP_payload),64);
    bufp->fullSData(oldp+85,(vlSelf->top__DOT__ip_rx__DOT__bytes_rcv),16);
    bufp->fullSData(oldp+86,(vlSelf->top__DOT__ip_rx__DOT__nbytes_rcv),16);
    bufp->fullBit(oldp+87,(vlSelf->top__DOT__ip_rx__DOT__chksum_en));
    bufp->fullBit(oldp+88,(vlSelf->top__DOT__ip_rx__DOT__chksum_clear));
    bufp->fullQData(oldp+89,(vlSelf->top__DOT__ip_rx__DOT__chksum_in),64);
    bufp->fullSData(oldp+91,(((0U == (0xffffU & vlSelf->top__DOT__ip_rx__DOT__chksum_inst__DOT__TCP_checksum))
                               ? 0xffffU : (0xffffU 
                                            & vlSelf->top__DOT__ip_rx__DOT__chksum_inst__DOT__TCP_checksum))),16);
    bufp->fullIData(oldp+92,(((0U == (0xffffU & vlSelf->top__DOT__ip_rx__DOT__chksum_inst__DOT__TCP_checksum))
                               ? 0xffffU : (0xffffU 
                                            & vlSelf->top__DOT__ip_rx__DOT__chksum_inst__DOT__TCP_checksum))),17);
    bufp->fullSData(oldp+93,(vlSelf->top__DOT__ip_rx__DOT__dst_addr),16);
    bufp->fullSData(oldp+94,(vlSelf->top__DOT__ip_rx__DOT__ndst_addr),16);
    bufp->fullSData(oldp+95,(vlSelf->top__DOT__ip_rx__DOT__IP_len),16);
    bufp->fullSData(oldp+96,(vlSelf->top__DOT__ip_rx__DOT__nIP_len),16);
    bufp->fullCData(oldp+97,(vlSelf->top__DOT__ip_rx__DOT__nIP_bytes_rcv_len),8);
    bufp->fullSData(oldp+98,(vlSelf->top__DOT__ip_rx__DOT__nIP_pseuder),16);
    bufp->fullIData(oldp+99,(vlSelf->top__DOT__ip_rx__DOT__temp),20);
    bufp->fullBit(oldp+100,(vlSelf->top__DOT__ip_rx__DOT__nIP_valid));
    bufp->fullBit(oldp+101,(vlSelf->top__DOT__ip_rx__DOT__nIP_last));
    bufp->fullBit(oldp+102,(vlSelf->top__DOT__ip_rx__DOT__next_is_udp));
    bufp->fullBit(oldp+103,(vlSelf->top__DOT__ip_rx__DOT__next_is_tcp));
    bufp->fullBit(oldp+104,((0x28U < (IData)(vlSelf->top__DOT__ip_rx__DOT__IP_len))));
    bufp->fullSData(oldp+105,((0xffffU & (IData)((vlSelf->top__DOT__MAC_payload_rcv 
                                                  >> 0x30U)))),16);
    bufp->fullSData(oldp+106,((0xffffU & (IData)((vlSelf->top__DOT__MAC_payload_rcv 
                                                  >> 0x10U)))),16);
    bufp->fullCData(oldp+107,((0xffU & (IData)((vlSelf->top__DOT__MAC_payload_rcv 
                                                >> 8U)))),8);
    bufp->fullCData(oldp+108,((7U & (IData)((vlSelf->top__DOT__MAC_payload_rcv 
                                             >> 0x1dU)))),3);
    bufp->fullSData(oldp+109,((0x1fffU & (IData)((vlSelf->top__DOT__MAC_payload_rcv 
                                                  >> 0x10U)))),13);
    bufp->fullCData(oldp+110,(vlSelf->top__DOT__ip_rx__DOT__test_valid),4);
    bufp->fullCData(oldp+111,(vlSelf->top__DOT__ip_rx__DOT__ip_version),4);
    bufp->fullBit(oldp+112,(vlSelf->top__DOT__ip_rx__DOT__is_src_addr));
    bufp->fullBit(oldp+113,(vlSelf->top__DOT__ip_rx__DOT__is_ip_version_valid));
    bufp->fullIData(oldp+114,((IData)((vlSelf->top__DOT__MAC_payload_rcv 
                                       >> 0x10U))),32);
    bufp->fullIData(oldp+115,((((IData)(vlSelf->top__DOT__ip_rx__DOT__dst_addr) 
                                << 0x10U) | (0xffffU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__MAC_payload_rcv 
                                                        >> 0x30U))))),32);
    bufp->fullIData(oldp+116,(vlSelf->top__DOT__ip_rx__DOT__chksum_inst__DOT__TCP_checksum),17);
    bufp->fullIData(oldp+117,(vlSelf->top__DOT__ip_rx__DOT__chksum_inst__DOT__nTCP_checksum),17);
    bufp->fullIData(oldp+118,(vlSelf->top__DOT__ip_rx__DOT__chksum_inst__DOT__temp),20);
    bufp->fullIData(oldp+119,(vlSelf->top__DOT__ip_rx__DOT__chksum_inst__DOT__temp1),20);
    bufp->fullIData(oldp+120,(vlSelf->top__DOT__ip_rx__DOT__chksum_inst__DOT__temp2),20);
    bufp->fullQData(oldp+121,((QData)((IData)((0xffffU 
                                               & (IData)(vlSelf->top__DOT____Vcellout__udp_tx__IP_payload))))),64);
    bufp->fullCData(oldp+123,(vlSelf->top__DOT__ip_tx__DOT__IP_state),3);
    bufp->fullCData(oldp+124,(vlSelf->top__DOT__ip_tx__DOT__nxIP_state),3);
    bufp->fullBit(oldp+125,(vlSelf->top__DOT__ip_tx__DOT__chk_sum_valid));
    bufp->fullIData(oldp+126,(vlSelf->top__DOT__ip_tx__DOT__IPv4_chk_sum),17);
    bufp->fullSData(oldp+127,(vlSelf->top__DOT__ip_tx__DOT__chksum_rslt),16);
    bufp->fullBit(oldp+128,(vlSelf->top__DOT__mac_rx__DOT__crc_init));
    bufp->fullIData(oldp+129,((~ vlSelf->top__DOT__mac_rx__DOT__CRC__DOT__crc_reg)),32);
    bufp->fullSData(oldp+130,(vlSelf->top__DOT__mac_rx__DOT__xgmii_rxc_frame),16);
    bufp->fullBit(oldp+131,(vlSelf->top__DOT__mac_rx__DOT__sof_found));
    bufp->fullBit(oldp+132,(vlSelf->top__DOT__mac_rx__DOT__crc_valid));
    bufp->fullCData(oldp+133,(vlSelf->top__DOT__mac_rx__DOT__sof_lane),3);
    bufp->fullSData(oldp+134,(vlSelf->top__DOT__mac_rx__DOT__FCS_rxc),16);
    bufp->fullIData(oldp+135,(vlSelf->top__DOT__mac_rx__DOT__crc_check),32);
    bufp->fullWData(oldp+136,(vlSelf->top__DOT__mac_rx__DOT__frame_store),128);
    bufp->fullIData(oldp+140,(vlSelf->top__DOT__mac_rx__DOT__FCS_frame),32);
    bufp->fullIData(oldp+141,(vlSelf->top__DOT__mac_rx__DOT__rg),32);
    bufp->fullQData(oldp+142,(vlSelf->top__DOT__mac_rx__DOT__FCS_frame_cvt),64);
    bufp->fullBit(oldp+144,(vlSelf->top__DOT__mac_rx__DOT__crc_delay));
    bufp->fullBit(oldp+145,(vlSelf->top__DOT__mac_rx__DOT__soft_dl));
    bufp->fullBit(oldp+146,(vlSelf->top__DOT__mac_rx__DOT__nsoft_dl));
    bufp->fullQData(oldp+147,(vlSelf->top__DOT__mac_rx__DOT__MAC_payload_rcv_cvrt),64);
    bufp->fullCData(oldp+149,(vlSelf->top__DOT__mac_rx__DOT__bytes_rcv_dl),8);
    bufp->fullCData(oldp+150,(vlSelf->top__DOT__mac_rx__DOT__state),6);
    bufp->fullIData(oldp+151,(vlSelf->top__DOT__mac_rx__DOT__CRC__DOT__crc_reg),32);
    bufp->fullQData(oldp+152,(((QData)((IData)(vlSelf->top__DOT__mac_rx__DOT__FCS_frame)) 
                               << 0x20U)),64);
    bufp->fullQData(oldp+154,(vlSelf->top__DOT__mac_tx__DOT__xgmii_txd_l),64);
    bufp->fullCData(oldp+156,(vlSelf->top__DOT__mac_tx__DOT__xgmii_txc_l),8);
    bufp->fullCData(oldp+157,(vlSelf->top__DOT__mac_tx__DOT__state),7);
    bufp->fullBit(oldp+158,(vlSelf->top__DOT__mac_tx__DOT__crc_init));
    bufp->fullBit(oldp+159,(vlSelf->top__DOT__mac_tx__DOT__valid));
    bufp->fullBit(oldp+160,(vlSelf->top__DOT__mac_tx__DOT__IP_last_dl));
    bufp->fullIData(oldp+161,(vlSelf->top__DOT__mac_tx__DOT__crc_out),32);
    bufp->fullSData(oldp+162,(vlSelf->top__DOT__mac_tx__DOT__len_counter),16);
    bufp->fullSData(oldp+163,(vlSelf->top__DOT__mac_tx__DOT__nlen_counter),16);
    bufp->fullIData(oldp+164,(vlSelf->top__DOT__mac_tx__DOT__CRC__DOT__crc_reg),32);
    bufp->fullSData(oldp+165,(vlSelf->top__DOT__udp_rx__DOT__cnt),16);
    bufp->fullSData(oldp+166,(vlSelf->top__DOT__udp_rx__DOT__next_cnt),16);
    bufp->fullSData(oldp+167,(vlSelf->top__DOT__udp_rx__DOT__UDP_len),16);
    bufp->fullSData(oldp+168,(vlSelf->top__DOT__udp_rx__DOT__next_UDP_len),16);
    bufp->fullCData(oldp+169,(vlSelf->top__DOT__udp_rx__DOT__current_state),3);
    bufp->fullCData(oldp+170,(vlSelf->top__DOT__udp_rx__DOT__nstate),3);
    bufp->fullBit(oldp+171,(vlSelf->top__DOT__udp_rx__DOT__next_UDP_valid));
    bufp->fullQData(oldp+172,(vlSelf->top__DOT__udp_rx__DOT__next_UDP_payload),64);
    bufp->fullBit(oldp+174,((0x1234U == (0xffffU & (IData)(
                                                           (vlSelf->top__DOT__IP_payload 
                                                            >> 0x20U))))));
    bufp->fullBit(oldp+175,((0x4321U == (0xffffU & (IData)(
                                                           (vlSelf->top__DOT__IP_payload 
                                                            >> 0x10U))))));
    bufp->fullQData(oldp+176,(vlSelf->top__DOT____Vcellout__udp_tx__IP_payload),64);
    bufp->fullQData(oldp+178,(vlSelf->top__DOT__udp_tx__DOT__next_IP_payload),64);
    bufp->fullCData(oldp+180,(vlSelf->top__DOT__udp_tx__DOT__current_state),3);
    bufp->fullQData(oldp+181,(vlSelf->top__DOT__udp_tx__DOT__header_reg),64);
    bufp->fullBit(oldp+183,(vlSelf->CLK));
    bufp->fullBit(oldp+184,(vlSelf->nRST));
    bufp->fullBit(oldp+185,(vlSelf->TX_en));
    bufp->fullSData(oldp+186,(vlSelf->UDP_len),16);
    bufp->fullQData(oldp+187,(vlSelf->xgmii_txd),64);
    bufp->fullCData(oldp+189,(vlSelf->xgmii_txc),8);
    bufp->fullBit(oldp+190,(vlSelf->frame_end));
    bufp->fullQData(oldp+191,(vlSelf->xgmii_rxd),64);
    bufp->fullCData(oldp+193,(vlSelf->xgmii_rxc),8);
    bufp->fullBit(oldp+194,(vlSelf->protocol_last));
    bufp->fullSData(oldp+195,((((IData)(vlSelf->xgmii_rxc) 
                                << 8U) | (0xffU & ((IData)(vlSelf->top__DOT__mac_rx__DOT__xgmii_rxc_frame) 
                                                   >> 8U)))),16);
    bufp->fullSData(oldp+196,(((0U == (IData)(vlSelf->top__DOT__mac_rx__DOT__sof_lane))
                                ? (((IData)(vlSelf->xgmii_rxc) 
                                    << 8U) | (0xffU 
                                              & ((IData)(vlSelf->top__DOT__mac_rx__DOT__xgmii_rxc_frame) 
                                                 >> 8U)))
                                : (((IData)(vlSelf->xgmii_rxc) 
                                    << 8U) | (0xffU 
                                              & ((IData)(vlSelf->top__DOT__mac_rx__DOT__xgmii_rxc_frame) 
                                                 >> 4U))))),16);
    __Vtemp_1[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT__mac_rx__DOT__frame_store[3U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->top__DOT__mac_rx__DOT__frame_store[2U]))));
    __Vtemp_1[1U] = (IData)(((((QData)((IData)(vlSelf->top__DOT__mac_rx__DOT__frame_store[3U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->top__DOT__mac_rx__DOT__frame_store[2U]))) 
                             >> 0x20U));
    __Vtemp_1[2U] = (IData)(vlSelf->xgmii_rxd);
    __Vtemp_1[3U] = (IData)((vlSelf->xgmii_rxd >> 0x20U));
    bufp->fullWData(oldp+197,(__Vtemp_1),128);
    bufp->fullSData(oldp+201,((0xffffU & ((IData)(8U) 
                                          + (IData)(vlSelf->UDP_len)))),16);
}
