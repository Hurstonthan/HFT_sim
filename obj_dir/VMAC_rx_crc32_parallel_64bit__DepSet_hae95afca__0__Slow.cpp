// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMAC_rx.h for the primary calling header

#include "VMAC_rx__pch.h"
#include "VMAC_rx_crc32_parallel_64bit.h"

VL_ATTR_COLD void VMAC_rx_crc32_parallel_64bit___stl_sequent__TOP__MAC_rx__CRC__0(VMAC_rx_crc32_parallel_64bit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMAC_rx_crc32_parallel_64bit___stl_sequent__TOP__MAC_rx__CRC__0\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__crc_out = ((IData)(vlSelfRef.__PVT__rx)
                                 ? vlSelfRef.__PVT__crc_reg
                                 : (~ vlSelfRef.__PVT__crc_reg));
}

VL_ATTR_COLD void VMAC_rx_crc32_parallel_64bit___stl_comb__TOP__MAC_rx__CRC__0(VMAC_rx_crc32_parallel_64bit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMAC_rx_crc32_parallel_64bit___stl_comb__TOP__MAC_rx__CRC__0\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__next_crc, 
                    (1U & (((((((((((((((((((((((((
                                                   (((((((((((((((VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 1U) 
                                                                  ^ 
                                                                  VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 3U)) 
                                                                 ^ 
                                                                 VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 4U)) 
                                                                ^ 
                                                                VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 6U)) 
                                                               ^ 
                                                               VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 9U)) 
                                                              ^ 
                                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xaU)) 
                                                             ^ 
                                                             VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xbU)) 
                                                            ^ 
                                                            VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xeU)) 
                                                           ^ 
                                                           VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x10U)) 
                                                          ^ 
                                                          VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x11U)) 
                                                         ^ 
                                                         VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x13U)) 
                                                        ^ 
                                                        VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x14U)) 
                                                       ^ 
                                                       VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1bU)) 
                                                      ^ 
                                                      VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1eU)) 
                                                     ^ 
                                                     VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 1U)) 
                                                    ^ 
                                                    VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 3U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 4U)) 
                                                  ^ 
                                                  VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 6U)) 
                                                 ^ 
                                                 VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 9U)) 
                                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xaU)) 
                                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xbU)) 
                                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xeU)) 
                                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x10U)) 
                                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x11U)) 
                                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x13U)) 
                                          ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x14U)) 
                                         ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1bU)) 
                                        ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1eU)) 
                                       ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x20U)) 
                                      ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x21U)) 
                                     ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x22U)) 
                                    ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x23U)) 
                                   ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x24U)) 
                                  ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x26U)) 
                                 ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x27U)) 
                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x28U)) 
                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x30U)) 
                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x34U)) 
                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x36U)) 
                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x37U)) 
                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3aU))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__next_crc, 
                    (1U & (((((((((((((((((((((((((
                                                   (((((((((((((((((VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0U) 
                                                                    ^ 
                                                                    VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 2U)) 
                                                                   ^ 
                                                                   VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 4U)) 
                                                                  ^ 
                                                                  VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 5U)) 
                                                                 ^ 
                                                                 VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 7U)) 
                                                                ^ 
                                                                VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xaU)) 
                                                               ^ 
                                                               VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xbU)) 
                                                              ^ 
                                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xcU)) 
                                                             ^ 
                                                             VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xfU)) 
                                                            ^ 
                                                            VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x11U)) 
                                                           ^ 
                                                           VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x12U)) 
                                                          ^ 
                                                          VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x14U)) 
                                                         ^ 
                                                         VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x15U)) 
                                                        ^ 
                                                        VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1cU)) 
                                                       ^ 
                                                       VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1fU)) 
                                                      ^ 
                                                      VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0U)) 
                                                     ^ 
                                                     VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 2U)) 
                                                    ^ 
                                                    VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 4U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 5U)) 
                                                  ^ 
                                                  VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 7U)) 
                                                 ^ 
                                                 VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xaU)) 
                                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xbU)) 
                                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xcU)) 
                                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xfU)) 
                                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x11U)) 
                                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x12U)) 
                                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x14U)) 
                                          ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x15U)) 
                                         ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1cU)) 
                                        ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1fU)) 
                                       ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x21U)) 
                                      ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x22U)) 
                                     ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x23U)) 
                                    ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x24U)) 
                                   ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x25U)) 
                                  ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x27U)) 
                                 ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x28U)) 
                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x29U)) 
                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x31U)) 
                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x35U)) 
                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x37U)) 
                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x38U)) 
                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3bU))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__next_crc, 
                    (1U & (((((((((((((((((((((((((
                                                   ((((((((((((((((((VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0U) 
                                                                     ^ 
                                                                     VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 1U)) 
                                                                    ^ 
                                                                    VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 3U)) 
                                                                   ^ 
                                                                   VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 5U)) 
                                                                  ^ 
                                                                  VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 6U)) 
                                                                 ^ 
                                                                 VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 8U)) 
                                                                ^ 
                                                                VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xbU)) 
                                                               ^ 
                                                               VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xcU)) 
                                                              ^ 
                                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xdU)) 
                                                             ^ 
                                                             VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x10U)) 
                                                            ^ 
                                                            VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x12U)) 
                                                           ^ 
                                                           VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x13U)) 
                                                          ^ 
                                                          VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x15U)) 
                                                         ^ 
                                                         VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x16U)) 
                                                        ^ 
                                                        VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1dU)) 
                                                       ^ 
                                                       VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0U)) 
                                                      ^ 
                                                      VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 1U)) 
                                                     ^ 
                                                     VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 3U)) 
                                                    ^ 
                                                    VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 5U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 6U)) 
                                                  ^ 
                                                  VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 8U)) 
                                                 ^ 
                                                 VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xbU)) 
                                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xcU)) 
                                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xdU)) 
                                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x10U)) 
                                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x12U)) 
                                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x13U)) 
                                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x15U)) 
                                          ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x16U)) 
                                         ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1dU)) 
                                        ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x20U)) 
                                       ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x22U)) 
                                      ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x23U)) 
                                     ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x24U)) 
                                    ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x25U)) 
                                   ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x26U)) 
                                  ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x28U)) 
                                 ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x29U)) 
                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2aU)) 
                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x32U)) 
                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x36U)) 
                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x38U)) 
                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x39U)) 
                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3cU))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__next_crc, 
                    (1U & (((((((((((((((((((((((((
                                                   ((((((((((((((((((((VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0U) 
                                                                       ^ 
                                                                       VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 1U)) 
                                                                      ^ 
                                                                      VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 2U)) 
                                                                     ^ 
                                                                     VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 4U)) 
                                                                    ^ 
                                                                    VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 6U)) 
                                                                   ^ 
                                                                   VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 7U)) 
                                                                  ^ 
                                                                  VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 9U)) 
                                                                 ^ 
                                                                 VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xcU)) 
                                                                ^ 
                                                                VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xdU)) 
                                                               ^ 
                                                               VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xeU)) 
                                                              ^ 
                                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x11U)) 
                                                             ^ 
                                                             VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x13U)) 
                                                            ^ 
                                                            VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x14U)) 
                                                           ^ 
                                                           VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x16U)) 
                                                          ^ 
                                                          VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x17U)) 
                                                         ^ 
                                                         VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1eU)) 
                                                        ^ 
                                                        VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0U)) 
                                                       ^ 
                                                       VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 1U)) 
                                                      ^ 
                                                      VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 2U)) 
                                                     ^ 
                                                     VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 4U)) 
                                                    ^ 
                                                    VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 6U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 7U)) 
                                                  ^ 
                                                  VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 9U)) 
                                                 ^ 
                                                 VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xcU)) 
                                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xdU)) 
                                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xeU)) 
                                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x11U)) 
                                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x13U)) 
                                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x14U)) 
                                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x16U)) 
                                          ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x17U)) 
                                         ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1eU)) 
                                        ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x21U)) 
                                       ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x23U)) 
                                      ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x24U)) 
                                     ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x25U)) 
                                    ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x26U)) 
                                   ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x27U)) 
                                  ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x29U)) 
                                 ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2aU)) 
                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2bU)) 
                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x33U)) 
                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x37U)) 
                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x39U)) 
                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3aU)) 
                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3dU))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__next_crc, 
                    (1U & (((((((((((((((((((((((((
                                                   ((((((((((((((((((((((VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0U) 
                                                                         ^ 
                                                                         VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 1U)) 
                                                                        ^ 
                                                                        VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 2U)) 
                                                                       ^ 
                                                                       VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 3U)) 
                                                                      ^ 
                                                                      VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 5U)) 
                                                                     ^ 
                                                                     VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 7U)) 
                                                                    ^ 
                                                                    VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 8U)) 
                                                                   ^ 
                                                                   VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xaU)) 
                                                                  ^ 
                                                                  VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xdU)) 
                                                                 ^ 
                                                                 VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xeU)) 
                                                                ^ 
                                                                VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xfU)) 
                                                               ^ 
                                                               VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x12U)) 
                                                              ^ 
                                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x14U)) 
                                                             ^ 
                                                             VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x15U)) 
                                                            ^ 
                                                            VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x17U)) 
                                                           ^ 
                                                           VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x18U)) 
                                                          ^ 
                                                          VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1fU)) 
                                                         ^ 
                                                         VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0U)) 
                                                        ^ 
                                                        VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 1U)) 
                                                       ^ 
                                                       VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 2U)) 
                                                      ^ 
                                                      VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 3U)) 
                                                     ^ 
                                                     VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 5U)) 
                                                    ^ 
                                                    VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 7U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 8U)) 
                                                  ^ 
                                                  VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xaU)) 
                                                 ^ 
                                                 VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xdU)) 
                                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xeU)) 
                                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xfU)) 
                                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x12U)) 
                                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x14U)) 
                                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x15U)) 
                                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x17U)) 
                                          ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x18U)) 
                                         ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1fU)) 
                                        ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x22U)) 
                                       ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x24U)) 
                                      ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x25U)) 
                                     ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x26U)) 
                                    ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x27U)) 
                                   ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x28U)) 
                                  ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2aU)) 
                                 ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2bU)) 
                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2cU)) 
                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x34U)) 
                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x38U)) 
                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3aU)) 
                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3bU)) 
                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3eU))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__next_crc, 
                    (1U & (((((((((((((((((((((((((
                                                   (((((((((((((((((((((VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 1U) 
                                                                        ^ 
                                                                        VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 2U)) 
                                                                       ^ 
                                                                       VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 3U)) 
                                                                      ^ 
                                                                      VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 4U)) 
                                                                     ^ 
                                                                     VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 6U)) 
                                                                    ^ 
                                                                    VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 8U)) 
                                                                   ^ 
                                                                   VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 9U)) 
                                                                  ^ 
                                                                  VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xbU)) 
                                                                 ^ 
                                                                 VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xeU)) 
                                                                ^ 
                                                                VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xfU)) 
                                                               ^ 
                                                               VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x10U)) 
                                                              ^ 
                                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x13U)) 
                                                             ^ 
                                                             VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x15U)) 
                                                            ^ 
                                                            VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x16U)) 
                                                           ^ 
                                                           VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x18U)) 
                                                          ^ 
                                                          VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x19U)) 
                                                         ^ 
                                                         VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 1U)) 
                                                        ^ 
                                                        VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 2U)) 
                                                       ^ 
                                                       VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 3U)) 
                                                      ^ 
                                                      VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 4U)) 
                                                     ^ 
                                                     VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 6U)) 
                                                    ^ 
                                                    VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 8U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 9U)) 
                                                  ^ 
                                                  VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xbU)) 
                                                 ^ 
                                                 VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xeU)) 
                                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xfU)) 
                                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x10U)) 
                                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x13U)) 
                                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x15U)) 
                                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x16U)) 
                                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x18U)) 
                                          ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x19U)) 
                                         ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x20U)) 
                                        ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x23U)) 
                                       ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x25U)) 
                                      ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x26U)) 
                                     ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x27U)) 
                                    ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x28U)) 
                                   ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x29U)) 
                                  ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2bU)) 
                                 ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2cU)) 
                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2dU)) 
                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x35U)) 
                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x39U)) 
                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3bU)) 
                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3cU)) 
                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3fU))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__next_crc, 
                    (1U & (((((((((((((((((((((((((
                                                   (((((((((((((((((((VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 1U) 
                                                                      ^ 
                                                                      VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 2U)) 
                                                                     ^ 
                                                                     VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 5U)) 
                                                                    ^ 
                                                                    VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 6U)) 
                                                                   ^ 
                                                                   VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 7U)) 
                                                                  ^ 
                                                                  VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xbU)) 
                                                                 ^ 
                                                                 VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xcU)) 
                                                                ^ 
                                                                VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xeU)) 
                                                               ^ 
                                                               VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xfU)) 
                                                              ^ 
                                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x13U)) 
                                                             ^ 
                                                             VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x16U)) 
                                                            ^ 
                                                            VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x17U)) 
                                                           ^ 
                                                           VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x19U)) 
                                                          ^ 
                                                          VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1aU)) 
                                                         ^ 
                                                         VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1bU)) 
                                                        ^ 
                                                        VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1eU)) 
                                                       ^ 
                                                       VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 1U)) 
                                                      ^ 
                                                      VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 2U)) 
                                                     ^ 
                                                     VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 5U)) 
                                                    ^ 
                                                    VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 6U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 7U)) 
                                                  ^ 
                                                  VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xbU)) 
                                                 ^ 
                                                 VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xcU)) 
                                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xeU)) 
                                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xfU)) 
                                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x13U)) 
                                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x16U)) 
                                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x17U)) 
                                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x19U)) 
                                          ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1aU)) 
                                         ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1bU)) 
                                        ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1eU)) 
                                       ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x20U)) 
                                      ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x22U)) 
                                     ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x23U)) 
                                    ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x29U)) 
                                   ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2aU)) 
                                  ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2cU)) 
                                 ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2dU)) 
                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2eU)) 
                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x30U)) 
                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x34U)) 
                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x37U)) 
                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3cU)) 
                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3dU))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__next_crc, 
                    (1U & (((((((((((((((((((((((((
                                                   (((((((((((((((((((((VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0U) 
                                                                        ^ 
                                                                        VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 2U)) 
                                                                       ^ 
                                                                       VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 3U)) 
                                                                      ^ 
                                                                      VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 6U)) 
                                                                     ^ 
                                                                     VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 7U)) 
                                                                    ^ 
                                                                    VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 8U)) 
                                                                   ^ 
                                                                   VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xcU)) 
                                                                  ^ 
                                                                  VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xdU)) 
                                                                 ^ 
                                                                 VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xfU)) 
                                                                ^ 
                                                                VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x10U)) 
                                                               ^ 
                                                               VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x14U)) 
                                                              ^ 
                                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x17U)) 
                                                             ^ 
                                                             VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x18U)) 
                                                            ^ 
                                                            VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1aU)) 
                                                           ^ 
                                                           VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1bU)) 
                                                          ^ 
                                                          VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1cU)) 
                                                         ^ 
                                                         VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1fU)) 
                                                        ^ 
                                                        VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0U)) 
                                                       ^ 
                                                       VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 2U)) 
                                                      ^ 
                                                      VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 3U)) 
                                                     ^ 
                                                     VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 6U)) 
                                                    ^ 
                                                    VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 7U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 8U)) 
                                                  ^ 
                                                  VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xcU)) 
                                                 ^ 
                                                 VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xdU)) 
                                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xfU)) 
                                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x10U)) 
                                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x14U)) 
                                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x17U)) 
                                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x18U)) 
                                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1aU)) 
                                          ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1bU)) 
                                         ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1cU)) 
                                        ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1fU)) 
                                       ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x21U)) 
                                      ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x23U)) 
                                     ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x24U)) 
                                    ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2aU)) 
                                   ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2bU)) 
                                  ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2dU)) 
                                 ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2eU)) 
                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2fU)) 
                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x31U)) 
                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x35U)) 
                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x38U)) 
                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3dU)) 
                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3eU))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__next_crc, 
                    (1U & (((((((((((((((((((((((((
                                                   ((((((((((((((((((((VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 1U) 
                                                                       ^ 
                                                                       VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 3U)) 
                                                                      ^ 
                                                                      VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 4U)) 
                                                                     ^ 
                                                                     VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 7U)) 
                                                                    ^ 
                                                                    VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 8U)) 
                                                                   ^ 
                                                                   VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 9U)) 
                                                                  ^ 
                                                                  VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xdU)) 
                                                                 ^ 
                                                                 VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xeU)) 
                                                                ^ 
                                                                VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x10U)) 
                                                               ^ 
                                                               VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x11U)) 
                                                              ^ 
                                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x15U)) 
                                                             ^ 
                                                             VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x18U)) 
                                                            ^ 
                                                            VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x19U)) 
                                                           ^ 
                                                           VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1bU)) 
                                                          ^ 
                                                          VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1cU)) 
                                                         ^ 
                                                         VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1dU)) 
                                                        ^ 
                                                        VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 1U)) 
                                                       ^ 
                                                       VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 3U)) 
                                                      ^ 
                                                      VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 4U)) 
                                                     ^ 
                                                     VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 7U)) 
                                                    ^ 
                                                    VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 8U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 9U)) 
                                                  ^ 
                                                  VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xdU)) 
                                                 ^ 
                                                 VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xeU)) 
                                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x10U)) 
                                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x11U)) 
                                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x15U)) 
                                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x18U)) 
                                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x19U)) 
                                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1bU)) 
                                          ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1cU)) 
                                         ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1dU)) 
                                        ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x20U)) 
                                       ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x22U)) 
                                      ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x24U)) 
                                     ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x25U)) 
                                    ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2bU)) 
                                   ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2cU)) 
                                  ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2eU)) 
                                 ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2fU)) 
                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x30U)) 
                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x32U)) 
                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x36U)) 
                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x39U)) 
                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3eU)) 
                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3fU))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__next_crc, 
                    (1U & (((((((((((((((((((((((((
                                                   ((((((((((((((((((((((((VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 1U) 
                                                                           ^ 
                                                                           VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 2U)) 
                                                                          ^ 
                                                                          VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 3U)) 
                                                                         ^ 
                                                                         VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 5U)) 
                                                                        ^ 
                                                                        VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 6U)) 
                                                                       ^ 
                                                                       VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 8U)) 
                                                                      ^ 
                                                                      VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xbU)) 
                                                                     ^ 
                                                                     VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xfU)) 
                                                                    ^ 
                                                                    VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x10U)) 
                                                                   ^ 
                                                                   VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x12U)) 
                                                                  ^ 
                                                                  VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x13U)) 
                                                                 ^ 
                                                                 VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x14U)) 
                                                                ^ 
                                                                VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x16U)) 
                                                               ^ 
                                                               VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x19U)) 
                                                              ^ 
                                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1aU)) 
                                                             ^ 
                                                             VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1bU)) 
                                                            ^ 
                                                            VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1cU)) 
                                                           ^ 
                                                           VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1dU)) 
                                                          ^ 
                                                          VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 1U)) 
                                                         ^ 
                                                         VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 2U)) 
                                                        ^ 
                                                        VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 3U)) 
                                                       ^ 
                                                       VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 5U)) 
                                                      ^ 
                                                      VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 6U)) 
                                                     ^ 
                                                     VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 8U)) 
                                                    ^ 
                                                    VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xbU)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xfU)) 
                                                  ^ 
                                                  VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x10U)) 
                                                 ^ 
                                                 VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x12U)) 
                                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x13U)) 
                                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x14U)) 
                                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x16U)) 
                                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x19U)) 
                                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1aU)) 
                                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1bU)) 
                                          ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1cU)) 
                                         ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1dU)) 
                                        ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x20U)) 
                                       ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x22U)) 
                                      ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x24U)) 
                                     ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x25U)) 
                                    ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x27U)) 
                                   ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x28U)) 
                                  ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2cU)) 
                                 ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2dU)) 
                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2fU)) 
                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x31U)) 
                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x33U)) 
                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x34U)) 
                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x36U)) 
                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3fU))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__next_crc, 
                    (1U & (((((((((((((((((((((((((
                                                   ((((((((((VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 1U) 
                                                             ^ 
                                                             VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 2U)) 
                                                            ^ 
                                                            VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 7U)) 
                                                           ^ 
                                                           VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xaU)) 
                                                          ^ 
                                                          VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xbU)) 
                                                         ^ 
                                                         VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xcU)) 
                                                        ^ 
                                                        VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xeU)) 
                                                       ^ 
                                                       VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x15U)) 
                                                      ^ 
                                                      VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x17U)) 
                                                     ^ 
                                                     VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1aU)) 
                                                    ^ 
                                                    VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1cU)) 
                                                   ^ 
                                                   VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1dU)) 
                                                  ^ 
                                                  VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 1U)) 
                                                 ^ 
                                                 VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 2U)) 
                                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 7U)) 
                                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xaU)) 
                                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xbU)) 
                                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xcU)) 
                                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xeU)) 
                                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x15U)) 
                                          ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x17U)) 
                                         ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1aU)) 
                                        ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1cU)) 
                                       ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1dU)) 
                                      ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x20U)) 
                                     ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x22U)) 
                                    ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x24U)) 
                                   ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x25U)) 
                                  ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x27U)) 
                                 ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x29U)) 
                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2dU)) 
                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2eU)) 
                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x32U)) 
                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x35U)) 
                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x36U)) 
                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3aU))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__next_crc, 
                    (1U & (((((((((((((((((((((((((
                                                   ((((((((((VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 2U) 
                                                             ^ 
                                                             VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 3U)) 
                                                            ^ 
                                                            VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 8U)) 
                                                           ^ 
                                                           VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xbU)) 
                                                          ^ 
                                                          VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xcU)) 
                                                         ^ 
                                                         VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xdU)) 
                                                        ^ 
                                                        VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xfU)) 
                                                       ^ 
                                                       VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x16U)) 
                                                      ^ 
                                                      VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x18U)) 
                                                     ^ 
                                                     VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1bU)) 
                                                    ^ 
                                                    VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1dU)) 
                                                   ^ 
                                                   VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1eU)) 
                                                  ^ 
                                                  VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 2U)) 
                                                 ^ 
                                                 VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 3U)) 
                                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 8U)) 
                                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xbU)) 
                                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xcU)) 
                                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xdU)) 
                                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xfU)) 
                                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x16U)) 
                                          ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x18U)) 
                                         ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1bU)) 
                                        ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1dU)) 
                                       ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1eU)) 
                                      ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x21U)) 
                                     ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x23U)) 
                                    ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x25U)) 
                                   ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x26U)) 
                                  ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x28U)) 
                                 ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2aU)) 
                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2eU)) 
                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2fU)) 
                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x33U)) 
                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x36U)) 
                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x37U)) 
                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3bU))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__next_crc, 
                    (1U & (((((((((((((((((((((((((
                                                   ((((((((((VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 3U) 
                                                             ^ 
                                                             VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 4U)) 
                                                            ^ 
                                                            VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 9U)) 
                                                           ^ 
                                                           VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xcU)) 
                                                          ^ 
                                                          VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xdU)) 
                                                         ^ 
                                                         VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xeU)) 
                                                        ^ 
                                                        VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x10U)) 
                                                       ^ 
                                                       VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x17U)) 
                                                      ^ 
                                                      VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x19U)) 
                                                     ^ 
                                                     VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1cU)) 
                                                    ^ 
                                                    VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1eU)) 
                                                   ^ 
                                                   VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1fU)) 
                                                  ^ 
                                                  VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 3U)) 
                                                 ^ 
                                                 VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 4U)) 
                                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 9U)) 
                                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xcU)) 
                                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xdU)) 
                                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xeU)) 
                                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x10U)) 
                                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x17U)) 
                                          ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x19U)) 
                                         ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1cU)) 
                                        ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1eU)) 
                                       ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1fU)) 
                                      ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x22U)) 
                                     ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x24U)) 
                                    ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x26U)) 
                                   ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x27U)) 
                                  ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x29U)) 
                                 ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2bU)) 
                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2fU)) 
                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x30U)) 
                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x34U)) 
                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x37U)) 
                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x38U)) 
                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3cU))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__next_crc, 
                    (1U & (((((((((((((((((((((((((
                                                   (((((((((VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 4U) 
                                                            ^ 
                                                            VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 5U)) 
                                                           ^ 
                                                           VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xaU)) 
                                                          ^ 
                                                          VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xdU)) 
                                                         ^ 
                                                         VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xeU)) 
                                                        ^ 
                                                        VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xfU)) 
                                                       ^ 
                                                       VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x11U)) 
                                                      ^ 
                                                      VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x18U)) 
                                                     ^ 
                                                     VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1aU)) 
                                                    ^ 
                                                    VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1dU)) 
                                                   ^ 
                                                   VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1fU)) 
                                                  ^ 
                                                  VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 4U)) 
                                                 ^ 
                                                 VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 5U)) 
                                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xaU)) 
                                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xdU)) 
                                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xeU)) 
                                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xfU)) 
                                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x11U)) 
                                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x18U)) 
                                          ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1aU)) 
                                         ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1dU)) 
                                        ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1fU)) 
                                       ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x20U)) 
                                      ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x23U)) 
                                     ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x25U)) 
                                    ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x27U)) 
                                   ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x28U)) 
                                  ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2aU)) 
                                 ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2cU)) 
                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x30U)) 
                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x31U)) 
                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x35U)) 
                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x38U)) 
                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x39U)) 
                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3dU))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__next_crc, 
                    (1U & (((((((((((((((((((((((((
                                                   ((((((((VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 5U) 
                                                           ^ 
                                                           VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 6U)) 
                                                          ^ 
                                                          VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xbU)) 
                                                         ^ 
                                                         VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xeU)) 
                                                        ^ 
                                                        VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xfU)) 
                                                       ^ 
                                                       VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x10U)) 
                                                      ^ 
                                                      VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x12U)) 
                                                     ^ 
                                                     VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x19U)) 
                                                    ^ 
                                                    VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1bU)) 
                                                   ^ 
                                                   VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1eU)) 
                                                  ^ 
                                                  VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 5U)) 
                                                 ^ 
                                                 VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 6U)) 
                                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xbU)) 
                                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xeU)) 
                                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xfU)) 
                                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x10U)) 
                                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x12U)) 
                                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x19U)) 
                                          ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1bU)) 
                                         ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1eU)) 
                                        ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x20U)) 
                                       ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x21U)) 
                                      ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x24U)) 
                                     ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x26U)) 
                                    ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x28U)) 
                                   ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x29U)) 
                                  ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2bU)) 
                                 ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2dU)) 
                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x31U)) 
                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x32U)) 
                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x36U)) 
                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x39U)) 
                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3aU)) 
                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3eU))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__next_crc, 
                    (1U & (((((((((((((((((((((((((
                                                   ((((((((VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 6U) 
                                                           ^ 
                                                           VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 7U)) 
                                                          ^ 
                                                          VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xcU)) 
                                                         ^ 
                                                         VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xfU)) 
                                                        ^ 
                                                        VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x10U)) 
                                                       ^ 
                                                       VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x11U)) 
                                                      ^ 
                                                      VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x13U)) 
                                                     ^ 
                                                     VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1aU)) 
                                                    ^ 
                                                    VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1cU)) 
                                                   ^ 
                                                   VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1fU)) 
                                                  ^ 
                                                  VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 6U)) 
                                                 ^ 
                                                 VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 7U)) 
                                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xcU)) 
                                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xfU)) 
                                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x10U)) 
                                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x11U)) 
                                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x13U)) 
                                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1aU)) 
                                          ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1cU)) 
                                         ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1fU)) 
                                        ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x21U)) 
                                       ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x22U)) 
                                      ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x25U)) 
                                     ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x27U)) 
                                    ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x29U)) 
                                   ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2aU)) 
                                  ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2cU)) 
                                 ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2eU)) 
                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x32U)) 
                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x33U)) 
                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x37U)) 
                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3aU)) 
                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3bU)) 
                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3fU))));
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__next_crc, 
                    (1U & (((((((((((((((((((((((((
                                                   (((((((((((((((((((VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 1U) 
                                                                      ^ 
                                                                      VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 3U)) 
                                                                     ^ 
                                                                     VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 4U)) 
                                                                    ^ 
                                                                    VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 6U)) 
                                                                   ^ 
                                                                   VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 7U)) 
                                                                  ^ 
                                                                  VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 8U)) 
                                                                 ^ 
                                                                 VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 9U)) 
                                                                ^ 
                                                                VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xaU)) 
                                                               ^ 
                                                               VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xbU)) 
                                                              ^ 
                                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xdU)) 
                                                             ^ 
                                                             VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xeU)) 
                                                            ^ 
                                                            VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x12U)) 
                                                           ^ 
                                                           VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x13U)) 
                                                          ^ 
                                                          VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1dU)) 
                                                         ^ 
                                                         VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1eU)) 
                                                        ^ 
                                                        VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 1U)) 
                                                       ^ 
                                                       VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 3U)) 
                                                      ^ 
                                                      VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 4U)) 
                                                     ^ 
                                                     VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 6U)) 
                                                    ^ 
                                                    VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 7U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 8U)) 
                                                  ^ 
                                                  VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 9U)) 
                                                 ^ 
                                                 VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xaU)) 
                                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xbU)) 
                                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xdU)) 
                                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xeU)) 
                                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x12U)) 
                                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x13U)) 
                                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1dU)) 
                                          ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1eU)) 
                                         ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x21U)) 
                                        ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x24U)) 
                                       ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x27U)) 
                                      ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2aU)) 
                                     ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2bU)) 
                                    ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2dU)) 
                                   ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2fU)) 
                                  ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x30U)) 
                                 ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x33U)) 
                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x36U)) 
                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x37U)) 
                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x38U)) 
                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3aU)) 
                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3bU)) 
                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3cU))));
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__next_crc, 
                    (1U & (((((((((((((((((((((((((
                                                   (((((((((((((((((((((VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0U) 
                                                                        ^ 
                                                                        VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 2U)) 
                                                                       ^ 
                                                                       VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 4U)) 
                                                                      ^ 
                                                                      VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 5U)) 
                                                                     ^ 
                                                                     VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 7U)) 
                                                                    ^ 
                                                                    VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 8U)) 
                                                                   ^ 
                                                                   VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 9U)) 
                                                                  ^ 
                                                                  VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xaU)) 
                                                                 ^ 
                                                                 VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xbU)) 
                                                                ^ 
                                                                VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xcU)) 
                                                               ^ 
                                                               VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xeU)) 
                                                              ^ 
                                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xfU)) 
                                                             ^ 
                                                             VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x13U)) 
                                                            ^ 
                                                            VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x14U)) 
                                                           ^ 
                                                           VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1eU)) 
                                                          ^ 
                                                          VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1fU)) 
                                                         ^ 
                                                         VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0U)) 
                                                        ^ 
                                                        VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 2U)) 
                                                       ^ 
                                                       VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 4U)) 
                                                      ^ 
                                                      VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 5U)) 
                                                     ^ 
                                                     VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 7U)) 
                                                    ^ 
                                                    VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 8U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 9U)) 
                                                  ^ 
                                                  VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xaU)) 
                                                 ^ 
                                                 VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xbU)) 
                                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xcU)) 
                                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xeU)) 
                                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xfU)) 
                                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x13U)) 
                                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x14U)) 
                                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1eU)) 
                                          ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1fU)) 
                                         ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x22U)) 
                                        ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x25U)) 
                                       ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x28U)) 
                                      ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2bU)) 
                                     ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2cU)) 
                                    ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2eU)) 
                                   ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x30U)) 
                                  ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x31U)) 
                                 ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x34U)) 
                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x37U)) 
                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x38U)) 
                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x39U)) 
                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3bU)) 
                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3cU)) 
                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3dU))));
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__next_crc, 
                    (1U & (((((((((((((((((((((((((
                                                   ((((((((((((((((((((VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 1U) 
                                                                       ^ 
                                                                       VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 3U)) 
                                                                      ^ 
                                                                      VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 5U)) 
                                                                     ^ 
                                                                     VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 6U)) 
                                                                    ^ 
                                                                    VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 8U)) 
                                                                   ^ 
                                                                   VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 9U)) 
                                                                  ^ 
                                                                  VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xaU)) 
                                                                 ^ 
                                                                 VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xbU)) 
                                                                ^ 
                                                                VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xcU)) 
                                                               ^ 
                                                               VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xdU)) 
                                                              ^ 
                                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xfU)) 
                                                             ^ 
                                                             VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x10U)) 
                                                            ^ 
                                                            VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x14U)) 
                                                           ^ 
                                                           VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x15U)) 
                                                          ^ 
                                                          VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1fU)) 
                                                         ^ 
                                                         VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 1U)) 
                                                        ^ 
                                                        VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 3U)) 
                                                       ^ 
                                                       VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 5U)) 
                                                      ^ 
                                                      VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 6U)) 
                                                     ^ 
                                                     VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 8U)) 
                                                    ^ 
                                                    VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 9U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xaU)) 
                                                  ^ 
                                                  VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xbU)) 
                                                 ^ 
                                                 VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xcU)) 
                                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xdU)) 
                                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xfU)) 
                                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x10U)) 
                                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x14U)) 
                                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x15U)) 
                                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1fU)) 
                                          ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x20U)) 
                                         ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x23U)) 
                                        ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x26U)) 
                                       ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x29U)) 
                                      ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2cU)) 
                                     ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2dU)) 
                                    ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2fU)) 
                                   ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x31U)) 
                                  ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x32U)) 
                                 ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x35U)) 
                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x38U)) 
                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x39U)) 
                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3aU)) 
                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3cU)) 
                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3dU)) 
                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3eU))));
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__next_crc, 
                    (1U & (((((((((((((((((((((((((
                                                   (((((((((((((((((((((VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0U) 
                                                                        ^ 
                                                                        VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 2U)) 
                                                                       ^ 
                                                                       VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 4U)) 
                                                                      ^ 
                                                                      VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 6U)) 
                                                                     ^ 
                                                                     VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 7U)) 
                                                                    ^ 
                                                                    VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 9U)) 
                                                                   ^ 
                                                                   VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xaU)) 
                                                                  ^ 
                                                                  VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xbU)) 
                                                                 ^ 
                                                                 VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xcU)) 
                                                                ^ 
                                                                VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xdU)) 
                                                               ^ 
                                                               VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xeU)) 
                                                              ^ 
                                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x10U)) 
                                                             ^ 
                                                             VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x11U)) 
                                                            ^ 
                                                            VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x15U)) 
                                                           ^ 
                                                           VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x16U)) 
                                                          ^ 
                                                          VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0U)) 
                                                         ^ 
                                                         VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 2U)) 
                                                        ^ 
                                                        VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 4U)) 
                                                       ^ 
                                                       VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 6U)) 
                                                      ^ 
                                                      VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 7U)) 
                                                     ^ 
                                                     VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 9U)) 
                                                    ^ 
                                                    VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xaU)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xbU)) 
                                                  ^ 
                                                  VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xcU)) 
                                                 ^ 
                                                 VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xdU)) 
                                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xeU)) 
                                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x10U)) 
                                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x11U)) 
                                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x15U)) 
                                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x16U)) 
                                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x20U)) 
                                          ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x21U)) 
                                         ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x24U)) 
                                        ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x27U)) 
                                       ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2aU)) 
                                      ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2dU)) 
                                     ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2eU)) 
                                    ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x30U)) 
                                   ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x32U)) 
                                  ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x33U)) 
                                 ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x36U)) 
                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x39U)) 
                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3aU)) 
                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3bU)) 
                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3dU)) 
                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3eU)) 
                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3fU))));
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__next_crc, 
                    (1U & (((((((((((((((((((((((((
                                                   (((((((((((((((((((((((((VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 4U) 
                                                                            ^ 
                                                                            VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 5U)) 
                                                                           ^ 
                                                                           VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 6U)) 
                                                                          ^ 
                                                                          VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 7U)) 
                                                                         ^ 
                                                                         VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 8U)) 
                                                                        ^ 
                                                                        VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 9U)) 
                                                                       ^ 
                                                                       VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xcU)) 
                                                                      ^ 
                                                                      VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xdU)) 
                                                                     ^ 
                                                                     VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xfU)) 
                                                                    ^ 
                                                                    VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x10U)) 
                                                                   ^ 
                                                                   VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x12U)) 
                                                                  ^ 
                                                                  VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x13U)) 
                                                                 ^ 
                                                                 VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x14U)) 
                                                                ^ 
                                                                VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x16U)) 
                                                               ^ 
                                                               VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x17U)) 
                                                              ^ 
                                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1bU)) 
                                                             ^ 
                                                             VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1eU)) 
                                                            ^ 
                                                            VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 4U)) 
                                                           ^ 
                                                           VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 5U)) 
                                                          ^ 
                                                          VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 6U)) 
                                                         ^ 
                                                         VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 7U)) 
                                                        ^ 
                                                        VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 8U)) 
                                                       ^ 
                                                       VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 9U)) 
                                                      ^ 
                                                      VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xcU)) 
                                                     ^ 
                                                     VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xdU)) 
                                                    ^ 
                                                    VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xfU)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x10U)) 
                                                  ^ 
                                                  VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x12U)) 
                                                 ^ 
                                                 VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x13U)) 
                                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x14U)) 
                                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x16U)) 
                                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x17U)) 
                                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1bU)) 
                                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1eU)) 
                                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x20U)) 
                                          ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x23U)) 
                                         ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x24U)) 
                                        ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x25U)) 
                                       ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x26U)) 
                                      ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x27U)) 
                                     ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2bU)) 
                                    ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2eU)) 
                                   ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2fU)) 
                                  ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x30U)) 
                                 ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x31U)) 
                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x33U)) 
                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x36U)) 
                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3bU)) 
                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3cU)) 
                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3eU)) 
                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3fU))));
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__next_crc, 
                    (1U & (((((((((((((((((((((((((
                                                   (((((((((((((((((((VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0U) 
                                                                      ^ 
                                                                      VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 1U)) 
                                                                     ^ 
                                                                     VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 3U)) 
                                                                    ^ 
                                                                    VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 4U)) 
                                                                   ^ 
                                                                   VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 5U)) 
                                                                  ^ 
                                                                  VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 7U)) 
                                                                 ^ 
                                                                 VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 8U)) 
                                                                ^ 
                                                                VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xbU)) 
                                                               ^ 
                                                               VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xdU)) 
                                                              ^ 
                                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x15U)) 
                                                             ^ 
                                                             VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x17U)) 
                                                            ^ 
                                                            VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x18U)) 
                                                           ^ 
                                                           VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1bU)) 
                                                          ^ 
                                                          VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1cU)) 
                                                         ^ 
                                                         VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1eU)) 
                                                        ^ 
                                                        VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1fU)) 
                                                       ^ 
                                                       VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0U)) 
                                                      ^ 
                                                      VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 1U)) 
                                                     ^ 
                                                     VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 3U)) 
                                                    ^ 
                                                    VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 4U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 5U)) 
                                                  ^ 
                                                  VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 7U)) 
                                                 ^ 
                                                 VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 8U)) 
                                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xbU)) 
                                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xdU)) 
                                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x15U)) 
                                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x17U)) 
                                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x18U)) 
                                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1bU)) 
                                          ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1cU)) 
                                         ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1eU)) 
                                        ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1fU)) 
                                       ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x20U)) 
                                      ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x22U)) 
                                     ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x23U)) 
                                    ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x25U)) 
                                   ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2cU)) 
                                  ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2fU)) 
                                 ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x31U)) 
                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x32U)) 
                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x36U)) 
                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3aU)) 
                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3cU)) 
                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3dU)) 
                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3fU))));
    VL_ASSIGNBIT_II(0x16U, vlSelfRef.__PVT__next_crc, 
                    (1U & (((((((((((((((((((((((((
                                                   ((((((((((((((((((((((((VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 2U) 
                                                                           ^ 
                                                                           VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 3U)) 
                                                                          ^ 
                                                                          VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 5U)) 
                                                                         ^ 
                                                                         VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 8U)) 
                                                                        ^ 
                                                                        VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xaU)) 
                                                                       ^ 
                                                                       VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xbU)) 
                                                                      ^ 
                                                                      VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xcU)) 
                                                                     ^ 
                                                                     VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x10U)) 
                                                                    ^ 
                                                                    VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x11U)) 
                                                                   ^ 
                                                                   VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x13U)) 
                                                                  ^ 
                                                                  VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x14U)) 
                                                                 ^ 
                                                                 VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x16U)) 
                                                                ^ 
                                                                VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x18U)) 
                                                               ^ 
                                                               VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x19U)) 
                                                              ^ 
                                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1bU)) 
                                                             ^ 
                                                             VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1cU)) 
                                                            ^ 
                                                            VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1dU)) 
                                                           ^ 
                                                           VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1eU)) 
                                                          ^ 
                                                          VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1fU)) 
                                                         ^ 
                                                         VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 2U)) 
                                                        ^ 
                                                        VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 3U)) 
                                                       ^ 
                                                       VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 5U)) 
                                                      ^ 
                                                      VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 8U)) 
                                                     ^ 
                                                     VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xaU)) 
                                                    ^ 
                                                    VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xbU)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xcU)) 
                                                  ^ 
                                                  VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x10U)) 
                                                 ^ 
                                                 VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x11U)) 
                                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x13U)) 
                                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x14U)) 
                                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x16U)) 
                                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x18U)) 
                                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x19U)) 
                                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1bU)) 
                                          ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1cU)) 
                                         ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1dU)) 
                                        ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1eU)) 
                                       ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1fU)) 
                                      ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x22U)) 
                                     ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x27U)) 
                                    ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x28U)) 
                                   ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2dU)) 
                                  ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x32U)) 
                                 ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x33U)) 
                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x34U)) 
                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x36U)) 
                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3aU)) 
                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3bU)) 
                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3dU)) 
                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3eU))));
    VL_ASSIGNBIT_II(0x17U, vlSelfRef.__PVT__next_crc, 
                    (1U & (((((((((((((((((((((((((
                                                   (((((((((((((((((((((((((VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0U) 
                                                                            ^ 
                                                                            VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 3U)) 
                                                                           ^ 
                                                                           VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 4U)) 
                                                                          ^ 
                                                                          VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 6U)) 
                                                                         ^ 
                                                                         VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 9U)) 
                                                                        ^ 
                                                                        VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xbU)) 
                                                                       ^ 
                                                                       VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xcU)) 
                                                                      ^ 
                                                                      VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xdU)) 
                                                                     ^ 
                                                                     VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x11U)) 
                                                                    ^ 
                                                                    VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x12U)) 
                                                                   ^ 
                                                                   VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x14U)) 
                                                                  ^ 
                                                                  VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x15U)) 
                                                                 ^ 
                                                                 VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x17U)) 
                                                                ^ 
                                                                VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x19U)) 
                                                               ^ 
                                                               VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1aU)) 
                                                              ^ 
                                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1cU)) 
                                                             ^ 
                                                             VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1dU)) 
                                                            ^ 
                                                            VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1eU)) 
                                                           ^ 
                                                           VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1fU)) 
                                                          ^ 
                                                          VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0U)) 
                                                         ^ 
                                                         VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 3U)) 
                                                        ^ 
                                                        VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 4U)) 
                                                       ^ 
                                                       VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 6U)) 
                                                      ^ 
                                                      VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 9U)) 
                                                     ^ 
                                                     VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xbU)) 
                                                    ^ 
                                                    VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xcU)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xdU)) 
                                                  ^ 
                                                  VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x11U)) 
                                                 ^ 
                                                 VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x12U)) 
                                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x14U)) 
                                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x15U)) 
                                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x17U)) 
                                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x19U)) 
                                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1aU)) 
                                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1cU)) 
                                          ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1dU)) 
                                         ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1eU)) 
                                        ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1fU)) 
                                       ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x20U)) 
                                      ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x23U)) 
                                     ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x28U)) 
                                    ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x29U)) 
                                   ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2eU)) 
                                  ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x33U)) 
                                 ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x34U)) 
                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x35U)) 
                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x37U)) 
                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3bU)) 
                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3cU)) 
                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3eU)) 
                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3fU))));
    VL_ASSIGNBIT_II(0x18U, vlSelfRef.__PVT__next_crc, 
                    (1U & (((((((((((((((((((((((((
                                                   ((((((((((((((((((((((((((VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 3U) 
                                                                             ^ 
                                                                             VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 5U)) 
                                                                            ^ 
                                                                            VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 6U)) 
                                                                           ^ 
                                                                           VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 7U)) 
                                                                          ^ 
                                                                          VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 9U)) 
                                                                         ^ 
                                                                         VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xbU)) 
                                                                        ^ 
                                                                        VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xcU)) 
                                                                       ^ 
                                                                       VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xdU)) 
                                                                      ^ 
                                                                      VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x10U)) 
                                                                     ^ 
                                                                     VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x11U)) 
                                                                    ^ 
                                                                    VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x12U)) 
                                                                   ^ 
                                                                   VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x14U)) 
                                                                  ^ 
                                                                  VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x15U)) 
                                                                 ^ 
                                                                 VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x16U)) 
                                                                ^ 
                                                                VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x18U)) 
                                                               ^ 
                                                               VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1aU)) 
                                                              ^ 
                                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1dU)) 
                                                             ^ 
                                                             VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1fU)) 
                                                            ^ 
                                                            VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 3U)) 
                                                           ^ 
                                                           VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 5U)) 
                                                          ^ 
                                                          VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 6U)) 
                                                         ^ 
                                                         VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 7U)) 
                                                        ^ 
                                                        VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 9U)) 
                                                       ^ 
                                                       VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xbU)) 
                                                      ^ 
                                                      VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xcU)) 
                                                     ^ 
                                                     VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xdU)) 
                                                    ^ 
                                                    VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x10U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x11U)) 
                                                  ^ 
                                                  VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x12U)) 
                                                 ^ 
                                                 VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x14U)) 
                                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x15U)) 
                                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x16U)) 
                                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x18U)) 
                                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1aU)) 
                                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1dU)) 
                                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1fU)) 
                                          ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x22U)) 
                                         ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x23U)) 
                                        ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x26U)) 
                                       ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x27U)) 
                                      ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x28U)) 
                                     ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x29U)) 
                                    ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2aU)) 
                                   ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2fU)) 
                                  ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x30U)) 
                                 ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x35U)) 
                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x37U)) 
                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x38U)) 
                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3aU)) 
                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3cU)) 
                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3dU)) 
                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3fU))));
    VL_ASSIGNBIT_II(0x19U, vlSelfRef.__PVT__next_crc, 
                    (1U & (((((((((((((((((((((((((
                                                   (((((((((((((((((((VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 1U) 
                                                                      ^ 
                                                                      VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 3U)) 
                                                                     ^ 
                                                                     VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 7U)) 
                                                                    ^ 
                                                                    VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 8U)) 
                                                                   ^ 
                                                                   VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 9U)) 
                                                                  ^ 
                                                                  VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xbU)) 
                                                                 ^ 
                                                                 VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xcU)) 
                                                                ^ 
                                                                VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xdU)) 
                                                               ^ 
                                                               VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x10U)) 
                                                              ^ 
                                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x12U)) 
                                                             ^ 
                                                             VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x14U)) 
                                                            ^ 
                                                            VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x15U)) 
                                                           ^ 
                                                           VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x16U)) 
                                                          ^ 
                                                          VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x17U)) 
                                                         ^ 
                                                         VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x19U)) 
                                                        ^ 
                                                        VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 1U)) 
                                                       ^ 
                                                       VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 3U)) 
                                                      ^ 
                                                      VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 7U)) 
                                                     ^ 
                                                     VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 8U)) 
                                                    ^ 
                                                    VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 9U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xbU)) 
                                                  ^ 
                                                  VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xcU)) 
                                                 ^ 
                                                 VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xdU)) 
                                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x10U)) 
                                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x12U)) 
                                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x14U)) 
                                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x15U)) 
                                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x16U)) 
                                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x17U)) 
                                          ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x19U)) 
                                         ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x21U)) 
                                        ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x22U)) 
                                       ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x26U)) 
                                      ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x29U)) 
                                     ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2aU)) 
                                    ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2bU)) 
                                   ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x31U)) 
                                  ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x34U)) 
                                 ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x37U)) 
                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x38U)) 
                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x39U)) 
                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3aU)) 
                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3bU)) 
                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3dU)) 
                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3eU))));
    VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__PVT__next_crc, 
                    (1U & (((((((((((((((((((((((((
                                                   (((((((((((((((((((((VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0U) 
                                                                        ^ 
                                                                        VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 2U)) 
                                                                       ^ 
                                                                       VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 4U)) 
                                                                      ^ 
                                                                      VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 8U)) 
                                                                     ^ 
                                                                     VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 9U)) 
                                                                    ^ 
                                                                    VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xaU)) 
                                                                   ^ 
                                                                   VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xcU)) 
                                                                  ^ 
                                                                  VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xdU)) 
                                                                 ^ 
                                                                 VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xeU)) 
                                                                ^ 
                                                                VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x11U)) 
                                                               ^ 
                                                               VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x13U)) 
                                                              ^ 
                                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x15U)) 
                                                             ^ 
                                                             VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x16U)) 
                                                            ^ 
                                                            VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x17U)) 
                                                           ^ 
                                                           VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x18U)) 
                                                          ^ 
                                                          VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1aU)) 
                                                         ^ 
                                                         VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0U)) 
                                                        ^ 
                                                        VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 2U)) 
                                                       ^ 
                                                       VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 4U)) 
                                                      ^ 
                                                      VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 8U)) 
                                                     ^ 
                                                     VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 9U)) 
                                                    ^ 
                                                    VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xaU)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xcU)) 
                                                  ^ 
                                                  VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xdU)) 
                                                 ^ 
                                                 VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xeU)) 
                                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x11U)) 
                                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x13U)) 
                                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x15U)) 
                                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x16U)) 
                                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x17U)) 
                                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x18U)) 
                                          ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1aU)) 
                                         ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x22U)) 
                                        ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x23U)) 
                                       ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x27U)) 
                                      ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2aU)) 
                                     ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2bU)) 
                                    ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2cU)) 
                                   ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x32U)) 
                                  ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x35U)) 
                                 ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x38U)) 
                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x39U)) 
                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3aU)) 
                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3bU)) 
                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3cU)) 
                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3eU)) 
                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3fU))));
    VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__PVT__next_crc, 
                    (1U & (((((((((((((((((((((((((
                                                   (((((((((((((((((((((VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0U) 
                                                                        ^ 
                                                                        VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 4U)) 
                                                                       ^ 
                                                                       VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 5U)) 
                                                                      ^ 
                                                                      VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 6U)) 
                                                                     ^ 
                                                                     VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xdU)) 
                                                                    ^ 
                                                                    VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xfU)) 
                                                                   ^ 
                                                                   VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x10U)) 
                                                                  ^ 
                                                                  VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x11U)) 
                                                                 ^ 
                                                                 VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x12U)) 
                                                                ^ 
                                                                VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x13U)) 
                                                               ^ 
                                                               VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x16U)) 
                                                              ^ 
                                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x17U)) 
                                                             ^ 
                                                             VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x18U)) 
                                                            ^ 
                                                            VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x19U)) 
                                                           ^ 
                                                           VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1eU)) 
                                                          ^ 
                                                          VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0U)) 
                                                         ^ 
                                                         VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 4U)) 
                                                        ^ 
                                                        VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 5U)) 
                                                       ^ 
                                                       VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 6U)) 
                                                      ^ 
                                                      VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xdU)) 
                                                     ^ 
                                                     VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xfU)) 
                                                    ^ 
                                                    VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x10U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x11U)) 
                                                  ^ 
                                                  VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x12U)) 
                                                 ^ 
                                                 VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x13U)) 
                                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x16U)) 
                                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x17U)) 
                                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x18U)) 
                                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x19U)) 
                                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1eU)) 
                                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x20U)) 
                                          ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x21U)) 
                                         ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x22U)) 
                                        ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x26U)) 
                                       ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x27U)) 
                                      ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2bU)) 
                                     ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2cU)) 
                                    ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2dU)) 
                                   ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x30U)) 
                                  ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x33U)) 
                                 ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x34U)) 
                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x37U)) 
                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x39U)) 
                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3bU)) 
                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3cU)) 
                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3dU)) 
                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3fU))));
    VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__PVT__next_crc, 
                    (1U & (((((((((((((((((((((((((
                                                   (((((((((((((((((((VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 3U) 
                                                                      ^ 
                                                                      VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 4U)) 
                                                                     ^ 
                                                                     VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 5U)) 
                                                                    ^ 
                                                                    VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 7U)) 
                                                                   ^ 
                                                                   VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 9U)) 
                                                                  ^ 
                                                                  VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xaU)) 
                                                                 ^ 
                                                                 VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xbU)) 
                                                                ^ 
                                                                VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x12U)) 
                                                               ^ 
                                                               VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x17U)) 
                                                              ^ 
                                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x18U)) 
                                                             ^ 
                                                             VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x19U)) 
                                                            ^ 
                                                            VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1aU)) 
                                                           ^ 
                                                           VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1bU)) 
                                                          ^ 
                                                          VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1eU)) 
                                                         ^ 
                                                         VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1fU)) 
                                                        ^ 
                                                        VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 3U)) 
                                                       ^ 
                                                       VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 4U)) 
                                                      ^ 
                                                      VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 5U)) 
                                                     ^ 
                                                     VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 7U)) 
                                                    ^ 
                                                    VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 9U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xaU)) 
                                                  ^ 
                                                  VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xbU)) 
                                                 ^ 
                                                 VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x12U)) 
                                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x17U)) 
                                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x18U)) 
                                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x19U)) 
                                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1aU)) 
                                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1bU)) 
                                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1eU)) 
                                          ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1fU)) 
                                         ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x20U)) 
                                        ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x24U)) 
                                       ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x26U)) 
                                      ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2cU)) 
                                     ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2dU)) 
                                    ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2eU)) 
                                   ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x30U)) 
                                  ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x31U)) 
                                 ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x35U)) 
                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x36U)) 
                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x37U)) 
                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x38U)) 
                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3cU)) 
                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3dU)) 
                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3eU))));
    VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__PVT__next_crc, 
                    (1U & (((((((((((((((((((((((((
                                                   ((((((((((((((((((VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 4U) 
                                                                     ^ 
                                                                     VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 5U)) 
                                                                    ^ 
                                                                    VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 6U)) 
                                                                   ^ 
                                                                   VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 8U)) 
                                                                  ^ 
                                                                  VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xaU)) 
                                                                 ^ 
                                                                 VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xbU)) 
                                                                ^ 
                                                                VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xcU)) 
                                                               ^ 
                                                               VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x13U)) 
                                                              ^ 
                                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x18U)) 
                                                             ^ 
                                                             VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x19U)) 
                                                            ^ 
                                                            VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1aU)) 
                                                           ^ 
                                                           VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1bU)) 
                                                          ^ 
                                                          VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1cU)) 
                                                         ^ 
                                                         VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1fU)) 
                                                        ^ 
                                                        VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 4U)) 
                                                       ^ 
                                                       VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 5U)) 
                                                      ^ 
                                                      VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 6U)) 
                                                     ^ 
                                                     VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 8U)) 
                                                    ^ 
                                                    VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xaU)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xbU)) 
                                                  ^ 
                                                  VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xcU)) 
                                                 ^ 
                                                 VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x13U)) 
                                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x18U)) 
                                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x19U)) 
                                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1aU)) 
                                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1bU)) 
                                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1cU)) 
                                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1fU)) 
                                          ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x20U)) 
                                         ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x21U)) 
                                        ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x25U)) 
                                       ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x27U)) 
                                      ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2dU)) 
                                     ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2eU)) 
                                    ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2fU)) 
                                   ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x31U)) 
                                  ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x32U)) 
                                 ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x36U)) 
                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x37U)) 
                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x38U)) 
                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x39U)) 
                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3dU)) 
                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3eU)) 
                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3fU))));
    VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__PVT__next_crc, 
                    (1U & (((((((((((((((((((((((((
                                                   (((((((((((((((((((((((VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0U) 
                                                                          ^ 
                                                                          VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 1U)) 
                                                                         ^ 
                                                                         VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 3U)) 
                                                                        ^ 
                                                                        VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 4U)) 
                                                                       ^ 
                                                                       VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 5U)) 
                                                                      ^ 
                                                                      VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 7U)) 
                                                                     ^ 
                                                                     VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xaU)) 
                                                                    ^ 
                                                                    VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xcU)) 
                                                                   ^ 
                                                                   VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xdU)) 
                                                                  ^ 
                                                                  VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xeU)) 
                                                                 ^ 
                                                                 VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x10U)) 
                                                                ^ 
                                                                VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x11U)) 
                                                               ^ 
                                                               VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x13U)) 
                                                              ^ 
                                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x19U)) 
                                                             ^ 
                                                             VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1aU)) 
                                                            ^ 
                                                            VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1cU)) 
                                                           ^ 
                                                           VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1dU)) 
                                                          ^ 
                                                          VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1eU)) 
                                                         ^ 
                                                         VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0U)) 
                                                        ^ 
                                                        VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 1U)) 
                                                       ^ 
                                                       VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 3U)) 
                                                      ^ 
                                                      VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 4U)) 
                                                     ^ 
                                                     VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 5U)) 
                                                    ^ 
                                                    VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 7U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xaU)) 
                                                  ^ 
                                                  VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xcU)) 
                                                 ^ 
                                                 VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xdU)) 
                                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xeU)) 
                                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x10U)) 
                                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x11U)) 
                                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x13U)) 
                                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x19U)) 
                                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1aU)) 
                                          ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1cU)) 
                                         ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1dU)) 
                                        ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1eU)) 
                                       ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x23U)) 
                                      ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x24U)) 
                                     ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x27U)) 
                                    ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2eU)) 
                                   ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2fU)) 
                                  ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x32U)) 
                                 ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x33U)) 
                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x34U)) 
                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x36U)) 
                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x38U)) 
                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x39U)) 
                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3eU)) 
                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3fU))));
    VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__PVT__next_crc, 
                    (1U & (((((((((((((((((((((((((
                                                   (((((((((((((((((VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0U) 
                                                                    ^ 
                                                                    VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 2U)) 
                                                                   ^ 
                                                                   VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 3U)) 
                                                                  ^ 
                                                                  VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 5U)) 
                                                                 ^ 
                                                                 VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 8U)) 
                                                                ^ 
                                                                VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 9U)) 
                                                               ^ 
                                                               VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xaU)) 
                                                              ^ 
                                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xdU)) 
                                                             ^ 
                                                             VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0xfU)) 
                                                            ^ 
                                                            VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x10U)) 
                                                           ^ 
                                                           VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x12U)) 
                                                          ^ 
                                                          VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x13U)) 
                                                         ^ 
                                                         VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1aU)) 
                                                        ^ 
                                                        VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1dU)) 
                                                       ^ 
                                                       VL_BITSEL_IIII(32, vlSelfRef.__PVT__crc_reg, 0x1fU)) 
                                                      ^ 
                                                      VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0U)) 
                                                     ^ 
                                                     VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 2U)) 
                                                    ^ 
                                                    VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 3U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 5U)) 
                                                  ^ 
                                                  VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 8U)) 
                                                 ^ 
                                                 VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 9U)) 
                                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xaU)) 
                                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xdU)) 
                                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0xfU)) 
                                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x10U)) 
                                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x12U)) 
                                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x13U)) 
                                          ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1aU)) 
                                         ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1dU)) 
                                        ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x1fU)) 
                                       ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x20U)) 
                                      ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x21U)) 
                                     ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x22U)) 
                                    ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x23U)) 
                                   ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x25U)) 
                                  ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x26U)) 
                                 ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x27U)) 
                                ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x2fU)) 
                               ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x33U)) 
                              ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x35U)) 
                             ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x36U)) 
                            ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x39U)) 
                           ^ VL_BITSEL_IQII(64, vlSelfRef.__PVT__data_in, 0x3fU))));
}

VL_ATTR_COLD void VMAC_rx_crc32_parallel_64bit___ctor_var_reset(VMAC_rx_crc32_parallel_64bit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMAC_rx_crc32_parallel_64bit___ctor_var_reset\n"); );
    VMAC_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__CLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6192783415628501865ull);
    vlSelf->__PVT__nRST = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9596079045119723318ull);
    vlSelf->__PVT__valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4944192500720994163ull);
    vlSelf->__PVT__crc_init = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18340435131149598088ull);
    vlSelf->__PVT__rx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7329251852453572689ull);
    vlSelf->__PVT__data_in = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10574596302020702150ull);
    vlSelf->__PVT__crc_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1753120250124389930ull);
    vlSelf->__PVT__crc_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16391267956333134270ull);
    vlSelf->__PVT__next_crc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11607194057626176951ull);
    vlSelf->__Vdly__crc_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12329032584352158222ull);
}
