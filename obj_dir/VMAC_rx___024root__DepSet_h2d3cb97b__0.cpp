// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMAC_rx.h for the primary calling header

#include "VMAC_rx__pch.h"
#include "VMAC_rx__Syms.h"
#include "VMAC_rx___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VMAC_rx___024root___dump_triggers__ico(VMAC_rx___024root* vlSelf);
#endif  // VL_DEBUG

void VMAC_rx___024root___eval_triggers__ico(VMAC_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___eval_triggers__ico\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VMAC_rx___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void VMAC_rx___024root___ico_sequent__TOP__0(VMAC_rx___024root* vlSelf);
void VMAC_rx_MAC_rx___ico_sequent__TOP__MAC_rx__0(VMAC_rx_MAC_rx* vlSelf);
void VMAC_rx_priority_encoder__W8_Mz1___ico_sequent__TOP__MAC_rx__crc_check_encoder__0(VMAC_rx_priority_encoder__W8_Mz1* vlSelf);
void VMAC_rx_MAC_rx___ico_sequent__TOP__MAC_rx__1(VMAC_rx_MAC_rx* vlSelf);
void VMAC_rx___024root___ico_sequent__TOP__1(VMAC_rx___024root* vlSelf);
void VMAC_rx_xgmii_little_to_big___ico_sequent__TOP__MAC_rx__crc_convert__0(VMAC_rx_xgmii_little_to_big* vlSelf);
void VMAC_rx_MAC_rx___ico_sequent__TOP__MAC_rx__2(VMAC_rx_MAC_rx* vlSelf);
void VMAC_rx_crc32_parallel_64bit___ico_sequent__TOP__MAC_rx__CRC__0(VMAC_rx_crc32_parallel_64bit* vlSelf);

void VMAC_rx___024root___eval_ico(VMAC_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___eval_ico\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VMAC_rx___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        VMAC_rx_MAC_rx___ico_sequent__TOP__MAC_rx__0((&vlSymsp->TOP__MAC_rx));
        VMAC_rx_priority_encoder__W8_Mz1___ico_sequent__TOP__MAC_rx__crc_check_encoder__0((&vlSymsp->TOP__MAC_rx__crc_check_encoder));
        VMAC_rx_MAC_rx___ico_sequent__TOP__MAC_rx__1((&vlSymsp->TOP__MAC_rx));
        VMAC_rx___024root___ico_sequent__TOP__1(vlSelf);
        VMAC_rx_xgmii_little_to_big___ico_sequent__TOP__MAC_rx__crc_convert__0((&vlSymsp->TOP__MAC_rx__crc_convert));
        VMAC_rx_MAC_rx___ico_sequent__TOP__MAC_rx__2((&vlSymsp->TOP__MAC_rx));
        VMAC_rx_crc32_parallel_64bit___ico_sequent__TOP__MAC_rx__CRC__0((&vlSymsp->TOP__MAC_rx__CRC));
    }
}

VL_INLINE_OPT void VMAC_rx___024root___ico_sequent__TOP__0(VMAC_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___ico_sequent__TOP__0\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__MAC_rx.nRST = vlSelfRef.nRST;
    vlSymsp->TOP__MAC_rx.CLK = vlSelfRef.CLK;
    vlSymsp->TOP__MAC_rx.xgmii_rxd = vlSelfRef.xgmii_rxd;
    vlSymsp->TOP__MAC_rx.xgmii_rxc = vlSelfRef.xgmii_rxc;
}

