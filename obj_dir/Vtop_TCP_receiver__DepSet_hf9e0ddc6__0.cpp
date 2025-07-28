// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_TCP_receiver.h"

VL_INLINE_OPT void Vtop_TCP_receiver___ico_sequent__TOP__top__u_tcp__tcp_rcv__0(Vtop_TCP_receiver* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_TCP_receiver___ico_sequent__TOP__top__u_tcp__tcp_rcv__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtemp_1;
    IData/*31:0*/ __Vtemp_2;
    IData/*31:0*/ __Vtemp_3;
    IData/*31:0*/ __Vtemp_4;
    IData/*31:0*/ __Vtemp_5;
    IData/*31:0*/ __Vtemp_6;
    IData/*31:0*/ __Vtemp_7;
    IData/*31:0*/ __Vtemp_8;
    // Body
    vlSelfRef.__PVT__TCP_checksum_comp = (0xffffU & 
                                          (~ VL_SEL_IIII(17, vlSelfRef.__PVT__TCP_checksum, 0U, 0x10U)));
    vlSelfRef.__PVT__n_nw_segment = vlSelfRef.__PVT__nw_segment;
    vlSelfRef.__PVT__nTCP_last = vlSelfRef.__PVT__TCP_last;
    vlSelfRef.__PVT__nstate = vlSelfRef.__PVT__state;
    vlSelfRef.__PVT__nbytes_trk = 0U;
    vlSelfRef.__PVT__nbytes_rcv = vlSelfRef.__PVT__bytes_rcv;
    vlSelfRef.__PVT__nTCP_checksum = vlSelfRef.__PVT__TCP_checksum;
    vlSelfRef.__PVT__nTCP_len_data = vlSelfRef.__PVT__TCP_len_data;
    vlSelfRef.__PVT__nTCP_payload_rx = vlSelfRef.__PVT__TCP_payload_rx;
    vlSelfRef.__PVT__nTCP_valid = vlSelfRef.__PVT__TCP_valid;
    vlSelfRef.__PVT__nTCP_control_rx = vlSelfRef.__PVT__TCP_control_rx;
    vlSelfRef.__PVT__nseq_num_rx = vlSelfRef.__PVT__seq_num_rx;
    vlSelfRef.__PVT__nACK_rx = vlSelfRef.__PVT__ACK_rx;
    vlSelfRef.__PVT__noffset_rx = vlSelfRef.__PVT__offset_rx;
    vlSelfRef.__PVT__nwindow_size_rx = vlSelfRef.__PVT__window_size_rx;
    vlSelfRef.__PVT__nchecksum_rx = vlSelfRef.__PVT__checksum_rx;
    vlSelfRef.__PVT__nurgent_pointer_rx = vlSelfRef.__PVT__urgent_pointer_rx;
    vlSelfRef.__PVT__nrcv_data = 0U;
    vlSelfRef.__PVT__TCP_flush = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__state))) {
        if ((((IData)(vlSelfRef.__PVT__valid_IP_header_rx) 
              & (0x1234U == (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x30U, 0x10U)))) 
             & (0x5678U == (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x20U, 0x10U))))) {
            VL_ASSIGNSEL_II(32,16,0x10U, vlSelfRef.__PVT__nseq_num_rx, 
                            (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x10U, 0x10U)));
            vlSelfRef.__PVT__nstate = 1U;
            vlSelfRef.__PVT__temp = (0xfffffU & (((
                                                   (VL_EXTEND_II(20,16, 
                                                                 (0xffffU 
                                                                  & VL_SEL_IIII(17, vlSelfRef.__PVT__TCP_checksum, 0U, 0x10U))) 
                                                    + 
                                                    VL_EXTEND_II(20,16, 
                                                                 (0xffffU 
                                                                  & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x30U, 0x10U)))) 
                                                   + 
                                                   VL_EXTEND_II(20,16, 
                                                                (0xffffU 
                                                                 & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x20U, 0x10U)))) 
                                                  + 
                                                  VL_EXTEND_II(20,16, 
                                                               (0xffffU 
                                                                & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x10U, 0x10U)))) 
                                                 + 
                                                 VL_EXTEND_II(20,16, (IData)(vlSelfRef.__PVT__IP_pseuder))));
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
        } else if (vlSelfRef.__PVT__valid_IP_header_rx) {
            vlSelfRef.__PVT__nstate = 5U;
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__state))) {
        VL_ASSIGNSEL_II(32,16,0U, vlSelfRef.__PVT__nseq_num_rx, 
                        (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x30U, 0x10U)));
        vlSelfRef.__PVT__nACK_rx = VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x10U, 0x20U);
        vlSelfRef.__PVT__noffset_rx = (0xfU & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0xcU, 4U));
        vlSelfRef.__PVT__nTCP_control_rx = (0xffU & 
                                            VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0U, 8U));
        vlSelfRef.__PVT__temp = (0xfffffU & ((((VL_EXTEND_II(20,16, 
                                                             (0xffffU 
                                                              & VL_SEL_IIII(17, vlSelfRef.__PVT__TCP_checksum, 0U, 0x10U))) 
                                                + VL_EXTEND_II(20,16, 
                                                               (0xffffU 
                                                                & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x30U, 0x10U)))) 
                                               + VL_EXTEND_II(20,16, 
                                                              (0xffffU 
                                                               & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x20U, 0x10U)))) 
                                              + VL_EXTEND_II(20,16, 
                                                             (0xffffU 
                                                              & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x10U, 0x10U)))) 
                                             + VL_EXTEND_II(20,16, 
                                                            (0xffffU 
                                                             & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0U, 0x10U)))));
        __Vtemp_3 = (0xfffffU & (VL_EXTEND_II(20,16, 
                                              (0xffffU 
                                               & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x10U))) 
                                 + VL_EXTEND_II(20,4, 
                                                (0xfU 
                                                 & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0x10U, 4U)))));
        vlSelfRef.__PVT__temp = __Vtemp_3;
        __Vtemp_4 = (0xfffffU & (VL_EXTEND_II(20,16, 
                                              (0xffffU 
                                               & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x10U))) 
                                 + VL_EXTEND_II(20,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(20, vlSelfRef.__PVT__temp, 0x10U)))));
        vlSelfRef.__PVT__temp = __Vtemp_4;
        vlSelfRef.__PVT__nTCP_checksum = (0x1ffffU 
                                          & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x11U));
        vlSelfRef.__PVT__nstate = 2U;
    } else if ((2U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__nwindow_size_rx = (0xffffU 
                                            & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x30U, 0x10U));
        vlSelfRef.__PVT__nchecksum_rx = (0xffffU & 
                                         VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x20U, 0x10U));
        vlSelfRef.__PVT__nurgent_pointer_rx = (0xffffU 
                                               & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x10U, 0x10U));
        vlSelfRef.__PVT__temp = (0xfffffU & (((VL_EXTEND_II(20,16, 
                                                            (0xffffU 
                                                             & VL_SEL_IIII(17, vlSelfRef.__PVT__TCP_checksum, 0U, 0x10U))) 
                                               + VL_EXTEND_II(20,16, 
                                                              (0xffffU 
                                                               & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x30U, 0x10U)))) 
                                              + VL_EXTEND_II(20,16, 
                                                             (0xffffU 
                                                              & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x10U, 0x10U)))) 
                                             + VL_EXTEND_II(20,16, 
                                                            (0xffffU 
                                                             & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0U, 0x10U)))));
        __Vtemp_5 = (0xfffffU & (VL_EXTEND_II(20,16, 
                                              (0xffffU 
                                               & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x10U))) 
                                 + VL_EXTEND_II(20,4, 
                                                (0xfU 
                                                 & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0x10U, 4U)))));
        vlSelfRef.__PVT__temp = __Vtemp_5;
        __Vtemp_6 = (0xfffffU & (VL_EXTEND_II(20,16, 
                                              (0xffffU 
                                               & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x10U))) 
                                 + VL_EXTEND_II(20,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(20, vlSelfRef.__PVT__temp, 0x10U)))));
        vlSelfRef.__PVT__temp = __Vtemp_6;
        vlSelfRef.__PVT__nTCP_checksum = (0x1ffffU 
                                          & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x11U));
        if (VL_REDOR_I((IData)(vlSelfRef.__PVT__TCP_len))) {
            vlSelfRef.__PVT__nbytes_trk = (0xffffU 
                                           & ((IData)(2U) 
                                              + (IData)(vlSelfRef.__PVT__bytes_trk)));
            vlSelfRef.__PVT__nTCP_valid = 1U;
            vlSelfRef.__PVT__n_nw_segment = 1U;
            vlSelfRef.__PVT__nbytes_rcv = 2U;
            vlSelfRef.__PVT__nTCP_payload_rx = VL_EXTEND_QI(64,16, 
                                                            (0xffffU 
                                                             & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0U, 0x10U)));
            vlSelfRef.__PVT__nstate = 3U;
        } else {
            vlSelfRef.__PVT__nstate = 4U;
        }
    } else if ((3U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__n_nw_segment = 1U;
        vlSelfRef.__PVT__nbytes_rcv = 8U;
        vlSelfRef.__PVT__nbytes_trk = (0xffffU & ((IData)(8U) 
                                                  + (IData)(vlSelfRef.__PVT__bytes_trk)));
        vlSelfRef.__PVT__temp = (0xfffffU & ((((VL_EXTEND_II(20,16, 
                                                             (0xffffU 
                                                              & VL_SEL_IIII(17, vlSelfRef.__PVT__TCP_checksum, 0U, 0x10U))) 
                                                + VL_EXTEND_II(20,16, 
                                                               (0xffffU 
                                                                & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x30U, 0x10U)))) 
                                               + VL_EXTEND_II(20,16, 
                                                              (0xffffU 
                                                               & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x20U, 0x10U)))) 
                                              + VL_EXTEND_II(20,16, 
                                                             (0xffffU 
                                                              & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x10U, 0x10U)))) 
                                             + VL_EXTEND_II(20,16, 
                                                            (0xffffU 
                                                             & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0U, 0x10U)))));
        __Vtemp_7 = (0xfffffU & (VL_EXTEND_II(20,16, 
                                              (0xffffU 
                                               & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x10U))) 
                                 + VL_EXTEND_II(20,4, 
                                                (0xfU 
                                                 & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0x10U, 4U)))));
        vlSelfRef.__PVT__temp = __Vtemp_7;
        __Vtemp_8 = (0xfffffU & (VL_EXTEND_II(20,16, 
                                              (0xffffU 
                                               & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x10U))) 
                                 + VL_EXTEND_II(20,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(20, vlSelfRef.__PVT__temp, 0x10U)))));
        vlSelfRef.__PVT__temp = __Vtemp_8;
        vlSelfRef.__PVT__nTCP_checksum = (0x1ffffU 
                                          & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x11U));
        vlSelfRef.__PVT__nTCP_payload_rx = vlSelfRef.__PVT__IP_payload_rx;
        if ((((IData)(8U) + VL_EXTEND_II(32,16, (IData)(vlSelfRef.__PVT__bytes_trk))) 
             < VL_EXTEND_II(32,16, (IData)(vlSelfRef.__PVT__TCP_len_data)))) {
            vlSelfRef.__PVT__nbytes_trk = (0xffffU 
                                           & ((IData)(8U) 
                                              + (IData)(vlSelfRef.__PVT__bytes_trk)));
        } else {
            vlSelfRef.__PVT__nbytes_trk = (0xffffU 
                                           & ((IData)(vlSelfRef.__PVT__bytes_trk) 
                                              + (((IData)(8U) 
                                                  + (IData)(vlSelfRef.__PVT__bytes_trk)) 
                                                 - (IData)(vlSelfRef.__PVT__TCP_len_data))));
            vlSelfRef.__PVT__nTCP_valid = 0U;
            vlSelfRef.__PVT__nTCP_last = 1U;
            vlSelfRef.__PVT__n_nw_segment = 1U;
            vlSelfRef.__PVT__nstate = 4U;
        }
    } else if ((4U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__n_nw_segment = 0U;
        vlSelfRef.__PVT__nTCP_last = 0U;
        vlSelfRef.__PVT__TCP_checksum_comp = (0xffffU 
                                              & (~ 
                                                 VL_SEL_IIII(17, vlSelfRef.__PVT__TCP_checksum, 0U, 0x10U)));
        if (((IData)(vlSelfRef.__PVT__TCP_checksum_comp) 
             == (IData)(vlSelfRef.__PVT__checksum_rx))) {
            vlSelfRef.__PVT__nrcv_data = 1U;
            vlSelfRef.__PVT__nstate = 0U;
            vlSelfRef.__PVT__nTCP_checksum = 0U;
        } else {
            vlSelfRef.__PVT__nstate = 5U;
        }
    } else if ((5U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__TCP_flush = 1U;
        if ((1U & (~ (IData)(vlSelfRef.__PVT__valid_IP_header_rx)))) {
            vlSelfRef.__PVT__nstate = 5U;
        }
    }
}

VL_INLINE_OPT void Vtop_TCP_receiver___nba_sequent__TOP__top__u_tcp__tcp_rcv__0(Vtop_TCP_receiver* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_TCP_receiver___nba_sequent__TOP__top__u_tcp__tcp_rcv__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtemp_1;
    IData/*31:0*/ __Vtemp_2;
    IData/*31:0*/ __Vtemp_3;
    IData/*31:0*/ __Vtemp_4;
    IData/*31:0*/ __Vtemp_5;
    IData/*31:0*/ __Vtemp_6;
    IData/*31:0*/ __Vtemp_7;
    IData/*31:0*/ __Vtemp_8;
    // Body
    vlSelfRef.__Vdly__state = vlSelfRef.__PVT__state;
    vlSelfRef.__Vdly__TCP_checksum = vlSelfRef.__PVT__TCP_checksum;
    vlSelfRef.__Vdly__bytes_trk = vlSelfRef.__PVT__bytes_trk;
    vlSelfRef.__Vdly__TCP_valid = vlSelfRef.__PVT__TCP_valid;
    vlSelfRef.__Vdly__offset_rx = vlSelfRef.__PVT__offset_rx;
    vlSelfRef.__Vdly__checksum_rx = vlSelfRef.__PVT__checksum_rx;
    vlSelfRef.__Vdly__urgent_pointer_rx = vlSelfRef.__PVT__urgent_pointer_rx;
    vlSelfRef.__Vdly__rcv_data = vlSelfRef.__PVT__rcv_data;
    vlSelfRef.__Vdly__TCP_payload_rx = vlSelfRef.__PVT__TCP_payload_rx;
    vlSelfRef.__Vdly__seq_num_rx = vlSelfRef.__PVT__seq_num_rx;
    vlSelfRef.__Vdly__window_size_rx = vlSelfRef.__PVT__window_size_rx;
    vlSelfRef.__Vdly__TCP_len_data = vlSelfRef.__PVT__TCP_len_data;
    vlSelfRef.__Vdly__TCP_last = vlSelfRef.__PVT__TCP_last;
    vlSelfRef.__Vdly__nw_segment = vlSelfRef.__PVT__nw_segment;
    vlSelfRef.__Vdly__ACK_rx = vlSelfRef.__PVT__ACK_rx;
    vlSelfRef.__Vdly__TCP_control_rx = vlSelfRef.__PVT__TCP_control_rx;
    vlSelfRef.__Vdly__bytes_rcv = vlSelfRef.__PVT__bytes_rcv;
    if (vlSelfRef.__PVT__nRST) {
        if (vlSelfRef.__PVT__IP_flush) {
            vlSelfRef.__Vdly__state = 0U;
            vlSelfRef.__Vdly__TCP_control_rx = 0U;
            vlSelfRef.__Vdly__seq_num_rx = 0U;
            vlSelfRef.__Vdly__ACK_rx = 0U;
            vlSelfRef.__Vdly__offset_rx = 0U;
            vlSelfRef.__Vdly__window_size_rx = 0U;
            vlSelfRef.__Vdly__checksum_rx = 0U;
            vlSelfRef.__Vdly__urgent_pointer_rx = 0U;
            vlSelfRef.__Vdly__TCP_len_data = 0U;
            vlSelfRef.__Vdly__TCP_payload_rx = 0ULL;
            vlSelfRef.__Vdly__TCP_valid = 0U;
            vlSelfRef.__Vdly__rcv_data = 0U;
            vlSelfRef.__Vdly__TCP_checksum = 0U;
            vlSelfRef.__Vdly__bytes_trk = 0U;
            vlSelfRef.__Vdly__nw_segment = 0U;
            vlSelfRef.__Vdly__TCP_last = 0U;
            vlSelfRef.__Vdly__bytes_rcv = 0U;
        } else {
            vlSelfRef.__Vdly__state = vlSelfRef.__PVT__nstate;
            vlSelfRef.__Vdly__TCP_control_rx = vlSelfRef.__PVT__nTCP_control_rx;
            vlSelfRef.__Vdly__seq_num_rx = vlSelfRef.__PVT__nseq_num_rx;
            vlSelfRef.__Vdly__ACK_rx = vlSelfRef.__PVT__nACK_rx;
            vlSelfRef.__Vdly__offset_rx = vlSelfRef.__PVT__noffset_rx;
            vlSelfRef.__Vdly__window_size_rx = vlSelfRef.__PVT__nwindow_size_rx;
            vlSelfRef.__Vdly__checksum_rx = vlSelfRef.__PVT__nchecksum_rx;
            vlSelfRef.__Vdly__urgent_pointer_rx = vlSelfRef.__PVT__nurgent_pointer_rx;
            vlSelfRef.__Vdly__TCP_len_data = vlSelfRef.__PVT__TCP_len;
            vlSelfRef.__Vdly__TCP_checksum = vlSelfRef.__PVT__nTCP_checksum;
            vlSelfRef.__Vdly__TCP_payload_rx = vlSelfRef.__PVT__nTCP_payload_rx;
            vlSelfRef.__Vdly__TCP_valid = vlSelfRef.__PVT__nTCP_valid;
            vlSelfRef.__Vdly__rcv_data = vlSelfRef.__PVT__nrcv_data;
            vlSelfRef.__Vdly__bytes_trk = vlSelfRef.__PVT__nbytes_trk;
            vlSelfRef.__Vdly__bytes_rcv = vlSelfRef.__PVT__nbytes_rcv;
            vlSelfRef.__Vdly__nw_segment = vlSelfRef.__PVT__n_nw_segment;
            vlSelfRef.__Vdly__TCP_last = vlSelfRef.__PVT__nTCP_last;
        }
    } else {
        vlSelfRef.__Vdly__state = 0U;
        vlSelfRef.__Vdly__TCP_control_rx = 0U;
        vlSelfRef.__Vdly__seq_num_rx = 0U;
        vlSelfRef.__Vdly__ACK_rx = 0U;
        vlSelfRef.__Vdly__offset_rx = 0U;
        vlSelfRef.__Vdly__window_size_rx = 0U;
        vlSelfRef.__Vdly__checksum_rx = 0U;
        vlSelfRef.__Vdly__urgent_pointer_rx = 0U;
        vlSelfRef.__Vdly__TCP_len_data = 0U;
        vlSelfRef.__Vdly__TCP_payload_rx = 0ULL;
        vlSelfRef.__Vdly__TCP_valid = 0U;
        vlSelfRef.__Vdly__rcv_data = 0U;
        vlSelfRef.__Vdly__TCP_checksum = 0U;
        vlSelfRef.__Vdly__bytes_trk = 0U;
        vlSelfRef.__Vdly__bytes_rcv = 0U;
        vlSelfRef.__Vdly__nw_segment = 0U;
        vlSelfRef.__Vdly__TCP_last = 0U;
    }
    vlSelfRef.__PVT__state = vlSelfRef.__Vdly__state;
    vlSelfRef.__PVT__TCP_checksum = vlSelfRef.__Vdly__TCP_checksum;
    vlSelfRef.__PVT__bytes_trk = vlSelfRef.__Vdly__bytes_trk;
    vlSelfRef.__PVT__TCP_valid = vlSelfRef.__Vdly__TCP_valid;
    vlSelfRef.__PVT__offset_rx = vlSelfRef.__Vdly__offset_rx;
    vlSelfRef.__PVT__checksum_rx = vlSelfRef.__Vdly__checksum_rx;
    vlSelfRef.__PVT__urgent_pointer_rx = vlSelfRef.__Vdly__urgent_pointer_rx;
    vlSelfRef.__PVT__rcv_data = vlSelfRef.__Vdly__rcv_data;
    vlSelfRef.__PVT__TCP_payload_rx = vlSelfRef.__Vdly__TCP_payload_rx;
    vlSelfRef.__PVT__seq_num_rx = vlSelfRef.__Vdly__seq_num_rx;
    vlSelfRef.__PVT__window_size_rx = vlSelfRef.__Vdly__window_size_rx;
    vlSelfRef.__PVT__TCP_len_data = vlSelfRef.__Vdly__TCP_len_data;
    vlSelfRef.__PVT__TCP_last = vlSelfRef.__Vdly__TCP_last;
    vlSelfRef.__PVT__nw_segment = vlSelfRef.__Vdly__nw_segment;
    vlSelfRef.__PVT__ACK_rx = vlSelfRef.__Vdly__ACK_rx;
    vlSelfRef.__PVT__TCP_control_rx = vlSelfRef.__Vdly__TCP_control_rx;
    vlSelfRef.__PVT__bytes_rcv = vlSelfRef.__Vdly__bytes_rcv;
    vlSelfRef.__PVT__TCP_checksum_comp = (0xffffU & 
                                          (~ VL_SEL_IIII(17, vlSelfRef.__PVT__TCP_checksum, 0U, 0x10U)));
    vlSelfRef.__PVT__n_nw_segment = vlSelfRef.__PVT__nw_segment;
    vlSelfRef.__PVT__nTCP_last = vlSelfRef.__PVT__TCP_last;
    vlSelfRef.__PVT__nstate = vlSelfRef.__PVT__state;
    vlSelfRef.__PVT__nbytes_trk = 0U;
    vlSelfRef.__PVT__nbytes_rcv = vlSelfRef.__PVT__bytes_rcv;
    vlSelfRef.__PVT__nTCP_checksum = vlSelfRef.__PVT__TCP_checksum;
    vlSelfRef.__PVT__nTCP_len_data = vlSelfRef.__PVT__TCP_len_data;
    vlSelfRef.__PVT__nTCP_payload_rx = vlSelfRef.__PVT__TCP_payload_rx;
    vlSelfRef.__PVT__nTCP_valid = vlSelfRef.__PVT__TCP_valid;
    vlSelfRef.__PVT__nTCP_control_rx = vlSelfRef.__PVT__TCP_control_rx;
    vlSelfRef.__PVT__nseq_num_rx = vlSelfRef.__PVT__seq_num_rx;
    vlSelfRef.__PVT__nACK_rx = vlSelfRef.__PVT__ACK_rx;
    vlSelfRef.__PVT__noffset_rx = vlSelfRef.__PVT__offset_rx;
    vlSelfRef.__PVT__nwindow_size_rx = vlSelfRef.__PVT__window_size_rx;
    vlSelfRef.__PVT__nchecksum_rx = vlSelfRef.__PVT__checksum_rx;
    vlSelfRef.__PVT__nurgent_pointer_rx = vlSelfRef.__PVT__urgent_pointer_rx;
    vlSelfRef.__PVT__nrcv_data = 0U;
    vlSelfRef.__PVT__TCP_flush = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__state))) {
        if ((((IData)(vlSelfRef.__PVT__valid_IP_header_rx) 
              & (0x1234U == (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x30U, 0x10U)))) 
             & (0x5678U == (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x20U, 0x10U))))) {
            VL_ASSIGNSEL_II(32,16,0x10U, vlSelfRef.__PVT__nseq_num_rx, 
                            (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x10U, 0x10U)));
            vlSelfRef.__PVT__nstate = 1U;
            vlSelfRef.__PVT__temp = (0xfffffU & (((
                                                   (VL_EXTEND_II(20,16, 
                                                                 (0xffffU 
                                                                  & VL_SEL_IIII(17, vlSelfRef.__PVT__TCP_checksum, 0U, 0x10U))) 
                                                    + 
                                                    VL_EXTEND_II(20,16, 
                                                                 (0xffffU 
                                                                  & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x30U, 0x10U)))) 
                                                   + 
                                                   VL_EXTEND_II(20,16, 
                                                                (0xffffU 
                                                                 & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x20U, 0x10U)))) 
                                                  + 
                                                  VL_EXTEND_II(20,16, 
                                                               (0xffffU 
                                                                & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x10U, 0x10U)))) 
                                                 + 
                                                 VL_EXTEND_II(20,16, (IData)(vlSelfRef.__PVT__IP_pseuder))));
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
        } else if (vlSelfRef.__PVT__valid_IP_header_rx) {
            vlSelfRef.__PVT__nstate = 5U;
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__state))) {
        VL_ASSIGNSEL_II(32,16,0U, vlSelfRef.__PVT__nseq_num_rx, 
                        (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x30U, 0x10U)));
        vlSelfRef.__PVT__nACK_rx = VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x10U, 0x20U);
        vlSelfRef.__PVT__noffset_rx = (0xfU & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0xcU, 4U));
        vlSelfRef.__PVT__nTCP_control_rx = (0xffU & 
                                            VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0U, 8U));
        vlSelfRef.__PVT__temp = (0xfffffU & ((((VL_EXTEND_II(20,16, 
                                                             (0xffffU 
                                                              & VL_SEL_IIII(17, vlSelfRef.__PVT__TCP_checksum, 0U, 0x10U))) 
                                                + VL_EXTEND_II(20,16, 
                                                               (0xffffU 
                                                                & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x30U, 0x10U)))) 
                                               + VL_EXTEND_II(20,16, 
                                                              (0xffffU 
                                                               & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x20U, 0x10U)))) 
                                              + VL_EXTEND_II(20,16, 
                                                             (0xffffU 
                                                              & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x10U, 0x10U)))) 
                                             + VL_EXTEND_II(20,16, 
                                                            (0xffffU 
                                                             & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0U, 0x10U)))));
        __Vtemp_3 = (0xfffffU & (VL_EXTEND_II(20,16, 
                                              (0xffffU 
                                               & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x10U))) 
                                 + VL_EXTEND_II(20,4, 
                                                (0xfU 
                                                 & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0x10U, 4U)))));
        vlSelfRef.__PVT__temp = __Vtemp_3;
        __Vtemp_4 = (0xfffffU & (VL_EXTEND_II(20,16, 
                                              (0xffffU 
                                               & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x10U))) 
                                 + VL_EXTEND_II(20,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(20, vlSelfRef.__PVT__temp, 0x10U)))));
        vlSelfRef.__PVT__temp = __Vtemp_4;
        vlSelfRef.__PVT__nTCP_checksum = (0x1ffffU 
                                          & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x11U));
        vlSelfRef.__PVT__nstate = 2U;
    } else if ((2U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__nwindow_size_rx = (0xffffU 
                                            & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x30U, 0x10U));
        vlSelfRef.__PVT__nchecksum_rx = (0xffffU & 
                                         VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x20U, 0x10U));
        vlSelfRef.__PVT__nurgent_pointer_rx = (0xffffU 
                                               & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x10U, 0x10U));
        vlSelfRef.__PVT__temp = (0xfffffU & (((VL_EXTEND_II(20,16, 
                                                            (0xffffU 
                                                             & VL_SEL_IIII(17, vlSelfRef.__PVT__TCP_checksum, 0U, 0x10U))) 
                                               + VL_EXTEND_II(20,16, 
                                                              (0xffffU 
                                                               & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x30U, 0x10U)))) 
                                              + VL_EXTEND_II(20,16, 
                                                             (0xffffU 
                                                              & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x10U, 0x10U)))) 
                                             + VL_EXTEND_II(20,16, 
                                                            (0xffffU 
                                                             & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0U, 0x10U)))));
        __Vtemp_5 = (0xfffffU & (VL_EXTEND_II(20,16, 
                                              (0xffffU 
                                               & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x10U))) 
                                 + VL_EXTEND_II(20,4, 
                                                (0xfU 
                                                 & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0x10U, 4U)))));
        vlSelfRef.__PVT__temp = __Vtemp_5;
        __Vtemp_6 = (0xfffffU & (VL_EXTEND_II(20,16, 
                                              (0xffffU 
                                               & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x10U))) 
                                 + VL_EXTEND_II(20,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(20, vlSelfRef.__PVT__temp, 0x10U)))));
        vlSelfRef.__PVT__temp = __Vtemp_6;
        vlSelfRef.__PVT__nTCP_checksum = (0x1ffffU 
                                          & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x11U));
        if (VL_REDOR_I((IData)(vlSelfRef.__PVT__TCP_len))) {
            vlSelfRef.__PVT__nbytes_trk = (0xffffU 
                                           & ((IData)(2U) 
                                              + (IData)(vlSelfRef.__PVT__bytes_trk)));
            vlSelfRef.__PVT__nTCP_valid = 1U;
            vlSelfRef.__PVT__n_nw_segment = 1U;
            vlSelfRef.__PVT__nbytes_rcv = 2U;
            vlSelfRef.__PVT__nTCP_payload_rx = VL_EXTEND_QI(64,16, 
                                                            (0xffffU 
                                                             & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0U, 0x10U)));
            vlSelfRef.__PVT__nstate = 3U;
        } else {
            vlSelfRef.__PVT__nstate = 4U;
        }
    } else if ((3U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__n_nw_segment = 1U;
        vlSelfRef.__PVT__nbytes_rcv = 8U;
        vlSelfRef.__PVT__nbytes_trk = (0xffffU & ((IData)(8U) 
                                                  + (IData)(vlSelfRef.__PVT__bytes_trk)));
        vlSelfRef.__PVT__temp = (0xfffffU & ((((VL_EXTEND_II(20,16, 
                                                             (0xffffU 
                                                              & VL_SEL_IIII(17, vlSelfRef.__PVT__TCP_checksum, 0U, 0x10U))) 
                                                + VL_EXTEND_II(20,16, 
                                                               (0xffffU 
                                                                & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x30U, 0x10U)))) 
                                               + VL_EXTEND_II(20,16, 
                                                              (0xffffU 
                                                               & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x20U, 0x10U)))) 
                                              + VL_EXTEND_II(20,16, 
                                                             (0xffffU 
                                                              & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x10U, 0x10U)))) 
                                             + VL_EXTEND_II(20,16, 
                                                            (0xffffU 
                                                             & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0U, 0x10U)))));
        __Vtemp_7 = (0xfffffU & (VL_EXTEND_II(20,16, 
                                              (0xffffU 
                                               & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x10U))) 
                                 + VL_EXTEND_II(20,4, 
                                                (0xfU 
                                                 & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0x10U, 4U)))));
        vlSelfRef.__PVT__temp = __Vtemp_7;
        __Vtemp_8 = (0xfffffU & (VL_EXTEND_II(20,16, 
                                              (0xffffU 
                                               & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x10U))) 
                                 + VL_EXTEND_II(20,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(20, vlSelfRef.__PVT__temp, 0x10U)))));
        vlSelfRef.__PVT__temp = __Vtemp_8;
        vlSelfRef.__PVT__nTCP_checksum = (0x1ffffU 
                                          & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x11U));
        vlSelfRef.__PVT__nTCP_payload_rx = vlSelfRef.__PVT__IP_payload_rx;
        if ((((IData)(8U) + VL_EXTEND_II(32,16, (IData)(vlSelfRef.__PVT__bytes_trk))) 
             < VL_EXTEND_II(32,16, (IData)(vlSelfRef.__PVT__TCP_len_data)))) {
            vlSelfRef.__PVT__nbytes_trk = (0xffffU 
                                           & ((IData)(8U) 
                                              + (IData)(vlSelfRef.__PVT__bytes_trk)));
        } else {
            vlSelfRef.__PVT__nbytes_trk = (0xffffU 
                                           & ((IData)(vlSelfRef.__PVT__bytes_trk) 
                                              + (((IData)(8U) 
                                                  + (IData)(vlSelfRef.__PVT__bytes_trk)) 
                                                 - (IData)(vlSelfRef.__PVT__TCP_len_data))));
            vlSelfRef.__PVT__nTCP_valid = 0U;
            vlSelfRef.__PVT__nTCP_last = 1U;
            vlSelfRef.__PVT__n_nw_segment = 1U;
            vlSelfRef.__PVT__nstate = 4U;
        }
    } else if ((4U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__n_nw_segment = 0U;
        vlSelfRef.__PVT__nTCP_last = 0U;
        vlSelfRef.__PVT__TCP_checksum_comp = (0xffffU 
                                              & (~ 
                                                 VL_SEL_IIII(17, vlSelfRef.__PVT__TCP_checksum, 0U, 0x10U)));
        if (((IData)(vlSelfRef.__PVT__TCP_checksum_comp) 
             == (IData)(vlSelfRef.__PVT__checksum_rx))) {
            vlSelfRef.__PVT__nrcv_data = 1U;
            vlSelfRef.__PVT__nstate = 0U;
            vlSelfRef.__PVT__nTCP_checksum = 0U;
        } else {
            vlSelfRef.__PVT__nstate = 5U;
        }
    } else if ((5U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__TCP_flush = 1U;
        if ((1U & (~ (IData)(vlSelfRef.__PVT__valid_IP_header_rx)))) {
            vlSelfRef.__PVT__nstate = 5U;
        }
    }
}
