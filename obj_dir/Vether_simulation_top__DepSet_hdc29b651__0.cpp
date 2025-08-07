// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation_TCP__F10.h"
#include "Vether_simulation_payload_FIFO.h"
#include "Vether_simulation_top.h"

VL_INLINE_OPT void Vether_simulation_top___nba_sequent__TOP__ether_simulation__svr_inst__0(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_sequent__TOP__ether_simulation__svr_inst__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__axis_rd_data = vlSelf->__PVT__u_payload_fifo->__PVT__axis_rd_data;
    vlSelfRef.__PVT__axis_r_valid = vlSelf->__PVT__u_payload_fifo->__PVT__axis_r_valid;
    vlSelfRef.__PVT__rd_pfifo_en_int = vlSelf->__PVT__u_payload_fifo->__PVT__rd_FIFO_en;
    vlSelfRef.__PVT__seq_rx_FIFO_rd_int = vlSelf->__PVT__u_payload_fifo->__PVT__seq_rx_FIFO_rd;
    vlSelfRef.__PVT__wr_pfifo_len_int = vlSelf->__PVT__u_payload_fifo->__PVT__wr_FIFO_len;
    vlSelfRef.__PVT__wr_ptr_out_int = vlSelf->__PVT__u_payload_fifo->__PVT__wr_ptr_out;
    vlSelfRef.__PVT__full = vlSelf->__PVT__u_payload_fifo->__PVT__full;
    vlSelf->__PVT__u_tcp->__PVT__rd_FIFO_en_rcv = vlSelfRef.__PVT__rd_pfifo_en_int;
    vlSelf->__PVT__u_tcp->__PVT__seq_rx_FIFO_rd = vlSelfRef.__PVT__seq_rx_FIFO_rd_int;
    vlSelf->__PVT__u_tcp->__PVT__wr_FIFO_len = vlSelfRef.__PVT__wr_pfifo_len_int;
    vlSelf->__PVT__u_tcp->__PVT__wr_ptr_out = vlSelfRef.__PVT__wr_ptr_out_int;
    vlSelf->__PVT__u_tcp->__PVT__full = vlSelfRef.__PVT__full;
}

VL_INLINE_OPT void Vether_simulation_top___nba_sequent__TOP__ether_simulation__svr_inst__10(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_sequent__TOP__ether_simulation__svr_inst__10\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__axis_data_rx_int = vlSelf->__PVT__u_tcp->__PVT__axis_data_rx;
    vlSelfRef.__PVT__TCP_rx_last = vlSelf->__PVT__u_tcp->__PVT__TCP_rx_last;
    vlSelfRef.__PVT__nw_segment = vlSelf->__PVT__u_tcp->__PVT__nw_segment;
    vlSelf->__PVT__u_payload_fifo->__PVT__axis_data_rx 
        = vlSelfRef.__PVT__axis_data_rx_int;
    vlSelf->__PVT__u_payload_fifo->__PVT__axis_t_last 
        = vlSelfRef.__PVT__TCP_rx_last;
    vlSelf->__PVT__u_payload_fifo->__PVT__nw_segment 
        = vlSelfRef.__PVT__nw_segment;
}

VL_INLINE_OPT void Vether_simulation_top___nba_comb__TOP__ether_simulation__svr_inst__4(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_comb__TOP__ether_simulation__svr_inst__4\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__TCP_flush_int = vlSelf->__PVT__u_tcp->__PVT__TCP_flush;
    vlSelf->__PVT__u_payload_fifo->__PVT__TCP_flush 
        = vlSelfRef.__PVT__TCP_flush_int;
}

VL_INLINE_OPT void Vether_simulation_top___nba_comb__TOP__ether_simulation__svr_inst__8(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_comb__TOP__ether_simulation__svr_inst__8\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__TCP_stop_flg_int = vlSelf->__PVT__u_tcp->__PVT__TCP_stop_flg;
    vlSelfRef.__PVT__wr_pfifo_en_int = vlSelf->__PVT__u_tcp->__PVT__wr_FIFO_en;
    vlSelfRef.__PVT__wr_pfifo_offset_int = vlSelf->__PVT__u_tcp->__PVT__wr_FIFO_offset;
    vlSelfRef.__PVT__rd_pfifo_valid_int = vlSelf->__PVT__u_tcp->__PVT__rd_FIFO_valid_rcv;
    vlSelfRef.__PVT__rd_pfifo_ptr_int = vlSelf->__PVT__u_tcp->__PVT__rd_FIFO_ptr;
    vlSelfRef.__PVT__rd_pfifo_len_int = vlSelf->__PVT__u_tcp->__PVT__rd_FIFO_len;
    vlSelfRef.__PVT__TCP_stop_flag = vlSelfRef.__PVT__TCP_stop_flg_int;
    vlSelf->__PVT__u_payload_fifo->__PVT__wr_FIFO_en 
        = vlSelfRef.__PVT__wr_pfifo_en_int;
    vlSelf->__PVT__u_payload_fifo->__PVT__wr_FIFO_offset 
        = vlSelfRef.__PVT__wr_pfifo_offset_int;
    vlSelf->__PVT__u_payload_fifo->__PVT__rd_FIFO_valid 
        = vlSelfRef.__PVT__rd_pfifo_valid_int;
    vlSelf->__PVT__u_payload_fifo->__PVT__rd_FIFO_ptr 
        = vlSelfRef.__PVT__rd_pfifo_ptr_int;
    vlSelf->__PVT__u_payload_fifo->__PVT__rd_FIFO_len 
        = vlSelfRef.__PVT__rd_pfifo_len_int;
}

