// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMAC_rx.h for the primary calling header

#include "VMAC_rx__pch.h"
#include "VMAC_rx_xgmii_little_to_big.h"

VL_ATTR_COLD void VMAC_rx_xgmii_little_to_big___stl_sequent__TOP__MAC_rx__crc_convert__0(VMAC_rx_xgmii_little_to_big* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMAC_rx_xgmii_little_to_big___stl_sequent__TOP__MAC_rx__crc_convert__0\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__be_rxc = VL_CONCAT_III(8,4,4, 
                                            VL_CONCAT_III(4,2,2, 
                                                          VL_CONCAT_III(2,1,1, 
                                                                        (1U 
                                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 0U)), 
                                                                        (1U 
                                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 1U))), 
                                                          VL_CONCAT_III(2,1,1, 
                                                                        (1U 
                                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 2U)), 
                                                                        (1U 
                                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 3U)))), 
                                            VL_CONCAT_III(4,2,2, 
                                                          VL_CONCAT_III(2,1,1, 
                                                                        (1U 
                                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 4U)), 
                                                                        (1U 
                                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 5U))), 
                                                          VL_CONCAT_III(2,1,1, 
                                                                        (1U 
                                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 6U)), 
                                                                        (1U 
                                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 7U)))));
}

VL_ATTR_COLD void VMAC_rx_xgmii_little_to_big___stl_comb__TOP__MAC_rx__crc_convert__0(VMAC_rx_xgmii_little_to_big* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMAC_rx_xgmii_little_to_big___stl_comb__TOP__MAC_rx__crc_convert__0\n"); );
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

VL_ATTR_COLD void VMAC_rx_xgmii_little_to_big___stl_sequent__TOP__MAC_rx__crc_frame_convert__0(VMAC_rx_xgmii_little_to_big* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMAC_rx_xgmii_little_to_big___stl_sequent__TOP__MAC_rx__crc_frame_convert__0\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__be_rxc = VL_CONCAT_III(8,4,4, 
                                            VL_CONCAT_III(4,2,2, 
                                                          VL_CONCAT_III(2,1,1, 
                                                                        (1U 
                                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 0U)), 
                                                                        (1U 
                                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 1U))), 
                                                          VL_CONCAT_III(2,1,1, 
                                                                        (1U 
                                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 2U)), 
                                                                        (1U 
                                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 3U)))), 
                                            VL_CONCAT_III(4,2,2, 
                                                          VL_CONCAT_III(2,1,1, 
                                                                        (1U 
                                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 4U)), 
                                                                        (1U 
                                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 5U))), 
                                                          VL_CONCAT_III(2,1,1, 
                                                                        (1U 
                                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 6U)), 
                                                                        (1U 
                                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 7U)))));
}

VL_ATTR_COLD void VMAC_rx_xgmii_little_to_big___stl_sequent__TOP__MAC_rx__crc_frame_convert__1(VMAC_rx_xgmii_little_to_big* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMAC_rx_xgmii_little_to_big___stl_sequent__TOP__MAC_rx__crc_frame_convert__1\n"); );
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

VL_ATTR_COLD void VMAC_rx_xgmii_little_to_big___stl_sequent__TOP__MAC_rx__payload_cvrt__0(VMAC_rx_xgmii_little_to_big* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMAC_rx_xgmii_little_to_big___stl_sequent__TOP__MAC_rx__payload_cvrt__0\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__be_rxc = VL_CONCAT_III(8,4,4, 
                                            VL_CONCAT_III(4,2,2, 
                                                          VL_CONCAT_III(2,1,1, 
                                                                        (1U 
                                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 0U)), 
                                                                        (1U 
                                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 1U))), 
                                                          VL_CONCAT_III(2,1,1, 
                                                                        (1U 
                                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 2U)), 
                                                                        (1U 
                                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 3U)))), 
                                            VL_CONCAT_III(4,2,2, 
                                                          VL_CONCAT_III(2,1,1, 
                                                                        (1U 
                                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 4U)), 
                                                                        (1U 
                                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 5U))), 
                                                          VL_CONCAT_III(2,1,1, 
                                                                        (1U 
                                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 6U)), 
                                                                        (1U 
                                                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__xgmii_rxc), 7U)))));
}

VL_ATTR_COLD void VMAC_rx_xgmii_little_to_big___stl_sequent__TOP__MAC_rx__payload_cvrt__1(VMAC_rx_xgmii_little_to_big* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMAC_rx_xgmii_little_to_big___stl_sequent__TOP__MAC_rx__payload_cvrt__1\n"); );
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

VL_ATTR_COLD void VMAC_rx_xgmii_little_to_big___ctor_var_reset(VMAC_rx_xgmii_little_to_big* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMAC_rx_xgmii_little_to_big___ctor_var_reset\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__xgmii_rxd = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14365979020943574069ull);
    vlSelf->__PVT__xgmii_rxc = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11892103045410615185ull);
    vlSelf->__PVT__be_rxd = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 430299229906001228ull);
    vlSelf->__PVT__be_rxc = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14044949195547794203ull);
}
