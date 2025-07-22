// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ top__DOT__u_tcp__DOT__tcp_flow__DOT____VdfgRegularize_had43dce0_2_16;
    top__DOT__u_tcp__DOT__tcp_flow__DOT____VdfgRegularize_had43dce0_2_16 = 0;
    // Body
    vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nTCP_control_rx 
        = vlSelfRef.top__DOT__u_tcp__DOT__TCP_control_rx;
    vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nTCP_payload_rx 
        = vlSelfRef.top__DOT__axis_data_rx_int;
    vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nwindow_size_rx 
        = vlSelfRef.top__DOT__u_tcp__DOT__window_size_rx;
    vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nchecksum_rx 
        = vlSelfRef.top__DOT__u_tcp__DOT__checksum_rx;
    vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__noffset_rx 
        = vlSelfRef.top__DOT__u_tcp__DOT__offset_rx;
    vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nACK_rx 
        = vlSelfRef.top__DOT__u_tcp__DOT__ACK_rx;
    vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nurgent_pointer_rx 
        = vlSelfRef.top__DOT__u_tcp__DOT__urgent_pointer_rx;
    if ((0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__state))) {
        if ((1U == (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__state))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nTCP_control_rx 
                = (0xffU & (IData)(vlSelfRef.IP_payload));
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__noffset_rx 
                = (0xfU & (IData)((vlSelfRef.IP_payload 
                                   >> 0xcU)));
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nACK_rx 
                = (IData)((vlSelfRef.IP_payload >> 0x10U));
        }
        if ((1U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__state))) {
            if ((2U == (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__state))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nTCP_payload_rx 
                    = (QData)((IData)((0xffffU & (IData)(vlSelfRef.IP_payload))));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nwindow_size_rx 
                    = (0xffffU & (IData)((vlSelfRef.IP_payload 
                                          >> 0x30U)));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nchecksum_rx 
                    = (0xffffU & (IData)((vlSelfRef.IP_payload 
                                          >> 0x20U)));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nurgent_pointer_rx 
                    = (0xffffU & (IData)((vlSelfRef.IP_payload 
                                          >> 0x10U)));
            } else if ((3U == (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__state))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nTCP_payload_rx 
                    = vlSelfRef.IP_payload;
            }
        }
    }
    vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nseq_num_rx 
        = vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx;
    vlSelfRef.top__DOT__u_tcp__DOT__TCP_tx__DOT__nstate 
        = vlSelfRef.top__DOT__u_tcp__DOT__TCP_tx__DOT__state;
    vlSelfRef.top__DOT__u_fifo_tx__DOT__nmsg_end_ptr 
        = vlSelfRef.top__DOT__u_fifo_tx__DOT__msg_end_ptr;
    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug_0 = 0U;
    vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nTCP_checksum 
        = vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__TCP_checksum;
    vlSelfRef.top__DOT__u_payload_fifo__DOT__naxis_r_valid 
        = vlSelfRef.axis_r_valid;
    vlSelfRef.top__DOT__u_fifo_tx__DOT__nbytes_abt_sent_msg 
        = vlSelfRef.top__DOT__u_fifo_tx__DOT__bytes_abt_sent_msg;
    if (((~ (IData)(vlSelfRef.axis_last)) & (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__rd_upd))) {
        vlSelfRef.top__DOT__u_fifo_tx__DOT__nbytes_abt_sent_msg 
            = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__bytes_abt_sent_msg) 
                          - (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__bytes_abt_sent_msg_rd)));
    }
    if ((0U != (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__wr_state))) {
        if ((2U != (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__wr_state))) {
            if ((1U == (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__wr_state))) {
                if (vlSelfRef.axis_last) {
                    vlSelfRef.top__DOT__u_fifo_tx__DOT__nmsg_end_ptr 
                        = (0x3fU & ((IData)(1U) + ((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__msg_end_ptr) 
                                                   + (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__wrt_ptr))));
                    vlSelfRef.top__DOT__u_fifo_tx__DOT__nbytes_abt_sent_msg 
                        = (0xffffU & ((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__bytes_abt_sent_msg) 
                                      + vlSelfRef.len_seq));
                }
            }
        }
    }
    vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nstate 
        = vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__state;
    if ((0U == (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__state))) {
        if (((IData)(vlSelfRef.IP_valid) & (0x1234567800000000ULL 
                                            == (0xffffffff00000000ULL 
                                                & vlSelfRef.IP_payload)))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nseq_num_rx 
                = ((0xffffU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nseq_num_rx) 
                   | ((IData)((vlSelfRef.IP_payload 
                               >> 0x10U)) << 0x10U));
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nTCP_checksum 
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
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nstate = 1U;
        } else if (vlSelfRef.IP_valid) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nstate = 5U;
        }
    } else if ((1U == (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__state))) {
        vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nseq_num_rx 
            = ((0xffff0000U & vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nseq_num_rx) 
               | (0xffffU & (IData)((vlSelfRef.IP_payload 
                                     >> 0x30U))));
        vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nTCP_checksum 
            = (0x1ffffU & ((((0xffffU & (IData)((vlSelfRef.IP_payload 
                                                 >> 0x30U))) 
                             + (0xffffU & (IData)((vlSelfRef.IP_payload 
                                                   >> 0x20U)))) 
                            + (0xffffU & (IData)((vlSelfRef.IP_payload 
                                                  >> 0x10U)))) 
                           + (0xffffU & (IData)(vlSelfRef.IP_payload))));
        vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nstate = 2U;
    } else if ((2U == (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__state))) {
        vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nTCP_checksum 
            = (0x1ffffU & (((0xffffU & (IData)((vlSelfRef.IP_payload 
                                                >> 0x30U))) 
                            + (0xffffU & (IData)((vlSelfRef.IP_payload 
                                                  >> 0x10U)))) 
                           + (0xffffU & (IData)(vlSelfRef.IP_payload))));
        vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nstate = 3U;
    } else if ((3U == (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__state))) {
        vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nTCP_checksum 
            = (0x1ffffU & ((((0xffffU & (IData)((vlSelfRef.IP_payload 
                                                 >> 0x30U))) 
                             + (0xffffU & (IData)((vlSelfRef.IP_payload 
                                                   >> 0x20U)))) 
                            + (0xffffU & (IData)((vlSelfRef.IP_payload 
                                                  >> 0x10U)))) 
                           + (0xffffU & (IData)(vlSelfRef.IP_payload))));
        if ((((IData)(8U) + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__bytes_trk)) 
             >= (IData)(vlSelfRef.top__DOT__u_tcp__DOT__payload_len_rx))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nstate = 4U;
        }
    } else if ((4U == (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__state))) {
        vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nstate 
            = (((0x1ffffU & (~ vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__TCP_checksum)) 
                == (IData)(vlSelfRef.top__DOT__u_tcp__DOT__checksum_rx))
                ? 0U : 5U);
    } else if ((5U == (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__state))) {
        if ((1U & (~ (IData)(vlSelfRef.IP_valid)))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_rcv__DOT__nstate = 5U;
        }
    }
    vlSelfRef.top__DOT__u_fifo_tx__DOT__nbytes_abt_sent 
        = vlSelfRef.top__DOT__bytes_abt_sent_int;
    vlSelfRef.top__DOT__u_fifo_tx__DOT__nptr_end = vlSelfRef.top__DOT__u_fifo_tx__DOT__ptr_end;
    vlSelfRef.top__DOT__u_fifo_tx__DOT__nchecksum_l 
        = vlSelfRef.top__DOT__u_fifo_tx__DOT__checksum_l;
    vlSelfRef.top__DOT__u_fifo_tx__DOT__nwrt_ptr = vlSelfRef.top__DOT__u_fifo_tx__DOT__wrt_ptr;
    vlSelfRef.top__DOT__u_fifo_tx__DOT__nwr_FIFO_valid = 0U;
    vlSelfRef.top__DOT__u_fifo_tx__DOT__nptr_str = vlSelfRef.top__DOT__u_fifo_tx__DOT__ptr_str;
    vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__tcp_flow__rd_FIFO_len = 0U;
    vlSelfRef.top__DOT__rd_pfifo_valid_int = 0U;
    vlSelfRef.top__DOT__u_fifo_tx__DOT__nwr_state = vlSelfRef.top__DOT__u_fifo_tx__DOT__wr_state;
    vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__tcp_flow__rd_FIFO_ptr = 0U;
    vlSelfRef.top__DOT__u_fifo_tx__DOT__nrd_state = vlSelfRef.top__DOT__u_fifo_tx__DOT__rd_state;
    if ((0U == (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__rd_state))) {
        if (vlSelfRef.TX_en) {
            if (vlSelfRef.top__DOT__u_fifo_tx__DOT__out_order_req_l) {
                vlSelfRef.top__DOT__u_fifo_tx__DOT__nbytes_abt_sent 
                    = (0xffffU & ((0x5cfU >= ((IData)(0x1cU) 
                                              + (0x7ffU 
                                                 & ((IData)(0x5dU) 
                                                    * (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_rd_ptr)))))
                                   ? (((0U == (0x1fU 
                                               & ((IData)(0x1cU) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0x5dU) 
                                                      * (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_rd_ptr))))))
                                        ? 0U : (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[
                                                (((IData)(0x2bU) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0x5dU) 
                                                      * (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_rd_ptr)))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x1cU) 
                                                     + 
                                                     (0x7ffU 
                                                      & ((IData)(0x5dU) 
                                                         * (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_rd_ptr)))))))) 
                                      | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[
                                         (((IData)(0x1cU) 
                                           + (0x7ffU 
                                              & ((IData)(0x5dU) 
                                                 * (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_rd_ptr)))) 
                                          >> 5U)] >> 
                                         (0x1fU & ((IData)(0x1cU) 
                                                   + 
                                                   (0x7ffU 
                                                    & ((IData)(0x5dU) 
                                                       * (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_rd_ptr)))))))
                                   : 0U));
                vlSelfRef.top__DOT__u_fifo_tx__DOT__nptr_end 
                    = (0x3fU & ((0x5cfU >= (0x7ffU 
                                            & ((IData)(0x5dU) 
                                               * (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_rd_ptr))))
                                 ? (((0U == (0x1fU 
                                             & ((IData)(0x5dU) 
                                                * (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_rd_ptr))))
                                      ? 0U : (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[
                                              (((IData)(5U) 
                                                + (0x7ffU 
                                                   & ((IData)(0x5dU) 
                                                      * (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_rd_ptr)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x5dU) 
                                                      * (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_rd_ptr)))))) 
                                    | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[
                                       (0x3fU & (((IData)(0x5dU) 
                                                  * (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_rd_ptr)) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           ((IData)(0x5dU) 
                                            * (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_rd_ptr)))))
                                 : 0U));
                vlSelfRef.top__DOT__u_fifo_tx__DOT__nchecksum_l 
                    = (0xffffU & ((0x5cfU >= ((IData)(0xcU) 
                                              + (0x7ffU 
                                                 & ((IData)(0x5dU) 
                                                    * (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_rd_ptr)))))
                                   ? (((0U == (0x1fU 
                                               & ((IData)(0xcU) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0x5dU) 
                                                      * (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_rd_ptr))))))
                                        ? 0U : (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[
                                                (((IData)(0x1bU) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0x5dU) 
                                                      * (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_rd_ptr)))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0xcU) 
                                                     + 
                                                     (0x7ffU 
                                                      & ((IData)(0x5dU) 
                                                         * (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_rd_ptr)))))))) 
                                      | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[
                                         (((IData)(0xcU) 
                                           + (0x7ffU 
                                              & ((IData)(0x5dU) 
                                                 * (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_rd_ptr)))) 
                                          >> 5U)] >> 
                                         (0x1fU & ((IData)(0xcU) 
                                                   + 
                                                   (0x7ffU 
                                                    & ((IData)(0x5dU) 
                                                       * (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_rd_ptr)))))))
                                   : 0U));
                vlSelfRef.top__DOT__u_fifo_tx__DOT__nptr_str 
                    = (0x3fU & ((0x5cfU >= ((IData)(6U) 
                                            + (0x7ffU 
                                               & ((IData)(0x5dU) 
                                                  * (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_rd_ptr)))))
                                 ? (((0U == (0x1fU 
                                             & ((IData)(6U) 
                                                + (0x7ffU 
                                                   & ((IData)(0x5dU) 
                                                      * (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_rd_ptr))))))
                                      ? 0U : (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[
                                              (((IData)(0xbU) 
                                                + (0x7ffU 
                                                   & ((IData)(0x5dU) 
                                                      * (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_rd_ptr)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(6U) 
                                                      + 
                                                      (0x7ffU 
                                                       & ((IData)(0x5dU) 
                                                          * (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_rd_ptr)))))))) 
                                    | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[
                                       (((IData)(6U) 
                                         + (0x7ffU 
                                            & ((IData)(0x5dU) 
                                               * (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_rd_ptr)))) 
                                        >> 5U)] >> 
                                       (0x1fU & ((IData)(6U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x5dU) 
                                                     * (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_rd_ptr)))))))
                                 : 0U));
                vlSelfRef.top__DOT__u_fifo_tx__DOT__nrd_state = 2U;
            } else {
                vlSelfRef.top__DOT__u_fifo_tx__DOT__nbytes_abt_sent 
                    = (0xffffU & (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__bytes_abt_sent_msg));
                vlSelfRef.top__DOT__u_fifo_tx__DOT__nptr_end 
                    = (0x3fU & (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__msg_end_ptr));
                vlSelfRef.top__DOT__u_fifo_tx__DOT__nchecksum_l 
                    = (0xffffU & (IData)(vlSelfRef.top__DOT__checksum_TX));
                vlSelfRef.top__DOT__u_fifo_tx__DOT__nptr_str 
                    = (0x3fU & (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__rd_ptr));
                vlSelfRef.top__DOT__u_fifo_tx__DOT__nrd_state = 1U;
            }
        }
    } else {
        if ((1U != (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__rd_state))) {
            if ((2U == (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__rd_state))) {
                if (vlSelfRef.top__DOT__rd_ftx_en_int) {
                    vlSelfRef.top__DOT__u_fifo_tx__DOT__nptr_str 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__ptr_str)));
                }
            }
        }
        if ((1U == (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__rd_state))) {
            if ((((IData)(vlSelfRef.top__DOT__rd_ftx_en_int) 
                  & ((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_wrt_ptr) 
                     != ((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_rd_ptr) 
                         - (IData)(1U)))) & ((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__rd_ptr) 
                                             != ((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__msg_end_ptr) 
                                                 - (IData)(1U))))) {
                if ((((IData)(1U) + (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__rd_ptr)) 
                     == (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__ptr_end))) {
                    vlSelfRef.top__DOT__u_fifo_tx__DOT__nrd_state = 0U;
                }
            }
        } else if ((2U == (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__rd_state))) {
            if (vlSelfRef.top__DOT__rd_ftx_en_int) {
                if (((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__ptr_str) 
                     == ((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__ptr_end) 
                         - (IData)(1U)))) {
                    vlSelfRef.top__DOT__u_fifo_tx__DOT__nrd_state = 0U;
                }
            }
        }
    }
    vlSelfRef.top__DOT__u_tcp__DOT__TCP_tx__DOT__nTCP_transmit 
        = vlSelfRef.TCP_transmit;
    if ((0U == (IData)(vlSelfRef.top__DOT__u_tcp__DOT__TCP_tx__DOT__state))) {
        if (vlSelfRef.TCP_send) {
            vlSelfRef.top__DOT__u_tcp__DOT__TCP_tx__DOT__nstate = 1U;
            vlSelfRef.top__DOT__u_tcp__DOT__TCP_tx__DOT__nTCP_transmit 
                = (0x123456780000ULL | (QData)((IData)(
                                                       (vlSelfRef.top__DOT__u_tcp__DOT__seq_num_tx 
                                                        >> 0x10U))));
        }
    } else if ((1U == (IData)(vlSelfRef.top__DOT__u_tcp__DOT__TCP_tx__DOT__state))) {
        vlSelfRef.top__DOT__u_tcp__DOT__TCP_tx__DOT__nstate = 2U;
        vlSelfRef.top__DOT__u_tcp__DOT__TCP_tx__DOT__nTCP_transmit 
            = (((QData)((IData)((0xffffU & vlSelfRef.top__DOT__u_tcp__DOT__seq_num_tx))) 
                << 0x30U) | (((QData)((IData)(vlSelfRef.top__DOT__u_tcp__DOT__ACK_tx)) 
                              << 0x10U) | (QData)((IData)(
                                                          (0x5000U 
                                                           | (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__tx_pkg_type))))));
    } else if ((2U == (IData)(vlSelfRef.top__DOT__u_tcp__DOT__TCP_tx__DOT__state))) {
        vlSelfRef.top__DOT__u_tcp__DOT__TCP_tx__DOT__nstate = 3U;
        vlSelfRef.top__DOT__u_tcp__DOT__TCP_tx__DOT__nTCP_transmit 
            = ((QData)((IData)(((((((IData)(vlSelfRef.top__DOT__u_payload_fifo__DOT__rd_ptr) 
                                    - (IData)(1U)) 
                                   == (IData)(vlSelfRef.top__DOT__wr_ptr_out_int))
                                   ? 0U : 0xffffU) 
                                 << 0x10U) | (0xffffU 
                                              & vlSelfRef.top__DOT__u_tcp__DOT__TCP_tx__DOT__TCP_checksum)))) 
               << 0x20U);
    } else if ((3U == (IData)(vlSelfRef.top__DOT__u_tcp__DOT__TCP_tx__DOT__state))) {
        if ((0U != (IData)(vlSelfRef.top__DOT__bytes_abt_sent_int))) {
            vlSelfRef.top__DOT__u_tcp__DOT__TCP_tx__DOT__nstate = 4U;
            vlSelfRef.top__DOT__u_tcp__DOT__TCP_tx__DOT__nTCP_transmit 
                = vlSelfRef.top__DOT__rd_ftx_payload_int;
        }
    } else if ((4U == (IData)(vlSelfRef.top__DOT__u_tcp__DOT__TCP_tx__DOT__state))) {
        if (vlSelfRef.top__DOT__rd_ftx_last_int) {
            vlSelfRef.top__DOT__u_tcp__DOT__TCP_tx__DOT__nstate = 0U;
        }
        vlSelfRef.top__DOT__u_tcp__DOT__TCP_tx__DOT__nTCP_transmit 
            = vlSelfRef.top__DOT__rd_ftx_payload_int;
    }
    VL_ASSIGN_W(4096,vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order, vlSelfRef.top__DOT__u_fifo_tx__DOT__TCP_tx_order);
    if ((0U == (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__wr_state))) {
        if ((1U & (~ ((((0x5cfU >= ((IData)(0x3cU) 
                                    + (0x7ffU & ((IData)(0x5dU) 
                                                 * (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_rd_ptr)))))
                         ? (((0U == (0x1fU & ((IData)(0x3cU) 
                                              + (0x7ffU 
                                                 & ((IData)(0x5dU) 
                                                    * (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_rd_ptr))))))
                              ? 0U : (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[
                                      (((IData)(0x5bU) 
                                        + (0x7ffU & 
                                           ((IData)(0x5dU) 
                                            * (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_rd_ptr)))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x3cU) 
                                                       + 
                                                       (0x7ffU 
                                                        & ((IData)(0x5dU) 
                                                           * (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_rd_ptr)))))))) 
                            | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[
                               (((IData)(0x3cU) + (0x7ffU 
                                                   & ((IData)(0x5dU) 
                                                      * (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_rd_ptr)))) 
                                >> 5U)] >> (0x1fU & 
                                            ((IData)(0x3cU) 
                                             + (0x7ffU 
                                                & ((IData)(0x5dU) 
                                                   * (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_rd_ptr)))))))
                         : 0U) < vlSelfRef.top__DOT__u_fifo_tx__DOT__ACK_num_l) 
                      & ((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_rd_ptr) 
                         != (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_wrt_ptr)))))) {
            if (((IData)(vlSelfRef.wr_FIFO_en) & (~ (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__full)))) {
                vlSelfRef.top__DOT__u_fifo_tx__DOT__nwrt_ptr 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__wrt_ptr)));
                vlSelfRef.top__DOT__u_fifo_tx__DOT__nwr_FIFO_valid = 1U;
                VL_ASSIGNSEL_WQ(4096,64,(0xfffU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__wrt_ptr), 6U)), vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order, vlSelfRef.soupbin_TCP_payload);
            }
        }
        if (((((0x5cfU >= ((IData)(0x3cU) + (0x7ffU 
                                             & ((IData)(0x5dU) 
                                                * (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_rd_ptr)))))
                ? (((0U == (0x1fU & ((IData)(0x3cU) 
                                     + (0x7ffU & ((IData)(0x5dU) 
                                                  * (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_rd_ptr))))))
                     ? 0U : (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[
                             (((IData)(0x5bU) + (0x7ffU 
                                                 & ((IData)(0x5dU) 
                                                    * (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_rd_ptr)))) 
                              >> 5U)] << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x3cU) 
                                                + (0x7ffU 
                                                   & ((IData)(0x5dU) 
                                                      * (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_rd_ptr)))))))) 
                   | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[
                      (((IData)(0x3cU) + (0x7ffU & 
                                          ((IData)(0x5dU) 
                                           * (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_rd_ptr)))) 
                       >> 5U)] >> (0x1fU & ((IData)(0x3cU) 
                                            + (0x7ffU 
                                               & ((IData)(0x5dU) 
                                                  * (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_rd_ptr)))))))
                : 0U) < vlSelfRef.top__DOT__u_fifo_tx__DOT__ACK_num_l) 
             & ((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_rd_ptr) 
                != (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_wrt_ptr)))) {
            vlSelfRef.top__DOT__u_fifo_tx__DOT__nwr_state = 2U;
        } else if (((IData)(vlSelfRef.wr_FIFO_en) & 
                    (~ (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__full)))) {
            vlSelfRef.top__DOT__u_fifo_tx__DOT__nwr_state = 1U;
        }
    } else {
        if ((2U != (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__wr_state))) {
            if ((1U == (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__wr_state))) {
                vlSelfRef.top__DOT__u_fifo_tx__DOT__nwrt_ptr 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__wrt_ptr)));
                vlSelfRef.top__DOT__u_fifo_tx__DOT__nwr_FIFO_valid = 1U;
                if (vlSelfRef.axis_last) {
                    vlSelfRef.top__DOT__u_fifo_tx__DOT__nwr_FIFO_valid = 0U;
                }
            }
        }
        if ((2U == (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__wr_state))) {
            if (((IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__flush_ptr) 
                 == ((0x5cfU >= (0x7ffU & ((IData)(0x5dU) 
                                           * (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_rd_ptr))))
                      ? (0x3fU & (((0U == (0x1fU & 
                                           ((IData)(0x5dU) 
                                            * (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_rd_ptr))))
                                    ? 0U : (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[
                                            (((IData)(5U) 
                                              + (0x7ffU 
                                                 & ((IData)(0x5dU) 
                                                    * (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_rd_ptr)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x5dU) 
                                                      * (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_rd_ptr)))))) 
                                  | (vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_tx[
                                     (0x3fU & (((IData)(0x5dU) 
                                                * (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_rd_ptr)) 
                                               >> 5U))] 
                                     >> (0x1fU & ((IData)(0x5dU) 
                                                  * (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__dict_rd_ptr))))))
                      : 0U))) {
                vlSelfRef.top__DOT__u_fifo_tx__DOT__nwr_state = 0U;
            }
            VL_ASSIGNSEL_WQ(4096,64,(0xfffU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__flush_ptr), 6U)), vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order, 0ULL);
        } else if ((1U == (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__wr_state))) {
            if (vlSelfRef.axis_last) {
                vlSelfRef.top__DOT__u_fifo_tx__DOT__nwr_state = 0U;
            }
            VL_ASSIGNSEL_WQ(4096,64,(0xfffU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__wrt_ptr), 6U)), vlSelfRef.top__DOT__u_fifo_tx__DOT__nTCP_tx_order, vlSelfRef.soupbin_TCP_payload);
        }
    }
    vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__up_send 
        = ((~ (IData)(vlSelfRef.top__DOT__u_fifo_tx__DOT__out_order_req_l)) 
           & (IData)(vlSelfRef.TX_en));
    vlSelfRef.top__DOT__wr_pfifo_en_int = vlSelfRef.top__DOT__nw_segment;
    top__DOT__u_tcp__DOT__tcp_flow__DOT____VdfgRegularize_had43dce0_2_16 
        = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
           + (IData)(vlSelfRef.IP_bytes_rcv));
    vlSelfRef.top__DOT__u_payload_fifo__DOT__nrd_FIFO_valid_l 
        = vlSelfRef.top__DOT__u_payload_fifo__DOT__rd_FIFO_valid_l;
    if (vlSelfRef.top__DOT__nw_segment) {
        if ((1U & (~ ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0U] 
                       & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
                               << 0xfU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[1U] 
                                           >> 0x11U)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[1U] 
                                       >> 1U))))))) {
            if (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0U] 
                  & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
                         << 0xfU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[1U] 
                                     >> 0x11U)))) & 
                 ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                   + (IData)(vlSelfRef.IP_bytes_rcv)) 
                  > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
                      << 0xfU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[1U] 
                                  >> 0x11U))))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug_0 = 1U;
            }
        }
    }
    if (vlSelfRef.axis_r_en) {
        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug_0 = 1U;
    }
    if (vlSelfRef.top__DOT__nw_segment) {
        if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
                        >> 0x11U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U] 
                                          << 0x1eU) 
                                         | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[4U] 
                                            >> 2U)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[4U] 
                                        << 0xeU) | 
                                       (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[3U] 
                                        >> 0x12U)))))))) {
            if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
                   >> 0x11U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U] 
                                    << 0x1eU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[4U] 
                                                 >> 2U)))) 
                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U] 
                        << 0x1eU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[4U] 
                                     >> 2U))))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug_0 = 1U;
            }
        }
    }
    if (vlSelfRef.axis_r_en) {
        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug_0 = 1U;
    }
    if (vlSelfRef.top__DOT__nw_segment) {
        if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U] 
                        >> 2U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                  >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[7U] 
                                       << 0xdU) | (
                                                   vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[6U] 
                                                   >> 0x13U)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[6U] 
                                       >> 3U))))))) {
            if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U] 
                   >> 2U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                             < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[7U] 
                                 << 0xdU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[6U] 
                                             >> 0x13U)))) 
                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[7U] 
                        << 0xdU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[6U] 
                                    >> 0x13U))))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug_0 = 1U;
            }
        }
    }
    if (vlSelfRef.axis_r_en) {
        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug_0 = 1U;
    }
    if (vlSelfRef.top__DOT__nw_segment) {
        if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[7U] 
                        >> 0x13U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                                          << 0x1cU) 
                                         | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[9U] 
                                            >> 4U)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[9U] 
                                        << 0xcU) | 
                                       (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[8U] 
                                        >> 0x14U)))))))) {
            if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[7U] 
                   >> 0x13U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                                    << 0x1cU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[9U] 
                                                 >> 4U)))) 
                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                        << 0x1cU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[9U] 
                                     >> 4U))))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug_0 = 1U;
            }
        }
    }
    if (vlSelfRef.axis_r_en) {
        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug_0 = 1U;
    }
    if (vlSelfRef.top__DOT__nw_segment) {
        if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                        >> 4U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                  >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                                       << 0xbU) | (
                                                   vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                                   >> 0x15U)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                       >> 5U))))))) {
            if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                   >> 4U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                             < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                                 << 0xbU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                             >> 0x15U)))) 
                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                        << 0xbU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                    >> 0x15U))))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug_0 = 1U;
            }
        }
    }
    if (vlSelfRef.axis_r_en) {
        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug_0 = 1U;
    }
    if (vlSelfRef.top__DOT__nw_segment) {
        if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                        >> 0x15U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                                          << 0x1aU) 
                                         | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                            >> 6U)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                        << 0xaU) | 
                                       (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xdU] 
                                        >> 0x16U)))))))) {
            if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                   >> 0x15U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                                    << 0x1aU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                                 >> 6U)))) 
                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                        << 0x1aU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                     >> 6U))))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug_0 = 1U;
            }
        }
    }
    if (vlSelfRef.axis_r_en) {
        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug_0 = 1U;
    }
    if (vlSelfRef.top__DOT__nw_segment) {
        if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                        >> 6U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                  >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                                       << 9U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                                 >> 0x17U)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                       >> 7U))))))) {
            if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                   >> 6U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                             < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                                 << 9U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                           >> 0x17U)))) 
                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                        << 9U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                  >> 0x17U))))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug_0 = 1U;
            }
        }
    }
    if (vlSelfRef.axis_r_en) {
        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug_0 = 1U;
    }
    if (vlSelfRef.top__DOT__nw_segment) {
        if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                        >> 0x17U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                                          << 0x18U) 
                                         | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                            >> 8U)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                        << 8U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x12U] 
                                                  >> 0x18U)))))))) {
            if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                   >> 0x17U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                                    << 0x18U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                                 >> 8U)))) 
                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                        << 0x18U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                     >> 8U))))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug_0 = 1U;
            }
        }
    }
    if (vlSelfRef.axis_r_en) {
        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug_0 = 1U;
    }
    if (vlSelfRef.top__DOT__nw_segment) {
        if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                        >> 8U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                  >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                       << 7U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                                 >> 0x19U)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                       >> 9U))))))) {
            if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                   >> 8U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                             < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                 << 7U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                           >> 0x19U)))) 
                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                        << 7U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                  >> 0x19U))))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug_0 = 1U;
            }
        }
    }
    if (vlSelfRef.axis_r_en) {
        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug_0 = 1U;
    }
    if (vlSelfRef.top__DOT__nw_segment) {
        if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                        >> 0x19U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                                          << 0x16U) 
                                         | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                            >> 0xaU)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                        << 6U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x17U] 
                                                  >> 0x1aU)))))))) {
            if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                   >> 0x19U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                                    << 0x16U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                                 >> 0xaU)))) 
                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                        << 0x16U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                     >> 0xaU))))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug_0 = 1U;
            }
        }
    }
    if (vlSelfRef.axis_r_en) {
        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug_0 = 1U;
    }
    if (vlSelfRef.top__DOT__nw_segment) {
        if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                        >> 0xaU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                    >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                         << 5U) | (
                                                   vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                                   >> 0x1bU)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                       >> 0xbU))))))) {
            if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                   >> 0xaU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                               < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                   << 5U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                             >> 0x1bU)))) 
                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                        << 5U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                  >> 0x1bU))))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug_0 = 1U;
            }
        }
    }
    if (vlSelfRef.axis_r_en) {
        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug_0 = 1U;
    }
    if (vlSelfRef.top__DOT__nw_segment) {
        if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                        >> 0x1bU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                                          << 0x14U) 
                                         | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                            >> 0xcU)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                        << 4U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1cU] 
                                                  >> 0x1cU)))))))) {
            if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                   >> 0x1bU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                                    << 0x14U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                                 >> 0xcU)))) 
                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                        << 0x14U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                     >> 0xcU))))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug_0 = 1U;
            }
        }
    }
    if (vlSelfRef.axis_r_en) {
        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug_0 = 1U;
    }
    if (vlSelfRef.top__DOT__nw_segment) {
        if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                        >> 0xcU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                    >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                         << 3U) | (
                                                   vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                                   >> 0x1dU)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                       >> 0xdU))))))) {
            if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                   >> 0xcU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                               < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                   << 3U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                             >> 0x1dU)))) 
                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                        << 3U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                  >> 0x1dU))))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug_0 = 1U;
            }
        }
    }
    if (vlSelfRef.axis_r_en) {
        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug_0 = 1U;
    }
    if (vlSelfRef.top__DOT__nw_segment) {
        if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                        >> 0x1dU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                                          << 0x12U) 
                                         | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                            >> 0xeU)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                        << 2U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x21U] 
                                                  >> 0x1eU)))))))) {
            if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                   >> 0x1dU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                                    << 0x12U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                                 >> 0xeU)))) 
                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                        << 0x12U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                     >> 0xeU))))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug_0 = 1U;
            }
        }
    }
    if (vlSelfRef.axis_r_en) {
        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug_0 = 1U;
    }
    if (vlSelfRef.top__DOT__nw_segment) {
        if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                        >> 0xeU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                    >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                                         << 1U) | (
                                                   vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                                   >> 0x1fU)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                       >> 0xfU))))))) {
            if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                   >> 0xeU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                               < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                                   << 1U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                             >> 0x1fU)))) 
                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                        << 1U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                  >> 0x1fU))))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug_0 = 1U;
            }
        }
    }
    if (vlSelfRef.axis_r_en) {
        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug_0 = 1U;
    }
    if (vlSelfRef.top__DOT__nw_segment) {
        if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                        >> 0x1fU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x28U] 
                                          << 0x10U) 
                                         | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x27U] 
                                            >> 0x10U)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x27U])))))) {
            if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                   >> 0x1fU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x28U] 
                                    << 0x10U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x27U] 
                                                 >> 0x10U)))) 
                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x28U] 
                        << 0x10U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x27U] 
                                     >> 0x10U))))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug_0 = 1U;
            }
        }
    }
    if (vlSelfRef.axis_r_en) {
        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug_0 = 1U;
        vlSelfRef.top__DOT__u_payload_fifo__DOT__naxis_r_valid 
            = ((IData)(vlSelfRef.top__DOT__u_payload_fifo__DOT__rd_FIFO_valid_l) 
               & ((IData)(vlSelfRef.top__DOT__u_payload_fifo__DOT__rd_ptr) 
                  != (IData)(vlSelfRef.top__DOT__u_payload_fifo__DOT__flush_ptr)));
        if (((vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
              == ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
                   << 0xfU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[1U] 
                               >> 0x11U))) & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0U])) {
            vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__tcp_flow__rd_FIFO_len 
                = (0xffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0U] 
                            >> 1U));
            vlSelfRef.top__DOT__rd_pfifo_valid_int = 1U;
        }
        if (((vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
              == ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U] 
                   << 0x1eU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[4U] 
                                >> 2U))) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
                                            >> 0x11U))) {
            vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__tcp_flow__rd_FIFO_len 
                = (0xffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
                            >> 0x12U));
            vlSelfRef.top__DOT__rd_pfifo_valid_int = 1U;
        }
        if (((vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
              == ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[7U] 
                   << 0xdU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[6U] 
                               >> 0x13U))) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U] 
                                              >> 2U))) {
            vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__tcp_flow__rd_FIFO_len 
                = (0xffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U] 
                            >> 3U));
            vlSelfRef.top__DOT__rd_pfifo_valid_int = 1U;
        }
        if (((vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
              == ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                   << 0x1cU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[9U] 
                                >> 4U))) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[7U] 
                                            >> 0x13U))) {
            vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__tcp_flow__rd_FIFO_len 
                = (0xffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[7U] 
                            >> 0x14U));
            vlSelfRef.top__DOT__rd_pfifo_valid_int = 1U;
        }
        if (((vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
              == ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                   << 0xbU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                               >> 0x15U))) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                                              >> 4U))) {
            vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__tcp_flow__rd_FIFO_len 
                = (0xffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                            >> 5U));
            vlSelfRef.top__DOT__rd_pfifo_valid_int = 1U;
        }
        if (((vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
              == ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                   << 0x1aU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                >> 6U))) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                                            >> 0x15U))) {
            vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__tcp_flow__rd_FIFO_len 
                = (0xffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                            >> 0x16U));
            vlSelfRef.top__DOT__rd_pfifo_valid_int = 1U;
        }
        if (((vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
              == ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                   << 9U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                             >> 0x17U))) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                                            >> 6U))) {
            vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__tcp_flow__rd_FIFO_len 
                = (0xffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                            >> 7U));
            vlSelfRef.top__DOT__rd_pfifo_valid_int = 1U;
        }
        if (((vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
              == ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                   << 0x18U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                >> 8U))) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                                            >> 0x17U))) {
            vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__tcp_flow__rd_FIFO_len 
                = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                   >> 0x18U);
            vlSelfRef.top__DOT__rd_pfifo_valid_int = 1U;
        }
        if (((vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
              == ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                   << 7U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                             >> 0x19U))) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                                            >> 8U))) {
            vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__tcp_flow__rd_FIFO_len 
                = (0xffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                            >> 9U));
            vlSelfRef.top__DOT__rd_pfifo_valid_int = 1U;
        }
        if (((vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
              == ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                   << 0x16U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                >> 0xaU))) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                              >> 0x19U))) {
            vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__tcp_flow__rd_FIFO_len 
                = (0xffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x17U] 
                             << 6U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                       >> 0x1aU)));
            vlSelfRef.top__DOT__rd_pfifo_valid_int = 1U;
        }
        if (((vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
              == ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                   << 5U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                             >> 0x1bU))) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                                            >> 0xaU))) {
            vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__tcp_flow__rd_FIFO_len 
                = (0xffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                            >> 0xbU));
            vlSelfRef.top__DOT__rd_pfifo_valid_int = 1U;
        }
        if (((vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
              == ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                   << 0x14U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                >> 0xcU))) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                              >> 0x1bU))) {
            vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__tcp_flow__rd_FIFO_len 
                = (0xffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1cU] 
                             << 4U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                       >> 0x1cU)));
            vlSelfRef.top__DOT__rd_pfifo_valid_int = 1U;
        }
        if (((vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
              == ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                   << 3U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                             >> 0x1dU))) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                                            >> 0xcU))) {
            vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__tcp_flow__rd_FIFO_len 
                = (0xffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                            >> 0xdU));
            vlSelfRef.top__DOT__rd_pfifo_valid_int = 1U;
        }
        if (((vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
              == ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                   << 0x12U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                >> 0xeU))) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                              >> 0x1dU))) {
            vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__tcp_flow__rd_FIFO_len 
                = (0xffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x21U] 
                             << 2U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                       >> 0x1eU)));
            vlSelfRef.top__DOT__rd_pfifo_valid_int = 1U;
        }
        if (((vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
              == ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                   << 1U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                             >> 0x1fU))) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                                            >> 0xeU))) {
            vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__tcp_flow__rd_FIFO_len 
                = (0xffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                            >> 0xfU));
            vlSelfRef.top__DOT__rd_pfifo_valid_int = 1U;
        }
        if (((vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
              == ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x28U] 
                   << 0x10U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x27U] 
                                >> 0x10U))) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                                               >> 0x1fU))) {
            vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__tcp_flow__rd_FIFO_len 
                = (0xffU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x26U]);
            vlSelfRef.top__DOT__rd_pfifo_valid_int = 1U;
        }
    }
    if (vlSelfRef.top__DOT__rd_pfifo_valid_int) {
        vlSelfRef.top__DOT__u_payload_fifo__DOT__nrd_FIFO_valid_l = 1U;
    } else if (((IData)(vlSelfRef.top__DOT__u_payload_fifo__DOT__rd_ptr) 
                == (7U & (IData)(vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__tcp_flow__rd_FIFO_len)))) {
        vlSelfRef.top__DOT__u_payload_fifo__DOT__nrd_FIFO_valid_l = 0U;
    }
    if (vlSelfRef.axis_r_en) {
        if (((vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
              == ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
                   << 0xfU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[1U] 
                               >> 0x11U))) & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0U])) {
            vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__tcp_flow__rd_FIFO_ptr 
                = (0x7ffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0U] 
                             >> 0x11U));
        }
        if (((vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
              == ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U] 
                   << 0x1eU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[4U] 
                                >> 2U))) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
                                            >> 0x11U))) {
            vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__tcp_flow__rd_FIFO_ptr 
                = (0x7ffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[3U] 
                             >> 2U));
        }
        if (((vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
              == ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[7U] 
                   << 0xdU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[6U] 
                               >> 0x13U))) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U] 
                                              >> 2U))) {
            vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__tcp_flow__rd_FIFO_ptr 
                = (0x7ffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U] 
                             >> 0x13U));
        }
        if (((vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
              == ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                   << 0x1cU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[9U] 
                                >> 4U))) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[7U] 
                                            >> 0x13U))) {
            vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__tcp_flow__rd_FIFO_ptr 
                = (0x7ffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[8U] 
                             >> 4U));
        }
        if (((vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
              == ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                   << 0xbU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                               >> 0x15U))) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                                              >> 4U))) {
            vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__tcp_flow__rd_FIFO_ptr 
                = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                   >> 0x15U);
        }
        if (((vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
              == ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                   << 0x1aU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                >> 6U))) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                                            >> 0x15U))) {
            vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__tcp_flow__rd_FIFO_ptr 
                = (0x7ffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xdU] 
                             >> 6U));
        }
        if (((vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
              == ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                   << 9U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                             >> 0x17U))) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                                            >> 6U))) {
            vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__tcp_flow__rd_FIFO_ptr 
                = (0x7ffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                              << 9U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                                        >> 0x17U)));
        }
        if (((vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
              == ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                   << 0x18U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                >> 8U))) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                                            >> 0x17U))) {
            vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__tcp_flow__rd_FIFO_ptr 
                = (0x7ffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x12U] 
                             >> 8U));
        }
        if (((vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
              == ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                   << 7U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                             >> 0x19U))) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                                            >> 8U))) {
            vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__tcp_flow__rd_FIFO_ptr 
                = (0x7ffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                              << 7U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                                        >> 0x19U)));
        }
        if (((vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
              == ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                   << 0x16U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                >> 0xaU))) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                              >> 0x19U))) {
            vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__tcp_flow__rd_FIFO_ptr 
                = (0x7ffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x17U] 
                             >> 0xaU));
        }
        if (((vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
              == ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                   << 5U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                             >> 0x1bU))) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                                            >> 0xaU))) {
            vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__tcp_flow__rd_FIFO_ptr 
                = (0x7ffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                              << 5U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                                        >> 0x1bU)));
        }
        if (((vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
              == ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                   << 0x14U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                >> 0xcU))) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                              >> 0x1bU))) {
            vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__tcp_flow__rd_FIFO_ptr 
                = (0x7ffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1cU] 
                             >> 0xcU));
        }
        if (((vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
              == ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                   << 3U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                             >> 0x1dU))) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                                            >> 0xcU))) {
            vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__tcp_flow__rd_FIFO_ptr 
                = (0x7ffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                              << 3U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                                        >> 0x1dU)));
        }
        if (((vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
              == ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                   << 0x12U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                >> 0xeU))) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                              >> 0x1dU))) {
            vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__tcp_flow__rd_FIFO_ptr 
                = (0x7ffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x21U] 
                             >> 0xeU));
        }
        if (((vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
              == ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                   << 1U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                             >> 0x1fU))) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                                            >> 0xeU))) {
            vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__tcp_flow__rd_FIFO_ptr 
                = (0x7ffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                              << 1U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                                        >> 0x1fU)));
        }
        if (((vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
              == ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x28U] 
                   << 0x10U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x27U] 
                                >> 0x10U))) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                                               >> 0x1fU))) {
            vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__tcp_flow__rd_FIFO_ptr 
                = (0x7ffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x26U] 
                             >> 0x10U));
        }
    }
    vlSelfRef.top__DOT__u_payload_fifo__DOT__nrd_ptr 
        = (7U & (IData)(vlSelfRef.top__DOT__u_tcp__DOT____Vcellout__tcp_flow__rd_FIFO_ptr));
    vlSelfRef.top__DOT__u_payload_fifo__DOT__nwr_ptr 
        = vlSelfRef.top__DOT__u_payload_fifo__DOT__wr_ptr;
    vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_flush_l 
        = vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_flush_l;
    if (vlSelfRef.top__DOT__nw_segment) {
        if (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0U] 
              & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                 >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
                      << 0xfU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[1U] 
                                  >> 0x11U)))) & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                                   + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                                  < 
                                                  (0xffffU 
                                                   & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[1U] 
                                                      >> 1U))))) {
            vlSelfRef.top__DOT__wr_pfifo_en_int = 0U;
        }
        if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
               >> 0x11U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                            >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U] 
                                 << 0x1eU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[4U] 
                                              >> 2U)))) 
             & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                < (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[4U] 
                               << 0xeU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[3U] 
                                           >> 0x12U)))))) {
            vlSelfRef.top__DOT__wr_pfifo_en_int = 0U;
        }
        if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U] 
               >> 2U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                         >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[7U] 
                              << 0xdU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[6U] 
                                          >> 0x13U)))) 
             & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[6U] 
                              >> 3U))))) {
            vlSelfRef.top__DOT__wr_pfifo_en_int = 0U;
        }
        if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[7U] 
               >> 0x13U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                            >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                                 << 0x1cU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[9U] 
                                              >> 4U)))) 
             & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                < (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[9U] 
                               << 0xcU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[8U] 
                                           >> 0x14U)))))) {
            vlSelfRef.top__DOT__wr_pfifo_en_int = 0U;
        }
        if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xaU] 
               >> 4U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                         >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                              << 0xbU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                          >> 0x15U)))) 
             & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                              >> 5U))))) {
            vlSelfRef.top__DOT__wr_pfifo_en_int = 0U;
        }
        if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xcU] 
               >> 0x15U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                            >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                                 << 0x1aU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                              >> 6U)))) 
             & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                < (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                               << 0xaU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xdU] 
                                           >> 0x16U)))))) {
            vlSelfRef.top__DOT__wr_pfifo_en_int = 0U;
        }
        if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xfU] 
               >> 6U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                         >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                              << 9U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                        >> 0x17U)))) 
             & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                              >> 7U))))) {
            vlSelfRef.top__DOT__wr_pfifo_en_int = 0U;
        }
        if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x11U] 
               >> 0x17U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                            >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                                 << 0x18U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                              >> 8U)))) 
             & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                < (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                               << 8U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x12U] 
                                         >> 0x18U)))))) {
            vlSelfRef.top__DOT__wr_pfifo_en_int = 0U;
        }
        if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x14U] 
               >> 8U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                         >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                              << 7U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                        >> 0x19U)))) 
             & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                              >> 9U))))) {
            vlSelfRef.top__DOT__wr_pfifo_en_int = 0U;
        }
        if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x16U] 
               >> 0x19U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                            >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                                 << 0x16U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                              >> 0xaU)))) 
             & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                < (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                               << 6U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x17U] 
                                         >> 0x1aU)))))) {
            vlSelfRef.top__DOT__wr_pfifo_en_int = 0U;
        }
        if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x19U] 
               >> 0xaU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                           >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                << 5U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                          >> 0x1bU)))) 
             & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                              >> 0xbU))))) {
            vlSelfRef.top__DOT__wr_pfifo_en_int = 0U;
        }
        if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
               >> 0x1bU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                            >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                                 << 0x14U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                              >> 0xcU)))) 
             & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                < (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                               << 4U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1cU] 
                                         >> 0x1cU)))))) {
            vlSelfRef.top__DOT__wr_pfifo_en_int = 0U;
        }
        if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
               >> 0xcU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                           >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                << 3U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                          >> 0x1dU)))) 
             & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                              >> 0xdU))))) {
            vlSelfRef.top__DOT__wr_pfifo_en_int = 0U;
        }
        if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x20U] 
               >> 0x1dU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                            >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                                 << 0x12U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                              >> 0xeU)))) 
             & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                < (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                               << 2U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x21U] 
                                         >> 0x1eU)))))) {
            vlSelfRef.top__DOT__wr_pfifo_en_int = 0U;
        }
        if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x23U] 
               >> 0xeU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                           >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                                << 1U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                          >> 0x1fU)))) 
             & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                              >> 0xfU))))) {
            vlSelfRef.top__DOT__wr_pfifo_en_int = 0U;
        }
        if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x25U] 
               >> 0x1fU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                            >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x28U] 
                                 << 0x10U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x27U] 
                                              >> 0x10U)))) 
             & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                < (0xffffU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x27U])))) {
            vlSelfRef.top__DOT__wr_pfifo_en_int = 0U;
        }
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__TCP_flush_int) 
                  | (IData)(vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_flush_l))))) {
        if (((IData)(vlSelfRef.top__DOT__u_payload_fifo__DOT__flush_ptr) 
             == (IData)(vlSelfRef.top__DOT__u_payload_fifo__DOT__len_TCP_flush))) {
            vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_flush_l = 0U;
        } else if ((1U & (~ ((IData)(vlSelfRef.top__DOT__nw_segment) 
                             | (IData)(vlSelfRef.top__DOT__wr_pfifo_en_int))))) {
            if (vlSelfRef.top__DOT__TCP_flush_int) {
                vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_flush_l = 1U;
            }
        }
        if (((IData)(vlSelfRef.top__DOT__u_payload_fifo__DOT__flush_ptr) 
             != (IData)(vlSelfRef.top__DOT__u_payload_fifo__DOT__len_TCP_flush))) {
            if ((1U & (~ ((IData)(vlSelfRef.top__DOT__nw_segment) 
                          | (IData)(vlSelfRef.top__DOT__wr_pfifo_en_int))))) {
                if (vlSelfRef.top__DOT__TCP_flush_int) {
                    vlSelfRef.top__DOT__u_payload_fifo__DOT__nlen_TCP_flush 
                        = vlSelfRef.top__DOT__u_payload_fifo__DOT__wr_ptr;
                }
            }
        }
    }
    vlSelfRef.top__DOT__u_payload_fifo__DOT__nflush_ptr 
        = vlSelfRef.top__DOT__u_payload_fifo__DOT__wr_ptr;
    if (((IData)(vlSelfRef.top__DOT__TCP_flush_int) 
         | (IData)(vlSelfRef.top__DOT__u_payload_fifo__DOT__TCP_flush_l))) {
        vlSelfRef.top__DOT__u_payload_fifo__DOT__nflush_ptr 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__u_payload_fifo__DOT__flush_ptr)));
    } else if (((IData)(vlSelfRef.top__DOT__u_payload_fifo__DOT__flush_ptr) 
                != (IData)(vlSelfRef.top__DOT__u_payload_fifo__DOT__len_TCP_flush))) {
        if (((IData)(vlSelfRef.top__DOT__nw_segment) 
             | (IData)(vlSelfRef.top__DOT__wr_pfifo_en_int))) {
            vlSelfRef.top__DOT__u_payload_fifo__DOT__nflush_ptr 
                = vlSelfRef.top__DOT__u_payload_fifo__DOT__flush_ptr;
        } else if (vlSelfRef.top__DOT__TCP_flush_int) {
            vlSelfRef.top__DOT__u_payload_fifo__DOT__nflush_ptr 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__u_payload_fifo__DOT__flush_ptr)));
        }
    }
    vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__nTCP_checksum 
        = vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__TCP_checksum;
    vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__nTCP_checksum_send 
        = vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__TCP_checksum_send;
    vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__nTCP_checksum_out = 0U;
    if (vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__up_send) {
        vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__nTCP_checksum_send = 0U;
        vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__nTCP_checksum_out 
            = (0xffffU & vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__TCP_checksum_send);
    }
    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask 
        = (((((0x8000U & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                           >> 0x10U) & (((top__DOT__u_tcp__DOT__tcp_flow__DOT____VdfgRegularize_had43dce0_2_16 
                                          < (0xffffU 
                                             & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x27U])) 
                                         & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                            >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x28U] 
                                                 << 0x10U) 
                                                | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x27U] 
                                                   >> 0x10U)))) 
                                        << 0xfU))) 
              | (0xffffc000U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                                & (((top__DOT__u_tcp__DOT__tcp_flow__DOT____VdfgRegularize_had43dce0_2_16 
                                     < (0xffffU & (
                                                   vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                                   >> 0xfU))) 
                                    & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                       >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                                            << 1U) 
                                           | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                              >> 0x1fU)))) 
                                   << 0xeU)))) | ((0xe000U 
                                                   & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                                       >> 0x10U) 
                                                      & (((top__DOT__u_tcp__DOT__tcp_flow__DOT____VdfgRegularize_had43dce0_2_16 
                                                           < 
                                                           (0xffffU 
                                                            & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                                                << 2U) 
                                                               | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x21U] 
                                                                  >> 0x1eU)))) 
                                                          & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                                             >= 
                                                             ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                                                               << 0x12U) 
                                                              | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                                                 >> 0xeU)))) 
                                                         << 0xdU))) 
                                                  | (0xfffff000U 
                                                     & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                                                        & (((top__DOT__u_tcp__DOT__tcp_flow__DOT____VdfgRegularize_had43dce0_2_16 
                                                             < 
                                                             (0xffffU 
                                                              & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                                                 >> 0xdU))) 
                                                            & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                                               >= 
                                                               ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                                                 << 3U) 
                                                                | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                                                   >> 0x1dU)))) 
                                                           << 0xcU))))) 
            | (((0xf800U & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                             >> 0x10U) & (((top__DOT__u_tcp__DOT__tcp_flow__DOT____VdfgRegularize_had43dce0_2_16 
                                            < (0xffffU 
                                               & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                                   << 4U) 
                                                  | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1cU] 
                                                     >> 0x1cU)))) 
                                           & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                              >= ((
                                                   vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                                                   << 0x14U) 
                                                  | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                                     >> 0xcU)))) 
                                          << 0xbU))) 
                | (0xfffffc00U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                                  & (((top__DOT__u_tcp__DOT__tcp_flow__DOT____VdfgRegularize_had43dce0_2_16 
                                       < (0xffffU & 
                                          (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                           >> 0xbU))) 
                                      & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                         >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                              << 5U) 
                                             | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                                >> 0x1bU)))) 
                                     << 0xaU)))) | 
               ((0xfe00U & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                             >> 0x10U) & (((top__DOT__u_tcp__DOT__tcp_flow__DOT____VdfgRegularize_had43dce0_2_16 
                                            < (0xffffU 
                                               & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                                   << 6U) 
                                                  | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x17U] 
                                                     >> 0x1aU)))) 
                                           & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                              >= ((
                                                   vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                                                   << 0x16U) 
                                                  | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                                     >> 0xaU)))) 
                                          << 9U))) 
                | (0xffffff00U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                                  & (((top__DOT__u_tcp__DOT__tcp_flow__DOT____VdfgRegularize_had43dce0_2_16 
                                       < (0xffffU & 
                                          (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                           >> 9U))) 
                                      & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                         >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                              << 7U) 
                                             | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                                >> 0x19U)))) 
                                     << 8U)))))) | 
           ((((0xff80U & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                           >> 0x10U) & (((top__DOT__u_tcp__DOT__tcp_flow__DOT____VdfgRegularize_had43dce0_2_16 
                                          < (0xffffU 
                                             & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                                 << 8U) 
                                                | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x12U] 
                                                   >> 0x18U)))) 
                                         & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                            >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                                                 << 0x18U) 
                                                | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                                   >> 8U)))) 
                                        << 7U))) | 
              (0xffffffc0U & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                              & (((top__DOT__u_tcp__DOT__tcp_flow__DOT____VdfgRegularize_had43dce0_2_16 
                                   < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                                 >> 7U))) 
                                  & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                                          << 9U) | 
                                         (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                          >> 0x17U)))) 
                                 << 6U)))) | ((0xffe0U 
                                               & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                                                   >> 0x10U) 
                                                  & (((top__DOT__u_tcp__DOT__tcp_flow__DOT____VdfgRegularize_had43dce0_2_16 
                                                       < 
                                                       (0xffffU 
                                                        & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                                            << 0xaU) 
                                                           | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xdU] 
                                                              >> 0x16U)))) 
                                                      & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                                         >= 
                                                         ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                                                           << 0x1aU) 
                                                          | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                                             >> 6U)))) 
                                                     << 5U))) 
                                              | (0xfffffff0U 
                                                 & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                                                    & (((top__DOT__u_tcp__DOT__tcp_flow__DOT____VdfgRegularize_had43dce0_2_16 
                                                         < 
                                                         (0xffffU 
                                                          & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                                             >> 5U))) 
                                                        & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                                           >= 
                                                           ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                                                             << 0xbU) 
                                                            | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                                               >> 0x15U)))) 
                                                       << 4U))))) 
            | (((0xfff8U & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[7U] 
                             >> 0x10U) & (((top__DOT__u_tcp__DOT__tcp_flow__DOT____VdfgRegularize_had43dce0_2_16 
                                            < (0xffffU 
                                               & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[9U] 
                                                   << 0xcU) 
                                                  | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[8U] 
                                                     >> 0x14U)))) 
                                           & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                              >= ((
                                                   vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                                                   << 0x1cU) 
                                                  | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[9U] 
                                                     >> 4U)))) 
                                          << 3U))) 
                | (0xfffffffcU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U] 
                                  & (((top__DOT__u_tcp__DOT__tcp_flow__DOT____VdfgRegularize_had43dce0_2_16 
                                       < (0xffffU & 
                                          (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[6U] 
                                           >> 3U))) 
                                      & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                         >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[7U] 
                                              << 0xdU) 
                                             | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[6U] 
                                                >> 0x13U)))) 
                                     << 2U)))) | ((0xfffeU 
                                                   & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
                                                       >> 0x10U) 
                                                      & (((top__DOT__u_tcp__DOT__tcp_flow__DOT____VdfgRegularize_had43dce0_2_16 
                                                           < 
                                                           (0xffffU 
                                                            & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[4U] 
                                                                << 0xeU) 
                                                               | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[3U] 
                                                                  >> 0x12U)))) 
                                                          & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                                             >= 
                                                             ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U] 
                                                               << 0x1eU) 
                                                              | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[4U] 
                                                                 >> 2U)))) 
                                                         << 1U))) 
                                                  | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0U] 
                                                     & ((top__DOT__u_tcp__DOT__tcp_flow__DOT____VdfgRegularize_had43dce0_2_16 
                                                         < 
                                                         (0xffffU 
                                                          & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[1U] 
                                                             >> 1U))) 
                                                        & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                                           >= 
                                                           ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
                                                             << 0xfU) 
                                                            | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[1U] 
                                                               >> 0x11U)))))))));
    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 0U;
    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nlen_flush_ptr 
        = vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr;
    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
        = vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_list;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x28U)) {
        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[__Vilp1] 
            = vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nrcv_next 
        = vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__rcv_next;
    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nseq_rx_trk 
        = vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx;
    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left = 0U;
    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop = 0U;
    vlSelfRef.top__DOT__wr_pfifo_offset_int = 0U;
    if (vlSelfRef.top__DOT__nw_segment) {
        if (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0U] 
              & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                 >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
                      << 0xfU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[1U] 
                                  >> 0x11U)))) & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                                   + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                                  < 
                                                  (0xffffU 
                                                   & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[1U] 
                                                      >> 1U))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 3U;
        } else if (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0U] 
                     & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                        < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
                            << 0xfU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[1U] 
                                        >> 0x11U)))) 
                    & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
                           << 0xfU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[1U] 
                                       >> 0x11U))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 2U;
        } else if (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0U] 
                     & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                        < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[1U] 
                                      >> 1U)))) & (
                                                   (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                                    + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                                   >= 
                                                   (0xffffU 
                                                    & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[1U] 
                                                       >> 1U))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 1U;
        } else if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 0U;
        }
        if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
               >> 0x11U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                            >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U] 
                                 << 0x1eU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[4U] 
                                              >> 2U)))) 
             & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                < (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[4U] 
                               << 0xeU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[3U] 
                                           >> 0x12U)))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 3U;
        } else if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
                      >> 0x11U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                   < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U] 
                                       << 0x1eU) | 
                                      (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[4U] 
                                       >> 2U)))) & 
                    ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                      + (IData)(vlSelfRef.IP_bytes_rcv)) 
                     > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U] 
                         << 0x1eU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[4U] 
                                      >> 2U))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 2U;
        } else if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
                      >> 0x11U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                   < (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[4U] 
                                                  << 0xeU) 
                                                 | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[3U] 
                                                    >> 0x12U))))) 
                    & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       >= (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[4U] 
                                       << 0xeU) | (
                                                   vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[3U] 
                                                   >> 0x12U)))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 1U;
        } else if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 0U;
        }
        if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U] 
               >> 2U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                         >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[7U] 
                              << 0xdU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[6U] 
                                          >> 0x13U)))) 
             & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[6U] 
                              >> 3U))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 3U;
        } else if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U] 
                      >> 2U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[7U] 
                                    << 0xdU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[6U] 
                                                >> 0x13U)))) 
                    & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[7U] 
                           << 0xdU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[6U] 
                                       >> 0x13U))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 2U;
        } else if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U] 
                      >> 2U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[6U] 
                                              >> 3U)))) 
                    & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       >= (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[6U] 
                                      >> 3U))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 1U;
        } else if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 0U;
        }
        if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[7U] 
               >> 0x13U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                            >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                                 << 0x1cU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[9U] 
                                              >> 4U)))) 
             & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                < (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[9U] 
                               << 0xcU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[8U] 
                                           >> 0x14U)))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 3U;
        } else if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[7U] 
                      >> 0x13U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                   < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                                       << 0x1cU) | 
                                      (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[9U] 
                                       >> 4U)))) & 
                    ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                      + (IData)(vlSelfRef.IP_bytes_rcv)) 
                     > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                         << 0x1cU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[9U] 
                                      >> 4U))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 2U;
        } else if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[7U] 
                      >> 0x13U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                   < (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[9U] 
                                                  << 0xcU) 
                                                 | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[8U] 
                                                    >> 0x14U))))) 
                    & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       >= (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[9U] 
                                       << 0xcU) | (
                                                   vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[8U] 
                                                   >> 0x14U)))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 1U;
        } else if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 0U;
        }
        if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xaU] 
               >> 4U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                         >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                              << 0xbU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                          >> 0x15U)))) 
             & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                              >> 5U))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 3U;
        } else if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                      >> 4U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                                    << 0xbU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                                >> 0x15U)))) 
                    & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                           << 0xbU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                       >> 0x15U))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 2U;
        } else if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                      >> 4U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                              >> 5U)))) 
                    & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       >= (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                      >> 5U))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 1U;
        } else if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 0U;
        }
        if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xcU] 
               >> 0x15U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                            >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                                 << 0x1aU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                              >> 6U)))) 
             & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                < (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                               << 0xaU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xdU] 
                                           >> 0x16U)))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 3U;
        } else if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                      >> 0x15U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                   < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                                       << 0x1aU) | 
                                      (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                       >> 6U)))) & 
                    ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                      + (IData)(vlSelfRef.IP_bytes_rcv)) 
                     > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                         << 0x1aU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                      >> 6U))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 2U;
        } else if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                      >> 0x15U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                   < (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                                  << 0xaU) 
                                                 | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xdU] 
                                                    >> 0x16U))))) 
                    & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       >= (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                       << 0xaU) | (
                                                   vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xdU] 
                                                   >> 0x16U)))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 1U;
        } else if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 0U;
        }
        if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xfU] 
               >> 6U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                         >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                              << 9U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                        >> 0x17U)))) 
             & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                              >> 7U))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 3U;
        } else if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                      >> 6U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                                    << 9U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                              >> 0x17U)))) 
                    & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                           << 9U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                     >> 0x17U))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 2U;
        } else if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                      >> 6U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                              >> 7U)))) 
                    & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       >= (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                      >> 7U))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 1U;
        } else if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 0U;
        }
        if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x11U] 
               >> 0x17U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                            >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                                 << 0x18U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                              >> 8U)))) 
             & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                < (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                               << 8U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x12U] 
                                         >> 0x18U)))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 3U;
        } else if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                      >> 0x17U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                   < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                                       << 0x18U) | 
                                      (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                       >> 8U)))) & 
                    ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                      + (IData)(vlSelfRef.IP_bytes_rcv)) 
                     > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                         << 0x18U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                      >> 8U))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 2U;
        } else if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                      >> 0x17U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                   < (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                                  << 8U) 
                                                 | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x12U] 
                                                    >> 0x18U))))) 
                    & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       >= (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                       << 8U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x12U] 
                                                 >> 0x18U)))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 1U;
        } else if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 0U;
        }
        if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x14U] 
               >> 8U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                         >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                              << 7U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                        >> 0x19U)))) 
             & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                              >> 9U))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 3U;
        } else if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                      >> 8U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                    << 7U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                              >> 0x19U)))) 
                    & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                           << 7U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                     >> 0x19U))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 2U;
        } else if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                      >> 8U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                              >> 9U)))) 
                    & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       >= (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                      >> 9U))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 1U;
        } else if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 0U;
        }
        if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x16U] 
               >> 0x19U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                            >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                                 << 0x16U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                              >> 0xaU)))) 
             & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                < (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                               << 6U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x17U] 
                                         >> 0x1aU)))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 3U;
        } else if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                      >> 0x19U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                   < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                                       << 0x16U) | 
                                      (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                       >> 0xaU)))) 
                    & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                           << 0x16U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                        >> 0xaU))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 2U;
        } else if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                      >> 0x19U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                   < (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                                  << 6U) 
                                                 | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x17U] 
                                                    >> 0x1aU))))) 
                    & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       >= (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                       << 6U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x17U] 
                                                 >> 0x1aU)))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 1U;
        } else if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 0U;
        }
        if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x19U] 
               >> 0xaU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                           >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                << 5U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                          >> 0x1bU)))) 
             & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                              >> 0xbU))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 3U;
        } else if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                      >> 0xaU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                  < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                      << 5U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                                >> 0x1bU)))) 
                    & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                           << 5U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                     >> 0x1bU))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 2U;
        } else if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                      >> 0xaU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                  < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                                >> 0xbU)))) 
                    & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       >= (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                      >> 0xbU))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 1U;
        } else if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 0U;
        }
        if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
               >> 0x1bU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                            >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                                 << 0x14U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                              >> 0xcU)))) 
             & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                < (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                               << 4U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1cU] 
                                         >> 0x1cU)))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 3U;
        } else if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                      >> 0x1bU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                   < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                                       << 0x14U) | 
                                      (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                       >> 0xcU)))) 
                    & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                           << 0x14U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                        >> 0xcU))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 2U;
        } else if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                      >> 0x1bU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                   < (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                                  << 4U) 
                                                 | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1cU] 
                                                    >> 0x1cU))))) 
                    & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       >= (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                       << 4U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1cU] 
                                                 >> 0x1cU)))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 1U;
        } else if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 0U;
        }
        if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
               >> 0xcU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                           >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                << 3U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                          >> 0x1dU)))) 
             & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                              >> 0xdU))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 3U;
        } else if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                      >> 0xcU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                  < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                      << 3U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                                >> 0x1dU)))) 
                    & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                           << 3U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                     >> 0x1dU))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 2U;
        } else if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                      >> 0xcU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                  < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                                >> 0xdU)))) 
                    & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       >= (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                      >> 0xdU))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 1U;
        } else if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 0U;
        }
        if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x20U] 
               >> 0x1dU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                            >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                                 << 0x12U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                              >> 0xeU)))) 
             & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                < (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                               << 2U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x21U] 
                                         >> 0x1eU)))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 3U;
        } else if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                      >> 0x1dU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                   < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                                       << 0x12U) | 
                                      (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                       >> 0xeU)))) 
                    & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                           << 0x12U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                        >> 0xeU))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 2U;
        } else if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                      >> 0x1dU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                   < (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                                  << 2U) 
                                                 | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x21U] 
                                                    >> 0x1eU))))) 
                    & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       >= (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                       << 2U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x21U] 
                                                 >> 0x1eU)))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 1U;
        } else if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 0U;
        }
        if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x23U] 
               >> 0xeU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                           >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                                << 1U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                          >> 0x1fU)))) 
             & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                              >> 0xfU))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 3U;
        } else if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                      >> 0xeU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                  < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                                      << 1U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                                >> 0x1fU)))) 
                    & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                           << 1U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                     >> 0x1fU))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 2U;
        } else if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                      >> 0xeU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                  < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                                >> 0xfU)))) 
                    & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       >= (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                      >> 0xfU))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 1U;
        } else if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 0U;
        }
        if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x25U] 
               >> 0x1fU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                            >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x28U] 
                                 << 0x10U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x27U] 
                                              >> 0x10U)))) 
             & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                < (0xffffU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x27U])))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 3U;
        } else if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                      >> 0x1fU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                   < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x28U] 
                                       << 0x10U) | 
                                      (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x27U] 
                                       >> 0x10U)))) 
                    & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x28U] 
                           << 0x10U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x27U] 
                                        >> 0x10U))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 2U;
        } else if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                      >> 0x1fU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                   < (0xffffU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x27U]))) 
                    & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                        + (IData)(vlSelfRef.IP_bytes_rcv)) 
                       >= (0xffffU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x27U])))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 1U;
        } else if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = 0U;
        }
        if ((1U & (~ ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0U] 
                       & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
                               << 0xfU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[1U] 
                                           >> 0x11U)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[1U] 
                                       >> 1U))))))) {
            if (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0U] 
                  & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
                         << 0xfU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[1U] 
                                     >> 0x11U)))) & 
                 ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                   + (IData)(vlSelfRef.IP_bytes_rcv)) 
                  > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
                      << 0xfU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[1U] 
                                  >> 0x11U))))) {
                if (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nlen_flush_ptr 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr)));
                }
            } else if ((1U & (~ ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0U] 
                                  & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                     < (0xffffU & (
                                                   vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[1U] 
                                                   >> 1U)))) 
                                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                    >= (0xffffU & (
                                                   vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[1U] 
                                                   >> 1U))))))) {
                if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
                    if (((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) 
                         & (IData)(vlSelfRef.top__DOT__axis_t_last_int))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nlen_flush_ptr 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr)));
                    }
                }
            }
        }
        if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
                        >> 0x11U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U] 
                                          << 0x1eU) 
                                         | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[4U] 
                                            >> 2U)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[4U] 
                                        << 0xeU) | 
                                       (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[3U] 
                                        >> 0x12U)))))))) {
            if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
                   >> 0x11U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U] 
                                    << 0x1eU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[4U] 
                                                 >> 2U)))) 
                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U] 
                        << 0x1eU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[4U] 
                                     >> 2U))))) {
                if (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nlen_flush_ptr 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr)));
                }
            } else if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
                                   >> 0x11U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                                < (0xffffU 
                                                   & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[4U] 
                                                       << 0xeU) 
                                                      | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[3U] 
                                                         >> 0x12U))))) 
                                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                    >= (0xffffU & (
                                                   (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[4U] 
                                                    << 0xeU) 
                                                   | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[3U] 
                                                      >> 0x12U)))))))) {
                if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
                    if (((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) 
                         & (IData)(vlSelfRef.top__DOT__axis_t_last_int))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nlen_flush_ptr 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr)));
                    }
                }
            }
        }
        if ((1U & (~ ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0U] 
                       & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
                               << 0xfU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[1U] 
                                           >> 0x11U)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[1U] 
                                       >> 1U))))))) {
            if (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0U] 
                  & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
                         << 0xfU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[1U] 
                                     >> 0x11U)))) & 
                 ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                   + (IData)(vlSelfRef.IP_bytes_rcv)) 
                  > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
                      << 0xfU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[1U] 
                                  >> 0x11U))))) {
                if (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                        = (((~ (0xfULL << (0x3fU & 
                                           VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                            & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list) 
                           | ((QData)((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                              << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                }
            } else if ((1U & (~ ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0U] 
                                  & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                     < (0xffffU & (
                                                   vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[1U] 
                                                   >> 1U)))) 
                                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                    >= (0xffffU & (
                                                   vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[1U] 
                                                   >> 1U))))))) {
                if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
                    if (((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) 
                         & (IData)(vlSelfRef.top__DOT__axis_t_last_int))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                            = (((~ (0xfULL << (0x3fU 
                                               & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                                & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list) 
                               | ((QData)((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                  << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                    }
                }
            }
        }
        if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
                        >> 0x11U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U] 
                                          << 0x1eU) 
                                         | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[4U] 
                                            >> 2U)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[4U] 
                                        << 0xeU) | 
                                       (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[3U] 
                                        >> 0x12U)))))))) {
            if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
                   >> 0x11U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U] 
                                    << 0x1eU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[4U] 
                                                 >> 2U)))) 
                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U] 
                        << 0x1eU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[4U] 
                                     >> 2U))))) {
                if (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                        = (((~ (0xfULL << (0x3fU & 
                                           VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                            & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list) 
                           | ((QData)((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                              << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                }
            } else if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
                                   >> 0x11U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                                < (0xffffU 
                                                   & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[4U] 
                                                       << 0xeU) 
                                                      | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[3U] 
                                                         >> 0x12U))))) 
                                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                    >= (0xffffU & (
                                                   (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[4U] 
                                                    << 0xeU) 
                                                   | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[3U] 
                                                      >> 0x12U)))))))) {
                if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
                    if (((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) 
                         & (IData)(vlSelfRef.top__DOT__axis_t_last_int))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                            = (((~ (0xfULL << (0x3fU 
                                               & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                                & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list) 
                               | ((QData)((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                  << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                    }
                }
            }
        }
        if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U] 
                        >> 2U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                  >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[7U] 
                                       << 0xdU) | (
                                                   vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[6U] 
                                                   >> 0x13U)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[6U] 
                                       >> 3U))))))) {
            if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U] 
                   >> 2U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                             < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[7U] 
                                 << 0xdU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[6U] 
                                             >> 0x13U)))) 
                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[7U] 
                        << 0xdU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[6U] 
                                    >> 0x13U))))) {
                if (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nlen_flush_ptr 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr)));
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                        = (((~ (0xfULL << (0x3fU & 
                                           VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                            & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list) 
                           | ((QData)((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                              << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                }
            } else if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U] 
                                   >> 2U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                             < (0xffffU 
                                                & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[6U] 
                                                   >> 3U)))) 
                                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                    >= (0xffffU & (
                                                   vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[6U] 
                                                   >> 3U))))))) {
                if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
                    if (((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) 
                         & (IData)(vlSelfRef.top__DOT__axis_t_last_int))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nlen_flush_ptr 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr)));
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                            = (((~ (0xfULL << (0x3fU 
                                               & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                                & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list) 
                               | ((QData)((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                  << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                    }
                }
            }
        }
        if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[7U] 
                        >> 0x13U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                                          << 0x1cU) 
                                         | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[9U] 
                                            >> 4U)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[9U] 
                                        << 0xcU) | 
                                       (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[8U] 
                                        >> 0x14U)))))))) {
            if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[7U] 
                   >> 0x13U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                                    << 0x1cU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[9U] 
                                                 >> 4U)))) 
                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                        << 0x1cU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[9U] 
                                     >> 4U))))) {
                if (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nlen_flush_ptr 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr)));
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                        = (((~ (0xfULL << (0x3fU & 
                                           VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                            & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list) 
                           | ((QData)((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                              << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                }
            } else if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[7U] 
                                   >> 0x13U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                                < (0xffffU 
                                                   & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[9U] 
                                                       << 0xcU) 
                                                      | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[8U] 
                                                         >> 0x14U))))) 
                                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                    >= (0xffffU & (
                                                   (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[9U] 
                                                    << 0xcU) 
                                                   | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[8U] 
                                                      >> 0x14U)))))))) {
                if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
                    if (((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) 
                         & (IData)(vlSelfRef.top__DOT__axis_t_last_int))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nlen_flush_ptr 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr)));
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                            = (((~ (0xfULL << (0x3fU 
                                               & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                                & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list) 
                               | ((QData)((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                  << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                    }
                }
            }
        }
        if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                        >> 4U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                  >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                                       << 0xbU) | (
                                                   vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                                   >> 0x15U)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                       >> 5U))))))) {
            if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                   >> 4U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                             < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                                 << 0xbU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                             >> 0x15U)))) 
                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                        << 0xbU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                    >> 0x15U))))) {
                if (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nlen_flush_ptr 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr)));
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                        = (((~ (0xfULL << (0x3fU & 
                                           VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                            & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list) 
                           | ((QData)((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                              << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                }
            } else if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                                   >> 4U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                             < (0xffffU 
                                                & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                                   >> 5U)))) 
                                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                    >= (0xffffU & (
                                                   vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                                   >> 5U))))))) {
                if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
                    if (((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) 
                         & (IData)(vlSelfRef.top__DOT__axis_t_last_int))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nlen_flush_ptr 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr)));
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                            = (((~ (0xfULL << (0x3fU 
                                               & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                                & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list) 
                               | ((QData)((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                  << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                    }
                }
            }
        }
        if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                        >> 0x15U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                                          << 0x1aU) 
                                         | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                            >> 6U)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                        << 0xaU) | 
                                       (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xdU] 
                                        >> 0x16U)))))))) {
            if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                   >> 0x15U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                                    << 0x1aU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                                 >> 6U)))) 
                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                        << 0x1aU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                     >> 6U))))) {
                if (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nlen_flush_ptr 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr)));
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                        = (((~ (0xfULL << (0x3fU & 
                                           VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                            & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list) 
                           | ((QData)((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                              << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                }
            } else if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                                   >> 0x15U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                                < (0xffffU 
                                                   & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                                       << 0xaU) 
                                                      | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xdU] 
                                                         >> 0x16U))))) 
                                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                    >= (0xffffU & (
                                                   (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                                    << 0xaU) 
                                                   | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xdU] 
                                                      >> 0x16U)))))))) {
                if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
                    if (((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) 
                         & (IData)(vlSelfRef.top__DOT__axis_t_last_int))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nlen_flush_ptr 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr)));
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                            = (((~ (0xfULL << (0x3fU 
                                               & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                                & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list) 
                               | ((QData)((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                  << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                    }
                }
            }
        }
        if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                        >> 6U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                  >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                                       << 9U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                                 >> 0x17U)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                       >> 7U))))))) {
            if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                   >> 6U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                             < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                                 << 9U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                           >> 0x17U)))) 
                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                        << 9U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                  >> 0x17U))))) {
                if (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nlen_flush_ptr 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr)));
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                        = (((~ (0xfULL << (0x3fU & 
                                           VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                            & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list) 
                           | ((QData)((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                              << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                }
            } else if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                                   >> 6U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                             < (0xffffU 
                                                & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                                   >> 7U)))) 
                                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                    >= (0xffffU & (
                                                   vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                                   >> 7U))))))) {
                if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
                    if (((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) 
                         & (IData)(vlSelfRef.top__DOT__axis_t_last_int))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nlen_flush_ptr 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr)));
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                            = (((~ (0xfULL << (0x3fU 
                                               & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                                & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list) 
                               | ((QData)((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                  << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                    }
                }
            }
        }
        if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                        >> 0x17U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                                          << 0x18U) 
                                         | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                            >> 8U)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                        << 8U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x12U] 
                                                  >> 0x18U)))))))) {
            if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                   >> 0x17U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                                    << 0x18U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                                 >> 8U)))) 
                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                        << 0x18U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                     >> 8U))))) {
                if (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nlen_flush_ptr 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr)));
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                        = (((~ (0xfULL << (0x3fU & 
                                           VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                            & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list) 
                           | ((QData)((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                              << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                }
            } else if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                                   >> 0x17U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                                < (0xffffU 
                                                   & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                                       << 8U) 
                                                      | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x12U] 
                                                         >> 0x18U))))) 
                                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                    >= (0xffffU & (
                                                   (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                                    << 8U) 
                                                   | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x12U] 
                                                      >> 0x18U)))))))) {
                if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
                    if (((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) 
                         & (IData)(vlSelfRef.top__DOT__axis_t_last_int))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nlen_flush_ptr 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr)));
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                            = (((~ (0xfULL << (0x3fU 
                                               & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                                & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list) 
                               | ((QData)((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                  << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                    }
                }
            }
        }
        if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                        >> 8U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                  >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                       << 7U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                                 >> 0x19U)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                       >> 9U))))))) {
            if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                   >> 8U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                             < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                 << 7U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                           >> 0x19U)))) 
                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                        << 7U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                  >> 0x19U))))) {
                if (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nlen_flush_ptr 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr)));
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                        = (((~ (0xfULL << (0x3fU & 
                                           VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                            & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list) 
                           | ((QData)((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                              << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                }
            } else if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                                   >> 8U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                             < (0xffffU 
                                                & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                                   >> 9U)))) 
                                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                    >= (0xffffU & (
                                                   vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                                   >> 9U))))))) {
                if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
                    if (((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) 
                         & (IData)(vlSelfRef.top__DOT__axis_t_last_int))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nlen_flush_ptr 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr)));
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                            = (((~ (0xfULL << (0x3fU 
                                               & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                                & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list) 
                               | ((QData)((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                  << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                    }
                }
            }
        }
        if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                        >> 0x19U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                                          << 0x16U) 
                                         | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                            >> 0xaU)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                        << 6U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x17U] 
                                                  >> 0x1aU)))))))) {
            if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                   >> 0x19U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                                    << 0x16U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                                 >> 0xaU)))) 
                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                        << 0x16U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                     >> 0xaU))))) {
                if (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nlen_flush_ptr 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr)));
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                        = (((~ (0xfULL << (0x3fU & 
                                           VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                            & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list) 
                           | ((QData)((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                              << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                }
            } else if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                   >> 0x19U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                                < (0xffffU 
                                                   & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                                       << 6U) 
                                                      | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x17U] 
                                                         >> 0x1aU))))) 
                                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                    >= (0xffffU & (
                                                   (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                                    << 6U) 
                                                   | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x17U] 
                                                      >> 0x1aU)))))))) {
                if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
                    if (((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) 
                         & (IData)(vlSelfRef.top__DOT__axis_t_last_int))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nlen_flush_ptr 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr)));
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                            = (((~ (0xfULL << (0x3fU 
                                               & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                                & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list) 
                               | ((QData)((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                  << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                    }
                }
            }
        }
        if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                        >> 0xaU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                    >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                         << 5U) | (
                                                   vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                                   >> 0x1bU)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                       >> 0xbU))))))) {
            if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                   >> 0xaU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                               < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                   << 5U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                             >> 0x1bU)))) 
                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                        << 5U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                  >> 0x1bU))))) {
                if (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nlen_flush_ptr 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr)));
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                        = (((~ (0xfULL << (0x3fU & 
                                           VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                            & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list) 
                           | ((QData)((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                              << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                }
            } else if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                                   >> 0xaU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                               < (0xffffU 
                                                  & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                                     >> 0xbU)))) 
                                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                    >= (0xffffU & (
                                                   vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                                   >> 0xbU))))))) {
                if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
                    if (((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) 
                         & (IData)(vlSelfRef.top__DOT__axis_t_last_int))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nlen_flush_ptr 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr)));
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                            = (((~ (0xfULL << (0x3fU 
                                               & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                                & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list) 
                               | ((QData)((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                  << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                    }
                }
            }
        }
        if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                        >> 0x1bU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                                          << 0x14U) 
                                         | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                            >> 0xcU)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                        << 4U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1cU] 
                                                  >> 0x1cU)))))))) {
            if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                   >> 0x1bU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                                    << 0x14U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                                 >> 0xcU)))) 
                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                        << 0x14U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                     >> 0xcU))))) {
                if (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nlen_flush_ptr 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr)));
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                        = (((~ (0xfULL << (0x3fU & 
                                           VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                            & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list) 
                           | ((QData)((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                              << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                }
            } else if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                   >> 0x1bU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                                < (0xffffU 
                                                   & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                                       << 4U) 
                                                      | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1cU] 
                                                         >> 0x1cU))))) 
                                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                    >= (0xffffU & (
                                                   (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                                    << 4U) 
                                                   | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1cU] 
                                                      >> 0x1cU)))))))) {
                if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
                    if (((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) 
                         & (IData)(vlSelfRef.top__DOT__axis_t_last_int))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nlen_flush_ptr 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr)));
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                            = (((~ (0xfULL << (0x3fU 
                                               & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                                & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list) 
                               | ((QData)((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                  << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                    }
                }
            }
        }
        if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                        >> 0xcU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                    >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                         << 3U) | (
                                                   vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                                   >> 0x1dU)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                       >> 0xdU))))))) {
            if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                   >> 0xcU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                               < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                   << 3U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                             >> 0x1dU)))) 
                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                        << 3U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                  >> 0x1dU))))) {
                if (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nlen_flush_ptr 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr)));
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                        = (((~ (0xfULL << (0x3fU & 
                                           VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                            & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list) 
                           | ((QData)((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                              << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                }
            } else if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                                   >> 0xcU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                               < (0xffffU 
                                                  & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                                     >> 0xdU)))) 
                                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                    >= (0xffffU & (
                                                   vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                                   >> 0xdU))))))) {
                if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
                    if (((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) 
                         & (IData)(vlSelfRef.top__DOT__axis_t_last_int))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nlen_flush_ptr 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr)));
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                            = (((~ (0xfULL << (0x3fU 
                                               & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                                & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list) 
                               | ((QData)((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                  << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                    }
                }
            }
        }
        if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                        >> 0x1dU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                                          << 0x12U) 
                                         | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                            >> 0xeU)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                        << 2U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x21U] 
                                                  >> 0x1eU)))))))) {
            if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                   >> 0x1dU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                                    << 0x12U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                                 >> 0xeU)))) 
                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                        << 0x12U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                     >> 0xeU))))) {
                if (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nlen_flush_ptr 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr)));
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                        = (((~ (0xfULL << (0x3fU & 
                                           VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                            & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list) 
                           | ((QData)((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                              << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                }
            } else if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                   >> 0x1dU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                                < (0xffffU 
                                                   & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                                       << 2U) 
                                                      | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x21U] 
                                                         >> 0x1eU))))) 
                                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                    >= (0xffffU & (
                                                   (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                                    << 2U) 
                                                   | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x21U] 
                                                      >> 0x1eU)))))))) {
                if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
                    if (((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) 
                         & (IData)(vlSelfRef.top__DOT__axis_t_last_int))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nlen_flush_ptr 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr)));
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                            = (((~ (0xfULL << (0x3fU 
                                               & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                                & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list) 
                               | ((QData)((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                  << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                    }
                }
            }
        }
        if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                        >> 0xeU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                    >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                                         << 1U) | (
                                                   vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                                   >> 0x1fU)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                       >> 0xfU))))))) {
            if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                   >> 0xeU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                               < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                                   << 1U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                             >> 0x1fU)))) 
                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                        << 1U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                  >> 0x1fU))))) {
                if (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nlen_flush_ptr 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr)));
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                        = (((~ (0xfULL << (0x3fU & 
                                           VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                            & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list) 
                           | ((QData)((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                              << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                }
            } else if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                                   >> 0xeU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                               < (0xffffU 
                                                  & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                                     >> 0xfU)))) 
                                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                    >= (0xffffU & (
                                                   vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                                   >> 0xfU))))))) {
                if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
                    if (((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) 
                         & (IData)(vlSelfRef.top__DOT__axis_t_last_int))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nlen_flush_ptr 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr)));
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                            = (((~ (0xfULL << (0x3fU 
                                               & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                                & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list) 
                               | ((QData)((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                  << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                    }
                }
            }
        }
        if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                        >> 0x1fU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x28U] 
                                          << 0x10U) 
                                         | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x27U] 
                                            >> 0x10U)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x27U])))))) {
            if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                   >> 0x1fU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x28U] 
                                    << 0x10U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x27U] 
                                                 >> 0x10U)))) 
                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x28U] 
                        << 0x10U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x27U] 
                                     >> 0x10U))))) {
                if (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nlen_flush_ptr 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr)));
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                        = (((~ (0xfULL << (0x3fU & 
                                           VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                            & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list) 
                           | ((QData)((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                              << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                }
            } else if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                                   >> 0x1fU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                                < (0xffffU 
                                                   & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x27U]))) 
                                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                    >= (0xffffU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x27U])))))) {
                if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
                    if (((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) 
                         & (IData)(vlSelfRef.top__DOT__axis_t_last_int))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nlen_flush_ptr 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr)));
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list 
                            = (((~ (0xfULL << (0x3fU 
                                               & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U)))) 
                                & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list) 
                               | ((QData)((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                  << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr), 2U))));
                    }
                }
            }
        }
        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nseq_rx_trk 
            = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
               + (IData)(vlSelfRef.IP_bytes_rcv));
        if ((1U & (~ ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0U] 
                       & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
                               << 0xfU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[1U] 
                                           >> 0x11U)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[1U] 
                                       >> 1U))))))) {
            if (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0U] 
                  & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
                         << 0xfU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[1U] 
                                     >> 0x11U)))) & 
                 ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                   + (IData)(vlSelfRef.IP_bytes_rcv)) 
                  > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
                      << 0xfU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[1U] 
                                  >> 0x11U))))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                - ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[1U] 
                                    << 0xfU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[1U] 
                                                >> 0x11U))));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.top__DOT__wr_pfifo_offset_int 
                    = (0xffU & VL_SHIFTL_III(8,8,8, (IData)(0xffU), (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
                if (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0 
                        = vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0 
                        = (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0 
                        = vlSelfRef.top__DOT__u_tcp__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0 
                        = vlSelfRef.top__DOT__u_payload_fifo__DOT__wr_ptr;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                                & (((IData)(0x51U) 
                                                                                * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                                                                >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
                if ((vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx 
                     == vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__rcv_next)) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nrcv_next 
                        = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                           + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left));
                }
            } else if (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0U] 
                         & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                            < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[1U] 
                                          >> 1U)))) 
                        & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                            + (IData)(vlSelfRef.IP_bytes_rcv)) 
                           >= (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[1U] 
                                          >> 1U))))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[1U] 
                                   << 0xfU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[1U] 
                                               >> 0x11U)) 
                                 + (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[1U] 
                                               >> 1U))) 
                                - vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nseq_rx_trk 
                    = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                       + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left));
                vlSelfRef.top__DOT__wr_pfifo_offset_int 
                    = (0xffU & VL_SHIFTR_III(8,8,8, 0xffU, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
            } else if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
                vlSelfRef.top__DOT__wr_pfifo_offset_int 
                    = (0xffU & VL_SHIFTR_III(8,8,32, 0xffU, 
                                             ((IData)(8U) 
                                              - (IData)(vlSelfRef.IP_bytes_rcv))));
                if (((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) 
                     & (IData)(vlSelfRef.top__DOT__axis_t_last_int))) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1 
                        = vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1);
                    }
                    if ((vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx 
                         == vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__rcv_next)) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nrcv_next 
                            = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                               + (IData)(vlSelfRef.IP_bytes_rcv));
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1 
                        = (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.IP_bytes_rcv)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1 
                        = vlSelfRef.top__DOT__u_tcp__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1 
                        = vlSelfRef.top__DOT__u_payload_fifo__DOT__wr_ptr;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                                & (((IData)(0x51U) 
                                                                                * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                                                                >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
            }
        }
    }
    if (vlSelfRef.axis_r_en) {
        vlSelfRef.top__DOT__u_payload_fifo__DOT__nrd_ptr 
            = (7U & (((IData)(vlSelfRef.top__DOT__u_payload_fifo__DOT__rd_FIFO_valid_l) 
                      & ((IData)(vlSelfRef.top__DOT__u_payload_fifo__DOT__rd_ptr) 
                         != (IData)(vlSelfRef.top__DOT__u_payload_fifo__DOT__flush_ptr)))
                      ? ((IData)(1U) + (IData)(vlSelfRef.top__DOT__u_payload_fifo__DOT__rd_ptr))
                      : (IData)(vlSelfRef.top__DOT__u_payload_fifo__DOT__rd_ptr)));
        if (((vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
              == ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
                   << 0xfU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[1U] 
                               >> 0x11U))) & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0U])) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0U] 
                = (0xfffffffeU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0U]);
        }
    }
    if (vlSelfRef.top__DOT__nw_segment) {
        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nseq_rx_trk 
            = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
               + (IData)(vlSelfRef.IP_bytes_rcv));
        if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
                        >> 0x11U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U] 
                                          << 0x1eU) 
                                         | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[4U] 
                                            >> 2U)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[4U] 
                                        << 0xeU) | 
                                       (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[3U] 
                                        >> 0x12U)))))))) {
            if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
                   >> 0x11U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U] 
                                    << 0x1eU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[4U] 
                                                 >> 2U)))) 
                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U] 
                        << 0x1eU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[4U] 
                                     >> 2U))))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                - ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[4U] 
                                    << 0x1eU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[4U] 
                                                 >> 2U))));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.top__DOT__wr_pfifo_offset_int 
                    = (0xffU & VL_SHIFTL_III(8,8,8, (IData)(0xffU), (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
                if (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0 
                        = vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0 
                        = (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0 
                        = vlSelfRef.top__DOT__u_tcp__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0 
                        = vlSelfRef.top__DOT__u_payload_fifo__DOT__wr_ptr;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                                & (((IData)(0x51U) 
                                                                                * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                                                                >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
                if ((vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx 
                     == vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__rcv_next)) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nrcv_next 
                        = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                           + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left));
                }
            } else if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
                          >> 0x11U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                       < (0xffffU & 
                                          ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[4U] 
                                            << 0xeU) 
                                           | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[3U] 
                                              >> 0x12U))))) 
                        & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                            + (IData)(vlSelfRef.IP_bytes_rcv)) 
                           >= (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[4U] 
                                           << 0xeU) 
                                          | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[3U] 
                                             >> 0x12U)))))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[4U] 
                                   << 0x1eU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[4U] 
                                                >> 2U)) 
                                 + (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[4U] 
                                                << 0xeU) 
                                               | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[3U] 
                                                  >> 0x12U)))) 
                                - vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nseq_rx_trk 
                    = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                       + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left));
                vlSelfRef.top__DOT__wr_pfifo_offset_int 
                    = (0xffU & VL_SHIFTR_III(8,8,8, 0xffU, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
            } else if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
                vlSelfRef.top__DOT__wr_pfifo_offset_int 
                    = (0xffU & VL_SHIFTR_III(8,8,32, 0xffU, 
                                             ((IData)(8U) 
                                              - (IData)(vlSelfRef.IP_bytes_rcv))));
                if (((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) 
                     & (IData)(vlSelfRef.top__DOT__axis_t_last_int))) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1 
                        = vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1);
                    }
                    if ((vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx 
                         == vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__rcv_next)) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nrcv_next 
                            = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                               + (IData)(vlSelfRef.IP_bytes_rcv));
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1 
                        = (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.IP_bytes_rcv)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1 
                        = vlSelfRef.top__DOT__u_tcp__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1 
                        = vlSelfRef.top__DOT__u_payload_fifo__DOT__wr_ptr;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                                & (((IData)(0x51U) 
                                                                                * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                                                                >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
            }
        }
    }
    if (vlSelfRef.axis_r_en) {
        if (((vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
              == ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U] 
                   << 0x1eU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[4U] 
                                >> 2U))) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[2U] 
                                            >> 0x11U))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[2U] 
                = (0xfffdffffU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[2U]);
        }
    }
    if (vlSelfRef.top__DOT__nw_segment) {
        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nseq_rx_trk 
            = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
               + (IData)(vlSelfRef.IP_bytes_rcv));
        if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U] 
                        >> 2U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                  >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[7U] 
                                       << 0xdU) | (
                                                   vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[6U] 
                                                   >> 0x13U)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[6U] 
                                       >> 3U))))))) {
            if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U] 
                   >> 2U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                             < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[7U] 
                                 << 0xdU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[6U] 
                                             >> 0x13U)))) 
                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[7U] 
                        << 0xdU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[6U] 
                                    >> 0x13U))))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                - ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[6U] 
                                    << 0xdU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[6U] 
                                                >> 0x13U))));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.top__DOT__wr_pfifo_offset_int 
                    = (0xffU & VL_SHIFTL_III(8,8,8, (IData)(0xffU), (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
                if (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0 
                        = vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0 
                        = (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0 
                        = vlSelfRef.top__DOT__u_tcp__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0 
                        = vlSelfRef.top__DOT__u_payload_fifo__DOT__wr_ptr;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                                & (((IData)(0x51U) 
                                                                                * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                                                                >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
                if ((vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx 
                     == vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__rcv_next)) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nrcv_next 
                        = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                           + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left));
                }
            } else if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U] 
                          >> 2U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                    < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[6U] 
                                                  >> 3U)))) 
                        & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                            + (IData)(vlSelfRef.IP_bytes_rcv)) 
                           >= (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[6U] 
                                          >> 3U))))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[6U] 
                                   << 0xdU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[6U] 
                                               >> 0x13U)) 
                                 + (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[6U] 
                                               >> 3U))) 
                                - vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nseq_rx_trk 
                    = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                       + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left));
                vlSelfRef.top__DOT__wr_pfifo_offset_int 
                    = (0xffU & VL_SHIFTR_III(8,8,8, 0xffU, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
            } else if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
                vlSelfRef.top__DOT__wr_pfifo_offset_int 
                    = (0xffU & VL_SHIFTR_III(8,8,32, 0xffU, 
                                             ((IData)(8U) 
                                              - (IData)(vlSelfRef.IP_bytes_rcv))));
                if (((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) 
                     & (IData)(vlSelfRef.top__DOT__axis_t_last_int))) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1 
                        = vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1);
                    }
                    if ((vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx 
                         == vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__rcv_next)) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nrcv_next 
                            = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                               + (IData)(vlSelfRef.IP_bytes_rcv));
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1 
                        = (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.IP_bytes_rcv)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1 
                        = vlSelfRef.top__DOT__u_tcp__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1 
                        = vlSelfRef.top__DOT__u_payload_fifo__DOT__wr_ptr;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                                & (((IData)(0x51U) 
                                                                                * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                                                                >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
            }
        }
    }
    if (vlSelfRef.axis_r_en) {
        if (((vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
              == ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[7U] 
                   << 0xdU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[6U] 
                               >> 0x13U))) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[5U] 
                                              >> 2U))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[5U] 
                = (0xfffffffbU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[5U]);
        }
    }
    if (vlSelfRef.top__DOT__nw_segment) {
        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nseq_rx_trk 
            = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
               + (IData)(vlSelfRef.IP_bytes_rcv));
        if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[7U] 
                        >> 0x13U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                                          << 0x1cU) 
                                         | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[9U] 
                                            >> 4U)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[9U] 
                                        << 0xcU) | 
                                       (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[8U] 
                                        >> 0x14U)))))))) {
            if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[7U] 
                   >> 0x13U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                                    << 0x1cU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[9U] 
                                                 >> 4U)))) 
                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                        << 0x1cU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[9U] 
                                     >> 4U))))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                - ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[9U] 
                                    << 0x1cU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[9U] 
                                                 >> 4U))));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.top__DOT__wr_pfifo_offset_int 
                    = (0xffU & VL_SHIFTL_III(8,8,8, (IData)(0xffU), (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
                if (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0 
                        = vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0 
                        = (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0 
                        = vlSelfRef.top__DOT__u_tcp__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0 
                        = vlSelfRef.top__DOT__u_payload_fifo__DOT__wr_ptr;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                                & (((IData)(0x51U) 
                                                                                * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                                                                >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
                if ((vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx 
                     == vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__rcv_next)) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nrcv_next 
                        = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                           + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left));
                }
            } else if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[7U] 
                          >> 0x13U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                       < (0xffffU & 
                                          ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[9U] 
                                            << 0xcU) 
                                           | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[8U] 
                                              >> 0x14U))))) 
                        & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                            + (IData)(vlSelfRef.IP_bytes_rcv)) 
                           >= (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[9U] 
                                           << 0xcU) 
                                          | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[8U] 
                                             >> 0x14U)))))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[9U] 
                                   << 0x1cU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[9U] 
                                                >> 4U)) 
                                 + (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[9U] 
                                                << 0xcU) 
                                               | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[8U] 
                                                  >> 0x14U)))) 
                                - vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nseq_rx_trk 
                    = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                       + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left));
                vlSelfRef.top__DOT__wr_pfifo_offset_int 
                    = (0xffU & VL_SHIFTR_III(8,8,8, 0xffU, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
            } else if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
                vlSelfRef.top__DOT__wr_pfifo_offset_int 
                    = (0xffU & VL_SHIFTR_III(8,8,32, 0xffU, 
                                             ((IData)(8U) 
                                              - (IData)(vlSelfRef.IP_bytes_rcv))));
                if (((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) 
                     & (IData)(vlSelfRef.top__DOT__axis_t_last_int))) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1 
                        = vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1);
                    }
                    if ((vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx 
                         == vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__rcv_next)) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nrcv_next 
                            = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                               + (IData)(vlSelfRef.IP_bytes_rcv));
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1 
                        = (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.IP_bytes_rcv)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1 
                        = vlSelfRef.top__DOT__u_tcp__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1 
                        = vlSelfRef.top__DOT__u_payload_fifo__DOT__wr_ptr;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                                & (((IData)(0x51U) 
                                                                                * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                                                                >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
            }
        }
    }
    if (vlSelfRef.axis_r_en) {
        if (((vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
              == ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                   << 0x1cU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[9U] 
                                >> 4U))) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[7U] 
                                            >> 0x13U))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[7U] 
                = (0xfff7ffffU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[7U]);
        }
    }
    if (vlSelfRef.top__DOT__nw_segment) {
        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nseq_rx_trk 
            = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
               + (IData)(vlSelfRef.IP_bytes_rcv));
        if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                        >> 4U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                  >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                                       << 0xbU) | (
                                                   vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                                   >> 0x15U)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                       >> 5U))))))) {
            if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                   >> 4U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                             < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                                 << 0xbU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                             >> 0x15U)))) 
                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                        << 0xbU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                    >> 0x15U))))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                - ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                    << 0xbU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                                >> 0x15U))));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.top__DOT__wr_pfifo_offset_int 
                    = (0xffU & VL_SHIFTL_III(8,8,8, (IData)(0xffU), (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
                if (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0 
                        = vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0 
                        = (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0 
                        = vlSelfRef.top__DOT__u_tcp__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0 
                        = vlSelfRef.top__DOT__u_payload_fifo__DOT__wr_ptr;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                                & (((IData)(0x51U) 
                                                                                * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                                                                >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
                if ((vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx 
                     == vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__rcv_next)) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nrcv_next 
                        = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                           + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left));
                }
            } else if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                          >> 4U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                    < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                                  >> 5U)))) 
                        & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                            + (IData)(vlSelfRef.IP_bytes_rcv)) 
                           >= (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                          >> 5U))))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                   << 0xbU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                               >> 0x15U)) 
                                 + (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                                               >> 5U))) 
                                - vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nseq_rx_trk 
                    = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                       + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left));
                vlSelfRef.top__DOT__wr_pfifo_offset_int 
                    = (0xffU & VL_SHIFTR_III(8,8,8, 0xffU, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
            } else if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
                vlSelfRef.top__DOT__wr_pfifo_offset_int 
                    = (0xffU & VL_SHIFTR_III(8,8,32, 0xffU, 
                                             ((IData)(8U) 
                                              - (IData)(vlSelfRef.IP_bytes_rcv))));
                if (((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) 
                     & (IData)(vlSelfRef.top__DOT__axis_t_last_int))) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1 
                        = vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1);
                    }
                    if ((vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx 
                         == vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__rcv_next)) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nrcv_next 
                            = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                               + (IData)(vlSelfRef.IP_bytes_rcv));
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1 
                        = (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.IP_bytes_rcv)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1 
                        = vlSelfRef.top__DOT__u_tcp__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1 
                        = vlSelfRef.top__DOT__u_payload_fifo__DOT__wr_ptr;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                                & (((IData)(0x51U) 
                                                                                * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                                                                >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
            }
        }
    }
    if (vlSelfRef.axis_r_en) {
        if (((vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
              == ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                   << 0xbU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xbU] 
                               >> 0x15U))) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xaU] 
                                              >> 4U))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0xaU] 
                = (0xffffffefU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0xaU]);
        }
    }
    if (vlSelfRef.top__DOT__nw_segment) {
        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nseq_rx_trk 
            = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
               + (IData)(vlSelfRef.IP_bytes_rcv));
        if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                        >> 0x15U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                                          << 0x1aU) 
                                         | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                            >> 6U)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                        << 0xaU) | 
                                       (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xdU] 
                                        >> 0x16U)))))))) {
            if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                   >> 0x15U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                                    << 0x1aU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                                 >> 6U)))) 
                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                        << 0x1aU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                     >> 6U))))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                - ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                    << 0x1aU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                                 >> 6U))));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.top__DOT__wr_pfifo_offset_int 
                    = (0xffU & VL_SHIFTL_III(8,8,8, (IData)(0xffU), (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
                if (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0 
                        = vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0 
                        = (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0 
                        = vlSelfRef.top__DOT__u_tcp__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0 
                        = vlSelfRef.top__DOT__u_payload_fifo__DOT__wr_ptr;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                                & (((IData)(0x51U) 
                                                                                * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                                                                >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
                if ((vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx 
                     == vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__rcv_next)) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nrcv_next 
                        = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                           + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left));
                }
            } else if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                          >> 0x15U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                       < (0xffffU & 
                                          ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                            << 0xaU) 
                                           | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xdU] 
                                              >> 0x16U))))) 
                        & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                            + (IData)(vlSelfRef.IP_bytes_rcv)) 
                           >= (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                           << 0xaU) 
                                          | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xdU] 
                                             >> 0x16U)))))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                   << 0x1aU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                                >> 6U)) 
                                 + (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                                << 0xaU) 
                                               | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xdU] 
                                                  >> 0x16U)))) 
                                - vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nseq_rx_trk 
                    = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                       + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left));
                vlSelfRef.top__DOT__wr_pfifo_offset_int 
                    = (0xffU & VL_SHIFTR_III(8,8,8, 0xffU, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
            } else if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
                vlSelfRef.top__DOT__wr_pfifo_offset_int 
                    = (0xffU & VL_SHIFTR_III(8,8,32, 0xffU, 
                                             ((IData)(8U) 
                                              - (IData)(vlSelfRef.IP_bytes_rcv))));
                if (((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) 
                     & (IData)(vlSelfRef.top__DOT__axis_t_last_int))) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1 
                        = vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1);
                    }
                    if ((vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx 
                         == vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__rcv_next)) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nrcv_next 
                            = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                               + (IData)(vlSelfRef.IP_bytes_rcv));
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1 
                        = (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.IP_bytes_rcv)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1 
                        = vlSelfRef.top__DOT__u_tcp__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1 
                        = vlSelfRef.top__DOT__u_payload_fifo__DOT__wr_ptr;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                                & (((IData)(0x51U) 
                                                                                * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                                                                >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
            }
        }
    }
    if (vlSelfRef.axis_r_en) {
        if (((vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
              == ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                   << 0x1aU) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xeU] 
                                >> 6U))) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xcU] 
                                            >> 0x15U))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0xcU] 
                = (0xffdfffffU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0xcU]);
        }
    }
    if (vlSelfRef.top__DOT__nw_segment) {
        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nseq_rx_trk 
            = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
               + (IData)(vlSelfRef.IP_bytes_rcv));
        if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                        >> 6U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                  >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                                       << 9U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                                 >> 0x17U)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                       >> 7U))))))) {
            if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                   >> 6U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                             < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                                 << 9U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                           >> 0x17U)))) 
                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                        << 9U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                  >> 0x17U))))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                - ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                    << 9U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                              >> 0x17U))));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.top__DOT__wr_pfifo_offset_int 
                    = (0xffU & VL_SHIFTL_III(8,8,8, (IData)(0xffU), (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
                if (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0 
                        = vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0 
                        = (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0 
                        = vlSelfRef.top__DOT__u_tcp__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0 
                        = vlSelfRef.top__DOT__u_payload_fifo__DOT__wr_ptr;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                                & (((IData)(0x51U) 
                                                                                * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                                                                >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
                if ((vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx 
                     == vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__rcv_next)) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nrcv_next 
                        = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                           + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left));
                }
            } else if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                          >> 6U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                    < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                                  >> 7U)))) 
                        & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                            + (IData)(vlSelfRef.IP_bytes_rcv)) 
                           >= (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                          >> 7U))))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                   << 9U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                             >> 0x17U)) 
                                 + (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                                               >> 7U))) 
                                - vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nseq_rx_trk 
                    = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                       + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left));
                vlSelfRef.top__DOT__wr_pfifo_offset_int 
                    = (0xffU & VL_SHIFTR_III(8,8,8, 0xffU, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
            } else if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
                vlSelfRef.top__DOT__wr_pfifo_offset_int 
                    = (0xffU & VL_SHIFTR_III(8,8,32, 0xffU, 
                                             ((IData)(8U) 
                                              - (IData)(vlSelfRef.IP_bytes_rcv))));
                if (((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) 
                     & (IData)(vlSelfRef.top__DOT__axis_t_last_int))) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1 
                        = vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1);
                    }
                    if ((vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx 
                         == vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__rcv_next)) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nrcv_next 
                            = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                               + (IData)(vlSelfRef.IP_bytes_rcv));
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1 
                        = (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.IP_bytes_rcv)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1 
                        = vlSelfRef.top__DOT__u_tcp__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1 
                        = vlSelfRef.top__DOT__u_payload_fifo__DOT__wr_ptr;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                                & (((IData)(0x51U) 
                                                                                * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                                                                >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
            }
        }
    }
    if (vlSelfRef.axis_r_en) {
        if (((vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
              == ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                   << 9U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x10U] 
                             >> 0x17U))) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0xfU] 
                                            >> 6U))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0xfU] 
                = (0xffffffbfU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0xfU]);
        }
    }
    if (vlSelfRef.top__DOT__nw_segment) {
        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nseq_rx_trk 
            = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
               + (IData)(vlSelfRef.IP_bytes_rcv));
        if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                        >> 0x17U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                                          << 0x18U) 
                                         | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                            >> 8U)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                        << 8U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x12U] 
                                                  >> 0x18U)))))))) {
            if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                   >> 0x17U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                                    << 0x18U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                                 >> 8U)))) 
                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                        << 0x18U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                     >> 8U))))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                - ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                    << 0x18U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                                 >> 8U))));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.top__DOT__wr_pfifo_offset_int 
                    = (0xffU & VL_SHIFTL_III(8,8,8, (IData)(0xffU), (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
                if (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0 
                        = vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0 
                        = (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0 
                        = vlSelfRef.top__DOT__u_tcp__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0 
                        = vlSelfRef.top__DOT__u_payload_fifo__DOT__wr_ptr;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                                & (((IData)(0x51U) 
                                                                                * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                                                                >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
                if ((vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx 
                     == vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__rcv_next)) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nrcv_next 
                        = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                           + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left));
                }
            } else if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                          >> 0x17U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                       < (0xffffU & 
                                          ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                            << 8U) 
                                           | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x12U] 
                                              >> 0x18U))))) 
                        & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                            + (IData)(vlSelfRef.IP_bytes_rcv)) 
                           >= (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                           << 8U) | 
                                          (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x12U] 
                                           >> 0x18U)))))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                   << 0x18U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                                >> 8U)) 
                                 + (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                                << 8U) 
                                               | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x12U] 
                                                  >> 0x18U)))) 
                                - vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nseq_rx_trk 
                    = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                       + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left));
                vlSelfRef.top__DOT__wr_pfifo_offset_int 
                    = (0xffU & VL_SHIFTR_III(8,8,8, 0xffU, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
            } else if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
                vlSelfRef.top__DOT__wr_pfifo_offset_int 
                    = (0xffU & VL_SHIFTR_III(8,8,32, 0xffU, 
                                             ((IData)(8U) 
                                              - (IData)(vlSelfRef.IP_bytes_rcv))));
                if (((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) 
                     & (IData)(vlSelfRef.top__DOT__axis_t_last_int))) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1 
                        = vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1);
                    }
                    if ((vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx 
                         == vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__rcv_next)) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nrcv_next 
                            = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                               + (IData)(vlSelfRef.IP_bytes_rcv));
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1 
                        = (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.IP_bytes_rcv)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1 
                        = vlSelfRef.top__DOT__u_tcp__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1 
                        = vlSelfRef.top__DOT__u_payload_fifo__DOT__wr_ptr;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                                & (((IData)(0x51U) 
                                                                                * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                                                                >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
            }
        }
    }
    if (vlSelfRef.axis_r_en) {
        if (((vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
              == ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                   << 0x18U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x13U] 
                                >> 8U))) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x11U] 
                                            >> 0x17U))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x11U] 
                = (0xff7fffffU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x11U]);
        }
    }
    if (vlSelfRef.top__DOT__nw_segment) {
        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nseq_rx_trk 
            = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
               + (IData)(vlSelfRef.IP_bytes_rcv));
        if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                        >> 8U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                  >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                       << 7U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                                 >> 0x19U)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                       >> 9U))))))) {
            if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                   >> 8U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                             < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                 << 7U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                           >> 0x19U)))) 
                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                        << 7U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                  >> 0x19U))))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                - ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                    << 7U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                              >> 0x19U))));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.top__DOT__wr_pfifo_offset_int 
                    = (0xffU & VL_SHIFTL_III(8,8,8, (IData)(0xffU), (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
                if (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0 
                        = vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0 
                        = (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0 
                        = vlSelfRef.top__DOT__u_tcp__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0 
                        = vlSelfRef.top__DOT__u_payload_fifo__DOT__wr_ptr;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                                & (((IData)(0x51U) 
                                                                                * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                                                                >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
                if ((vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx 
                     == vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__rcv_next)) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nrcv_next 
                        = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                           + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left));
                }
            } else if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                          >> 8U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                    < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                                  >> 9U)))) 
                        & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                            + (IData)(vlSelfRef.IP_bytes_rcv)) 
                           >= (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                          >> 9U))))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                   << 7U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                             >> 0x19U)) 
                                 + (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                                               >> 9U))) 
                                - vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nseq_rx_trk 
                    = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                       + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left));
                vlSelfRef.top__DOT__wr_pfifo_offset_int 
                    = (0xffU & VL_SHIFTR_III(8,8,8, 0xffU, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
            } else if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
                vlSelfRef.top__DOT__wr_pfifo_offset_int 
                    = (0xffU & VL_SHIFTR_III(8,8,32, 0xffU, 
                                             ((IData)(8U) 
                                              - (IData)(vlSelfRef.IP_bytes_rcv))));
                if (((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) 
                     & (IData)(vlSelfRef.top__DOT__axis_t_last_int))) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1 
                        = vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1);
                    }
                    if ((vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx 
                         == vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__rcv_next)) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nrcv_next 
                            = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                               + (IData)(vlSelfRef.IP_bytes_rcv));
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1 
                        = (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.IP_bytes_rcv)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1 
                        = vlSelfRef.top__DOT__u_tcp__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1 
                        = vlSelfRef.top__DOT__u_payload_fifo__DOT__wr_ptr;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                                & (((IData)(0x51U) 
                                                                                * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                                                                >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
            }
        }
    }
    if (vlSelfRef.axis_r_en) {
        if (((vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
              == ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                   << 7U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x15U] 
                             >> 0x19U))) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x14U] 
                                            >> 8U))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x14U] 
                = (0xfffffeffU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x14U]);
        }
    }
    if (vlSelfRef.top__DOT__nw_segment) {
        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nseq_rx_trk 
            = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
               + (IData)(vlSelfRef.IP_bytes_rcv));
        if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                        >> 0x19U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                                          << 0x16U) 
                                         | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                            >> 0xaU)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                        << 6U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x17U] 
                                                  >> 0x1aU)))))))) {
            if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                   >> 0x19U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                                    << 0x16U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                                 >> 0xaU)))) 
                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                        << 0x16U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                     >> 0xaU))))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                - ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                    << 0x16U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                                 >> 0xaU))));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.top__DOT__wr_pfifo_offset_int 
                    = (0xffU & VL_SHIFTL_III(8,8,8, (IData)(0xffU), (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
                if (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0 
                        = vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0 
                        = (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0 
                        = vlSelfRef.top__DOT__u_tcp__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0 
                        = vlSelfRef.top__DOT__u_payload_fifo__DOT__wr_ptr;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                                & (((IData)(0x51U) 
                                                                                * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                                                                >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
                if ((vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx 
                     == vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__rcv_next)) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nrcv_next 
                        = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                           + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left));
                }
            } else if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                          >> 0x19U) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                       < (0xffffU & 
                                          ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                            << 6U) 
                                           | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x17U] 
                                              >> 0x1aU))))) 
                        & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                            + (IData)(vlSelfRef.IP_bytes_rcv)) 
                           >= (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                           << 6U) | 
                                          (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x17U] 
                                           >> 0x1aU)))))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                   << 0x16U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                                >> 0xaU)) 
                                 + (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                                << 6U) 
                                               | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x17U] 
                                                  >> 0x1aU)))) 
                                - vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nseq_rx_trk 
                    = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                       + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left));
                vlSelfRef.top__DOT__wr_pfifo_offset_int 
                    = (0xffU & VL_SHIFTR_III(8,8,8, 0xffU, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
            } else if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
                vlSelfRef.top__DOT__wr_pfifo_offset_int 
                    = (0xffU & VL_SHIFTR_III(8,8,32, 0xffU, 
                                             ((IData)(8U) 
                                              - (IData)(vlSelfRef.IP_bytes_rcv))));
                if (((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) 
                     & (IData)(vlSelfRef.top__DOT__axis_t_last_int))) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1 
                        = vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1);
                    }
                    if ((vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx 
                         == vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__rcv_next)) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nrcv_next 
                            = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                               + (IData)(vlSelfRef.IP_bytes_rcv));
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1 
                        = (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.IP_bytes_rcv)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1 
                        = vlSelfRef.top__DOT__u_tcp__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1 
                        = vlSelfRef.top__DOT__u_payload_fifo__DOT__wr_ptr;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                                & (((IData)(0x51U) 
                                                                                * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                                                                >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
            }
        }
    }
    if (vlSelfRef.axis_r_en) {
        if (((vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
              == ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                   << 0x16U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x18U] 
                                >> 0xaU))) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x16U] 
                                              >> 0x19U))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x16U] 
                = (0xfdffffffU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x16U]);
        }
    }
    if (vlSelfRef.top__DOT__nw_segment) {
        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nseq_rx_trk 
            = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
               + (IData)(vlSelfRef.IP_bytes_rcv));
        if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                        >> 0xaU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                    >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                         << 5U) | (
                                                   vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                                   >> 0x1bU)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                       >> 0xbU))))))) {
            if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                   >> 0xaU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                               < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                   << 5U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                             >> 0x1bU)))) 
                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                        << 5U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                  >> 0x1bU))))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                - ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                    << 5U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                              >> 0x1bU))));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.top__DOT__wr_pfifo_offset_int 
                    = (0xffU & VL_SHIFTL_III(8,8,8, (IData)(0xffU), (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
                if (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0 
                        = vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0 
                        = (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0 
                        = vlSelfRef.top__DOT__u_tcp__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0 
                        = vlSelfRef.top__DOT__u_payload_fifo__DOT__wr_ptr;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                                & (((IData)(0x51U) 
                                                                                * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                                                                >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
                if ((vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx 
                     == vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__rcv_next)) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nrcv_next 
                        = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                           + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left));
                }
            } else if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                          >> 0xaU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                      < (0xffffU & 
                                         (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                          >> 0xbU)))) 
                        & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                            + (IData)(vlSelfRef.IP_bytes_rcv)) 
                           >= (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                          >> 0xbU))))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                   << 5U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                             >> 0x1bU)) 
                                 + (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                                               >> 0xbU))) 
                                - vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nseq_rx_trk 
                    = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                       + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left));
                vlSelfRef.top__DOT__wr_pfifo_offset_int 
                    = (0xffU & VL_SHIFTR_III(8,8,8, 0xffU, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
            } else if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
                vlSelfRef.top__DOT__wr_pfifo_offset_int 
                    = (0xffU & VL_SHIFTR_III(8,8,32, 0xffU, 
                                             ((IData)(8U) 
                                              - (IData)(vlSelfRef.IP_bytes_rcv))));
                if (((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) 
                     & (IData)(vlSelfRef.top__DOT__axis_t_last_int))) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1 
                        = vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1);
                    }
                    if ((vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx 
                         == vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__rcv_next)) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nrcv_next 
                            = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                               + (IData)(vlSelfRef.IP_bytes_rcv));
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1 
                        = (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.IP_bytes_rcv)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1 
                        = vlSelfRef.top__DOT__u_tcp__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1 
                        = vlSelfRef.top__DOT__u_payload_fifo__DOT__wr_ptr;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                                & (((IData)(0x51U) 
                                                                                * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                                                                >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
            }
        }
    }
    if (vlSelfRef.axis_r_en) {
        if (((vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
              == ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                   << 5U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1aU] 
                             >> 0x1bU))) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x19U] 
                                            >> 0xaU))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x19U] 
                = (0xfffffbffU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x19U]);
        }
    }
    if (vlSelfRef.top__DOT__nw_segment) {
        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nseq_rx_trk 
            = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
               + (IData)(vlSelfRef.IP_bytes_rcv));
        if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                        >> 0x1bU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                                          << 0x14U) 
                                         | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                            >> 0xcU)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                        << 4U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1cU] 
                                                  >> 0x1cU)))))))) {
            if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                   >> 0x1bU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                                    << 0x14U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                                 >> 0xcU)))) 
                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                        << 0x14U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                     >> 0xcU))))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                - ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                    << 0x14U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                                 >> 0xcU))));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.top__DOT__wr_pfifo_offset_int 
                    = (0xffU & VL_SHIFTL_III(8,8,8, (IData)(0xffU), (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
                if (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0 
                        = vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0 
                        = (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0 
                        = vlSelfRef.top__DOT__u_tcp__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0 
                        = vlSelfRef.top__DOT__u_payload_fifo__DOT__wr_ptr;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                                & (((IData)(0x51U) 
                                                                                * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                                                                >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
                if ((vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx 
                     == vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__rcv_next)) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nrcv_next 
                        = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                           + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left));
                }
            } else if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                          >> 0x1bU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                       < (0xffffU & 
                                          ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                            << 4U) 
                                           | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1cU] 
                                              >> 0x1cU))))) 
                        & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                            + (IData)(vlSelfRef.IP_bytes_rcv)) 
                           >= (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                           << 4U) | 
                                          (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1cU] 
                                           >> 0x1cU)))))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                   << 0x14U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                                >> 0xcU)) 
                                 + (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                                << 4U) 
                                               | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1cU] 
                                                  >> 0x1cU)))) 
                                - vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nseq_rx_trk 
                    = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                       + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left));
                vlSelfRef.top__DOT__wr_pfifo_offset_int 
                    = (0xffU & VL_SHIFTR_III(8,8,8, 0xffU, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
            } else if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
                vlSelfRef.top__DOT__wr_pfifo_offset_int 
                    = (0xffU & VL_SHIFTR_III(8,8,32, 0xffU, 
                                             ((IData)(8U) 
                                              - (IData)(vlSelfRef.IP_bytes_rcv))));
                if (((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) 
                     & (IData)(vlSelfRef.top__DOT__axis_t_last_int))) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1 
                        = vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1);
                    }
                    if ((vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx 
                         == vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__rcv_next)) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nrcv_next 
                            = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                               + (IData)(vlSelfRef.IP_bytes_rcv));
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1 
                        = (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.IP_bytes_rcv)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1 
                        = vlSelfRef.top__DOT__u_tcp__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1 
                        = vlSelfRef.top__DOT__u_payload_fifo__DOT__wr_ptr;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                                & (((IData)(0x51U) 
                                                                                * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                                                                >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
            }
        }
    }
    if (vlSelfRef.axis_r_en) {
        if (((vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
              == ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                   << 0x14U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1dU] 
                                >> 0xcU))) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1bU] 
                                              >> 0x1bU))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x1bU] 
                = (0xf7ffffffU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x1bU]);
        }
    }
    if (vlSelfRef.top__DOT__nw_segment) {
        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nseq_rx_trk 
            = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
               + (IData)(vlSelfRef.IP_bytes_rcv));
        if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                        >> 0xcU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                    >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                         << 3U) | (
                                                   vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                                   >> 0x1dU)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                       >> 0xdU))))))) {
            if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                   >> 0xcU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                               < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                   << 3U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                             >> 0x1dU)))) 
                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                        << 3U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                  >> 0x1dU))))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                - ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                    << 3U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                              >> 0x1dU))));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.top__DOT__wr_pfifo_offset_int 
                    = (0xffU & VL_SHIFTL_III(8,8,8, (IData)(0xffU), (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
                if (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0 
                        = vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0 
                        = (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0 
                        = vlSelfRef.top__DOT__u_tcp__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0 
                        = vlSelfRef.top__DOT__u_payload_fifo__DOT__wr_ptr;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                                & (((IData)(0x51U) 
                                                                                * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                                                                >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
                if ((vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx 
                     == vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__rcv_next)) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nrcv_next 
                        = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                           + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left));
                }
            } else if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                          >> 0xcU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                      < (0xffffU & 
                                         (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                          >> 0xdU)))) 
                        & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                            + (IData)(vlSelfRef.IP_bytes_rcv)) 
                           >= (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                          >> 0xdU))))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                   << 3U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                             >> 0x1dU)) 
                                 + (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                                               >> 0xdU))) 
                                - vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nseq_rx_trk 
                    = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                       + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left));
                vlSelfRef.top__DOT__wr_pfifo_offset_int 
                    = (0xffU & VL_SHIFTR_III(8,8,8, 0xffU, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
            } else if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
                vlSelfRef.top__DOT__wr_pfifo_offset_int 
                    = (0xffU & VL_SHIFTR_III(8,8,32, 0xffU, 
                                             ((IData)(8U) 
                                              - (IData)(vlSelfRef.IP_bytes_rcv))));
                if (((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) 
                     & (IData)(vlSelfRef.top__DOT__axis_t_last_int))) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1 
                        = vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1);
                    }
                    if ((vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx 
                         == vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__rcv_next)) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nrcv_next 
                            = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                               + (IData)(vlSelfRef.IP_bytes_rcv));
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1 
                        = (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.IP_bytes_rcv)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1 
                        = vlSelfRef.top__DOT__u_tcp__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1 
                        = vlSelfRef.top__DOT__u_payload_fifo__DOT__wr_ptr;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                                & (((IData)(0x51U) 
                                                                                * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                                                                >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
            }
        }
    }
    if (vlSelfRef.axis_r_en) {
        if (((vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
              == ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                   << 3U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1fU] 
                             >> 0x1dU))) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x1eU] 
                                            >> 0xcU))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x1eU] 
                = (0xffffefffU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x1eU]);
        }
    }
    if (vlSelfRef.top__DOT__nw_segment) {
        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nseq_rx_trk 
            = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
               + (IData)(vlSelfRef.IP_bytes_rcv));
        if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                        >> 0x1dU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                                          << 0x12U) 
                                         | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                            >> 0xeU)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                        << 2U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x21U] 
                                                  >> 0x1eU)))))))) {
            if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                   >> 0x1dU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                                    << 0x12U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                                 >> 0xeU)))) 
                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                        << 0x12U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                     >> 0xeU))))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                - ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                    << 0x12U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                                 >> 0xeU))));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.top__DOT__wr_pfifo_offset_int 
                    = (0xffU & VL_SHIFTL_III(8,8,8, (IData)(0xffU), (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
                if (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0 
                        = vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0 
                        = (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0 
                        = vlSelfRef.top__DOT__u_tcp__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0 
                        = vlSelfRef.top__DOT__u_payload_fifo__DOT__wr_ptr;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                                & (((IData)(0x51U) 
                                                                                * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                                                                >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
                if ((vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx 
                     == vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__rcv_next)) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nrcv_next 
                        = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                           + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left));
                }
            } else if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                          >> 0x1dU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                       < (0xffffU & 
                                          ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                            << 2U) 
                                           | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x21U] 
                                              >> 0x1eU))))) 
                        & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                            + (IData)(vlSelfRef.IP_bytes_rcv)) 
                           >= (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                           << 2U) | 
                                          (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x21U] 
                                           >> 0x1eU)))))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                   << 0x12U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                                >> 0xeU)) 
                                 + (0xffffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                                << 2U) 
                                               | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x21U] 
                                                  >> 0x1eU)))) 
                                - vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nseq_rx_trk 
                    = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                       + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left));
                vlSelfRef.top__DOT__wr_pfifo_offset_int 
                    = (0xffU & VL_SHIFTR_III(8,8,8, 0xffU, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
            } else if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
                vlSelfRef.top__DOT__wr_pfifo_offset_int 
                    = (0xffU & VL_SHIFTR_III(8,8,32, 0xffU, 
                                             ((IData)(8U) 
                                              - (IData)(vlSelfRef.IP_bytes_rcv))));
                if (((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) 
                     & (IData)(vlSelfRef.top__DOT__axis_t_last_int))) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1 
                        = vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1);
                    }
                    if ((vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx 
                         == vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__rcv_next)) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nrcv_next 
                            = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                               + (IData)(vlSelfRef.IP_bytes_rcv));
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1 
                        = (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.IP_bytes_rcv)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1 
                        = vlSelfRef.top__DOT__u_tcp__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1 
                        = vlSelfRef.top__DOT__u_payload_fifo__DOT__wr_ptr;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                                & (((IData)(0x51U) 
                                                                                * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                                                                >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
            }
        }
    }
    if (vlSelfRef.axis_r_en) {
        if (((vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
              == ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                   << 0x12U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x22U] 
                                >> 0xeU))) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x20U] 
                                              >> 0x1dU))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x20U] 
                = (0xdfffffffU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x20U]);
        }
    }
    if (vlSelfRef.top__DOT__nw_segment) {
        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nseq_rx_trk 
            = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
               + (IData)(vlSelfRef.IP_bytes_rcv));
        if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                        >> 0xeU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                    >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                                         << 1U) | (
                                                   vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                                   >> 0x1fU)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                       >> 0xfU))))))) {
            if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                   >> 0xeU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                               < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                                   << 1U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                             >> 0x1fU)))) 
                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                        << 1U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                  >> 0x1fU))))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                - ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                                    << 1U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                              >> 0x1fU))));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.top__DOT__wr_pfifo_offset_int 
                    = (0xffU & VL_SHIFTL_III(8,8,8, (IData)(0xffU), (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
                if (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0 
                        = vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0 
                        = (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0 
                        = vlSelfRef.top__DOT__u_tcp__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0 
                        = vlSelfRef.top__DOT__u_payload_fifo__DOT__wr_ptr;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                                & (((IData)(0x51U) 
                                                                                * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                                                                >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
                if ((vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx 
                     == vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__rcv_next)) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nrcv_next 
                        = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                           + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left));
                }
            } else if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                          >> 0xeU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                      < (0xffffU & 
                                         (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                          >> 0xfU)))) 
                        & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                            + (IData)(vlSelfRef.IP_bytes_rcv)) 
                           >= (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                          >> 0xfU))))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                                   << 1U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                             >> 0x1fU)) 
                                 + (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                                               >> 0xfU))) 
                                - vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nseq_rx_trk 
                    = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                       + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left));
                vlSelfRef.top__DOT__wr_pfifo_offset_int 
                    = (0xffU & VL_SHIFTR_III(8,8,8, 0xffU, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
            } else if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
                vlSelfRef.top__DOT__wr_pfifo_offset_int 
                    = (0xffU & VL_SHIFTR_III(8,8,32, 0xffU, 
                                             ((IData)(8U) 
                                              - (IData)(vlSelfRef.IP_bytes_rcv))));
                if (((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) 
                     & (IData)(vlSelfRef.top__DOT__axis_t_last_int))) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1 
                        = vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1);
                    }
                    if ((vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx 
                         == vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__rcv_next)) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nrcv_next 
                            = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                               + (IData)(vlSelfRef.IP_bytes_rcv));
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1 
                        = (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.IP_bytes_rcv)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1 
                        = vlSelfRef.top__DOT__u_tcp__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1 
                        = vlSelfRef.top__DOT__u_payload_fifo__DOT__wr_ptr;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                                & (((IData)(0x51U) 
                                                                                * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                                                                >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
            }
        }
    }
    if (vlSelfRef.axis_r_en) {
        if (((vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
              == ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                   << 1U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x24U] 
                             >> 0x1fU))) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x23U] 
                                            >> 0xeU))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x23U] 
                = (0xffffbfffU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x23U]);
        }
    }
    if (vlSelfRef.top__DOT__nw_segment) {
        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nseq_rx_trk 
            = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
               + (IData)(vlSelfRef.IP_bytes_rcv));
        if ((1U & (~ (((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                        >> 0x1fU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                     >= ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x28U] 
                                          << 0x10U) 
                                         | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x27U] 
                                            >> 0x10U)))) 
                      & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                          + (IData)(vlSelfRef.IP_bytes_rcv)) 
                         < (0xffffU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x27U])))))) {
            if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                   >> 0x1fU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                < ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x28U] 
                                    << 0x10U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x27U] 
                                                 >> 0x10U)))) 
                 & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                     + (IData)(vlSelfRef.IP_bytes_rcv)) 
                    > ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x28U] 
                        << 0x10U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x27U] 
                                     >> 0x10U))))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                 + (IData)(vlSelfRef.IP_bytes_rcv)) 
                                - ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x27U] 
                                    << 0x10U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x27U] 
                                                 >> 0x10U))));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.top__DOT__wr_pfifo_offset_int 
                    = (0xffU & VL_SHIFTL_III(8,8,8, (IData)(0xffU), (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
                if (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0 
                        = vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0 
                        = (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0 
                        = vlSelfRef.top__DOT__u_tcp__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0 
                        = vlSelfRef.top__DOT__u_payload_fifo__DOT__wr_ptr;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                                & (((IData)(0x51U) 
                                                                                * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                                                                >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
                if ((vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx 
                     == vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__rcv_next)) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nrcv_next 
                        = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                           + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left));
                }
            } else if ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                          >> 0x1fU) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                       < (0xffffU & 
                                          vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x27U]))) 
                        & ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                            + (IData)(vlSelfRef.IP_bytes_rcv)) 
                           >= (0xffffU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x27U])))) {
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop 
                    = (0xffU & ((((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x27U] 
                                   << 0x10U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x27U] 
                                                >> 0x10U)) 
                                 + (0xffffU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x27U])) 
                                - vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left 
                    = (0xffU & ((IData)(vlSelfRef.IP_bytes_rcv) 
                                - (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nseq_rx_trk 
                    = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                       + (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left));
                vlSelfRef.top__DOT__wr_pfifo_offset_int 
                    = (0xffU & VL_SHIFTR_III(8,8,8, 0xffU, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop)));
            } else if ((1U & (~ (0U != (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask))))) {
                vlSelfRef.top__DOT__wr_pfifo_offset_int 
                    = (0xffU & VL_SHIFTR_III(8,8,32, 0xffU, 
                                             ((IData)(8U) 
                                              - (IData)(vlSelfRef.IP_bytes_rcv))));
                if (((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask) 
                     & (IData)(vlSelfRef.top__DOT__axis_t_last_int))) {
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1 
                        = vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx;
                    if ((0x50fU >= ((IData)(0x31U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,32,((IData)(0x31U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1);
                    }
                    if ((vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx 
                         == vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__rcv_next)) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nrcv_next 
                            = (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                               + (IData)(vlSelfRef.IP_bytes_rcv));
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1 
                        = (0xffffU & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk 
                                      + (IData)(vlSelfRef.IP_bytes_rcv)));
                    if ((0x50fU >= ((IData)(0x21U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x21U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1 
                        = vlSelfRef.top__DOT__u_tcp__DOT__wr_FIFO_ptr;
                    if ((0x50fU >= ((IData)(0x11U) 
                                    + (0x7ffU & ((IData)(0x51U) 
                                                 * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(0x11U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1 
                        = vlSelfRef.top__DOT__u_payload_fifo__DOT__wr_ptr;
                    if ((0x50fU >= ((IData)(1U) + (0x7ffU 
                                                   & ((IData)(0x51U) 
                                                      * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))))) {
                        VL_ASSIGNSEL_WI(1296,16,((IData)(1U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x51U) 
                                                     * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))), vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1);
                    }
                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1 = 1U;
                    if ((0x50fU >= (0x7ffU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) {
                        vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                                & (((IData)(0x51U) 
                                                                                * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                                                                >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x51U) 
                                              * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx))))) 
                                & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[
                                (0x3fU & (((IData)(0x51U) 
                                           * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)) 
                                          >> 5U))]) 
                               | ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1) 
                                  << (0x1fU & ((IData)(0x51U) 
                                               * (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx)))));
                    }
                }
            }
        }
    }
    if (vlSelfRef.top__DOT__wr_pfifo_en_int) {
        vlSelfRef.top__DOT__u_payload_fifo__DOT__nwr_ptr 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__u_payload_fifo__DOT__wr_ptr)));
        vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__temp 
            = (0xfffffU & (((((0xffffU & vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__TCP_checksum) 
                              + (0xffffU & (IData)(vlSelfRef.top__DOT__rd_ftx_payload_int))) 
                             + (0xffffU & (IData)((vlSelfRef.top__DOT__rd_ftx_payload_int 
                                                   >> 0x10U)))) 
                            + (0xffffU & (IData)((vlSelfRef.top__DOT__rd_ftx_payload_int 
                                                  >> 0x20U)))) 
                           + (0xffffU & (IData)((vlSelfRef.top__DOT__rd_ftx_payload_int 
                                                 >> 0x30U)))));
        vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__temp 
            = (0xfffffU & ((0xffffU & vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__temp) 
                           + (0xfU & (vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__temp 
                                      >> 0x10U))));
        vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__temp 
            = (0xfffffU & ((0xffffU & vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__temp) 
                           + (1U & (vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__temp 
                                    >> 0x10U))));
        vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__nTCP_checksum 
            = (0x1ffffU & vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__temp);
        if (vlSelfRef.top__DOT__u_tcp__DOT__axis_last) {
            vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__temp1 
                = (0xfffffU & ((0xffffU & vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__TCP_checksum_send) 
                               + (0xffffU & vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__nTCP_checksum)));
            vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__temp1 
                = (0xfffffU & ((0xffffU & vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__temp1) 
                               + (0xfU & (vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__temp1 
                                          >> 0x10U))));
            vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__temp1 
                = (0xfffffU & ((0xffffU & vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__temp1) 
                               + (1U & (vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__temp1 
                                        >> 0x10U))));
            if (vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__up_send) {
                vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__nTCP_checksum_send = 0U;
                vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__nTCP_checksum_out 
                    = (0xffffU & (0xffffU & vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__temp1));
            } else {
                vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__nTCP_checksum_send 
                    = (0x1ffffU & vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__temp1);
                vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__nTCP_checksum_out 
                    = (0xffffU & vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__TCP_checksum_send);
            }
            vlSelfRef.top__DOT__u_tcp__DOT__inst__DOT__nTCP_checksum = 0U;
        }
        vlSelfRef.top__DOT__u_payload_fifo__DOT____Vlvbound_h5d12e1c7__0 
            = vlSelfRef.top__DOT__axis_data_rx_int;
        vlSelfRef.top__DOT__u_payload_fifo__DOT____Vlvbound_hfce51f23__0 
            = vlSelfRef.top__DOT__wr_pfifo_offset_int;
        if ((4U >= (IData)(vlSelfRef.top__DOT__u_payload_fifo__DOT__wr_ptr))) {
            vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_FIFO[vlSelfRef.top__DOT__u_payload_fifo__DOT__wr_ptr][0U] 
                = ((0xffU & vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_FIFO
                    [vlSelfRef.top__DOT__u_payload_fifo__DOT__wr_ptr][0U]) 
                   | ((IData)(vlSelfRef.top__DOT__u_payload_fifo__DOT____Vlvbound_h5d12e1c7__0) 
                      << 8U));
            vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_FIFO[vlSelfRef.top__DOT__u_payload_fifo__DOT__wr_ptr][1U] 
                = (((IData)(vlSelfRef.top__DOT__u_payload_fifo__DOT____Vlvbound_h5d12e1c7__0) 
                    >> 0x18U) | ((IData)((vlSelfRef.top__DOT__u_payload_fifo__DOT____Vlvbound_h5d12e1c7__0 
                                          >> 0x20U)) 
                                 << 8U));
            vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_FIFO[vlSelfRef.top__DOT__u_payload_fifo__DOT__wr_ptr][2U] 
                = ((IData)((vlSelfRef.top__DOT__u_payload_fifo__DOT____Vlvbound_h5d12e1c7__0 
                            >> 0x20U)) >> 0x18U);
            vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_FIFO[vlSelfRef.top__DOT__u_payload_fifo__DOT__wr_ptr][0U] 
                = ((0xffffff00U & vlSelfRef.top__DOT__u_payload_fifo__DOT__nTCP_FIFO
                    [vlSelfRef.top__DOT__u_payload_fifo__DOT__wr_ptr][0U]) 
                   | (IData)(vlSelfRef.top__DOT__u_payload_fifo__DOT____Vlvbound_hfce51f23__0));
        }
    }
    if (vlSelfRef.axis_r_en) {
        if (((vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
              == ((vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x28U] 
                   << 0x10U) | (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x27U] 
                                >> 0x10U))) & (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order[0x25U] 
                                               >> 0x1fU))) {
            vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x25U] 
                = (0x7fffffffU & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[0x25U]);
        }
    }
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__state) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__state) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__state) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__state) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__state))) {
                        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__state) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__state)))) {
                                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h9a2cf0a4__0 = 0U;
                                if ((0x50fU >= (0x7ffU 
                                                & ((IData)(0x51U) 
                                                   * 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_list 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_ptr), 2U))))))))) {
                                    vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[(0x3fU 
                                                                                & (((IData)(0x51U) 
                                                                                * 
                                                                                (0xfU 
                                                                                & (IData)(
                                                                                (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_list 
                                                                                >> 
                                                                                (0x3fU 
                                                                                & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_ptr), 2U)))))) 
                                                                                >> 5U))] 
                                        = (((~ ((IData)(1U) 
                                                << 
                                                (0x1fU 
                                                 & ((IData)(0x51U) 
                                                    * 
                                                    (0xfU 
                                                     & (IData)(
                                                               (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_list 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_ptr), 2U))))))))) 
                                            & vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order[
                                            (0x3fU 
                                             & (((IData)(0x51U) 
                                                 * 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_list 
                                                             >> 
                                                             (0x3fU 
                                                              & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_ptr), 2U)))))) 
                                                >> 5U))]) 
                                           | ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h9a2cf0a4__0) 
                                              << (0x1fU 
                                                  & ((IData)(0x51U) 
                                                     * 
                                                     (0xfU 
                                                      & (IData)(
                                                                (vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_list 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_ptr), 2U)))))))));
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__state) 
                                         >> 1U)))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__state))) {
                            if (((IData)(vlSelfRef.top__DOT__u_tcp__DOT__rcv_data) 
                                 & (0x12U == (0x12U 
                                              & (IData)(vlSelfRef.top__DOT__u_tcp__DOT__TCP_control_rx))))) {
                                vlSelfRef.top__DOT__u_tcp__DOT__tcp_flow__DOT__nrcv_next 
                                    = ((IData)(1U) 
                                       + vlSelfRef.top__DOT__u_tcp__DOT__seq_num_rx);
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.top__DOT__u_payload_fifo__DOT__nseq_trk_rd 
        = vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd;
    if (vlSelfRef.axis_r_en) {
        vlSelfRef.top__DOT__u_payload_fifo__DOT__nseq_trk_rd 
            = (((IData)(vlSelfRef.top__DOT__u_payload_fifo__DOT__rd_FIFO_valid_l) 
                & ((IData)(vlSelfRef.top__DOT__u_payload_fifo__DOT__rd_ptr) 
                   != (IData)(vlSelfRef.top__DOT__u_payload_fifo__DOT__flush_ptr)))
                ? (vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd 
                   + (0xfU & ((1U & ((IData)(vlSelfRef.top__DOT__wr_pfifo_offset_int) 
                                     >> 7U)) + ((1U 
                                                 & ((IData)(vlSelfRef.top__DOT__wr_pfifo_offset_int) 
                                                    >> 6U)) 
                                                + (
                                                   (1U 
                                                    & ((IData)(vlSelfRef.top__DOT__wr_pfifo_offset_int) 
                                                       >> 5U)) 
                                                   + 
                                                   ((1U 
                                                     & ((IData)(vlSelfRef.top__DOT__wr_pfifo_offset_int) 
                                                        >> 4U)) 
                                                    + 
                                                    ((1U 
                                                      & ((IData)(vlSelfRef.top__DOT__wr_pfifo_offset_int) 
                                                         >> 3U)) 
                                                     + 
                                                     ((1U 
                                                       & ((IData)(vlSelfRef.top__DOT__wr_pfifo_offset_int) 
                                                          >> 2U)) 
                                                      + 
                                                      ((1U 
                                                        & ((IData)(vlSelfRef.top__DOT__wr_pfifo_offset_int) 
                                                           >> 1U)) 
                                                       + 
                                                       (1U 
                                                        & (IData)(vlSelfRef.top__DOT__wr_pfifo_offset_int)))))))))))
                : vlSelfRef.top__DOT__u_payload_fifo__DOT__seq_trk_rd);
    }
}