VL_INLINE_OPT void Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__0(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__axis_rd_data = vlSelf->__PVT__u_payload_fifo->__PVT__axis_rd_data;
    vlSelfRef.__PVT__axis_r_valid = vlSelf->__PVT__u_payload_fifo->__PVT__axis_r_valid;
    vlSelfRef.__PVT__rd_pfifo_en_int = vlSelf->__PVT__u_payload_fifo->__PVT__rd_FIFO_en;
    vlSelfRef.__PVT__seq_rx_FIFO_rd_int = vlSelf->__PVT__u_payload_fifo->__PVT__seq_rx_FIFO_rd;
    vlSelfRef.__PVT__wr_pfifo_len_int = vlSelf->__PVT__u_payload_fifo->__PVT__wr_FIFO_len;
    vlSelfRef.__PVT__wr_ptr_out_int = vlSelf->__PVT__u_payload_fifo->__PVT__wr_ptr_out;
    vlSelfRef.__PVT__full = vlSelf->__PVT__u_payload_fifo->__PVT__full;
    vlSelf->__PVT__u_tcp->__PVT__rd_FIFO_en_rcv = vlSelfRef.__PVT__rd_pfifo_en_int;
    vlSelf->__PVT__u_tcp->__PVT__seq_rx_FIFO_rd = vlSelfRef.__PVT__seq_rx_FIFO_rd_int;
    vlSelf->__PVT__u_tcp->__PVT__wr_FIFO_len = vlSelfRef.__PVT__wr_pfifo_len_int;
    vlSelf->__PVT__u_tcp->__PVT__wr_ptr_out = vlSelfRef.__PVT__wr_ptr_out_int;
    vlSelf->__PVT__u_tcp->__PVT__full = vlSelfRef.__PVT__full;
}

VL_INLINE_OPT void Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__10(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_sequent__TOP__ether_simulation__clt_inst__10\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__axis_data_rx_int = vlSelf->__PVT__u_tcp->__PVT__axis_data_rx;
    vlSelfRef.__PVT__TCP_rx_last = vlSelf->__PVT__u_tcp->__PVT__TCP_rx_last;
    vlSelfRef.__PVT__nw_segment = vlSelf->__PVT__u_tcp->__PVT__nw_segment;
    vlSelf->__PVT__u_payload_fifo->__PVT__axis_data_rx 
        = vlSelfRef.__PVT__axis_data_rx_int;
    vlSelf->__PVT__u_payload_fifo->__PVT__axis_t_last 
        = vlSelfRef.__PVT__TCP_rx_last;
    vlSelf->__PVT__u_payload_fifo->__PVT__nw_segment 
        = vlSelfRef.__PVT__nw_segment;
}

VL_INLINE_OPT void Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__4(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__4\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__TCP_flush_int = vlSelf->__PVT__u_tcp->__PVT__TCP_flush;
    vlSelf->__PVT__u_payload_fifo->__PVT__TCP_flush 
        = vlSelfRef.__PVT__TCP_flush_int;
}

VL_INLINE_OPT void Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__8(Vether_simulation_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vether_simulation_top___nba_comb__TOP__ether_simulation__clt_inst__8\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__TCP_stop_flg_int = vlSelf->__PVT__u_tcp->__PVT__TCP_stop_flg;
    vlSelfRef.__PVT__wr_pfifo_en_int = vlSelf->__PVT__u_tcp->__PVT__wr_FIFO_en;
    vlSelfRef.__PVT__wr_pfifo_offset_int = vlSelf->__PVT__u_tcp->__PVT__wr_FIFO_offset;
    vlSelfRef.__PVT__rd_pfifo_valid_int = vlSelf->__PVT__u_tcp->__PVT__rd_FIFO_valid_rcv;
    vlSelfRef.__PVT__rd_pfifo_ptr_int = vlSelf->__PVT__u_tcp->__PVT__rd_FIFO_ptr;
    vlSelfRef.__PVT__rd_pfifo_len_int = vlSelf->__PVT__u_tcp->__PVT__rd_FIFO_len;
    vlSelfRef.__PVT__TCP_stop_flag = vlSelfRef.__PVT__TCP_stop_flg_int;
    vlSelf->__PVT__u_payload_fifo->__PVT__wr_FIFO_en 
        = vlSelfRef.__PVT__wr_pfifo_en_int;
    vlSelf->__PVT__u_payload_fifo->__PVT__wr_FIFO_offset 
        = vlSelfRef.__PVT__wr_pfifo_offset_int;
    vlSelf->__PVT__u_payload_fifo->__PVT__rd_FIFO_valid 
        = vlSelfRef.__PVT__rd_pfifo_valid_int;
    vlSelf->__PVT__u_payload_fifo->__PVT__rd_FIFO_ptr 
        = vlSelfRef.__PVT__rd_pfifo_ptr_int;
    vlSelf->__PVT__u_payload_fifo->__PVT__rd_FIFO_len 
        = vlSelfRef.__PVT__rd_pfifo_len_int;
}
