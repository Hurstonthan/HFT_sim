// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation_TCP_ISN.h"
#include "Vether_simulation_TCP__F10.h"
#include "Vether_simulation_TCP_flow_ctrl.h"
#include "Vether_simulation_TCP_receiver.h"
#include "Vether_simulation_TCP_tx.h"
#include "Vether_simulation_checksum_TCP.h"
#include "Vether_simulation_flex_counter__S20.h"

VL_ATTR_COLD void Vether_simulation_TCP__F10___stl_sequent__TOP__ether_simulation__svr_inst__u_tcp__0(Vether_simulation_TCP__F10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10___stl_sequent__TOP__ether_simulation__svr_inst__u_tcp__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_FIFO_valid = vlSelf->__PVT__tcp_rcv->__PVT__TCP_valid;
    vlSelfRef.__PVT__urgent_pointer_rx = vlSelf->__PVT__tcp_rcv->__PVT__urgent_pointer_rx;
    vlSelfRef.__PVT__checksum_rx = vlSelf->__PVT__tcp_rcv->__PVT__checksum_rx;
    vlSelfRef.__PVT__offset_rx = vlSelf->__PVT__tcp_rcv->__PVT__offset_rx;
    vlSelfRef.__PVT__bytes_sent = vlSelf->__PVT__TCP_tx->__PVT__bytes_sent;
    vlSelfRef.__PVT__seq_rcv_start = vlSelf->__PVT__tcp_flow->__PVT__seq_rcv_str;
    vlSelfRef.__PVT__count_en_timeout = vlSelf->__PVT__tcp_flow->__PVT__count_en_timeout;
    vlSelfRef.__PVT__clear_timeout = vlSelf->__PVT__tcp_flow->__PVT__clear_timeout;
    vlSelfRef.__PVT__axis_data_rx = vlSelf->__PVT__tcp_rcv->__PVT__TCP_payload_rx;
    vlSelfRef.__PVT__out_order_req = vlSelf->__PVT__tcp_flow->__PVT__out_order_req;
    vlSelfRef.__PVT__handshake_done = vlSelf->__PVT__tcp_flow->__PVT__hand_shake_done;
    vlSelfRef.__PVT__TCP_checksum_out = vlSelf->__PVT__inst->__PVT__TCP_checksum_out;
    vlSelfRef.__PVT__TCP_tx_last = vlSelf->__PVT__TCP_tx->__PVT__TCP_tx_last;
    vlSelfRef.__PVT__TCP_transmit = vlSelf->__PVT__TCP_tx->__PVT__TCP_transmit;
    vlSelfRef.__PVT__TCP_len_data = vlSelf->__PVT__TCP_tx->__PVT__TCP_len_data;
    vlSelfRef.__PVT__window_size_rx = vlSelf->__PVT__tcp_rcv->__PVT__window_size_rx;
    vlSelfRef.__PVT__timeout_flag = vlSelf->__PVT__timeout_fl->__PVT__rollover_flag;
    vlSelfRef.__PVT__TCP_rx_last = vlSelf->__PVT__tcp_rcv->__PVT__TCP_last;
    vlSelfRef.__PVT__ISN_num = vlSelf->__PVT__ISN_gen->__PVT__ISN_num;
    vlSelfRef.__PVT__nw_segment = vlSelf->__PVT__tcp_rcv->__PVT__nw_segment;
    vlSelfRef.__PVT__ACK_rx = vlSelf->__PVT__tcp_rcv->__PVT__ACK_rx;
    vlSelfRef.__PVT__TCP_control_rx = vlSelf->__PVT__tcp_rcv->__PVT__TCP_control_rx;
    vlSelfRef.__PVT__seq_num_rx = vlSelf->__PVT__tcp_rcv->__PVT__seq_num_rx;
    vlSelfRef.__PVT__seq_up = vlSelf->__PVT__TCP_tx->__PVT__seq_up;
    vlSelfRef.__PVT__rcv_data = vlSelf->__PVT__tcp_rcv->__PVT__rcv_data;
    vlSelfRef.__PVT__bytes_rcv = vlSelf->__PVT__tcp_rcv->__PVT__bytes_rcv;
    vlSelf->__PVT__tcp_flow->__PVT__end_ss = vlSelfRef.__PVT__end_ss;
    vlSelf->__PVT__TCP_tx->__PVT__rd_FIFO_valid = vlSelfRef.__PVT__rd_FIFO_valid_tx;
    vlSelf->__PVT__TCP_tx->__PVT__rd_FIFO_payload = vlSelfRef.__PVT__rd_FIFO_payload;
    vlSelf->__PVT__TCP_tx->__PVT__rd_FIFO_last = vlSelfRef.__PVT__rd_FIFO_last;
    vlSelf->__PVT__tcp_flow->__PVT__seq_rx_FIFO_rd 
        = vlSelfRef.__PVT__seq_rx_FIFO_rd;
    vlSelf->__PVT__tcp_flow->__PVT__rd_FIFO_en = vlSelfRef.__PVT__rd_FIFO_en_rcv;
    vlSelfRef.__Vcellinp__tcp_flow__wr_FIFO_len = VL_EXTEND_II(8,4, (IData)(vlSelfRef.__PVT__wr_FIFO_len));
    vlSelfRef.__Vcellinp__tcp_flow__wr_FIFO_ptr = VL_EXTEND_II(11,4, (IData)(vlSelfRef.__PVT__wr_ptr_out));
    vlSelf->__PVT__tcp_rcv->__PVT__IP_pseuder = vlSelfRef.__PVT__IP_pseuder;
    vlSelf->__PVT__tcp_rcv->__PVT__IP_payload_rx = vlSelfRef.__PVT__IP_payload;
    vlSelf->__PVT__tcp_rcv->__PVT__IP_last = vlSelfRef.__PVT__IP_last;
    vlSelf->__PVT__tcp_rcv->__PVT__valid_IP_header_rx 
        = vlSelfRef.__PVT__IP_valid;
    vlSelf->__PVT__tcp_rcv->__PVT__IP_bytes_rcv = vlSelfRef.__PVT__IP_bytes_rcv;
    vlSelfRef.__Vcellinp__TCP_tx__bytes_abt_sent = 
        VL_EXTEND_II(32,16, (IData)(vlSelfRef.__PVT__bytes_abt_sent));
    vlSelfRef.__Vcellinp__tcp_flow__bytes_abt_sent 
        = VL_EXTEND_II(32,16, (IData)(vlSelfRef.__PVT__bytes_abt_sent));
    vlSelf->__PVT__tcp_flow->__PVT__urgent_pointer_rx 
        = vlSelfRef.__PVT__urgent_pointer_rx;
    vlSelf->__PVT__tcp_flow->__PVT__checksum_rx = vlSelfRef.__PVT__checksum_rx;
    vlSelf->__PVT__tcp_flow->__PVT__offset_rx = vlSelfRef.__PVT__offset_rx;
    vlSelf->__PVT__tcp_flow->__PVT__bytes_sent = vlSelfRef.__PVT__bytes_sent;
    vlSelf->__PVT__timeout_fl->__PVT__count_enable 
        = vlSelfRef.__PVT__count_en_timeout;
    vlSelf->__PVT__timeout_fl->__PVT__clear = vlSelfRef.__PVT__clear_timeout;
    vlSelf->__PVT__tcp_flow->__PVT__window_size_rx 
        = vlSelfRef.__PVT__window_size_rx;
    vlSelf->__PVT__tcp_flow->__PVT__timeout_flag = vlSelfRef.__PVT__timeout_flag;
    vlSelf->__PVT__tcp_flow->__PVT__TCP_last = vlSelfRef.__PVT__TCP_rx_last;
    vlSelf->__PVT__tcp_flow->__PVT__ISN_num = vlSelfRef.__PVT__ISN_num;
    vlSelf->__PVT__tcp_flow->__PVT__nw_segment = vlSelfRef.__PVT__nw_segment;
    vlSelf->__PVT__tcp_flow->__PVT__ACK_rx = vlSelfRef.__PVT__ACK_rx;
    vlSelf->__PVT__tcp_flow->__PVT__TCP_control_rx 
        = vlSelfRef.__PVT__TCP_control_rx;
    vlSelf->__PVT__tcp_flow->__PVT__seq_num_rx = vlSelfRef.__PVT__seq_num_rx;
    vlSelf->__PVT__tcp_flow->__PVT__seq_up = vlSelfRef.__PVT__seq_up;
    vlSelf->__PVT__tcp_flow->__PVT__rcv_data = vlSelfRef.__PVT__rcv_data;
    vlSelf->__PVT__tcp_flow->__PVT__TCP_bytes_trk = vlSelfRef.__PVT__bytes_rcv;
    vlSelf->__PVT__tcp_flow->__PVT__wr_FIFO_len = vlSelfRef.__Vcellinp__tcp_flow__wr_FIFO_len;
    vlSelf->__PVT__tcp_flow->__PVT__wr_FIFO_ptr = vlSelfRef.__Vcellinp__tcp_flow__wr_FIFO_ptr;
    vlSelf->__PVT__TCP_tx->__PVT__bytes_abt_sent = vlSelfRef.__Vcellinp__TCP_tx__bytes_abt_sent;
    vlSelf->__PVT__tcp_flow->__PVT__bytes_abt_sent 
        = vlSelfRef.__Vcellinp__tcp_flow__bytes_abt_sent;
}

