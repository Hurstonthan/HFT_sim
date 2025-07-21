// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFIFO_TX.h for the primary calling header

#include "VFIFO_TX__pch.h"
#include "VFIFO_TX___024root.h"

void VFIFO_TX___024root___ico_sequent__TOP__0(VFIFO_TX___024root* vlSelf);

void VFIFO_TX___024root___eval_ico(VFIFO_TX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_TX___024root___eval_ico\n"); );
    VFIFO_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VFIFO_TX___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void VFIFO_TX___024root___ico_sequent__TOP__0(VFIFO_TX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_TX___024root___ico_sequent__TOP__0\n"); );
    VFIFO_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.FIFO_TX__DOT__nACK_num_l = vlSelfRef.FIFO_TX__DOT__ACK_num_l;
    vlSelfRef.FIFO_TX__DOT__nmsg_end_ptr = vlSelfRef.FIFO_TX__DOT__msg_end_ptr;
    vlSelfRef.FIFO_TX__DOT__nout_order_req_l = vlSelfRef.FIFO_TX__DOT__out_order_req_l;
    if (vlSelfRef.out_order_req) {
        vlSelfRef.FIFO_TX__DOT__nout_order_req_l = 1U;
    }
    vlSelfRef.FIFO_TX__DOT__nACK_rcv_flag_l = vlSelfRef.FIFO_TX__DOT__ACK_rcv_flag_l;
    if (vlSelfRef.ACK_rcv_flag) {
        vlSelfRef.FIFO_TX__DOT__nACK_num_l = vlSelfRef.ACK_num;
        vlSelfRef.FIFO_TX__DOT__nACK_rcv_flag_l = 1U;
    }
    vlSelfRef.FIFO_TX__DOT__nwrt_ptr = vlSelfRef.FIFO_TX__DOT__wrt_ptr;
    vlSelfRef.FIFO_TX__DOT__nptr_end = vlSelfRef.FIFO_TX__DOT__msg_end_ptr;
    vlSelfRef.FIFO_TX__DOT__nptr_str = vlSelfRef.FIFO_TX__DOT__ptr_str;
    vlSelfRef.FIFO_TX__DOT__nrd_state = vlSelfRef.FIFO_TX__DOT__rd_state;
    vlSelfRef.FIFO_TX__DOT__nwr_FIFO_valid = 0U;
    vlSelfRef.FIFO_TX__DOT__nwr_state = vlSelfRef.FIFO_TX__DOT__wr_state;
    vlSelfRef.FIFO_TX__DOT__nbytes_abt_sent = vlSelfRef.FIFO_TX__DOT__bytes_abt_sent_msg;
    if ((0U == (IData)(vlSelfRef.FIFO_TX__DOT__rd_state))) {
        if (vlSelfRef.rd_FIFO_en) {
            if (vlSelfRef.FIFO_TX__DOT__out_order_req_l) {
                vlSelfRef.FIFO_TX__DOT__nptr_end = 
                    ((0x4cfU >= (0x7ffU & ((IData)(0x4dU) 
                                           * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))
                      ? (0x3fU & (((0U == (0x1fU & 
                                           ((IData)(0x4dU) 
                                            * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))
                                    ? 0U : (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                            (((IData)(5U) 
                                              + (0x7ffU 
                                                 & ((IData)(0x4dU) 
                                                    * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x4dU) 
                                                      * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))) 
                                  | (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                     (0x3fU & (((IData)(0x4dU) 
                                                * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)) 
                                               >> 5U))] 
                                     >> (0x1fU & ((IData)(0x4dU) 
                                                  * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))))
                      : 0U);
                vlSelfRef.FIFO_TX__DOT__nptr_str = 
                    ((0x4cfU >= ((IData)(6U) + (0x7ffU 
                                                & ((IData)(0x4dU) 
                                                   * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))
                      ? (0x3fU & (((0U == (0x1fU & 
                                           ((IData)(6U) 
                                            + (0x7ffU 
                                               & ((IData)(0x4dU) 
                                                  * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))))
                                    ? 0U : (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                            (((IData)(0xbU) 
                                              + (0x7ffU 
                                                 & ((IData)(0x4dU) 
                                                    * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(6U) 
                                                      + 
                                                      (0x7ffU 
                                                       & ((IData)(0x4dU) 
                                                          * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))))) 
                                  | (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                     (((IData)(6U) 
                                       + (0x7ffU & 
                                          ((IData)(0x4dU) 
                                           * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(6U) 
                                                     + 
                                                     (0x7ffU 
                                                      & ((IData)(0x4dU) 
                                                         * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))))))
                      : 0U);
                vlSelfRef.FIFO_TX__DOT__nrd_state = 2U;
                vlSelfRef.FIFO_TX__DOT__nbytes_abt_sent 
                    = ((0x4cfU >= ((IData)(0xcU) + 
                                   (0x7ffU & ((IData)(0x4dU) 
                                              * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))
                        ? (0xffffU & (((0U == (0x1fU 
                                               & ((IData)(0xcU) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0x4dU) 
                                                      * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))))
                                        ? 0U : (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                                (((IData)(0x1bU) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0x4dU) 
                                                      * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0xcU) 
                                                     + 
                                                     (0x7ffU 
                                                      & ((IData)(0x4dU) 
                                                         * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))))) 
                                      | (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                         (((IData)(0xcU) 
                                           + (0x7ffU 
                                              & ((IData)(0x4dU) 
                                                 * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                                          >> 5U)] >> 
                                         (0x1fU & ((IData)(0xcU) 
                                                   + 
                                                   (0x7ffU 
                                                    & ((IData)(0x4dU) 
                                                       * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))))))
                        : 0U);
            } else {
                vlSelfRef.FIFO_TX__DOT__nrd_state = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.FIFO_TX__DOT__rd_state))) {
        if ((((IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr) 
              != ((IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr) 
                  - (IData)(1U))) & (((IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr) 
                                      - (IData)(1U)) 
                                     != (IData)(vlSelfRef.FIFO_TX__DOT__msg_end_ptr)))) {
            vlSelfRef.FIFO_TX__DOT__nptr_end = vlSelfRef.FIFO_TX__DOT__ptr_end;
            vlSelfRef.FIFO_TX__DOT__nptr_str = vlSelfRef.FIFO_TX__DOT__rd_ptr;
            if ((((IData)(1U) + (IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr)) 
                 == (IData)(vlSelfRef.FIFO_TX__DOT__ptr_end))) {
                vlSelfRef.FIFO_TX__DOT__nrd_state = 0U;
            }
            vlSelfRef.FIFO_TX__DOT__nbytes_abt_sent 
                = vlSelfRef.bytes_abt_sent;
        }
    } else if ((2U == (IData)(vlSelfRef.FIFO_TX__DOT__rd_state))) {
        vlSelfRef.FIFO_TX__DOT__nptr_str = (0x3fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.FIFO_TX__DOT__ptr_str)));
        if (((IData)(vlSelfRef.FIFO_TX__DOT__ptr_str) 
             == (IData)(vlSelfRef.FIFO_TX__DOT__ptr_end))) {
            vlSelfRef.FIFO_TX__DOT__nrd_state = 0U;
        }
    }
    vlSelfRef.FIFO_TX__DOT__nbytes_abt_sent_msg = vlSelfRef.FIFO_TX__DOT__bytes_abt_sent_msg;
    if ((0U != (IData)(vlSelfRef.FIFO_TX__DOT__wr_state))) {
        if ((2U != (IData)(vlSelfRef.FIFO_TX__DOT__wr_state))) {
            if ((1U == (IData)(vlSelfRef.FIFO_TX__DOT__wr_state))) {
                if (vlSelfRef.axis_last) {
                    vlSelfRef.FIFO_TX__DOT__nmsg_end_ptr 
                        = (0x3fU & ((IData)(1U) + ((IData)(vlSelfRef.FIFO_TX__DOT__msg_end_ptr) 
                                                   + (IData)(vlSelfRef.FIFO_TX__DOT__wrt_ptr))));
                }
            }
        }
        if ((2U == (IData)(vlSelfRef.FIFO_TX__DOT__wr_state))) {
            if (((IData)(vlSelfRef.FIFO_TX__DOT__flush_ptr) 
                 == ((0x4cfU >= (0x7ffU & ((IData)(0x4dU) 
                                           * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))
                      ? (0x3fU & (((0U == (0x1fU & 
                                           ((IData)(0x4dU) 
                                            * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))
                                    ? 0U : (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                            (((IData)(5U) 
                                              + (0x7ffU 
                                                 & ((IData)(0x4dU) 
                                                    * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x4dU) 
                                                      * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))) 
                                  | (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                     (0x3fU & (((IData)(0x4dU) 
                                                * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)) 
                                               >> 5U))] 
                                     >> (0x1fU & ((IData)(0x4dU) 
                                                  * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))))
                      : 0U))) {
                vlSelfRef.FIFO_TX__DOT__nACK_rcv_flag_l = 0U;
            }
        }
    }
    if ((0U != (IData)(vlSelfRef.FIFO_TX__DOT__rd_state))) {
        if ((1U != (IData)(vlSelfRef.FIFO_TX__DOT__rd_state))) {
            if ((2U == (IData)(vlSelfRef.FIFO_TX__DOT__rd_state))) {
                if (((IData)(vlSelfRef.FIFO_TX__DOT__ptr_str) 
                     == (IData)(vlSelfRef.FIFO_TX__DOT__ptr_end))) {
                    vlSelfRef.FIFO_TX__DOT__nout_order_req_l = 0U;
                }
            }
        }
        if ((1U == (IData)(vlSelfRef.FIFO_TX__DOT__rd_state))) {
            if ((((IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr) 
                  != ((IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr) 
                      - (IData)(1U))) & (((IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr) 
                                          - (IData)(1U)) 
                                         != (IData)(vlSelfRef.FIFO_TX__DOT__msg_end_ptr)))) {
                if ((((IData)(1U) + (IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr)) 
                     == (IData)(vlSelfRef.FIFO_TX__DOT__ptr_end))) {
                    vlSelfRef.FIFO_TX__DOT__nbytes_abt_sent_msg 
                        = (0xffffU & ((IData)(vlSelfRef.FIFO_TX__DOT__bytes_abt_sent_msg) 
                                      - (IData)(vlSelfRef.bytes_abt_sent)));
                }
            }
        }
    }
    if ((0U != (IData)(vlSelfRef.FIFO_TX__DOT__wr_state))) {
        if ((2U != (IData)(vlSelfRef.FIFO_TX__DOT__wr_state))) {
            if ((1U == (IData)(vlSelfRef.FIFO_TX__DOT__wr_state))) {
                if (vlSelfRef.axis_last) {
                    vlSelfRef.FIFO_TX__DOT__nbytes_abt_sent_msg 
                        = (0xffffU & ((IData)(vlSelfRef.FIFO_TX__DOT__bytes_abt_sent_msg) 
                                      + vlSelfRef.len_seq));
                }
            }
        }
    }
    vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0U] = vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0U];
    vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[1U] = vlSelfRef.FIFO_TX__DOT__TCP_tx_order[1U];
    vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[2U] = vlSelfRef.FIFO_TX__DOT__TCP_tx_order[2U];
    vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[3U] = vlSelfRef.FIFO_TX__DOT__TCP_tx_order[3U];
    vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[4U] = vlSelfRef.FIFO_TX__DOT__TCP_tx_order[4U];
    vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[5U] = vlSelfRef.FIFO_TX__DOT__TCP_tx_order[5U];
    vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[6U] = vlSelfRef.FIFO_TX__DOT__TCP_tx_order[6U];
    vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[7U] = vlSelfRef.FIFO_TX__DOT__TCP_tx_order[7U];
    vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[8U] = vlSelfRef.FIFO_TX__DOT__TCP_tx_order[8U];
    vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[9U] = vlSelfRef.FIFO_TX__DOT__TCP_tx_order[9U];
    vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0xaU] = vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0xaU];
    vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0xbU] = vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0xbU];
    if ((0U == (IData)(vlSelfRef.FIFO_TX__DOT__wr_state))) {
        if ((1U & (~ (((IData)(vlSelfRef.FIFO_TX__DOT__ACK_rcv_flag_l) 
                       & (((0x4cfU >= ((IData)(0x2cU) 
                                       + (0x7ffU & 
                                          ((IData)(0x4dU) 
                                           * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))
                            ? (((0U == (0x1fU & ((IData)(0x2cU) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x4dU) 
                                                     * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))))
                                 ? 0U : (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                         (((IData)(0x4bU) 
                                           + (0x7ffU 
                                              & ((IData)(0x4dU) 
                                                 * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x2cU) 
                                                + (0x7ffU 
                                                   & ((IData)(0x4dU) 
                                                      * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))))) 
                               | (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                  (((IData)(0x2cU) 
                                    + (0x7ffU & ((IData)(0x4dU) 
                                                 * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                                   >> 5U)] >> (0x1fU 
                                               & ((IData)(0x2cU) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0x4dU) 
                                                      * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))))
                            : 0U) < vlSelfRef.FIFO_TX__DOT__ACK_num_l)) 
                      & ((IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr) 
                         != (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))))) {
            if (((IData)(vlSelfRef.wr_FIFO_en) & (~ (IData)(vlSelfRef.FIFO_TX__DOT__full)))) {
                vlSelfRef.FIFO_TX__DOT__nwrt_ptr = 
                    (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.FIFO_TX__DOT__wrt_ptr)));
                vlSelfRef.FIFO_TX__DOT__nwr_FIFO_valid = 1U;
                vlSelfRef.FIFO_TX__DOT____Vlvbound_h8a113359__0 
                    = vlSelfRef.soupbin_TCP_payload;
                if ((0x17fU >= (0x1ffU & VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__wrt_ptr), 6U)))) {
                    VL_ASSIGNSEL_WQ(384,64,(0x1ffU 
                                            & VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__wrt_ptr), 6U)), vlSelfRef.FIFO_TX__DOT__nTCP_tx_order, vlSelfRef.FIFO_TX__DOT____Vlvbound_h8a113359__0);
                }
            }
        }
        if ((((IData)(vlSelfRef.FIFO_TX__DOT__ACK_rcv_flag_l) 
              & (((0x4cfU >= ((IData)(0x2cU) + (0x7ffU 
                                                & ((IData)(0x4dU) 
                                                   * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))
                   ? (((0U == (0x1fU & ((IData)(0x2cU) 
                                        + (0x7ffU & 
                                           ((IData)(0x4dU) 
                                            * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))))
                        ? 0U : (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                (((IData)(0x4bU) + 
                                  (0x7ffU & ((IData)(0x4dU) 
                                             * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                                 >> 5U)] << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x2cU) 
                                                   + 
                                                   (0x7ffU 
                                                    & ((IData)(0x4dU) 
                                                       * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))))) 
                      | (vlSelfRef.FIFO_TX__DOT__dict_tx[
                         (((IData)(0x2cU) + (0x7ffU 
                                             & ((IData)(0x4dU) 
                                                * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                          >> 5U)] >> (0x1fU & ((IData)(0x2cU) 
                                               + (0x7ffU 
                                                  & ((IData)(0x4dU) 
                                                     * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))))
                   : 0U) < vlSelfRef.FIFO_TX__DOT__ACK_num_l)) 
             & ((IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr) 
                != (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))) {
            vlSelfRef.FIFO_TX__DOT__nwr_state = 2U;
        } else if (((IData)(vlSelfRef.wr_FIFO_en) & 
                    (~ (IData)(vlSelfRef.FIFO_TX__DOT__full)))) {
            vlSelfRef.FIFO_TX__DOT__nwr_state = 1U;
        }
    } else {
        if ((2U != (IData)(vlSelfRef.FIFO_TX__DOT__wr_state))) {
            if ((1U == (IData)(vlSelfRef.FIFO_TX__DOT__wr_state))) {
                vlSelfRef.FIFO_TX__DOT__nwrt_ptr = 
                    (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.FIFO_TX__DOT__wrt_ptr)));
                vlSelfRef.FIFO_TX__DOT__nwr_FIFO_valid = 1U;
                if (vlSelfRef.axis_last) {
                    vlSelfRef.FIFO_TX__DOT__nwr_FIFO_valid = 0U;
                }
            }
        }
        if ((2U == (IData)(vlSelfRef.FIFO_TX__DOT__wr_state))) {
            if (((IData)(vlSelfRef.FIFO_TX__DOT__flush_ptr) 
                 == ((0x4cfU >= (0x7ffU & ((IData)(0x4dU) 
                                           * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))
                      ? (0x3fU & (((0U == (0x1fU & 
                                           ((IData)(0x4dU) 
                                            * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))
                                    ? 0U : (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                            (((IData)(5U) 
                                              + (0x7ffU 
                                                 & ((IData)(0x4dU) 
                                                    * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x4dU) 
                                                      * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))) 
                                  | (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                     (0x3fU & (((IData)(0x4dU) 
                                                * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)) 
                                               >> 5U))] 
                                     >> (0x1fU & ((IData)(0x4dU) 
                                                  * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))))
                      : 0U))) {
                vlSelfRef.FIFO_TX__DOT__nwr_state = 0U;
            }
            vlSelfRef.FIFO_TX__DOT____Vlvbound_hebec1cbf__0 = 0ULL;
            if ((0x17fU >= (0x1ffU & VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__flush_ptr), 6U)))) {
                VL_ASSIGNSEL_WQ(384,64,(0x1ffU & VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__flush_ptr), 6U)), vlSelfRef.FIFO_TX__DOT__nTCP_tx_order, vlSelfRef.FIFO_TX__DOT____Vlvbound_hebec1cbf__0);
            }
        } else if ((1U == (IData)(vlSelfRef.FIFO_TX__DOT__wr_state))) {
            if (vlSelfRef.axis_last) {
                vlSelfRef.FIFO_TX__DOT__nwr_state = 0U;
            }
            vlSelfRef.FIFO_TX__DOT____Vlvbound_h8a113359__1 
                = vlSelfRef.soupbin_TCP_payload;
            if ((0x17fU >= (0x1ffU & VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__wrt_ptr), 6U)))) {
                VL_ASSIGNSEL_WQ(384,64,(0x1ffU & VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__wrt_ptr), 6U)), vlSelfRef.FIFO_TX__DOT__nTCP_tx_order, vlSelfRef.FIFO_TX__DOT____Vlvbound_h8a113359__1);
            }
        }
    }
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0U] = vlSelfRef.FIFO_TX__DOT__dict_tx[0U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[1U] = vlSelfRef.FIFO_TX__DOT__dict_tx[1U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[2U] = vlSelfRef.FIFO_TX__DOT__dict_tx[2U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[3U] = vlSelfRef.FIFO_TX__DOT__dict_tx[3U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[4U] = vlSelfRef.FIFO_TX__DOT__dict_tx[4U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[5U] = vlSelfRef.FIFO_TX__DOT__dict_tx[5U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[6U] = vlSelfRef.FIFO_TX__DOT__dict_tx[6U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[7U] = vlSelfRef.FIFO_TX__DOT__dict_tx[7U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[8U] = vlSelfRef.FIFO_TX__DOT__dict_tx[8U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[9U] = vlSelfRef.FIFO_TX__DOT__dict_tx[9U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0xaU] = vlSelfRef.FIFO_TX__DOT__dict_tx[0xaU];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0xbU] = vlSelfRef.FIFO_TX__DOT__dict_tx[0xbU];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0xcU] = vlSelfRef.FIFO_TX__DOT__dict_tx[0xcU];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0xdU] = vlSelfRef.FIFO_TX__DOT__dict_tx[0xdU];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0xeU] = vlSelfRef.FIFO_TX__DOT__dict_tx[0xeU];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0xfU] = vlSelfRef.FIFO_TX__DOT__dict_tx[0xfU];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0x10U] = vlSelfRef.FIFO_TX__DOT__dict_tx[0x10U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0x11U] = vlSelfRef.FIFO_TX__DOT__dict_tx[0x11U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0x12U] = vlSelfRef.FIFO_TX__DOT__dict_tx[0x12U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0x13U] = vlSelfRef.FIFO_TX__DOT__dict_tx[0x13U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0x14U] = vlSelfRef.FIFO_TX__DOT__dict_tx[0x14U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0x15U] = vlSelfRef.FIFO_TX__DOT__dict_tx[0x15U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0x16U] = vlSelfRef.FIFO_TX__DOT__dict_tx[0x16U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0x17U] = vlSelfRef.FIFO_TX__DOT__dict_tx[0x17U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0x18U] = vlSelfRef.FIFO_TX__DOT__dict_tx[0x18U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0x19U] = vlSelfRef.FIFO_TX__DOT__dict_tx[0x19U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1aU] = vlSelfRef.FIFO_TX__DOT__dict_tx[0x1aU];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1bU] = vlSelfRef.FIFO_TX__DOT__dict_tx[0x1bU];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1cU] = vlSelfRef.FIFO_TX__DOT__dict_tx[0x1cU];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1dU] = vlSelfRef.FIFO_TX__DOT__dict_tx[0x1dU];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1eU] = vlSelfRef.FIFO_TX__DOT__dict_tx[0x1eU];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1fU] = vlSelfRef.FIFO_TX__DOT__dict_tx[0x1fU];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0x20U] = vlSelfRef.FIFO_TX__DOT__dict_tx[0x20U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0x21U] = vlSelfRef.FIFO_TX__DOT__dict_tx[0x21U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0x22U] = vlSelfRef.FIFO_TX__DOT__dict_tx[0x22U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0x23U] = vlSelfRef.FIFO_TX__DOT__dict_tx[0x23U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0x24U] = vlSelfRef.FIFO_TX__DOT__dict_tx[0x24U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0x25U] = vlSelfRef.FIFO_TX__DOT__dict_tx[0x25U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0x26U] = vlSelfRef.FIFO_TX__DOT__dict_tx[0x26U];
    if ((0U != (IData)(vlSelfRef.FIFO_TX__DOT__rd_state))) {
        if ((1U == (IData)(vlSelfRef.FIFO_TX__DOT__rd_state))) {
            if ((((IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr) 
                  != ((IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr) 
                      - (IData)(1U))) & (((IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr) 
                                          - (IData)(1U)) 
                                         != (IData)(vlSelfRef.FIFO_TX__DOT__msg_end_ptr)))) {
                if ((((IData)(1U) + (IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr)) 
                     == (IData)(vlSelfRef.FIFO_TX__DOT__ptr_end))) {
                    vlSelfRef.FIFO_TX__DOT____Vlvbound_h992d98c3__0 = 1U;
                    if ((0x4cfU >= ((IData)(0x4cU) 
                                    + (0x7ffU & ((IData)(0x4dU) 
                                                 * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))))) {
                        vlSelfRef.FIFO_TX__DOT__ndict_tx[(
                                                          ((IData)(0x4cU) 
                                                           + 
                                                           (0x7ffU 
                                                            & ((IData)(0x4dU) 
                                                               * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))) 
                                                          >> 5U)] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x4cU) 
                                              + (0x7ffU 
                                                 & ((IData)(0x4dU) 
                                                    * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr))))))) 
                                & vlSelfRef.FIFO_TX__DOT__ndict_tx[
                                (((IData)(0x4cU) + 
                                  (0x7ffU & ((IData)(0x4dU) 
                                             * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))) 
                                 >> 5U)]) | ((IData)(vlSelfRef.FIFO_TX__DOT____Vlvbound_h992d98c3__0) 
                                             << (0x1fU 
                                                 & ((IData)(0x4cU) 
                                                    + 
                                                    (0x7ffU 
                                                     & ((IData)(0x4dU) 
                                                        * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))))));
                    }
                    vlSelfRef.FIFO_TX__DOT____Vlvbound_h9ca48d5c__0 
                        = vlSelfRef.seq_num_tx;
                    if ((0x4cfU >= ((IData)(0x2cU) 
                                    + (0x7ffU & ((IData)(0x4dU) 
                                                 * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))))) {
                        VL_ASSIGNSEL_WI(1232,32,((IData)(0x2cU) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x4dU) 
                                                     * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))), vlSelfRef.FIFO_TX__DOT__ndict_tx, vlSelfRef.FIFO_TX__DOT____Vlvbound_h9ca48d5c__0);
                    }
                    vlSelfRef.FIFO_TX__DOT____Vlvbound_hdadf67d2__0 
                        = vlSelfRef.bytes_abt_sent;
                    if ((0x4cfU >= ((IData)(0xcU) + 
                                    (0x7ffU & ((IData)(0x4dU) 
                                               * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))))) {
                        VL_ASSIGNSEL_WI(1232,32,((IData)(0xcU) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x4dU) 
                                                     * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))), vlSelfRef.FIFO_TX__DOT__ndict_tx, vlSelfRef.FIFO_TX__DOT____Vlvbound_hdadf67d2__0);
                    }
                    vlSelfRef.FIFO_TX__DOT____Vlvbound_hf64662ff__0 
                        = vlSelfRef.FIFO_TX__DOT__ptr_str;
                    if ((0x4cfU >= ((IData)(6U) + (0x7ffU 
                                                   & ((IData)(0x4dU) 
                                                      * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))))) {
                        VL_ASSIGNSEL_WI(1232,6,((IData)(6U) 
                                                + (0x7ffU 
                                                   & ((IData)(0x4dU) 
                                                      * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))), vlSelfRef.FIFO_TX__DOT__ndict_tx, vlSelfRef.FIFO_TX__DOT____Vlvbound_hf64662ff__0);
                    }
                    vlSelfRef.FIFO_TX__DOT____Vlvbound_h7cd94077__0 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr)));
                    if ((0x4cfU >= (0x7ffU & ((IData)(0x4dU) 
                                              * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr))))) {
                        VL_ASSIGNSEL_WI(1232,6,(0x7ffU 
                                                & ((IData)(0x4dU) 
                                                   * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr))), vlSelfRef.FIFO_TX__DOT__ndict_tx, vlSelfRef.FIFO_TX__DOT____Vlvbound_h7cd94077__0);
                    }
                }
            }
        }
    }
}

