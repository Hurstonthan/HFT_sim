// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop_top___ico_sequent__TOP__top__0(Vtop_top* vlSelf);
void Vtop_TCP___ico_sequent__TOP__top__u_tcp__0(Vtop_TCP* vlSelf);
void Vtop_checksum_TCP___ico_sequent__TOP__top__u_tcp__inst__0(Vtop_checksum_TCP* vlSelf);
void Vtop_TCP_tx___ico_sequent__TOP__top__u_tcp__TCP_tx__0(Vtop_TCP_tx* vlSelf);
void Vtop_TCP_receiver___ico_sequent__TOP__top__u_tcp__tcp_rcv__0(Vtop_TCP_receiver* vlSelf);
void Vtop_TCP_flow_ctrl___ico_sequent__TOP__top__u_tcp__tcp_flow__0(Vtop_TCP_flow_ctrl* vlSelf);
void Vtop_TCP___ico_sequent__TOP__top__u_tcp__1(Vtop_TCP* vlSelf);
void Vtop_top___ico_sequent__TOP__top__1(Vtop_top* vlSelf);
void Vtop_TCP_flow_ctrl___ico_sequent__TOP__top__u_tcp__tcp_flow__1(Vtop_TCP_flow_ctrl* vlSelf);
void Vtop_TCP___ico_sequent__TOP__top__u_tcp__2(Vtop_TCP* vlSelf);
void Vtop_top___ico_sequent__TOP__top__2(Vtop_top* vlSelf);
void Vtop___024root___ico_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop_payload_FIFO___ico_sequent__TOP__top__u_payload_fifo__0(Vtop_payload_FIFO* vlSelf);
void Vtop_FIFO_TX___ico_sequent__TOP__top__u_fifo_tx__0(Vtop_FIFO_TX* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        Vtop_top___ico_sequent__TOP__top__0((&vlSymsp->TOP__top));
        Vtop_TCP___ico_sequent__TOP__top__u_tcp__0((&vlSymsp->TOP__top__u_tcp));
        Vtop_checksum_TCP___ico_sequent__TOP__top__u_tcp__inst__0((&vlSymsp->TOP__top__u_tcp__inst));
        Vtop_TCP_tx___ico_sequent__TOP__top__u_tcp__TCP_tx__0((&vlSymsp->TOP__top__u_tcp__TCP_tx));
        Vtop_TCP_receiver___ico_sequent__TOP__top__u_tcp__tcp_rcv__0((&vlSymsp->TOP__top__u_tcp__tcp_rcv));
        Vtop_TCP_flow_ctrl___ico_sequent__TOP__top__u_tcp__tcp_flow__0((&vlSymsp->TOP__top__u_tcp__tcp_flow));
        Vtop_TCP___ico_sequent__TOP__top__u_tcp__1((&vlSymsp->TOP__top__u_tcp));
        Vtop_top___ico_sequent__TOP__top__1((&vlSymsp->TOP__top));
        Vtop_TCP_flow_ctrl___ico_sequent__TOP__top__u_tcp__tcp_flow__1((&vlSymsp->TOP__top__u_tcp__tcp_flow));
        Vtop_TCP___ico_sequent__TOP__top__u_tcp__2((&vlSymsp->TOP__top__u_tcp));
        Vtop_top___ico_sequent__TOP__top__2((&vlSymsp->TOP__top));
        Vtop___024root___ico_sequent__TOP__1(vlSelf);
        Vtop_payload_FIFO___ico_sequent__TOP__top__u_payload_fifo__0((&vlSymsp->TOP__top__u_payload_fifo));
        Vtop_FIFO_TX___ico_sequent__TOP__top__u_fifo_tx__0((&vlSymsp->TOP__top__u_fifo_tx));
    }
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TCP_stop_flag = vlSymsp->TOP__top.TCP_stop_flag;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSymsp->TOP__top__u_fifo_tx.__PVT__CLK) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__u_fifo_tx____PVT__CLK__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSymsp->TOP__top__u_fifo_tx.__PVT__nRST)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__u_fifo_tx____PVT__nRST__0)));
    vlSelfRef.__VactTriggered.setBit(2U, ((IData)(vlSymsp->TOP__top__u_payload_fifo.__PVT__CLK) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__u_payload_fifo____PVT__CLK__0))));
    vlSelfRef.__VactTriggered.setBit(3U, ((~ (IData)(vlSymsp->TOP__top__u_payload_fifo.__PVT__nRST)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__u_payload_fifo____PVT__nRST__0)));
    vlSelfRef.__VactTriggered.setBit(4U, ((IData)(vlSymsp->TOP__top__u_tcp__ISN_gen.__PVT__CLK) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__u_tcp__ISN_gen____PVT__CLK__0))));
    vlSelfRef.__VactTriggered.setBit(5U, ((~ (IData)(vlSymsp->TOP__top__u_tcp__ISN_gen.__PVT__nRST)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__u_tcp__ISN_gen____PVT__nRST__0)));
    vlSelfRef.__VactTriggered.setBit(6U, ((IData)(vlSymsp->TOP__top__u_tcp__inst.__PVT__CLK) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__u_tcp__inst____PVT__CLK__0))));
    vlSelfRef.__VactTriggered.setBit(7U, ((~ (IData)(vlSymsp->TOP__top__u_tcp__inst.__PVT__nRST)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__u_tcp__inst____PVT__nRST__0)));
    vlSelfRef.__VactTriggered.setBit(8U, ((IData)(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__CLK) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__u_tcp__TCP_tx____PVT__CLK__0))));
    vlSelfRef.__VactTriggered.setBit(9U, ((~ (IData)(vlSymsp->TOP__top__u_tcp__TCP_tx.__PVT__nRST)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__u_tcp__TCP_tx____PVT__nRST__0)));
    vlSelfRef.__VactTriggered.setBit(0xaU, ((IData)(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__CLK) 
                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__u_tcp__tcp_rcv____PVT__CLK__0))));
    vlSelfRef.__VactTriggered.setBit(0xbU, ((~ (IData)(vlSymsp->TOP__top__u_tcp__tcp_rcv.__PVT__nRST)) 
                                            & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__u_tcp__tcp_rcv____PVT__nRST__0)));
    vlSelfRef.__VactTriggered.setBit(0xcU, ((IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__CLK) 
                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__u_tcp__tcp_flow____PVT__CLK__0))));
    vlSelfRef.__VactTriggered.setBit(0xdU, ((~ (IData)(vlSymsp->TOP__top__u_tcp__tcp_flow.__PVT__nRST)) 
                                            & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__u_tcp__tcp_flow____PVT__nRST__0)));
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
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtop_TCP_ISN___nba_sequent__TOP__top__u_tcp__ISN_gen__0(Vtop_TCP_ISN* vlSelf);
void Vtop_TCP___nba_sequent__TOP__top__u_tcp__0(Vtop_TCP* vlSelf);
void Vtop_payload_FIFO___nba_sequent__TOP__top__u_payload_fifo__0(Vtop_payload_FIFO* vlSelf);
void Vtop_top___nba_sequent__TOP__top__0(Vtop_top* vlSelf);
void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop_TCP___nba_sequent__TOP__top__u_tcp__1(Vtop_TCP* vlSelf);
void Vtop_TCP_flow_ctrl___nba_sequent__TOP__top__u_tcp__tcp_flow__0(Vtop_TCP_flow_ctrl* vlSelf);
void Vtop_TCP_flow_ctrl___nba_sequent__TOP__top__u_tcp__tcp_flow__1(Vtop_TCP_flow_ctrl* vlSelf);
void Vtop_TCP___nba_sequent__TOP__top__u_tcp__2(Vtop_TCP* vlSelf);
void Vtop_priority_encoder__Wa___nba_sequent__TOP__top__u_tcp__tcp_flow__me__0(Vtop_priority_encoder__Wa* vlSelf);
void Vtop_priority_encoder__Wa___nba_sequent__TOP__top__u_tcp__tcp_flow__pe__0(Vtop_priority_encoder__Wa* vlSelf);
void Vtop_top___nba_sequent__TOP__top__1(Vtop_top* vlSelf);
void Vtop_TCP_flow_ctrl___nba_sequent__TOP__top__u_tcp__tcp_flow__2(Vtop_TCP_flow_ctrl* vlSelf);
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop_checksum_TCP___nba_sequent__TOP__top__u_tcp__inst__0(Vtop_checksum_TCP* vlSelf);
void Vtop_TCP___nba_sequent__TOP__top__u_tcp__3(Vtop_TCP* vlSelf);
void Vtop_FIFO_TX___nba_sequent__TOP__top__u_fifo_tx__0(Vtop_FIFO_TX* vlSelf);
void Vtop_top___nba_sequent__TOP__top__2(Vtop_top* vlSelf);
void Vtop_TCP___nba_sequent__TOP__top__u_tcp__4(Vtop_TCP* vlSelf);
void Vtop_checksum_TCP___nba_sequent__TOP__top__u_tcp__inst__1(Vtop_checksum_TCP* vlSelf);
void Vtop_TCP_tx___nba_sequent__TOP__top__u_tcp__TCP_tx__0(Vtop_TCP_tx* vlSelf);
void Vtop_TCP___nba_sequent__TOP__top__u_tcp__5(Vtop_TCP* vlSelf);
void Vtop_top___nba_sequent__TOP__top__3(Vtop_top* vlSelf);
void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf);
void Vtop_TCP_receiver___nba_sequent__TOP__top__u_tcp__tcp_rcv__0(Vtop_TCP_receiver* vlSelf);
void Vtop_TCP___nba_sequent__TOP__top__u_tcp__6(Vtop_TCP* vlSelf);
void Vtop_top___nba_sequent__TOP__top__4(Vtop_top* vlSelf);
void Vtop_TCP_flow_ctrl___nba_sequent__TOP__top__u_tcp__tcp_flow__3(Vtop_TCP_flow_ctrl* vlSelf);
void Vtop_TCP___nba_sequent__TOP__top__u_tcp__7(Vtop_TCP* vlSelf);
void Vtop_top___nba_sequent__TOP__top__5(Vtop_top* vlSelf);
void Vtop_TCP___nba_sequent__TOP__top__u_tcp__8(Vtop_TCP* vlSelf);
void Vtop_TCP___nba_comb__TOP__top__u_tcp__0(Vtop_TCP* vlSelf);
void Vtop_checksum_TCP___nba_comb__TOP__top__u_tcp__inst__0(Vtop_checksum_TCP* vlSelf);
void Vtop_TCP_flow_ctrl___nba_comb__TOP__top__u_tcp__tcp_flow__0(Vtop_TCP_flow_ctrl* vlSelf);
void Vtop_TCP___nba_comb__TOP__top__u_tcp__1(Vtop_TCP* vlSelf);
void Vtop_TCP_flow_ctrl___nba_comb__TOP__top__u_tcp__tcp_flow__1(Vtop_TCP_flow_ctrl* vlSelf);
void Vtop_TCP_flow_ctrl___nba_comb__TOP__top__u_tcp__tcp_flow__2(Vtop_TCP_flow_ctrl* vlSelf);
void Vtop_TCP_tx___nba_comb__TOP__top__u_tcp__TCP_tx__0(Vtop_TCP_tx* vlSelf);
void Vtop_TCP___nba_comb__TOP__top__u_tcp__2(Vtop_TCP* vlSelf);
void Vtop_top___nba_comb__TOP__top__0(Vtop_top* vlSelf);
void Vtop_TCP_flow_ctrl___nba_comb__TOP__top__u_tcp__tcp_flow__3(Vtop_TCP_flow_ctrl* vlSelf);
void Vtop_TCP___nba_comb__TOP__top__u_tcp__3(Vtop_TCP* vlSelf);
void Vtop_top___nba_comb__TOP__top__1(Vtop_top* vlSelf);
void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf);
void Vtop_payload_FIFO___nba_comb__TOP__top__u_payload_fifo__0(Vtop_payload_FIFO* vlSelf);
void Vtop_FIFO_TX___nba_comb__TOP__top__u_fifo_tx__0(Vtop_FIFO_TX* vlSelf);
void Vtop_TCP_tx___nba_comb__TOP__top__u_tcp__TCP_tx__1(Vtop_TCP_tx* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x30ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_TCP_ISN___nba_sequent__TOP__top__u_tcp__ISN_gen__0((&vlSymsp->TOP__top__u_tcp__ISN_gen));
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        Vtop_TCP___nba_sequent__TOP__top__u_tcp__0((&vlSymsp->TOP__top__u_tcp));
    }
    if ((0xcULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_payload_FIFO___nba_sequent__TOP__top__u_payload_fifo__0((&vlSymsp->TOP__top__u_payload_fifo));
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        Vtop_top___nba_sequent__TOP__top__0((&vlSymsp->TOP__top));
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        Vtop_TCP___nba_sequent__TOP__top__u_tcp__1((&vlSymsp->TOP__top__u_tcp));
    }
    if ((0x1000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_TCP_flow_ctrl___nba_sequent__TOP__top__u_tcp__tcp_flow__0((&vlSymsp->TOP__top__u_tcp__tcp_flow));
    }
    if ((0x3000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_TCP_flow_ctrl___nba_sequent__TOP__top__u_tcp__tcp_flow__1((&vlSymsp->TOP__top__u_tcp__tcp_flow));
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
        Vtop_TCP___nba_sequent__TOP__top__u_tcp__2((&vlSymsp->TOP__top__u_tcp));
        Vtop_priority_encoder__Wa___nba_sequent__TOP__top__u_tcp__tcp_flow__me__0((&vlSymsp->TOP__top__u_tcp__tcp_flow__me));
        Vtop_priority_encoder__Wa___nba_sequent__TOP__top__u_tcp__tcp_flow__pe__0((&vlSymsp->TOP__top__u_tcp__tcp_flow__pe));
        Vtop_top___nba_sequent__TOP__top__1((&vlSymsp->TOP__top));
        Vtop_TCP_flow_ctrl___nba_sequent__TOP__top__u_tcp__tcp_flow__2((&vlSymsp->TOP__top__u_tcp__tcp_flow));
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0xc0ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_checksum_TCP___nba_sequent__TOP__top__u_tcp__inst__0((&vlSymsp->TOP__top__u_tcp__inst));
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
        Vtop_TCP___nba_sequent__TOP__top__u_tcp__3((&vlSymsp->TOP__top__u_tcp));
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_FIFO_TX___nba_sequent__TOP__top__u_fifo_tx__0((&vlSymsp->TOP__top__u_fifo_tx));
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
        Vtop_top___nba_sequent__TOP__top__2((&vlSymsp->TOP__top));
        Vtop_TCP___nba_sequent__TOP__top__u_tcp__4((&vlSymsp->TOP__top__u_tcp));
        Vtop_checksum_TCP___nba_sequent__TOP__top__u_tcp__inst__1((&vlSymsp->TOP__top__u_tcp__inst));
    }
    if ((0x300ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_TCP_tx___nba_sequent__TOP__top__u_tcp__TCP_tx__0((&vlSymsp->TOP__top__u_tcp__TCP_tx));
        vlSelfRef.__Vm_traceActivity[7U] = 1U;
        Vtop_TCP___nba_sequent__TOP__top__u_tcp__5((&vlSymsp->TOP__top__u_tcp));
        Vtop_top___nba_sequent__TOP__top__3((&vlSymsp->TOP__top));
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0xc00ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_TCP_receiver___nba_sequent__TOP__top__u_tcp__tcp_rcv__0((&vlSymsp->TOP__top__u_tcp__tcp_rcv));
        vlSelfRef.__Vm_traceActivity[8U] = 1U;
        Vtop_TCP___nba_sequent__TOP__top__u_tcp__6((&vlSymsp->TOP__top__u_tcp));
        Vtop_top___nba_sequent__TOP__top__4((&vlSymsp->TOP__top));
        Vtop_TCP_flow_ctrl___nba_sequent__TOP__top__u_tcp__tcp_flow__3((&vlSymsp->TOP__top__u_tcp__tcp_flow));
        Vtop_TCP___nba_sequent__TOP__top__u_tcp__7((&vlSymsp->TOP__top__u_tcp));
        Vtop_top___nba_sequent__TOP__top__5((&vlSymsp->TOP__top));
    }
    if ((0x30ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_TCP___nba_sequent__TOP__top__u_tcp__8((&vlSymsp->TOP__top__u_tcp));
    }
    if ((0xc3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_TCP___nba_comb__TOP__top__u_tcp__0((&vlSymsp->TOP__top__u_tcp));
        vlSelfRef.__Vm_traceActivity[9U] = 1U;
        Vtop_checksum_TCP___nba_comb__TOP__top__u_tcp__inst__0((&vlSymsp->TOP__top__u_tcp__inst));
    }
    if ((0x330cULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_TCP_flow_ctrl___nba_comb__TOP__top__u_tcp__tcp_flow__0((&vlSymsp->TOP__top__u_tcp__tcp_flow));
        vlSelfRef.__Vm_traceActivity[0xaU] = 1U;
        Vtop_TCP___nba_comb__TOP__top__u_tcp__1((&vlSymsp->TOP__top__u_tcp));
    }
    if ((0x3c00ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_TCP_flow_ctrl___nba_comb__TOP__top__u_tcp__tcp_flow__1((&vlSymsp->TOP__top__u_tcp__tcp_flow));
    }
    if ((0x3033ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_TCP_flow_ctrl___nba_comb__TOP__top__u_tcp__tcp_flow__2((&vlSymsp->TOP__top__u_tcp__tcp_flow));
    }
    if ((0x330fULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_TCP_tx___nba_comb__TOP__top__u_tcp__TCP_tx__0((&vlSymsp->TOP__top__u_tcp__TCP_tx));
        vlSelfRef.__Vm_traceActivity[0xbU] = 1U;
        Vtop_TCP___nba_comb__TOP__top__u_tcp__2((&vlSymsp->TOP__top__u_tcp));
        Vtop_top___nba_comb__TOP__top__0((&vlSymsp->TOP__top));
    }
    if ((0x3f3fULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_TCP_flow_ctrl___nba_comb__TOP__top__u_tcp__tcp_flow__3((&vlSymsp->TOP__top__u_tcp__tcp_flow));
        vlSelfRef.__Vm_traceActivity[0xcU] = 1U;
        Vtop_TCP___nba_comb__TOP__top__u_tcp__3((&vlSymsp->TOP__top__u_tcp));
        Vtop_top___nba_comb__TOP__top__1((&vlSymsp->TOP__top));
        Vtop___024root___nba_comb__TOP__0(vlSelf);
        Vtop_payload_FIFO___nba_comb__TOP__top__u_payload_fifo__0((&vlSymsp->TOP__top__u_payload_fifo));
        Vtop_FIFO_TX___nba_comb__TOP__top__u_fifo_tx__0((&vlSymsp->TOP__top__u_fifo_tx));
    }
    if ((0x33cfULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_TCP_tx___nba_comb__TOP__top__u_tcp__TCP_tx__1((&vlSymsp->TOP__top__u_tcp__TCP_tx));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.axis_rd_data = vlSymsp->TOP__top.axis_rd_data;
    vlSelfRef.axis_r_valid = vlSymsp->TOP__top.axis_r_valid;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rcv_next = vlSymsp->TOP__top.rcv_next;
    vlSelfRef.seq_num = vlSymsp->TOP__top.seq_num;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TCP_transmit = vlSymsp->TOP__top.TCP_transmit;
    vlSelfRef.TCP_last = vlSymsp->TOP__top.TCP_last;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TCP_stop_flag = vlSymsp->TOP__top.TCP_stop_flag;
}
