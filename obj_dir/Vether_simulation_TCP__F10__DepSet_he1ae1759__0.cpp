// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation_TCP__F10.h"
#include "Vether_simulation_TCP_flow_ctrl.h"
#include "Vether_simulation_TCP_receiver.h"

VL_INLINE_OPT void Vether_simulation_TCP__F10___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__8(Vether_simulation_TCP__F10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__8\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_FIFO_valid = vlSelf->__PVT__tcp_rcv->__PVT__TCP_valid;
    vlSelfRef.__PVT__offset_rx = vlSelf->__PVT__tcp_rcv->__PVT__offset_rx;
    vlSelfRef.__PVT__checksum_rx = vlSelf->__PVT__tcp_rcv->__PVT__checksum_rx;
    vlSelfRef.__PVT__urgent_pointer_rx = vlSelf->__PVT__tcp_rcv->__PVT__urgent_pointer_rx;
    vlSelfRef.__PVT__axis_data_rx = vlSelf->__PVT__tcp_rcv->__PVT__TCP_payload_rx;
    vlSelfRef.__PVT__window_size_rx = vlSelf->__PVT__tcp_rcv->__PVT__window_size_rx;
    vlSelfRef.__PVT__TCP_rx_last = vlSelf->__PVT__tcp_rcv->__PVT__TCP_last;
    vlSelfRef.__PVT__nw_segment = vlSelf->__PVT__tcp_rcv->__PVT__nw_segment;
    vlSelfRef.__PVT__ACK_rx = vlSelf->__PVT__tcp_rcv->__PVT__ACK_rx;
    vlSelfRef.__PVT__TCP_control_rx = vlSelf->__PVT__tcp_rcv->__PVT__TCP_control_rx;
    vlSelfRef.__PVT__rcv_data = vlSelf->__PVT__tcp_rcv->__PVT__rcv_data;
    vlSelfRef.__PVT__seq_num_rx = vlSelf->__PVT__tcp_rcv->__PVT__seq_num_rx;
    vlSelfRef.__PVT__bytes_rcv = vlSelf->__PVT__tcp_rcv->__PVT__bytes_rcv;
    vlSelf->__PVT__tcp_flow->__PVT__offset_rx = vlSelfRef.__PVT__offset_rx;
    vlSelf->__PVT__tcp_flow->__PVT__checksum_rx = vlSelfRef.__PVT__checksum_rx;
    vlSelf->__PVT__tcp_flow->__PVT__urgent_pointer_rx 
        = vlSelfRef.__PVT__urgent_pointer_rx;
    vlSelf->__PVT__tcp_flow->__PVT__window_size_rx 
        = vlSelfRef.__PVT__window_size_rx;
    vlSelf->__PVT__tcp_flow->__PVT__TCP_last = vlSelfRef.__PVT__TCP_rx_last;
    vlSelf->__PVT__tcp_flow->__PVT__nw_segment = vlSelfRef.__PVT__nw_segment;
    vlSelf->__PVT__tcp_flow->__PVT__ACK_rx = vlSelfRef.__PVT__ACK_rx;
    vlSelf->__PVT__tcp_flow->__PVT__TCP_control_rx 
        = vlSelfRef.__PVT__TCP_control_rx;
    vlSelf->__PVT__tcp_flow->__PVT__rcv_data = vlSelfRef.__PVT__rcv_data;
    vlSelf->__PVT__tcp_flow->__PVT__seq_num_rx = vlSelfRef.__PVT__seq_num_rx;
    vlSelf->__PVT__tcp_flow->__PVT__TCP_bytes_trk = vlSelfRef.__PVT__bytes_rcv;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__3(Vether_simulation_TCP__F10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__3\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__TCP_flush = vlSelf->__PVT__tcp_rcv->__PVT__TCP_flush;
    vlSelf->__PVT__tcp_flow->__PVT__TCP_flush = vlSelfRef.__PVT__TCP_flush;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__8(Vether_simulation_TCP__F10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__8\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_FIFO_valid = vlSelf->__PVT__tcp_rcv->__PVT__TCP_valid;
    vlSelfRef.__PVT__offset_rx = vlSelf->__PVT__tcp_rcv->__PVT__offset_rx;
    vlSelfRef.__PVT__checksum_rx = vlSelf->__PVT__tcp_rcv->__PVT__checksum_rx;
    vlSelfRef.__PVT__urgent_pointer_rx = vlSelf->__PVT__tcp_rcv->__PVT__urgent_pointer_rx;
    vlSelfRef.__PVT__axis_data_rx = vlSelf->__PVT__tcp_rcv->__PVT__TCP_payload_rx;
    vlSelfRef.__PVT__window_size_rx = vlSelf->__PVT__tcp_rcv->__PVT__window_size_rx;
    vlSelfRef.__PVT__TCP_rx_last = vlSelf->__PVT__tcp_rcv->__PVT__TCP_last;
    vlSelfRef.__PVT__nw_segment = vlSelf->__PVT__tcp_rcv->__PVT__nw_segment;
    vlSelfRef.__PVT__ACK_rx = vlSelf->__PVT__tcp_rcv->__PVT__ACK_rx;
    vlSelfRef.__PVT__TCP_control_rx = vlSelf->__PVT__tcp_rcv->__PVT__TCP_control_rx;
    vlSelfRef.__PVT__rcv_data = vlSelf->__PVT__tcp_rcv->__PVT__rcv_data;
    vlSelfRef.__PVT__seq_num_rx = vlSelf->__PVT__tcp_rcv->__PVT__seq_num_rx;
    vlSelfRef.__PVT__bytes_rcv = vlSelf->__PVT__tcp_rcv->__PVT__bytes_rcv;
    vlSelf->__PVT__tcp_flow->__PVT__offset_rx = vlSelfRef.__PVT__offset_rx;
    vlSelf->__PVT__tcp_flow->__PVT__checksum_rx = vlSelfRef.__PVT__checksum_rx;
    vlSelf->__PVT__tcp_flow->__PVT__urgent_pointer_rx 
        = vlSelfRef.__PVT__urgent_pointer_rx;
    vlSelf->__PVT__tcp_flow->__PVT__window_size_rx 
        = vlSelfRef.__PVT__window_size_rx;
    vlSelf->__PVT__tcp_flow->__PVT__TCP_last = vlSelfRef.__PVT__TCP_rx_last;
    vlSelf->__PVT__tcp_flow->__PVT__nw_segment = vlSelfRef.__PVT__nw_segment;
    vlSelf->__PVT__tcp_flow->__PVT__ACK_rx = vlSelfRef.__PVT__ACK_rx;
    vlSelf->__PVT__tcp_flow->__PVT__TCP_control_rx 
        = vlSelfRef.__PVT__TCP_control_rx;
    vlSelf->__PVT__tcp_flow->__PVT__rcv_data = vlSelfRef.__PVT__rcv_data;
    vlSelf->__PVT__tcp_flow->__PVT__seq_num_rx = vlSelfRef.__PVT__seq_num_rx;
    vlSelf->__PVT__tcp_flow->__PVT__TCP_bytes_trk = vlSelfRef.__PVT__bytes_rcv;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__3(Vether_simulation_TCP__F10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__3\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__TCP_flush = vlSelf->__PVT__tcp_rcv->__PVT__TCP_flush;
    vlSelf->__PVT__tcp_flow->__PVT__TCP_flush = vlSelfRef.__PVT__TCP_flush;
}
