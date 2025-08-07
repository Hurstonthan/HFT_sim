// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation_TCP__F10.h"
#include "Vether_simulation_TCP_flow_ctrl.h"

VL_INLINE_OPT void Vether_simulation_TCP__F10___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__1(Vether_simulation_TCP__F10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__1\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__tcp_flow->__PVT__rd_FIFO_en = vlSelfRef.__PVT__rd_FIFO_en_rcv;
    vlSelf->__PVT__tcp_flow->__PVT__seq_rx_FIFO_rd 
        = vlSelfRef.__PVT__seq_rx_FIFO_rd;
    vlSelfRef.__Vcellinp__tcp_flow__wr_FIFO_len = VL_EXTEND_II(8,4, (IData)(vlSelfRef.__PVT__wr_FIFO_len));
    vlSelfRef.__Vcellinp__tcp_flow__wr_FIFO_ptr = VL_EXTEND_II(11,4, (IData)(vlSelfRef.__PVT__wr_ptr_out));
    vlSelf->__PVT__tcp_flow->__PVT__full = vlSelfRef.__PVT__full;
    vlSelf->__PVT__tcp_flow->__PVT__wr_FIFO_len = vlSelfRef.__Vcellinp__tcp_flow__wr_FIFO_len;
    vlSelf->__PVT__tcp_flow->__PVT__wr_FIFO_ptr = vlSelfRef.__Vcellinp__tcp_flow__wr_FIFO_ptr;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__9(Vether_simulation_TCP__F10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__9\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ACK_num = vlSelf->__PVT__tcp_flow->__PVT__ACK_num;
    vlSelfRef.__PVT__ACK_rcv_flag = vlSelf->__PVT__tcp_flow->__PVT__ACK_rcv_flag;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__10(Vether_simulation_TCP__F10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__10\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__tcp_flow->__PVT__ISN_num = vlSelfRef.__PVT__ISN_num;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__6(Vether_simulation_TCP__F10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__6\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__TCP_stop_flg = vlSelf->__PVT__tcp_flow->__PVT__TCP_stop_flg;
    vlSelfRef.__PVT__wr_FIFO_en = vlSelf->__PVT__tcp_flow->__PVT__wr_FIFO_en;
    vlSelfRef.__PVT__wr_FIFO_offset = vlSelf->__PVT__tcp_flow->__PVT__wr_FIFO_offset;
    vlSelfRef.__PVT__rd_FIFO_valid_rcv = vlSelf->__PVT__tcp_flow->__PVT__rd_FIFO_valid;
    vlSelfRef.__Vcellout__tcp_flow__rd_FIFO_ptr = vlSelf->__PVT__tcp_flow->__PVT__rd_FIFO_ptr;
    vlSelfRef.__Vcellout__tcp_flow__rd_FIFO_len = vlSelf->__PVT__tcp_flow->__PVT__rd_FIFO_len;
    vlSelfRef.__PVT__rd_FIFO_ptr = (0xfU & VL_SEL_IIII(11, (IData)(vlSelfRef.__Vcellout__tcp_flow__rd_FIFO_ptr), 0U, 4U));
    vlSelfRef.__PVT__rd_FIFO_len = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__Vcellout__tcp_flow__rd_FIFO_len), 0U, 4U));
}

VL_INLINE_OPT void Vether_simulation_TCP__F10___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__1(Vether_simulation_TCP__F10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__1\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__tcp_flow->__PVT__rd_FIFO_en = vlSelfRef.__PVT__rd_FIFO_en_rcv;
    vlSelf->__PVT__tcp_flow->__PVT__seq_rx_FIFO_rd 
        = vlSelfRef.__PVT__seq_rx_FIFO_rd;
    vlSelfRef.__Vcellinp__tcp_flow__wr_FIFO_len = VL_EXTEND_II(8,4, (IData)(vlSelfRef.__PVT__wr_FIFO_len));
    vlSelfRef.__Vcellinp__tcp_flow__wr_FIFO_ptr = VL_EXTEND_II(11,4, (IData)(vlSelfRef.__PVT__wr_ptr_out));
    vlSelf->__PVT__tcp_flow->__PVT__full = vlSelfRef.__PVT__full;
    vlSelf->__PVT__tcp_flow->__PVT__wr_FIFO_len = vlSelfRef.__Vcellinp__tcp_flow__wr_FIFO_len;
    vlSelf->__PVT__tcp_flow->__PVT__wr_FIFO_ptr = vlSelfRef.__Vcellinp__tcp_flow__wr_FIFO_ptr;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__9(Vether_simulation_TCP__F10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__9\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ACK_num = vlSelf->__PVT__tcp_flow->__PVT__ACK_num;
    vlSelfRef.__PVT__ACK_rcv_flag = vlSelf->__PVT__tcp_flow->__PVT__ACK_rcv_flag;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__10(Vether_simulation_TCP__F10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__10\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__tcp_flow->__PVT__ISN_num = vlSelfRef.__PVT__ISN_num;
}

VL_INLINE_OPT void Vether_simulation_TCP__F10___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__6(Vether_simulation_TCP__F10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__6\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__TCP_stop_flg = vlSelf->__PVT__tcp_flow->__PVT__TCP_stop_flg;
    vlSelfRef.__PVT__wr_FIFO_en = vlSelf->__PVT__tcp_flow->__PVT__wr_FIFO_en;
    vlSelfRef.__PVT__wr_FIFO_offset = vlSelf->__PVT__tcp_flow->__PVT__wr_FIFO_offset;
    vlSelfRef.__PVT__rd_FIFO_valid_rcv = vlSelf->__PVT__tcp_flow->__PVT__rd_FIFO_valid;
    vlSelfRef.__Vcellout__tcp_flow__rd_FIFO_ptr = vlSelf->__PVT__tcp_flow->__PVT__rd_FIFO_ptr;
    vlSelfRef.__Vcellout__tcp_flow__rd_FIFO_len = vlSelf->__PVT__tcp_flow->__PVT__rd_FIFO_len;
    vlSelfRef.__PVT__rd_FIFO_ptr = (0xfU & VL_SEL_IIII(11, (IData)(vlSelfRef.__Vcellout__tcp_flow__rd_FIFO_ptr), 0U, 4U));
    vlSelfRef.__PVT__rd_FIFO_len = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__Vcellout__tcp_flow__rd_FIFO_len), 0U, 4U));
}
