// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMAC_rx.h for the primary calling header

#include "VMAC_rx__pch.h"
#include "VMAC_rx_xgmii_little_to_big.h"

VL_INLINE_OPT void VMAC_rx_xgmii_little_to_big___ico_comb__TOP__MAC_rx__crc_convert__0(VMAC_rx_xgmii_little_to_big* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMAC_rx_xgmii_little_to_big___ico_comb__TOP__MAC_rx__crc_convert__0\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__be_rxd = VL_CONCAT_QII(64,32,32, 
                                            VL_CONCAT_III(32,16,16, 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 8U, 8U))), 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x10U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x18U, 8U)))), 
                                            VL_CONCAT_III(32,16,16, 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x20U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x28U, 8U))), 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x30U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x38U, 8U)))));
}

VL_INLINE_OPT void VMAC_rx_xgmii_little_to_big___act_sequent__TOP__MAC_rx__crc_convert__0(VMAC_rx_xgmii_little_to_big* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMAC_rx_xgmii_little_to_big___act_sequent__TOP__MAC_rx__crc_convert__0\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__be_rxd = VL_CONCAT_QII(64,32,32, 
                                            VL_CONCAT_III(32,16,16, 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 8U, 8U))), 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x10U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x18U, 8U)))), 
                                            VL_CONCAT_III(32,16,16, 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x20U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x28U, 8U))), 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x30U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x38U, 8U)))));
}

VL_INLINE_OPT void VMAC_rx_xgmii_little_to_big___nba_comb__TOP__MAC_rx__crc_convert__0(VMAC_rx_xgmii_little_to_big* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMAC_rx_xgmii_little_to_big___nba_comb__TOP__MAC_rx__crc_convert__0\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__be_rxd = VL_CONCAT_QII(64,32,32, 
                                            VL_CONCAT_III(32,16,16, 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 8U, 8U))), 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x10U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x18U, 8U)))), 
                                            VL_CONCAT_III(32,16,16, 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x20U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x28U, 8U))), 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x30U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x38U, 8U)))));
}

VL_INLINE_OPT void VMAC_rx_xgmii_little_to_big___nba_sequent__TOP__MAC_rx__crc_frame_convert__0(VMAC_rx_xgmii_little_to_big* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMAC_rx_xgmii_little_to_big___nba_sequent__TOP__MAC_rx__crc_frame_convert__0\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__be_rxd = VL_CONCAT_QII(64,32,32, 
                                            VL_CONCAT_III(32,16,16, 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 8U, 8U))), 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x10U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x18U, 8U)))), 
                                            VL_CONCAT_III(32,16,16, 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x20U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x28U, 8U))), 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x30U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x38U, 8U)))));
}

VL_INLINE_OPT void VMAC_rx_xgmii_little_to_big___nba_sequent__TOP__MAC_rx__payload_cvrt__0(VMAC_rx_xgmii_little_to_big* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMAC_rx_xgmii_little_to_big___nba_sequent__TOP__MAC_rx__payload_cvrt__0\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__be_rxd = VL_CONCAT_QII(64,32,32, 
                                            VL_CONCAT_III(32,16,16, 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 8U, 8U))), 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x10U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x18U, 8U)))), 
                                            VL_CONCAT_III(32,16,16, 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x20U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x28U, 8U))), 
                                                          VL_CONCAT_III(16,8,8, 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x30U, 8U)), 
                                                                        (0xffU 
                                                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__xgmii_rxd, 0x38U, 8U)))));
}