VL_ATTR_COLD void Vether_simulation_TCP__F10___stl_sequent__TOP__ether_simulation__svr_inst__u_tcp__1(Vether_simulation_TCP__F10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10___stl_sequent__TOP__ether_simulation__svr_inst__u_tcp__1\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rcv_next = vlSelf->__PVT__tcp_flow->__PVT__rcv_next_out;
    vlSelfRef.__PVT__seq_num = vlSelf->__PVT__tcp_flow->__PVT__seq_num_out;
    vlSelfRef.__PVT__ACK_num = vlSelf->__PVT__tcp_flow->__PVT__ACK_num;
    vlSelfRef.__PVT__ACK_rcv_flag = vlSelf->__PVT__tcp_flow->__PVT__ACK_rcv_flag;
    vlSelf->__PVT__tcp_flow->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__tcp_rcv->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__TCP_tx->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__ISN_gen->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__timeout_fl->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__inst->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__tcp_flow->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__tcp_rcv->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__TCP_tx->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__ISN_gen->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__timeout_fl->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__inst->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__inst->__PVT__TCP_payload_tx = vlSelfRef.__PVT__soupbin_TCP_payload;
    vlSelf->__PVT__inst->__PVT__wr_FIFO_en = vlSelfRef.__PVT__wr_FIFO_TX_en;
    vlSelf->__PVT__inst->__PVT__axis_last = vlSelfRef.__PVT__wr_axis_last;
    vlSelf->__PVT__inst->__PVT__TX_en = vlSelfRef.__PVT__TX_en;
    vlSelf->__PVT__tcp_flow->__PVT__full = vlSelfRef.__PVT__full;
    vlSelf->__PVT__inst->__PVT__re_trans = vlSelfRef.__PVT__re_trans;
    vlSelfRef.__PVT__TCP_basesum_payload = ((IData)(vlSelfRef.__PVT__re_trans)
                                             ? (IData)(vlSelfRef.__PVT__checksum_re_trans)
                                             : (IData)(vlSelfRef.__PVT__TCP_checksum_out));
    vlSelfRef.__PVT__TCP_flush = vlSelf->__PVT__tcp_rcv->__PVT__TCP_flush;
    vlSelf->__PVT__TCP_tx->__PVT__TCP_basesum_payload 
        = vlSelfRef.__PVT__TCP_basesum_payload;
    vlSelfRef.__PVT__checksum_TX = vlSelfRef.__PVT__TCP_basesum_payload;
    vlSelf->__PVT__tcp_flow->__PVT__TCP_flush = vlSelfRef.__PVT__TCP_flush;
}

