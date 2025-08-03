// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_TCP_tx.h"

VL_INLINE_OPT void Vtop_TCP_tx___ico_sequent__TOP__top__u_tcp__TCP_tx__0(Vtop_TCP_tx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_TCP_tx___ico_sequent__TOP__top__u_tcp__TCP_tx__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtemp_1;
    IData/*31:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__PVT__nstate = vlSelfRef.__PVT__state;
    vlSelfRef.__PVT__nTCP_transmit = vlSelfRef.__PVT__TCP_transmit;
    vlSelfRef.__PVT__nTCP_tx_valid = vlSelfRef.__PVT__TCP_tx_valid;
    vlSelfRef.__PVT__nTCP_tx_last = vlSelfRef.__PVT__TCP_tx_last;
    vlSelfRef.__PVT__nbytes_sent = vlSelfRef.__PVT__bytes_sent;
    vlSelfRef.__PVT__valid_checksum = 0U;
    vlSelfRef.__PVT__rd_FIFO_en = 0U;
    vlSelfRef.__PVT__nseq_up = 0U;
    vlSelfRef.__PVT__nframe_hold = vlSelfRef.__PVT__frame_hold;
    if ((0U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__nTCP_tx_last = 0U;
        if (vlSelfRef.__PVT__TCP_send) {
            vlSelfRef.__PVT__nstate = 1U;
            vlSelfRef.__PVT__nTCP_transmit = VL_CONCAT_QII(64,32,32, 
                                                           VL_EXTEND_II(32,16, (IData)(vlSelfRef.__PVT__src_port)), 
                                                           VL_CONCAT_III(32,16,16, (IData)(vlSelfRef.__PVT__dest_port), 
                                                                         (0xffffU 
                                                                          & VL_SEL_IIII(32, vlSelfRef.__PVT__seq_num_tx, 0x10U, 0x10U))));
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__nstate = 2U;
        vlSelfRef.__PVT__rd_FIFO_en = 1U;
        vlSelfRef.__PVT__nTCP_transmit = VL_CONCAT_QIQ(64,16,48, 
                                                       (0xffffU 
                                                        & VL_SEL_IIII(32, vlSelfRef.__PVT__seq_num_tx, 0U, 0x10U)), 
                                                       VL_CONCAT_QII(48,32,16, vlSelfRef.__PVT__ACK_tx, 
                                                                     VL_CONCAT_III(16,4,12, (IData)(vlSelfRef.__PVT__offset_tx), 
                                                                                VL_EXTEND_II(12,8, (IData)(vlSelfRef.__PVT__TCP_control_tx)))));
        vlSelfRef.__PVT__valid_checksum = 1U;
    } else if ((2U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__valid_checksum = 0U;
        vlSelfRef.__PVT__rd_FIFO_en = 1U;
        vlSelfRef.__PVT__nTCP_transmit = VL_CONCAT_QII(64,32,32, 
                                                       VL_CONCAT_III(32,16,16, (IData)(vlSelfRef.__PVT__window_size_tx), 
                                                                     (0xffffU 
                                                                      & VL_SEL_IIII(17, vlSelfRef.__PVT__TCP_checksum, 0U, 0x10U))), 
                                                       VL_CONCAT_III(32,16,16, (IData)(vlSelfRef.__PVT__urgent_pointer_tx), 
                                                                     (0xffffU 
                                                                      & VL_SEL_IQII(64, vlSelfRef.__PVT__rd_FIFO_payload, 0x30U, 0x10U))));
        vlSelfRef.__PVT__nframe_hold = (0xffffffffffffULL 
                                        & VL_SEL_QQII(64, vlSelfRef.__PVT__rd_FIFO_payload, 0U, 0x30U));
        vlSelfRef.__PVT__nstate = 3U;
        if ((2U < vlSelfRef.__PVT__bytes_abt_sent)) {
            vlSelfRef.__PVT__nstate = 3U;
        } else {
            vlSelfRef.__PVT__nstate = 0U;
            vlSelfRef.__PVT__nseq_up = 1U;
            vlSelfRef.__PVT__nTCP_tx_last = 1U;
        }
    } else if ((3U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__rd_FIFO_en = 1U;
        if (VL_REDOR_I(vlSelfRef.__PVT__bytes_abt_sent)) {
            vlSelfRef.__PVT__nTCP_transmit = VL_CONCAT_QQI(64,48,16, vlSelfRef.__PVT__frame_hold, 
                                                           (0xffffU 
                                                            & VL_SEL_IQII(64, vlSelfRef.__PVT__rd_FIFO_payload, 0x30U, 0x10U)));
            vlSelfRef.__PVT__nframe_hold = (0xffffffffffffULL 
                                            & VL_SEL_QQII(64, vlSelfRef.__PVT__rd_FIFO_payload, 0U, 0x30U));
            vlSelfRef.__PVT__nstate = 4U;
        } else {
            vlSelfRef.__PVT__nstate = 0U;
            vlSelfRef.__PVT__nTCP_tx_last = 1U;
            vlSelfRef.__PVT__nseq_up = 1U;
        }
    } else if ((4U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__rd_FIFO_en = 1U;
        vlSelfRef.__PVT__nTCP_transmit = VL_CONCAT_QQI(64,48,16, vlSelfRef.__PVT__frame_hold, 
                                                       (0xffffU 
                                                        & VL_SEL_IQII(64, vlSelfRef.__PVT__rd_FIFO_payload, 0x30U, 0x10U)));
        vlSelfRef.__PVT__nframe_hold = (0xffffffffffffULL 
                                        & VL_SEL_QQII(64, vlSelfRef.__PVT__rd_FIFO_payload, 0U, 0x30U));
        if (vlSelfRef.__PVT__rd_FIFO_last) {
            vlSelfRef.__PVT__nstate = 0U;
            vlSelfRef.__PVT__nTCP_tx_last = 1U;
            vlSelfRef.__PVT__nseq_up = 1U;
            if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__TCP_control_tx), 1U) 
                       | VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__TCP_control_tx), 0U)))) {
                vlSelfRef.__PVT__nbytes_sent = ((IData)(1U) 
                                                + vlSelfRef.__PVT__bytes_sent);
            }
        }
    }
    vlSelfRef.__PVT__nTCP_checksum = vlSelfRef.__PVT__TCP_checksum;
    if (vlSelfRef.__PVT__valid_checksum) {
        vlSelfRef.__PVT__temp = (0xfffffU & ((IData)(0xec42U) 
                                             + ((((
                                                   (((VL_EXTEND_II(20,16, 
                                                                   (0xffffU 
                                                                    & VL_SEL_IIII(32, vlSelfRef.__PVT__bytes_abt_sent, 0U, 0x10U))) 
                                                      + 
                                                      VL_EXTEND_II(20,16, 
                                                                   (0xffffU 
                                                                    & VL_SEL_IIII(32, vlSelfRef.__PVT__seq_num_tx, 0x10U, 0x10U)))) 
                                                     + 
                                                     VL_EXTEND_II(20,16, 
                                                                  (0xffffU 
                                                                   & VL_SEL_IIII(32, vlSelfRef.__PVT__seq_num_tx, 0U, 0x10U)))) 
                                                    + 
                                                    VL_EXTEND_II(20,16, 
                                                                 (0xffffU 
                                                                  & VL_SEL_IIII(32, vlSelfRef.__PVT__ACK_tx, 0x10U, 0x10U)))) 
                                                   + 
                                                   VL_EXTEND_II(20,16, 
                                                                (0xffffU 
                                                                 & VL_SEL_IIII(32, vlSelfRef.__PVT__ACK_tx, 0U, 0x10U)))) 
                                                  + 
                                                  VL_EXTEND_II(20,16, 
                                                               VL_CONCAT_III(16,4,12, (IData)(vlSelfRef.__PVT__offset_tx), 
                                                                             VL_EXTEND_II(12,8, (IData)(vlSelfRef.__PVT__TCP_control_tx))))) 
                                                 + 
                                                 VL_EXTEND_II(20,16, (IData)(vlSelfRef.__PVT__urgent_pointer_tx))) 
                                                + VL_EXTEND_II(20,16, (IData)(vlSelfRef.__PVT__TCP_basesum_payload)))));
        __Vtemp_1 = (0xfffffU & (VL_EXTEND_II(20,16, 
                                              (0xffffU 
                                               & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x10U))) 
                                 + VL_EXTEND_II(20,4, 
                                                (0xfU 
                                                 & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0x10U, 4U)))));
        vlSelfRef.__PVT__temp = __Vtemp_1;
        __Vtemp_2 = (0xfffffU & (VL_EXTEND_II(20,16, 
                                              (0xffffU 
                                               & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x10U))) 
                                 + VL_EXTEND_II(20,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(20, vlSelfRef.__PVT__temp, 0x10U)))));
        vlSelfRef.__PVT__temp = __Vtemp_2;
        vlSelfRef.__PVT__nTCP_checksum = (0x1ffffU 
                                          & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x11U));
    }
}

VL_INLINE_OPT void Vtop_TCP_tx___nba_sequent__TOP__top__u_tcp__TCP_tx__0(Vtop_TCP_tx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_TCP_tx___nba_sequent__TOP__top__u_tcp__TCP_tx__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__state = vlSelfRef.__PVT__state;
    vlSelfRef.__Vdly__TCP_tx_valid = vlSelfRef.__PVT__TCP_tx_valid;
    vlSelfRef.__Vdly__frame_hold = vlSelfRef.__PVT__frame_hold;
    vlSelfRef.__Vdly__bytes_sent = vlSelfRef.__PVT__bytes_sent;
    vlSelfRef.__Vdly__TCP_transmit = vlSelfRef.__PVT__TCP_transmit;
    vlSelfRef.__Vdly__TCP_tx_last = vlSelfRef.__PVT__TCP_tx_last;
    vlSelfRef.__Vdly__TCP_checksum = vlSelfRef.__PVT__TCP_checksum;
    vlSelfRef.__Vdly__seq_up = vlSelfRef.__PVT__seq_up;
    if (vlSelfRef.__PVT__nRST) {
        vlSelfRef.__Vdly__state = vlSelfRef.__PVT__nstate;
        vlSelfRef.__Vdly__TCP_transmit = vlSelfRef.__PVT__nTCP_transmit;
        vlSelfRef.__Vdly__TCP_tx_valid = vlSelfRef.__PVT__nTCP_tx_valid;
        vlSelfRef.__Vdly__TCP_tx_last = vlSelfRef.__PVT__nTCP_tx_last;
        vlSelfRef.__Vdly__bytes_sent = vlSelfRef.__PVT__nbytes_sent;
        vlSelfRef.__Vdly__seq_up = vlSelfRef.__PVT__nseq_up;
        vlSelfRef.__Vdly__frame_hold = vlSelfRef.__PVT__nframe_hold;
        vlSelfRef.__Vdly__TCP_checksum = (0x1ffffU 
                                          & ((IData)(vlSelfRef.__PVT__valid_checksum)
                                              ? (~ vlSelfRef.__PVT__nTCP_checksum)
                                              : vlSelfRef.__PVT__nTCP_checksum));
    } else {
        vlSelfRef.__Vdly__state = 0U;
        vlSelfRef.__Vdly__TCP_transmit = 0ULL;
        vlSelfRef.__Vdly__bytes_sent = 0U;
        vlSelfRef.__Vdly__TCP_checksum = 0U;
        vlSelfRef.__Vdly__seq_up = 0U;
        vlSelfRef.__Vdly__TCP_tx_valid = 0U;
        vlSelfRef.__Vdly__TCP_tx_last = 0U;
        vlSelfRef.__Vdly__frame_hold = 0ULL;
    }
    vlSelfRef.__PVT__state = vlSelfRef.__Vdly__state;
    vlSelfRef.__PVT__TCP_tx_valid = vlSelfRef.__Vdly__TCP_tx_valid;
    vlSelfRef.__PVT__frame_hold = vlSelfRef.__Vdly__frame_hold;
    vlSelfRef.__PVT__bytes_sent = vlSelfRef.__Vdly__bytes_sent;
    vlSelfRef.__PVT__TCP_transmit = vlSelfRef.__Vdly__TCP_transmit;
    vlSelfRef.__PVT__TCP_tx_last = vlSelfRef.__Vdly__TCP_tx_last;
    vlSelfRef.__PVT__TCP_checksum = vlSelfRef.__Vdly__TCP_checksum;
    vlSelfRef.__PVT__seq_up = vlSelfRef.__Vdly__seq_up;
}

VL_INLINE_OPT void Vtop_TCP_tx___nba_comb__TOP__top__u_tcp__TCP_tx__0(Vtop_TCP_tx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_TCP_tx___nba_comb__TOP__top__u_tcp__TCP_tx__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nstate = vlSelfRef.__PVT__state;
    vlSelfRef.__PVT__nTCP_transmit = vlSelfRef.__PVT__TCP_transmit;
    vlSelfRef.__PVT__nTCP_tx_valid = vlSelfRef.__PVT__TCP_tx_valid;
    vlSelfRef.__PVT__nTCP_tx_last = vlSelfRef.__PVT__TCP_tx_last;
    vlSelfRef.__PVT__nbytes_sent = vlSelfRef.__PVT__bytes_sent;
    vlSelfRef.__PVT__valid_checksum = 0U;
    vlSelfRef.__PVT__rd_FIFO_en = 0U;
    vlSelfRef.__PVT__nseq_up = 0U;
    vlSelfRef.__PVT__nframe_hold = vlSelfRef.__PVT__frame_hold;
    if ((0U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__nTCP_tx_last = 0U;
        if (vlSelfRef.__PVT__TCP_send) {
            vlSelfRef.__PVT__nstate = 1U;
            vlSelfRef.__PVT__nTCP_transmit = VL_CONCAT_QII(64,32,32, 
                                                           VL_EXTEND_II(32,16, (IData)(vlSelfRef.__PVT__src_port)), 
                                                           VL_CONCAT_III(32,16,16, (IData)(vlSelfRef.__PVT__dest_port), 
                                                                         (0xffffU 
                                                                          & VL_SEL_IIII(32, vlSelfRef.__PVT__seq_num_tx, 0x10U, 0x10U))));
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__nstate = 2U;
        vlSelfRef.__PVT__rd_FIFO_en = 1U;
        vlSelfRef.__PVT__nTCP_transmit = VL_CONCAT_QIQ(64,16,48, 
                                                       (0xffffU 
                                                        & VL_SEL_IIII(32, vlSelfRef.__PVT__seq_num_tx, 0U, 0x10U)), 
                                                       VL_CONCAT_QII(48,32,16, vlSelfRef.__PVT__ACK_tx, 
                                                                     VL_CONCAT_III(16,4,12, (IData)(vlSelfRef.__PVT__offset_tx), 
                                                                                VL_EXTEND_II(12,8, (IData)(vlSelfRef.__PVT__TCP_control_tx)))));
        vlSelfRef.__PVT__valid_checksum = 1U;
    } else if ((2U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__valid_checksum = 0U;
        vlSelfRef.__PVT__rd_FIFO_en = 1U;
        vlSelfRef.__PVT__nTCP_transmit = VL_CONCAT_QII(64,32,32, 
                                                       VL_CONCAT_III(32,16,16, (IData)(vlSelfRef.__PVT__window_size_tx), 
                                                                     (0xffffU 
                                                                      & VL_SEL_IIII(17, vlSelfRef.__PVT__TCP_checksum, 0U, 0x10U))), 
                                                       VL_CONCAT_III(32,16,16, (IData)(vlSelfRef.__PVT__urgent_pointer_tx), 
                                                                     (0xffffU 
                                                                      & VL_SEL_IQII(64, vlSelfRef.__PVT__rd_FIFO_payload, 0x30U, 0x10U))));
        vlSelfRef.__PVT__nframe_hold = (0xffffffffffffULL 
                                        & VL_SEL_QQII(64, vlSelfRef.__PVT__rd_FIFO_payload, 0U, 0x30U));
        vlSelfRef.__PVT__nstate = 3U;
        if ((2U < vlSelfRef.__PVT__bytes_abt_sent)) {
            vlSelfRef.__PVT__nstate = 3U;
        } else {
            vlSelfRef.__PVT__nstate = 0U;
            vlSelfRef.__PVT__nseq_up = 1U;
            vlSelfRef.__PVT__nTCP_tx_last = 1U;
        }
    } else if ((3U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__rd_FIFO_en = 1U;
        if (VL_REDOR_I(vlSelfRef.__PVT__bytes_abt_sent)) {
            vlSelfRef.__PVT__nTCP_transmit = VL_CONCAT_QQI(64,48,16, vlSelfRef.__PVT__frame_hold, 
                                                           (0xffffU 
                                                            & VL_SEL_IQII(64, vlSelfRef.__PVT__rd_FIFO_payload, 0x30U, 0x10U)));
            vlSelfRef.__PVT__nframe_hold = (0xffffffffffffULL 
                                            & VL_SEL_QQII(64, vlSelfRef.__PVT__rd_FIFO_payload, 0U, 0x30U));
            vlSelfRef.__PVT__nstate = 4U;
        } else {
            vlSelfRef.__PVT__nstate = 0U;
            vlSelfRef.__PVT__nTCP_tx_last = 1U;
            vlSelfRef.__PVT__nseq_up = 1U;
        }
    } else if ((4U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__rd_FIFO_en = 1U;
        vlSelfRef.__PVT__nTCP_transmit = VL_CONCAT_QQI(64,48,16, vlSelfRef.__PVT__frame_hold, 
                                                       (0xffffU 
                                                        & VL_SEL_IQII(64, vlSelfRef.__PVT__rd_FIFO_payload, 0x30U, 0x10U)));
        vlSelfRef.__PVT__nframe_hold = (0xffffffffffffULL 
                                        & VL_SEL_QQII(64, vlSelfRef.__PVT__rd_FIFO_payload, 0U, 0x30U));
        if (vlSelfRef.__PVT__rd_FIFO_last) {
            vlSelfRef.__PVT__nstate = 0U;
            vlSelfRef.__PVT__nTCP_tx_last = 1U;
            vlSelfRef.__PVT__nseq_up = 1U;
            if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__TCP_control_tx), 1U) 
                       | VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__TCP_control_tx), 0U)))) {
                vlSelfRef.__PVT__nbytes_sent = ((IData)(1U) 
                                                + vlSelfRef.__PVT__bytes_sent);
            }
        }
    }
}

VL_INLINE_OPT void Vtop_TCP_tx___nba_comb__TOP__top__u_tcp__TCP_tx__1(Vtop_TCP_tx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_TCP_tx___nba_comb__TOP__top__u_tcp__TCP_tx__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtemp_1;
    IData/*31:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__PVT__nTCP_checksum = vlSelfRef.__PVT__TCP_checksum;
    if (vlSelfRef.__PVT__valid_checksum) {
        vlSelfRef.__PVT__temp = (0xfffffU & ((IData)(0xec42U) 
                                             + ((((
                                                   (((VL_EXTEND_II(20,16, 
                                                                   (0xffffU 
                                                                    & VL_SEL_IIII(32, vlSelfRef.__PVT__bytes_abt_sent, 0U, 0x10U))) 
                                                      + 
                                                      VL_EXTEND_II(20,16, 
                                                                   (0xffffU 
                                                                    & VL_SEL_IIII(32, vlSelfRef.__PVT__seq_num_tx, 0x10U, 0x10U)))) 
                                                     + 
                                                     VL_EXTEND_II(20,16, 
                                                                  (0xffffU 
                                                                   & VL_SEL_IIII(32, vlSelfRef.__PVT__seq_num_tx, 0U, 0x10U)))) 
                                                    + 
                                                    VL_EXTEND_II(20,16, 
                                                                 (0xffffU 
                                                                  & VL_SEL_IIII(32, vlSelfRef.__PVT__ACK_tx, 0x10U, 0x10U)))) 
                                                   + 
                                                   VL_EXTEND_II(20,16, 
                                                                (0xffffU 
                                                                 & VL_SEL_IIII(32, vlSelfRef.__PVT__ACK_tx, 0U, 0x10U)))) 
                                                  + 
                                                  VL_EXTEND_II(20,16, 
                                                               VL_CONCAT_III(16,4,12, (IData)(vlSelfRef.__PVT__offset_tx), 
                                                                             VL_EXTEND_II(12,8, (IData)(vlSelfRef.__PVT__TCP_control_tx))))) 
                                                 + 
                                                 VL_EXTEND_II(20,16, (IData)(vlSelfRef.__PVT__urgent_pointer_tx))) 
                                                + VL_EXTEND_II(20,16, (IData)(vlSelfRef.__PVT__TCP_basesum_payload)))));
        __Vtemp_1 = (0xfffffU & (VL_EXTEND_II(20,16, 
                                              (0xffffU 
                                               & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x10U))) 
                                 + VL_EXTEND_II(20,4, 
                                                (0xfU 
                                                 & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0x10U, 4U)))));
        vlSelfRef.__PVT__temp = __Vtemp_1;
        __Vtemp_2 = (0xfffffU & (VL_EXTEND_II(20,16, 
                                              (0xffffU 
                                               & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x10U))) 
                                 + VL_EXTEND_II(20,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(20, vlSelfRef.__PVT__temp, 0x10U)))));
        vlSelfRef.__PVT__temp = __Vtemp_2;
        vlSelfRef.__PVT__nTCP_checksum = (0x1ffffU 
                                          & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x11U));
    }
}
