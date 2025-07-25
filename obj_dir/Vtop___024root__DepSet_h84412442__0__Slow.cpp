// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__top__u_fifo_tx____PVT__CLK__0 
        = vlSymsp->TOP__top__u_fifo_tx.__PVT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__top__u_fifo_tx____PVT__nRST__0 
        = vlSymsp->TOP__top__u_fifo_tx.__PVT__nRST;
    vlSelfRef.__Vtrigprevexpr___TOP__top__u_payload_fifo____PVT__CLK__0 
        = vlSymsp->TOP__top__u_payload_fifo.__PVT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__top__u_payload_fifo____PVT__nRST__0 
        = vlSymsp->TOP__top__u_payload_fifo.__PVT__nRST;
    vlSelfRef.__Vtrigprevexpr___TOP__top__u_tcp__ISN_gen____PVT__CLK__0 
        = vlSymsp->TOP__top__u_tcp__ISN_gen.__PVT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__top__u_tcp__ISN_gen____PVT__nRST__0 
        = vlSymsp->TOP__top__u_tcp__ISN_gen.__PVT__nRST;
    vlSelfRef.__Vtrigprevexpr___TOP__top__u_tcp__inst____PVT__CLK__0 
        = vlSymsp->TOP__top__u_tcp__inst.__PVT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__top__u_tcp__inst____PVT__nRST__0 
        = vlSymsp->TOP__top__u_tcp__inst.__PVT__nRST;
    vlSelfRef.__Vtrigprevexpr___TOP__top__u_tcp__TCP_tx____PVT__CLK__0 
        = vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__top__u_tcp__TCP_tx____PVT__nRST__0 
        = vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nRST;
    vlSelfRef.__Vtrigprevexpr___TOP__top__u_tcp__tcp_rcv____PVT__CLK__0 
        = vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__top__u_tcp__tcp_rcv____PVT__nRST__0 
        = vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nRST;
    vlSelfRef.__Vtrigprevexpr___TOP__top__u_tcp__tcp_flow____PVT__CLK__0 
        = vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__top__u_tcp__tcp_flow____PVT__nRST__0 
        = vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nRST;
}