VL_ATTR_COLD void Vether_simulation_TCP__F10___stl_sequent__TOP__ether_simulation__clt_inst__u_tcp__0(Vether_simulation_TCP__F10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10___stl_sequent__TOP__ether_simulation__clt_inst__u_tcp__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_FIFO_valid = vlSelf->__PVT__tcp_rcv->__PVT__TCP_valid;
    vlSelfRef.__PVT__urgent_pointer_rx = vlSelf->__PVT__tcp_rcv->__PVT__urgent_pointer_rx;
    vlSelfRef.__PVT__checksum_rx = vlSelf->__PVT__tcp_rcv->__PVT__checksum_rx;
    vlSelfRef.__PVT__offset_rx = vlSelf->__PVT__tcp_rcv->__PVT__offset_rx;
    vlSelfRef.__PVT__bytes_sent = vlSelf->__PVT__TCP_tx->__PVT__bytes_sent;
    vlSelfRef.__PVT__seq_rcv_start = vlSelf->__PVT__tcp_flow->__PVT__seq_rcv_str;
    vlSelfRef.__PVT__count_en_timeout = vlSelf->__PVT__tcp_flow->__PVT__count_en_timeout;
    vlSelfRef.__PVT__clear_timeout = vlSelf->__PVT__tcp_flow->__PVT__clear_timeout;
    vlSelfRef.__PVT__axis_data_rx = vlSelf->__PVT__tcp_rcv->__PVT__TCP_payload_rx;
    vlSelfRef.__PVT__out_order_req = vlSelf->__PVT__tcp_flow->__PVT__out_order_req;
    vlSelfRef.__PVT__handshake_done = vlSelf->__PVT__tcp_flow->__PVT__hand_shake_done;
    vlSelfRef.__PVT__TCP_checksum_out = vlSelf->__PVT__inst->__PVT__TCP_checksum_out;
    vlSelfRef.__PVT__TCP_tx_last = vlSelf->__PVT__TCP_tx->__PVT__TCP_tx_last;
    vlSelfRef.__PVT__TCP_transmit = vlSelf->__PVT__TCP_tx->__PVT__TCP_transmit;
    vlSelfRef.__PVT__TCP_len_data = vlSelf->__PVT__TCP_tx->__PVT__TCP_len_data;
    vlSelfRef.__PVT__window_size_rx = vlSelf->__PVT__tcp_rcv->__PVT__window_size_rx;
    vlSelfRef.__PVT__timeout_flag = vlSelf->__PVT__timeout_fl->__PVT__rollover_flag;
    vlSelfRef.__PVT__TCP_rx_last = vlSelf->__PVT__tcp_rcv->__PVT__TCP_last;
    vlSelfRef.__PVT__ISN_num = vlSelf->__PVT__ISN_gen->__PVT__ISN_num;
    vlSelfRef.__PVT__nw_segment = vlSelf->__PVT__tcp_rcv->__PVT__nw_segment;
    vlSelfRef.__PVT__ACK_rx = vlSelf->__PVT__tcp_rcv->__PVT__ACK_rx;
    vlSelfRef.__PVT__TCP_control_rx = vlSelf->__PVT__tcp_rcv->__PVT__TCP_control_rx;
    vlSelfRef.__PVT__seq_num_rx = vlSelf->__PVT__tcp_rcv->__PVT__seq_num_rx;
    vlSelfRef.__PVT__seq_up = vlSelf->__PVT__TCP_tx->__PVT__seq_up;
    vlSelfRef.__PVT__rcv_data = vlSelf->__PVT__tcp_rcv->__PVT__rcv_data;
    vlSelfRef.__PVT__bytes_rcv = vlSelf->__PVT__tcp_rcv->__PVT__bytes_rcv;
    vlSelf->__PVT__tcp_flow->__PVT__end_ss = vlSelfRef.__PVT__end_ss;
    vlSelf->__PVT__TCP_tx->__PVT__rd_FIFO_valid = vlSelfRef.__PVT__rd_FIFO_valid_tx;
    vlSelf->__PVT__TCP_tx->__PVT__rd_FIFO_payload = vlSelfRef.__PVT__rd_FIFO_payload;
    vlSelf->__PVT__TCP_tx->__PVT__rd_FIFO_last = vlSelfRef.__PVT__rd_FIFO_last;
    vlSelf->__PVT__tcp_flow->__PVT__seq_rx_FIFO_rd 
        = vlSelfRef.__PVT__seq_rx_FIFO_rd;
    vlSelf->__PVT__tcp_flow->__PVT__rd_FIFO_en = vlSelfRef.__PVT__rd_FIFO_en_rcv;
    vlSelfRef.__Vcellinp__tcp_flow__wr_FIFO_len = VL_EXTEND_II(8,4, (IData)(vlSelfRef.__PVT__wr_FIFO_len));
    vlSelfRef.__Vcellinp__tcp_flow__wr_FIFO_ptr = VL_EXTEND_II(11,4, (IData)(vlSelfRef.__PVT__wr_ptr_out));
    vlSelf->__PVT__tcp_rcv->__PVT__IP_pseuder = vlSelfRef.__PVT__IP_pseuder;
    vlSelf->__PVT__tcp_rcv->__PVT__IP_payload_rx = vlSelfRef.__PVT__IP_payload;
    vlSelf->__PVT__tcp_rcv->__PVT__IP_last = vlSelfRef.__PVT__IP_last;
    vlSelf->__PVT__tcp_rcv->__PVT__valid_IP_header_rx 
        = vlSelfRef.__PVT__IP_valid;
    vlSelf->__PVT__tcp_rcv->__PVT__IP_bytes_rcv = vlSelfRef.__PVT__IP_bytes_rcv;
    vlSelfRef.__Vcellinp__TCP_tx__bytes_abt_sent = 
        VL_EXTEND_II(32,16, (IData)(vlSelfRef.__PVT__bytes_abt_sent));
    vlSelfRef.__Vcellinp__tcp_flow__bytes_abt_sent 
        = VL_EXTEND_II(32,16, (IData)(vlSelfRef.__PVT__bytes_abt_sent));
    vlSelf->__PVT__tcp_flow->__PVT__urgent_pointer_rx 
        = vlSelfRef.__PVT__urgent_pointer_rx;
    vlSelf->__PVT__tcp_flow->__PVT__checksum_rx = vlSelfRef.__PVT__checksum_rx;
    vlSelf->__PVT__tcp_flow->__PVT__offset_rx = vlSelfRef.__PVT__offset_rx;
    vlSelf->__PVT__tcp_flow->__PVT__bytes_sent = vlSelfRef.__PVT__bytes_sent;
    vlSelf->__PVT__timeout_fl->__PVT__count_enable 
        = vlSelfRef.__PVT__count_en_timeout;
    vlSelf->__PVT__timeout_fl->__PVT__clear = vlSelfRef.__PVT__clear_timeout;
    vlSelf->__PVT__tcp_flow->__PVT__window_size_rx 
        = vlSelfRef.__PVT__window_size_rx;
    vlSelf->__PVT__tcp_flow->__PVT__timeout_flag = vlSelfRef.__PVT__timeout_flag;
    vlSelf->__PVT__tcp_flow->__PVT__TCP_last = vlSelfRef.__PVT__TCP_rx_last;
    vlSelf->__PVT__tcp_flow->__PVT__ISN_num = vlSelfRef.__PVT__ISN_num;
    vlSelf->__PVT__tcp_flow->__PVT__nw_segment = vlSelfRef.__PVT__nw_segment;
    vlSelf->__PVT__tcp_flow->__PVT__ACK_rx = vlSelfRef.__PVT__ACK_rx;
    vlSelf->__PVT__tcp_flow->__PVT__TCP_control_rx 
        = vlSelfRef.__PVT__TCP_control_rx;
    vlSelf->__PVT__tcp_flow->__PVT__seq_num_rx = vlSelfRef.__PVT__seq_num_rx;
    vlSelf->__PVT__tcp_flow->__PVT__seq_up = vlSelfRef.__PVT__seq_up;
    vlSelf->__PVT__tcp_flow->__PVT__rcv_data = vlSelfRef.__PVT__rcv_data;
    vlSelf->__PVT__tcp_flow->__PVT__TCP_bytes_trk = vlSelfRef.__PVT__bytes_rcv;
    vlSelf->__PVT__tcp_flow->__PVT__wr_FIFO_len = vlSelfRef.__Vcellinp__tcp_flow__wr_FIFO_len;
    vlSelf->__PVT__tcp_flow->__PVT__wr_FIFO_ptr = vlSelfRef.__Vcellinp__tcp_flow__wr_FIFO_ptr;
    vlSelf->__PVT__TCP_tx->__PVT__bytes_abt_sent = vlSelfRef.__Vcellinp__TCP_tx__bytes_abt_sent;
    vlSelf->__PVT__tcp_flow->__PVT__bytes_abt_sent 
        = vlSelfRef.__Vcellinp__tcp_flow__bytes_abt_sent;
}

