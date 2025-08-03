// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vchksum_tcp_pl.h for the primary calling header

#include "Vchksum_tcp_pl__pch.h"
#include "Vchksum_tcp_pl__Syms.h"
#include "Vchksum_tcp_pl___024root.h"

VL_ATTR_COLD void Vchksum_tcp_pl___024root___eval_static(Vchksum_tcp_pl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___eval_static\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__chksum_tcp_pl__CLK__0 
        = vlSymsp->TOP__chksum_tcp_pl.CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__chksum_tcp_pl__nRST__0 
        = vlSymsp->TOP__chksum_tcp_pl.nRST;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vchksum_tcp_pl___024root___dump_triggers__stl(Vchksum_tcp_pl___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vchksum_tcp_pl___024root___eval_triggers__stl(Vchksum_tcp_pl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___eval_triggers__stl\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vchksum_tcp_pl___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vchksum_tcp_pl___024root___stl_sequent__TOP__0(Vchksum_tcp_pl___024root* vlSelf);
VL_ATTR_COLD void Vchksum_tcp_pl___024root____Vm_traceActivitySetAll(Vchksum_tcp_pl___024root* vlSelf);
VL_ATTR_COLD void Vchksum_tcp_pl_chksum_tcp_pl___stl_sequent__TOP__chksum_tcp_pl__0(Vchksum_tcp_pl_chksum_tcp_pl* vlSelf);
VL_ATTR_COLD void Vchksum_tcp_pl___024root___stl_sequent__TOP__1(Vchksum_tcp_pl___024root* vlSelf);

VL_ATTR_COLD void Vchksum_tcp_pl___024root___eval_stl(Vchksum_tcp_pl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___eval_stl\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vchksum_tcp_pl___024root___stl_sequent__TOP__0(vlSelf);
        Vchksum_tcp_pl___024root____Vm_traceActivitySetAll(vlSelf);
        Vchksum_tcp_pl_chksum_tcp_pl___stl_sequent__TOP__chksum_tcp_pl__0((&vlSymsp->TOP__chksum_tcp_pl));
        Vchksum_tcp_pl___024root___stl_sequent__TOP__1(vlSelf);
    }
}

VL_ATTR_COLD void Vchksum_tcp_pl___024root___stl_sequent__TOP__0(Vchksum_tcp_pl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___stl_sequent__TOP__0\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__chksum_tcp_pl.nRST = vlSelfRef.nRST;
    vlSymsp->TOP__chksum_tcp_pl.CLK = vlSelfRef.CLK;
    vlSymsp->TOP__chksum_tcp_pl.TCP_payload_tx = vlSelfRef.TCP_payload_tx;
    vlSymsp->TOP__chksum_tcp_pl.clear = vlSelfRef.clear;
    vlSymsp->TOP__chksum_tcp_pl.FIFO_rd_en = vlSelfRef.FIFO_rd_en;
}

VL_ATTR_COLD void Vchksum_tcp_pl___024root___stl_sequent__TOP__1(Vchksum_tcp_pl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root___stl_sequent__TOP__1\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TCP_checksum_pl = vlSymsp->TOP__chksum_tcp_pl.TCP_checksum_pl;
}