VL_INLINE_OPT void VMAC_rx___024root___ico_sequent__TOP__1(VMAC_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___ico_sequent__TOP__1\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.frame_ok = vlSymsp->TOP__MAC_rx.frame_ok;
    vlSelfRef.CRC_flush = vlSymsp->TOP__MAC_rx.CRC_flush;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMAC_rx___024root___dump_triggers__act(VMAC_rx___024root* vlSelf);
#endif  // VL_DEBUG

void VMAC_rx___024root___eval_triggers__act(VMAC_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___eval_triggers__act\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSymsp->TOP__MAC_rx.CLK) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__MAC_rx__CLK__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSymsp->TOP__MAC_rx.nRST)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__MAC_rx__nRST__0)));
    vlSelfRef.__VactTriggered.setBit(2U, ((IData)(vlSymsp->TOP__MAC_rx__CRC.__PVT__CLK) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__MAC_rx__CRC____PVT__CLK__0))));
    vlSelfRef.__VactTriggered.setBit(3U, ((~ (IData)(vlSymsp->TOP__MAC_rx__CRC.__PVT__nRST)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__MAC_rx__CRC____PVT__nRST__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__MAC_rx__CLK__0 
        = vlSymsp->TOP__MAC_rx.CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__MAC_rx__nRST__0 
        = vlSymsp->TOP__MAC_rx.nRST;
    vlSelfRef.__Vtrigprevexpr___TOP__MAC_rx__CRC____PVT__CLK__0 
        = vlSymsp->TOP__MAC_rx__CRC.__PVT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__MAC_rx__CRC____PVT__nRST__0 
        = vlSymsp->TOP__MAC_rx__CRC.__PVT__nRST;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VMAC_rx___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void VMAC_rx_crc32_parallel_64bit___nba_sequent__TOP__MAC_rx__CRC__0(VMAC_rx_crc32_parallel_64bit* vlSelf);
void VMAC_rx_MAC_rx___nba_sequent__TOP__MAC_rx__0(VMAC_rx_MAC_rx* vlSelf);
void VMAC_rx_MAC_rx___nba_sequent__TOP__MAC_rx__1(VMAC_rx_MAC_rx* vlSelf);
void VMAC_rx___024root___nba_sequent__TOP__0(VMAC_rx___024root* vlSelf);
void VMAC_rx_priority_encoder__W10_Mz1___nba_sequent__TOP__MAC_rx__xgmii_fcs__0(VMAC_rx_priority_encoder__W10_Mz1* vlSelf);
void VMAC_rx_xgmii_little_to_big___nba_sequent__TOP__MAC_rx__crc_frame_convert__0(VMAC_rx_xgmii_little_to_big* vlSelf);
void VMAC_rx_MAC_rx___nba_sequent__TOP__MAC_rx__2(VMAC_rx_MAC_rx* vlSelf);
void VMAC_rx_MAC_rx___nba_comb__TOP__MAC_rx__0(VMAC_rx_MAC_rx* vlSelf);
void VMAC_rx___024root___nba_comb__TOP__0(VMAC_rx___024root* vlSelf);
void VMAC_rx_xgmii_little_to_big___nba_comb__TOP__MAC_rx__crc_convert__0(VMAC_rx_xgmii_little_to_big* vlSelf);
void VMAC_rx_MAC_rx___nba_comb__TOP__MAC_rx__1(VMAC_rx_MAC_rx* vlSelf);
void VMAC_rx_crc32_parallel_64bit___nba_comb__TOP__MAC_rx__CRC__0(VMAC_rx_crc32_parallel_64bit* vlSelf);

void VMAC_rx___024root___eval_nba(VMAC_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___eval_nba\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0xcULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VMAC_rx_crc32_parallel_64bit___nba_sequent__TOP__MAC_rx__CRC__0((&vlSymsp->TOP__MAC_rx__CRC));
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        VMAC_rx_MAC_rx___nba_sequent__TOP__MAC_rx__0((&vlSymsp->TOP__MAC_rx));
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VMAC_rx_MAC_rx___nba_sequent__TOP__MAC_rx__1((&vlSymsp->TOP__MAC_rx));
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        VMAC_rx___024root___nba_sequent__TOP__0(vlSelf);
        VMAC_rx_priority_encoder__W10_Mz1___nba_sequent__TOP__MAC_rx__xgmii_fcs__0((&vlSymsp->TOP__MAC_rx__xgmii_fcs));
        VMAC_rx_xgmii_little_to_big___nba_sequent__TOP__MAC_rx__crc_frame_convert__0((&vlSymsp->TOP__MAC_rx__crc_frame_convert));
        VMAC_rx_MAC_rx___nba_sequent__TOP__MAC_rx__2((&vlSymsp->TOP__MAC_rx));
    }
    if ((0xfULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VMAC_rx_MAC_rx___nba_comb__TOP__MAC_rx__0((&vlSymsp->TOP__MAC_rx));
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
        VMAC_rx___024root___nba_comb__TOP__0(vlSelf);
        VMAC_rx_xgmii_little_to_big___nba_comb__TOP__MAC_rx__crc_convert__0((&vlSymsp->TOP__MAC_rx__crc_convert));
        VMAC_rx_MAC_rx___nba_comb__TOP__MAC_rx__1((&vlSymsp->TOP__MAC_rx));
        VMAC_rx_crc32_parallel_64bit___nba_comb__TOP__MAC_rx__CRC__0((&vlSymsp->TOP__MAC_rx__CRC));
    }
}

VL_INLINE_OPT void VMAC_rx___024root___nba_sequent__TOP__0(VMAC_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___nba_sequent__TOP__0\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.MAC_valid = vlSymsp->TOP__MAC_rx.MAC_valid;
    vlSelfRef.MAC_payload_rcv = vlSymsp->TOP__MAC_rx.MAC_payload_rcv;
    vlSelfRef.bytes_rcv_len = vlSymsp->TOP__MAC_rx.bytes_rcv_len;
}

VL_INLINE_OPT void VMAC_rx___024root___nba_comb__TOP__0(VMAC_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_rx___024root___nba_comb__TOP__0\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.frame_ok = vlSymsp->TOP__MAC_rx.frame_ok;
    vlSelfRef.CRC_flush = vlSymsp->TOP__MAC_rx.CRC_flush;
}
