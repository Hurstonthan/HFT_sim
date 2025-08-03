// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vchksum_tcp_pl.h for the primary calling header

#include "Vchksum_tcp_pl__pch.h"
#include "Vchksum_tcp_pl__Syms.h"
#include "Vchksum_tcp_pl___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vchksum_tcp_pl___024root___dump_triggers__ico(Vchksum_tcp_pl___024root* vlSelf);
#endif  // VL_DEBUG

void Vchksum_tcp_pl___024root___eval_triggers__ico(Vchksum_tcp_pl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___eval_triggers__ico\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vchksum_tcp_pl___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void Vchksum_tcp_pl___024root___ico_sequent__TOP__0(Vchksum_tcp_pl___024root* vlSelf);
void Vchksum_tcp_pl_chksum_tcp_pl___ico_sequent__TOP__chksum_tcp_pl__0(Vchksum_tcp_pl_chksum_tcp_pl* vlSelf);

void Vchksum_tcp_pl___024root___eval_ico(Vchksum_tcp_pl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___eval_ico\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vchksum_tcp_pl___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        Vchksum_tcp_pl_chksum_tcp_pl___ico_sequent__TOP__chksum_tcp_pl__0((&vlSymsp->TOP__chksum_tcp_pl));
    }
}

VL_INLINE_OPT void Vchksum_tcp_pl___024root___ico_sequent__TOP__0(Vchksum_tcp_pl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___ico_sequent__TOP__0\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__chksum_tcp_pl.nRST = vlSelfRef.nRST;
    vlSymsp->TOP__chksum_tcp_pl.CLK = vlSelfRef.CLK;
    vlSymsp->TOP__chksum_tcp_pl.TCP_payload_tx = vlSelfRef.TCP_payload_tx;
    vlSymsp->TOP__chksum_tcp_pl.clear = vlSelfRef.clear;
    vlSymsp->TOP__chksum_tcp_pl.FIFO_rd_en = vlSelfRef.FIFO_rd_en;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vchksum_tcp_pl___024root___dump_triggers__act(Vchksum_tcp_pl___024root* vlSelf);
#endif  // VL_DEBUG

void Vchksum_tcp_pl___024root___eval_triggers__act(Vchksum_tcp_pl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___eval_triggers__act\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSymsp->TOP__chksum_tcp_pl.CLK) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__chksum_tcp_pl__CLK__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSymsp->TOP__chksum_tcp_pl.nRST)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__chksum_tcp_pl__nRST__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__chksum_tcp_pl__CLK__0 
        = vlSymsp->TOP__chksum_tcp_pl.CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__chksum_tcp_pl__nRST__0 
        = vlSymsp->TOP__chksum_tcp_pl.nRST;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vchksum_tcp_pl___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vchksum_tcp_pl_chksum_tcp_pl___nba_sequent__TOP__chksum_tcp_pl__0(Vchksum_tcp_pl_chksum_tcp_pl* vlSelf);
void Vchksum_tcp_pl___024root___nba_sequent__TOP__0(Vchksum_tcp_pl___024root* vlSelf);

void Vchksum_tcp_pl___024root___eval_nba(Vchksum_tcp_pl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___eval_nba\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vchksum_tcp_pl_chksum_tcp_pl___nba_sequent__TOP__chksum_tcp_pl__0((&vlSymsp->TOP__chksum_tcp_pl));
        Vchksum_tcp_pl___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vchksum_tcp_pl___024root___nba_sequent__TOP__0(Vchksum_tcp_pl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___nba_sequent__TOP__0\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TCP_checksum_pl = vlSymsp->TOP__chksum_tcp_pl.TCP_checksum_pl;
}