void VFIFO_TX___024root___eval_triggers__ico(VFIFO_TX___024root* vlSelf);

bool VFIFO_TX___024root___eval_phase__ico(VFIFO_TX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_TX___024root___eval_phase__ico\n"); );
    VFIFO_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VFIFO_TX___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        VFIFO_TX___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VFIFO_TX___024root___eval_act(VFIFO_TX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_TX___024root___eval_act\n"); );
    VFIFO_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VFIFO_TX___024root___nba_sequent__TOP__0(VFIFO_TX___024root* vlSelf);

void VFIFO_TX___024root___eval_nba(VFIFO_TX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_TX___024root___eval_nba\n"); );
    VFIFO_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VFIFO_TX___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

extern const VlWide<12>/*383:0*/ VFIFO_TX__ConstPool__CONST_h997e551f_0;
extern const VlWide<39>/*1247:0*/ VFIFO_TX__ConstPool__CONST_hdd0e542c_0;

VL_INLINE_OPT void VFIFO_TX___024root___nba_sequent__TOP__0(VFIFO_TX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_TX___024root___nba_sequent__TOP__0\n"); );
    VFIFO_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.FIFO_TX__DOT__bytes_msg_trk = 0U;
    vlSelfRef.wr_FIFO_valid = ((IData)(vlSelfRef.nRST) 
                               && (IData)(vlSelfRef.FIFO_TX__DOT__nwr_FIFO_valid));
    vlSelfRef.rd_FIFO_valid = ((IData)(vlSelfRef.nRST) 
                               && (IData)(vlSelfRef.FIFO_TX__DOT__nrd_FIFO_valid));
    if (vlSelfRef.nRST) {
        vlSelfRef.rd_FIFO_payload = (QData)((IData)(vlSelfRef.FIFO_TX__DOT__nrd_FIFO_payload));
        vlSelfRef.FIFO_TX__DOT__bytes_abt_sent_msg 
            = vlSelfRef.FIFO_TX__DOT__nbytes_abt_sent_msg;
        vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0U] = 
            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0U];
        vlSelfRef.FIFO_TX__DOT__TCP_tx_order[1U] = 
            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[1U];
        vlSelfRef.FIFO_TX__DOT__TCP_tx_order[2U] = 
            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[2U];
        vlSelfRef.FIFO_TX__DOT__TCP_tx_order[3U] = 
            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[3U];
        vlSelfRef.FIFO_TX__DOT__TCP_tx_order[4U] = 
            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[4U];
        vlSelfRef.FIFO_TX__DOT__TCP_tx_order[5U] = 
            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[5U];
        vlSelfRef.FIFO_TX__DOT__TCP_tx_order[6U] = 
            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[6U];
        vlSelfRef.FIFO_TX__DOT__TCP_tx_order[7U] = 
            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[7U];
        vlSelfRef.FIFO_TX__DOT__TCP_tx_order[8U] = 
            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[8U];
        vlSelfRef.FIFO_TX__DOT__TCP_tx_order[9U] = 
            vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[9U];
        vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0xaU] 
            = vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0xaU];
        vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0xbU] 
            = vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0xbU];
        vlSelfRef.bytes_abt_sent = vlSelfRef.FIFO_TX__DOT__nbytes_abt_sent;
        vlSelfRef.FIFO_TX__DOT__flush_ptr = vlSelfRef.FIFO_TX__DOT__nflush_ptr;
        vlSelfRef.FIFO_TX__DOT__ptr_str = vlSelfRef.FIFO_TX__DOT__nptr_str;
        vlSelfRef.FIFO_TX__DOT__ACK_num_l = vlSelfRef.FIFO_TX__DOT__nACK_num_l;
        vlSelfRef.FIFO_TX__DOT__ptr_end = vlSelfRef.FIFO_TX__DOT__nptr_end;
        vlSelfRef.FIFO_TX__DOT__wrt_ptr = vlSelfRef.FIFO_TX__DOT__nwrt_ptr;
        vlSelfRef.FIFO_TX__DOT__wr_state = vlSelfRef.FIFO_TX__DOT__nwr_state;
        vlSelfRef.FIFO_TX__DOT__msg_end_ptr = vlSelfRef.FIFO_TX__DOT__nmsg_end_ptr;
        vlSelfRef.FIFO_TX__DOT__rd_state = vlSelfRef.FIFO_TX__DOT__nrd_state;
        vlSelfRef.FIFO_TX__DOT__dict_tx[0U] = vlSelfRef.FIFO_TX__DOT__ndict_tx[0U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[1U] = vlSelfRef.FIFO_TX__DOT__ndict_tx[1U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[2U] = vlSelfRef.FIFO_TX__DOT__ndict_tx[2U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[3U] = vlSelfRef.FIFO_TX__DOT__ndict_tx[3U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[4U] = vlSelfRef.FIFO_TX__DOT__ndict_tx[4U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[5U] = vlSelfRef.FIFO_TX__DOT__ndict_tx[5U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[6U] = vlSelfRef.FIFO_TX__DOT__ndict_tx[6U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[7U] = vlSelfRef.FIFO_TX__DOT__ndict_tx[7U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[8U] = vlSelfRef.FIFO_TX__DOT__ndict_tx[8U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[9U] = vlSelfRef.FIFO_TX__DOT__ndict_tx[9U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0xaU] = vlSelfRef.FIFO_TX__DOT__ndict_tx[0xaU];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0xbU] = vlSelfRef.FIFO_TX__DOT__ndict_tx[0xbU];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0xcU] = vlSelfRef.FIFO_TX__DOT__ndict_tx[0xcU];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0xdU] = vlSelfRef.FIFO_TX__DOT__ndict_tx[0xdU];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0xeU] = vlSelfRef.FIFO_TX__DOT__ndict_tx[0xeU];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0xfU] = vlSelfRef.FIFO_TX__DOT__ndict_tx[0xfU];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0x10U] = vlSelfRef.FIFO_TX__DOT__ndict_tx[0x10U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0x11U] = vlSelfRef.FIFO_TX__DOT__ndict_tx[0x11U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0x12U] = vlSelfRef.FIFO_TX__DOT__ndict_tx[0x12U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0x13U] = vlSelfRef.FIFO_TX__DOT__ndict_tx[0x13U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0x14U] = vlSelfRef.FIFO_TX__DOT__ndict_tx[0x14U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0x15U] = vlSelfRef.FIFO_TX__DOT__ndict_tx[0x15U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0x16U] = vlSelfRef.FIFO_TX__DOT__ndict_tx[0x16U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0x17U] = vlSelfRef.FIFO_TX__DOT__ndict_tx[0x17U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0x18U] = vlSelfRef.FIFO_TX__DOT__ndict_tx[0x18U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0x19U] = vlSelfRef.FIFO_TX__DOT__ndict_tx[0x19U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0x1aU] = vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1aU];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0x1bU] = vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1bU];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0x1cU] = vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1cU];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0x1dU] = vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1dU];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0x1eU] = vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1eU];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0x1fU] = vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1fU];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0x20U] = vlSelfRef.FIFO_TX__DOT__ndict_tx[0x20U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0x21U] = vlSelfRef.FIFO_TX__DOT__ndict_tx[0x21U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0x22U] = vlSelfRef.FIFO_TX__DOT__ndict_tx[0x22U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0x23U] = vlSelfRef.FIFO_TX__DOT__ndict_tx[0x23U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0x24U] = vlSelfRef.FIFO_TX__DOT__ndict_tx[0x24U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0x25U] = vlSelfRef.FIFO_TX__DOT__ndict_tx[0x25U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0x26U] = vlSelfRef.FIFO_TX__DOT__ndict_tx[0x26U];
        vlSelfRef.FIFO_TX__DOT__rd_ptr = vlSelfRef.FIFO_TX__DOT__nrd_ptr;
        vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr = vlSelfRef.FIFO_TX__DOT__ndict_wrt_ptr;
        vlSelfRef.FIFO_TX__DOT__dict_rd_ptr = vlSelfRef.FIFO_TX__DOT__ndict_rd_ptr;
    } else {
        vlSelfRef.rd_FIFO_payload = 0ULL;
        vlSelfRef.FIFO_TX__DOT__bytes_abt_sent_msg = 0U;
        vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0U] = 
            VFIFO_TX__ConstPool__CONST_h997e551f_0[0U];
        vlSelfRef.FIFO_TX__DOT__TCP_tx_order[1U] = 
            VFIFO_TX__ConstPool__CONST_h997e551f_0[1U];
        vlSelfRef.FIFO_TX__DOT__TCP_tx_order[2U] = 
            VFIFO_TX__ConstPool__CONST_h997e551f_0[2U];
        vlSelfRef.FIFO_TX__DOT__TCP_tx_order[3U] = 
            VFIFO_TX__ConstPool__CONST_h997e551f_0[3U];
        vlSelfRef.FIFO_TX__DOT__TCP_tx_order[4U] = 
            VFIFO_TX__ConstPool__CONST_h997e551f_0[4U];
        vlSelfRef.FIFO_TX__DOT__TCP_tx_order[5U] = 
            VFIFO_TX__ConstPool__CONST_h997e551f_0[5U];
        vlSelfRef.FIFO_TX__DOT__TCP_tx_order[6U] = 
            VFIFO_TX__ConstPool__CONST_h997e551f_0[6U];
        vlSelfRef.FIFO_TX__DOT__TCP_tx_order[7U] = 
            VFIFO_TX__ConstPool__CONST_h997e551f_0[7U];
        vlSelfRef.FIFO_TX__DOT__TCP_tx_order[8U] = 
            VFIFO_TX__ConstPool__CONST_h997e551f_0[8U];
        vlSelfRef.FIFO_TX__DOT__TCP_tx_order[9U] = 
            VFIFO_TX__ConstPool__CONST_h997e551f_0[9U];
        vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0xaU] 
            = VFIFO_TX__ConstPool__CONST_h997e551f_0[0xaU];
        vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0xbU] 
            = VFIFO_TX__ConstPool__CONST_h997e551f_0[0xbU];
        vlSelfRef.bytes_abt_sent = 0U;
        vlSelfRef.FIFO_TX__DOT__flush_ptr = 0U;
        vlSelfRef.FIFO_TX__DOT__ptr_str = 0U;
        vlSelfRef.FIFO_TX__DOT__ACK_num_l = 0U;
        vlSelfRef.FIFO_TX__DOT__ptr_end = 0U;
        vlSelfRef.FIFO_TX__DOT__wrt_ptr = 0U;
        vlSelfRef.FIFO_TX__DOT__wr_state = 0U;
        vlSelfRef.FIFO_TX__DOT__msg_end_ptr = 0U;
        vlSelfRef.FIFO_TX__DOT__rd_state = 0U;
        vlSelfRef.FIFO_TX__DOT__dict_tx[0U] = VFIFO_TX__ConstPool__CONST_hdd0e542c_0[0U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[1U] = VFIFO_TX__ConstPool__CONST_hdd0e542c_0[1U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[2U] = VFIFO_TX__ConstPool__CONST_hdd0e542c_0[2U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[3U] = VFIFO_TX__ConstPool__CONST_hdd0e542c_0[3U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[4U] = VFIFO_TX__ConstPool__CONST_hdd0e542c_0[4U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[5U] = VFIFO_TX__ConstPool__CONST_hdd0e542c_0[5U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[6U] = VFIFO_TX__ConstPool__CONST_hdd0e542c_0[6U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[7U] = VFIFO_TX__ConstPool__CONST_hdd0e542c_0[7U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[8U] = VFIFO_TX__ConstPool__CONST_hdd0e542c_0[8U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[9U] = VFIFO_TX__ConstPool__CONST_hdd0e542c_0[9U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0xaU] = VFIFO_TX__ConstPool__CONST_hdd0e542c_0[0xaU];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0xbU] = VFIFO_TX__ConstPool__CONST_hdd0e542c_0[0xbU];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0xcU] = VFIFO_TX__ConstPool__CONST_hdd0e542c_0[0xcU];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0xdU] = VFIFO_TX__ConstPool__CONST_hdd0e542c_0[0xdU];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0xeU] = VFIFO_TX__ConstPool__CONST_hdd0e542c_0[0xeU];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0xfU] = VFIFO_TX__ConstPool__CONST_hdd0e542c_0[0xfU];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0x10U] = VFIFO_TX__ConstPool__CONST_hdd0e542c_0[0x10U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0x11U] = VFIFO_TX__ConstPool__CONST_hdd0e542c_0[0x11U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0x12U] = VFIFO_TX__ConstPool__CONST_hdd0e542c_0[0x12U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0x13U] = VFIFO_TX__ConstPool__CONST_hdd0e542c_0[0x13U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0x14U] = VFIFO_TX__ConstPool__CONST_hdd0e542c_0[0x14U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0x15U] = VFIFO_TX__ConstPool__CONST_hdd0e542c_0[0x15U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0x16U] = VFIFO_TX__ConstPool__CONST_hdd0e542c_0[0x16U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0x17U] = VFIFO_TX__ConstPool__CONST_hdd0e542c_0[0x17U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0x18U] = VFIFO_TX__ConstPool__CONST_hdd0e542c_0[0x18U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0x19U] = VFIFO_TX__ConstPool__CONST_hdd0e542c_0[0x19U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0x1aU] = VFIFO_TX__ConstPool__CONST_hdd0e542c_0[0x1aU];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0x1bU] = VFIFO_TX__ConstPool__CONST_hdd0e542c_0[0x1bU];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0x1cU] = VFIFO_TX__ConstPool__CONST_hdd0e542c_0[0x1cU];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0x1dU] = VFIFO_TX__ConstPool__CONST_hdd0e542c_0[0x1dU];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0x1eU] = VFIFO_TX__ConstPool__CONST_hdd0e542c_0[0x1eU];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0x1fU] = VFIFO_TX__ConstPool__CONST_hdd0e542c_0[0x1fU];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0x20U] = VFIFO_TX__ConstPool__CONST_hdd0e542c_0[0x20U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0x21U] = VFIFO_TX__ConstPool__CONST_hdd0e542c_0[0x21U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0x22U] = VFIFO_TX__ConstPool__CONST_hdd0e542c_0[0x22U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0x23U] = VFIFO_TX__ConstPool__CONST_hdd0e542c_0[0x23U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0x24U] = VFIFO_TX__ConstPool__CONST_hdd0e542c_0[0x24U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0x25U] = VFIFO_TX__ConstPool__CONST_hdd0e542c_0[0x25U];
        vlSelfRef.FIFO_TX__DOT__dict_tx[0x26U] = VFIFO_TX__ConstPool__CONST_hdd0e542c_0[0x26U];
        vlSelfRef.FIFO_TX__DOT__rd_ptr = 0U;
        vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr = 0U;
        vlSelfRef.FIFO_TX__DOT__dict_rd_ptr = 0U;
    }
    vlSelfRef.rd_FIFO_last = ((IData)(vlSelfRef.nRST) 
                              && (IData)(vlSelfRef.FIFO_TX__DOT__nrd_FIFO_last));
    vlSelfRef.FIFO_TX__DOT__out_order_req_l = ((IData)(vlSelfRef.nRST) 
                                               && (IData)(vlSelfRef.FIFO_TX__DOT__nout_order_req_l));
    vlSelfRef.FIFO_TX__DOT__ACK_rcv_flag_l = ((IData)(vlSelfRef.nRST) 
                                              && (IData)(vlSelfRef.FIFO_TX__DOT__nACK_rcv_flag_l));
    vlSelfRef.FIFO_TX__DOT__nACK_num_l = vlSelfRef.FIFO_TX__DOT__ACK_num_l;
    vlSelfRef.FIFO_TX__DOT__nmsg_end_ptr = vlSelfRef.FIFO_TX__DOT__msg_end_ptr;
    vlSelfRef.FIFO_TX__DOT__nout_order_req_l = vlSelfRef.FIFO_TX__DOT__out_order_req_l;
    if (vlSelfRef.out_order_req) {
        vlSelfRef.FIFO_TX__DOT__nout_order_req_l = 1U;
    }
    vlSelfRef.FIFO_TX__DOT__full = (((IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr) 
                                     - (IData)(1U)) 
                                    == (IData)(vlSelfRef.FIFO_TX__DOT__wrt_ptr));
    vlSelfRef.FIFO_TX__DOT__ndict_wrt_ptr = vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr;
    vlSelfRef.FIFO_TX__DOT__nrd_ptr = vlSelfRef.FIFO_TX__DOT__rd_ptr;
    vlSelfRef.FIFO_TX__DOT__ndict_rd_ptr = vlSelfRef.FIFO_TX__DOT__dict_rd_ptr;
    vlSelfRef.FIFO_TX__DOT__nrd_FIFO_valid = vlSelfRef.rd_FIFO_valid;
    vlSelfRef.FIFO_TX__DOT__nACK_rcv_flag_l = vlSelfRef.FIFO_TX__DOT__ACK_rcv_flag_l;
    if (vlSelfRef.ACK_rcv_flag) {
        vlSelfRef.FIFO_TX__DOT__nACK_num_l = vlSelfRef.ACK_num;
        vlSelfRef.FIFO_TX__DOT__nACK_rcv_flag_l = 1U;
    }
    vlSelfRef.FIFO_TX__DOT__nflush_ptr = vlSelfRef.FIFO_TX__DOT__flush_ptr;
    vlSelfRef.FIFO_TX__DOT__nrd_FIFO_last = vlSelfRef.rd_FIFO_last;
    vlSelfRef.FIFO_TX__DOT__nrd_FIFO_payload = (0x3fU 
                                                & (IData)(vlSelfRef.rd_FIFO_payload));
    vlSelfRef.FIFO_TX__DOT__nptr_end = vlSelfRef.FIFO_TX__DOT__msg_end_ptr;
    vlSelfRef.FIFO_TX__DOT__nptr_str = vlSelfRef.FIFO_TX__DOT__ptr_str;
    vlSelfRef.FIFO_TX__DOT__nrd_state = vlSelfRef.FIFO_TX__DOT__rd_state;
    vlSelfRef.FIFO_TX__DOT__nbytes_abt_sent = vlSelfRef.FIFO_TX__DOT__bytes_abt_sent_msg;
    if ((0U == (IData)(vlSelfRef.FIFO_TX__DOT__rd_state))) {
        if (vlSelfRef.rd_FIFO_en) {
            if (vlSelfRef.FIFO_TX__DOT__out_order_req_l) {
                vlSelfRef.FIFO_TX__DOT__nptr_end = 
                    ((0x4cfU >= (0x7ffU & ((IData)(0x4dU) 
                                           * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))
                      ? (0x3fU & (((0U == (0x1fU & 
                                           ((IData)(0x4dU) 
                                            * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))
                                    ? 0U : (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                            (((IData)(5U) 
                                              + (0x7ffU 
                                                 & ((IData)(0x4dU) 
                                                    * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x4dU) 
                                                      * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))) 
                                  | (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                     (0x3fU & (((IData)(0x4dU) 
                                                * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)) 
                                               >> 5U))] 
                                     >> (0x1fU & ((IData)(0x4dU) 
                                                  * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))))
                      : 0U);
                vlSelfRef.FIFO_TX__DOT__nptr_str = 
                    ((0x4cfU >= ((IData)(6U) + (0x7ffU 
                                                & ((IData)(0x4dU) 
                                                   * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))
                      ? (0x3fU & (((0U == (0x1fU & 
                                           ((IData)(6U) 
                                            + (0x7ffU 
                                               & ((IData)(0x4dU) 
                                                  * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))))
                                    ? 0U : (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                            (((IData)(0xbU) 
                                              + (0x7ffU 
                                                 & ((IData)(0x4dU) 
                                                    * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(6U) 
                                                      + 
                                                      (0x7ffU 
                                                       & ((IData)(0x4dU) 
                                                          * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))))) 
                                  | (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                     (((IData)(6U) 
                                       + (0x7ffU & 
                                          ((IData)(0x4dU) 
                                           * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(6U) 
                                                     + 
                                                     (0x7ffU 
                                                      & ((IData)(0x4dU) 
                                                         * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))))))
                      : 0U);
                vlSelfRef.FIFO_TX__DOT__nrd_state = 2U;
                vlSelfRef.FIFO_TX__DOT__nbytes_abt_sent 
                    = ((0x4cfU >= ((IData)(0xcU) + 
                                   (0x7ffU & ((IData)(0x4dU) 
                                              * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))
                        ? (0xffffU & (((0U == (0x1fU 
                                               & ((IData)(0xcU) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0x4dU) 
                                                      * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))))
                                        ? 0U : (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                                (((IData)(0x1bU) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0x4dU) 
                                                      * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0xcU) 
                                                     + 
                                                     (0x7ffU 
                                                      & ((IData)(0x4dU) 
                                                         * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))))) 
                                      | (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                         (((IData)(0xcU) 
                                           + (0x7ffU 
                                              & ((IData)(0x4dU) 
                                                 * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                                          >> 5U)] >> 
                                         (0x1fU & ((IData)(0xcU) 
                                                   + 
                                                   (0x7ffU 
                                                    & ((IData)(0x4dU) 
                                                       * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))))))
                        : 0U);
            } else {
                vlSelfRef.FIFO_TX__DOT__nrd_state = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.FIFO_TX__DOT__rd_state))) {
        if ((((IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr) 
              != ((IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr) 
                  - (IData)(1U))) & (((IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr) 
                                      - (IData)(1U)) 
                                     != (IData)(vlSelfRef.FIFO_TX__DOT__msg_end_ptr)))) {
            vlSelfRef.FIFO_TX__DOT__nptr_end = vlSelfRef.FIFO_TX__DOT__ptr_end;
            vlSelfRef.FIFO_TX__DOT__nptr_str = vlSelfRef.FIFO_TX__DOT__rd_ptr;
            if ((((IData)(1U) + (IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr)) 
                 == (IData)(vlSelfRef.FIFO_TX__DOT__ptr_end))) {
                vlSelfRef.FIFO_TX__DOT__nrd_state = 0U;
            }
            vlSelfRef.FIFO_TX__DOT__nbytes_abt_sent 
                = vlSelfRef.bytes_abt_sent;
        }
    } else if ((2U == (IData)(vlSelfRef.FIFO_TX__DOT__rd_state))) {
        vlSelfRef.FIFO_TX__DOT__nptr_str = (0x3fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.FIFO_TX__DOT__ptr_str)));
        if (((IData)(vlSelfRef.FIFO_TX__DOT__ptr_str) 
             == (IData)(vlSelfRef.FIFO_TX__DOT__ptr_end))) {
            vlSelfRef.FIFO_TX__DOT__nrd_state = 0U;
        }
    }
    vlSelfRef.FIFO_TX__DOT__nbytes_abt_sent_msg = vlSelfRef.FIFO_TX__DOT__bytes_abt_sent_msg;
    if ((0U != (IData)(vlSelfRef.FIFO_TX__DOT__wr_state))) {
        if ((2U != (IData)(vlSelfRef.FIFO_TX__DOT__wr_state))) {
            if ((1U == (IData)(vlSelfRef.FIFO_TX__DOT__wr_state))) {
                if (vlSelfRef.axis_last) {
                    vlSelfRef.FIFO_TX__DOT__nmsg_end_ptr 
                        = (0x3fU & ((IData)(1U) + ((IData)(vlSelfRef.FIFO_TX__DOT__msg_end_ptr) 
                                                   + (IData)(vlSelfRef.FIFO_TX__DOT__wrt_ptr))));
                }
            }
        }
        if ((2U == (IData)(vlSelfRef.FIFO_TX__DOT__wr_state))) {
            if (((IData)(vlSelfRef.FIFO_TX__DOT__flush_ptr) 
                 == ((0x4cfU >= (0x7ffU & ((IData)(0x4dU) 
                                           * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))
                      ? (0x3fU & (((0U == (0x1fU & 
                                           ((IData)(0x4dU) 
                                            * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))
                                    ? 0U : (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                            (((IData)(5U) 
                                              + (0x7ffU 
                                                 & ((IData)(0x4dU) 
                                                    * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x4dU) 
                                                      * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))) 
                                  | (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                     (0x3fU & (((IData)(0x4dU) 
                                                * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)) 
                                               >> 5U))] 
                                     >> (0x1fU & ((IData)(0x4dU) 
                                                  * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))))
                      : 0U))) {
                vlSelfRef.FIFO_TX__DOT__nACK_rcv_flag_l = 0U;
            }
        }
    }
    if ((0U != (IData)(vlSelfRef.FIFO_TX__DOT__rd_state))) {
        if ((1U != (IData)(vlSelfRef.FIFO_TX__DOT__rd_state))) {
            if ((2U == (IData)(vlSelfRef.FIFO_TX__DOT__rd_state))) {
                if (((IData)(vlSelfRef.FIFO_TX__DOT__ptr_str) 
                     == (IData)(vlSelfRef.FIFO_TX__DOT__ptr_end))) {
                    vlSelfRef.FIFO_TX__DOT__nout_order_req_l = 0U;
                }
            }
        }
        if ((1U == (IData)(vlSelfRef.FIFO_TX__DOT__rd_state))) {
            vlSelfRef.FIFO_TX__DOT__rd_debug_2 = (((IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr) 
                                                   - (IData)(1U)) 
                                                  != (IData)(vlSelfRef.FIFO_TX__DOT__msg_end_ptr));
            vlSelfRef.FIFO_TX__DOT__rd_debug_1 = ((IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr) 
                                                  != 
                                                  ((IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr) 
                                                   - (IData)(1U)));
            if ((((IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr) 
                  != ((IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr) 
                      - (IData)(1U))) & (((IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr) 
                                          - (IData)(1U)) 
                                         != (IData)(vlSelfRef.FIFO_TX__DOT__msg_end_ptr)))) {
                vlSelfRef.FIFO_TX__DOT__nrd_ptr = (0x3fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr)));
                vlSelfRef.FIFO_TX__DOT__nrd_FIFO_valid = 1U;
                if ((((IData)(1U) + (IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr)) 
                     == (IData)(vlSelfRef.FIFO_TX__DOT__ptr_end))) {
                    vlSelfRef.FIFO_TX__DOT__nrd_FIFO_last = 1U;
                    vlSelfRef.FIFO_TX__DOT__nbytes_abt_sent_msg 
                        = (0xffffU & ((IData)(vlSelfRef.FIFO_TX__DOT__bytes_abt_sent_msg) 
                                      - (IData)(vlSelfRef.bytes_abt_sent)));
                }
                vlSelfRef.FIFO_TX__DOT__nrd_FIFO_payload 
                    = ((0x17fU >= (0x1ffU & VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr), 6U)))
                        ? (0x3fU & (((0U == (0x1fU 
                                             & VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr), 6U)))
                                      ? 0U : (vlSelfRef.FIFO_TX__DOT__TCP_tx_order[
                                              (((IData)(5U) 
                                                + (0x1ffU 
                                                   & VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr), 6U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr), 6U))))) 
                                    | (vlSelfRef.FIFO_TX__DOT__TCP_tx_order[
                                       (0xfU & (VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr), 6U) 
                                                >> 5U))] 
                                       >> (0x1fU & 
                                           VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr), 6U)))))
                        : 0U);
            }
        } else if ((2U == (IData)(vlSelfRef.FIFO_TX__DOT__rd_state))) {
            if (((IData)(vlSelfRef.FIFO_TX__DOT__ptr_str) 
                 == (IData)(vlSelfRef.FIFO_TX__DOT__ptr_end))) {
                vlSelfRef.FIFO_TX__DOT__nrd_FIFO_last = 1U;
            }
            vlSelfRef.FIFO_TX__DOT__nrd_FIFO_payload 
                = ((0x17fU >= (0x1ffU & VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__ptr_str), 6U)))
                    ? (0x3fU & (((0U == (0x1fU & VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__ptr_str), 6U)))
                                  ? 0U : (vlSelfRef.FIFO_TX__DOT__TCP_tx_order[
                                          (((IData)(5U) 
                                            + (0x1ffU 
                                               & VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__ptr_str), 6U))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__ptr_str), 6U))))) 
                                | (vlSelfRef.FIFO_TX__DOT__TCP_tx_order[
                                   (0xfU & (VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__ptr_str), 6U) 
                                            >> 5U))] 
                                   >> (0x1fU & VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__ptr_str), 6U)))))
                    : 0U);
        }
    }
    if ((0U != (IData)(vlSelfRef.FIFO_TX__DOT__wr_state))) {
        if ((2U != (IData)(vlSelfRef.FIFO_TX__DOT__wr_state))) {
            if ((1U == (IData)(vlSelfRef.FIFO_TX__DOT__wr_state))) {
                if (vlSelfRef.axis_last) {
                    vlSelfRef.FIFO_TX__DOT__nbytes_abt_sent_msg 
                        = (0xffffU & ((IData)(vlSelfRef.FIFO_TX__DOT__bytes_abt_sent_msg) 
                                      + vlSelfRef.len_seq));
                }
            }
        }
    }
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0U] = vlSelfRef.FIFO_TX__DOT__dict_tx[0U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[1U] = vlSelfRef.FIFO_TX__DOT__dict_tx[1U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[2U] = vlSelfRef.FIFO_TX__DOT__dict_tx[2U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[3U] = vlSelfRef.FIFO_TX__DOT__dict_tx[3U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[4U] = vlSelfRef.FIFO_TX__DOT__dict_tx[4U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[5U] = vlSelfRef.FIFO_TX__DOT__dict_tx[5U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[6U] = vlSelfRef.FIFO_TX__DOT__dict_tx[6U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[7U] = vlSelfRef.FIFO_TX__DOT__dict_tx[7U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[8U] = vlSelfRef.FIFO_TX__DOT__dict_tx[8U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[9U] = vlSelfRef.FIFO_TX__DOT__dict_tx[9U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0xaU] = vlSelfRef.FIFO_TX__DOT__dict_tx[0xaU];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0xbU] = vlSelfRef.FIFO_TX__DOT__dict_tx[0xbU];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0xcU] = vlSelfRef.FIFO_TX__DOT__dict_tx[0xcU];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0xdU] = vlSelfRef.FIFO_TX__DOT__dict_tx[0xdU];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0xeU] = vlSelfRef.FIFO_TX__DOT__dict_tx[0xeU];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0xfU] = vlSelfRef.FIFO_TX__DOT__dict_tx[0xfU];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0x10U] = vlSelfRef.FIFO_TX__DOT__dict_tx[0x10U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0x11U] = vlSelfRef.FIFO_TX__DOT__dict_tx[0x11U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0x12U] = vlSelfRef.FIFO_TX__DOT__dict_tx[0x12U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0x13U] = vlSelfRef.FIFO_TX__DOT__dict_tx[0x13U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0x14U] = vlSelfRef.FIFO_TX__DOT__dict_tx[0x14U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0x15U] = vlSelfRef.FIFO_TX__DOT__dict_tx[0x15U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0x16U] = vlSelfRef.FIFO_TX__DOT__dict_tx[0x16U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0x17U] = vlSelfRef.FIFO_TX__DOT__dict_tx[0x17U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0x18U] = vlSelfRef.FIFO_TX__DOT__dict_tx[0x18U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0x19U] = vlSelfRef.FIFO_TX__DOT__dict_tx[0x19U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1aU] = vlSelfRef.FIFO_TX__DOT__dict_tx[0x1aU];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1bU] = vlSelfRef.FIFO_TX__DOT__dict_tx[0x1bU];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1cU] = vlSelfRef.FIFO_TX__DOT__dict_tx[0x1cU];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1dU] = vlSelfRef.FIFO_TX__DOT__dict_tx[0x1dU];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1eU] = vlSelfRef.FIFO_TX__DOT__dict_tx[0x1eU];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0x1fU] = vlSelfRef.FIFO_TX__DOT__dict_tx[0x1fU];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0x20U] = vlSelfRef.FIFO_TX__DOT__dict_tx[0x20U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0x21U] = vlSelfRef.FIFO_TX__DOT__dict_tx[0x21U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0x22U] = vlSelfRef.FIFO_TX__DOT__dict_tx[0x22U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0x23U] = vlSelfRef.FIFO_TX__DOT__dict_tx[0x23U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0x24U] = vlSelfRef.FIFO_TX__DOT__dict_tx[0x24U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0x25U] = vlSelfRef.FIFO_TX__DOT__dict_tx[0x25U];
    vlSelfRef.FIFO_TX__DOT__ndict_tx[0x26U] = vlSelfRef.FIFO_TX__DOT__dict_tx[0x26U];
    if ((0U != (IData)(vlSelfRef.FIFO_TX__DOT__rd_state))) {
        if ((1U == (IData)(vlSelfRef.FIFO_TX__DOT__rd_state))) {
            if ((((IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr) 
                  != ((IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr) 
                      - (IData)(1U))) & (((IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr) 
                                          - (IData)(1U)) 
                                         != (IData)(vlSelfRef.FIFO_TX__DOT__msg_end_ptr)))) {
                if ((((IData)(1U) + (IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr)) 
                     == (IData)(vlSelfRef.FIFO_TX__DOT__ptr_end))) {
                    vlSelfRef.FIFO_TX__DOT____Vlvbound_h992d98c3__0 = 1U;
                    if ((0x4cfU >= ((IData)(0x4cU) 
                                    + (0x7ffU & ((IData)(0x4dU) 
                                                 * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))))) {
                        vlSelfRef.FIFO_TX__DOT__ndict_tx[(
                                                          ((IData)(0x4cU) 
                                                           + 
                                                           (0x7ffU 
                                                            & ((IData)(0x4dU) 
                                                               * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))) 
                                                          >> 5U)] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x4cU) 
                                              + (0x7ffU 
                                                 & ((IData)(0x4dU) 
                                                    * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr))))))) 
                                & vlSelfRef.FIFO_TX__DOT__ndict_tx[
                                (((IData)(0x4cU) + 
                                  (0x7ffU & ((IData)(0x4dU) 
                                             * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))) 
                                 >> 5U)]) | ((IData)(vlSelfRef.FIFO_TX__DOT____Vlvbound_h992d98c3__0) 
                                             << (0x1fU 
                                                 & ((IData)(0x4cU) 
                                                    + 
                                                    (0x7ffU 
                                                     & ((IData)(0x4dU) 
                                                        * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))))));
                    }
                    vlSelfRef.FIFO_TX__DOT____Vlvbound_h9ca48d5c__0 
                        = vlSelfRef.seq_num_tx;
                    if ((0x4cfU >= ((IData)(0x2cU) 
                                    + (0x7ffU & ((IData)(0x4dU) 
                                                 * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))))) {
                        VL_ASSIGNSEL_WI(1232,32,((IData)(0x2cU) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x4dU) 
                                                     * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))), vlSelfRef.FIFO_TX__DOT__ndict_tx, vlSelfRef.FIFO_TX__DOT____Vlvbound_h9ca48d5c__0);
                    }
                    vlSelfRef.FIFO_TX__DOT____Vlvbound_hdadf67d2__0 
                        = vlSelfRef.bytes_abt_sent;
                    if ((0x4cfU >= ((IData)(0xcU) + 
                                    (0x7ffU & ((IData)(0x4dU) 
                                               * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))))) {
                        VL_ASSIGNSEL_WI(1232,32,((IData)(0xcU) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x4dU) 
                                                     * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))), vlSelfRef.FIFO_TX__DOT__ndict_tx, vlSelfRef.FIFO_TX__DOT____Vlvbound_hdadf67d2__0);
                    }
                    vlSelfRef.FIFO_TX__DOT____Vlvbound_hf64662ff__0 
                        = vlSelfRef.FIFO_TX__DOT__ptr_str;
                    if ((0x4cfU >= ((IData)(6U) + (0x7ffU 
                                                   & ((IData)(0x4dU) 
                                                      * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))))) {
                        VL_ASSIGNSEL_WI(1232,6,((IData)(6U) 
                                                + (0x7ffU 
                                                   & ((IData)(0x4dU) 
                                                      * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))), vlSelfRef.FIFO_TX__DOT__ndict_tx, vlSelfRef.FIFO_TX__DOT____Vlvbound_hf64662ff__0);
                    }
                    vlSelfRef.FIFO_TX__DOT____Vlvbound_h7cd94077__0 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr)));
                    if ((0x4cfU >= (0x7ffU & ((IData)(0x4dU) 
                                              * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr))))) {
                        VL_ASSIGNSEL_WI(1232,6,(0x7ffU 
                                                & ((IData)(0x4dU) 
                                                   * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr))), vlSelfRef.FIFO_TX__DOT__ndict_tx, vlSelfRef.FIFO_TX__DOT____Vlvbound_h7cd94077__0);
                    }
                }
            }
        }
    }
    vlSelfRef.FIFO_TX__DOT__nwrt_ptr = vlSelfRef.FIFO_TX__DOT__wrt_ptr;
    vlSelfRef.FIFO_TX__DOT__nwr_FIFO_valid = 0U;
    vlSelfRef.FIFO_TX__DOT__nwr_state = vlSelfRef.FIFO_TX__DOT__wr_state;
    vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0U] = vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0U];
    vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[1U] = vlSelfRef.FIFO_TX__DOT__TCP_tx_order[1U];
    vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[2U] = vlSelfRef.FIFO_TX__DOT__TCP_tx_order[2U];
    vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[3U] = vlSelfRef.FIFO_TX__DOT__TCP_tx_order[3U];
    vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[4U] = vlSelfRef.FIFO_TX__DOT__TCP_tx_order[4U];
    vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[5U] = vlSelfRef.FIFO_TX__DOT__TCP_tx_order[5U];
    vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[6U] = vlSelfRef.FIFO_TX__DOT__TCP_tx_order[6U];
    vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[7U] = vlSelfRef.FIFO_TX__DOT__TCP_tx_order[7U];
    vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[8U] = vlSelfRef.FIFO_TX__DOT__TCP_tx_order[8U];
    vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[9U] = vlSelfRef.FIFO_TX__DOT__TCP_tx_order[9U];
    vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0xaU] = vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0xaU];
    vlSelfRef.FIFO_TX__DOT__nTCP_tx_order[0xbU] = vlSelfRef.FIFO_TX__DOT__TCP_tx_order[0xbU];
    if ((0U == (IData)(vlSelfRef.FIFO_TX__DOT__wr_state))) {
        if ((((IData)(vlSelfRef.FIFO_TX__DOT__ACK_rcv_flag_l) 
              & (((0x4cfU >= ((IData)(0x2cU) + (0x7ffU 
                                                & ((IData)(0x4dU) 
                                                   * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))
                   ? (((0U == (0x1fU & ((IData)(0x2cU) 
                                        + (0x7ffU & 
                                           ((IData)(0x4dU) 
                                            * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))))
                        ? 0U : (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                (((IData)(0x4bU) + 
                                  (0x7ffU & ((IData)(0x4dU) 
                                             * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                                 >> 5U)] << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x2cU) 
                                                   + 
                                                   (0x7ffU 
                                                    & ((IData)(0x4dU) 
                                                       * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))))) 
                      | (vlSelfRef.FIFO_TX__DOT__dict_tx[
                         (((IData)(0x2cU) + (0x7ffU 
                                             & ((IData)(0x4dU) 
                                                * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                          >> 5U)] >> (0x1fU & ((IData)(0x2cU) 
                                               + (0x7ffU 
                                                  & ((IData)(0x4dU) 
                                                     * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))))
                   : 0U) < vlSelfRef.FIFO_TX__DOT__ACK_num_l)) 
             & ((IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr) 
                != (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))) {
            vlSelfRef.FIFO_TX__DOT__ndict_rd_ptr = 
                (0xfU & ((IData)(1U) + (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)));
            vlSelfRef.FIFO_TX__DOT__nflush_ptr = ((0x4cfU 
                                                   >= 
                                                   ((IData)(6U) 
                                                    + 
                                                    (0x7ffU 
                                                     & ((IData)(0x4dU) 
                                                        * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))
                                                   ? 
                                                  (0x3fU 
                                                   & (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(6U) 
                                                            + 
                                                            (0x7ffU 
                                                             & ((IData)(0x4dU) 
                                                                * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                                        (((IData)(0xbU) 
                                                          + 
                                                          (0x7ffU 
                                                           & ((IData)(0x4dU) 
                                                              * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(6U) 
                                                             + 
                                                             (0x7ffU 
                                                              & ((IData)(0x4dU) 
                                                                 * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))))) 
                                                      | (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                                         (((IData)(6U) 
                                                           + 
                                                           (0x7ffU 
                                                            & ((IData)(0x4dU) 
                                                               * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                                                          >> 5U)] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(6U) 
                                                             + 
                                                             (0x7ffU 
                                                              & ((IData)(0x4dU) 
                                                                 * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))))))
                                                   : 0U);
            vlSelfRef.FIFO_TX__DOT__nwr_state = 2U;
        } else if (((IData)(vlSelfRef.wr_FIFO_en) & 
                    (~ (IData)(vlSelfRef.FIFO_TX__DOT__full)))) {
            vlSelfRef.FIFO_TX__DOT__nwr_state = 1U;
        }
        if ((1U & (~ (((IData)(vlSelfRef.FIFO_TX__DOT__ACK_rcv_flag_l) 
                       & (((0x4cfU >= ((IData)(0x2cU) 
                                       + (0x7ffU & 
                                          ((IData)(0x4dU) 
                                           * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))
                            ? (((0U == (0x1fU & ((IData)(0x2cU) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x4dU) 
                                                     * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))))
                                 ? 0U : (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                         (((IData)(0x4bU) 
                                           + (0x7ffU 
                                              & ((IData)(0x4dU) 
                                                 * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x2cU) 
                                                + (0x7ffU 
                                                   & ((IData)(0x4dU) 
                                                      * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))))) 
                               | (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                  (((IData)(0x2cU) 
                                    + (0x7ffU & ((IData)(0x4dU) 
                                                 * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                                   >> 5U)] >> (0x1fU 
                                               & ((IData)(0x2cU) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0x4dU) 
                                                      * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))))
                            : 0U) < vlSelfRef.FIFO_TX__DOT__ACK_num_l)) 
                      & ((IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr) 
                         != (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))))) {
            if (((IData)(vlSelfRef.wr_FIFO_en) & (~ (IData)(vlSelfRef.FIFO_TX__DOT__full)))) {
                vlSelfRef.FIFO_TX__DOT__nwrt_ptr = 
                    (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.FIFO_TX__DOT__wrt_ptr)));
                vlSelfRef.FIFO_TX__DOT__nwr_FIFO_valid = 1U;
                vlSelfRef.FIFO_TX__DOT____Vlvbound_h8a113359__0 
                    = vlSelfRef.soupbin_TCP_payload;
                if ((0x17fU >= (0x1ffU & VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__wrt_ptr), 6U)))) {
                    VL_ASSIGNSEL_WQ(384,64,(0x1ffU 
                                            & VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__wrt_ptr), 6U)), vlSelfRef.FIFO_TX__DOT__nTCP_tx_order, vlSelfRef.FIFO_TX__DOT____Vlvbound_h8a113359__0);
                }
            }
        }
    } else {
        if ((2U == (IData)(vlSelfRef.FIFO_TX__DOT__wr_state))) {
            vlSelfRef.FIFO_TX__DOT__nflush_ptr = (0x3fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.FIFO_TX__DOT__flush_ptr)));
            if (((IData)(vlSelfRef.FIFO_TX__DOT__flush_ptr) 
                 == ((0x4cfU >= (0x7ffU & ((IData)(0x4dU) 
                                           * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))
                      ? (0x3fU & (((0U == (0x1fU & 
                                           ((IData)(0x4dU) 
                                            * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))
                                    ? 0U : (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                            (((IData)(5U) 
                                              + (0x7ffU 
                                                 & ((IData)(0x4dU) 
                                                    * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x4dU) 
                                                      * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))) 
                                  | (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                     (0x3fU & (((IData)(0x4dU) 
                                                * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)) 
                                               >> 5U))] 
                                     >> (0x1fU & ((IData)(0x4dU) 
                                                  * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))))
                      : 0U))) {
                vlSelfRef.FIFO_TX__DOT__nwr_state = 0U;
            }
            vlSelfRef.FIFO_TX__DOT____Vlvbound_hebec1cbf__0 = 0ULL;
            if ((0x17fU >= (0x1ffU & VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__flush_ptr), 6U)))) {
                VL_ASSIGNSEL_WQ(384,64,(0x1ffU & VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__flush_ptr), 6U)), vlSelfRef.FIFO_TX__DOT__nTCP_tx_order, vlSelfRef.FIFO_TX__DOT____Vlvbound_hebec1cbf__0);
            }
        } else if ((1U == (IData)(vlSelfRef.FIFO_TX__DOT__wr_state))) {
            if (vlSelfRef.axis_last) {
                vlSelfRef.FIFO_TX__DOT__nwr_state = 0U;
            }
            vlSelfRef.FIFO_TX__DOT____Vlvbound_h8a113359__1 
                = vlSelfRef.soupbin_TCP_payload;
            if ((0x17fU >= (0x1ffU & VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__wrt_ptr), 6U)))) {
                VL_ASSIGNSEL_WQ(384,64,(0x1ffU & VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__wrt_ptr), 6U)), vlSelfRef.FIFO_TX__DOT__nTCP_tx_order, vlSelfRef.FIFO_TX__DOT____Vlvbound_h8a113359__1);
            }
        }
        if ((2U != (IData)(vlSelfRef.FIFO_TX__DOT__wr_state))) {
            if ((1U == (IData)(vlSelfRef.FIFO_TX__DOT__wr_state))) {
                vlSelfRef.FIFO_TX__DOT__nwrt_ptr = 
                    (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.FIFO_TX__DOT__wrt_ptr)));
                vlSelfRef.FIFO_TX__DOT__nwr_FIFO_valid = 1U;
                if (vlSelfRef.axis_last) {
                    vlSelfRef.FIFO_TX__DOT__nwr_FIFO_valid = 0U;
                }
            }
        }
    }
}

void VFIFO_TX___024root___eval_triggers__act(VFIFO_TX___024root* vlSelf);

bool VFIFO_TX___024root___eval_phase__act(VFIFO_TX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_TX___024root___eval_phase__act\n"); );
    VFIFO_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VFIFO_TX___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VFIFO_TX___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VFIFO_TX___024root___eval_phase__nba(VFIFO_TX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_TX___024root___eval_phase__nba\n"); );
    VFIFO_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VFIFO_TX___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFIFO_TX___024root___dump_triggers__ico(VFIFO_TX___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VFIFO_TX___024root___dump_triggers__nba(VFIFO_TX___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VFIFO_TX___024root___dump_triggers__act(VFIFO_TX___024root* vlSelf);
#endif  // VL_DEBUG

void VFIFO_TX___024root___eval(VFIFO_TX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_TX___024root___eval\n"); );
    VFIFO_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            VFIFO_TX___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/FIFO_TX.sv", 2, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VFIFO_TX___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VFIFO_TX___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/FIFO_TX.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VFIFO_TX___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/FIFO_TX.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VFIFO_TX___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VFIFO_TX___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VFIFO_TX___024root___eval_debug_assertions(VFIFO_TX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_TX___024root___eval_debug_assertions\n"); );
    VFIFO_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.CLK & 0xfeU)))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY(((vlSelfRef.nRST & 0xfeU)))) {
        Verilated::overWidthError("nRST");}
    if (VL_UNLIKELY(((vlSelfRef.seq_up & 0xfeU)))) {
        Verilated::overWidthError("seq_up");}
    if (VL_UNLIKELY(((vlSelfRef.rd_FIFO_en & 0xfeU)))) {
        Verilated::overWidthError("rd_FIFO_en");}
    if (VL_UNLIKELY(((vlSelfRef.ACK_rcv_flag & 0xfeU)))) {
        Verilated::overWidthError("ACK_rcv_flag");}
    if (VL_UNLIKELY(((vlSelfRef.out_order_req & 0xfeU)))) {
        Verilated::overWidthError("out_order_req");}
    if (VL_UNLIKELY(((vlSelfRef.axis_last & 0xfeU)))) {
        Verilated::overWidthError("axis_last");}
    if (VL_UNLIKELY(((vlSelfRef.wr_FIFO_en & 0xfeU)))) {
        Verilated::overWidthError("wr_FIFO_en");}
}
#endif  // VL_DEBUG
