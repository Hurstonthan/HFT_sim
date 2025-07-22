// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTCP.h for the primary calling header

#include "VTCP__pch.h"
#include "VTCP___024root.h"

void VTCP___024root___eval_triggers__ico(VTCP___024root* vlSelf);
void VTCP___024root___eval_ico(VTCP___024root* vlSelf);

bool VTCP___024root___eval_phase__ico(VTCP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTCP___024root___eval_phase__ico\n"); );
    VTCP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VTCP___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        VTCP___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VTCP___024root___eval_act(VTCP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTCP___024root___eval_act\n"); );
    VTCP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VTCP___024root___nba_sequent__TOP__0(VTCP___024root* vlSelf);
void VTCP___024root___nba_sequent__TOP__1(VTCP___024root* vlSelf);
void VTCP___024root___nba_sequent__TOP__2(VTCP___024root* vlSelf);
void VTCP___024root___nba_comb__TOP__0(VTCP___024root* vlSelf);

void VTCP___024root___eval_nba(VTCP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTCP___024root___eval_nba\n"); );
    VTCP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0xcULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTCP___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTCP___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((0xcULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTCP___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0xfULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTCP___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
}

VL_INLINE_OPT void VTCP___024root___nba_sequent__TOP__0(VTCP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTCP___024root___nba_sequent__TOP__0\n"); );
    VTCP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.nRST) {
        vlSelfRef.TCP__DOT__ISN_gen__DOT__counter = 
            ((IData)(1U) + vlSelfRef.TCP__DOT__ISN_gen__DOT__counter);
        vlSelfRef.TCP__DOT__bytes_sent = vlSelfRef.TCP__DOT__TCP_tx__DOT__nbytes_sent;
        vlSelfRef.TCP_transmit = vlSelfRef.TCP__DOT__TCP_tx__DOT__nTCP_transmit;
        vlSelfRef.TCP__DOT____Vcellout__inst__TCP_checksum_out 
            = ((0U == (IData)(vlSelfRef.TCP__DOT__inst__DOT__nTCP_checksum_out))
                ? 0xffffU : (IData)(vlSelfRef.TCP__DOT__inst__DOT__nTCP_checksum_out));
        if (vlSelfRef.IP_flush) {
            vlSelfRef.axis_data_rx = 0ULL;
            vlSelfRef.TCP__DOT__urgent_pointer_rx = 0U;
            vlSelfRef.TCP__DOT__offset_rx = 0U;
            vlSelfRef.TCP__DOT__window_size_rx = 0U;
            vlSelfRef.TCP__DOT__checksum_rx = 0U;
            vlSelfRef.TCP__DOT__tcp_rcv__DOT__TCP_checksum = 0U;
            vlSelfRef.TCP__DOT__tcp_rcv__DOT__bytes_trk = 0U;
            vlSelfRef.TCP__DOT__ACK_rx = 0U;
            vlSelfRef.TCP__DOT__payload_len_rx = 0U;
            vlSelfRef.TCP__DOT__tcp_rcv__DOT__state = 0U;
            vlSelfRef.TCP__DOT__seq_num_rx = 0U;
            vlSelfRef.TCP__DOT__TCP_control_rx = 0U;
        } else {
            vlSelfRef.axis_data_rx = vlSelfRef.TCP__DOT__tcp_rcv__DOT__nTCP_payload_rx;
            vlSelfRef.TCP__DOT__urgent_pointer_rx = vlSelfRef.TCP__DOT__tcp_rcv__DOT__nurgent_pointer_rx;
            vlSelfRef.TCP__DOT__offset_rx = vlSelfRef.TCP__DOT__tcp_rcv__DOT__noffset_rx;
            vlSelfRef.TCP__DOT__window_size_rx = vlSelfRef.TCP__DOT__tcp_rcv__DOT__nwindow_size_rx;
            vlSelfRef.TCP__DOT__checksum_rx = vlSelfRef.TCP__DOT__tcp_rcv__DOT__nchecksum_rx;
            vlSelfRef.TCP__DOT__tcp_rcv__DOT__TCP_checksum 
                = (0x1ffffU & ((1U & (vlSelfRef.TCP__DOT__tcp_rcv__DOT__nTCP_checksum 
                                      >> 0x10U)) + 
                               (0xffffU & vlSelfRef.TCP__DOT__tcp_rcv__DOT__nTCP_checksum)));
            vlSelfRef.TCP__DOT__tcp_rcv__DOT__bytes_trk 
                = vlSelfRef.TCP__DOT__tcp_rcv__DOT__nbytes_trk;
            vlSelfRef.TCP__DOT__ACK_rx = vlSelfRef.TCP__DOT__tcp_rcv__DOT__nACK_rx;
            vlSelfRef.TCP__DOT__payload_len_rx = vlSelfRef.TCP_len;
            vlSelfRef.TCP__DOT__tcp_rcv__DOT__state 
                = vlSelfRef.TCP__DOT__tcp_rcv__DOT__nstate;
            vlSelfRef.TCP__DOT__seq_num_rx = vlSelfRef.TCP__DOT__tcp_rcv__DOT__nseq_num_rx;
            vlSelfRef.TCP__DOT__TCP_control_rx = vlSelfRef.TCP__DOT__tcp_rcv__DOT__nTCP_control_rx;
        }
        vlSelfRef.TCP__DOT__inst__DOT__TCP_checksum 
            = vlSelfRef.TCP__DOT__inst__DOT__nTCP_checksum;
        vlSelfRef.TCP__DOT__inst__DOT__TCP_checksum_send 
            = vlSelfRef.TCP__DOT__inst__DOT__nTCP_checksum_send;
        vlSelfRef.TCP__DOT__TCP_tx__DOT__TCP_checksum 
            = (0x1ffffU & ((IData)(vlSelfRef.TCP__DOT__TCP_tx__DOT__valid_checksum)
                            ? (~ ((0xffffU & vlSelfRef.TCP__DOT__TCP_tx__DOT__nTCP_checksum) 
                                  + (1U & (vlSelfRef.TCP__DOT__TCP_tx__DOT__nTCP_checksum 
                                           >> 0x10U))))
                            : vlSelfRef.TCP__DOT__TCP_tx__DOT__nTCP_checksum));
        vlSelfRef.TCP__DOT__TCP_tx__DOT__state = vlSelfRef.TCP__DOT__TCP_tx__DOT__nstate;
    } else {
        vlSelfRef.TCP__DOT__ISN_gen__DOT__counter = 0xabcde123U;
        vlSelfRef.TCP__DOT__bytes_sent = 0U;
        vlSelfRef.TCP_transmit = 0ULL;
        vlSelfRef.TCP__DOT____Vcellout__inst__TCP_checksum_out = 0U;
        vlSelfRef.axis_data_rx = 0ULL;
        vlSelfRef.TCP__DOT__urgent_pointer_rx = 0U;
        vlSelfRef.TCP__DOT__offset_rx = 0U;
        vlSelfRef.TCP__DOT__inst__DOT__TCP_checksum = 0U;
        vlSelfRef.TCP__DOT__inst__DOT__TCP_checksum_send = 0U;
        vlSelfRef.TCP__DOT__window_size_rx = 0U;
        vlSelfRef.TCP__DOT__TCP_tx__DOT__TCP_checksum = 0U;
        vlSelfRef.TCP__DOT__checksum_rx = 0U;
        vlSelfRef.TCP__DOT__tcp_rcv__DOT__TCP_checksum = 0U;
        vlSelfRef.TCP__DOT__tcp_rcv__DOT__bytes_trk = 0U;
        vlSelfRef.TCP__DOT__TCP_tx__DOT__state = 0U;
        vlSelfRef.TCP__DOT__ACK_rx = 0U;
        vlSelfRef.TCP__DOT__payload_len_rx = 0U;
        vlSelfRef.TCP__DOT__tcp_rcv__DOT__state = 0U;
        vlSelfRef.TCP__DOT__seq_num_rx = 0U;
        vlSelfRef.TCP__DOT__TCP_control_rx = 0U;
    }
    vlSelfRef.TCP__DOT__TCP_tx__DOT__TCP_tx_valid = 
        ((IData)(vlSelfRef.nRST) && (IData)(vlSelfRef.TCP__DOT__TCP_tx__DOT__nTCP_tx_valid));
    vlSelfRef.TCP__DOT__TCP_tx__DOT__TCP_tx_last = 
        ((IData)(vlSelfRef.nRST) && (IData)(vlSelfRef.TCP__DOT__TCP_tx__DOT__nTCP_tx_last));
    vlSelfRef.TCP__DOT__rd_FIFO_valid = ((IData)(vlSelfRef.nRST) 
                                         && ((1U & 
                                              (~ (IData)(vlSelfRef.IP_flush))) 
                                             && (IData)(vlSelfRef.TCP__DOT__tcp_rcv__DOT__nTCP_valid)));
    vlSelfRef.TCP__DOT__seq_up = ((IData)(vlSelfRef.nRST) 
                                  && (IData)(vlSelfRef.TCP__DOT__TCP_tx__DOT__nseq_up));
    vlSelfRef.axis_t_last = ((IData)(vlSelfRef.nRST) 
                             && ((1U & (~ (IData)(vlSelfRef.IP_flush))) 
                                 && (IData)(vlSelfRef.TCP__DOT__tcp_rcv__DOT__nTCP_last)));
    vlSelfRef.nw_segment = ((IData)(vlSelfRef.nRST) 
                            && ((1U & (~ (IData)(vlSelfRef.IP_flush))) 
                                && (IData)(vlSelfRef.TCP__DOT__tcp_rcv__DOT__n_nw_segment)));
    vlSelfRef.TCP__DOT__rcv_data = ((IData)(vlSelfRef.nRST) 
                                    && ((1U & (~ (IData)(vlSelfRef.IP_flush))) 
                                        && (IData)(vlSelfRef.TCP__DOT__tcp_rcv__DOT__nrcv_data)));
    vlSelfRef.TCP__DOT__TCP_tx__DOT__nTCP_tx_valid 
        = vlSelfRef.TCP__DOT__TCP_tx__DOT__TCP_tx_valid;
    vlSelfRef.rd_FIFO_en_tx = 0U;
    vlSelfRef.TCP__DOT__TCP_tx__DOT__nseq_up = 0U;
    vlSelfRef.TCP__DOT__TCP_tx__DOT__nTCP_tx_last = vlSelfRef.TCP__DOT__TCP_tx__DOT__TCP_tx_last;
    vlSelfRef.TCP__DOT__TCP_tx__DOT__nstate = vlSelfRef.TCP__DOT__TCP_tx__DOT__state;
    if ((0U == (IData)(vlSelfRef.TCP__DOT__TCP_tx__DOT__state))) {
        if (vlSelfRef.TCP_send) {
            vlSelfRef.TCP__DOT__TCP_tx__DOT__nstate = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.TCP__DOT__TCP_tx__DOT__state))) {
        vlSelfRef.TCP__DOT__TCP_tx__DOT__nstate = 2U;
    } else if ((2U == (IData)(vlSelfRef.TCP__DOT__TCP_tx__DOT__state))) {
        vlSelfRef.TCP__DOT__TCP_tx__DOT__nstate = 3U;
    } else if ((3U == (IData)(vlSelfRef.TCP__DOT__TCP_tx__DOT__state))) {
        if ((0U != (IData)(vlSelfRef.bytes_abt_sent))) {
            vlSelfRef.TCP__DOT__TCP_tx__DOT__nstate = 4U;
        }
    } else if ((4U == (IData)(vlSelfRef.TCP__DOT__TCP_tx__DOT__state))) {
        if (vlSelfRef.rd_FIFO_last) {
            vlSelfRef.TCP__DOT__TCP_tx__DOT__nstate = 0U;
        }
    }
    vlSelfRef.TCP__DOT__TCP_tx__DOT__valid_checksum = 0U;
    if ((0U != (IData)(vlSelfRef.TCP__DOT__TCP_tx__DOT__state))) {
        if ((1U != (IData)(vlSelfRef.TCP__DOT__TCP_tx__DOT__state))) {
            if ((2U == (IData)(vlSelfRef.TCP__DOT__TCP_tx__DOT__state))) {
                vlSelfRef.rd_FIFO_en_tx = 1U;
            } else if ((3U == (IData)(vlSelfRef.TCP__DOT__TCP_tx__DOT__state))) {
                vlSelfRef.rd_FIFO_en_tx = 1U;
            } else if ((4U == (IData)(vlSelfRef.TCP__DOT__TCP_tx__DOT__state))) {
                vlSelfRef.rd_FIFO_en_tx = 1U;
            }
            if ((2U != (IData)(vlSelfRef.TCP__DOT__TCP_tx__DOT__state))) {
                if ((3U != (IData)(vlSelfRef.TCP__DOT__TCP_tx__DOT__state))) {
                    if ((4U == (IData)(vlSelfRef.TCP__DOT__TCP_tx__DOT__state))) {
                        if (vlSelfRef.rd_FIFO_last) {
                            vlSelfRef.TCP__DOT__TCP_tx__DOT__nseq_up = 1U;
                            vlSelfRef.TCP__DOT__TCP_tx__DOT__nTCP_tx_last = 1U;
                        }
                    }
                }
            }
        }
        if ((1U == (IData)(vlSelfRef.TCP__DOT__TCP_tx__DOT__state))) {
            vlSelfRef.TCP__DOT__TCP_tx__DOT__valid_checksum = 1U;
        } else if ((2U == (IData)(vlSelfRef.TCP__DOT__TCP_tx__DOT__state))) {
            vlSelfRef.TCP__DOT__TCP_tx__DOT__valid_checksum = 0U;
        }
    }
    vlSelfRef.ACK_num = vlSelfRef.TCP__DOT__ACK_rx;
    vlSelfRef.TCP__DOT__tcp_rcv__DOT__nTCP_payload_rx 
        = vlSelfRef.axis_data_rx;
    vlSelfRef.TCP__DOT__tcp_rcv__DOT__nwindow_size_rx 
        = vlSelfRef.TCP__DOT__window_size_rx;
    vlSelfRef.TCP__DOT__tcp_rcv__DOT__nbytes_trk = 0U;
    vlSelfRef.TCP__DOT__tcp_rcv__DOT__nchecksum_rx 
        = vlSelfRef.TCP__DOT__checksum_rx;
    vlSelfRef.TCP__DOT__tcp_rcv__DOT__noffset_rx = vlSelfRef.TCP__DOT__offset_rx;
    vlSelfRef.TCP__DOT__tcp_rcv__DOT__nACK_rx = vlSelfRef.TCP__DOT__ACK_rx;
    vlSelfRef.TCP__DOT__tcp_rcv__DOT__nurgent_pointer_rx 
        = vlSelfRef.TCP__DOT__urgent_pointer_rx;
    vlSelfRef.TCP__DOT__tcp_rcv__DOT__nrcv_data = 0U;
    vlSelfRef.TCP__DOT__tcp_rcv__DOT__nTCP_valid = vlSelfRef.TCP__DOT__rd_FIFO_valid;
    vlSelfRef.TCP__DOT__tcp_rcv__DOT__nTCP_last = vlSelfRef.axis_t_last;
    vlSelfRef.TCP__DOT__tcp_rcv__DOT__nTCP_checksum 
        = vlSelfRef.TCP__DOT__tcp_rcv__DOT__TCP_checksum;
    vlSelfRef.TCP__DOT__tcp_rcv__DOT__nstate = vlSelfRef.TCP__DOT__tcp_rcv__DOT__state;
    vlSelfRef.TCP__DOT__tcp_rcv__DOT__nseq_num_rx = vlSelfRef.TCP__DOT__seq_num_rx;
    if ((0U == (IData)(vlSelfRef.TCP__DOT__tcp_rcv__DOT__state))) {
        if (((IData)(vlSelfRef.IP_valid) & (0x1234567800000000ULL 
                                            == (0xffffffff00000000ULL 
                                                & vlSelfRef.IP_payload)))) {
            vlSelfRef.TCP__DOT__tcp_rcv__DOT__nTCP_checksum 
                = (0x1ffffU & ((((0xffffU & (IData)(
                                                    (vlSelfRef.IP_payload 
                                                     >> 0x30U))) 
                                 + (0xffffU & (IData)(
                                                      (vlSelfRef.IP_payload 
                                                       >> 0x20U)))) 
                                + (0xffffU & (IData)(
                                                     (vlSelfRef.IP_payload 
                                                      >> 0x10U)))) 
                               + (IData)(vlSelfRef.IP_pseuder)));
            vlSelfRef.TCP__DOT__tcp_rcv__DOT__nstate = 1U;
            vlSelfRef.TCP__DOT__tcp_rcv__DOT__nseq_num_rx 
                = ((0xffffU & vlSelfRef.TCP__DOT__tcp_rcv__DOT__nseq_num_rx) 
                   | ((IData)((vlSelfRef.IP_payload 
                               >> 0x10U)) << 0x10U));
        } else if (vlSelfRef.IP_valid) {
            vlSelfRef.TCP__DOT__tcp_rcv__DOT__nstate = 5U;
        }
    } else if ((1U == (IData)(vlSelfRef.TCP__DOT__tcp_rcv__DOT__state))) {
        vlSelfRef.TCP__DOT__tcp_rcv__DOT__nTCP_checksum 
            = (0x1ffffU & ((((0xffffU & (IData)((vlSelfRef.IP_payload 
                                                 >> 0x30U))) 
                             + (0xffffU & (IData)((vlSelfRef.IP_payload 
                                                   >> 0x20U)))) 
                            + (0xffffU & (IData)((vlSelfRef.IP_payload 
                                                  >> 0x10U)))) 
                           + (0xffffU & (IData)(vlSelfRef.IP_payload))));
        vlSelfRef.TCP__DOT__tcp_rcv__DOT__nstate = 2U;
        vlSelfRef.TCP__DOT__tcp_rcv__DOT__nseq_num_rx 
            = ((0xffff0000U & vlSelfRef.TCP__DOT__tcp_rcv__DOT__nseq_num_rx) 
               | (0xffffU & (IData)((vlSelfRef.IP_payload 
                                     >> 0x30U))));
    } else if ((2U == (IData)(vlSelfRef.TCP__DOT__tcp_rcv__DOT__state))) {
        vlSelfRef.TCP__DOT__tcp_rcv__DOT__nTCP_checksum 
            = (0x1ffffU & (((0xffffU & (IData)((vlSelfRef.IP_payload 
                                                >> 0x30U))) 
                            + (0xffffU & (IData)((vlSelfRef.IP_payload 
                                                  >> 0x10U)))) 
                           + (0xffffU & (IData)(vlSelfRef.IP_payload))));
        vlSelfRef.TCP__DOT__tcp_rcv__DOT__nstate = 3U;
    } else if ((3U == (IData)(vlSelfRef.TCP__DOT__tcp_rcv__DOT__state))) {
        vlSelfRef.TCP__DOT__tcp_rcv__DOT__nTCP_checksum 
            = (0x1ffffU & ((((0xffffU & (IData)((vlSelfRef.IP_payload 
                                                 >> 0x30U))) 
                             + (0xffffU & (IData)((vlSelfRef.IP_payload 
                                                   >> 0x20U)))) 
                            + (0xffffU & (IData)((vlSelfRef.IP_payload 
                                                  >> 0x10U)))) 
                           + (0xffffU & (IData)(vlSelfRef.IP_payload))));
        if ((((IData)(8U) + (IData)(vlSelfRef.TCP__DOT__tcp_rcv__DOT__bytes_trk)) 
             >= (IData)(vlSelfRef.TCP__DOT__payload_len_rx))) {
            vlSelfRef.TCP__DOT__tcp_rcv__DOT__nstate = 4U;
        }
    } else if ((4U == (IData)(vlSelfRef.TCP__DOT__tcp_rcv__DOT__state))) {
        vlSelfRef.TCP__DOT__tcp_rcv__DOT__nstate = 
            (((0x1ffffU & (~ vlSelfRef.TCP__DOT__tcp_rcv__DOT__TCP_checksum)) 
              == (IData)(vlSelfRef.TCP__DOT__checksum_rx))
              ? 0U : 5U);
    } else if ((5U == (IData)(vlSelfRef.TCP__DOT__tcp_rcv__DOT__state))) {
        if ((1U & (~ (IData)(vlSelfRef.IP_valid)))) {
            vlSelfRef.TCP__DOT__tcp_rcv__DOT__nstate = 5U;
        }
    }
    vlSelfRef.TCP__DOT__tcp_rcv__DOT__n_nw_segment 
        = vlSelfRef.nw_segment;
    vlSelfRef.ACK_rcv_flag = ((IData)(vlSelfRef.TCP__DOT__rcv_data) 
                              & ((IData)(vlSelfRef.TCP__DOT__TCP_control_rx) 
                                 >> 4U));
    vlSelfRef.TCP__DOT__tcp_rcv__DOT__nTCP_control_rx 
        = vlSelfRef.TCP__DOT__TCP_control_rx;
    if ((0U != (IData)(vlSelfRef.TCP__DOT__tcp_rcv__DOT__state))) {
        if ((1U != (IData)(vlSelfRef.TCP__DOT__tcp_rcv__DOT__state))) {
            if ((2U == (IData)(vlSelfRef.TCP__DOT__tcp_rcv__DOT__state))) {
                vlSelfRef.TCP__DOT__tcp_rcv__DOT__nTCP_payload_rx 
                    = (QData)((IData)((0xffffU & (IData)(vlSelfRef.IP_payload))));
                vlSelfRef.TCP__DOT__tcp_rcv__DOT__nwindow_size_rx 
                    = (0xffffU & (IData)((vlSelfRef.IP_payload 
                                          >> 0x30U)));
                vlSelfRef.TCP__DOT__tcp_rcv__DOT__nbytes_trk 
                    = (0xffffU & ((IData)(2U) + (IData)(vlSelfRef.TCP__DOT__tcp_rcv__DOT__bytes_trk)));
                vlSelfRef.TCP__DOT__tcp_rcv__DOT__nchecksum_rx 
                    = (0xffffU & (IData)((vlSelfRef.IP_payload 
                                          >> 0x20U)));
                vlSelfRef.TCP__DOT__tcp_rcv__DOT__nurgent_pointer_rx 
                    = (0xffffU & (IData)((vlSelfRef.IP_payload 
                                          >> 0x10U)));
                vlSelfRef.TCP__DOT__tcp_rcv__DOT__nTCP_valid = 1U;
                vlSelfRef.TCP__DOT__tcp_rcv__DOT__n_nw_segment = 1U;
            } else if ((3U == (IData)(vlSelfRef.TCP__DOT__tcp_rcv__DOT__state))) {
                vlSelfRef.TCP__DOT__tcp_rcv__DOT__nTCP_payload_rx 
                    = vlSelfRef.IP_payload;
                vlSelfRef.TCP__DOT__tcp_rcv__DOT__nbytes_trk 
                    = (0xffffU & ((((IData)(8U) + (IData)(vlSelfRef.TCP__DOT__tcp_rcv__DOT__bytes_trk)) 
                                   < (IData)(vlSelfRef.TCP__DOT__payload_len_rx))
                                   ? ((IData)(8U) + (IData)(vlSelfRef.TCP__DOT__tcp_rcv__DOT__bytes_trk))
                                   : ((IData)(vlSelfRef.TCP__DOT__tcp_rcv__DOT__bytes_trk) 
                                      + (((IData)(8U) 
                                          + (IData)(vlSelfRef.TCP__DOT__tcp_rcv__DOT__bytes_trk)) 
                                         - (IData)(vlSelfRef.TCP__DOT__payload_len_rx)))));
                if ((((IData)(8U) + (IData)(vlSelfRef.TCP__DOT__tcp_rcv__DOT__bytes_trk)) 
                     >= (IData)(vlSelfRef.TCP__DOT__payload_len_rx))) {
                    vlSelfRef.TCP__DOT__tcp_rcv__DOT__nTCP_valid = 0U;
                }
                vlSelfRef.TCP__DOT__tcp_rcv__DOT__n_nw_segment = 1U;
            } else if ((4U == (IData)(vlSelfRef.TCP__DOT__tcp_rcv__DOT__state))) {
                vlSelfRef.TCP__DOT__tcp_rcv__DOT__n_nw_segment = 0U;
            }
            if ((2U != (IData)(vlSelfRef.TCP__DOT__tcp_rcv__DOT__state))) {
                if ((3U != (IData)(vlSelfRef.TCP__DOT__tcp_rcv__DOT__state))) {
                    if ((4U == (IData)(vlSelfRef.TCP__DOT__tcp_rcv__DOT__state))) {
                        if (((0x1ffffU & (~ vlSelfRef.TCP__DOT__tcp_rcv__DOT__TCP_checksum)) 
                             == (IData)(vlSelfRef.TCP__DOT__checksum_rx))) {
                            vlSelfRef.TCP__DOT__tcp_rcv__DOT__nrcv_data = 1U;
                        }
                    }
                }
                if ((3U == (IData)(vlSelfRef.TCP__DOT__tcp_rcv__DOT__state))) {
                    if ((((IData)(8U) + (IData)(vlSelfRef.TCP__DOT__tcp_rcv__DOT__bytes_trk)) 
                         >= (IData)(vlSelfRef.TCP__DOT__payload_len_rx))) {
                        vlSelfRef.TCP__DOT__tcp_rcv__DOT__nTCP_last = 1U;
                    }
                }
            }
        }
        if ((1U == (IData)(vlSelfRef.TCP__DOT__tcp_rcv__DOT__state))) {
            vlSelfRef.TCP__DOT__tcp_rcv__DOT__noffset_rx 
                = (0xfU & (IData)((vlSelfRef.IP_payload 
                                   >> 0xcU)));
            vlSelfRef.TCP__DOT__tcp_rcv__DOT__nACK_rx 
                = (IData)((vlSelfRef.IP_payload >> 0x10U));
            vlSelfRef.TCP__DOT__tcp_rcv__DOT__nTCP_control_rx 
                = (0xffU & (IData)(vlSelfRef.IP_payload));
        }
    }
}

extern const VlWide<41>/*1311:0*/ VTCP__ConstPool__CONST_hfb86b9bc_0;

VL_INLINE_OPT void VTCP___024root___nba_sequent__TOP__1(VTCP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTCP___024root___nba_sequent__TOP__1\n"); );
    VTCP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ TCP__DOT__tcp_flow__DOT____VdfgRegularize_had43dce0_2_16;
    TCP__DOT__tcp_flow__DOT____VdfgRegularize_had43dce0_2_16 = 0;
    // Body
    if (vlSelfRef.TCP__DOT__tcp_flow__DOT__nRST) {
        if (vlSelfRef.TCP__DOT__tcp_flow__DOT__match_found) {
            if ((((0x50fU >= ((IData)(0x31U) + (0x7ffU 
                                                & ((IData)(0x51U) 
                                                   * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_idx)))))
                   ? (((0U == (0x1fU & ((IData)(0x31U) 
                                        + (0x7ffU & 
                                           ((IData)(0x51U) 
                                            * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_idx))))))
                        ? 0U : (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[
                                (((IData)(0x50U) + 
                                  (0x7ffU & ((IData)(0x51U) 
                                             * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_idx)))) 
                                 >> 5U)] << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x31U) 
                                                   + 
                                                   (0x7ffU 
                                                    & ((IData)(0x51U) 
                                                       * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_idx)))))))) 
                      | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[
                         (((IData)(0x31U) + (0x7ffU 
                                             & ((IData)(0x51U) 
                                                * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_idx)))) 
                          >> 5U)] >> (0x1fU & ((IData)(0x31U) 
                                               + (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_idx)))))))
                   : 0U) == vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next)) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next 
                    = ((0x50fU >= ((IData)(0x21U) + 
                                   (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_idx)))))
                        ? (0xffffU & (((0U == (0x1fU 
                                               & ((IData)(0x21U) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_idx))))))
                                        ? 0U : (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[
                                                (((IData)(0x30U) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_idx)))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x21U) 
                                                     + 
                                                     (0x7ffU 
                                                      & ((IData)(0x51U) 
                                                         * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_idx)))))))) 
                                      | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[
                                         (((IData)(0x21U) 
                                           + (0x7ffU 
                                              & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_idx)))) 
                                          >> 5U)] >> 
                                         (0x1fU & ((IData)(0x21U) 
                                                   + 
                                                   (0x7ffU 
                                                    & ((IData)(0x51U) 
                                                       * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_idx))))))))
                        : 0U);
            }
        } else {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next 
                = vlSelfRef.TCP__DOT__tcp_flow__DOT__nrcv_next;
        }
        if ((1U & (~ (IData)(vlSelfRef.TCP_flush)))) {
            vlSelfRef.TCP__DOT__hand_shake_done = vlSelfRef.TCP__DOT__tcp_flow__DOT__nhand_shake_done;
            vlSelfRef.TCP__DOT____Vcellout__tcp_flow__seq_rcv_str 
                = vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_rcv_str;
        }
        vlSelfRef.TCP__DOT__tcp_flow__DOT__window_size 
            = vlSelfRef.TCP__DOT__tcp_flow__DOT__nwindow_size;
        if (vlSelfRef.TCP_flush) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr = 0U;
            vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_ptr = 0U;
            vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_list = 0ULL;
            vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk = 0U;
        } else {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr 
                = (0xfU & (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__nlen_flush_ptr));
            vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_ptr 
                = vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_ptr;
            vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_list 
                = vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list;
            vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                = vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_rx_trk;
        }
        vlSelfRef.TCP__DOT__tcp_flow__DOT__ack_num 
            = vlSelfRef.TCP__DOT__tcp_flow__DOT__nack_num;
        vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_num 
            = vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_num;
        vlSelfRef.TCP__DOT__tcp_flow__DOT__state = vlSelfRef.TCP__DOT__tcp_flow__DOT__nstate;
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x28U)) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[__Vilp1] 
                = vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[__Vilp1];
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
    } else {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next = 0U;
        vlSelfRef.TCP__DOT__hand_shake_done = 0U;
        vlSelfRef.TCP__DOT____Vcellout__tcp_flow__seq_rcv_str = 0U;
        vlSelfRef.TCP__DOT__tcp_flow__DOT__window_size = 0x28U;
        vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr = 0U;
        vlSelfRef.TCP__DOT__tcp_flow__DOT__ack_num = 0ULL;
        vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_ptr = 0U;
        vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_list = 0ULL;
        vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_num 
            = (QData)((IData)(vlSelfRef.TCP__DOT__ISN_num));
        vlSelfRef.TCP__DOT__tcp_flow__DOT__state = 0U;
        vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk = 0U;
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x28U)) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[__Vilp2] 
                = VTCP__ConstPool__CONST_hfb86b9bc_0[__Vilp2];
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
    }
    vlSelfRef.rcv_next = vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next;
    vlSelfRef.seq_num = (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_num);
    vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_ptr = vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_ptr;
    vlSelfRef.TCP__DOT__ACK_tx = 0U;
    vlSelfRef.TCP__DOT__seq_num_tx = 0U;
    vlSelfRef.TCP__DOT__tcp_flow__DOT__tx_pkg_type = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__state) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__state) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__state) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__state) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__state))) {
                        if ((1U & (~ ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__state) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__state)))) {
                                vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_ptr 
                                    = (0xfU & ((IData)(1U) 
                                               + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_ptr)));
                                if (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_ptr) 
                                     >= (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr))) {
                                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_ptr = 1U;
                                }
                            }
                        }
                        if ((2U & (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__state))) {
                            if ((1U & (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__state))) {
                                vlSelfRef.TCP__DOT__ACK_tx 
                                    = vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next;
                                vlSelfRef.TCP__DOT__seq_num_tx 
                                    = (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_num);
                                vlSelfRef.TCP__DOT__tcp_flow__DOT__tx_pkg_type 
                                    = (0x10U | (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__tx_pkg_type));
                            }
                        } else if ((1U & (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__state))) {
                            vlSelfRef.TCP__DOT__ACK_tx 
                                = vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next;
                            vlSelfRef.TCP__DOT__tcp_flow__DOT__tx_pkg_type 
                                = (1U | (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__tx_pkg_type));
                        }
                    } else if ((2U & (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__state))) {
                        vlSelfRef.TCP__DOT__ACK_tx 
                            = vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next;
                        vlSelfRef.TCP__DOT__seq_num_tx 
                            = ((1U & (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__state))
                                ? (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_num)
                                : (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_num));
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__tx_pkg_type 
                            = (0x10U | (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__tx_pkg_type));
                    } else if ((1U & (~ (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__state)))) {
                        vlSelfRef.TCP__DOT__ACK_tx = 0U;
                        vlSelfRef.TCP__DOT__seq_num_tx 
                            = (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_num);
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__tx_pkg_type 
                            = (2U | (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__tx_pkg_type));
                    }
                }
            }
        }
    }
    TCP__DOT__tcp_flow__DOT____VdfgRegularize_had43dce0_2_16 
        = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
           + (IData)(vlSelfRef.IP_bytes_rcv));
    vlSelfRef.rd_FIFO_valid_rcv = 0U;
    vlSelfRef.TCP__DOT____Vcellout__tcp_flow__rd_FIFO_ptr = 0U;
    vlSelfRef.TCP__DOT____Vcellout__tcp_flow__rd_FIFO_len = 0U;
    if (vlSelfRef.rd_FIFO_en_rcv) {
        if (((vlSelfRef.seq_rx_FIFO_rd == ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
                                            << 0xfU) 
                                           | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[1U] 
                                              >> 0x11U))) 
             & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0U])) {
            vlSelfRef.rd_FIFO_valid_rcv = 1U;
            vlSelfRef.TCP__DOT____Vcellout__tcp_flow__rd_FIFO_ptr 
                = (0x7ffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0U] 
                             >> 0x11U));
            vlSelfRef.TCP__DOT____Vcellout__tcp_flow__rd_FIFO_len 
                = (0xffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0U] 
                            >> 1U));
        }
        if (((vlSelfRef.seq_rx_FIFO_rd == ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U] 
                                            << 0x1eU) 
                                           | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[4U] 
                                              >> 2U))) 
             & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
                >> 0x11U))) {
            vlSelfRef.rd_FIFO_valid_rcv = 1U;
            vlSelfRef.TCP__DOT____Vcellout__tcp_flow__rd_FIFO_ptr 
                = (0x7ffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[3U] 
                             >> 2U));
            vlSelfRef.TCP__DOT____Vcellout__tcp_flow__rd_FIFO_len 
                = (0xffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
                            >> 0x12U));
        }
        if (((vlSelfRef.seq_rx_FIFO_rd == ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[7U] 
                                            << 0xdU) 
                                           | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[6U] 
                                              >> 0x13U))) 
             & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U] 
                >> 2U))) {
            vlSelfRef.rd_FIFO_valid_rcv = 1U;
            vlSelfRef.TCP__DOT____Vcellout__tcp_flow__rd_FIFO_ptr 
                = (0x7ffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U] 
                             >> 0x13U));
            vlSelfRef.TCP__DOT____Vcellout__tcp_flow__rd_FIFO_len 
                = (0xffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U] 
                            >> 3U));
        }
        if (((vlSelfRef.seq_rx_FIFO_rd == ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                                            << 0x1cU) 
                                           | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[9U] 
                                              >> 4U))) 
             & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[7U] 
                >> 0x13U))) {
            vlSelfRef.rd_FIFO_valid_rcv = 1U;
            vlSelfRef.TCP__DOT____Vcellout__tcp_flow__rd_FIFO_ptr 
                = (0x7ffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[8U] 
                             >> 4U));
            vlSelfRef.TCP__DOT____Vcellout__tcp_flow__rd_FIFO_len 
                = (0xffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[7U] 
                            >> 0x14U));
        }
        if (((vlSelfRef.seq_rx_FIFO_rd == ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                                            << 0xbU) 
                                           | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                              >> 0x15U))) 
             & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                >> 4U))) {
            vlSelfRef.rd_FIFO_valid_rcv = 1U;
            vlSelfRef.TCP__DOT____Vcellout__tcp_flow__rd_FIFO_ptr 
                = (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                   >> 0x15U);
            vlSelfRef.TCP__DOT____Vcellout__tcp_flow__rd_FIFO_len 
                = (0xffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                            >> 5U));
        }
        if (((vlSelfRef.seq_rx_FIFO_rd == ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                                            << 0x1aU) 
                                           | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                              >> 6U))) 
             & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                >> 0x15U))) {
            vlSelfRef.rd_FIFO_valid_rcv = 1U;
            vlSelfRef.TCP__DOT____Vcellout__tcp_flow__rd_FIFO_ptr 
                = (0x7ffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xdU] 
                             >> 6U));
            vlSelfRef.TCP__DOT____Vcellout__tcp_flow__rd_FIFO_len 
                = (0xffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                            >> 0x16U));
        }
        if (((vlSelfRef.seq_rx_FIFO_rd == ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                                            << 9U) 
                                           | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                              >> 0x17U))) 
             & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                >> 6U))) {
            vlSelfRef.rd_FIFO_valid_rcv = 1U;
            vlSelfRef.TCP__DOT____Vcellout__tcp_flow__rd_FIFO_ptr 
                = (0x7ffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                              << 9U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                                        >> 0x17U)));
            vlSelfRef.TCP__DOT____Vcellout__tcp_flow__rd_FIFO_len 
                = (0xffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                            >> 7U));
        }
        if (((vlSelfRef.seq_rx_FIFO_rd == ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                                            << 0x18U) 
                                           | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                              >> 8U))) 
             & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                >> 0x17U))) {
            vlSelfRef.rd_FIFO_valid_rcv = 1U;
            vlSelfRef.TCP__DOT____Vcellout__tcp_flow__rd_FIFO_ptr 
                = (0x7ffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x12U] 
                             >> 8U));
            vlSelfRef.TCP__DOT____Vcellout__tcp_flow__rd_FIFO_len 
                = (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                   >> 0x18U);
        }
        if (((vlSelfRef.seq_rx_FIFO_rd == ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                            << 7U) 
                                           | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                              >> 0x19U))) 
             & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                >> 8U))) {
            vlSelfRef.rd_FIFO_valid_rcv = 1U;
            vlSelfRef.TCP__DOT____Vcellout__tcp_flow__rd_FIFO_ptr 
                = (0x7ffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                              << 7U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                                        >> 0x19U)));
            vlSelfRef.TCP__DOT____Vcellout__tcp_flow__rd_FIFO_len 
                = (0xffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                            >> 9U));
        }
        if (((vlSelfRef.seq_rx_FIFO_rd == ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                                            << 0x16U) 
                                           | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                              >> 0xaU))) 
             & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                >> 0x19U))) {
            vlSelfRef.rd_FIFO_valid_rcv = 1U;
            vlSelfRef.TCP__DOT____Vcellout__tcp_flow__rd_FIFO_ptr 
                = (0x7ffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x17U] 
                             >> 0xaU));
            vlSelfRef.TCP__DOT____Vcellout__tcp_flow__rd_FIFO_len 
                = (0xffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x17U] 
                             << 6U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                       >> 0x1aU)));
        }
        if (((vlSelfRef.seq_rx_FIFO_rd == ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                            << 5U) 
                                           | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                              >> 0x1bU))) 
             & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                >> 0xaU))) {
            vlSelfRef.rd_FIFO_valid_rcv = 1U;
            vlSelfRef.TCP__DOT____Vcellout__tcp_flow__rd_FIFO_ptr 
                = (0x7ffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                              << 5U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                                        >> 0x1bU)));
            vlSelfRef.TCP__DOT____Vcellout__tcp_flow__rd_FIFO_len 
                = (0xffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                            >> 0xbU));
        }
        if (((vlSelfRef.seq_rx_FIFO_rd == ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                                            << 0x14U) 
                                           | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                              >> 0xcU))) 
             & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                >> 0x1bU))) {
            vlSelfRef.rd_FIFO_valid_rcv = 1U;
            vlSelfRef.TCP__DOT____Vcellout__tcp_flow__rd_FIFO_ptr 
                = (0x7ffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1cU] 
                             >> 0xcU));
            vlSelfRef.TCP__DOT____Vcellout__tcp_flow__rd_FIFO_len 
                = (0xffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1cU] 
                             << 4U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                       >> 0x1cU)));
        }
        if (((vlSelfRef.seq_rx_FIFO_rd == ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                            << 3U) 
                                           | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                              >> 0x1dU))) 
             & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                >> 0xcU))) {
            vlSelfRef.rd_FIFO_valid_rcv = 1U;
            vlSelfRef.TCP__DOT____Vcellout__tcp_flow__rd_FIFO_ptr 
                = (0x7ffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                              << 3U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                                        >> 0x1dU)));
            vlSelfRef.TCP__DOT____Vcellout__tcp_flow__rd_FIFO_len 
                = (0xffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                            >> 0xdU));
        }
        if (((vlSelfRef.seq_rx_FIFO_rd == ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                                            << 0x12U) 
                                           | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                              >> 0xeU))) 
             & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                >> 0x1dU))) {
            vlSelfRef.rd_FIFO_valid_rcv = 1U;
            vlSelfRef.TCP__DOT____Vcellout__tcp_flow__rd_FIFO_ptr 
                = (0x7ffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x21U] 
                             >> 0xeU));
            vlSelfRef.TCP__DOT____Vcellout__tcp_flow__rd_FIFO_len 
                = (0xffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x21U] 
                             << 2U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                       >> 0x1eU)));
        }
        if (((vlSelfRef.seq_rx_FIFO_rd == ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                                            << 1U) 
                                           | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                              >> 0x1fU))) 
             & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                >> 0xeU))) {
            vlSelfRef.rd_FIFO_valid_rcv = 1U;
            vlSelfRef.TCP__DOT____Vcellout__tcp_flow__rd_FIFO_ptr 
                = (0x7ffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                              << 1U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                                        >> 0x1fU)));
            vlSelfRef.TCP__DOT____Vcellout__tcp_flow__rd_FIFO_len 
                = (0xffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                            >> 0xfU));
        }
        if (((vlSelfRef.seq_rx_FIFO_rd == ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x28U] 
                                            << 0x10U) 
                                           | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x27U] 
                                              >> 0x10U))) 
             & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                >> 0x1fU))) {
            vlSelfRef.rd_FIFO_valid_rcv = 1U;
            vlSelfRef.TCP__DOT____Vcellout__tcp_flow__rd_FIFO_ptr 
                = (0x7ffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x26U] 
                             >> 0x10U));
            vlSelfRef.TCP__DOT____Vcellout__tcp_flow__rd_FIFO_len 
                = (0xffU & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x26U]);
        }
    }
    vlSelfRef.TCP__DOT__tcp_flow__DOT__match_mask = 
        (((((0x8000U & (((vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next 
                          == ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x28U] 
                               << 0x10U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x27U] 
                                            >> 0x10U))) 
                         << 0xfU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                                     >> 0x10U))) | 
            (0xffffc000U & (((vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next 
                              == ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                                   << 1U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                             >> 0x1fU))) 
                             << 0xeU) & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x23U]))) 
           | ((0xe000U & (((vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next 
                            == ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                                 << 0x12U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                              >> 0xeU))) 
                           << 0xdU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                       >> 0x10U))) 
              | (0xfffff000U & (((vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next 
                                  == ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                       << 3U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                                 >> 0x1dU))) 
                                 << 0xcU) & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1eU])))) 
          | (((0xf800U & (((vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next 
                            == ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                                 << 0x14U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                              >> 0xcU))) 
                           << 0xbU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                       >> 0x10U))) 
              | (0xfffffc00U & (((vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next 
                                  == ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                       << 5U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                                 >> 0x1bU))) 
                                 << 0xaU) & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x19U]))) 
             | ((0xfe00U & (((vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next 
                              == ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                                   << 0x16U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                                >> 0xaU))) 
                             << 9U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                       >> 0x10U))) 
                | (0xffffff00U & (((vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next 
                                    == ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                         << 7U) | (
                                                   vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                                   >> 0x19U))) 
                                   << 8U) & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x14U]))))) 
         | ((((0xff80U & (((vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next 
                            == ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                                 << 0x18U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                              >> 8U))) 
                           << 7U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                                     >> 0x10U))) | 
              (0xffffffc0U & (((vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next 
                                == ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                                     << 9U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                               >> 0x17U))) 
                               << 6U) & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xfU]))) 
             | ((0xffe0U & (((vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next 
                              == ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                                   << 0x1aU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                                >> 6U))) 
                             << 5U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                                       >> 0x10U))) 
                | (0xfffffff0U & (((vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next 
                                    == ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                                         << 0xbU) | 
                                        (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                         >> 0x15U))) 
                                   << 4U) & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xaU])))) 
            | (((0xfff8U & (((vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next 
                              == ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                                   << 0x1cU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[9U] 
                                                >> 4U))) 
                             << 3U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[7U] 
                                       >> 0x10U))) 
                | (0xfffffffcU & (((vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next 
                                    == ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[7U] 
                                         << 0xdU) | 
                                        (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[6U] 
                                         >> 0x13U))) 
                                   << 2U) & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U]))) 
               | ((0xfffeU & (((vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next 
                                == ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U] 
                                     << 0x1eU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[4U] 
                                                  >> 2U))) 
                               << 1U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
                                         >> 0x10U))) 
                  | ((vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next 
                      == ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
                           << 0xfU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[1U] 
                                       >> 0x11U))) 
                     & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0U])))));
    vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask 
        = (((((0x8000U & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                           >> 0x10U) & (((TCP__DOT__tcp_flow__DOT____VdfgRegularize_had43dce0_2_16 
                                          < (0xffffU 
                                             & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x27U])) 
                                         & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                            >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x28U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x27U] 
                                                   >> 0x10U)))) 
                                        << 0xfU))) 
              | (0xffffc000U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                                & (((TCP__DOT__tcp_flow__DOT____VdfgRegularize_had43dce0_2_16 
                                     < (0xffffU & (
                                                   vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                                   >> 0xfU))) 
                                    & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                       >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                                            << 1U) 
                                           | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                              >> 0x1fU)))) 
                                   << 0xeU)))) | ((0xe000U 
                                                   & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                                       >> 0x10U) 
                                                      & (((TCP__DOT__tcp_flow__DOT____VdfgRegularize_had43dce0_2_16 
                                                           < 
                                                           (0xffffU 
                                                            & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                                                << 2U) 
                                                               | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x21U] 
                                                                  >> 0x1eU)))) 
                                                          & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                                             >= 
                                                             ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                                                               << 0x12U) 
                                                              | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                                                 >> 0xeU)))) 
                                                         << 0xdU))) 
                                                  | (0xfffff000U 
                                                     & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                                                        & (((TCP__DOT__tcp_flow__DOT____VdfgRegularize_had43dce0_2_16 
                                                             < 
                                                             (0xffffU 
                                                              & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                                                 >> 0xdU))) 
                                                            & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                                               >= 
                                                               ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                                                 << 3U) 
                                                                | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                                                   >> 0x1dU)))) 
                                                           << 0xcU))))) 
            | (((0xf800U & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                             >> 0x10U) & (((TCP__DOT__tcp_flow__DOT____VdfgRegularize_had43dce0_2_16 
                                            < (0xffffU 
                                               & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                                   << 4U) 
                                                  | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1cU] 
                                                     >> 0x1cU)))) 
                                           & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                              >= ((
                                                   vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                                                   << 0x14U) 
                                                  | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                                     >> 0xcU)))) 
                                          << 0xbU))) 
                | (0xfffffc00U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                                  & (((TCP__DOT__tcp_flow__DOT____VdfgRegularize_had43dce0_2_16 
                                       < (0xffffU & 
                                          (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                           >> 0xbU))) 
                                      & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                         >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                              << 5U) 
                                             | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                                >> 0x1bU)))) 
                                     << 0xaU)))) | 
               ((0xfe00U & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                             >> 0x10U) & (((TCP__DOT__tcp_flow__DOT____VdfgRegularize_had43dce0_2_16 
                                            < (0xffffU 
                                               & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                                   << 6U) 
                                                  | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x17U] 
                                                     >> 0x1aU)))) 
                                           & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                              >= ((
                                                   vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                                                   << 0x16U) 
                                                  | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                                     >> 0xaU)))) 
                                          << 9U))) 
                | (0xffffff00U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                                  & (((TCP__DOT__tcp_flow__DOT____VdfgRegularize_had43dce0_2_16 
                                       < (0xffffU & 
                                          (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                           >> 9U))) 
                                      & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                         >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                              << 7U) 
                                             | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                                >> 0x19U)))) 
                                     << 8U)))))) | 
           ((((0xff80U & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                           >> 0x10U) & (((TCP__DOT__tcp_flow__DOT____VdfgRegularize_had43dce0_2_16 
                                          < (0xffffU 
                                             & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                                 << 8U) 
                                                | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x12U] 
                                                   >> 0x18U)))) 
                                         & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                            >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                                                 << 0x18U) 
                                                | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                                   >> 8U)))) 
                                        << 7U))) | 
              (0xffffffc0U & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                              & (((TCP__DOT__tcp_flow__DOT____VdfgRegularize_had43dce0_2_16 
                                   < (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                                 >> 7U))) 
                                  & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                                          << 9U) | 
                                         (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                          >> 0x17U)))) 
                                 << 6U)))) | ((0xffe0U 
                                               & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                                                   >> 0x10U) 
                                                  & (((TCP__DOT__tcp_flow__DOT____VdfgRegularize_had43dce0_2_16 
                                                       < 
                                                       (0xffffU 
                                                        & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                                            << 0xaU) 
                                                           | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xdU] 
                                                              >> 0x16U)))) 
                                                      & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                                         >= 
                                                         ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                                                           << 0x1aU) 
                                                          | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                                             >> 6U)))) 
                                                     << 5U))) 
                                              | (0xfffffff0U 
                                                 & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                                                    & (((TCP__DOT__tcp_flow__DOT____VdfgRegularize_had43dce0_2_16 
                                                         < 
                                                         (0xffffU 
                                                          & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                                             >> 5U))) 
                                                        & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                                           >= 
                                                           ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                                                             << 0xbU) 
                                                            | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                                               >> 0x15U)))) 
                                                       << 4U))))) 
            | (((0xfff8U & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[7U] 
                             >> 0x10U) & (((TCP__DOT__tcp_flow__DOT____VdfgRegularize_had43dce0_2_16 
                                            < (0xffffU 
                                               & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[9U] 
                                                   << 0xcU) 
                                                  | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[8U] 
                                                     >> 0x14U)))) 
                                           & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                              >= ((
                                                   vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                                                   << 0x1cU) 
                                                  | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[9U] 
                                                     >> 4U)))) 
                                          << 3U))) 
                | (0xfffffffcU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U] 
                                  & (((TCP__DOT__tcp_flow__DOT____VdfgRegularize_had43dce0_2_16 
                                       < (0xffffU & 
                                          (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[6U] 
                                           >> 3U))) 
                                      & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                         >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[7U] 
                                              << 0xdU) 
                                             | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[6U] 
                                                >> 0x13U)))) 
                                     << 2U)))) | ((0xfffeU 
                                                   & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
                                                       >> 0x10U) 
                                                      & (((TCP__DOT__tcp_flow__DOT____VdfgRegularize_had43dce0_2_16 
                                                           < 
                                                           (0xffffU 
                                                            & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[4U] 
                                                                << 0xeU) 
                                                               | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[3U] 
                                                                  >> 0x12U)))) 
                                                          & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                                             >= 
                                                             ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U] 
                                                               << 0x1eU) 
                                                              | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[4U] 
                                                                 >> 2U)))) 
                                                         << 1U))) 
                                                  | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0U] 
                                                     & ((TCP__DOT__tcp_flow__DOT____VdfgRegularize_had43dce0_2_16 
                                                         < 
                                                         (0xffffU 
                                                          & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[1U] 
                                                             >> 1U))) 
                                                        & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                                           >= 
                                                           ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
                                                             << 0xfU) 
                                                            | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[1U] 
                                                               >> 0x11U)))))))));
    vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask = 0U;
    vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx = 0U;
    if ((1U & (~ vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0U]))) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask = 1U;
        vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx = 0U;
    }
    if ((1U & ((~ (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
                   >> 0x11U)) & (~ (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask))))) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask = 1U;
        vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx = 1U;
    }
    if ((1U & ((~ (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U] 
                   >> 2U)) & (~ (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask))))) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask = 1U;
        vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx = 2U;
    }
    if ((1U & ((~ (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[7U] 
                   >> 0x13U)) & (~ (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask))))) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask = 1U;
        vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx = 3U;
    }
    if ((1U & ((~ (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                   >> 4U)) & (~ (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask))))) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask = 1U;
        vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx = 4U;
    }
    if ((1U & ((~ (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                   >> 0x15U)) & (~ (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask))))) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask = 1U;
        vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx = 5U;
    }
    if ((1U & ((~ (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                   >> 6U)) & (~ (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask))))) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask = 1U;
        vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx = 6U;
    }
    if ((1U & ((~ (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                   >> 0x17U)) & (~ (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask))))) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask = 1U;
        vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx = 7U;
    }
    if ((1U & ((~ (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                   >> 8U)) & (~ (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask))))) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask = 1U;
        vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx = 8U;
    }
    if ((1U & ((~ (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                   >> 0x19U)) & (~ (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask))))) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask = 1U;
        vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx = 9U;
    }
    if ((1U & ((~ (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                   >> 0xaU)) & (~ (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask))))) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask = 1U;
        vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx = 0xaU;
    }
    if ((1U & ((~ (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                   >> 0x1bU)) & (~ (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask))))) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask = 1U;
        vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx = 0xbU;
    }
    if ((1U & ((~ (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                   >> 0xcU)) & (~ (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask))))) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask = 1U;
        vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx = 0xcU;
    }
    if ((1U & ((~ (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                   >> 0x1dU)) & (~ (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask))))) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask = 1U;
        vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx = 0xdU;
    }
    if ((1U & ((~ (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                   >> 0xeU)) & (~ (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask))))) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask = 1U;
        vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx = 0xeU;
    }
    if ((1U & ((~ (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                   >> 0x1fU)) & (~ (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask))))) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask = 1U;
        vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx = 0xfU;
    }
    vlSelfRef.rd_FIFO_ptr = (7U & (IData)(vlSelfRef.TCP__DOT____Vcellout__tcp_flow__rd_FIFO_ptr));
    vlSelfRef.rd_FIFO_len = (7U & (IData)(vlSelfRef.TCP__DOT____Vcellout__tcp_flow__rd_FIFO_len));
    vlSelfRef.TCP__DOT__tcp_flow__DOT__match_found = 0U;
    vlSelfRef.TCP__DOT__tcp_flow__DOT__match_idx = 0U;
    if ((1U & (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_mask))) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__match_found = 1U;
        vlSelfRef.TCP__DOT__tcp_flow__DOT__match_idx = 0U;
    }
    if ((1U & (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_mask) 
                >> 1U) & (~ (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_found))))) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__match_found = 1U;
        vlSelfRef.TCP__DOT__tcp_flow__DOT__match_idx = 1U;
    }
    if ((1U & (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_mask) 
                >> 2U) & (~ (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_found))))) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__match_found = 1U;
        vlSelfRef.TCP__DOT__tcp_flow__DOT__match_idx = 2U;
    }
    if ((1U & (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_mask) 
                >> 3U) & (~ (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_found))))) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__match_found = 1U;
        vlSelfRef.TCP__DOT__tcp_flow__DOT__match_idx = 3U;
    }
    if ((1U & (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_mask) 
                >> 4U) & (~ (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_found))))) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__match_found = 1U;
        vlSelfRef.TCP__DOT__tcp_flow__DOT__match_idx = 4U;
    }
    if ((1U & (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_mask) 
                >> 5U) & (~ (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_found))))) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__match_found = 1U;
        vlSelfRef.TCP__DOT__tcp_flow__DOT__match_idx = 5U;
    }
    if ((1U & (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_mask) 
                >> 6U) & (~ (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_found))))) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__match_found = 1U;
        vlSelfRef.TCP__DOT__tcp_flow__DOT__match_idx = 6U;
    }
    if ((1U & (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_mask) 
                >> 7U) & (~ (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_found))))) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__match_found = 1U;
        vlSelfRef.TCP__DOT__tcp_flow__DOT__match_idx = 7U;
    }
    if ((1U & (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_mask) 
                >> 8U) & (~ (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_found))))) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__match_found = 1U;
        vlSelfRef.TCP__DOT__tcp_flow__DOT__match_idx = 8U;
    }
    if ((1U & (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_mask) 
                >> 9U) & (~ (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_found))))) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__match_found = 1U;
        vlSelfRef.TCP__DOT__tcp_flow__DOT__match_idx = 9U;
    }
    if ((1U & (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_mask) 
                >> 0xaU) & (~ (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_found))))) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__match_found = 1U;
        vlSelfRef.TCP__DOT__tcp_flow__DOT__match_idx = 0xaU;
    }
    if ((1U & (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_mask) 
                >> 0xbU) & (~ (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_found))))) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__match_found = 1U;
        vlSelfRef.TCP__DOT__tcp_flow__DOT__match_idx = 0xbU;
    }
    if ((1U & (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_mask) 
                >> 0xcU) & (~ (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_found))))) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__match_found = 1U;
        vlSelfRef.TCP__DOT__tcp_flow__DOT__match_idx = 0xcU;
    }
    if ((1U & (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_mask) 
                >> 0xdU) & (~ (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_found))))) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__match_found = 1U;
        vlSelfRef.TCP__DOT__tcp_flow__DOT__match_idx = 0xdU;
    }
    if ((1U & (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_mask) 
                >> 0xeU) & (~ (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_found))))) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__match_found = 1U;
        vlSelfRef.TCP__DOT__tcp_flow__DOT__match_idx = 0xeU;
    }
    if ((IData)((((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_mask) 
                  >> 0xfU) & (~ (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__match_found))))) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__match_found = 1U;
        vlSelfRef.TCP__DOT__tcp_flow__DOT__match_idx = 0xfU;
    }
}

