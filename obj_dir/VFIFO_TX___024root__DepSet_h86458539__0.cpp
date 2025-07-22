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
    vlSelfRef.FIFO_TX__DOT__nbytes_abt_sent_msg = vlSelfRef.FIFO_TX__DOT__bytes_abt_sent_msg;
    if (((~ (IData)(vlSelfRef.axis_last)) & (IData)(vlSelfRef.FIFO_TX__DOT__rd_upd))) {
        vlSelfRef.FIFO_TX__DOT__nbytes_abt_sent_msg 
            = (0xffffU & ((IData)(vlSelfRef.FIFO_TX__DOT__bytes_abt_sent_msg) 
                          - (IData)(vlSelfRef.FIFO_TX__DOT__bytes_abt_sent_msg_rd)));
    }
    vlSelfRef.FIFO_TX__DOT__nrd_ptr = vlSelfRef.FIFO_TX__DOT__rd_ptr;
    vlSelfRef.FIFO_TX__DOT__nout_order_req_l = vlSelfRef.FIFO_TX__DOT__out_order_req_l;
    if (vlSelfRef.out_order_req) {
        vlSelfRef.FIFO_TX__DOT__nout_order_req_l = 1U;
    }
    vlSelfRef.FIFO_TX__DOT__nACK_rcv_flag_l = vlSelfRef.FIFO_TX__DOT__ACK_rcv_flag_l;
    if (vlSelfRef.ACK_rcv_flag) {
        vlSelfRef.FIFO_TX__DOT__nACK_num_l = vlSelfRef.ACK_num;
        vlSelfRef.FIFO_TX__DOT__nACK_rcv_flag_l = 1U;
    }
    if ((0U != (IData)(vlSelfRef.FIFO_TX__DOT__wr_state))) {
        if ((2U != (IData)(vlSelfRef.FIFO_TX__DOT__wr_state))) {
            if ((1U == (IData)(vlSelfRef.FIFO_TX__DOT__wr_state))) {
                if (vlSelfRef.axis_last) {
                    vlSelfRef.FIFO_TX__DOT__nmsg_end_ptr 
                        = (0x3fU & ((IData)(1U) + ((IData)(vlSelfRef.FIFO_TX__DOT__msg_end_ptr) 
                                                   + (IData)(vlSelfRef.FIFO_TX__DOT__wrt_ptr))));
                    vlSelfRef.FIFO_TX__DOT__nbytes_abt_sent_msg 
                        = (0xffffU & ((IData)(vlSelfRef.FIFO_TX__DOT__bytes_abt_sent_msg) 
                                      + vlSelfRef.len_seq));
                }
            }
        }
        if ((2U == (IData)(vlSelfRef.FIFO_TX__DOT__wr_state))) {
            if (((IData)(vlSelfRef.FIFO_TX__DOT__flush_ptr) 
                 == ((0x5cfU >= (0x7ffU & ((IData)(0x5dU) 
                                           * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))
                      ? (0x3fU & (((0U == (0x1fU & 
                                           ((IData)(0x5dU) 
                                            * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))
                                    ? 0U : (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                            (((IData)(5U) 
                                              + (0x7ffU 
                                                 & ((IData)(0x5dU) 
                                                    * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x5dU) 
                                                      * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))) 
                                  | (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                     (0x3fU & (((IData)(0x5dU) 
                                                * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)) 
                                               >> 5U))] 
                                     >> (0x1fU & ((IData)(0x5dU) 
                                                  * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))))
                      : 0U))) {
                vlSelfRef.FIFO_TX__DOT__nACK_rcv_flag_l = 0U;
            }
        }
    }
    vlSelfRef.FIFO_TX__DOT__nbytes_abt_sent = vlSelfRef.bytes_abt_sent;
    vlSelfRef.FIFO_TX__DOT__nptr_end = vlSelfRef.FIFO_TX__DOT__ptr_end;
    vlSelfRef.FIFO_TX__DOT__nchecksum_l = vlSelfRef.FIFO_TX__DOT__checksum_l;
    vlSelfRef.FIFO_TX__DOT__nrd_FIFO_valid = vlSelfRef.rd_FIFO_valid;
    vlSelfRef.FIFO_TX__DOT__ndict_wrt_ptr = vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr;
    vlSelfRef.FIFO_TX__DOT__nwrt_ptr = vlSelfRef.FIFO_TX__DOT__wrt_ptr;
    vlSelfRef.FIFO_TX__DOT__nrd_upd = vlSelfRef.FIFO_TX__DOT__rd_upd;
    vlSelfRef.FIFO_TX__DOT__nwr_FIFO_valid = 0U;
    vlSelfRef.FIFO_TX__DOT__nptr_str = vlSelfRef.FIFO_TX__DOT__ptr_str;
    vlSelfRef.FIFO_TX__DOT__nrd_FIFO_last = vlSelfRef.rd_FIFO_last;
    vlSelfRef.FIFO_TX__DOT__nrd_FIFO_payload = vlSelfRef.rd_FIFO_payload;
    vlSelfRef.FIFO_TX__DOT__nbytes_abt_sent_msg_rd 
        = vlSelfRef.FIFO_TX__DOT__bytes_abt_sent_msg_rd;
    vlSelfRef.FIFO_TX__DOT__nwr_state = vlSelfRef.FIFO_TX__DOT__wr_state;
    vlSelfRef.FIFO_TX__DOT__nrd_state = vlSelfRef.FIFO_TX__DOT__rd_state;
    if ((0U == (IData)(vlSelfRef.FIFO_TX__DOT__rd_state))) {
        if (vlSelfRef.TX_en) {
            if (vlSelfRef.FIFO_TX__DOT__out_order_req_l) {
                vlSelfRef.FIFO_TX__DOT__nbytes_abt_sent 
                    = (0xffffU & ((0x5cfU >= ((IData)(0x1cU) 
                                              + (0x7ffU 
                                                 & ((IData)(0x5dU) 
                                                    * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))
                                   ? (((0U == (0x1fU 
                                               & ((IData)(0x1cU) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0x5dU) 
                                                      * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))))
                                        ? 0U : (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                                (((IData)(0x2bU) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0x5dU) 
                                                      * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x1cU) 
                                                     + 
                                                     (0x7ffU 
                                                      & ((IData)(0x5dU) 
                                                         * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))))) 
                                      | (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                         (((IData)(0x1cU) 
                                           + (0x7ffU 
                                              & ((IData)(0x5dU) 
                                                 * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                                          >> 5U)] >> 
                                         (0x1fU & ((IData)(0x1cU) 
                                                   + 
                                                   (0x7ffU 
                                                    & ((IData)(0x5dU) 
                                                       * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))))
                                   : 0U));
                vlSelfRef.FIFO_TX__DOT__nptr_end = 
                    (0x3fU & ((0x5cfU >= (0x7ffU & 
                                          ((IData)(0x5dU) 
                                           * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))
                               ? (((0U == (0x1fU & 
                                           ((IData)(0x5dU) 
                                            * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))
                                    ? 0U : (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                            (((IData)(5U) 
                                              + (0x7ffU 
                                                 & ((IData)(0x5dU) 
                                                    * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x5dU) 
                                                      * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))) 
                                  | (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                     (0x3fU & (((IData)(0x5dU) 
                                                * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)) 
                                               >> 5U))] 
                                     >> (0x1fU & ((IData)(0x5dU) 
                                                  * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))
                               : 0U));
                vlSelfRef.FIFO_TX__DOT__nchecksum_l 
                    = (0xffffU & ((0x5cfU >= ((IData)(0xcU) 
                                              + (0x7ffU 
                                                 & ((IData)(0x5dU) 
                                                    * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))
                                   ? (((0U == (0x1fU 
                                               & ((IData)(0xcU) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0x5dU) 
                                                      * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))))
                                        ? 0U : (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                                (((IData)(0x1bU) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0x5dU) 
                                                      * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0xcU) 
                                                     + 
                                                     (0x7ffU 
                                                      & ((IData)(0x5dU) 
                                                         * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))))) 
                                      | (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                         (((IData)(0xcU) 
                                           + (0x7ffU 
                                              & ((IData)(0x5dU) 
                                                 * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                                          >> 5U)] >> 
                                         (0x1fU & ((IData)(0xcU) 
                                                   + 
                                                   (0x7ffU 
                                                    & ((IData)(0x5dU) 
                                                       * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))))
                                   : 0U));
                vlSelfRef.FIFO_TX__DOT__nptr_str = 
                    (0x3fU & ((0x5cfU >= ((IData)(6U) 
                                          + (0x7ffU 
                                             & ((IData)(0x5dU) 
                                                * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))
                               ? (((0U == (0x1fU & 
                                           ((IData)(6U) 
                                            + (0x7ffU 
                                               & ((IData)(0x5dU) 
                                                  * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))))
                                    ? 0U : (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                            (((IData)(0xbU) 
                                              + (0x7ffU 
                                                 & ((IData)(0x5dU) 
                                                    * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(6U) 
                                                      + 
                                                      (0x7ffU 
                                                       & ((IData)(0x5dU) 
                                                          * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))))) 
                                  | (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                     (((IData)(6U) 
                                       + (0x7ffU & 
                                          ((IData)(0x5dU) 
                                           * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(6U) 
                                                     + 
                                                     (0x7ffU 
                                                      & ((IData)(0x5dU) 
                                                         * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))))
                               : 0U));
                vlSelfRef.FIFO_TX__DOT__nrd_state = 2U;
            } else {
                vlSelfRef.FIFO_TX__DOT__nbytes_abt_sent 
                    = (0xffffU & (IData)(vlSelfRef.FIFO_TX__DOT__bytes_abt_sent_msg));
                vlSelfRef.FIFO_TX__DOT__nptr_end = 
                    (0x3fU & (IData)(vlSelfRef.FIFO_TX__DOT__msg_end_ptr));
                vlSelfRef.FIFO_TX__DOT__nchecksum_l 
                    = (0xffffU & (IData)(vlSelfRef.checksum_TX));
                vlSelfRef.FIFO_TX__DOT__nptr_str = 
                    (0x3fU & (IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr));
                vlSelfRef.FIFO_TX__DOT__nrd_state = 1U;
            }
        }
    } else {
        if ((1U != (IData)(vlSelfRef.FIFO_TX__DOT__rd_state))) {
            if ((2U == (IData)(vlSelfRef.FIFO_TX__DOT__rd_state))) {
                if (vlSelfRef.rd_FIFO_en) {
                    vlSelfRef.FIFO_TX__DOT__nptr_str 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.FIFO_TX__DOT__ptr_str)));
                }
            }
        }
        if ((1U == (IData)(vlSelfRef.FIFO_TX__DOT__rd_state))) {
            if ((((IData)(vlSelfRef.rd_FIFO_en) & ((IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr) 
                                                   != 
                                                   ((IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr) 
                                                    - (IData)(1U)))) 
                 & ((IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr) 
                    != ((IData)(vlSelfRef.FIFO_TX__DOT__msg_end_ptr) 
                        - (IData)(1U))))) {
                if ((((IData)(1U) + (IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr)) 
                     == (IData)(vlSelfRef.FIFO_TX__DOT__ptr_end))) {
                    vlSelfRef.FIFO_TX__DOT__nrd_state = 0U;
                }
            }
        } else if ((2U == (IData)(vlSelfRef.FIFO_TX__DOT__rd_state))) {
            if (vlSelfRef.rd_FIFO_en) {
                if (((IData)(vlSelfRef.FIFO_TX__DOT__ptr_str) 
                     == ((IData)(vlSelfRef.FIFO_TX__DOT__ptr_end) 
                         - (IData)(1U)))) {
                    vlSelfRef.FIFO_TX__DOT__nrd_state = 0U;
                }
            }
        }
    }
    VL_ASSIGN_W(4096,vlSelfRef.FIFO_TX__DOT__nTCP_tx_order, vlSelfRef.FIFO_TX__DOT__TCP_tx_order);
    if ((0U == (IData)(vlSelfRef.FIFO_TX__DOT__wr_state))) {
        if ((1U & (~ ((((0x5cfU >= ((IData)(0x3cU) 
                                    + (0x7ffU & ((IData)(0x5dU) 
                                                 * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))
                         ? (((0U == (0x1fU & ((IData)(0x3cU) 
                                              + (0x7ffU 
                                                 & ((IData)(0x5dU) 
                                                    * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))))
                              ? 0U : (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                      (((IData)(0x5bU) 
                                        + (0x7ffU & 
                                           ((IData)(0x5dU) 
                                            * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x3cU) 
                                                       + 
                                                       (0x7ffU 
                                                        & ((IData)(0x5dU) 
                                                           * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))))) 
                            | (vlSelfRef.FIFO_TX__DOT__dict_tx[
                               (((IData)(0x3cU) + (0x7ffU 
                                                   & ((IData)(0x5dU) 
                                                      * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                                >> 5U)] >> (0x1fU & 
                                            ((IData)(0x3cU) 
                                             + (0x7ffU 
                                                & ((IData)(0x5dU) 
                                                   * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))))
                         : 0U) < vlSelfRef.FIFO_TX__DOT__ACK_num_l) 
                      & ((IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr) 
                         != (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))))) {
            if (((IData)(vlSelfRef.wr_FIFO_en) & (~ (IData)(vlSelfRef.FIFO_TX__DOT__full)))) {
                vlSelfRef.FIFO_TX__DOT__nwrt_ptr = 
                    (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.FIFO_TX__DOT__wrt_ptr)));
                vlSelfRef.FIFO_TX__DOT__nwr_FIFO_valid = 1U;
                VL_ASSIGNSEL_WQ(4096,64,(0xfffU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__wrt_ptr), 6U)), vlSelfRef.FIFO_TX__DOT__nTCP_tx_order, vlSelfRef.soupbin_TCP_payload);
            }
        }
        if (((((0x5cfU >= ((IData)(0x3cU) + (0x7ffU 
                                             & ((IData)(0x5dU) 
                                                * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))
                ? (((0U == (0x1fU & ((IData)(0x3cU) 
                                     + (0x7ffU & ((IData)(0x5dU) 
                                                  * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))))
                     ? 0U : (vlSelfRef.FIFO_TX__DOT__dict_tx[
                             (((IData)(0x5bU) + (0x7ffU 
                                                 & ((IData)(0x5dU) 
                                                    * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                              >> 5U)] << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x3cU) 
                                                + (0x7ffU 
                                                   & ((IData)(0x5dU) 
                                                      * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))))) 
                   | (vlSelfRef.FIFO_TX__DOT__dict_tx[
                      (((IData)(0x3cU) + (0x7ffU & 
                                          ((IData)(0x5dU) 
                                           * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                       >> 5U)] >> (0x1fU & ((IData)(0x3cU) 
                                            + (0x7ffU 
                                               & ((IData)(0x5dU) 
                                                  * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))))
                : 0U) < vlSelfRef.FIFO_TX__DOT__ACK_num_l) 
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
                 == ((0x5cfU >= (0x7ffU & ((IData)(0x5dU) 
                                           * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))
                      ? (0x3fU & (((0U == (0x1fU & 
                                           ((IData)(0x5dU) 
                                            * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))
                                    ? 0U : (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                            (((IData)(5U) 
                                              + (0x7ffU 
                                                 & ((IData)(0x5dU) 
                                                    * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x5dU) 
                                                      * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))) 
                                  | (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                     (0x3fU & (((IData)(0x5dU) 
                                                * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)) 
                                               >> 5U))] 
                                     >> (0x1fU & ((IData)(0x5dU) 
                                                  * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))))
                      : 0U))) {
                vlSelfRef.FIFO_TX__DOT__nwr_state = 0U;
            }
            VL_ASSIGNSEL_WQ(4096,64,(0xfffU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__flush_ptr), 6U)), vlSelfRef.FIFO_TX__DOT__nTCP_tx_order, 0ULL);
        } else if ((1U == (IData)(vlSelfRef.FIFO_TX__DOT__wr_state))) {
            if (vlSelfRef.axis_last) {
                vlSelfRef.FIFO_TX__DOT__nwr_state = 0U;
            }
            VL_ASSIGNSEL_WQ(4096,64,(0xfffU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__wrt_ptr), 6U)), vlSelfRef.FIFO_TX__DOT__nTCP_tx_order, vlSelfRef.soupbin_TCP_payload);
        }
    }
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x2eU)) {
        vlSelfRef.FIFO_TX__DOT__ndict_tx[__Vilp1] = 
            vlSelfRef.FIFO_TX__DOT__dict_tx[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    if ((0U != (IData)(vlSelfRef.FIFO_TX__DOT__rd_state))) {
        if ((1U == (IData)(vlSelfRef.FIFO_TX__DOT__rd_state))) {
            if ((((IData)(vlSelfRef.rd_FIFO_en) & ((IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr) 
                                                   != 
                                                   ((IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr) 
                                                    - (IData)(1U)))) 
                 & ((IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr) 
                    != ((IData)(vlSelfRef.FIFO_TX__DOT__msg_end_ptr) 
                        - (IData)(1U))))) {
                vlSelfRef.FIFO_TX__DOT__nrd_ptr = (0x3fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr)));
                vlSelfRef.FIFO_TX__DOT__nrd_FIFO_valid = 1U;
                if ((((IData)(1U) + (IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr)) 
                     == (IData)(vlSelfRef.FIFO_TX__DOT__ptr_end))) {
                    vlSelfRef.FIFO_TX__DOT__ndict_wrt_ptr 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)));
                    vlSelfRef.FIFO_TX__DOT__nrd_upd = 1U;
                    vlSelfRef.FIFO_TX__DOT__nrd_FIFO_last = 1U;
                    vlSelfRef.FIFO_TX__DOT__nbytes_abt_sent_msg_rd 
                        = vlSelfRef.bytes_abt_sent;
                    vlSelfRef.FIFO_TX__DOT____Vlvbound_haafa9b1c__0 = 1U;
                    if ((0x5cfU >= ((IData)(0x5cU) 
                                    + (0x7ffU & ((IData)(0x5dU) 
                                                 * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))))) {
                        vlSelfRef.FIFO_TX__DOT__ndict_tx[(
                                                          ((IData)(0x5cU) 
                                                           + 
                                                           (0x7ffU 
                                                            & ((IData)(0x5dU) 
                                                               * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))) 
                                                          >> 5U)] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x5cU) 
                                              + (0x7ffU 
                                                 & ((IData)(0x5dU) 
                                                    * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr))))))) 
                                & vlSelfRef.FIFO_TX__DOT__ndict_tx[
                                (((IData)(0x5cU) + 
                                  (0x7ffU & ((IData)(0x5dU) 
                                             * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))) 
                                 >> 5U)]) | ((IData)(vlSelfRef.FIFO_TX__DOT____Vlvbound_haafa9b1c__0) 
                                             << (0x1fU 
                                                 & ((IData)(0x5cU) 
                                                    + 
                                                    (0x7ffU 
                                                     & ((IData)(0x5dU) 
                                                        * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))))));
                    }
                    vlSelfRef.FIFO_TX__DOT____Vlvbound_hde36d840__0 
                        = vlSelfRef.seq_num_tx;
                    if ((0x5cfU >= ((IData)(0x3cU) 
                                    + (0x7ffU & ((IData)(0x5dU) 
                                                 * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))))) {
                        VL_ASSIGNSEL_WI(1488,32,((IData)(0x3cU) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x5dU) 
                                                     * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))), vlSelfRef.FIFO_TX__DOT__ndict_tx, vlSelfRef.FIFO_TX__DOT____Vlvbound_hde36d840__0);
                    }
                    vlSelfRef.FIFO_TX__DOT____Vlvbound_hcf6169df__0 
                        = vlSelfRef.bytes_abt_sent;
                    if ((0x5cfU >= ((IData)(0x1cU) 
                                    + (0x7ffU & ((IData)(0x5dU) 
                                                 * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))))) {
                        VL_ASSIGNSEL_WI(1488,32,((IData)(0x1cU) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x5dU) 
                                                     * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))), vlSelfRef.FIFO_TX__DOT__ndict_tx, vlSelfRef.FIFO_TX__DOT____Vlvbound_hcf6169df__0);
                    }
                    vlSelfRef.FIFO_TX__DOT____Vlvbound_h7a818793__0 
                        = vlSelfRef.FIFO_TX__DOT__ptr_str;
                    if ((0x5cfU >= ((IData)(6U) + (0x7ffU 
                                                   & ((IData)(0x5dU) 
                                                      * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))))) {
                        VL_ASSIGNSEL_WI(1488,6,((IData)(6U) 
                                                + (0x7ffU 
                                                   & ((IData)(0x5dU) 
                                                      * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))), vlSelfRef.FIFO_TX__DOT__ndict_tx, vlSelfRef.FIFO_TX__DOT____Vlvbound_h7a818793__0);
                    }
                    vlSelfRef.FIFO_TX__DOT____Vlvbound_h6aad29f5__0 
                        = vlSelfRef.FIFO_TX__DOT__rd_ptr;
                    if ((0x5cfU >= (0x7ffU & ((IData)(0x5dU) 
                                              * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr))))) {
                        VL_ASSIGNSEL_WI(1488,6,(0x7ffU 
                                                & ((IData)(0x5dU) 
                                                   * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr))), vlSelfRef.FIFO_TX__DOT__ndict_tx, vlSelfRef.FIFO_TX__DOT____Vlvbound_h6aad29f5__0);
                    }
                    vlSelfRef.FIFO_TX__DOT____Vlvbound_h60920ae5__0 
                        = vlSelfRef.FIFO_TX__DOT__checksum_l;
                    if ((0x5cfU >= ((IData)(0xcU) + 
                                    (0x7ffU & ((IData)(0x5dU) 
                                               * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))))) {
                        VL_ASSIGNSEL_WI(1488,16,((IData)(0xcU) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x5dU) 
                                                     * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))), vlSelfRef.FIFO_TX__DOT__ndict_tx, vlSelfRef.FIFO_TX__DOT____Vlvbound_h60920ae5__0);
                    }
                }
                vlSelfRef.FIFO_TX__DOT__nrd_FIFO_payload 
                    = (((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[
                                        (((IData)(0x3fU) 
                                          + (0xfffU 
                                             & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr), 6U))) 
                                         >> 5U)])) 
                        << ((0U == (0x1fU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr), 6U)))
                             ? 0x20U : ((IData)(0x40U) 
                                        - (0x1fU & 
                                           VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr), 6U))))) 
                       | (((0U == (0x1fU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr), 6U)))
                            ? 0ULL : ((QData)((IData)(
                                                      vlSelfRef.FIFO_TX__DOT__TCP_tx_order[
                                                      (((IData)(0x1fU) 
                                                        + 
                                                        (0xfffU 
                                                         & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr), 6U))) 
                                                       >> 5U)])) 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr), 6U))))) 
                          | ((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[
                                             (0x7fU 
                                              & (VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr), 6U) 
                                                 >> 5U))])) 
                             >> (0x1fU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr), 6U)))));
            }
        } else if ((2U == (IData)(vlSelfRef.FIFO_TX__DOT__rd_state))) {
            if (vlSelfRef.rd_FIFO_en) {
                vlSelfRef.FIFO_TX__DOT__nrd_FIFO_valid = 1U;
                if (((IData)(vlSelfRef.FIFO_TX__DOT__ptr_str) 
                     == ((IData)(vlSelfRef.FIFO_TX__DOT__ptr_end) 
                         - (IData)(1U)))) {
                    vlSelfRef.FIFO_TX__DOT__nrd_FIFO_last = 1U;
                }
                vlSelfRef.FIFO_TX__DOT__nrd_FIFO_payload 
                    = (((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[
                                        (((IData)(0x3fU) 
                                          + (0xfffU 
                                             & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__ptr_str), 6U))) 
                                         >> 5U)])) 
                        << ((0U == (0x1fU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__ptr_str), 6U)))
                             ? 0x20U : ((IData)(0x40U) 
                                        - (0x1fU & 
                                           VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__ptr_str), 6U))))) 
                       | (((0U == (0x1fU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__ptr_str), 6U)))
                            ? 0ULL : ((QData)((IData)(
                                                      vlSelfRef.FIFO_TX__DOT__TCP_tx_order[
                                                      (((IData)(0x1fU) 
                                                        + 
                                                        (0xfffU 
                                                         & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__ptr_str), 6U))) 
                                                       >> 5U)])) 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__ptr_str), 6U))))) 
                          | ((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[
                                             (0x7fU 
                                              & (VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__ptr_str), 6U) 
                                                 >> 5U))])) 
                             >> (0x1fU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__ptr_str), 6U)))));
            }
        }
        if ((1U != (IData)(vlSelfRef.FIFO_TX__DOT__rd_state))) {
            if ((2U == (IData)(vlSelfRef.FIFO_TX__DOT__rd_state))) {
                if (vlSelfRef.rd_FIFO_en) {
                    if (((IData)(vlSelfRef.FIFO_TX__DOT__ptr_str) 
                         == ((IData)(vlSelfRef.FIFO_TX__DOT__ptr_end) 
                             - (IData)(1U)))) {
                        vlSelfRef.FIFO_TX__DOT__nout_order_req_l = 0U;
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

extern const VlWide<128>/*4095:0*/ VFIFO_TX__ConstPool__CONST_h6e0f3f36_0;
extern const VlWide<47>/*1503:0*/ VFIFO_TX__ConstPool__CONST_h719e8777_0;

VL_INLINE_OPT void VFIFO_TX___024root___nba_sequent__TOP__0(VFIFO_TX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_TX___024root___nba_sequent__TOP__0\n"); );
    VFIFO_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.FIFO_TX__DOT__bytes_msg_trk = 0U;
    vlSelfRef.wr_FIFO_valid = ((IData)(vlSelfRef.nRST) 
                               && (IData)(vlSelfRef.FIFO_TX__DOT__nwr_FIFO_valid));
    vlSelfRef.FIFO_TX__DOT__ACK_rcv_flag_l = ((IData)(vlSelfRef.nRST) 
                                              && (IData)(vlSelfRef.FIFO_TX__DOT__nACK_rcv_flag_l));
    vlSelfRef.rd_FIFO_valid = ((IData)(vlSelfRef.nRST) 
                               && (IData)(vlSelfRef.FIFO_TX__DOT__nrd_FIFO_valid));
    if (vlSelfRef.nRST) {
        vlSelfRef.rd_FIFO_payload = vlSelfRef.FIFO_TX__DOT__nrd_FIFO_payload;
        vlSelfRef.FIFO_TX__DOT__bytes_abt_sent_msg 
            = vlSelfRef.FIFO_TX__DOT__nbytes_abt_sent_msg;
        vlSelfRef.FIFO_TX__DOT__bytes_abt_sent_msg_rd 
            = vlSelfRef.FIFO_TX__DOT__nbytes_abt_sent_msg_rd;
        VL_ASSIGN_W(4096,vlSelfRef.FIFO_TX__DOT__TCP_tx_order, vlSelfRef.FIFO_TX__DOT__nTCP_tx_order);
        vlSelfRef.FIFO_TX__DOT__checksum_l = vlSelfRef.FIFO_TX__DOT__nchecksum_l;
        vlSelfRef.FIFO_TX__DOT__flush_ptr = vlSelfRef.FIFO_TX__DOT__nflush_ptr;
        vlSelfRef.bytes_abt_sent = vlSelfRef.FIFO_TX__DOT__nbytes_abt_sent;
        vlSelfRef.FIFO_TX__DOT__ACK_num_l = vlSelfRef.FIFO_TX__DOT__nACK_num_l;
        vlSelfRef.FIFO_TX__DOT__wrt_ptr = vlSelfRef.FIFO_TX__DOT__nwrt_ptr;
        vlSelfRef.FIFO_TX__DOT__ptr_str = vlSelfRef.FIFO_TX__DOT__nptr_str;
        vlSelfRef.FIFO_TX__DOT__wr_state = vlSelfRef.FIFO_TX__DOT__nwr_state;
        vlSelfRef.FIFO_TX__DOT__ptr_end = vlSelfRef.FIFO_TX__DOT__nptr_end;
        vlSelfRef.FIFO_TX__DOT__msg_end_ptr = vlSelfRef.FIFO_TX__DOT__nmsg_end_ptr;
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x2eU)) {
            vlSelfRef.FIFO_TX__DOT__dict_tx[__Vilp1] 
                = vlSelfRef.FIFO_TX__DOT__ndict_tx[__Vilp1];
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        vlSelfRef.FIFO_TX__DOT__rd_state = vlSelfRef.FIFO_TX__DOT__nrd_state;
        vlSelfRef.FIFO_TX__DOT__rd_ptr = vlSelfRef.FIFO_TX__DOT__nrd_ptr;
        vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr = vlSelfRef.FIFO_TX__DOT__ndict_wrt_ptr;
        vlSelfRef.FIFO_TX__DOT__dict_rd_ptr = vlSelfRef.FIFO_TX__DOT__ndict_rd_ptr;
    } else {
        vlSelfRef.rd_FIFO_payload = 0ULL;
        vlSelfRef.FIFO_TX__DOT__bytes_abt_sent_msg = 0U;
        vlSelfRef.FIFO_TX__DOT__bytes_abt_sent_msg_rd = 0U;
        VL_ASSIGN_W(4096,vlSelfRef.FIFO_TX__DOT__TCP_tx_order, VFIFO_TX__ConstPool__CONST_h6e0f3f36_0);
        vlSelfRef.FIFO_TX__DOT__checksum_l = 0U;
        vlSelfRef.FIFO_TX__DOT__flush_ptr = 0U;
        vlSelfRef.bytes_abt_sent = 0U;
        vlSelfRef.FIFO_TX__DOT__ACK_num_l = 0U;
        vlSelfRef.FIFO_TX__DOT__wrt_ptr = 0U;
        vlSelfRef.FIFO_TX__DOT__ptr_str = 0U;
        vlSelfRef.FIFO_TX__DOT__wr_state = 0U;
        vlSelfRef.FIFO_TX__DOT__ptr_end = 0U;
        vlSelfRef.FIFO_TX__DOT__msg_end_ptr = 0U;
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x2eU)) {
            vlSelfRef.FIFO_TX__DOT__dict_tx[__Vilp2] 
                = VFIFO_TX__ConstPool__CONST_h719e8777_0[__Vilp2];
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        vlSelfRef.FIFO_TX__DOT__rd_state = 0U;
        vlSelfRef.FIFO_TX__DOT__rd_ptr = 0U;
        vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr = 0U;
        vlSelfRef.FIFO_TX__DOT__dict_rd_ptr = 0U;
    }
    vlSelfRef.rd_FIFO_last = ((IData)(vlSelfRef.nRST) 
                              && (IData)(vlSelfRef.FIFO_TX__DOT__nrd_FIFO_last));
    vlSelfRef.FIFO_TX__DOT__rd_upd = ((IData)(vlSelfRef.nRST) 
                                      && (IData)(vlSelfRef.FIFO_TX__DOT__nrd_upd));
    vlSelfRef.FIFO_TX__DOT__out_order_req_l = ((IData)(vlSelfRef.nRST) 
                                               && (IData)(vlSelfRef.FIFO_TX__DOT__nout_order_req_l));
    vlSelfRef.re_trans = vlSelfRef.FIFO_TX__DOT__out_order_req_l;
    vlSelfRef.FIFO_TX__DOT__nACK_num_l = vlSelfRef.FIFO_TX__DOT__ACK_num_l;
    vlSelfRef.FIFO_TX__DOT__nbytes_abt_sent_msg = vlSelfRef.FIFO_TX__DOT__bytes_abt_sent_msg;
    if (((~ (IData)(vlSelfRef.axis_last)) & (IData)(vlSelfRef.FIFO_TX__DOT__rd_upd))) {
        vlSelfRef.FIFO_TX__DOT__nbytes_abt_sent_msg 
            = (0xffffU & ((IData)(vlSelfRef.FIFO_TX__DOT__bytes_abt_sent_msg) 
                          - (IData)(vlSelfRef.FIFO_TX__DOT__bytes_abt_sent_msg_rd)));
    }
    vlSelfRef.FIFO_TX__DOT__nmsg_end_ptr = vlSelfRef.FIFO_TX__DOT__msg_end_ptr;
    vlSelfRef.FIFO_TX__DOT__nout_order_req_l = vlSelfRef.FIFO_TX__DOT__out_order_req_l;
    if (vlSelfRef.out_order_req) {
        vlSelfRef.FIFO_TX__DOT__nout_order_req_l = 1U;
    }
    vlSelfRef.FIFO_TX__DOT__full = (((IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr) 
                                     - (IData)(1U)) 
                                    == (IData)(vlSelfRef.FIFO_TX__DOT__wrt_ptr));
    vlSelfRef.FIFO_TX__DOT__ndict_rd_ptr = vlSelfRef.FIFO_TX__DOT__dict_rd_ptr;
    vlSelfRef.FIFO_TX__DOT__nrd_ptr = vlSelfRef.FIFO_TX__DOT__rd_ptr;
    vlSelfRef.FIFO_TX__DOT__nflush_ptr = vlSelfRef.FIFO_TX__DOT__flush_ptr;
    vlSelfRef.FIFO_TX__DOT__nACK_rcv_flag_l = vlSelfRef.FIFO_TX__DOT__ACK_rcv_flag_l;
    if (vlSelfRef.ACK_rcv_flag) {
        vlSelfRef.FIFO_TX__DOT__nACK_num_l = vlSelfRef.ACK_num;
        vlSelfRef.FIFO_TX__DOT__nACK_rcv_flag_l = 1U;
    }
    if ((0U != (IData)(vlSelfRef.FIFO_TX__DOT__wr_state))) {
        if ((2U != (IData)(vlSelfRef.FIFO_TX__DOT__wr_state))) {
            if ((1U == (IData)(vlSelfRef.FIFO_TX__DOT__wr_state))) {
                if (vlSelfRef.axis_last) {
                    vlSelfRef.FIFO_TX__DOT__nbytes_abt_sent_msg 
                        = (0xffffU & ((IData)(vlSelfRef.FIFO_TX__DOT__bytes_abt_sent_msg) 
                                      + vlSelfRef.len_seq));
                    vlSelfRef.FIFO_TX__DOT__nmsg_end_ptr 
                        = (0x3fU & ((IData)(1U) + ((IData)(vlSelfRef.FIFO_TX__DOT__msg_end_ptr) 
                                                   + (IData)(vlSelfRef.FIFO_TX__DOT__wrt_ptr))));
                }
            }
        }
        if ((2U == (IData)(vlSelfRef.FIFO_TX__DOT__wr_state))) {
            if (((IData)(vlSelfRef.FIFO_TX__DOT__flush_ptr) 
                 == ((0x5cfU >= (0x7ffU & ((IData)(0x5dU) 
                                           * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))
                      ? (0x3fU & (((0U == (0x1fU & 
                                           ((IData)(0x5dU) 
                                            * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))
                                    ? 0U : (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                            (((IData)(5U) 
                                              + (0x7ffU 
                                                 & ((IData)(0x5dU) 
                                                    * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x5dU) 
                                                      * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))) 
                                  | (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                     (0x3fU & (((IData)(0x5dU) 
                                                * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)) 
                                               >> 5U))] 
                                     >> (0x1fU & ((IData)(0x5dU) 
                                                  * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))))
                      : 0U))) {
                vlSelfRef.FIFO_TX__DOT__nACK_rcv_flag_l = 0U;
            }
        }
    }
    vlSelfRef.FIFO_TX__DOT__nbytes_abt_sent = vlSelfRef.bytes_abt_sent;
    vlSelfRef.FIFO_TX__DOT__nptr_end = vlSelfRef.FIFO_TX__DOT__ptr_end;
    vlSelfRef.FIFO_TX__DOT__nchecksum_l = vlSelfRef.FIFO_TX__DOT__checksum_l;
    vlSelfRef.FIFO_TX__DOT__nrd_FIFO_valid = vlSelfRef.rd_FIFO_valid;
    vlSelfRef.FIFO_TX__DOT__ndict_wrt_ptr = vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr;
    vlSelfRef.FIFO_TX__DOT__nrd_upd = vlSelfRef.FIFO_TX__DOT__rd_upd;
    vlSelfRef.FIFO_TX__DOT__nptr_str = vlSelfRef.FIFO_TX__DOT__ptr_str;
    vlSelfRef.FIFO_TX__DOT__nrd_FIFO_last = vlSelfRef.rd_FIFO_last;
    vlSelfRef.FIFO_TX__DOT__nrd_FIFO_payload = vlSelfRef.rd_FIFO_payload;
    vlSelfRef.FIFO_TX__DOT__nbytes_abt_sent_msg_rd 
        = vlSelfRef.FIFO_TX__DOT__bytes_abt_sent_msg_rd;
    vlSelfRef.FIFO_TX__DOT__nrd_state = vlSelfRef.FIFO_TX__DOT__rd_state;
    if ((0U == (IData)(vlSelfRef.FIFO_TX__DOT__rd_state))) {
        if (vlSelfRef.TX_en) {
            if (vlSelfRef.FIFO_TX__DOT__out_order_req_l) {
                vlSelfRef.FIFO_TX__DOT__nbytes_abt_sent 
                    = (0xffffU & ((0x5cfU >= ((IData)(0x1cU) 
                                              + (0x7ffU 
                                                 & ((IData)(0x5dU) 
                                                    * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))
                                   ? (((0U == (0x1fU 
                                               & ((IData)(0x1cU) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0x5dU) 
                                                      * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))))
                                        ? 0U : (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                                (((IData)(0x2bU) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0x5dU) 
                                                      * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x1cU) 
                                                     + 
                                                     (0x7ffU 
                                                      & ((IData)(0x5dU) 
                                                         * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))))) 
                                      | (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                         (((IData)(0x1cU) 
                                           + (0x7ffU 
                                              & ((IData)(0x5dU) 
                                                 * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                                          >> 5U)] >> 
                                         (0x1fU & ((IData)(0x1cU) 
                                                   + 
                                                   (0x7ffU 
                                                    & ((IData)(0x5dU) 
                                                       * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))))
                                   : 0U));
                vlSelfRef.FIFO_TX__DOT__nptr_end = 
                    (0x3fU & ((0x5cfU >= (0x7ffU & 
                                          ((IData)(0x5dU) 
                                           * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))
                               ? (((0U == (0x1fU & 
                                           ((IData)(0x5dU) 
                                            * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))
                                    ? 0U : (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                            (((IData)(5U) 
                                              + (0x7ffU 
                                                 & ((IData)(0x5dU) 
                                                    * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x5dU) 
                                                      * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))) 
                                  | (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                     (0x3fU & (((IData)(0x5dU) 
                                                * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)) 
                                               >> 5U))] 
                                     >> (0x1fU & ((IData)(0x5dU) 
                                                  * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))
                               : 0U));
                vlSelfRef.FIFO_TX__DOT__nchecksum_l 
                    = (0xffffU & ((0x5cfU >= ((IData)(0xcU) 
                                              + (0x7ffU 
                                                 & ((IData)(0x5dU) 
                                                    * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))
                                   ? (((0U == (0x1fU 
                                               & ((IData)(0xcU) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0x5dU) 
                                                      * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))))
                                        ? 0U : (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                                (((IData)(0x1bU) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0x5dU) 
                                                      * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0xcU) 
                                                     + 
                                                     (0x7ffU 
                                                      & ((IData)(0x5dU) 
                                                         * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))))) 
                                      | (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                         (((IData)(0xcU) 
                                           + (0x7ffU 
                                              & ((IData)(0x5dU) 
                                                 * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                                          >> 5U)] >> 
                                         (0x1fU & ((IData)(0xcU) 
                                                   + 
                                                   (0x7ffU 
                                                    & ((IData)(0x5dU) 
                                                       * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))))
                                   : 0U));
                vlSelfRef.FIFO_TX__DOT__nptr_str = 
                    (0x3fU & ((0x5cfU >= ((IData)(6U) 
                                          + (0x7ffU 
                                             & ((IData)(0x5dU) 
                                                * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))
                               ? (((0U == (0x1fU & 
                                           ((IData)(6U) 
                                            + (0x7ffU 
                                               & ((IData)(0x5dU) 
                                                  * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))))
                                    ? 0U : (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                            (((IData)(0xbU) 
                                              + (0x7ffU 
                                                 & ((IData)(0x5dU) 
                                                    * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(6U) 
                                                      + 
                                                      (0x7ffU 
                                                       & ((IData)(0x5dU) 
                                                          * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))))) 
                                  | (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                     (((IData)(6U) 
                                       + (0x7ffU & 
                                          ((IData)(0x5dU) 
                                           * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(6U) 
                                                     + 
                                                     (0x7ffU 
                                                      & ((IData)(0x5dU) 
                                                         * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))))
                               : 0U));
                vlSelfRef.FIFO_TX__DOT__nrd_state = 2U;
            } else {
                vlSelfRef.FIFO_TX__DOT__nbytes_abt_sent 
                    = (0xffffU & (IData)(vlSelfRef.FIFO_TX__DOT__bytes_abt_sent_msg));
                vlSelfRef.FIFO_TX__DOT__nptr_end = 
                    (0x3fU & (IData)(vlSelfRef.FIFO_TX__DOT__msg_end_ptr));
                vlSelfRef.FIFO_TX__DOT__nchecksum_l 
                    = (0xffffU & (IData)(vlSelfRef.checksum_TX));
                vlSelfRef.FIFO_TX__DOT__nptr_str = 
                    (0x3fU & (IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr));
                vlSelfRef.FIFO_TX__DOT__nrd_state = 1U;
            }
        }
    } else {
        if ((1U != (IData)(vlSelfRef.FIFO_TX__DOT__rd_state))) {
            if ((2U == (IData)(vlSelfRef.FIFO_TX__DOT__rd_state))) {
                if (vlSelfRef.rd_FIFO_en) {
                    vlSelfRef.FIFO_TX__DOT__nptr_str 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.FIFO_TX__DOT__ptr_str)));
                }
            }
        }
        if ((1U == (IData)(vlSelfRef.FIFO_TX__DOT__rd_state))) {
            if ((((IData)(vlSelfRef.rd_FIFO_en) & ((IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr) 
                                                   != 
                                                   ((IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr) 
                                                    - (IData)(1U)))) 
                 & ((IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr) 
                    != ((IData)(vlSelfRef.FIFO_TX__DOT__msg_end_ptr) 
                        - (IData)(1U))))) {
                if ((((IData)(1U) + (IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr)) 
                     == (IData)(vlSelfRef.FIFO_TX__DOT__ptr_end))) {
                    vlSelfRef.FIFO_TX__DOT__nrd_state = 0U;
                }
            }
        } else if ((2U == (IData)(vlSelfRef.FIFO_TX__DOT__rd_state))) {
            if (vlSelfRef.rd_FIFO_en) {
                if (((IData)(vlSelfRef.FIFO_TX__DOT__ptr_str) 
                     == ((IData)(vlSelfRef.FIFO_TX__DOT__ptr_end) 
                         - (IData)(1U)))) {
                    vlSelfRef.FIFO_TX__DOT__nrd_state = 0U;
                }
            }
        }
    }
    IData/*31:0*/ __Vilp3;
    __Vilp3 = 0U;
    while ((__Vilp3 <= 0x2eU)) {
        vlSelfRef.FIFO_TX__DOT__ndict_tx[__Vilp3] = 
            vlSelfRef.FIFO_TX__DOT__dict_tx[__Vilp3];
        __Vilp3 = ((IData)(1U) + __Vilp3);
    }
    if ((0U != (IData)(vlSelfRef.FIFO_TX__DOT__rd_state))) {
        if ((1U != (IData)(vlSelfRef.FIFO_TX__DOT__rd_state))) {
            if ((2U == (IData)(vlSelfRef.FIFO_TX__DOT__rd_state))) {
                if (vlSelfRef.rd_FIFO_en) {
                    if (((IData)(vlSelfRef.FIFO_TX__DOT__ptr_str) 
                         == ((IData)(vlSelfRef.FIFO_TX__DOT__ptr_end) 
                             - (IData)(1U)))) {
                        vlSelfRef.FIFO_TX__DOT__nout_order_req_l = 0U;
                    }
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
            if ((((IData)(vlSelfRef.rd_FIFO_en) & ((IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr) 
                                                   != 
                                                   ((IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr) 
                                                    - (IData)(1U)))) 
                 & ((IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr) 
                    != ((IData)(vlSelfRef.FIFO_TX__DOT__msg_end_ptr) 
                        - (IData)(1U))))) {
                vlSelfRef.FIFO_TX__DOT__nrd_ptr = (0x3fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr)));
                vlSelfRef.FIFO_TX__DOT__nrd_FIFO_valid = 1U;
                if ((((IData)(1U) + (IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr)) 
                     == (IData)(vlSelfRef.FIFO_TX__DOT__ptr_end))) {
                    vlSelfRef.FIFO_TX__DOT__ndict_wrt_ptr 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)));
                    vlSelfRef.FIFO_TX__DOT__nrd_upd = 1U;
                    vlSelfRef.FIFO_TX__DOT__nrd_FIFO_last = 1U;
                    vlSelfRef.FIFO_TX__DOT__nbytes_abt_sent_msg_rd 
                        = vlSelfRef.bytes_abt_sent;
                    vlSelfRef.FIFO_TX__DOT____Vlvbound_haafa9b1c__0 = 1U;
                    if ((0x5cfU >= ((IData)(0x5cU) 
                                    + (0x7ffU & ((IData)(0x5dU) 
                                                 * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))))) {
                        vlSelfRef.FIFO_TX__DOT__ndict_tx[(
                                                          ((IData)(0x5cU) 
                                                           + 
                                                           (0x7ffU 
                                                            & ((IData)(0x5dU) 
                                                               * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))) 
                                                          >> 5U)] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x5cU) 
                                              + (0x7ffU 
                                                 & ((IData)(0x5dU) 
                                                    * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr))))))) 
                                & vlSelfRef.FIFO_TX__DOT__ndict_tx[
                                (((IData)(0x5cU) + 
                                  (0x7ffU & ((IData)(0x5dU) 
                                             * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))) 
                                 >> 5U)]) | ((IData)(vlSelfRef.FIFO_TX__DOT____Vlvbound_haafa9b1c__0) 
                                             << (0x1fU 
                                                 & ((IData)(0x5cU) 
                                                    + 
                                                    (0x7ffU 
                                                     & ((IData)(0x5dU) 
                                                        * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))))));
                    }
                    vlSelfRef.FIFO_TX__DOT____Vlvbound_hde36d840__0 
                        = vlSelfRef.seq_num_tx;
                    if ((0x5cfU >= ((IData)(0x3cU) 
                                    + (0x7ffU & ((IData)(0x5dU) 
                                                 * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))))) {
                        VL_ASSIGNSEL_WI(1488,32,((IData)(0x3cU) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x5dU) 
                                                     * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))), vlSelfRef.FIFO_TX__DOT__ndict_tx, vlSelfRef.FIFO_TX__DOT____Vlvbound_hde36d840__0);
                    }
                    vlSelfRef.FIFO_TX__DOT____Vlvbound_hcf6169df__0 
                        = vlSelfRef.bytes_abt_sent;
                    if ((0x5cfU >= ((IData)(0x1cU) 
                                    + (0x7ffU & ((IData)(0x5dU) 
                                                 * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))))) {
                        VL_ASSIGNSEL_WI(1488,32,((IData)(0x1cU) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x5dU) 
                                                     * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))), vlSelfRef.FIFO_TX__DOT__ndict_tx, vlSelfRef.FIFO_TX__DOT____Vlvbound_hcf6169df__0);
                    }
                    vlSelfRef.FIFO_TX__DOT____Vlvbound_h7a818793__0 
                        = vlSelfRef.FIFO_TX__DOT__ptr_str;
                    if ((0x5cfU >= ((IData)(6U) + (0x7ffU 
                                                   & ((IData)(0x5dU) 
                                                      * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))))) {
                        VL_ASSIGNSEL_WI(1488,6,((IData)(6U) 
                                                + (0x7ffU 
                                                   & ((IData)(0x5dU) 
                                                      * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))), vlSelfRef.FIFO_TX__DOT__ndict_tx, vlSelfRef.FIFO_TX__DOT____Vlvbound_h7a818793__0);
                    }
                    vlSelfRef.FIFO_TX__DOT____Vlvbound_h6aad29f5__0 
                        = vlSelfRef.FIFO_TX__DOT__rd_ptr;
                    if ((0x5cfU >= (0x7ffU & ((IData)(0x5dU) 
                                              * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr))))) {
                        VL_ASSIGNSEL_WI(1488,6,(0x7ffU 
                                                & ((IData)(0x5dU) 
                                                   * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr))), vlSelfRef.FIFO_TX__DOT__ndict_tx, vlSelfRef.FIFO_TX__DOT____Vlvbound_h6aad29f5__0);
                    }
                    vlSelfRef.FIFO_TX__DOT____Vlvbound_h60920ae5__0 
                        = vlSelfRef.FIFO_TX__DOT__checksum_l;
                    if ((0x5cfU >= ((IData)(0xcU) + 
                                    (0x7ffU & ((IData)(0x5dU) 
                                               * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))))) {
                        VL_ASSIGNSEL_WI(1488,16,((IData)(0xcU) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x5dU) 
                                                     * (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))), vlSelfRef.FIFO_TX__DOT__ndict_tx, vlSelfRef.FIFO_TX__DOT____Vlvbound_h60920ae5__0);
                    }
                }
                vlSelfRef.FIFO_TX__DOT__nrd_FIFO_payload 
                    = (((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[
                                        (((IData)(0x3fU) 
                                          + (0xfffU 
                                             & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr), 6U))) 
                                         >> 5U)])) 
                        << ((0U == (0x1fU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr), 6U)))
                             ? 0x20U : ((IData)(0x40U) 
                                        - (0x1fU & 
                                           VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr), 6U))))) 
                       | (((0U == (0x1fU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr), 6U)))
                            ? 0ULL : ((QData)((IData)(
                                                      vlSelfRef.FIFO_TX__DOT__TCP_tx_order[
                                                      (((IData)(0x1fU) 
                                                        + 
                                                        (0xfffU 
                                                         & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr), 6U))) 
                                                       >> 5U)])) 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr), 6U))))) 
                          | ((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[
                                             (0x7fU 
                                              & (VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr), 6U) 
                                                 >> 5U))])) 
                             >> (0x1fU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr), 6U)))));
            }
        } else if ((2U == (IData)(vlSelfRef.FIFO_TX__DOT__rd_state))) {
            if (vlSelfRef.rd_FIFO_en) {
                vlSelfRef.FIFO_TX__DOT__nrd_FIFO_valid = 1U;
                if (((IData)(vlSelfRef.FIFO_TX__DOT__ptr_str) 
                     == ((IData)(vlSelfRef.FIFO_TX__DOT__ptr_end) 
                         - (IData)(1U)))) {
                    vlSelfRef.FIFO_TX__DOT__nrd_FIFO_last = 1U;
                }
                vlSelfRef.FIFO_TX__DOT__nrd_FIFO_payload 
                    = (((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[
                                        (((IData)(0x3fU) 
                                          + (0xfffU 
                                             & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__ptr_str), 6U))) 
                                         >> 5U)])) 
                        << ((0U == (0x1fU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__ptr_str), 6U)))
                             ? 0x20U : ((IData)(0x40U) 
                                        - (0x1fU & 
                                           VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__ptr_str), 6U))))) 
                       | (((0U == (0x1fU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__ptr_str), 6U)))
                            ? 0ULL : ((QData)((IData)(
                                                      vlSelfRef.FIFO_TX__DOT__TCP_tx_order[
                                                      (((IData)(0x1fU) 
                                                        + 
                                                        (0xfffU 
                                                         & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__ptr_str), 6U))) 
                                                       >> 5U)])) 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__ptr_str), 6U))))) 
                          | ((QData)((IData)(vlSelfRef.FIFO_TX__DOT__TCP_tx_order[
                                             (0x7fU 
                                              & (VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__ptr_str), 6U) 
                                                 >> 5U))])) 
                             >> (0x1fU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__ptr_str), 6U)))));
            }
        }
    }
    vlSelfRef.FIFO_TX__DOT__nwrt_ptr = vlSelfRef.FIFO_TX__DOT__wrt_ptr;
    vlSelfRef.FIFO_TX__DOT__nwr_FIFO_valid = 0U;
    vlSelfRef.FIFO_TX__DOT__nwr_state = vlSelfRef.FIFO_TX__DOT__wr_state;
    VL_ASSIGN_W(4096,vlSelfRef.FIFO_TX__DOT__nTCP_tx_order, vlSelfRef.FIFO_TX__DOT__TCP_tx_order);
    if ((0U == (IData)(vlSelfRef.FIFO_TX__DOT__wr_state))) {
        if (((((0x5cfU >= ((IData)(0x3cU) + (0x7ffU 
                                             & ((IData)(0x5dU) 
                                                * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))
                ? (((0U == (0x1fU & ((IData)(0x3cU) 
                                     + (0x7ffU & ((IData)(0x5dU) 
                                                  * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))))
                     ? 0U : (vlSelfRef.FIFO_TX__DOT__dict_tx[
                             (((IData)(0x5bU) + (0x7ffU 
                                                 & ((IData)(0x5dU) 
                                                    * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                              >> 5U)] << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x3cU) 
                                                + (0x7ffU 
                                                   & ((IData)(0x5dU) 
                                                      * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))))) 
                   | (vlSelfRef.FIFO_TX__DOT__dict_tx[
                      (((IData)(0x3cU) + (0x7ffU & 
                                          ((IData)(0x5dU) 
                                           * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                       >> 5U)] >> (0x1fU & ((IData)(0x3cU) 
                                            + (0x7ffU 
                                               & ((IData)(0x5dU) 
                                                  * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))))
                : 0U) < vlSelfRef.FIFO_TX__DOT__ACK_num_l) 
             & ((IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr) 
                != (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))) {
            vlSelfRef.FIFO_TX__DOT__ndict_rd_ptr = 
                (0xfU & ((IData)(1U) + (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)));
            vlSelfRef.FIFO_TX__DOT__nflush_ptr = ((0x5cfU 
                                                   >= 
                                                   ((IData)(6U) 
                                                    + 
                                                    (0x7ffU 
                                                     & ((IData)(0x5dU) 
                                                        * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))
                                                   ? 
                                                  (0x3fU 
                                                   & (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(6U) 
                                                            + 
                                                            (0x7ffU 
                                                             & ((IData)(0x5dU) 
                                                                * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                                        (((IData)(0xbU) 
                                                          + 
                                                          (0x7ffU 
                                                           & ((IData)(0x5dU) 
                                                              * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(6U) 
                                                             + 
                                                             (0x7ffU 
                                                              & ((IData)(0x5dU) 
                                                                 * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))))) 
                                                      | (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                                         (((IData)(6U) 
                                                           + 
                                                           (0x7ffU 
                                                            & ((IData)(0x5dU) 
                                                               * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                                                          >> 5U)] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(6U) 
                                                             + 
                                                             (0x7ffU 
                                                              & ((IData)(0x5dU) 
                                                                 * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))))))
                                                   : 0U);
            vlSelfRef.FIFO_TX__DOT__nwr_state = 2U;
        } else if (((IData)(vlSelfRef.wr_FIFO_en) & 
                    (~ (IData)(vlSelfRef.FIFO_TX__DOT__full)))) {
            vlSelfRef.FIFO_TX__DOT__nwr_state = 1U;
        }
        if ((1U & (~ ((((0x5cfU >= ((IData)(0x3cU) 
                                    + (0x7ffU & ((IData)(0x5dU) 
                                                 * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))
                         ? (((0U == (0x1fU & ((IData)(0x3cU) 
                                              + (0x7ffU 
                                                 & ((IData)(0x5dU) 
                                                    * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))))
                              ? 0U : (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                      (((IData)(0x5bU) 
                                        + (0x7ffU & 
                                           ((IData)(0x5dU) 
                                            * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x3cU) 
                                                       + 
                                                       (0x7ffU 
                                                        & ((IData)(0x5dU) 
                                                           * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))))) 
                            | (vlSelfRef.FIFO_TX__DOT__dict_tx[
                               (((IData)(0x3cU) + (0x7ffU 
                                                   & ((IData)(0x5dU) 
                                                      * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                                >> 5U)] >> (0x1fU & 
                                            ((IData)(0x3cU) 
                                             + (0x7ffU 
                                                & ((IData)(0x5dU) 
                                                   * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))))
                         : 0U) < vlSelfRef.FIFO_TX__DOT__ACK_num_l) 
                      & ((IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr) 
                         != (IData)(vlSelfRef.FIFO_TX__DOT__dict_wrt_ptr)))))) {
            if (((IData)(vlSelfRef.wr_FIFO_en) & (~ (IData)(vlSelfRef.FIFO_TX__DOT__full)))) {
                vlSelfRef.FIFO_TX__DOT__nwrt_ptr = 
                    (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.FIFO_TX__DOT__wrt_ptr)));
                vlSelfRef.FIFO_TX__DOT__nwr_FIFO_valid = 1U;
                VL_ASSIGNSEL_WQ(4096,64,(0xfffU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__wrt_ptr), 6U)), vlSelfRef.FIFO_TX__DOT__nTCP_tx_order, vlSelfRef.soupbin_TCP_payload);
            }
        }
    } else {
        if ((2U == (IData)(vlSelfRef.FIFO_TX__DOT__wr_state))) {
            vlSelfRef.FIFO_TX__DOT__nflush_ptr = (0x3fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.FIFO_TX__DOT__flush_ptr)));
            if (((IData)(vlSelfRef.FIFO_TX__DOT__flush_ptr) 
                 == ((0x5cfU >= (0x7ffU & ((IData)(0x5dU) 
                                           * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))
                      ? (0x3fU & (((0U == (0x1fU & 
                                           ((IData)(0x5dU) 
                                            * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))
                                    ? 0U : (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                            (((IData)(5U) 
                                              + (0x7ffU 
                                                 & ((IData)(0x5dU) 
                                                    * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x5dU) 
                                                      * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)))))) 
                                  | (vlSelfRef.FIFO_TX__DOT__dict_tx[
                                     (0x3fU & (((IData)(0x5dU) 
                                                * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr)) 
                                               >> 5U))] 
                                     >> (0x1fU & ((IData)(0x5dU) 
                                                  * (IData)(vlSelfRef.FIFO_TX__DOT__dict_rd_ptr))))))
                      : 0U))) {
                vlSelfRef.FIFO_TX__DOT__nwr_state = 0U;
            }
            VL_ASSIGNSEL_WQ(4096,64,(0xfffU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__flush_ptr), 6U)), vlSelfRef.FIFO_TX__DOT__nTCP_tx_order, 0ULL);
        } else if ((1U == (IData)(vlSelfRef.FIFO_TX__DOT__wr_state))) {
            if (vlSelfRef.axis_last) {
                vlSelfRef.FIFO_TX__DOT__nwr_state = 0U;
            }
            VL_ASSIGNSEL_WQ(4096,64,(0xfffU & VL_SHIFTL_III(12,32,32, (IData)(vlSelfRef.FIFO_TX__DOT__wrt_ptr), 6U)), vlSelfRef.FIFO_TX__DOT__nTCP_tx_order, vlSelfRef.soupbin_TCP_payload);
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
    if (VL_UNLIKELY(((vlSelfRef.TX_en & 0xfeU)))) {
        Verilated::overWidthError("TX_en");}
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
