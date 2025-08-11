// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation_MAC_tx.h"
#include "Vether_simulation_crc32_parallel_64bit.h"

VL_INLINE_OPT void Vether_simulation_MAC_tx___ico_sequent__TOP__ether_simulation__svr_inst__mac_tx__0(Vether_simulation_MAC_tx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_MAC_tx___ico_sequent__TOP__ether_simulation__svr_inst__mac_tx__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__CRC->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__CRC->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelfRef.__PVT__nxgmii_txd_l = vlSelfRef.__PVT__xgmii_txd_l;
    vlSelfRef.__PVT__nxgmii_txc_l = vlSelfRef.__PVT__xgmii_txc_l;
    if (((((((((0U == (IData)(vlSelfRef.__PVT__state)) 
               | (1U == (IData)(vlSelfRef.__PVT__state))) 
              | (2U == (IData)(vlSelfRef.__PVT__state))) 
             | (3U == (IData)(vlSelfRef.__PVT__state))) 
            | (4U == (IData)(vlSelfRef.__PVT__state))) 
           | (6U == (IData)(vlSelfRef.__PVT__state))) 
          | (5U == (IData)(vlSelfRef.__PVT__state))) 
         | (7U == (IData)(vlSelfRef.__PVT__state)))) {
        if ((0U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__nxgmii_txd_l = 0x707070707070707ULL;
            vlSelfRef.__PVT__nxgmii_txc_l = 0xffU;
            if (vlSelfRef.__PVT__TX_en) {
                vlSelfRef.__PVT__nxgmii_txd_l = 0xfb555555555555d5ULL;
                vlSelfRef.__PVT__nxgmii_txc_l = 0x80U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__nxgmii_txc_l = 0U;
            vlSelfRef.__PVT__nxgmii_txd_l = 0xffffffccbbaaaaccULL;
        } else if ((2U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__nxgmii_txd_l = VL_CONCAT_QII(64,32,32, 0xbbffffffU, 
                                                          VL_SEL_IQII(64, vlSelfRef.__PVT__IP_transmit, 0U, 0x20U));
            vlSelfRef.__PVT__nxgmii_txc_l = 0U;
        } else if ((3U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__nxgmii_txd_l = vlSelfRef.__PVT__IP_transmit;
            vlSelfRef.__PVT__nxgmii_txc_l = 0U;
        } else if ((4U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__nxgmii_txd_l = vlSelfRef.__PVT__IP_transmit;
            vlSelfRef.__PVT__nxgmii_txc_l = 0U;
            if (((IData)(vlSelfRef.__PVT__IP_last_dl) 
                 & (0x2eU <= (IData)(vlSelfRef.__PVT__tt_len_data)))) {
                vlSelfRef.__PVT__nxgmii_txd_l = VL_CONCAT_QII(64,32,32, vlSelfRef.__PVT__crc_out, 0xfd070707U);
                vlSelfRef.__PVT__nxgmii_txc_l = 0xfU;
            }
        } else if ((6U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__nxgmii_txd_l = 0ULL;
            vlSelfRef.__PVT__nxgmii_txc_l = 0U;
            if ((0x2eU <= (IData)(vlSelfRef.__PVT__len_counter))) {
                vlSelfRef.__PVT__nxgmii_txd_l = VL_CONCAT_QII(64,32,32, vlSelfRef.__PVT__crc_out, 0xfd070707U);
                vlSelfRef.__PVT__nxgmii_txc_l = 0xfU;
            }
        } else if ((5U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__nxgmii_txd_l = 0x707070707070707ULL;
            vlSelfRef.__PVT__nxgmii_txc_l = 0xffU;
        } else {
            vlSelfRef.__PVT__nxgmii_txd_l = 0x707070707070707ULL;
            vlSelfRef.__PVT__nxgmii_txc_l = 0xffU;
        }
    } else {
        vlSelfRef.__PVT__nxgmii_txd_l = 0ULL;
        vlSelfRef.__PVT__nxgmii_txc_l = 0U;
    }
    vlSelfRef.__PVT__nstate = vlSelfRef.__PVT__state;
    vlSelfRef.__PVT__IP_send_l = vlSelfRef.__PVT__IP_send;
    vlSelfRef.__PVT__crc_init = 0U;
    vlSelfRef.__PVT__valid = 1U;
    vlSelfRef.__PVT__frame_end = 0U;
    if (((((((((0U == (IData)(vlSelfRef.__PVT__state)) 
               | (1U == (IData)(vlSelfRef.__PVT__state))) 
              | (2U == (IData)(vlSelfRef.__PVT__state))) 
             | (3U == (IData)(vlSelfRef.__PVT__state))) 
            | (4U == (IData)(vlSelfRef.__PVT__state))) 
           | (6U == (IData)(vlSelfRef.__PVT__state))) 
          | (5U == (IData)(vlSelfRef.__PVT__state))) 
         | (7U == (IData)(vlSelfRef.__PVT__state)))) {
        if ((0U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__crc_init = 1U;
            if (vlSelfRef.__PVT__TX_en) {
                vlSelfRef.__PVT__nstate = 1U;
                vlSelfRef.__PVT__IP_send_l = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__nstate = 2U;
            vlSelfRef.__PVT__IP_send_l = 1U;
        } else if ((2U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__nstate = 3U;
            vlSelfRef.__PVT__IP_send_l = 1U;
        } else if ((3U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__nstate = 4U;
            vlSelfRef.__PVT__IP_send_l = 1U;
        } else if ((4U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__IP_send_l = 1U;
            if (((IData)(vlSelfRef.__PVT__IP_last) 
                 & (0x2eU > (IData)(vlSelfRef.__PVT__tt_len_data)))) {
                vlSelfRef.__PVT__IP_send_l = 0U;
                vlSelfRef.__PVT__nstate = 6U;
                vlSelfRef.__PVT__nlen_counter = vlSelfRef.__PVT__tt_len_data;
            } else if (vlSelfRef.__PVT__IP_last) {
                vlSelfRef.__PVT__IP_send_l = 0U;
            } else if (vlSelfRef.__PVT__IP_last_dl) {
                vlSelfRef.__PVT__IP_send_l = 0U;
                vlSelfRef.__PVT__nstate = 5U;
            }
        } else if ((6U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__nlen_counter = (0xffffU 
                                             & ((IData)(8U) 
                                                + (IData)(vlSelfRef.__PVT__len_counter)));
            if ((0x2eU <= (IData)(vlSelfRef.__PVT__len_counter))) {
                vlSelfRef.__PVT__nstate = 5U;
            }
        } else if ((5U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__crc_init = 1U;
            vlSelfRef.__PVT__valid = 0U;
            vlSelfRef.__PVT__frame_end = 1U;
            vlSelfRef.__PVT__nstate = 7U;
        } else {
            vlSelfRef.__PVT__crc_init = 1U;
            vlSelfRef.__PVT__nstate = 0U;
        }
    }
    vlSelf->__PVT__CRC->__PVT__data_in = vlSelfRef.__PVT__nxgmii_txd_l;
    vlSelf->__PVT__CRC->__PVT__crc_init = vlSelfRef.__PVT__crc_init;
    vlSelf->__PVT__CRC->__PVT__valid = vlSelfRef.__PVT__valid;
}

VL_INLINE_OPT void Vether_simulation_MAC_tx___nba_sequent__TOP__ether_simulation__svr_inst__mac_tx__0(Vether_simulation_MAC_tx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_MAC_tx___nba_sequent__TOP__ether_simulation__svr_inst__mac_tx__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__crc_out = vlSelf->__PVT__CRC->__PVT__crc_out;
}

VL_INLINE_OPT void Vether_simulation_MAC_tx___nba_comb__TOP__ether_simulation__svr_inst__mac_tx__0(Vether_simulation_MAC_tx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_MAC_tx___nba_comb__TOP__ether_simulation__svr_inst__mac_tx__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nxgmii_txd_l = vlSelfRef.__PVT__xgmii_txd_l;
    vlSelfRef.__PVT__nxgmii_txc_l = vlSelfRef.__PVT__xgmii_txc_l;
    if (((((((((0U == (IData)(vlSelfRef.__PVT__state)) 
               | (1U == (IData)(vlSelfRef.__PVT__state))) 
              | (2U == (IData)(vlSelfRef.__PVT__state))) 
             | (3U == (IData)(vlSelfRef.__PVT__state))) 
            | (4U == (IData)(vlSelfRef.__PVT__state))) 
           | (6U == (IData)(vlSelfRef.__PVT__state))) 
          | (5U == (IData)(vlSelfRef.__PVT__state))) 
         | (7U == (IData)(vlSelfRef.__PVT__state)))) {
        if ((0U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__nxgmii_txd_l = 0x707070707070707ULL;
            vlSelfRef.__PVT__nxgmii_txc_l = 0xffU;
            if (vlSelfRef.__PVT__TX_en) {
                vlSelfRef.__PVT__nxgmii_txd_l = 0xfb555555555555d5ULL;
                vlSelfRef.__PVT__nxgmii_txc_l = 0x80U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__nxgmii_txc_l = 0U;
            vlSelfRef.__PVT__nxgmii_txd_l = 0xffffffccbbaaaaccULL;
        } else if ((2U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__nxgmii_txd_l = VL_CONCAT_QII(64,32,32, 0xbbffffffU, 
                                                          VL_SEL_IQII(64, vlSelfRef.__PVT__IP_transmit, 0U, 0x20U));
            vlSelfRef.__PVT__nxgmii_txc_l = 0U;
        } else if ((3U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__nxgmii_txd_l = vlSelfRef.__PVT__IP_transmit;
            vlSelfRef.__PVT__nxgmii_txc_l = 0U;
        } else if ((4U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__nxgmii_txd_l = vlSelfRef.__PVT__IP_transmit;
            vlSelfRef.__PVT__nxgmii_txc_l = 0U;
            if (((IData)(vlSelfRef.__PVT__IP_last_dl) 
                 & (0x2eU <= (IData)(vlSelfRef.__PVT__tt_len_data)))) {
                vlSelfRef.__PVT__nxgmii_txd_l = VL_CONCAT_QII(64,32,32, vlSelfRef.__PVT__crc_out, 0xfd070707U);
                vlSelfRef.__PVT__nxgmii_txc_l = 0xfU;
            }
        } else if ((6U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__nxgmii_txd_l = 0ULL;
            vlSelfRef.__PVT__nxgmii_txc_l = 0U;
            if ((0x2eU <= (IData)(vlSelfRef.__PVT__len_counter))) {
                vlSelfRef.__PVT__nxgmii_txd_l = VL_CONCAT_QII(64,32,32, vlSelfRef.__PVT__crc_out, 0xfd070707U);
                vlSelfRef.__PVT__nxgmii_txc_l = 0xfU;
            }
        } else if ((5U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__nxgmii_txd_l = 0x707070707070707ULL;
            vlSelfRef.__PVT__nxgmii_txc_l = 0xffU;
        } else {
            vlSelfRef.__PVT__nxgmii_txd_l = 0x707070707070707ULL;
            vlSelfRef.__PVT__nxgmii_txc_l = 0xffU;
        }
    } else {
        vlSelfRef.__PVT__nxgmii_txd_l = 0ULL;
        vlSelfRef.__PVT__nxgmii_txc_l = 0U;
    }
    vlSelf->__PVT__CRC->__PVT__data_in = vlSelfRef.__PVT__nxgmii_txd_l;
}

VL_INLINE_OPT void Vether_simulation_MAC_tx___nba_comb__TOP__ether_simulation__svr_inst__mac_tx__1(Vether_simulation_MAC_tx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_MAC_tx___nba_comb__TOP__ether_simulation__svr_inst__mac_tx__1\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nstate = vlSelfRef.__PVT__state;
    vlSelfRef.__PVT__IP_send_l = vlSelfRef.__PVT__IP_send;
    vlSelfRef.__PVT__crc_init = 0U;
    vlSelfRef.__PVT__valid = 1U;
    vlSelfRef.__PVT__frame_end = 0U;
    if (((((((((0U == (IData)(vlSelfRef.__PVT__state)) 
               | (1U == (IData)(vlSelfRef.__PVT__state))) 
              | (2U == (IData)(vlSelfRef.__PVT__state))) 
             | (3U == (IData)(vlSelfRef.__PVT__state))) 
            | (4U == (IData)(vlSelfRef.__PVT__state))) 
           | (6U == (IData)(vlSelfRef.__PVT__state))) 
          | (5U == (IData)(vlSelfRef.__PVT__state))) 
         | (7U == (IData)(vlSelfRef.__PVT__state)))) {
        if ((0U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__crc_init = 1U;
            if (vlSelfRef.__PVT__TX_en) {
                vlSelfRef.__PVT__nstate = 1U;
                vlSelfRef.__PVT__IP_send_l = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__nstate = 2U;
            vlSelfRef.__PVT__IP_send_l = 1U;
        } else if ((2U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__nstate = 3U;
            vlSelfRef.__PVT__IP_send_l = 1U;
        } else if ((3U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__nstate = 4U;
            vlSelfRef.__PVT__IP_send_l = 1U;
        } else if ((4U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__IP_send_l = 1U;
            if (((IData)(vlSelfRef.__PVT__IP_last) 
                 & (0x2eU > (IData)(vlSelfRef.__PVT__tt_len_data)))) {
                vlSelfRef.__PVT__IP_send_l = 0U;
                vlSelfRef.__PVT__nstate = 6U;
                vlSelfRef.__PVT__nlen_counter = vlSelfRef.__PVT__tt_len_data;
            } else if (vlSelfRef.__PVT__IP_last) {
                vlSelfRef.__PVT__IP_send_l = 0U;
            } else if (vlSelfRef.__PVT__IP_last_dl) {
                vlSelfRef.__PVT__IP_send_l = 0U;
                vlSelfRef.__PVT__nstate = 5U;
            }
        } else if ((6U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__nlen_counter = (0xffffU 
                                             & ((IData)(8U) 
                                                + (IData)(vlSelfRef.__PVT__len_counter)));
            if ((0x2eU <= (IData)(vlSelfRef.__PVT__len_counter))) {
                vlSelfRef.__PVT__nstate = 5U;
            }
        } else if ((5U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__crc_init = 1U;
            vlSelfRef.__PVT__valid = 0U;
            vlSelfRef.__PVT__frame_end = 1U;
            vlSelfRef.__PVT__nstate = 7U;
        } else {
            vlSelfRef.__PVT__crc_init = 1U;
            vlSelfRef.__PVT__nstate = 0U;
        }
    }
    vlSelf->__PVT__CRC->__PVT__crc_init = vlSelfRef.__PVT__crc_init;
    vlSelf->__PVT__CRC->__PVT__valid = vlSelfRef.__PVT__valid;
}

VL_INLINE_OPT void Vether_simulation_MAC_tx___ico_sequent__TOP__ether_simulation__clt_inst__mac_tx__0(Vether_simulation_MAC_tx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_MAC_tx___ico_sequent__TOP__ether_simulation__clt_inst__mac_tx__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__CRC->__PVT__nRST = vlSelfRef.__PVT__nRST;
    vlSelf->__PVT__CRC->__PVT__CLK = vlSelfRef.__PVT__CLK;
    vlSelfRef.__PVT__nxgmii_txd_l = vlSelfRef.__PVT__xgmii_txd_l;
    vlSelfRef.__PVT__nxgmii_txc_l = vlSelfRef.__PVT__xgmii_txc_l;
    if (((((((((0U == (IData)(vlSelfRef.__PVT__state)) 
               | (1U == (IData)(vlSelfRef.__PVT__state))) 
              | (2U == (IData)(vlSelfRef.__PVT__state))) 
             | (3U == (IData)(vlSelfRef.__PVT__state))) 
            | (4U == (IData)(vlSelfRef.__PVT__state))) 
           | (6U == (IData)(vlSelfRef.__PVT__state))) 
          | (5U == (IData)(vlSelfRef.__PVT__state))) 
         | (7U == (IData)(vlSelfRef.__PVT__state)))) {
        if ((0U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__nxgmii_txd_l = 0x707070707070707ULL;
            vlSelfRef.__PVT__nxgmii_txc_l = 0xffU;
            if (vlSelfRef.__PVT__TX_en) {
                vlSelfRef.__PVT__nxgmii_txd_l = 0xfb555555555555d5ULL;
                vlSelfRef.__PVT__nxgmii_txc_l = 0x80U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__nxgmii_txc_l = 0U;
            vlSelfRef.__PVT__nxgmii_txd_l = 0xffffffccbbaaaaccULL;
        } else if ((2U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__nxgmii_txd_l = VL_CONCAT_QII(64,32,32, 0xbbffffffU, 
                                                          VL_SEL_IQII(64, vlSelfRef.__PVT__IP_transmit, 0U, 0x20U));
            vlSelfRef.__PVT__nxgmii_txc_l = 0U;
        } else if ((3U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__nxgmii_txd_l = vlSelfRef.__PVT__IP_transmit;
            vlSelfRef.__PVT__nxgmii_txc_l = 0U;
        } else if ((4U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__nxgmii_txd_l = vlSelfRef.__PVT__IP_transmit;
            vlSelfRef.__PVT__nxgmii_txc_l = 0U;
            if (((IData)(vlSelfRef.__PVT__IP_last_dl) 
                 & (0x2eU <= (IData)(vlSelfRef.__PVT__tt_len_data)))) {
                vlSelfRef.__PVT__nxgmii_txd_l = VL_CONCAT_QII(64,32,32, vlSelfRef.__PVT__crc_out, 0xfd070707U);
                vlSelfRef.__PVT__nxgmii_txc_l = 0xfU;
            }
        } else if ((6U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__nxgmii_txd_l = 0ULL;
            vlSelfRef.__PVT__nxgmii_txc_l = 0U;
            if ((0x2eU <= (IData)(vlSelfRef.__PVT__len_counter))) {
                vlSelfRef.__PVT__nxgmii_txd_l = VL_CONCAT_QII(64,32,32, vlSelfRef.__PVT__crc_out, 0xfd070707U);
                vlSelfRef.__PVT__nxgmii_txc_l = 0xfU;
            }
        } else if ((5U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__nxgmii_txd_l = 0x707070707070707ULL;
            vlSelfRef.__PVT__nxgmii_txc_l = 0xffU;
        } else {
            vlSelfRef.__PVT__nxgmii_txd_l = 0x707070707070707ULL;
            vlSelfRef.__PVT__nxgmii_txc_l = 0xffU;
        }
    } else {
        vlSelfRef.__PVT__nxgmii_txd_l = 0ULL;
        vlSelfRef.__PVT__nxgmii_txc_l = 0U;
    }
    vlSelfRef.__PVT__nstate = vlSelfRef.__PVT__state;
    vlSelfRef.__PVT__IP_send_l = vlSelfRef.__PVT__IP_send;
    vlSelfRef.__PVT__crc_init = 0U;
    vlSelfRef.__PVT__valid = 1U;
    vlSelfRef.__PVT__frame_end = 0U;
    if (((((((((0U == (IData)(vlSelfRef.__PVT__state)) 
               | (1U == (IData)(vlSelfRef.__PVT__state))) 
              | (2U == (IData)(vlSelfRef.__PVT__state))) 
             | (3U == (IData)(vlSelfRef.__PVT__state))) 
            | (4U == (IData)(vlSelfRef.__PVT__state))) 
           | (6U == (IData)(vlSelfRef.__PVT__state))) 
          | (5U == (IData)(vlSelfRef.__PVT__state))) 
         | (7U == (IData)(vlSelfRef.__PVT__state)))) {
        if ((0U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__crc_init = 1U;
            if (vlSelfRef.__PVT__TX_en) {
                vlSelfRef.__PVT__nstate = 1U;
                vlSelfRef.__PVT__IP_send_l = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__nstate = 2U;
            vlSelfRef.__PVT__IP_send_l = 1U;
        } else if ((2U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__nstate = 3U;
            vlSelfRef.__PVT__IP_send_l = 1U;
        } else if ((3U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__nstate = 4U;
            vlSelfRef.__PVT__IP_send_l = 1U;
        } else if ((4U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__IP_send_l = 1U;
            if (((IData)(vlSelfRef.__PVT__IP_last) 
                 & (0x2eU > (IData)(vlSelfRef.__PVT__tt_len_data)))) {
                vlSelfRef.__PVT__IP_send_l = 0U;
                vlSelfRef.__PVT__nstate = 6U;
                vlSelfRef.__PVT__nlen_counter = vlSelfRef.__PVT__tt_len_data;
            } else if (vlSelfRef.__PVT__IP_last) {
                vlSelfRef.__PVT__IP_send_l = 0U;
            } else if (vlSelfRef.__PVT__IP_last_dl) {
                vlSelfRef.__PVT__IP_send_l = 0U;
                vlSelfRef.__PVT__nstate = 5U;
            }
        } else if ((6U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__nlen_counter = (0xffffU 
                                             & ((IData)(8U) 
                                                + (IData)(vlSelfRef.__PVT__len_counter)));
            if ((0x2eU <= (IData)(vlSelfRef.__PVT__len_counter))) {
                vlSelfRef.__PVT__nstate = 5U;
            }
        } else if ((5U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__crc_init = 1U;
            vlSelfRef.__PVT__valid = 0U;
            vlSelfRef.__PVT__frame_end = 1U;
            vlSelfRef.__PVT__nstate = 7U;
        } else {
            vlSelfRef.__PVT__crc_init = 1U;
            vlSelfRef.__PVT__nstate = 0U;
        }
    }
    vlSelf->__PVT__CRC->__PVT__data_in = vlSelfRef.__PVT__nxgmii_txd_l;
    vlSelf->__PVT__CRC->__PVT__crc_init = vlSelfRef.__PVT__crc_init;
    vlSelf->__PVT__CRC->__PVT__valid = vlSelfRef.__PVT__valid;
}

VL_INLINE_OPT void Vether_simulation_MAC_tx___nba_sequent__TOP__ether_simulation__clt_inst__mac_tx__0(Vether_simulation_MAC_tx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_MAC_tx___nba_sequent__TOP__ether_simulation__clt_inst__mac_tx__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__crc_out = vlSelf->__PVT__CRC->__PVT__crc_out;
}

VL_INLINE_OPT void Vether_simulation_MAC_tx___nba_comb__TOP__ether_simulation__clt_inst__mac_tx__0(Vether_simulation_MAC_tx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_MAC_tx___nba_comb__TOP__ether_simulation__clt_inst__mac_tx__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nxgmii_txd_l = vlSelfRef.__PVT__xgmii_txd_l;
    vlSelfRef.__PVT__nxgmii_txc_l = vlSelfRef.__PVT__xgmii_txc_l;
    if (((((((((0U == (IData)(vlSelfRef.__PVT__state)) 
               | (1U == (IData)(vlSelfRef.__PVT__state))) 
              | (2U == (IData)(vlSelfRef.__PVT__state))) 
             | (3U == (IData)(vlSelfRef.__PVT__state))) 
            | (4U == (IData)(vlSelfRef.__PVT__state))) 
           | (6U == (IData)(vlSelfRef.__PVT__state))) 
          | (5U == (IData)(vlSelfRef.__PVT__state))) 
         | (7U == (IData)(vlSelfRef.__PVT__state)))) {
        if ((0U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__nxgmii_txd_l = 0x707070707070707ULL;
            vlSelfRef.__PVT__nxgmii_txc_l = 0xffU;
            if (vlSelfRef.__PVT__TX_en) {
                vlSelfRef.__PVT__nxgmii_txd_l = 0xfb555555555555d5ULL;
                vlSelfRef.__PVT__nxgmii_txc_l = 0x80U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__nxgmii_txc_l = 0U;
            vlSelfRef.__PVT__nxgmii_txd_l = 0xffffffccbbaaaaccULL;
        } else if ((2U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__nxgmii_txd_l = VL_CONCAT_QII(64,32,32, 0xbbffffffU, 
                                                          VL_SEL_IQII(64, vlSelfRef.__PVT__IP_transmit, 0U, 0x20U));
            vlSelfRef.__PVT__nxgmii_txc_l = 0U;
        } else if ((3U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__nxgmii_txd_l = vlSelfRef.__PVT__IP_transmit;
            vlSelfRef.__PVT__nxgmii_txc_l = 0U;
        } else if ((4U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__nxgmii_txd_l = vlSelfRef.__PVT__IP_transmit;
            vlSelfRef.__PVT__nxgmii_txc_l = 0U;
            if (((IData)(vlSelfRef.__PVT__IP_last_dl) 
                 & (0x2eU <= (IData)(vlSelfRef.__PVT__tt_len_data)))) {
                vlSelfRef.__PVT__nxgmii_txd_l = VL_CONCAT_QII(64,32,32, vlSelfRef.__PVT__crc_out, 0xfd070707U);
                vlSelfRef.__PVT__nxgmii_txc_l = 0xfU;
            }
        } else if ((6U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__nxgmii_txd_l = 0ULL;
            vlSelfRef.__PVT__nxgmii_txc_l = 0U;
            if ((0x2eU <= (IData)(vlSelfRef.__PVT__len_counter))) {
                vlSelfRef.__PVT__nxgmii_txd_l = VL_CONCAT_QII(64,32,32, vlSelfRef.__PVT__crc_out, 0xfd070707U);
                vlSelfRef.__PVT__nxgmii_txc_l = 0xfU;
            }
        } else if ((5U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__nxgmii_txd_l = 0x707070707070707ULL;
            vlSelfRef.__PVT__nxgmii_txc_l = 0xffU;
        } else {
            vlSelfRef.__PVT__nxgmii_txd_l = 0x707070707070707ULL;
            vlSelfRef.__PVT__nxgmii_txc_l = 0xffU;
        }
    } else {
        vlSelfRef.__PVT__nxgmii_txd_l = 0ULL;
        vlSelfRef.__PVT__nxgmii_txc_l = 0U;
    }
    vlSelf->__PVT__CRC->__PVT__data_in = vlSelfRef.__PVT__nxgmii_txd_l;
}

VL_INLINE_OPT void Vether_simulation_MAC_tx___nba_comb__TOP__ether_simulation__clt_inst__mac_tx__1(Vether_simulation_MAC_tx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_MAC_tx___nba_comb__TOP__ether_simulation__clt_inst__mac_tx__1\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nstate = vlSelfRef.__PVT__state;
    vlSelfRef.__PVT__IP_send_l = vlSelfRef.__PVT__IP_send;
    vlSelfRef.__PVT__crc_init = 0U;
    vlSelfRef.__PVT__valid = 1U;
    vlSelfRef.__PVT__frame_end = 0U;
    if (((((((((0U == (IData)(vlSelfRef.__PVT__state)) 
               | (1U == (IData)(vlSelfRef.__PVT__state))) 
              | (2U == (IData)(vlSelfRef.__PVT__state))) 
             | (3U == (IData)(vlSelfRef.__PVT__state))) 
            | (4U == (IData)(vlSelfRef.__PVT__state))) 
           | (6U == (IData)(vlSelfRef.__PVT__state))) 
          | (5U == (IData)(vlSelfRef.__PVT__state))) 
         | (7U == (IData)(vlSelfRef.__PVT__state)))) {
        if ((0U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__crc_init = 1U;
            if (vlSelfRef.__PVT__TX_en) {
                vlSelfRef.__PVT__nstate = 1U;
                vlSelfRef.__PVT__IP_send_l = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__nstate = 2U;
            vlSelfRef.__PVT__IP_send_l = 1U;
        } else if ((2U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__nstate = 3U;
            vlSelfRef.__PVT__IP_send_l = 1U;
        } else if ((3U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__nstate = 4U;
            vlSelfRef.__PVT__IP_send_l = 1U;
        } else if ((4U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__IP_send_l = 1U;
            if (((IData)(vlSelfRef.__PVT__IP_last) 
                 & (0x2eU > (IData)(vlSelfRef.__PVT__tt_len_data)))) {
                vlSelfRef.__PVT__IP_send_l = 0U;
                vlSelfRef.__PVT__nstate = 6U;
                vlSelfRef.__PVT__nlen_counter = vlSelfRef.__PVT__tt_len_data;
            } else if (vlSelfRef.__PVT__IP_last) {
                vlSelfRef.__PVT__IP_send_l = 0U;
            } else if (vlSelfRef.__PVT__IP_last_dl) {
                vlSelfRef.__PVT__IP_send_l = 0U;
                vlSelfRef.__PVT__nstate = 5U;
            }
        } else if ((6U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__nlen_counter = (0xffffU 
                                             & ((IData)(8U) 
                                                + (IData)(vlSelfRef.__PVT__len_counter)));
            if ((0x2eU <= (IData)(vlSelfRef.__PVT__len_counter))) {
                vlSelfRef.__PVT__nstate = 5U;
            }
        } else if ((5U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__crc_init = 1U;
            vlSelfRef.__PVT__valid = 0U;
            vlSelfRef.__PVT__frame_end = 1U;
            vlSelfRef.__PVT__nstate = 7U;
        } else {
            vlSelfRef.__PVT__crc_init = 1U;
            vlSelfRef.__PVT__nstate = 0U;
        }
    }
    vlSelf->__PVT__CRC->__PVT__crc_init = vlSelfRef.__PVT__crc_init;
    vlSelf->__PVT__CRC->__PVT__valid = vlSelfRef.__PVT__valid;
}