VL_INLINE_OPT void VTCP___024root___nba_sequent__TOP__2(VTCP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTCP___024root___nba_sequent__TOP__2\n"); );
    VTCP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TCP_flush = 0U;
    if ((0U != (IData)(vlSelfRef.TCP__DOT__tcp_rcv__DOT__state))) {
        if ((1U != (IData)(vlSelfRef.TCP__DOT__tcp_rcv__DOT__state))) {
            if ((2U != (IData)(vlSelfRef.TCP__DOT__tcp_rcv__DOT__state))) {
                if ((3U != (IData)(vlSelfRef.TCP__DOT__tcp_rcv__DOT__state))) {
                    if ((4U != (IData)(vlSelfRef.TCP__DOT__tcp_rcv__DOT__state))) {
                        if ((5U == (IData)(vlSelfRef.TCP__DOT__tcp_rcv__DOT__state))) {
                            vlSelfRef.TCP_flush = 1U;
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.nRST)))) {
        vlSelfRef.TCP__DOT__ISN_num = 0U;
    }
}

VL_INLINE_OPT void VTCP___024root___nba_comb__TOP__0(VTCP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTCP___024root___nba_comb__TOP__0\n"); );
    VTCP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TCP__DOT__tcp_flow__DOT__nhand_shake_done = 0U;
    vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_rcv_str 
        = vlSelfRef.TCP__DOT____Vcellout__tcp_flow__seq_rcv_str;
    vlSelfRef.TCP__DOT__tcp_flow__DOT__nwindow_size 
        = vlSelfRef.TCP__DOT__tcp_flow__DOT__window_size;
    vlSelfRef.out_order_req = 0U;
    vlSelfRef.TCP__DOT__tcp_flow__DOT__nack_num = vlSelfRef.TCP__DOT__tcp_flow__DOT__ack_num;
    vlSelfRef.TCP__DOT__TCP_tx__DOT__nbytes_sent = vlSelfRef.TCP__DOT__bytes_sent;
    if ((0U != (IData)(vlSelfRef.TCP__DOT__TCP_tx__DOT__state))) {
        if ((1U != (IData)(vlSelfRef.TCP__DOT__TCP_tx__DOT__state))) {
            if ((2U != (IData)(vlSelfRef.TCP__DOT__TCP_tx__DOT__state))) {
                if ((3U != (IData)(vlSelfRef.TCP__DOT__TCP_tx__DOT__state))) {
                    if ((4U == (IData)(vlSelfRef.TCP__DOT__TCP_tx__DOT__state))) {
                        if (vlSelfRef.rd_FIFO_last) {
                            if ((IData)((0U != (3U 
                                                & (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__tx_pkg_type))))) {
                                vlSelfRef.TCP__DOT__TCP_tx__DOT__nbytes_sent 
                                    = ((IData)(1U) 
                                       + vlSelfRef.TCP__DOT__bytes_sent);
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.TCP__DOT__TCP_tx__DOT__nTCP_checksum 
        = vlSelfRef.TCP__DOT__TCP_tx__DOT__TCP_checksum;
    if (vlSelfRef.TCP__DOT__TCP_tx__DOT__valid_checksum) {
        vlSelfRef.TCP__DOT__TCP_tx__DOT__nTCP_checksum 
            = (0x1ffffU & ((IData)(0xec42U) + (((((
                                                   ((IData)(vlSelfRef.bytes_abt_sent) 
                                                    + 
                                                    (vlSelfRef.TCP__DOT__seq_num_tx 
                                                     >> 0x10U)) 
                                                   + 
                                                   (0xffffU 
                                                    & vlSelfRef.TCP__DOT__seq_num_tx)) 
                                                  + 
                                                  (vlSelfRef.TCP__DOT__ACK_tx 
                                                   >> 0x10U)) 
                                                 + 
                                                 (0xffffU 
                                                  & vlSelfRef.TCP__DOT__ACK_tx)) 
                                                + (0x5000U 
                                                   | (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__tx_pkg_type))) 
                                               + ((IData)(vlSelfRef.re_trans)
                                                   ? (IData)(vlSelfRef.checksum_re_trans)
                                                   : 
                                                  (1U 
                                                   & (IData)(vlSelfRef.TCP__DOT____Vcellout__inst__TCP_checksum_out))))));
    }
    vlSelfRef.TCP__DOT__TCP_tx__DOT__nTCP_transmit 
        = vlSelfRef.TCP_transmit;
    if ((0U == (IData)(vlSelfRef.TCP__DOT__TCP_tx__DOT__state))) {
        if (vlSelfRef.TCP_send) {
            vlSelfRef.TCP__DOT__TCP_tx__DOT__nTCP_transmit 
                = (0x123456780000ULL | (QData)((IData)(
                                                       (vlSelfRef.TCP__DOT__seq_num_tx 
                                                        >> 0x10U))));
        }
    } else if ((1U == (IData)(vlSelfRef.TCP__DOT__TCP_tx__DOT__state))) {
        vlSelfRef.TCP__DOT__TCP_tx__DOT__nTCP_transmit 
            = (((QData)((IData)((0xffffU & vlSelfRef.TCP__DOT__seq_num_tx))) 
                << 0x30U) | (((QData)((IData)(vlSelfRef.TCP__DOT__ACK_tx)) 
                              << 0x10U) | (QData)((IData)(
                                                          (0x5000U 
                                                           | (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__tx_pkg_type))))));
    } else if ((2U == (IData)(vlSelfRef.TCP__DOT__TCP_tx__DOT__state))) {
        vlSelfRef.TCP__DOT__TCP_tx__DOT__nTCP_transmit 
            = ((QData)((IData)(((((IData)(vlSelfRef.full)
                                   ? 0U : 0xffffU) 
                                 << 0x10U) | (0xffffU 
                                              & vlSelfRef.TCP__DOT__TCP_tx__DOT__TCP_checksum)))) 
               << 0x20U);
    } else if ((3U == (IData)(vlSelfRef.TCP__DOT__TCP_tx__DOT__state))) {
        if ((0U != (IData)(vlSelfRef.bytes_abt_sent))) {
            vlSelfRef.TCP__DOT__TCP_tx__DOT__nTCP_transmit 
                = vlSelfRef.rd_FIFO_payload;
        }
    } else if ((4U == (IData)(vlSelfRef.TCP__DOT__TCP_tx__DOT__state))) {
        vlSelfRef.TCP__DOT__TCP_tx__DOT__nTCP_transmit 
            = vlSelfRef.rd_FIFO_payload;
    }
    vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug_0 = 0U;
    if (vlSelfRef.nw_segment) {
        if ((1U & (~ ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0U] 
                       & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
                               << 0xfU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[1U] 
                                           >> 0x11U)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[1U] 
                                       >> 1U))))))) {
            if (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0U] 
                  & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
                         << 0xfU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[1U] 
                                     >> 0x11U)))) & 
                 ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                   + (IData)(vlSelfRef.IP_bytes_rcv)) 
                  > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
                      << 0xfU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[1U] 
                                  >> 0x11U))))) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug_0 = 1U;
            }
        }
        vlSelfRef.wr_FIFO_en = 1U;
    } else {
        vlSelfRef.wr_FIFO_en = 0U;
    }
    vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 0U;
    vlSelfRef.TCP__DOT__tcp_flow__DOT__nlen_flush_ptr 
        = vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr;
    vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
        = vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_list;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x28U)) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[__Vilp1] 
            = vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    vlSelfRef.TCP__DOT__tcp_flow__DOT__nrcv_next = vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next;
    vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_rx_trk 
        = vlSelfRef.TCP__DOT__seq_num_rx;
    vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left = 0U;
    vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop = 0U;
    vlSelfRef.wr_FIFO_offset = 0U;
    if (vlSelfRef.rd_FIFO_en_rcv) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug_0 = 1U;
    }
    if (vlSelfRef.nw_segment) {
        if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
                        >> 0x11U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U] 
                                          << 0x1eU) 
                                         | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[4U] 
                                            >> 2U)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[4U] 
                                        << 0xeU) | 
                                       (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[3U] 
                                        >> 0x12U)))))))) {
            if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
                   >> 0x11U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U] 
                                    << 0x1eU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[4U] 
                                                 >> 2U)))) 
                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U] 
                        << 0x1eU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[4U] 
                                     >> 2U))))) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug_0 = 1U;
            }
        }
    }
    if (vlSelfRef.rd_FIFO_en_rcv) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug_0 = 1U;
    }
    if (vlSelfRef.nw_segment) {
        if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U] 
                        >> 2U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                  >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[7U] 
                                       << 0xdU) | (
                                                   vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[6U] 
                                                   >> 0x13U)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[6U] 
                                       >> 3U))))))) {
            if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U] 
                   >> 2U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                             < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[7U] 
                                 << 0xdU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[6U] 
                                             >> 0x13U)))) 
                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[7U] 
                        << 0xdU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[6U] 
                                    >> 0x13U))))) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug_0 = 1U;
            }
        }
    }
    if (vlSelfRef.rd_FIFO_en_rcv) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug_0 = 1U;
    }
    if (vlSelfRef.nw_segment) {
        if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[7U] 
                        >> 0x13U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                                          << 0x1cU) 
                                         | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[9U] 
                                            >> 4U)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[9U] 
                                        << 0xcU) | 
                                       (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[8U] 
                                        >> 0x14U)))))))) {
            if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[7U] 
                   >> 0x13U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                                    << 0x1cU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[9U] 
                                                 >> 4U)))) 
                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                        << 0x1cU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[9U] 
                                     >> 4U))))) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug_0 = 1U;
            }
        }
    }
    if (vlSelfRef.rd_FIFO_en_rcv) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug_0 = 1U;
    }
    if (vlSelfRef.nw_segment) {
        if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                        >> 4U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                  >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                                       << 0xbU) | (
                                                   vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                                   >> 0x15U)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                       >> 5U))))))) {
            if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                   >> 4U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                             < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                                 << 0xbU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                             >> 0x15U)))) 
                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                        << 0xbU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                    >> 0x15U))))) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug_0 = 1U;
            }
        }
    }
    if (vlSelfRef.rd_FIFO_en_rcv) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug_0 = 1U;
    }
    if (vlSelfRef.nw_segment) {
        if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                        >> 0x15U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                                          << 0x1aU) 
                                         | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                            >> 6U)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                        << 0xaU) | 
                                       (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xdU] 
                                        >> 0x16U)))))))) {
            if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                   >> 0x15U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                                    << 0x1aU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                                 >> 6U)))) 
                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                        << 0x1aU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                     >> 6U))))) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug_0 = 1U;
            }
        }
    }
    if (vlSelfRef.rd_FIFO_en_rcv) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug_0 = 1U;
    }
    if (vlSelfRef.nw_segment) {
        if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                        >> 6U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                  >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                                       << 9U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                                 >> 0x17U)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                       >> 7U))))))) {
            if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                   >> 6U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                             < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                                 << 9U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                           >> 0x17U)))) 
                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                        << 9U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                  >> 0x17U))))) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug_0 = 1U;
            }
        }
    }
    if (vlSelfRef.rd_FIFO_en_rcv) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug_0 = 1U;
    }
    if (vlSelfRef.nw_segment) {
        if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                        >> 0x17U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                                          << 0x18U) 
                                         | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                            >> 8U)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                        << 8U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x12U] 
                                                  >> 0x18U)))))))) {
            if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                   >> 0x17U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                                    << 0x18U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                                 >> 8U)))) 
                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                        << 0x18U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                     >> 8U))))) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug_0 = 1U;
            }
        }
    }
    if (vlSelfRef.rd_FIFO_en_rcv) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug_0 = 1U;
    }
    if (vlSelfRef.nw_segment) {
        if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                        >> 8U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                  >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                       << 7U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                                 >> 0x19U)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                       >> 9U))))))) {
            if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                   >> 8U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                             < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                 << 7U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                           >> 0x19U)))) 
                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                        << 7U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                  >> 0x19U))))) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug_0 = 1U;
            }
        }
    }
    if (vlSelfRef.rd_FIFO_en_rcv) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug_0 = 1U;
    }
    if (vlSelfRef.nw_segment) {
        if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                        >> 0x19U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                                          << 0x16U) 
                                         | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                            >> 0xaU)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                        << 6U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x17U] 
                                                  >> 0x1aU)))))))) {
            if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                   >> 0x19U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                                    << 0x16U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                                 >> 0xaU)))) 
                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                        << 0x16U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                     >> 0xaU))))) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug_0 = 1U;
            }
        }
    }
    if (vlSelfRef.rd_FIFO_en_rcv) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug_0 = 1U;
    }
    if (vlSelfRef.nw_segment) {
        if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                        >> 0xaU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                    >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                         << 5U) | (
                                                   vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                                   >> 0x1bU)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                       >> 0xbU))))))) {
            if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                   >> 0xaU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                               < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                   << 5U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                             >> 0x1bU)))) 
                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                        << 5U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                  >> 0x1bU))))) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug_0 = 1U;
            }
        }
    }
    if (vlSelfRef.rd_FIFO_en_rcv) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug_0 = 1U;
    }
    if (vlSelfRef.nw_segment) {
        if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                        >> 0x1bU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                                          << 0x14U) 
                                         | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                            >> 0xcU)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                        << 4U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1cU] 
                                                  >> 0x1cU)))))))) {
            if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                   >> 0x1bU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                                    << 0x14U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                                 >> 0xcU)))) 
                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                        << 0x14U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                     >> 0xcU))))) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug_0 = 1U;
            }
        }
    }
    if (vlSelfRef.rd_FIFO_en_rcv) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug_0 = 1U;
    }
    if (vlSelfRef.nw_segment) {
        if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                        >> 0xcU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                    >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                         << 3U) | (
                                                   vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                                   >> 0x1dU)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                       >> 0xdU))))))) {
            if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                   >> 0xcU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                               < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                   << 3U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                             >> 0x1dU)))) 
                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                        << 3U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                  >> 0x1dU))))) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug_0 = 1U;
            }
        }
    }
    if (vlSelfRef.rd_FIFO_en_rcv) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug_0 = 1U;
    }
    if (vlSelfRef.nw_segment) {
        if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                        >> 0x1dU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                                          << 0x12U) 
                                         | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                            >> 0xeU)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                        << 2U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x21U] 
                                                  >> 0x1eU)))))))) {
            if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                   >> 0x1dU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                                    << 0x12U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                                 >> 0xeU)))) 
                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                        << 0x12U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                     >> 0xeU))))) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug_0 = 1U;
            }
        }
    }
    if (vlSelfRef.rd_FIFO_en_rcv) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug_0 = 1U;
    }
    if (vlSelfRef.nw_segment) {
        if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                        >> 0xeU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                    >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                                         << 1U) | (
                                                   vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                                   >> 0x1fU)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                       >> 0xfU))))))) {
            if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                   >> 0xeU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                               < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                                   << 1U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                             >> 0x1fU)))) 
                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                        << 1U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                  >> 0x1fU))))) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug_0 = 1U;
            }
        }
    }
    if (vlSelfRef.rd_FIFO_en_rcv) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug_0 = 1U;
    }
    if (vlSelfRef.nw_segment) {
        if (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0U] 
              & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                 >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
                      << 0xfU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[1U] 
                                  >> 0x11U)))) & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                                   + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                                  < 
                                                  (0xffffU 
                                                   & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[1U] 
                                                      >> 1U))))) {
            vlSelfRef.wr_FIFO_en = 0U;
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 3U;
        } else if (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0U] 
                     & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                        < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
                            << 0xfU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[1U] 
                                        >> 0x11U)))) 
                    & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
                           << 0xfU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[1U] 
                                       >> 0x11U))))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 2U;
        } else if (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0U] 
                     & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                        < (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[1U] 
                                      >> 1U)))) & (
                                                   (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                                    + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                                   >= 
                                                   (0xffffU 
                                                    & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[1U] 
                                                       >> 1U))))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 1U;
        } else if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 0U;
        }
        if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
               >> 0x11U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                            >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U] 
                                 << 0x1eU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[4U] 
                                              >> 2U)))) 
             & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                < (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[4U] 
                               << 0xeU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[3U] 
                                           >> 0x12U)))))) {
            vlSelfRef.wr_FIFO_en = 0U;
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 3U;
        } else if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
                      >> 0x11U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                   < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U] 
                                       << 0x1eU) | 
                                      (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[4U] 
                                       >> 2U)))) & 
                    ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                      + (IData)(vlSelfRef.IP_bytes_rcv)) 
                     > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U] 
                         << 0x1eU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[4U] 
                                      >> 2U))))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 2U;
        } else if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
                      >> 0x11U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                   < (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[4U] 
                                                  << 0xeU) 
                                                 | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[3U] 
                                                    >> 0x12U))))) 
                    & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       >= (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[4U] 
                                       << 0xeU) | (
                                                   vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[3U] 
                                                   >> 0x12U)))))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 1U;
        } else if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 0U;
        }
        if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U] 
               >> 2U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                         >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[7U] 
                              << 0xdU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[6U] 
                                          >> 0x13U)))) 
             & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                < (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[6U] 
                              >> 3U))))) {
            vlSelfRef.wr_FIFO_en = 0U;
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 3U;
        } else if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U] 
                      >> 2U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[7U] 
                                    << 0xdU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[6U] 
                                                >> 0x13U)))) 
                    & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[7U] 
                           << 0xdU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[6U] 
                                       >> 0x13U))))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 2U;
        } else if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U] 
                      >> 2U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                < (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[6U] 
                                              >> 3U)))) 
                    & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       >= (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[6U] 
                                      >> 3U))))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 1U;
        } else if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 0U;
        }
        if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[7U] 
               >> 0x13U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                            >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                                 << 0x1cU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[9U] 
                                              >> 4U)))) 
             & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                < (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[9U] 
                               << 0xcU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[8U] 
                                           >> 0x14U)))))) {
            vlSelfRef.wr_FIFO_en = 0U;
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 3U;
        } else if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[7U] 
                      >> 0x13U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                   < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                                       << 0x1cU) | 
                                      (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[9U] 
                                       >> 4U)))) & 
                    ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                      + (IData)(vlSelfRef.IP_bytes_rcv)) 
                     > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                         << 0x1cU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[9U] 
                                      >> 4U))))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 2U;
        } else if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[7U] 
                      >> 0x13U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                   < (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[9U] 
                                                  << 0xcU) 
                                                 | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[8U] 
                                                    >> 0x14U))))) 
                    & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       >= (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[9U] 
                                       << 0xcU) | (
                                                   vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[8U] 
                                                   >> 0x14U)))))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 1U;
        } else if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 0U;
        }
        if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xaU] 
               >> 4U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                         >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                              << 0xbU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                          >> 0x15U)))) 
             & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                < (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                              >> 5U))))) {
            vlSelfRef.wr_FIFO_en = 0U;
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 3U;
        } else if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                      >> 4U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                                    << 0xbU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                                >> 0x15U)))) 
                    & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                           << 0xbU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                       >> 0x15U))))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 2U;
        } else if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                      >> 4U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                < (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                              >> 5U)))) 
                    & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       >= (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                      >> 5U))))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 1U;
        } else if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 0U;
        }
        if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xcU] 
               >> 0x15U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                            >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                                 << 0x1aU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                              >> 6U)))) 
             & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                < (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                               << 0xaU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xdU] 
                                           >> 0x16U)))))) {
            vlSelfRef.wr_FIFO_en = 0U;
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 3U;
        } else if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                      >> 0x15U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                   < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                                       << 0x1aU) | 
                                      (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                       >> 6U)))) & 
                    ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                      + (IData)(vlSelfRef.IP_bytes_rcv)) 
                     > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                         << 0x1aU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                      >> 6U))))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 2U;
        } else if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                      >> 0x15U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                   < (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                                  << 0xaU) 
                                                 | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xdU] 
                                                    >> 0x16U))))) 
                    & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       >= (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                       << 0xaU) | (
                                                   vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xdU] 
                                                   >> 0x16U)))))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 1U;
        } else if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 0U;
        }
        if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xfU] 
               >> 6U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                         >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                              << 9U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                        >> 0x17U)))) 
             & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                < (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                              >> 7U))))) {
            vlSelfRef.wr_FIFO_en = 0U;
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 3U;
        } else if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                      >> 6U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                                    << 9U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                              >> 0x17U)))) 
                    & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                           << 9U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                     >> 0x17U))))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 2U;
        } else if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                      >> 6U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                < (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                              >> 7U)))) 
                    & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       >= (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                      >> 7U))))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 1U;
        } else if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 0U;
        }
        if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x11U] 
               >> 0x17U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                            >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                                 << 0x18U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                              >> 8U)))) 
             & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                < (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                               << 8U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x12U] 
                                         >> 0x18U)))))) {
            vlSelfRef.wr_FIFO_en = 0U;
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 3U;
        } else if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                      >> 0x17U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                   < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                                       << 0x18U) | 
                                      (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                       >> 8U)))) & 
                    ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                      + (IData)(vlSelfRef.IP_bytes_rcv)) 
                     > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                         << 0x18U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                      >> 8U))))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 2U;
        } else if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                      >> 0x17U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                   < (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                                  << 8U) 
                                                 | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x12U] 
                                                    >> 0x18U))))) 
                    & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       >= (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                       << 8U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x12U] 
                                                 >> 0x18U)))))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 1U;
        } else if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 0U;
        }
        if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x14U] 
               >> 8U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                         >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                              << 7U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                        >> 0x19U)))) 
             & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                < (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                              >> 9U))))) {
            vlSelfRef.wr_FIFO_en = 0U;
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 3U;
        } else if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                      >> 8U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                    << 7U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                              >> 0x19U)))) 
                    & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                           << 7U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                     >> 0x19U))))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 2U;
        } else if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                      >> 8U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                < (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                              >> 9U)))) 
                    & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       >= (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                      >> 9U))))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 1U;
        } else if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 0U;
        }
        if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x16U] 
               >> 0x19U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                            >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                                 << 0x16U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                              >> 0xaU)))) 
             & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                < (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                               << 6U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x17U] 
                                         >> 0x1aU)))))) {
            vlSelfRef.wr_FIFO_en = 0U;
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 3U;
        } else if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                      >> 0x19U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                   < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                                       << 0x16U) | 
                                      (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                       >> 0xaU)))) 
                    & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                           << 0x16U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                        >> 0xaU))))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 2U;
        } else if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                      >> 0x19U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                   < (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                                  << 6U) 
                                                 | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x17U] 
                                                    >> 0x1aU))))) 
                    & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       >= (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                       << 6U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x17U] 
                                                 >> 0x1aU)))))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 1U;
        } else if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 0U;
        }
        if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x19U] 
               >> 0xaU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                           >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                << 5U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                          >> 0x1bU)))) 
             & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                < (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                              >> 0xbU))))) {
            vlSelfRef.wr_FIFO_en = 0U;
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 3U;
        } else if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                      >> 0xaU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                  < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                      << 5U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                                >> 0x1bU)))) 
                    & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                           << 5U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                     >> 0x1bU))))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 2U;
        } else if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                      >> 0xaU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                  < (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                                >> 0xbU)))) 
                    & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       >= (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                      >> 0xbU))))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 1U;
        } else if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 0U;
        }
        if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
               >> 0x1bU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                            >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                                 << 0x14U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                              >> 0xcU)))) 
             & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                < (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                               << 4U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1cU] 
                                         >> 0x1cU)))))) {
            vlSelfRef.wr_FIFO_en = 0U;
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 3U;
        } else if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                      >> 0x1bU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                   < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                                       << 0x14U) | 
                                      (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                       >> 0xcU)))) 
                    & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                           << 0x14U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                        >> 0xcU))))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 2U;
        } else if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                      >> 0x1bU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                   < (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                                  << 4U) 
                                                 | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1cU] 
                                                    >> 0x1cU))))) 
                    & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       >= (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                       << 4U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1cU] 
                                                 >> 0x1cU)))))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 1U;
        } else if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 0U;
        }
        if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
               >> 0xcU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                           >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                << 3U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                          >> 0x1dU)))) 
             & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                < (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                              >> 0xdU))))) {
            vlSelfRef.wr_FIFO_en = 0U;
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 3U;
        } else if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                      >> 0xcU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                  < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                      << 3U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                                >> 0x1dU)))) 
                    & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                           << 3U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                     >> 0x1dU))))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 2U;
        } else if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                      >> 0xcU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                  < (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                                >> 0xdU)))) 
                    & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       >= (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                      >> 0xdU))))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 1U;
        } else if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 0U;
        }
        if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x20U] 
               >> 0x1dU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                            >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                                 << 0x12U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                              >> 0xeU)))) 
             & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                < (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                               << 2U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x21U] 
                                         >> 0x1eU)))))) {
            vlSelfRef.wr_FIFO_en = 0U;
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 3U;
        } else if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                      >> 0x1dU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                   < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                                       << 0x12U) | 
                                      (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                       >> 0xeU)))) 
                    & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                           << 0x12U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                        >> 0xeU))))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 2U;
        } else if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                      >> 0x1dU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                   < (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                                  << 2U) 
                                                 | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x21U] 
                                                    >> 0x1eU))))) 
                    & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       >= (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                       << 2U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x21U] 
                                                 >> 0x1eU)))))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 1U;
        } else if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 0U;
        }
        if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x23U] 
               >> 0xeU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                           >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                                << 1U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                          >> 0x1fU)))) 
             & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                < (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                              >> 0xfU))))) {
            vlSelfRef.wr_FIFO_en = 0U;
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 3U;
        } else if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                      >> 0xeU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                  < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                                      << 1U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                                >> 0x1fU)))) 
                    & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                           << 1U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                     >> 0x1fU))))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 2U;
        } else if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                      >> 0xeU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                  < (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                                >> 0xfU)))) 
                    & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       >= (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                      >> 0xfU))))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 1U;
        } else if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 0U;
        }
        if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x25U] 
               >> 0x1fU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                            >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x28U] 
                                 << 0x10U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x27U] 
                                              >> 0x10U)))) 
             & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                < (0xffffU & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x27U])))) {
            vlSelfRef.wr_FIFO_en = 0U;
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 3U;
        } else if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                      >> 0x1fU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                   < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x28U] 
                                       << 0x10U) | 
                                      (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x27U] 
                                       >> 0x10U)))) 
                    & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x28U] 
                           << 0x10U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x27U] 
                                        >> 0x10U))))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 2U;
        } else if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                      >> 0x1fU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                   < (0xffffU & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x27U]))) 
                    & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       >= (0xffffU & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x27U])))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 1U;
        } else if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug = 0U;
        }
        if ((1U & (~ ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0U] 
                       & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
                               << 0xfU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[1U] 
                                           >> 0x11U)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[1U] 
                                       >> 1U))))))) {
            if (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0U] 
                  & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
                         << 0xfU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[1U] 
                                     >> 0x11U)))) & 
                 ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                   + (IData)(vlSelfRef.IP_bytes_rcv)) 
                  > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
                      << 0xfU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[1U] 
                                  >> 0x11U))))) {
                if (vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nlen_flush_ptr 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr)));
                }
            } else if ((1U & (~ ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0U] 
                                  & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                     < (0xffffU & (
                                                   vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[1U] 
                                                   >> 1U)))) 
                                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                    >= (0xffffU & (
                                                   vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[1U] 
                                                   >> 1U))))))) {
                if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
                    if (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) 
                         & (IData)(vlSelfRef.axis_t_last))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nlen_flush_ptr 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr)));
                    }
                }
            }
        }
        if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
                        >> 0x11U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U] 
                                          << 0x1eU) 
                                         | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[4U] 
                                            >> 2U)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[4U] 
                                        << 0xeU) | 
                                       (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[3U] 
                                        >> 0x12U)))))))) {
            if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
                   >> 0x11U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U] 
                                    << 0x1eU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[4U] 
                                                 >> 2U)))) 
                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U] 
                        << 0x1eU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[4U] 
                                     >> 2U))))) {
                if (vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nlen_flush_ptr 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr)));
                }
            } else if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
                                   >> 0x11U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                                < (0xffffU 
                                                   & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[4U] 
                                                       << 0xeU) 
                                                      | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[3U] 
                                                         >> 0x12U))))) 
                                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                    >= (0xffffU & (
                                                   (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[4U] 
                                                    << 0xeU) 
                                                   | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[3U] 
                                                      >> 0x12U)))))))) {
                if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
                    if (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) 
                         & (IData)(vlSelfRef.axis_t_last))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nlen_flush_ptr 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr)));
                    }
                }
            }
        }
        if ((1U & (~ ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0U] 
                       & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
                               << 0xfU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[1U] 
                                           >> 0x11U)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[1U] 
                                       >> 1U))))))) {
            if (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0U] 
                  & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
                         << 0xfU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[1U] 
                                     >> 0x11U)))) & 
                 ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                   + (IData)(vlSelfRef.IP_bytes_rcv)) 
                  > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
                      << 0xfU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[1U] 
                                  >> 0x11U))))) {
                if (vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                        = (((~ (0xfULL << (0x3fU & 
                                           VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                            & vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list) 
                           | ((QData)((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                              << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                }
            } else if ((1U & (~ ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0U] 
                                  & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                     < (0xffffU & (
                                                   vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[1U] 
                                                   >> 1U)))) 
                                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                    >= (0xffffU & (
                                                   vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[1U] 
                                                   >> 1U))))))) {
                if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
                    if (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) 
                         & (IData)(vlSelfRef.axis_t_last))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                            = (((~ (0xfULL << (0x3fU 
                                               & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list) 
                               | ((QData)((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                  << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                    }
                }
            }
        }
        if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
                        >> 0x11U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U] 
                                          << 0x1eU) 
                                         | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[4U] 
                                            >> 2U)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[4U] 
                                        << 0xeU) | 
                                       (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[3U] 
                                        >> 0x12U)))))))) {
            if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
                   >> 0x11U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U] 
                                    << 0x1eU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[4U] 
                                                 >> 2U)))) 
                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U] 
                        << 0x1eU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[4U] 
                                     >> 2U))))) {
                if (vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                        = (((~ (0xfULL << (0x3fU & 
                                           VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                            & vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list) 
                           | ((QData)((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                              << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                }
            } else if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
                                   >> 0x11U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                                < (0xffffU 
                                                   & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[4U] 
                                                       << 0xeU) 
                                                      | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[3U] 
                                                         >> 0x12U))))) 
                                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                    >= (0xffffU & (
                                                   (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[4U] 
                                                    << 0xeU) 
                                                   | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[3U] 
                                                      >> 0x12U)))))))) {
                if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
                    if (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) 
                         & (IData)(vlSelfRef.axis_t_last))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                            = (((~ (0xfULL << (0x3fU 
                                               & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list) 
                               | ((QData)((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                  << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                    }
                }
            }
        }
        if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U] 
                        >> 2U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                  >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[7U] 
                                       << 0xdU) | (
                                                   vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[6U] 
                                                   >> 0x13U)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[6U] 
                                       >> 3U))))))) {
            if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U] 
                   >> 2U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                             < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[7U] 
                                 << 0xdU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[6U] 
                                             >> 0x13U)))) 
                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[7U] 
                        << 0xdU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[6U] 
                                    >> 0x13U))))) {
                if (vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nlen_flush_ptr 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr)));
                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                        = (((~ (0xfULL << (0x3fU & 
                                           VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                            & vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list) 
                           | ((QData)((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                              << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                }
            } else if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U] 
                                   >> 2U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                             < (0xffffU 
                                                & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[6U] 
                                                   >> 3U)))) 
                                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                    >= (0xffffU & (
                                                   vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[6U] 
                                                   >> 3U))))))) {
                if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
                    if (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) 
                         & (IData)(vlSelfRef.axis_t_last))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nlen_flush_ptr 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr)));
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                            = (((~ (0xfULL << (0x3fU 
                                               & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list) 
                               | ((QData)((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                  << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                    }
                }
            }
        }
        if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[7U] 
                        >> 0x13U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                                          << 0x1cU) 
                                         | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[9U] 
                                            >> 4U)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[9U] 
                                        << 0xcU) | 
                                       (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[8U] 
                                        >> 0x14U)))))))) {
            if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[7U] 
                   >> 0x13U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                                    << 0x1cU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[9U] 
                                                 >> 4U)))) 
                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                        << 0x1cU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[9U] 
                                     >> 4U))))) {
                if (vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nlen_flush_ptr 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr)));
                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                        = (((~ (0xfULL << (0x3fU & 
                                           VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                            & vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list) 
                           | ((QData)((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                              << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                }
            } else if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[7U] 
                                   >> 0x13U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                                < (0xffffU 
                                                   & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[9U] 
                                                       << 0xcU) 
                                                      | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[8U] 
                                                         >> 0x14U))))) 
                                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                    >= (0xffffU & (
                                                   (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[9U] 
                                                    << 0xcU) 
                                                   | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[8U] 
                                                      >> 0x14U)))))))) {
                if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
                    if (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) 
                         & (IData)(vlSelfRef.axis_t_last))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nlen_flush_ptr 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr)));
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                            = (((~ (0xfULL << (0x3fU 
                                               & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list) 
                               | ((QData)((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                  << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                    }
                }
            }
        }
        if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                        >> 4U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                  >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                                       << 0xbU) | (
                                                   vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                                   >> 0x15U)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                       >> 5U))))))) {
            if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                   >> 4U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                             < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                                 << 0xbU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                             >> 0x15U)))) 
                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                        << 0xbU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                    >> 0x15U))))) {
                if (vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nlen_flush_ptr 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr)));
                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                        = (((~ (0xfULL << (0x3fU & 
                                           VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                            & vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list) 
                           | ((QData)((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                              << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                }
            } else if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                                   >> 4U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                             < (0xffffU 
                                                & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                                   >> 5U)))) 
                                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                    >= (0xffffU & (
                                                   vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                                   >> 5U))))))) {
                if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
                    if (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) 
                         & (IData)(vlSelfRef.axis_t_last))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nlen_flush_ptr 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr)));
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                            = (((~ (0xfULL << (0x3fU 
                                               & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list) 
                               | ((QData)((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                  << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                    }
                }
            }
        }
        if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                        >> 0x15U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                                          << 0x1aU) 
                                         | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                            >> 6U)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                        << 0xaU) | 
                                       (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xdU] 
                                        >> 0x16U)))))))) {
            if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                   >> 0x15U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                                    << 0x1aU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                                 >> 6U)))) 
                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                        << 0x1aU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                     >> 6U))))) {
                if (vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nlen_flush_ptr 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr)));
                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                        = (((~ (0xfULL << (0x3fU & 
                                           VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                            & vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list) 
                           | ((QData)((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                              << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                }
            } else if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                                   >> 0x15U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                                < (0xffffU 
                                                   & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                                       << 0xaU) 
                                                      | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xdU] 
                                                         >> 0x16U))))) 
                                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                    >= (0xffffU & (
                                                   (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                                    << 0xaU) 
                                                   | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xdU] 
                                                      >> 0x16U)))))))) {
                if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
                    if (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) 
                         & (IData)(vlSelfRef.axis_t_last))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nlen_flush_ptr 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr)));
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                            = (((~ (0xfULL << (0x3fU 
                                               & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list) 
                               | ((QData)((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                  << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                    }
                }
            }
        }
        if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                        >> 6U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                  >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                                       << 9U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                                 >> 0x17U)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                       >> 7U))))))) {
            if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                   >> 6U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                             < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                                 << 9U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                           >> 0x17U)))) 
                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                        << 9U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                  >> 0x17U))))) {
                if (vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nlen_flush_ptr 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr)));
                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                        = (((~ (0xfULL << (0x3fU & 
                                           VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                            & vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list) 
                           | ((QData)((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                              << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                }
            } else if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                                   >> 6U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                             < (0xffffU 
                                                & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                                   >> 7U)))) 
                                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                    >= (0xffffU & (
                                                   vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                                   >> 7U))))))) {
                if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
                    if (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) 
                         & (IData)(vlSelfRef.axis_t_last))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nlen_flush_ptr 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr)));
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                            = (((~ (0xfULL << (0x3fU 
                                               & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list) 
                               | ((QData)((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                  << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                    }
                }
            }
        }
        if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                        >> 0x17U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                                          << 0x18U) 
                                         | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                            >> 8U)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                        << 8U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x12U] 
                                                  >> 0x18U)))))))) {
            if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                   >> 0x17U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                                    << 0x18U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                                 >> 8U)))) 
                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                        << 0x18U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                     >> 8U))))) {
                if (vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nlen_flush_ptr 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr)));
                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                        = (((~ (0xfULL << (0x3fU & 
                                           VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                            & vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list) 
                           | ((QData)((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                              << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                }
            } else if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                                   >> 0x17U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                                < (0xffffU 
                                                   & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                                       << 8U) 
                                                      | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x12U] 
                                                         >> 0x18U))))) 
                                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                    >= (0xffffU & (
                                                   (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                                    << 8U) 
                                                   | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x12U] 
                                                      >> 0x18U)))))))) {
                if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
                    if (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) 
                         & (IData)(vlSelfRef.axis_t_last))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nlen_flush_ptr 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr)));
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                            = (((~ (0xfULL << (0x3fU 
                                               & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list) 
                               | ((QData)((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                  << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                    }
                }
            }
        }
        if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                        >> 8U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                  >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                       << 7U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                                 >> 0x19U)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                       >> 9U))))))) {
            if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                   >> 8U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                             < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                 << 7U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                           >> 0x19U)))) 
                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                        << 7U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                  >> 0x19U))))) {
                if (vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nlen_flush_ptr 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr)));
                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                        = (((~ (0xfULL << (0x3fU & 
                                           VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                            & vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list) 
                           | ((QData)((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                              << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                }
            } else if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                                   >> 8U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                             < (0xffffU 
                                                & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                                   >> 9U)))) 
                                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                    >= (0xffffU & (
                                                   vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                                   >> 9U))))))) {
                if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
                    if (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) 
                         & (IData)(vlSelfRef.axis_t_last))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nlen_flush_ptr 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr)));
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                            = (((~ (0xfULL << (0x3fU 
                                               & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list) 
                               | ((QData)((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                  << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                    }
                }
            }
        }
        if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                        >> 0x19U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                                          << 0x16U) 
                                         | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                            >> 0xaU)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                        << 6U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x17U] 
                                                  >> 0x1aU)))))))) {
            if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                   >> 0x19U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                                    << 0x16U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                                 >> 0xaU)))) 
                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                        << 0x16U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                     >> 0xaU))))) {
                if (vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nlen_flush_ptr 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr)));
                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                        = (((~ (0xfULL << (0x3fU & 
                                           VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                            & vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list) 
                           | ((QData)((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                              << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                }
            } else if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                   >> 0x19U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                                < (0xffffU 
                                                   & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                                       << 6U) 
                                                      | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x17U] 
                                                         >> 0x1aU))))) 
                                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                    >= (0xffffU & (
                                                   (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                                    << 6U) 
                                                   | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x17U] 
                                                      >> 0x1aU)))))))) {
                if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
                    if (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) 
                         & (IData)(vlSelfRef.axis_t_last))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nlen_flush_ptr 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr)));
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                            = (((~ (0xfULL << (0x3fU 
                                               & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list) 
                               | ((QData)((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                  << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                    }
                }
            }
        }
        if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                        >> 0xaU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                    >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                         << 5U) | (
                                                   vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                                   >> 0x1bU)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                       >> 0xbU))))))) {
            if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                   >> 0xaU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                               < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                   << 5U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                             >> 0x1bU)))) 
                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                        << 5U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                  >> 0x1bU))))) {
                if (vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nlen_flush_ptr 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr)));
                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                        = (((~ (0xfULL << (0x3fU & 
                                           VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                            & vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list) 
                           | ((QData)((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                              << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                }
            } else if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                                   >> 0xaU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                               < (0xffffU 
                                                  & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                                     >> 0xbU)))) 
                                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                    >= (0xffffU & (
                                                   vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                                   >> 0xbU))))))) {
                if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
                    if (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) 
                         & (IData)(vlSelfRef.axis_t_last))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nlen_flush_ptr 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr)));
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                            = (((~ (0xfULL << (0x3fU 
                                               & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list) 
                               | ((QData)((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                  << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                    }
                }
            }
        }
        if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                        >> 0x1bU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                                          << 0x14U) 
                                         | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                            >> 0xcU)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                        << 4U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1cU] 
                                                  >> 0x1cU)))))))) {
            if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                   >> 0x1bU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                                    << 0x14U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                                 >> 0xcU)))) 
                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                        << 0x14U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                     >> 0xcU))))) {
                if (vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nlen_flush_ptr 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr)));
                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                        = (((~ (0xfULL << (0x3fU & 
                                           VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                            & vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list) 
                           | ((QData)((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                              << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                }
            } else if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                   >> 0x1bU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                                < (0xffffU 
                                                   & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                                       << 4U) 
                                                      | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1cU] 
                                                         >> 0x1cU))))) 
                                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                    >= (0xffffU & (
                                                   (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                                    << 4U) 
                                                   | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1cU] 
                                                      >> 0x1cU)))))))) {
                if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
                    if (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) 
                         & (IData)(vlSelfRef.axis_t_last))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nlen_flush_ptr 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr)));
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                            = (((~ (0xfULL << (0x3fU 
                                               & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list) 
                               | ((QData)((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                  << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                    }
                }
            }
        }
        if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                        >> 0xcU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                    >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                         << 3U) | (
                                                   vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                                   >> 0x1dU)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                       >> 0xdU))))))) {
            if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                   >> 0xcU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                               < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                   << 3U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                             >> 0x1dU)))) 
                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                        << 3U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                  >> 0x1dU))))) {
                if (vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nlen_flush_ptr 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr)));
                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                        = (((~ (0xfULL << (0x3fU & 
                                           VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                            & vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list) 
                           | ((QData)((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                              << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                }
            } else if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                                   >> 0xcU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                               < (0xffffU 
                                                  & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                                     >> 0xdU)))) 
                                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                    >= (0xffffU & (
                                                   vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                                   >> 0xdU))))))) {
                if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
                    if (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) 
                         & (IData)(vlSelfRef.axis_t_last))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nlen_flush_ptr 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr)));
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                            = (((~ (0xfULL << (0x3fU 
                                               & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list) 
                               | ((QData)((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                  << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                    }
                }
            }
        }
        if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                        >> 0x1dU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                                          << 0x12U) 
                                         | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                            >> 0xeU)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                        << 2U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x21U] 
                                                  >> 0x1eU)))))))) {
            if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                   >> 0x1dU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                                    << 0x12U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                                 >> 0xeU)))) 
                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                        << 0x12U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                     >> 0xeU))))) {
                if (vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nlen_flush_ptr 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr)));
                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                        = (((~ (0xfULL << (0x3fU & 
                                           VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                            & vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list) 
                           | ((QData)((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                              << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                }
            } else if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                   >> 0x1dU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                                < (0xffffU 
                                                   & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                                       << 2U) 
                                                      | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x21U] 
                                                         >> 0x1eU))))) 
                                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                    >= (0xffffU & (
                                                   (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                                    << 2U) 
                                                   | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x21U] 
                                                      >> 0x1eU)))))))) {
                if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
                    if (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) 
                         & (IData)(vlSelfRef.axis_t_last))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nlen_flush_ptr 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr)));
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                            = (((~ (0xfULL << (0x3fU 
                                               & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list) 
                               | ((QData)((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                  << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                    }
                }
            }
        }
        if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                        >> 0xeU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                    >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                                         << 1U) | (
                                                   vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                                   >> 0x1fU)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                       >> 0xfU))))))) {
            if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                   >> 0xeU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                               < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                                   << 1U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                             >> 0x1fU)))) 
                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                        << 1U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                  >> 0x1fU))))) {
                if (vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nlen_flush_ptr 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr)));
                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                        = (((~ (0xfULL << (0x3fU & 
                                           VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                            & vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list) 
                           | ((QData)((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                              << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                }
            } else if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                                   >> 0xeU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                               < (0xffffU 
                                                  & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                                     >> 0xfU)))) 
                                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                    >= (0xffffU & (
                                                   vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                                   >> 0xfU))))))) {
                if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
                    if (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) 
                         & (IData)(vlSelfRef.axis_t_last))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nlen_flush_ptr 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr)));
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                            = (((~ (0xfULL << (0x3fU 
                                               & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list) 
                               | ((QData)((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                  << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                    }
                }
            }
        }
        if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                        >> 0x1fU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x28U] 
                                          << 0x10U) 
                                         | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x27U] 
                                            >> 0x10U)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x27U])))))) {
            if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                   >> 0x1fU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x28U] 
                                    << 0x10U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x27U] 
                                                 >> 0x10U)))) 
                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x28U] 
                        << 0x10U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x27U] 
                                     >> 0x10U))))) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug_0 = 1U;
                if (vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nlen_flush_ptr 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr)));
                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                        = (((~ (0xfULL << (0x3fU & 
                                           VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                            & vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list) 
                           | ((QData)((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                              << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                }
            } else if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                                   >> 0x1fU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                                < (0xffffU 
                                                   & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x27U]))) 
                                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                    >= (0xffffU & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x27U])))))) {
                if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
                    if (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) 
                         & (IData)(vlSelfRef.axis_t_last))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nlen_flush_ptr 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr)));
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list 
                            = (((~ (0xfULL << (0x3fU 
                                               & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nflush_list) 
                               | ((QData)((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                  << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                    }
                }
            }
        }
        vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_rx_trk 
            = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
               + (IData)(vlSelfRef.IP_bytes_rcv));
        if ((1U & (~ ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0U] 
                       & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
                               << 0xfU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[1U] 
                                           >> 0x11U)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[1U] 
                                       >> 1U))))))) {
            if (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0U] 
                  & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
                         << 0xfU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[1U] 
                                     >> 0x11U)))) & 
                 ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                   + (IData)(vlSelfRef.IP_bytes_rcv)) 
                  > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
                      << 0xfU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[1U] 
                                  >> 0x11U))))) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                - ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[1U] 
                                    << 0xfU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[1U] 
                                                >> 0x11U))));
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.wr_FIFO_offset = (0xffU & 
                                            VL_SHIFTL_III(8,8,8, (IData)(0xffU), (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
                if (vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0 
                        = vlSelfRef.TCP__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0 
                        = (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0 
                        = vlSelfRef.TCP__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0 
                        = vlSelfRef.wr_FIFO_len;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                       & (((IData)(0x51U) 
                                                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                                                          >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
                if ((vlSelfRef.TCP__DOT__seq_num_rx 
                     == vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next)) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nrcv_next 
                        = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                           + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left));
                }
            } else if (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0U] 
                         & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                            < (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[1U] 
                                          >> 1U)))) 
                        & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                            + (IData)(vlSelfRef.IP_bytes_rcv)) 
                           >= (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[1U] 
                                          >> 1U))))) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[1U] 
                                   << 0xfU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[1U] 
                                               >> 0x11U)) 
                                 + (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[1U] 
                                               >> 1U))) 
                                - vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk));
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_rx_trk 
                    = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                       + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left));
                vlSelfRef.wr_FIFO_offset = (0xffU & 
                                            VL_SHIFTR_III(8,8,8, 0xffU, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
            } else if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
                vlSelfRef.wr_FIFO_offset = (0xffU & 
                                            VL_SHIFTR_III(8,8,32, 0xffU, 
                                                          ((IData)(8U) 
                                                           - (IData)(vlSelfRef.IP_bytes_rcv))));
                if (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) 
                     & (IData)(vlSelfRef.axis_t_last))) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1 
                        = vlSelfRef.TCP__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1);
                    }
                    if ((vlSelfRef.TCP__DOT__seq_num_rx 
                         == vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next)) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nrcv_next 
                            = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                               + (IData)(vlSelfRef.IP_bytes_rcv));
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1 
                        = (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.IP_bytes_rcv)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1 
                        = vlSelfRef.TCP__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1 
                        = vlSelfRef.wr_FIFO_len;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                       & (((IData)(0x51U) 
                                                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                                                          >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
            }
        }
    }
    if (vlSelfRef.rd_FIFO_en_rcv) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__case_bug_0 = 1U;
        if (((vlSelfRef.seq_rx_FIFO_rd == ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
                                            << 0xfU) 
                                           | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[1U] 
                                              >> 0x11U))) 
             & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0U])) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0U] 
                = (0xfffffffeU & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0U]);
        }
    }
    if (vlSelfRef.nw_segment) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_rx_trk 
            = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
               + (IData)(vlSelfRef.IP_bytes_rcv));
        if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
                        >> 0x11U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U] 
                                          << 0x1eU) 
                                         | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[4U] 
                                            >> 2U)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[4U] 
                                        << 0xeU) | 
                                       (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[3U] 
                                        >> 0x12U)))))))) {
            if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
                   >> 0x11U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U] 
                                    << 0x1eU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[4U] 
                                                 >> 2U)))) 
                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U] 
                        << 0x1eU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[4U] 
                                     >> 2U))))) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                - ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[4U] 
                                    << 0x1eU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[4U] 
                                                 >> 2U))));
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.wr_FIFO_offset = (0xffU & 
                                            VL_SHIFTL_III(8,8,8, (IData)(0xffU), (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
                if (vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0 
                        = vlSelfRef.TCP__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0 
                        = (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0 
                        = vlSelfRef.TCP__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0 
                        = vlSelfRef.wr_FIFO_len;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                       & (((IData)(0x51U) 
                                                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                                                          >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
                if ((vlSelfRef.TCP__DOT__seq_num_rx 
                     == vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next)) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nrcv_next 
                        = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                           + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left));
                }
            } else if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
                          >> 0x11U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                       < (0xffffU & 
                                          ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[4U] 
                                            << 0xeU) 
                                           | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[3U] 
                                              >> 0x12U))))) 
                        & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                            + (IData)(vlSelfRef.IP_bytes_rcv)) 
                           >= (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[4U] 
                                           << 0xeU) 
                                          | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[3U] 
                                             >> 0x12U)))))) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[4U] 
                                   << 0x1eU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[4U] 
                                                >> 2U)) 
                                 + (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[4U] 
                                                << 0xeU) 
                                               | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[3U] 
                                                  >> 0x12U)))) 
                                - vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk));
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_rx_trk 
                    = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                       + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left));
                vlSelfRef.wr_FIFO_offset = (0xffU & 
                                            VL_SHIFTR_III(8,8,8, 0xffU, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
            } else if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
                vlSelfRef.wr_FIFO_offset = (0xffU & 
                                            VL_SHIFTR_III(8,8,32, 0xffU, 
                                                          ((IData)(8U) 
                                                           - (IData)(vlSelfRef.IP_bytes_rcv))));
                if (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) 
                     & (IData)(vlSelfRef.axis_t_last))) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1 
                        = vlSelfRef.TCP__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1);
                    }
                    if ((vlSelfRef.TCP__DOT__seq_num_rx 
                         == vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next)) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nrcv_next 
                            = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                               + (IData)(vlSelfRef.IP_bytes_rcv));
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1 
                        = (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.IP_bytes_rcv)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1 
                        = vlSelfRef.TCP__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1 
                        = vlSelfRef.wr_FIFO_len;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                       & (((IData)(0x51U) 
                                                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                                                          >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
            }
        }
    }
    if (vlSelfRef.rd_FIFO_en_rcv) {
        if (((vlSelfRef.seq_rx_FIFO_rd == ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U] 
                                            << 0x1eU) 
                                           | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[4U] 
                                              >> 2U))) 
             & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[2U] 
                >> 0x11U))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[2U] 
                = (0xfffdffffU & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[2U]);
        }
    }
    if (vlSelfRef.nw_segment) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_rx_trk 
            = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
               + (IData)(vlSelfRef.IP_bytes_rcv));
        if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U] 
                        >> 2U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                  >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[7U] 
                                       << 0xdU) | (
                                                   vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[6U] 
                                                   >> 0x13U)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[6U] 
                                       >> 3U))))))) {
            if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U] 
                   >> 2U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                             < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[7U] 
                                 << 0xdU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[6U] 
                                             >> 0x13U)))) 
                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[7U] 
                        << 0xdU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[6U] 
                                    >> 0x13U))))) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                - ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[6U] 
                                    << 0xdU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[6U] 
                                                >> 0x13U))));
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.wr_FIFO_offset = (0xffU & 
                                            VL_SHIFTL_III(8,8,8, (IData)(0xffU), (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
                if (vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0 
                        = vlSelfRef.TCP__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0 
                        = (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0 
                        = vlSelfRef.TCP__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0 
                        = vlSelfRef.wr_FIFO_len;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                       & (((IData)(0x51U) 
                                                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                                                          >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
                if ((vlSelfRef.TCP__DOT__seq_num_rx 
                     == vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next)) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nrcv_next 
                        = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                           + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left));
                }
            } else if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U] 
                          >> 2U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                    < (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[6U] 
                                                  >> 3U)))) 
                        & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                            + (IData)(vlSelfRef.IP_bytes_rcv)) 
                           >= (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[6U] 
                                          >> 3U))))) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[6U] 
                                   << 0xdU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[6U] 
                                               >> 0x13U)) 
                                 + (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[6U] 
                                               >> 3U))) 
                                - vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk));
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_rx_trk 
                    = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                       + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left));
                vlSelfRef.wr_FIFO_offset = (0xffU & 
                                            VL_SHIFTR_III(8,8,8, 0xffU, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
            } else if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
                vlSelfRef.wr_FIFO_offset = (0xffU & 
                                            VL_SHIFTR_III(8,8,32, 0xffU, 
                                                          ((IData)(8U) 
                                                           - (IData)(vlSelfRef.IP_bytes_rcv))));
                if (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) 
                     & (IData)(vlSelfRef.axis_t_last))) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1 
                        = vlSelfRef.TCP__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1);
                    }
                    if ((vlSelfRef.TCP__DOT__seq_num_rx 
                         == vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next)) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nrcv_next 
                            = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                               + (IData)(vlSelfRef.IP_bytes_rcv));
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1 
                        = (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.IP_bytes_rcv)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1 
                        = vlSelfRef.TCP__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1 
                        = vlSelfRef.wr_FIFO_len;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                       & (((IData)(0x51U) 
                                                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                                                          >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
            }
        }
    }
    if (vlSelfRef.rd_FIFO_en_rcv) {
        if (((vlSelfRef.seq_rx_FIFO_rd == ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[7U] 
                                            << 0xdU) 
                                           | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[6U] 
                                              >> 0x13U))) 
             & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[5U] 
                >> 2U))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[5U] 
                = (0xfffffffbU & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[5U]);
        }
    }
    if (vlSelfRef.nw_segment) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_rx_trk 
            = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
               + (IData)(vlSelfRef.IP_bytes_rcv));
        if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[7U] 
                        >> 0x13U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                                          << 0x1cU) 
                                         | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[9U] 
                                            >> 4U)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[9U] 
                                        << 0xcU) | 
                                       (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[8U] 
                                        >> 0x14U)))))))) {
            if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[7U] 
                   >> 0x13U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                                    << 0x1cU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[9U] 
                                                 >> 4U)))) 
                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                        << 0x1cU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[9U] 
                                     >> 4U))))) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                - ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[9U] 
                                    << 0x1cU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[9U] 
                                                 >> 4U))));
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.wr_FIFO_offset = (0xffU & 
                                            VL_SHIFTL_III(8,8,8, (IData)(0xffU), (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
                if (vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0 
                        = vlSelfRef.TCP__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0 
                        = (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0 
                        = vlSelfRef.TCP__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0 
                        = vlSelfRef.wr_FIFO_len;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                       & (((IData)(0x51U) 
                                                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                                                          >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
                if ((vlSelfRef.TCP__DOT__seq_num_rx 
                     == vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next)) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nrcv_next 
                        = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                           + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left));
                }
            } else if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[7U] 
                          >> 0x13U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                       < (0xffffU & 
                                          ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[9U] 
                                            << 0xcU) 
                                           | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[8U] 
                                              >> 0x14U))))) 
                        & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                            + (IData)(vlSelfRef.IP_bytes_rcv)) 
                           >= (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[9U] 
                                           << 0xcU) 
                                          | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[8U] 
                                             >> 0x14U)))))) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[9U] 
                                   << 0x1cU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[9U] 
                                                >> 4U)) 
                                 + (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[9U] 
                                                << 0xcU) 
                                               | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[8U] 
                                                  >> 0x14U)))) 
                                - vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk));
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_rx_trk 
                    = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                       + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left));
                vlSelfRef.wr_FIFO_offset = (0xffU & 
                                            VL_SHIFTR_III(8,8,8, 0xffU, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
            } else if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
                vlSelfRef.wr_FIFO_offset = (0xffU & 
                                            VL_SHIFTR_III(8,8,32, 0xffU, 
                                                          ((IData)(8U) 
                                                           - (IData)(vlSelfRef.IP_bytes_rcv))));
                if (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) 
                     & (IData)(vlSelfRef.axis_t_last))) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1 
                        = vlSelfRef.TCP__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1);
                    }
                    if ((vlSelfRef.TCP__DOT__seq_num_rx 
                         == vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next)) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nrcv_next 
                            = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                               + (IData)(vlSelfRef.IP_bytes_rcv));
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1 
                        = (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.IP_bytes_rcv)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1 
                        = vlSelfRef.TCP__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1 
                        = vlSelfRef.wr_FIFO_len;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                       & (((IData)(0x51U) 
                                                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                                                          >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
            }
        }
    }
    if (vlSelfRef.rd_FIFO_en_rcv) {
        if (((vlSelfRef.seq_rx_FIFO_rd == ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                                            << 0x1cU) 
                                           | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[9U] 
                                              >> 4U))) 
             & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[7U] 
                >> 0x13U))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[7U] 
                = (0xfff7ffffU & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[7U]);
        }
    }
    if (vlSelfRef.nw_segment) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_rx_trk 
            = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
               + (IData)(vlSelfRef.IP_bytes_rcv));
        if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                        >> 4U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                  >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                                       << 0xbU) | (
                                                   vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                                   >> 0x15U)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                       >> 5U))))))) {
            if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                   >> 4U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                             < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                                 << 0xbU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                             >> 0x15U)))) 
                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                        << 0xbU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                    >> 0x15U))))) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                - ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                    << 0xbU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                                >> 0x15U))));
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.wr_FIFO_offset = (0xffU & 
                                            VL_SHIFTL_III(8,8,8, (IData)(0xffU), (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
                if (vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0 
                        = vlSelfRef.TCP__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0 
                        = (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0 
                        = vlSelfRef.TCP__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0 
                        = vlSelfRef.wr_FIFO_len;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                       & (((IData)(0x51U) 
                                                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                                                          >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
                if ((vlSelfRef.TCP__DOT__seq_num_rx 
                     == vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next)) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nrcv_next 
                        = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                           + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left));
                }
            } else if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                          >> 4U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                    < (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                                  >> 5U)))) 
                        & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                            + (IData)(vlSelfRef.IP_bytes_rcv)) 
                           >= (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                          >> 5U))))) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                   << 0xbU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                               >> 0x15U)) 
                                 + (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                               >> 5U))) 
                                - vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk));
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_rx_trk 
                    = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                       + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left));
                vlSelfRef.wr_FIFO_offset = (0xffU & 
                                            VL_SHIFTR_III(8,8,8, 0xffU, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
            } else if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
                vlSelfRef.wr_FIFO_offset = (0xffU & 
                                            VL_SHIFTR_III(8,8,32, 0xffU, 
                                                          ((IData)(8U) 
                                                           - (IData)(vlSelfRef.IP_bytes_rcv))));
                if (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) 
                     & (IData)(vlSelfRef.axis_t_last))) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1 
                        = vlSelfRef.TCP__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1);
                    }
                    if ((vlSelfRef.TCP__DOT__seq_num_rx 
                         == vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next)) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nrcv_next 
                            = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                               + (IData)(vlSelfRef.IP_bytes_rcv));
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1 
                        = (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.IP_bytes_rcv)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1 
                        = vlSelfRef.TCP__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1 
                        = vlSelfRef.wr_FIFO_len;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                       & (((IData)(0x51U) 
                                                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                                                          >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
            }
        }
    }
    if (vlSelfRef.rd_FIFO_en_rcv) {
        if (((vlSelfRef.seq_rx_FIFO_rd == ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                                            << 0xbU) 
                                           | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                              >> 0x15U))) 
             & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                >> 4U))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0xaU] 
                = (0xffffffefU & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0xaU]);
        }
    }
    if (vlSelfRef.nw_segment) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_rx_trk 
            = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
               + (IData)(vlSelfRef.IP_bytes_rcv));
        if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                        >> 0x15U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                                          << 0x1aU) 
                                         | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                            >> 6U)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                        << 0xaU) | 
                                       (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xdU] 
                                        >> 0x16U)))))))) {
            if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                   >> 0x15U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                                    << 0x1aU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                                 >> 6U)))) 
                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                        << 0x1aU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                     >> 6U))))) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                - ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                    << 0x1aU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                                 >> 6U))));
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.wr_FIFO_offset = (0xffU & 
                                            VL_SHIFTL_III(8,8,8, (IData)(0xffU), (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
                if (vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0 
                        = vlSelfRef.TCP__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0 
                        = (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0 
                        = vlSelfRef.TCP__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0 
                        = vlSelfRef.wr_FIFO_len;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                       & (((IData)(0x51U) 
                                                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                                                          >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
                if ((vlSelfRef.TCP__DOT__seq_num_rx 
                     == vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next)) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nrcv_next 
                        = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                           + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left));
                }
            } else if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                          >> 0x15U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                       < (0xffffU & 
                                          ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                            << 0xaU) 
                                           | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xdU] 
                                              >> 0x16U))))) 
                        & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                            + (IData)(vlSelfRef.IP_bytes_rcv)) 
                           >= (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                           << 0xaU) 
                                          | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xdU] 
                                             >> 0x16U)))))) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                   << 0x1aU) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                                >> 6U)) 
                                 + (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                                << 0xaU) 
                                               | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xdU] 
                                                  >> 0x16U)))) 
                                - vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk));
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_rx_trk 
                    = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                       + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left));
                vlSelfRef.wr_FIFO_offset = (0xffU & 
                                            VL_SHIFTR_III(8,8,8, 0xffU, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
            } else if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
                vlSelfRef.wr_FIFO_offset = (0xffU & 
                                            VL_SHIFTR_III(8,8,32, 0xffU, 
                                                          ((IData)(8U) 
                                                           - (IData)(vlSelfRef.IP_bytes_rcv))));
                if (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) 
                     & (IData)(vlSelfRef.axis_t_last))) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1 
                        = vlSelfRef.TCP__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1);
                    }
                    if ((vlSelfRef.TCP__DOT__seq_num_rx 
                         == vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next)) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nrcv_next 
                            = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                               + (IData)(vlSelfRef.IP_bytes_rcv));
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1 
                        = (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.IP_bytes_rcv)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1 
                        = vlSelfRef.TCP__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1 
                        = vlSelfRef.wr_FIFO_len;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                       & (((IData)(0x51U) 
                                                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                                                          >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
            }
        }
    }
    if (vlSelfRef.rd_FIFO_en_rcv) {
        if (((vlSelfRef.seq_rx_FIFO_rd == ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                                            << 0x1aU) 
                                           | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                              >> 6U))) 
             & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                >> 0x15U))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0xcU] 
                = (0xffdfffffU & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0xcU]);
        }
    }
    if (vlSelfRef.nw_segment) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_rx_trk 
            = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
               + (IData)(vlSelfRef.IP_bytes_rcv));
        if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                        >> 6U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                  >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                                       << 9U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                                 >> 0x17U)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                       >> 7U))))))) {
            if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                   >> 6U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                             < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                                 << 9U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                           >> 0x17U)))) 
                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                        << 9U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                  >> 0x17U))))) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                - ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                    << 9U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                              >> 0x17U))));
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.wr_FIFO_offset = (0xffU & 
                                            VL_SHIFTL_III(8,8,8, (IData)(0xffU), (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
                if (vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0 
                        = vlSelfRef.TCP__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0 
                        = (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0 
                        = vlSelfRef.TCP__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0 
                        = vlSelfRef.wr_FIFO_len;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                       & (((IData)(0x51U) 
                                                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                                                          >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
                if ((vlSelfRef.TCP__DOT__seq_num_rx 
                     == vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next)) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nrcv_next 
                        = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                           + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left));
                }
            } else if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                          >> 6U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                    < (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                                  >> 7U)))) 
                        & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                            + (IData)(vlSelfRef.IP_bytes_rcv)) 
                           >= (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                          >> 7U))))) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                   << 9U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                             >> 0x17U)) 
                                 + (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                               >> 7U))) 
                                - vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk));
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_rx_trk 
                    = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                       + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left));
                vlSelfRef.wr_FIFO_offset = (0xffU & 
                                            VL_SHIFTR_III(8,8,8, 0xffU, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
            } else if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
                vlSelfRef.wr_FIFO_offset = (0xffU & 
                                            VL_SHIFTR_III(8,8,32, 0xffU, 
                                                          ((IData)(8U) 
                                                           - (IData)(vlSelfRef.IP_bytes_rcv))));
                if (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) 
                     & (IData)(vlSelfRef.axis_t_last))) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1 
                        = vlSelfRef.TCP__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1);
                    }
                    if ((vlSelfRef.TCP__DOT__seq_num_rx 
                         == vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next)) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nrcv_next 
                            = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                               + (IData)(vlSelfRef.IP_bytes_rcv));
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1 
                        = (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.IP_bytes_rcv)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1 
                        = vlSelfRef.TCP__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1 
                        = vlSelfRef.wr_FIFO_len;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                       & (((IData)(0x51U) 
                                                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                                                          >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
            }
        }
    }
    if (vlSelfRef.rd_FIFO_en_rcv) {
        if (((vlSelfRef.seq_rx_FIFO_rd == ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                                            << 9U) 
                                           | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                              >> 0x17U))) 
             & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                >> 6U))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0xfU] 
                = (0xffffffbfU & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0xfU]);
        }
    }
    if (vlSelfRef.nw_segment) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_rx_trk 
            = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
               + (IData)(vlSelfRef.IP_bytes_rcv));
        if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                        >> 0x17U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                                          << 0x18U) 
                                         | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                            >> 8U)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                        << 8U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x12U] 
                                                  >> 0x18U)))))))) {
            if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                   >> 0x17U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                                    << 0x18U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                                 >> 8U)))) 
                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                        << 0x18U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                     >> 8U))))) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                - ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                    << 0x18U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                                 >> 8U))));
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.wr_FIFO_offset = (0xffU & 
                                            VL_SHIFTL_III(8,8,8, (IData)(0xffU), (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
                if (vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0 
                        = vlSelfRef.TCP__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0 
                        = (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0 
                        = vlSelfRef.TCP__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0 
                        = vlSelfRef.wr_FIFO_len;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                       & (((IData)(0x51U) 
                                                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                                                          >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
                if ((vlSelfRef.TCP__DOT__seq_num_rx 
                     == vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next)) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nrcv_next 
                        = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                           + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left));
                }
            } else if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                          >> 0x17U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                       < (0xffffU & 
                                          ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                            << 8U) 
                                           | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x12U] 
                                              >> 0x18U))))) 
                        & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                            + (IData)(vlSelfRef.IP_bytes_rcv)) 
                           >= (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                           << 8U) | 
                                          (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x12U] 
                                           >> 0x18U)))))) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                   << 0x18U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                                >> 8U)) 
                                 + (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                                << 8U) 
                                               | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x12U] 
                                                  >> 0x18U)))) 
                                - vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk));
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_rx_trk 
                    = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                       + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left));
                vlSelfRef.wr_FIFO_offset = (0xffU & 
                                            VL_SHIFTR_III(8,8,8, 0xffU, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
            } else if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
                vlSelfRef.wr_FIFO_offset = (0xffU & 
                                            VL_SHIFTR_III(8,8,32, 0xffU, 
                                                          ((IData)(8U) 
                                                           - (IData)(vlSelfRef.IP_bytes_rcv))));
                if (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) 
                     & (IData)(vlSelfRef.axis_t_last))) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1 
                        = vlSelfRef.TCP__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1);
                    }
                    if ((vlSelfRef.TCP__DOT__seq_num_rx 
                         == vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next)) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nrcv_next 
                            = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                               + (IData)(vlSelfRef.IP_bytes_rcv));
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1 
                        = (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.IP_bytes_rcv)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1 
                        = vlSelfRef.TCP__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1 
                        = vlSelfRef.wr_FIFO_len;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                       & (((IData)(0x51U) 
                                                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                                                          >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
            }
        }
    }
    if (vlSelfRef.rd_FIFO_en_rcv) {
        if (((vlSelfRef.seq_rx_FIFO_rd == ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                                            << 0x18U) 
                                           | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                              >> 8U))) 
             & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                >> 0x17U))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x11U] 
                = (0xff7fffffU & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x11U]);
        }
    }
    if (vlSelfRef.nw_segment) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_rx_trk 
            = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
               + (IData)(vlSelfRef.IP_bytes_rcv));
        if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                        >> 8U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                  >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                       << 7U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                                 >> 0x19U)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                       >> 9U))))))) {
            if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                   >> 8U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                             < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                 << 7U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                           >> 0x19U)))) 
                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                        << 7U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                  >> 0x19U))))) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                - ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                    << 7U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                              >> 0x19U))));
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.wr_FIFO_offset = (0xffU & 
                                            VL_SHIFTL_III(8,8,8, (IData)(0xffU), (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
                if (vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0 
                        = vlSelfRef.TCP__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0 
                        = (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0 
                        = vlSelfRef.TCP__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0 
                        = vlSelfRef.wr_FIFO_len;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                       & (((IData)(0x51U) 
                                                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                                                          >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
                if ((vlSelfRef.TCP__DOT__seq_num_rx 
                     == vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next)) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nrcv_next 
                        = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                           + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left));
                }
            } else if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                          >> 8U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                    < (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                                  >> 9U)))) 
                        & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                            + (IData)(vlSelfRef.IP_bytes_rcv)) 
                           >= (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                          >> 9U))))) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                   << 7U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                             >> 0x19U)) 
                                 + (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                               >> 9U))) 
                                - vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk));
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_rx_trk 
                    = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                       + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left));
                vlSelfRef.wr_FIFO_offset = (0xffU & 
                                            VL_SHIFTR_III(8,8,8, 0xffU, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
            } else if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
                vlSelfRef.wr_FIFO_offset = (0xffU & 
                                            VL_SHIFTR_III(8,8,32, 0xffU, 
                                                          ((IData)(8U) 
                                                           - (IData)(vlSelfRef.IP_bytes_rcv))));
                if (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) 
                     & (IData)(vlSelfRef.axis_t_last))) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1 
                        = vlSelfRef.TCP__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1);
                    }
                    if ((vlSelfRef.TCP__DOT__seq_num_rx 
                         == vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next)) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nrcv_next 
                            = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                               + (IData)(vlSelfRef.IP_bytes_rcv));
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1 
                        = (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.IP_bytes_rcv)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1 
                        = vlSelfRef.TCP__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1 
                        = vlSelfRef.wr_FIFO_len;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                       & (((IData)(0x51U) 
                                                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                                                          >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
            }
        }
    }
    if (vlSelfRef.rd_FIFO_en_rcv) {
        if (((vlSelfRef.seq_rx_FIFO_rd == ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                            << 7U) 
                                           | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                              >> 0x19U))) 
             & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                >> 8U))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x14U] 
                = (0xfffffeffU & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x14U]);
        }
    }
    if (vlSelfRef.nw_segment) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_rx_trk 
            = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
               + (IData)(vlSelfRef.IP_bytes_rcv));
        if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                        >> 0x19U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                                          << 0x16U) 
                                         | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                            >> 0xaU)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                        << 6U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x17U] 
                                                  >> 0x1aU)))))))) {
            if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                   >> 0x19U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                                    << 0x16U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                                 >> 0xaU)))) 
                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                        << 0x16U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                     >> 0xaU))))) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                - ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                    << 0x16U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                                 >> 0xaU))));
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.wr_FIFO_offset = (0xffU & 
                                            VL_SHIFTL_III(8,8,8, (IData)(0xffU), (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
                if (vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0 
                        = vlSelfRef.TCP__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0 
                        = (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0 
                        = vlSelfRef.TCP__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0 
                        = vlSelfRef.wr_FIFO_len;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                       & (((IData)(0x51U) 
                                                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                                                          >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
                if ((vlSelfRef.TCP__DOT__seq_num_rx 
                     == vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next)) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nrcv_next 
                        = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                           + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left));
                }
            } else if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                          >> 0x19U) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                       < (0xffffU & 
                                          ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                            << 6U) 
                                           | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x17U] 
                                              >> 0x1aU))))) 
                        & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                            + (IData)(vlSelfRef.IP_bytes_rcv)) 
                           >= (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                           << 6U) | 
                                          (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x17U] 
                                           >> 0x1aU)))))) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                   << 0x16U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                                >> 0xaU)) 
                                 + (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                                << 6U) 
                                               | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x17U] 
                                                  >> 0x1aU)))) 
                                - vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk));
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_rx_trk 
                    = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                       + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left));
                vlSelfRef.wr_FIFO_offset = (0xffU & 
                                            VL_SHIFTR_III(8,8,8, 0xffU, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
            } else if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
                vlSelfRef.wr_FIFO_offset = (0xffU & 
                                            VL_SHIFTR_III(8,8,32, 0xffU, 
                                                          ((IData)(8U) 
                                                           - (IData)(vlSelfRef.IP_bytes_rcv))));
                if (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) 
                     & (IData)(vlSelfRef.axis_t_last))) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1 
                        = vlSelfRef.TCP__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1);
                    }
                    if ((vlSelfRef.TCP__DOT__seq_num_rx 
                         == vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next)) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nrcv_next 
                            = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                               + (IData)(vlSelfRef.IP_bytes_rcv));
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1 
                        = (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.IP_bytes_rcv)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1 
                        = vlSelfRef.TCP__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1 
                        = vlSelfRef.wr_FIFO_len;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                       & (((IData)(0x51U) 
                                                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                                                          >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
            }
        }
    }
    if (vlSelfRef.rd_FIFO_en_rcv) {
        if (((vlSelfRef.seq_rx_FIFO_rd == ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                                            << 0x16U) 
                                           | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                              >> 0xaU))) 
             & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                >> 0x19U))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x16U] 
                = (0xfdffffffU & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x16U]);
        }
    }
    if (vlSelfRef.nw_segment) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_rx_trk 
            = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
               + (IData)(vlSelfRef.IP_bytes_rcv));
        if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                        >> 0xaU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                    >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                         << 5U) | (
                                                   vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                                   >> 0x1bU)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                       >> 0xbU))))))) {
            if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                   >> 0xaU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                               < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                   << 5U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                             >> 0x1bU)))) 
                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                        << 5U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                  >> 0x1bU))))) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                - ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                    << 5U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                              >> 0x1bU))));
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.wr_FIFO_offset = (0xffU & 
                                            VL_SHIFTL_III(8,8,8, (IData)(0xffU), (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
                if (vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0 
                        = vlSelfRef.TCP__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0 
                        = (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0 
                        = vlSelfRef.TCP__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0 
                        = vlSelfRef.wr_FIFO_len;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                       & (((IData)(0x51U) 
                                                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                                                          >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
                if ((vlSelfRef.TCP__DOT__seq_num_rx 
                     == vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next)) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nrcv_next 
                        = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                           + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left));
                }
            } else if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                          >> 0xaU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                      < (0xffffU & 
                                         (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                          >> 0xbU)))) 
                        & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                            + (IData)(vlSelfRef.IP_bytes_rcv)) 
                           >= (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                          >> 0xbU))))) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                   << 5U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                             >> 0x1bU)) 
                                 + (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                               >> 0xbU))) 
                                - vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk));
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_rx_trk 
                    = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                       + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left));
                vlSelfRef.wr_FIFO_offset = (0xffU & 
                                            VL_SHIFTR_III(8,8,8, 0xffU, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
            } else if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
                vlSelfRef.wr_FIFO_offset = (0xffU & 
                                            VL_SHIFTR_III(8,8,32, 0xffU, 
                                                          ((IData)(8U) 
                                                           - (IData)(vlSelfRef.IP_bytes_rcv))));
                if (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) 
                     & (IData)(vlSelfRef.axis_t_last))) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1 
                        = vlSelfRef.TCP__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1);
                    }
                    if ((vlSelfRef.TCP__DOT__seq_num_rx 
                         == vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next)) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nrcv_next 
                            = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                               + (IData)(vlSelfRef.IP_bytes_rcv));
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1 
                        = (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.IP_bytes_rcv)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1 
                        = vlSelfRef.TCP__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1 
                        = vlSelfRef.wr_FIFO_len;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                       & (((IData)(0x51U) 
                                                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                                                          >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
            }
        }
    }
    if (vlSelfRef.rd_FIFO_en_rcv) {
        if (((vlSelfRef.seq_rx_FIFO_rd == ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                            << 5U) 
                                           | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                              >> 0x1bU))) 
             & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                >> 0xaU))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x19U] 
                = (0xfffffbffU & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x19U]);
        }
    }
    if (vlSelfRef.nw_segment) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_rx_trk 
            = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
               + (IData)(vlSelfRef.IP_bytes_rcv));
        if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                        >> 0x1bU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                                          << 0x14U) 
                                         | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                            >> 0xcU)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                        << 4U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1cU] 
                                                  >> 0x1cU)))))))) {
            if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                   >> 0x1bU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                                    << 0x14U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                                 >> 0xcU)))) 
                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                        << 0x14U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                     >> 0xcU))))) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                - ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                    << 0x14U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                                 >> 0xcU))));
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.wr_FIFO_offset = (0xffU & 
                                            VL_SHIFTL_III(8,8,8, (IData)(0xffU), (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
                if (vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0 
                        = vlSelfRef.TCP__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0 
                        = (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0 
                        = vlSelfRef.TCP__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0 
                        = vlSelfRef.wr_FIFO_len;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                       & (((IData)(0x51U) 
                                                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                                                          >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
                if ((vlSelfRef.TCP__DOT__seq_num_rx 
                     == vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next)) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nrcv_next 
                        = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                           + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left));
                }
            } else if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                          >> 0x1bU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                       < (0xffffU & 
                                          ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                            << 4U) 
                                           | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1cU] 
                                              >> 0x1cU))))) 
                        & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                            + (IData)(vlSelfRef.IP_bytes_rcv)) 
                           >= (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                           << 4U) | 
                                          (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1cU] 
                                           >> 0x1cU)))))) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                   << 0x14U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                                >> 0xcU)) 
                                 + (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                                << 4U) 
                                               | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1cU] 
                                                  >> 0x1cU)))) 
                                - vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk));
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_rx_trk 
                    = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                       + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left));
                vlSelfRef.wr_FIFO_offset = (0xffU & 
                                            VL_SHIFTR_III(8,8,8, 0xffU, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
            } else if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
                vlSelfRef.wr_FIFO_offset = (0xffU & 
                                            VL_SHIFTR_III(8,8,32, 0xffU, 
                                                          ((IData)(8U) 
                                                           - (IData)(vlSelfRef.IP_bytes_rcv))));
                if (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) 
                     & (IData)(vlSelfRef.axis_t_last))) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1 
                        = vlSelfRef.TCP__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1);
                    }
                    if ((vlSelfRef.TCP__DOT__seq_num_rx 
                         == vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next)) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nrcv_next 
                            = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                               + (IData)(vlSelfRef.IP_bytes_rcv));
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1 
                        = (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.IP_bytes_rcv)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1 
                        = vlSelfRef.TCP__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1 
                        = vlSelfRef.wr_FIFO_len;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                       & (((IData)(0x51U) 
                                                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                                                          >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
            }
        }
    }
    if (vlSelfRef.rd_FIFO_en_rcv) {
        if (((vlSelfRef.seq_rx_FIFO_rd == ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                                            << 0x14U) 
                                           | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                              >> 0xcU))) 
             & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                >> 0x1bU))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x1bU] 
                = (0xf7ffffffU & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x1bU]);
        }
    }
    if (vlSelfRef.nw_segment) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_rx_trk 
            = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
               + (IData)(vlSelfRef.IP_bytes_rcv));
        if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                        >> 0xcU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                    >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                         << 3U) | (
                                                   vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                                   >> 0x1dU)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                       >> 0xdU))))))) {
            if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                   >> 0xcU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                               < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                   << 3U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                             >> 0x1dU)))) 
                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                        << 3U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                  >> 0x1dU))))) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                - ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                    << 3U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                              >> 0x1dU))));
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.wr_FIFO_offset = (0xffU & 
                                            VL_SHIFTL_III(8,8,8, (IData)(0xffU), (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
                if (vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0 
                        = vlSelfRef.TCP__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0 
                        = (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0 
                        = vlSelfRef.TCP__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0 
                        = vlSelfRef.wr_FIFO_len;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                       & (((IData)(0x51U) 
                                                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                                                          >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
                if ((vlSelfRef.TCP__DOT__seq_num_rx 
                     == vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next)) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nrcv_next 
                        = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                           + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left));
                }
            } else if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                          >> 0xcU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                      < (0xffffU & 
                                         (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                          >> 0xdU)))) 
                        & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                            + (IData)(vlSelfRef.IP_bytes_rcv)) 
                           >= (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                          >> 0xdU))))) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                   << 3U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                             >> 0x1dU)) 
                                 + (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                               >> 0xdU))) 
                                - vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk));
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_rx_trk 
                    = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                       + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left));
                vlSelfRef.wr_FIFO_offset = (0xffU & 
                                            VL_SHIFTR_III(8,8,8, 0xffU, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
            } else if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
                vlSelfRef.wr_FIFO_offset = (0xffU & 
                                            VL_SHIFTR_III(8,8,32, 0xffU, 
                                                          ((IData)(8U) 
                                                           - (IData)(vlSelfRef.IP_bytes_rcv))));
                if (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) 
                     & (IData)(vlSelfRef.axis_t_last))) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1 
                        = vlSelfRef.TCP__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1);
                    }
                    if ((vlSelfRef.TCP__DOT__seq_num_rx 
                         == vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next)) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nrcv_next 
                            = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                               + (IData)(vlSelfRef.IP_bytes_rcv));
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1 
                        = (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.IP_bytes_rcv)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1 
                        = vlSelfRef.TCP__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1 
                        = vlSelfRef.wr_FIFO_len;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                       & (((IData)(0x51U) 
                                                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                                                          >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
            }
        }
    }
    if (vlSelfRef.rd_FIFO_en_rcv) {
        if (((vlSelfRef.seq_rx_FIFO_rd == ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                            << 3U) 
                                           | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                              >> 0x1dU))) 
             & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                >> 0xcU))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x1eU] 
                = (0xffffefffU & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x1eU]);
        }
    }
    if (vlSelfRef.nw_segment) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_rx_trk 
            = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
               + (IData)(vlSelfRef.IP_bytes_rcv));
        if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                        >> 0x1dU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                                          << 0x12U) 
                                         | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                            >> 0xeU)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                        << 2U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x21U] 
                                                  >> 0x1eU)))))))) {
            if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                   >> 0x1dU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                                    << 0x12U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                                 >> 0xeU)))) 
                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                        << 0x12U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                     >> 0xeU))))) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                - ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                    << 0x12U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                                 >> 0xeU))));
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.wr_FIFO_offset = (0xffU & 
                                            VL_SHIFTL_III(8,8,8, (IData)(0xffU), (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
                if (vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0 
                        = vlSelfRef.TCP__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0 
                        = (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0 
                        = vlSelfRef.TCP__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0 
                        = vlSelfRef.wr_FIFO_len;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                       & (((IData)(0x51U) 
                                                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                                                          >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
                if ((vlSelfRef.TCP__DOT__seq_num_rx 
                     == vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next)) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nrcv_next 
                        = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                           + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left));
                }
            } else if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                          >> 0x1dU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                       < (0xffffU & 
                                          ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                            << 2U) 
                                           | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x21U] 
                                              >> 0x1eU))))) 
                        & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                            + (IData)(vlSelfRef.IP_bytes_rcv)) 
                           >= (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                           << 2U) | 
                                          (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x21U] 
                                           >> 0x1eU)))))) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                   << 0x12U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                                >> 0xeU)) 
                                 + (0xffffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                                << 2U) 
                                               | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x21U] 
                                                  >> 0x1eU)))) 
                                - vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk));
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_rx_trk 
                    = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                       + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left));
                vlSelfRef.wr_FIFO_offset = (0xffU & 
                                            VL_SHIFTR_III(8,8,8, 0xffU, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
            } else if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
                vlSelfRef.wr_FIFO_offset = (0xffU & 
                                            VL_SHIFTR_III(8,8,32, 0xffU, 
                                                          ((IData)(8U) 
                                                           - (IData)(vlSelfRef.IP_bytes_rcv))));
                if (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) 
                     & (IData)(vlSelfRef.axis_t_last))) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1 
                        = vlSelfRef.TCP__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1);
                    }
                    if ((vlSelfRef.TCP__DOT__seq_num_rx 
                         == vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next)) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nrcv_next 
                            = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                               + (IData)(vlSelfRef.IP_bytes_rcv));
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1 
                        = (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.IP_bytes_rcv)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1 
                        = vlSelfRef.TCP__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1 
                        = vlSelfRef.wr_FIFO_len;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                       & (((IData)(0x51U) 
                                                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                                                          >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
            }
        }
    }
    if (vlSelfRef.rd_FIFO_en_rcv) {
        if (((vlSelfRef.seq_rx_FIFO_rd == ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                                            << 0x12U) 
                                           | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                              >> 0xeU))) 
             & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                >> 0x1dU))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x20U] 
                = (0xdfffffffU & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x20U]);
        }
    }
    if (vlSelfRef.nw_segment) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_rx_trk 
            = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
               + (IData)(vlSelfRef.IP_bytes_rcv));
        if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                        >> 0xeU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                    >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                                         << 1U) | (
                                                   vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                                   >> 0x1fU)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                       >> 0xfU))))))) {
            if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                   >> 0xeU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                               < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                                   << 1U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                             >> 0x1fU)))) 
                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                        << 1U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                  >> 0x1fU))))) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                - ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                                    << 1U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                              >> 0x1fU))));
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.wr_FIFO_offset = (0xffU & 
                                            VL_SHIFTL_III(8,8,8, (IData)(0xffU), (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
                if (vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0 
                        = vlSelfRef.TCP__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0 
                        = (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0 
                        = vlSelfRef.TCP__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0 
                        = vlSelfRef.wr_FIFO_len;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                       & (((IData)(0x51U) 
                                                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                                                          >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
                if ((vlSelfRef.TCP__DOT__seq_num_rx 
                     == vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next)) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nrcv_next 
                        = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                           + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left));
                }
            } else if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                          >> 0xeU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                      < (0xffffU & 
                                         (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                          >> 0xfU)))) 
                        & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                            + (IData)(vlSelfRef.IP_bytes_rcv)) 
                           >= (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                          >> 0xfU))))) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                                   << 1U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                             >> 0x1fU)) 
                                 + (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                               >> 0xfU))) 
                                - vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk));
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_rx_trk 
                    = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                       + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left));
                vlSelfRef.wr_FIFO_offset = (0xffU & 
                                            VL_SHIFTR_III(8,8,8, 0xffU, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
            } else if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
                vlSelfRef.wr_FIFO_offset = (0xffU & 
                                            VL_SHIFTR_III(8,8,32, 0xffU, 
                                                          ((IData)(8U) 
                                                           - (IData)(vlSelfRef.IP_bytes_rcv))));
                if (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) 
                     & (IData)(vlSelfRef.axis_t_last))) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1 
                        = vlSelfRef.TCP__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1);
                    }
                    if ((vlSelfRef.TCP__DOT__seq_num_rx 
                         == vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next)) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nrcv_next 
                            = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                               + (IData)(vlSelfRef.IP_bytes_rcv));
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1 
                        = (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.IP_bytes_rcv)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1 
                        = vlSelfRef.TCP__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1 
                        = vlSelfRef.wr_FIFO_len;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                       & (((IData)(0x51U) 
                                                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                                                          >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
            }
        }
    }
    if (vlSelfRef.rd_FIFO_en_rcv) {
        if (((vlSelfRef.seq_rx_FIFO_rd == ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                                            << 1U) 
                                           | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                              >> 0x1fU))) 
             & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                >> 0xeU))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x23U] 
                = (0xffffbfffU & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x23U]);
        }
    }
    if (vlSelfRef.nw_segment) {
        vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_rx_trk 
            = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
               + (IData)(vlSelfRef.IP_bytes_rcv));
        if ((1U & (~ (((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                        >> 0x1fU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x28U] 
                                          << 0x10U) 
                                         | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x27U] 
                                            >> 0x10U)))) 
                      & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x27U])))))) {
            if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                   >> 0x1fU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x28U] 
                                    << 0x10U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x27U] 
                                                 >> 0x10U)))) 
                 & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x28U] 
                        << 0x10U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x27U] 
                                     >> 0x10U))))) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                - ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x27U] 
                                    << 0x10U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x27U] 
                                                 >> 0x10U))));
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.wr_FIFO_offset = (0xffU & 
                                            VL_SHIFTL_III(8,8,8, (IData)(0xffU), (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
                if (vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0 
                        = vlSelfRef.TCP__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0 
                        = (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0 
                        = vlSelfRef.TCP__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0 
                        = vlSelfRef.wr_FIFO_len;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                       & (((IData)(0x51U) 
                                                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                                                          >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
                if ((vlSelfRef.TCP__DOT__seq_num_rx 
                     == vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next)) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nrcv_next 
                        = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                           + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left));
                }
            } else if ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                          >> 0x1fU) & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                       < (0xffffU & 
                                          vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x27U]))) 
                        & ((vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                            + (IData)(vlSelfRef.IP_bytes_rcv)) 
                           >= (0xffffU & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x27U])))) {
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x27U] 
                                   << 0x10U) | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x27U] 
                                                >> 0x10U)) 
                                 + (0xffffU & vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x27U])) 
                                - vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk));
                vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_rx_trk 
                    = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                       + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_left));
                vlSelfRef.wr_FIFO_offset = (0xffU & 
                                            VL_SHIFTR_III(8,8,8, 0xffU, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__bytes_drop)));
            } else if ((1U & (~ (0U != (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__overlap_mask))))) {
                vlSelfRef.wr_FIFO_offset = (0xffU & 
                                            VL_SHIFTR_III(8,8,32, 0xffU, 
                                                          ((IData)(8U) 
                                                           - (IData)(vlSelfRef.IP_bytes_rcv))));
                if (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_mask) 
                     & (IData)(vlSelfRef.axis_t_last))) {
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1 
                        = vlSelfRef.TCP__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1);
                    }
                    if ((vlSelfRef.TCP__DOT__seq_num_rx 
                         == vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next)) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nrcv_next 
                            = (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                               + (IData)(vlSelfRef.IP_bytes_rcv));
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1 
                        = (0xffffU & (vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.IP_bytes_rcv)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1 
                        = vlSelfRef.TCP__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1 
                        = vlSelfRef.wr_FIFO_len;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1);
                    }
                    vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                       & (((IData)(0x51U) 
                                                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                                                          >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
            }
        }
    }
    if (vlSelfRef.rd_FIFO_en_rcv) {
        if (((vlSelfRef.seq_rx_FIFO_rd == ((vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x28U] 
                                            << 0x10U) 
                                           | (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x27U] 
                                              >> 0x10U))) 
             & (vlSelfRef.TCP__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                >> 0x1fU))) {
            vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x25U] 
                = (0x7fffffffU & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[0x25U]);
        }
    }
    vlSelfRef.TCP__DOT__tcp_flow__DOT__nstate = vlSelfRef.TCP__DOT__tcp_flow__DOT__state;
    vlSelfRef.TCP__DOT__tcp_flow__DOT__wnd_allow = 
        ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__window_size) 
         - ((vlSelfRef.seq_num + (IData)(vlSelfRef.bytes_abt_sent)) 
            - ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__ack_num) 
               - vlSelfRef.TCP__DOT__ISN_num)));
    vlSelfRef.TCP__DOT__inst__DOT__nTCP_checksum = vlSelfRef.TCP__DOT__inst__DOT__TCP_checksum;
    vlSelfRef.TCP__DOT__inst__DOT__nTCP_checksum_send 
        = vlSelfRef.TCP__DOT__inst__DOT__TCP_checksum_send;
    vlSelfRef.TCP__DOT__inst__DOT__nTCP_checksum_out = 0U;
    if (vlSelfRef.TCP__DOT__inst__DOT__up_send) {
        vlSelfRef.TCP__DOT__inst__DOT__nTCP_checksum_send = 0U;
        vlSelfRef.TCP__DOT__inst__DOT__nTCP_checksum_out 
            = (0xffffU & vlSelfRef.TCP__DOT__inst__DOT__TCP_checksum_send);
    }
    if (vlSelfRef.wr_FIFO_en) {
        vlSelfRef.TCP__DOT__inst__DOT__temp = (0xfffffU 
                                               & (((((0xffffU 
                                                      & vlSelfRef.TCP__DOT__inst__DOT__TCP_checksum) 
                                                     + 
                                                     (0xffffU 
                                                      & (IData)(vlSelfRef.rd_FIFO_payload))) 
                                                    + 
                                                    (0xffffU 
                                                     & (IData)(
                                                               (vlSelfRef.rd_FIFO_payload 
                                                                >> 0x10U)))) 
                                                   + 
                                                   (0xffffU 
                                                    & (IData)(
                                                              (vlSelfRef.rd_FIFO_payload 
                                                               >> 0x20U)))) 
                                                  + 
                                                  (0xffffU 
                                                   & (IData)(
                                                             (vlSelfRef.rd_FIFO_payload 
                                                              >> 0x30U)))));
        vlSelfRef.TCP__DOT__inst__DOT__temp = (0xfffffU 
                                               & ((0xffffU 
                                                   & vlSelfRef.TCP__DOT__inst__DOT__temp) 
                                                  + 
                                                  (0xfU 
                                                   & (vlSelfRef.TCP__DOT__inst__DOT__temp 
                                                      >> 0x10U))));
        vlSelfRef.TCP__DOT__inst__DOT__temp = (0xfffffU 
                                               & ((0xffffU 
                                                   & vlSelfRef.TCP__DOT__inst__DOT__temp) 
                                                  + 
                                                  (1U 
                                                   & (vlSelfRef.TCP__DOT__inst__DOT__temp 
                                                      >> 0x10U))));
        vlSelfRef.TCP__DOT__inst__DOT__nTCP_checksum 
            = (0x1ffffU & vlSelfRef.TCP__DOT__inst__DOT__temp);
        if (vlSelfRef.TCP__DOT__axis_last) {
            vlSelfRef.TCP__DOT__inst__DOT__temp1 = 
                (0xfffffU & ((0xffffU & vlSelfRef.TCP__DOT__inst__DOT__TCP_checksum_send) 
                             + (0xffffU & vlSelfRef.TCP__DOT__inst__DOT__nTCP_checksum)));
            vlSelfRef.TCP__DOT__inst__DOT__temp1 = 
                (0xfffffU & ((0xffffU & vlSelfRef.TCP__DOT__inst__DOT__temp1) 
                             + (0xfU & (vlSelfRef.TCP__DOT__inst__DOT__temp1 
                                        >> 0x10U))));
            vlSelfRef.TCP__DOT__inst__DOT__temp1 = 
                (0xfffffU & ((0xffffU & vlSelfRef.TCP__DOT__inst__DOT__temp1) 
                             + (1U & (vlSelfRef.TCP__DOT__inst__DOT__temp1 
                                      >> 0x10U))));
            if (vlSelfRef.TCP__DOT__inst__DOT__up_send) {
                vlSelfRef.TCP__DOT__inst__DOT__nTCP_checksum_send = 0U;
                vlSelfRef.TCP__DOT__inst__DOT__nTCP_checksum_out 
                    = (0xffffU & (0xffffU & vlSelfRef.TCP__DOT__inst__DOT__temp1));
            } else {
                vlSelfRef.TCP__DOT__inst__DOT__nTCP_checksum_send 
                    = (0x1ffffU & vlSelfRef.TCP__DOT__inst__DOT__temp1);
                vlSelfRef.TCP__DOT__inst__DOT__nTCP_checksum_out 
                    = (0xffffU & vlSelfRef.TCP__DOT__inst__DOT__TCP_checksum_send);
            }
            vlSelfRef.TCP__DOT__inst__DOT__nTCP_checksum = 0U;
        }
    }
    vlSelfRef.TCP_stop_flg = 0U;
    vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_num = vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_num;
    if ((1U & (~ ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__state) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__state) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__state) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__state) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__state) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__state))) {
                            if ((1U & (~ (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__state)))) {
                                if (vlSelfRef.TCP__DOT__seq_up) {
                                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nhand_shake_done = 1U;
                                }
                            }
                            if ((1U & (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__state))) {
                                if ((0U != vlSelfRef.TCP__DOT__tcp_flow__DOT__wnd_allow)) {
                                    if (vlSelfRef.TCP__DOT__seq_up) {
                                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_num 
                                            = ((0x100000000ULL 
                                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_num) 
                                               | (IData)((IData)(
                                                                 ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_num) 
                                                                  + (IData)(vlSelfRef.bytes_abt_sent)))));
                                    }
                                }
                                if (((IData)(vlSelfRef.TCP__DOT__rcv_data) 
                                     & ((vlSelfRef.TCP__DOT__seq_num_rx 
                                         + (IData)(vlSelfRef.TCP__DOT__payload_len_rx)) 
                                        >= vlSelfRef.TCP__DOT__tcp_flow__DOT__rcv_next))) {
                                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nwindow_size 
                                        = vlSelfRef.TCP__DOT__window_size_rx;
                                    if (((vlSelfRef.TCP__DOT__ACK_rx 
                                          == (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__ack_num)) 
                                         & ((IData)(vlSelfRef.TCP__DOT__TCP_control_rx) 
                                            >> 4U))) {
                                        if ((3U == 
                                             (7U & (IData)(
                                                           (vlSelfRef.TCP__DOT__tcp_flow__DOT__ack_num 
                                                            >> 0x20U))))) {
                                            vlSelfRef.out_order_req = 1U;
                                            vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_num 
                                                = (
                                                   (0x100000000ULL 
                                                    & vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_num) 
                                                   | (IData)((IData)(vlSelfRef.TCP__DOT__ACK_rx)));
                                        }
                                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nack_num 
                                            = ((0xffffffffULL 
                                                & vlSelfRef.TCP__DOT__tcp_flow__DOT__nack_num) 
                                               | ((QData)((IData)(
                                                                  ((3U 
                                                                    == 
                                                                    (7U 
                                                                     & (IData)(
                                                                               (vlSelfRef.TCP__DOT__tcp_flow__DOT__ack_num 
                                                                                >> 0x20U))))
                                                                    ? 0U
                                                                    : 
                                                                   (7U 
                                                                    & ((IData)(1U) 
                                                                       + (IData)(
                                                                                (vlSelfRef.TCP__DOT__tcp_flow__DOT__ack_num 
                                                                                >> 0x20U))))))) 
                                                  << 0x20U));
                                    } else if ((((IData)(vlSelfRef.TCP__DOT__TCP_control_rx) 
                                                 >> 4U) 
                                                & (vlSelfRef.TCP__DOT__ACK_rx 
                                                   > (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__ack_num)))) {
                                        vlSelfRef.TCP__DOT__tcp_flow__DOT__nack_num 
                                            = (QData)((IData)(vlSelfRef.TCP__DOT__ACK_rx));
                                    }
                                }
                            }
                        } else {
                            if ((1U & (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__state))) {
                                if (((IData)(vlSelfRef.TCP__DOT__rcv_data) 
                                     & (0x12U == (0x12U 
                                                  & (IData)(vlSelfRef.TCP__DOT__TCP_control_rx))))) {
                                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nwindow_size 
                                        = vlSelfRef.TCP__DOT__window_size_rx;
                                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nack_num 
                                        = ((0x700000000ULL 
                                            & vlSelfRef.TCP__DOT__tcp_flow__DOT__nack_num) 
                                           | (IData)((IData)(vlSelfRef.TCP__DOT__ACK_rx)));
                                }
                            }
                            if ((1U & (~ (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__state)))) {
                                vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_num 
                                    = (0x100000000ULL 
                                       & vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_num);
                                if (vlSelfRef.TCP__DOT__seq_up) {
                                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_num 
                                        = ((0x100000000ULL 
                                            & vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_num) 
                                           | (IData)((IData)(
                                                             ((IData)(1U) 
                                                              + (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__seq_num)))));
                                }
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__state) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__state))) {
                                if (((IData)(vlSelfRef.TCP__DOT__rcv_data) 
                                     & (0x12U == (0x12U 
                                                  & (IData)(vlSelfRef.TCP__DOT__TCP_control_rx))))) {
                                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nseq_rcv_str 
                                        = ((IData)(1U) 
                                           + vlSelfRef.TCP__DOT__seq_num_rx);
                                }
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__state))) {
                        if ((1U & (~ ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__state) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__state)))) {
                                vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h9a2cf0a4__0 = 0U;
                                if ((0x50fU >= (0x7ffU 
                                                & ((IData)(0x51U) 
                                                   * 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_list 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_ptr), 2U))))))))) {
                                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                                & (((IData)(0x51U) 
                                                                                * 
                                                                                (0xfU 
                                                                                & (IData)(
                                                                                (vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_list 
                                                                                >> 
                                                                                (0x3fU 
                                                                                & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_ptr), 2U)))))) 
                                                                                >> 5U))] 
                                        = (((~ ((IData)(1U) 
                                                << 
                                                (0x1fU 
                                                 & ((IData)(0x51U) 
                                                    * 
                                                    (0xfU 
                                                     & (IData)(
                                                               (vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_list 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_ptr), 2U))))))))) 
                                            & vlSelfRef.TCP__DOT__tcp_flow__DOT__nTCP_order[
                                            (0x3fU 
                                             & (((IData)(0x51U) 
                                                 * 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_list 
                                                             >> 
                                                             (0x3fU 
                                                              & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_ptr), 2U)))))) 
                                                >> 5U))]) 
                                           | ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT____Vlvbound_h9a2cf0a4__0) 
                                              << (0x1fU 
                                                  & ((IData)(0x51U) 
                                                     * 
                                                     (0xfU 
                                                      & (IData)(
                                                                (vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_list 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_ptr), 2U)))))))));
                                }
                            }
                        }
                        if ((2U & (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__state))) {
                            if ((1U & (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__state))) {
                                if ((0x10U & (IData)(vlSelfRef.TCP__DOT__TCP_control_rx))) {
                                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nstate = 0U;
                                }
                            } else if ((1U & (IData)(vlSelfRef.TCP__DOT__TCP_control_rx))) {
                                vlSelfRef.TCP__DOT__tcp_flow__DOT__nstate = 7U;
                            }
                            if ((1U & (~ (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__state)))) {
                                vlSelfRef.TCP_stop_flg = 0U;
                            }
                        } else if ((1U & (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__state))) {
                            if ((0x10U & (IData)(vlSelfRef.TCP__DOT__TCP_control_rx))) {
                                vlSelfRef.TCP__DOT__tcp_flow__DOT__nstate = 6U;
                            }
                        } else if (((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__flush_ptr) 
                                    >= (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__len_flush_ptr))) {
                            vlSelfRef.TCP__DOT__tcp_flow__DOT__nstate = 3U;
                        }
                    } else {
                        if ((1U & (~ ((IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__state) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__state))) {
                                if (((IData)(vlSelfRef.TCP__DOT__rcv_data) 
                                     & (0x12U == (0x12U 
                                                  & (IData)(vlSelfRef.TCP__DOT__TCP_control_rx))))) {
                                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nrcv_next 
                                        = ((IData)(1U) 
                                           + vlSelfRef.TCP__DOT__seq_num_rx);
                                }
                            }
                        }
                        if ((2U & (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__state))) {
                            if ((1U & (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__state))) {
                                if (vlSelfRef.TCP_flush) {
                                    vlSelfRef.TCP__DOT__tcp_flow__DOT__nstate = 4U;
                                }
                                vlSelfRef.TCP_stop_flg 
                                    = (1U & (~ (0U 
                                                != vlSelfRef.TCP__DOT__tcp_flow__DOT__wnd_allow)));
                            } else if (vlSelfRef.TCP__DOT__seq_up) {
                                vlSelfRef.TCP__DOT__tcp_flow__DOT__nstate = 3U;
                            }
                        } else if ((1U & (IData)(vlSelfRef.TCP__DOT__tcp_flow__DOT__state))) {
                            if (((IData)(vlSelfRef.TCP__DOT__rcv_data) 
                                 & (0x12U == (0x12U 
                                              & (IData)(vlSelfRef.TCP__DOT__TCP_control_rx))))) {
                                vlSelfRef.TCP__DOT__tcp_flow__DOT__nstate = 2U;
                            } else if (vlSelfRef.TCP__DOT__timeout_flag) {
                                vlSelfRef.TCP__DOT__tcp_flow__DOT__nstate = 0U;
                            }
                            vlSelfRef.TCP_stop_flg = 1U;
                        } else if (vlSelfRef.TCP__DOT__seq_up) {
                            vlSelfRef.TCP__DOT__tcp_flow__DOT__nstate = 1U;
                        }
                    }
                }
            }
        }
    }
}
