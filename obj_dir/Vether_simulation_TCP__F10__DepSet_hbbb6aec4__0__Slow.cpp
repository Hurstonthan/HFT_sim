// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation_TCP__F10.h"
#include "Vether_simulation_TCP_flow_ctrl.h"
#include "Vether_simulation_TCP_tx.h"

VL_ATTR_COLD void Vether_simulation_TCP__F10___stl_sequent__TOP__ether_simulation__svr_inst__u_tcp__2(Vether_simulation_TCP__F10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10___stl_sequent__TOP__ether_simulation__svr_inst__u_tcp__2\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__TCP_tx->__PVT__TCP_send = vlSelfRef.__PVT__TCP_send;
    vlSelfRef.__PVT__window_size_tx = vlSelf->__PVT__tcp_flow->__PVT__window_size_tx;
    vlSelfRef.__PVT__offset_tx = vlSelf->__PVT__tcp_flow->__PVT__offset_tx;
    vlSelfRef.__PVT__urgent_pointer_tx = vlSelf->__PVT__tcp_flow->__PVT__urgent_pointer_tx;
    vlSelfRef.__PVT__ACK_tx = vlSelf->__PVT__tcp_flow->__PVT__ACK_tx;
    vlSelfRef.__PVT__seq_num_tx = vlSelf->__PVT__tcp_flow->__PVT__seq_num_tx;
    vlSelfRef.__PVT__TCP_control_tx = vlSelf->__PVT__tcp_flow->__PVT__TCP_control_tx;
    vlSelfRef.__PVT__TCP_stop_flg = vlSelf->__PVT__tcp_flow->__PVT__TCP_stop_flg;
    vlSelfRef.__PVT__wr_FIFO_en = vlSelf->__PVT__tcp_flow->__PVT__wr_FIFO_en;
    vlSelfRef.__PVT__wr_FIFO_offset = vlSelf->__PVT__tcp_flow->__PVT__wr_FIFO_offset;
    vlSelfRef.__PVT__rd_FIFO_valid_rcv = vlSelf->__PVT__tcp_flow->__PVT__rd_FIFO_valid;
    vlSelfRef.__Vcellout__tcp_flow__rd_FIFO_ptr = vlSelf->__PVT__tcp_flow->__PVT__rd_FIFO_ptr;
    vlSelfRef.__Vcellout__tcp_flow__rd_FIFO_len = vlSelf->__PVT__tcp_flow->__PVT__rd_FIFO_len;
    vlSelf->__PVT__TCP_tx->__PVT__window_size_tx = vlSelfRef.__PVT__window_size_tx;
    vlSelf->__PVT__TCP_tx->__PVT__offset_tx = vlSelfRef.__PVT__offset_tx;
    vlSelf->__PVT__TCP_tx->__PVT__urgent_pointer_tx 
        = vlSelfRef.__PVT__urgent_pointer_tx;
    vlSelf->__PVT__TCP_tx->__PVT__ACK_tx = vlSelfRef.__PVT__ACK_tx;
    vlSelfRef.__PVT__seq_num_tx_out = vlSelfRef.__PVT__seq_num_tx;
    vlSelf->__PVT__TCP_tx->__PVT__seq_num_tx = vlSelfRef.__PVT__seq_num_tx;
    vlSelf->__PVT__TCP_tx->__PVT__TCP_control_tx = vlSelfRef.__PVT__TCP_control_tx;
    vlSelfRef.__PVT__rd_FIFO_ptr = (0xfU & VL_SEL_IIII(11, (IData)(vlSelfRef.__Vcellout__tcp_flow__rd_FIFO_ptr), 0U, 4U));
    vlSelfRef.__PVT__rd_FIFO_len = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__Vcellout__tcp_flow__rd_FIFO_len), 0U, 4U));
}

VL_ATTR_COLD void Vether_simulation_TCP__F10___stl_sequent__TOP__ether_simulation__clt_inst__u_tcp__2(Vether_simulation_TCP__F10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_TCP__F10___stl_sequent__TOP__ether_simulation__clt_inst__u_tcp__2\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__TCP_tx->__PVT__TCP_send = vlSelfRef.__PVT__TCP_send;
    vlSelfRef.__PVT__window_size_tx = vlSelf->__PVT__tcp_flow->__PVT__window_size_tx;
    vlSelfRef.__PVT__offset_tx = vlSelf->__PVT__tcp_flow->__PVT__offset_tx;
    vlSelfRef.__PVT__urgent_pointer_tx = vlSelf->__PVT__tcp_flow->__PVT__urgent_pointer_tx;
    vlSelfRef.__PVT__ACK_tx = vlSelf->__PVT__tcp_flow->__PVT__ACK_tx;
    vlSelfRef.__PVT__seq_num_tx = vlSelf->__PVT__tcp_flow->__PVT__seq_num_tx;
    vlSelfRef.__PVT__TCP_control_tx = vlSelf->__PVT__tcp_flow->__PVT__TCP_control_tx;
    vlSelfRef.__PVT__TCP_stop_flg = vlSelf->__PVT__tcp_flow->__PVT__TCP_stop_flg;
    vlSelfRef.__PVT__wr_FIFO_en = vlSelf->__PVT__tcp_flow->__PVT__wr_FIFO_en;
    vlSelfRef.__PVT__wr_FIFO_offset = vlSelf->__PVT__tcp_flow->__PVT__wr_FIFO_offset;
    vlSelfRef.__PVT__rd_FIFO_valid_rcv = vlSelf->__PVT__tcp_flow->__PVT__rd_FIFO_valid;
    vlSelfRef.__Vcellout__tcp_flow__rd_FIFO_ptr = vlSelf->__PVT__tcp_flow->__PVT__rd_FIFO_ptr;
    vlSelfRef.__Vcellout__tcp_flow__rd_FIFO_len = vlSelf->__PVT__tcp_flow->__PVT__rd_FIFO_len;
    vlSelf->__PVT__TCP_tx->__PVT__window_size_tx = vlSelfRef.__PVT__window_size_tx;
    vlSelf->__PVT__TCP_tx->__PVT__offset_tx = vlSelfRef.__PVT__offset_tx;
    vlSelf->__PVT__TCP_tx->__PVT__urgent_pointer_tx 
        = vlSelfRef.__PVT__urgent_pointer_tx;
    vlSelf->__PVT__TCP_tx->__PVT__ACK_tx = vlSelfRef.__PVT__ACK_tx;
    vlSelfRef.__PVT__seq_num_tx_out = vlSelfRef.__PVT__seq_num_tx;
    vlSelf->__PVT__TCP_tx->__PVT__seq_num_tx = vlSelfRef.__PVT__seq_num_tx;
    vlSelf->__PVT__TCP_tx->__PVT__TCP_control_tx = vlSelfRef.__PVT__TCP_control_tx;
    vlSelfRef.__PVT__rd_FIFO_ptr = (0xfU & VL_SEL_IIII(11, (IData)(vlSelfRef.__Vcellout__tcp_flow__rd_FIFO_ptr), 0U, 4U));
    vlSelfRef.__PVT__rd_FIFO_len = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__Vcellout__tcp_flow__rd_FIFO_len), 0U, 4U));
}