VL_ATTR_COLD void Vtop_TCP___eval_initial__TOP__top__u_tcp(Vtop_TCP* vlSelf);
VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop_TCP_tx___eval_initial__TOP__top__u_tcp__TCP_tx(Vtop_TCP_tx* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop_TCP___eval_initial__TOP__top__u_tcp((&vlSymsp->TOP__top__u_tcp));
    Vtop___024root____Vm_traceActivitySetAll(vlSelf);
    Vtop_TCP_tx___eval_initial__TOP__top__u_tcp__TCP_tx((&vlSymsp->TOP__top__u_tcp__TCP_tx));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop_top___stl_sequent__TOP__top__0(Vtop_top* vlSelf);
VL_ATTR_COLD void Vtop_payload_FIFO___stl_sequent__TOP__top__u_payload_fifo__0(Vtop_payload_FIFO* vlSelf);
VL_ATTR_COLD void Vtop_TCP___stl_sequent__TOP__top__u_tcp__0(Vtop_TCP* vlSelf);
VL_ATTR_COLD void Vtop_FIFO_TX___stl_sequent__TOP__top__u_fifo_tx__0(Vtop_FIFO_TX* vlSelf);
VL_ATTR_COLD void Vtop_TCP_flow_ctrl___stl_sequent__TOP__top__u_tcp__tcp_flow__0(Vtop_TCP_flow_ctrl* vlSelf);
VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__1(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop_top___stl_sequent__TOP__top__1(Vtop_top* vlSelf);
VL_ATTR_COLD void Vtop_TCP_receiver___stl_sequent__TOP__top__u_tcp__tcp_rcv__0(Vtop_TCP_receiver* vlSelf);
VL_ATTR_COLD void Vtop_TCP___stl_sequent__TOP__top__u_tcp__1(Vtop_TCP* vlSelf);
VL_ATTR_COLD void Vtop_priority_encoder__Wa___stl_sequent__TOP__top__u_tcp__tcp_flow__me__0(Vtop_priority_encoder__Wa* vlSelf);
VL_ATTR_COLD void Vtop_priority_encoder__Wa___stl_sequent__TOP__top__u_tcp__tcp_flow__pe__0(Vtop_priority_encoder__Wa* vlSelf);
VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__2(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop_top___stl_sequent__TOP__top__2(Vtop_top* vlSelf);
VL_ATTR_COLD void Vtop_TCP_flow_ctrl___stl_sequent__TOP__top__u_tcp__tcp_flow__1(Vtop_TCP_flow_ctrl* vlSelf);
VL_ATTR_COLD void Vtop_checksum_TCP___stl_sequent__TOP__top__u_tcp__inst__0(Vtop_checksum_TCP* vlSelf);
VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__3(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop_TCP___stl_sequent__TOP__top__u_tcp__2(Vtop_TCP* vlSelf);
VL_ATTR_COLD void Vtop_top___stl_sequent__TOP__top__3(Vtop_top* vlSelf);
VL_ATTR_COLD void Vtop_TCP_tx___stl_sequent__TOP__top__u_tcp__TCP_tx__0(Vtop_TCP_tx* vlSelf);
VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__4(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop_payload_FIFO___stl_sequent__TOP__top__u_payload_fifo__1(Vtop_payload_FIFO* vlSelf);
VL_ATTR_COLD void Vtop_TCP___stl_sequent__TOP__top__u_tcp__3(Vtop_TCP* vlSelf);
VL_ATTR_COLD void Vtop_top___stl_sequent__TOP__top__4(Vtop_top* vlSelf);
VL_ATTR_COLD void Vtop_FIFO_TX___stl_sequent__TOP__top__u_fifo_tx__1(Vtop_FIFO_TX* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        Vtop___024root____Vm_traceActivitySetAll(vlSelf);
        Vtop_top___stl_sequent__TOP__top__0((&vlSymsp->TOP__top));
        Vtop_payload_FIFO___stl_sequent__TOP__top__u_payload_fifo__0((&vlSymsp->TOP__top__u_payload_fifo));
        Vtop_TCP___stl_sequent__TOP__top__u_tcp__0((&vlSymsp->TOP__top__u_tcp));
        Vtop_FIFO_TX___stl_sequent__TOP__top__u_fifo_tx__0((&vlSymsp->TOP__top__u_fifo_tx));
        Vtop_TCP_flow_ctrl___stl_sequent__TOP__top__u_tcp__tcp_flow__0((&vlSymsp->TOP__top__u_tcp__tcp_flow));
        Vtop___024root___stl_sequent__TOP__1(vlSelf);
        Vtop_top___stl_sequent__TOP__top__1((&vlSymsp->TOP__top));
        Vtop_TCP_receiver___stl_sequent__TOP__top__u_tcp__tcp_rcv__0((&vlSymsp->TOP__top__u_tcp__tcp_rcv));
        Vtop_TCP___stl_sequent__TOP__top__u_tcp__1((&vlSymsp->TOP__top__u_tcp));
        Vtop_priority_encoder__Wa___stl_sequent__TOP__top__u_tcp__tcp_flow__me__0((&vlSymsp->TOP__top__u_tcp__tcp_flow__me));
        Vtop_priority_encoder__Wa___stl_sequent__TOP__top__u_tcp__tcp_flow__pe__0((&vlSymsp->TOP__top__u_tcp__tcp_flow__pe));
        Vtop___024root___stl_sequent__TOP__2(vlSelf);
        Vtop_top___stl_sequent__TOP__top__2((&vlSymsp->TOP__top));
        Vtop_TCP_flow_ctrl___stl_sequent__TOP__top__u_tcp__tcp_flow__1((&vlSymsp->TOP__top__u_tcp__tcp_flow));
        Vtop_checksum_TCP___stl_sequent__TOP__top__u_tcp__inst__0((&vlSymsp->TOP__top__u_tcp__inst));
        Vtop___024root___stl_sequent__TOP__3(vlSelf);
        Vtop_TCP___stl_sequent__TOP__top__u_tcp__2((&vlSymsp->TOP__top__u_tcp));
        Vtop_top___stl_sequent__TOP__top__3((&vlSymsp->TOP__top));
        Vtop_TCP_tx___stl_sequent__TOP__top__u_tcp__TCP_tx__0((&vlSymsp->TOP__top__u_tcp__TCP_tx));
        Vtop___024root___stl_sequent__TOP__4(vlSelf);
        Vtop_payload_FIFO___stl_sequent__TOP__top__u_payload_fifo__1((&vlSymsp->TOP__top__u_payload_fifo));
        Vtop_TCP___stl_sequent__TOP__top__u_tcp__3((&vlSymsp->TOP__top__u_tcp));
        Vtop_top___stl_sequent__TOP__top__4((&vlSymsp->TOP__top));
        Vtop_FIFO_TX___stl_sequent__TOP__top__u_fifo_tx__1((&vlSymsp->TOP__top__u_fifo_tx));
    }
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.wr_FIFO_full = vlSymsp->TOP__top.wr_FIFO_full;
    vlSymsp->TOP__top.TCP_len = vlSelfRef.TCP_len;
    vlSymsp->TOP__top.IP_flush = vlSelfRef.IP_flush;
    vlSymsp->TOP__top.nRST = vlSelfRef.nRST;
    vlSymsp->TOP__top.CLK = vlSelfRef.CLK;
    vlSymsp->TOP__top.axis_r_en = vlSelfRef.axis_r_en;
    vlSymsp->TOP__top.len_seq = vlSelfRef.len_seq;
    vlSymsp->TOP__top.soupbin_TCP_payload = vlSelfRef.soupbin_TCP_payload;
    vlSymsp->TOP__top.wr_FIFO_en = vlSelfRef.wr_FIFO_en;
    vlSymsp->TOP__top.axis_last = vlSelfRef.axis_last;
    vlSymsp->TOP__top.TX_en = vlSelfRef.TX_en;
    vlSymsp->TOP__top.TCP_send = vlSelfRef.TCP_send;
    vlSymsp->TOP__top.IP_payload = vlSelfRef.IP_payload;
    vlSymsp->TOP__top.IP_pseuder = vlSelfRef.IP_pseuder;
    vlSymsp->TOP__top.IP_valid = vlSelfRef.IP_valid;
    vlSymsp->TOP__top.IP_bytes_rcv = vlSelfRef.IP_bytes_rcv;
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.axis_rd_data = vlSymsp->TOP__top.axis_rd_data;
    vlSelfRef.axis_r_valid = vlSymsp->TOP__top.axis_r_valid;
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TCP_last = vlSymsp->TOP__top.TCP_last;
    vlSelfRef.TCP_transmit = vlSymsp->TOP__top.TCP_transmit;
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rcv_next = vlSymsp->TOP__top.rcv_next;
    vlSelfRef.seq_num = vlSymsp->TOP__top.seq_num;
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TCP_stop_flag = vlSymsp->TOP__top.TCP_stop_flag;
}