VL_ATTR_COLD void Vether_simulation_TCP__F10___stl_sequent__TOP__ether_simulation__clt_inst__u_tcp__1(Vether_simulation_TCP__F10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10___stl_sequent__TOP__ether_simulation__clt_inst__u_tcp__1\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rcv_next = vlSelf->__PVT__tcp_flow->__PVT__rcv_next_out;
    vlSelfRef.__PVT__seq_num = vlSelf->__PVT__tcp_flow->__PVT__seq_num_out;
    vlSelfRef.__PVT__ACK_num = vlSelf->__PVT__tcp_flow->__PVT__ACK_num;
    vlSelfRef.__PVT__ACK_rcv_flag = vlSelf->__PVT__tcp_flow->__PVT__ACK_rcv_flag;
    vlSelf->__PVT__tcp_flow->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__tcp_rcv->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__TCP_tx->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__ISN_gen->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__timeout_fl->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__inst->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__tcp_flow->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__tcp_rcv->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__TCP_tx->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__ISN_gen->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__timeout_fl->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__inst->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelf->__PVT__inst->__PVT__TCP_payload_tx = vlSelfRef.__PVT__soupbin_TCP_payload;
    vlSelf->__PVT__inst->__PVT__wr_FIFO_en = vlSelfRef.__PVT__wr_FIFO_TX_en;
    vlSelf->__PVT__inst->__PVT__axis_last = vlSelfRef.__PVT__wr_axis_last;
    vlSelf->__PVT__inst->__PVT__TX_en = vlSelfRef.__PVT__TX_en;
    vlSelf->__PVT__tcp_flow->__PVT__full = vlSelfRef.__PVT__full;
    vlSelf->__PVT__inst->__PVT__re_trans = vlSelfRef.__PVT__re_trans;
    vlSelfRef.__PVT__TCP_basesum_payload = ((IData)(vlSelfRef.__PVT__re_trans)
                                             ? (IData)(vlSelfRef.__PVT__checksum_re_trans)
                                             : (IData)(vlSelfRef.__PVT__TCP_checksum_out));
    vlSelfRef.__PVT__TCP_flush = vlSelf->__PVT__tcp_rcv->__PVT__TCP_flush;
    vlSelf->__PVT__TCP_tx->__PVT__TCP_basesum_payload 
        = vlSelfRef.__PVT__TCP_basesum_payload;
    vlSelfRef.__PVT__checksum_TX = vlSelfRef.__PVT__TCP_basesum_payload;
    vlSelf->__PVT__tcp_flow->__PVT__TCP_flush = vlSelfRef.__PVT__TCP_flush;
}
