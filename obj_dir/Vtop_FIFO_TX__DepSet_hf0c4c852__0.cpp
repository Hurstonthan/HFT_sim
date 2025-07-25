// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_FIFO_TX.h"

VL_INLINE_OPT void Vtop_FIFO_TX___ico_sequent__TOP__top__u_fifo_tx__0(Vtop_FIFO_TX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_FIFO_TX___ico_sequent__TOP__top__u_fifo_tx__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nwrt_ptr = vlSelfRef.__PVT__wrt_ptr;
    VL_ASSIGN_W(640,vlSelfRef.__PVT__nTCP_tx_order, vlSelfRef.__PVT__TCP_tx_order);
    VL_ASSIGN_W(1424,vlSelfRef.__PVT__ndict_tx, vlSelfRef.__PVT__dict_tx);
    vlSelfRef.__PVT__ndict_rd_ptr = vlSelfRef.__PVT__dict_rd_ptr;
    vlSelfRef.__PVT__ndict_wrt_ptr = vlSelfRef.__PVT__dict_wrt_ptr;
    vlSelfRef.__PVT__nwr_FIFO_valid = 0U;
    vlSelfRef.__PVT__nbytes_msg_trk = 0U;
    vlSelfRef.__PVT__nmsg_end_ptr = vlSelfRef.__PVT__msg_end_ptr;
    vlSelfRef.__PVT__nbytes_abt_sent_msg = vlSelfRef.__PVT__bytes_abt_sent_msg;
    vlSelfRef.__PVT__nbytes_abt_sent = vlSelfRef.__PVT__bytes_abt_sent;
    vlSelfRef.__PVT__nwr_state = vlSelfRef.__PVT__wr_state;
    vlSelfRef.__PVT__nflush_ptr = vlSelfRef.__PVT__flush_ptr;
    vlSelfRef.__PVT__nACK_rcv_flag_l = vlSelfRef.__PVT__ACK_rcv_flag_l;
    vlSelfRef.__PVT__nACK_num_l = vlSelfRef.__PVT__ACK_num_l;
    vlSelfRef.__PVT__nchecksum_l = vlSelfRef.__PVT__checksum_l;
    vlSelfRef.__PVT__nrd_state = vlSelfRef.__PVT__rd_state;
    vlSelfRef.__PVT__nptr_str = vlSelfRef.__PVT__ptr_str;
    vlSelfRef.__PVT__nptr_end = vlSelfRef.__PVT__ptr_end;
    vlSelfRef.__PVT__nrd_ptr = vlSelfRef.__PVT__rd_ptr;
    vlSelfRef.__PVT__nrd_FIFO_last = vlSelfRef.__PVT__rd_FIFO_last;
    vlSelfRef.__PVT__nrd_FIFO_payload = vlSelfRef.__PVT__rd_FIFO_payload;
    vlSelfRef.__PVT__nrd_FIFO_valid = vlSelfRef.__PVT__rd_FIFO_valid;
    vlSelfRef.__PVT__nout_order_req_l = vlSelfRef.__PVT__out_order_req_l;
    vlSelfRef.__PVT__nrd_upd = vlSelfRef.__PVT__rd_upd;
    vlSelfRef.__PVT__nbytes_abt_sent_msg_rd = vlSelfRef.__PVT__bytes_abt_sent_msg_rd;
    if (vlSelfRef.__PVT__out_order_req) {
        vlSelfRef.__PVT__nout_order_req_l = 1U;
    }
    if (vlSelfRef.__PVT__ACK_rcv_flag) {
        vlSelfRef.__PVT__nACK_rcv_flag_l = 1U;
        vlSelfRef.__PVT__nACK_num_l = vlSelfRef.__PVT__ACK_num;
    }
    if (((~ (IData)(vlSelfRef.__PVT__axis_last)) & (IData)(vlSelfRef.__PVT__rd_upd))) {
        vlSelfRef.__PVT__nbytes_abt_sent_msg = (0xffffU 
                                                & ((IData)(vlSelfRef.__PVT__bytes_abt_sent_msg) 
                                                   - (IData)(vlSelfRef.__PVT__bytes_abt_sent_msg_rd)));
    }
    if ((0U == (IData)(vlSelfRef.__PVT__rd_state))) {
        vlSelfRef.__PVT__nbytes_abt_sent = 0U;
        vlSelfRef.__PVT__nchecksum_l = 0U;
        vlSelfRef.__PVT__nrd_FIFO_last = 1U;
        if (vlSelfRef.__PVT__hand_shake_done) {
            vlSelfRef.__PVT__nrd_state = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__rd_state))) {
        vlSelfRef.__PVT__nbytes_abt_sent = 0U;
        vlSelfRef.__PVT__nchecksum_l = 0U;
        if (vlSelfRef.__PVT__TX_en) {
            if (vlSelfRef.__PVT__out_order_req_l) {
                vlSelfRef.__PVT__nrd_state = 3U;
                vlSelfRef.__PVT__nptr_str = (0xfU & 
                                             ((0x58fU 
                                               >= ((IData)(4U) 
                                                   + 
                                                   VL_EXTEND_II(32,11, 
                                                                (0x7ffU 
                                                                 & VL_SEL_IIII(32, 
                                                                               ((IData)(0x59U) 
                                                                                * 
                                                                                VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_rd_ptr))), 0U, 0xbU)))))
                                               ? VL_SEL_IWII(1424, vlSelfRef.__PVT__dict_tx, 
                                                             ((IData)(4U) 
                                                              + 
                                                              VL_EXTEND_II(32,11, 
                                                                           (0x7ffU 
                                                                            & VL_SEL_IIII(32, 
                                                                                ((IData)(0x59U) 
                                                                                * 
                                                                                VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_rd_ptr))), 0U, 0xbU)))), 4U)
                                               : 0U));
                vlSelfRef.__PVT__nptr_end = (0xfU & 
                                             ((0x58fU 
                                               >= (0x7ffU 
                                                   & VL_SEL_IIII(32, 
                                                                 ((IData)(0x59U) 
                                                                  * 
                                                                  VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_rd_ptr))), 0U, 0xbU)))
                                               ? VL_SEL_IWII(1424, vlSelfRef.__PVT__dict_tx, 
                                                             VL_EXTEND_II(32,11, 
                                                                          (0x7ffU 
                                                                           & VL_SEL_IIII(32, 
                                                                                ((IData)(0x59U) 
                                                                                * 
                                                                                VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_rd_ptr))), 0U, 0xbU))), 4U)
                                               : 0U));
                vlSelfRef.__PVT__nbytes_abt_sent = 
                    (0xffffU & ((0x58fU >= ((IData)(0x18U) 
                                            + VL_EXTEND_II(32,11, 
                                                           (0x7ffU 
                                                            & VL_SEL_IIII(32, 
                                                                          ((IData)(0x59U) 
                                                                           * 
                                                                           VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_rd_ptr))), 0U, 0xbU)))))
                                 ? VL_SEL_IWII(1424, vlSelfRef.__PVT__dict_tx, 
                                               ((IData)(0x18U) 
                                                + VL_EXTEND_II(32,11, 
                                                               (0x7ffU 
                                                                & VL_SEL_IIII(32, 
                                                                              ((IData)(0x59U) 
                                                                               * 
                                                                               VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_rd_ptr))), 0U, 0xbU)))), 0x10U)
                                 : 0U));
                vlSelfRef.__PVT__nchecksum_l = (0xffffU 
                                                & ((0x58fU 
                                                    >= 
                                                    ((IData)(8U) 
                                                     + 
                                                     VL_EXTEND_II(32,11, 
                                                                  (0x7ffU 
                                                                   & VL_SEL_IIII(32, 
                                                                                ((IData)(0x59U) 
                                                                                * 
                                                                                VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_rd_ptr))), 0U, 0xbU)))))
                                                    ? 
                                                   VL_SEL_IWII(1424, vlSelfRef.__PVT__dict_tx, 
                                                               ((IData)(8U) 
                                                                + 
                                                                VL_EXTEND_II(32,11, 
                                                                             (0x7ffU 
                                                                              & VL_SEL_IIII(32, 
                                                                                ((IData)(0x59U) 
                                                                                * 
                                                                                VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_rd_ptr))), 0U, 0xbU)))), 0x10U)
                                                    : 0U));
            } else {
                vlSelfRef.__PVT__nrd_state = 2U;
                vlSelfRef.__PVT__nptr_str = vlSelfRef.__PVT__rd_ptr;
                vlSelfRef.__PVT__nptr_end = vlSelfRef.__PVT__msg_end_ptr;
                vlSelfRef.__PVT__nbytes_abt_sent = vlSelfRef.__PVT__bytes_abt_sent_msg;
                vlSelfRef.__PVT__nchecksum_l = vlSelfRef.__PVT__checksum_TX;
            }
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__rd_state))) {
        vlSelfRef.__PVT__rd_debug_1 = (VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_wrt_ptr)) 
                                       != (VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_rd_ptr)) 
                                           - (IData)(1U)));
        vlSelfRef.__PVT__rd_debug_2 = ((VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__rd_ptr)) 
                                        - (IData)(1U)) 
                                       != VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__msg_end_ptr)));
        if ((((IData)(vlSelfRef.__PVT__rd_FIFO_en) 
              & (VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_wrt_ptr)) 
                 != (VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_rd_ptr)) 
                     - (IData)(1U)))) & (VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__rd_ptr)) 
                                         != (VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__msg_end_ptr)) 
                                             - (IData)(1U))))) {
            vlSelfRef.__PVT__nrd_FIFO_valid = 1U;
            vlSelfRef.__PVT__nrd_ptr = (0xfU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__rd_ptr)));
            vlSelfRef.__PVT__nrd_FIFO_payload = ((0x27fU 
                                                  >= 
                                                  (0x3ffU 
                                                   & VL_SEL_IIII(32, 
                                                                 VL_SHIFTL_III(32,32,32, 
                                                                               VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__rd_ptr)), 6U), 0U, 0xaU)))
                                                  ? 
                                                 VL_SEL_QWII(640, vlSelfRef.__PVT__TCP_tx_order, 
                                                             (0x3ffU 
                                                              & VL_SEL_IIII(32, 
                                                                            VL_SHIFTL_III(32,32,32, 
                                                                                VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__rd_ptr)), 6U), 0U, 0xaU)), 0x40U)
                                                  : 0ULL);
            if (((IData)(vlSelfRef.__PVT__rd_ptr) == (IData)(vlSelfRef.__PVT__ptr_end))) {
                vlSelfRef.__Vlvbound_hb8fa291e__0 = 1U;
                if (VL_LIKELY(((0x58fU >= ((IData)(0x58U) 
                                           + VL_EXTEND_II(32,11, 
                                                          (0x7ffU 
                                                           & VL_SEL_IIII(32, 
                                                                         ((IData)(0x59U) 
                                                                          * 
                                                                          VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_wrt_ptr))), 0U, 0xbU)))))))) {
                    VL_ASSIGNBIT_WI(((IData)(0x58U) 
                                     + VL_EXTEND_II(32,11, 
                                                    (0x7ffU 
                                                     & VL_SEL_IIII(32, 
                                                                   ((IData)(0x59U) 
                                                                    * 
                                                                    VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_wrt_ptr))), 0U, 0xbU)))), vlSelfRef.__PVT__ndict_tx, vlSelfRef.__Vlvbound_hb8fa291e__0);
                }
                vlSelfRef.__Vlvbound_hb3ecea42__0 = vlSelfRef.__PVT__seq_num_tx;
                if (VL_LIKELY(((0x58fU >= ((IData)(0x38U) 
                                           + VL_EXTEND_II(32,11, 
                                                          (0x7ffU 
                                                           & VL_SEL_IIII(32, 
                                                                         ((IData)(0x59U) 
                                                                          * 
                                                                          VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_wrt_ptr))), 0U, 0xbU)))))))) {
                    VL_ASSIGNSEL_WI(1424,32,((IData)(0x38U) 
                                             + VL_EXTEND_II(32,11, 
                                                            (0x7ffU 
                                                             & VL_SEL_IIII(32, 
                                                                           ((IData)(0x59U) 
                                                                            * 
                                                                            VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_wrt_ptr))), 0U, 0xbU)))), vlSelfRef.__PVT__ndict_tx, vlSelfRef.__Vlvbound_hb3ecea42__0);
                }
                vlSelfRef.__Vlvbound_hb5681c9b__0 = 
                    VL_EXTEND_II(32,16, (IData)(vlSelfRef.__PVT__bytes_abt_sent));
                if (VL_LIKELY(((0x58fU >= ((IData)(0x18U) 
                                           + VL_EXTEND_II(32,11, 
                                                          (0x7ffU 
                                                           & VL_SEL_IIII(32, 
                                                                         ((IData)(0x59U) 
                                                                          * 
                                                                          VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_wrt_ptr))), 0U, 0xbU)))))))) {
                    VL_ASSIGNSEL_WI(1424,32,((IData)(0x18U) 
                                             + VL_EXTEND_II(32,11, 
                                                            (0x7ffU 
                                                             & VL_SEL_IIII(32, 
                                                                           ((IData)(0x59U) 
                                                                            * 
                                                                            VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_wrt_ptr))), 0U, 0xbU)))), vlSelfRef.__PVT__ndict_tx, vlSelfRef.__Vlvbound_hb5681c9b__0);
                }
                vlSelfRef.__Vlvbound_h6259565b__0 = vlSelfRef.__PVT__ptr_str;
                if (VL_LIKELY(((0x58fU >= ((IData)(4U) 
                                           + VL_EXTEND_II(32,11, 
                                                          (0x7ffU 
                                                           & VL_SEL_IIII(32, 
                                                                         ((IData)(0x59U) 
                                                                          * 
                                                                          VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_wrt_ptr))), 0U, 0xbU)))))))) {
                    VL_ASSIGNSEL_WI(1424,4,((IData)(4U) 
                                            + VL_EXTEND_II(32,11, 
                                                           (0x7ffU 
                                                            & VL_SEL_IIII(32, 
                                                                          ((IData)(0x59U) 
                                                                           * 
                                                                           VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_wrt_ptr))), 0U, 0xbU)))), vlSelfRef.__PVT__ndict_tx, vlSelfRef.__Vlvbound_h6259565b__0);
                }
                vlSelfRef.__Vlvbound_h45274be6__0 = vlSelfRef.__PVT__rd_ptr;
                if (VL_LIKELY(((0x58fU >= (0x7ffU & 
                                           VL_SEL_IIII(32, 
                                                       ((IData)(0x59U) 
                                                        * 
                                                        VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_wrt_ptr))), 0U, 0xbU)))))) {
                    VL_ASSIGNSEL_WI(1424,4,VL_EXTEND_II(32,11, 
                                                        (0x7ffU 
                                                         & VL_SEL_IIII(32, 
                                                                       ((IData)(0x59U) 
                                                                        * 
                                                                        VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_wrt_ptr))), 0U, 0xbU))), vlSelfRef.__PVT__ndict_tx, vlSelfRef.__Vlvbound_h45274be6__0);
                }
                vlSelfRef.__Vlvbound_h5e8c2d41__0 = vlSelfRef.__PVT__checksum_l;
                if (VL_LIKELY(((0x58fU >= ((IData)(8U) 
                                           + VL_EXTEND_II(32,11, 
                                                          (0x7ffU 
                                                           & VL_SEL_IIII(32, 
                                                                         ((IData)(0x59U) 
                                                                          * 
                                                                          VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_wrt_ptr))), 0U, 0xbU)))))))) {
                    VL_ASSIGNSEL_WI(1424,16,((IData)(8U) 
                                             + VL_EXTEND_II(32,11, 
                                                            (0x7ffU 
                                                             & VL_SEL_IIII(32, 
                                                                           ((IData)(0x59U) 
                                                                            * 
                                                                            VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_wrt_ptr))), 0U, 0xbU)))), vlSelfRef.__PVT__ndict_tx, vlSelfRef.__Vlvbound_h5e8c2d41__0);
                }
                vlSelfRef.__PVT__nrd_FIFO_last = 1U;
                vlSelfRef.__PVT__nrd_state = 1U;
                vlSelfRef.__PVT__nrd_upd = 1U;
                vlSelfRef.__PVT__nbytes_abt_sent_msg_rd 
                    = vlSelfRef.__PVT__bytes_abt_sent;
                vlSelfRef.__PVT__ndict_wrt_ptr = (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__dict_wrt_ptr)));
            }
        }
    } else if ((3U == (IData)(vlSelfRef.__PVT__rd_state))) {
        if (vlSelfRef.__PVT__rd_FIFO_en) {
            vlSelfRef.__PVT__nrd_FIFO_valid = 1U;
            vlSelfRef.__PVT__nrd_FIFO_payload = ((0x27fU 
                                                  >= 
                                                  (0x3ffU 
                                                   & VL_SEL_IIII(32, 
                                                                 VL_SHIFTL_III(32,32,32, 
                                                                               VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__ptr_str)), 6U), 0U, 0xaU)))
                                                  ? 
                                                 VL_SEL_QWII(640, vlSelfRef.__PVT__TCP_tx_order, 
                                                             (0x3ffU 
                                                              & VL_SEL_IIII(32, 
                                                                            VL_SHIFTL_III(32,32,32, 
                                                                                VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__ptr_str)), 6U), 0U, 0xaU)), 0x40U)
                                                  : 0ULL);
            vlSelfRef.__PVT__nptr_str = (0xfU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__ptr_str)));
            if ((VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__ptr_str)) 
                 == (VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__ptr_end)) 
                     - (IData)(1U)))) {
                vlSelfRef.__PVT__nrd_FIFO_last = 1U;
                vlSelfRef.__PVT__nrd_state = 1U;
                vlSelfRef.__PVT__nout_order_req_l = 0U;
            }
        }
    }
    if ((0U == (IData)(vlSelfRef.__PVT__wr_state))) {
        if (((((0x58fU >= ((IData)(0x38U) + VL_EXTEND_II(32,11, 
                                                         (0x7ffU 
                                                          & VL_SEL_IIII(32, 
                                                                        ((IData)(0x59U) 
                                                                         * 
                                                                         VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_rd_ptr))), 0U, 0xbU)))))
                ? VL_SEL_IWII(1424, vlSelfRef.__PVT__dict_tx, 
                              ((IData)(0x38U) + VL_EXTEND_II(32,11, 
                                                             (0x7ffU 
                                                              & VL_SEL_IIII(32, 
                                                                            ((IData)(0x59U) 
                                                                             * 
                                                                             VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_rd_ptr))), 0U, 0xbU)))), 0x20U)
                : 0U) < vlSelfRef.__PVT__ACK_num_l) 
             & ((IData)(vlSelfRef.__PVT__dict_rd_ptr) 
                != (IData)(vlSelfRef.__PVT__dict_wrt_ptr)))) {
            vlSelfRef.__PVT__nwr_state = 2U;
            vlSelfRef.__PVT__nflush_ptr = (0xfU & (
                                                   (0x58fU 
                                                    >= 
                                                    ((IData)(4U) 
                                                     + 
                                                     VL_EXTEND_II(32,11, 
                                                                  (0x7ffU 
                                                                   & VL_SEL_IIII(32, 
                                                                                ((IData)(0x59U) 
                                                                                * 
                                                                                VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_rd_ptr))), 0U, 0xbU)))))
                                                    ? 
                                                   VL_SEL_IWII(1424, vlSelfRef.__PVT__dict_tx, 
                                                               ((IData)(4U) 
                                                                + 
                                                                VL_EXTEND_II(32,11, 
                                                                             (0x7ffU 
                                                                              & VL_SEL_IIII(32, 
                                                                                ((IData)(0x59U) 
                                                                                * 
                                                                                VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_rd_ptr))), 0U, 0xbU)))), 4U)
                                                    : 0U));
            vlSelfRef.__PVT__ndict_rd_ptr = (0xfU & 
                                             ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__dict_rd_ptr)));
        } else if (((IData)(vlSelfRef.__PVT__wr_FIFO_en) 
                    & (~ (IData)(vlSelfRef.__PVT__full)))) {
            vlSelfRef.__PVT__nwr_FIFO_valid = 1U;
            vlSelfRef.__PVT__nwrt_ptr = (0xfU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__wrt_ptr)));
            vlSelfRef.__Vlvbound_ha6c1b2f1__0 = vlSelfRef.__PVT__soupbin_TCP_payload;
            if (VL_LIKELY(((0x27fU >= (0x3ffU & VL_SEL_IIII(32, 
                                                            VL_SHIFTL_III(32,32,32, 
                                                                          VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__wrt_ptr)), 6U), 0U, 0xaU)))))) {
                VL_ASSIGNSEL_WQ(640,64,(0x3ffU & VL_SEL_IIII(32, 
                                                             VL_SHIFTL_III(32,32,32, 
                                                                           VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__wrt_ptr)), 6U), 0U, 0xaU)), vlSelfRef.__PVT__nTCP_tx_order, vlSelfRef.__Vlvbound_ha6c1b2f1__0);
            }
            vlSelfRef.__PVT__nwr_state = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__wr_state))) {
        vlSelfRef.__PVT__nflush_ptr = (0xfU & ((IData)(1U) 
                                               + (IData)(vlSelfRef.__PVT__flush_ptr)));
        vlSelfRef.__Vlvbound_hd8945327__0 = 0ULL;
        if (VL_LIKELY(((0x27fU >= (0x3ffU & VL_SEL_IIII(32, 
                                                        VL_SHIFTL_III(32,32,32, 
                                                                      VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__flush_ptr)), 6U), 0U, 0xaU)))))) {
            VL_ASSIGNSEL_WQ(640,64,(0x3ffU & VL_SEL_IIII(32, 
                                                         VL_SHIFTL_III(32,32,32, 
                                                                       VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__flush_ptr)), 6U), 0U, 0xaU)), vlSelfRef.__PVT__nTCP_tx_order, vlSelfRef.__Vlvbound_hd8945327__0);
        }
        if (((IData)(vlSelfRef.__PVT__flush_ptr) == 
             (0xfU & ((0x58fU >= (0x7ffU & VL_SEL_IIII(32, 
                                                       ((IData)(0x59U) 
                                                        * 
                                                        VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_rd_ptr))), 0U, 0xbU)))
                       ? VL_SEL_IWII(1424, vlSelfRef.__PVT__dict_tx, 
                                     VL_EXTEND_II(32,11, 
                                                  (0x7ffU 
                                                   & VL_SEL_IIII(32, 
                                                                 ((IData)(0x59U) 
                                                                  * 
                                                                  VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_rd_ptr))), 0U, 0xbU))), 4U)
                       : 0U)))) {
            vlSelfRef.__PVT__nACK_rcv_flag_l = 0U;
            vlSelfRef.__PVT__nwr_state = 0U;
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__wr_state))) {
        vlSelfRef.__PVT__nwr_FIFO_valid = 1U;
        vlSelfRef.__PVT__nwrt_ptr = (0xfU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__wrt_ptr)));
        vlSelfRef.__Vlvbound_ha6c1b2f1__1 = vlSelfRef.__PVT__soupbin_TCP_payload;
        if (VL_LIKELY(((0x27fU >= (0x3ffU & VL_SEL_IIII(32, 
                                                        VL_SHIFTL_III(32,32,32, 
                                                                      VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__wrt_ptr)), 6U), 0U, 0xaU)))))) {
            VL_ASSIGNSEL_WQ(640,64,(0x3ffU & VL_SEL_IIII(32, 
                                                         VL_SHIFTL_III(32,32,32, 
                                                                       VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__wrt_ptr)), 6U), 0U, 0xaU)), vlSelfRef.__PVT__nTCP_tx_order, vlSelfRef.__Vlvbound_ha6c1b2f1__1);
        }
        if (vlSelfRef.__PVT__axis_last) {
            vlSelfRef.__PVT__nwr_FIFO_valid = 0U;
            vlSelfRef.__PVT__nmsg_end_ptr = (0xfU & 
                                             ((IData)(1U) 
                                              + ((IData)(vlSelfRef.__PVT__msg_end_ptr) 
                                                 + (IData)(vlSelfRef.__PVT__wrt_ptr))));
            vlSelfRef.__PVT__nbytes_abt_sent_msg = 
                (0xffffU & ((IData)(vlSelfRef.__PVT__bytes_abt_sent_msg) 
                            + VL_SEL_IIII(32, vlSelfRef.__PVT__len_seq, 0U, 0x10U)));
            vlSelfRef.__PVT__nwr_state = 0U;
        }
    }
}

extern const VlWide<20>/*639:0*/ Vtop__ConstPool__CONST_h7ca4bd95_0;
extern const VlWide<45>/*1439:0*/ Vtop__ConstPool__CONST_hc6030581_0;

VL_INLINE_OPT void Vtop_FIFO_TX___nba_sequent__TOP__top__u_fifo_tx__0(Vtop_FIFO_TX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_FIFO_TX___nba_sequent__TOP__top__u_fifo_tx__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__bytes_msg_trk = vlSelfRef.__PVT__bytes_msg_trk;
    vlSelfRef.__Vdly__wr_FIFO_valid = vlSelfRef.__PVT__wr_FIFO_valid;
    vlSelfRef.__Vdly__wr_state = vlSelfRef.__PVT__wr_state;
    VL_ASSIGN_W(640,vlSelfRef.__Vdly__TCP_tx_order, vlSelfRef.__PVT__TCP_tx_order);
    vlSelfRef.__Vdly__dict_wrt_ptr = vlSelfRef.__PVT__dict_wrt_ptr;
    vlSelfRef.__Vdly__dict_rd_ptr = vlSelfRef.__PVT__dict_rd_ptr;
    vlSelfRef.__Vdly__flush_ptr = vlSelfRef.__PVT__flush_ptr;
    vlSelfRef.__Vdly__bytes_abt_sent_msg = vlSelfRef.__PVT__bytes_abt_sent_msg;
    vlSelfRef.__Vdly__bytes_abt_sent_msg_rd = vlSelfRef.__PVT__bytes_abt_sent_msg_rd;
    vlSelfRef.__Vdly__rd_upd = vlSelfRef.__PVT__rd_upd;
    vlSelfRef.__Vdly__checksum_l = vlSelfRef.__PVT__checksum_l;
    vlSelfRef.__Vdly__wrt_ptr = vlSelfRef.__PVT__wrt_ptr;
    vlSelfRef.__Vdly__ptr_str = vlSelfRef.__PVT__ptr_str;
    vlSelfRef.__Vdly__ptr_end = vlSelfRef.__PVT__ptr_end;
    VL_ASSIGN_W(1424,vlSelfRef.__Vdly__dict_tx, vlSelfRef.__PVT__dict_tx);
    vlSelfRef.__Vdly__ACK_rcv_flag_l = vlSelfRef.__PVT__ACK_rcv_flag_l;
    vlSelfRef.__Vdly__rd_state = vlSelfRef.__PVT__rd_state;
    vlSelfRef.__Vdly__ACK_num_l = vlSelfRef.__PVT__ACK_num_l;
    vlSelfRef.__Vdly__msg_end_ptr = vlSelfRef.__PVT__msg_end_ptr;
    vlSelfRef.__Vdly__rd_FIFO_valid = vlSelfRef.__PVT__rd_FIFO_valid;
    vlSelfRef.__Vdly__out_order_req_l = vlSelfRef.__PVT__out_order_req_l;
    vlSelfRef.__Vdly__rd_ptr = vlSelfRef.__PVT__rd_ptr;
    vlSelfRef.__Vdly__rd_FIFO_last = vlSelfRef.__PVT__rd_FIFO_last;
    vlSelfRef.__Vdly__rd_FIFO_payload = vlSelfRef.__PVT__rd_FIFO_payload;
    vlSelfRef.__Vdly__bytes_abt_sent = vlSelfRef.__PVT__bytes_abt_sent;
    if (vlSelfRef.__PVT__nRST) {
        vlSelfRef.__Vdly__wr_state = vlSelfRef.__PVT__nwr_state;
        vlSelfRef.__Vdly__wrt_ptr = vlSelfRef.__PVT__nwrt_ptr;
        VL_ASSIGN_W(640,vlSelfRef.__Vdly__TCP_tx_order, vlSelfRef.__PVT__nTCP_tx_order);
        vlSelfRef.__Vdly__dict_wrt_ptr = vlSelfRef.__PVT__ndict_wrt_ptr;
        vlSelfRef.__Vdly__dict_rd_ptr = vlSelfRef.__PVT__ndict_rd_ptr;
        vlSelfRef.__Vdly__wr_FIFO_valid = vlSelfRef.__PVT__nwr_FIFO_valid;
        vlSelfRef.__Vdly__bytes_msg_trk = vlSelfRef.__PVT__nbytes_msg_trk;
        vlSelfRef.__Vdly__flush_ptr = vlSelfRef.__PVT__nflush_ptr;
        vlSelfRef.__Vdly__bytes_abt_sent_msg = vlSelfRef.__PVT__nbytes_abt_sent_msg;
        vlSelfRef.__Vdly__bytes_abt_sent_msg_rd = vlSelfRef.__PVT__nbytes_abt_sent_msg_rd;
        vlSelfRef.__Vdly__rd_upd = vlSelfRef.__PVT__nrd_upd;
        vlSelfRef.__Vdly__checksum_l = vlSelfRef.__PVT__nchecksum_l;
    } else {
        vlSelfRef.__Vdly__wrt_ptr = 0U;
        VL_ASSIGN_W(640,vlSelfRef.__Vdly__TCP_tx_order, Vtop__ConstPool__CONST_h7ca4bd95_0);
        vlSelfRef.__Vdly__dict_wrt_ptr = 0U;
        vlSelfRef.__Vdly__dict_rd_ptr = 0U;
        vlSelfRef.__Vdly__wr_FIFO_valid = 0U;
        vlSelfRef.__Vdly__bytes_msg_trk = 0U;
        vlSelfRef.__Vdly__wr_state = 0U;
        vlSelfRef.__Vdly__flush_ptr = 0U;
        vlSelfRef.__Vdly__bytes_abt_sent_msg = 0U;
        vlSelfRef.__Vdly__bytes_abt_sent_msg_rd = 0U;
        vlSelfRef.__Vdly__rd_upd = 0U;
        vlSelfRef.__Vdly__checksum_l = 0U;
    }
    if (vlSelfRef.__PVT__nRST) {
        vlSelfRef.__Vdly__ptr_str = vlSelfRef.__PVT__nptr_str;
        vlSelfRef.__Vdly__ptr_end = vlSelfRef.__PVT__nptr_end;
        vlSelfRef.__Vdly__bytes_abt_sent = vlSelfRef.__PVT__nbytes_abt_sent;
        VL_ASSIGN_W(1424,vlSelfRef.__Vdly__dict_tx, vlSelfRef.__PVT__ndict_tx);
        vlSelfRef.__Vdly__ACK_rcv_flag_l = vlSelfRef.__PVT__nACK_rcv_flag_l;
        vlSelfRef.__Vdly__rd_state = vlSelfRef.__PVT__nrd_state;
        vlSelfRef.__Vdly__rd_FIFO_valid = vlSelfRef.__PVT__nrd_FIFO_valid;
        vlSelfRef.__Vdly__rd_FIFO_last = vlSelfRef.__PVT__nrd_FIFO_last;
        vlSelfRef.__Vdly__rd_FIFO_payload = vlSelfRef.__PVT__nrd_FIFO_payload;
        vlSelfRef.__Vdly__rd_ptr = vlSelfRef.__PVT__nrd_ptr;
        vlSelfRef.__Vdly__out_order_req_l = vlSelfRef.__PVT__nout_order_req_l;
        vlSelfRef.__Vdly__ACK_num_l = vlSelfRef.__PVT__nACK_num_l;
        vlSelfRef.__Vdly__msg_end_ptr = vlSelfRef.__PVT__nmsg_end_ptr;
    } else {
        vlSelfRef.__Vdly__ptr_str = 0U;
        vlSelfRef.__Vdly__ptr_end = 0U;
        vlSelfRef.__Vdly__rd_ptr = 0U;
        vlSelfRef.__Vdly__rd_state = 0U;
        vlSelfRef.__Vdly__bytes_abt_sent = 0U;
        vlSelfRef.__Vdly__rd_FIFO_last = 0U;
        vlSelfRef.__Vdly__rd_FIFO_payload = 0ULL;
        vlSelfRef.__Vdly__rd_FIFO_valid = 0U;
        VL_ASSIGN_W(1424,vlSelfRef.__Vdly__dict_tx, Vtop__ConstPool__CONST_hc6030581_0);
        vlSelfRef.__Vdly__out_order_req_l = 0U;
        vlSelfRef.__Vdly__ACK_rcv_flag_l = 0U;
        vlSelfRef.__Vdly__ACK_num_l = 0U;
        vlSelfRef.__Vdly__msg_end_ptr = 0U;
    }
    vlSelfRef.__PVT__bytes_msg_trk = vlSelfRef.__Vdly__bytes_msg_trk;
    vlSelfRef.__PVT__wr_FIFO_valid = vlSelfRef.__Vdly__wr_FIFO_valid;
    vlSelfRef.__PVT__wr_state = vlSelfRef.__Vdly__wr_state;
    VL_ASSIGN_W(640,vlSelfRef.__PVT__TCP_tx_order, vlSelfRef.__Vdly__TCP_tx_order);
    vlSelfRef.__PVT__dict_wrt_ptr = vlSelfRef.__Vdly__dict_wrt_ptr;
    vlSelfRef.__PVT__dict_rd_ptr = vlSelfRef.__Vdly__dict_rd_ptr;
    vlSelfRef.__PVT__flush_ptr = vlSelfRef.__Vdly__flush_ptr;
    vlSelfRef.__PVT__bytes_abt_sent_msg = vlSelfRef.__Vdly__bytes_abt_sent_msg;
    vlSelfRef.__PVT__bytes_abt_sent_msg_rd = vlSelfRef.__Vdly__bytes_abt_sent_msg_rd;
    vlSelfRef.__PVT__rd_upd = vlSelfRef.__Vdly__rd_upd;
    vlSelfRef.__PVT__checksum_l = vlSelfRef.__Vdly__checksum_l;
    vlSelfRef.__PVT__wrt_ptr = vlSelfRef.__Vdly__wrt_ptr;
    vlSelfRef.__PVT__ptr_str = vlSelfRef.__Vdly__ptr_str;
    vlSelfRef.__PVT__ptr_end = vlSelfRef.__Vdly__ptr_end;
    VL_ASSIGN_W(1424,vlSelfRef.__PVT__dict_tx, vlSelfRef.__Vdly__dict_tx);
    vlSelfRef.__PVT__ACK_rcv_flag_l = vlSelfRef.__Vdly__ACK_rcv_flag_l;
    vlSelfRef.__PVT__rd_state = vlSelfRef.__Vdly__rd_state;
    vlSelfRef.__PVT__ACK_num_l = vlSelfRef.__Vdly__ACK_num_l;
    vlSelfRef.__PVT__msg_end_ptr = vlSelfRef.__Vdly__msg_end_ptr;
    vlSelfRef.__PVT__rd_FIFO_valid = vlSelfRef.__Vdly__rd_FIFO_valid;
    vlSelfRef.__PVT__out_order_req_l = vlSelfRef.__Vdly__out_order_req_l;
    vlSelfRef.__PVT__rd_ptr = vlSelfRef.__Vdly__rd_ptr;
    vlSelfRef.__PVT__rd_FIFO_last = vlSelfRef.__Vdly__rd_FIFO_last;
    vlSelfRef.__PVT__rd_FIFO_payload = vlSelfRef.__Vdly__rd_FIFO_payload;
    vlSelfRef.__PVT__bytes_abt_sent = vlSelfRef.__Vdly__bytes_abt_sent;
    vlSelfRef.__PVT__re_trans = vlSelfRef.__PVT__out_order_req_l;
    vlSelfRef.__PVT__empty = ((IData)(vlSelfRef.__PVT__wrt_ptr) 
                              == (IData)(vlSelfRef.__PVT__rd_ptr));
    vlSelfRef.__PVT__full = ((VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__rd_ptr)) 
                              - (IData)(1U)) == VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__wrt_ptr)));
}

VL_INLINE_OPT void Vtop_FIFO_TX___nba_comb__TOP__top__u_fifo_tx__0(Vtop_FIFO_TX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_FIFO_TX___nba_comb__TOP__top__u_fifo_tx__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nwrt_ptr = vlSelfRef.__PVT__wrt_ptr;
    VL_ASSIGN_W(640,vlSelfRef.__PVT__nTCP_tx_order, vlSelfRef.__PVT__TCP_tx_order);
    VL_ASSIGN_W(1424,vlSelfRef.__PVT__ndict_tx, vlSelfRef.__PVT__dict_tx);
    vlSelfRef.__PVT__ndict_rd_ptr = vlSelfRef.__PVT__dict_rd_ptr;
    vlSelfRef.__PVT__ndict_wrt_ptr = vlSelfRef.__PVT__dict_wrt_ptr;
    vlSelfRef.__PVT__nwr_FIFO_valid = 0U;
    vlSelfRef.__PVT__nbytes_msg_trk = 0U;
    vlSelfRef.__PVT__nmsg_end_ptr = vlSelfRef.__PVT__msg_end_ptr;
    vlSelfRef.__PVT__nbytes_abt_sent_msg = vlSelfRef.__PVT__bytes_abt_sent_msg;
    vlSelfRef.__PVT__nbytes_abt_sent = vlSelfRef.__PVT__bytes_abt_sent;
    vlSelfRef.__PVT__nwr_state = vlSelfRef.__PVT__wr_state;
    vlSelfRef.__PVT__nflush_ptr = vlSelfRef.__PVT__flush_ptr;
    vlSelfRef.__PVT__nACK_rcv_flag_l = vlSelfRef.__PVT__ACK_rcv_flag_l;
    vlSelfRef.__PVT__nACK_num_l = vlSelfRef.__PVT__ACK_num_l;
    vlSelfRef.__PVT__nchecksum_l = vlSelfRef.__PVT__checksum_l;
    vlSelfRef.__PVT__nrd_state = vlSelfRef.__PVT__rd_state;
    vlSelfRef.__PVT__nptr_str = vlSelfRef.__PVT__ptr_str;
    vlSelfRef.__PVT__nptr_end = vlSelfRef.__PVT__ptr_end;
    vlSelfRef.__PVT__nrd_ptr = vlSelfRef.__PVT__rd_ptr;
    vlSelfRef.__PVT__nrd_FIFO_last = vlSelfRef.__PVT__rd_FIFO_last;
    vlSelfRef.__PVT__nrd_FIFO_payload = vlSelfRef.__PVT__rd_FIFO_payload;
    vlSelfRef.__PVT__nrd_FIFO_valid = vlSelfRef.__PVT__rd_FIFO_valid;
    vlSelfRef.__PVT__nout_order_req_l = vlSelfRef.__PVT__out_order_req_l;
    vlSelfRef.__PVT__nrd_upd = vlSelfRef.__PVT__rd_upd;
    vlSelfRef.__PVT__nbytes_abt_sent_msg_rd = vlSelfRef.__PVT__bytes_abt_sent_msg_rd;
    if (vlSelfRef.__PVT__out_order_req) {
        vlSelfRef.__PVT__nout_order_req_l = 1U;
    }
    if (vlSelfRef.__PVT__ACK_rcv_flag) {
        vlSelfRef.__PVT__nACK_rcv_flag_l = 1U;
        vlSelfRef.__PVT__nACK_num_l = vlSelfRef.__PVT__ACK_num;
    }
    if (((~ (IData)(vlSelfRef.__PVT__axis_last)) & (IData)(vlSelfRef.__PVT__rd_upd))) {
        vlSelfRef.__PVT__nbytes_abt_sent_msg = (0xffffU 
                                                & ((IData)(vlSelfRef.__PVT__bytes_abt_sent_msg) 
                                                   - (IData)(vlSelfRef.__PVT__bytes_abt_sent_msg_rd)));
    }
    if ((0U == (IData)(vlSelfRef.__PVT__rd_state))) {
        vlSelfRef.__PVT__nbytes_abt_sent = 0U;
        vlSelfRef.__PVT__nchecksum_l = 0U;
        vlSelfRef.__PVT__nrd_FIFO_last = 1U;
        if (vlSelfRef.__PVT__hand_shake_done) {
            vlSelfRef.__PVT__nrd_state = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__rd_state))) {
        vlSelfRef.__PVT__nbytes_abt_sent = 0U;
        vlSelfRef.__PVT__nchecksum_l = 0U;
        if (vlSelfRef.__PVT__TX_en) {
            if (vlSelfRef.__PVT__out_order_req_l) {
                vlSelfRef.__PVT__nrd_state = 3U;
                vlSelfRef.__PVT__nptr_str = (0xfU & 
                                             ((0x58fU 
                                               >= ((IData)(4U) 
                                                   + 
                                                   VL_EXTEND_II(32,11, 
                                                                (0x7ffU 
                                                                 & VL_SEL_IIII(32, 
                                                                               ((IData)(0x59U) 
                                                                                * 
                                                                                VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_rd_ptr))), 0U, 0xbU)))))
                                               ? VL_SEL_IWII(1424, vlSelfRef.__PVT__dict_tx, 
                                                             ((IData)(4U) 
                                                              + 
                                                              VL_EXTEND_II(32,11, 
                                                                           (0x7ffU 
                                                                            & VL_SEL_IIII(32, 
                                                                                ((IData)(0x59U) 
                                                                                * 
                                                                                VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_rd_ptr))), 0U, 0xbU)))), 4U)
                                               : 0U));
                vlSelfRef.__PVT__nptr_end = (0xfU & 
                                             ((0x58fU 
                                               >= (0x7ffU 
                                                   & VL_SEL_IIII(32, 
                                                                 ((IData)(0x59U) 
                                                                  * 
                                                                  VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_rd_ptr))), 0U, 0xbU)))
                                               ? VL_SEL_IWII(1424, vlSelfRef.__PVT__dict_tx, 
                                                             VL_EXTEND_II(32,11, 
                                                                          (0x7ffU 
                                                                           & VL_SEL_IIII(32, 
                                                                                ((IData)(0x59U) 
                                                                                * 
                                                                                VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_rd_ptr))), 0U, 0xbU))), 4U)
                                               : 0U));
                vlSelfRef.__PVT__nbytes_abt_sent = 
                    (0xffffU & ((0x58fU >= ((IData)(0x18U) 
                                            + VL_EXTEND_II(32,11, 
                                                           (0x7ffU 
                                                            & VL_SEL_IIII(32, 
                                                                          ((IData)(0x59U) 
                                                                           * 
                                                                           VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_rd_ptr))), 0U, 0xbU)))))
                                 ? VL_SEL_IWII(1424, vlSelfRef.__PVT__dict_tx, 
                                               ((IData)(0x18U) 
                                                + VL_EXTEND_II(32,11, 
                                                               (0x7ffU 
                                                                & VL_SEL_IIII(32, 
                                                                              ((IData)(0x59U) 
                                                                               * 
                                                                               VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_rd_ptr))), 0U, 0xbU)))), 0x10U)
                                 : 0U));
                vlSelfRef.__PVT__nchecksum_l = (0xffffU 
                                                & ((0x58fU 
                                                    >= 
                                                    ((IData)(8U) 
                                                     + 
                                                     VL_EXTEND_II(32,11, 
                                                                  (0x7ffU 
                                                                   & VL_SEL_IIII(32, 
                                                                                ((IData)(0x59U) 
                                                                                * 
                                                                                VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_rd_ptr))), 0U, 0xbU)))))
                                                    ? 
                                                   VL_SEL_IWII(1424, vlSelfRef.__PVT__dict_tx, 
                                                               ((IData)(8U) 
                                                                + 
                                                                VL_EXTEND_II(32,11, 
                                                                             (0x7ffU 
                                                                              & VL_SEL_IIII(32, 
                                                                                ((IData)(0x59U) 
                                                                                * 
                                                                                VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_rd_ptr))), 0U, 0xbU)))), 0x10U)
                                                    : 0U));
            } else {
                vlSelfRef.__PVT__nrd_state = 2U;
                vlSelfRef.__PVT__nptr_str = vlSelfRef.__PVT__rd_ptr;
                vlSelfRef.__PVT__nptr_end = vlSelfRef.__PVT__msg_end_ptr;
                vlSelfRef.__PVT__nbytes_abt_sent = vlSelfRef.__PVT__bytes_abt_sent_msg;
                vlSelfRef.__PVT__nchecksum_l = vlSelfRef.__PVT__checksum_TX;
            }
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__rd_state))) {
        vlSelfRef.__PVT__rd_debug_1 = (VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_wrt_ptr)) 
                                       != (VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_rd_ptr)) 
                                           - (IData)(1U)));
        vlSelfRef.__PVT__rd_debug_2 = ((VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__rd_ptr)) 
                                        - (IData)(1U)) 
                                       != VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__msg_end_ptr)));
        if ((((IData)(vlSelfRef.__PVT__rd_FIFO_en) 
              & (VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_wrt_ptr)) 
                 != (VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_rd_ptr)) 
                     - (IData)(1U)))) & (VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__rd_ptr)) 
                                         != (VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__msg_end_ptr)) 
                                             - (IData)(1U))))) {
            vlSelfRef.__PVT__nrd_FIFO_valid = 1U;
            vlSelfRef.__PVT__nrd_ptr = (0xfU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__rd_ptr)));
            vlSelfRef.__PVT__nrd_FIFO_payload = ((0x27fU 
                                                  >= 
                                                  (0x3ffU 
                                                   & VL_SEL_IIII(32, 
                                                                 VL_SHIFTL_III(32,32,32, 
                                                                               VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__rd_ptr)), 6U), 0U, 0xaU)))
                                                  ? 
                                                 VL_SEL_QWII(640, vlSelfRef.__PVT__TCP_tx_order, 
                                                             (0x3ffU 
                                                              & VL_SEL_IIII(32, 
                                                                            VL_SHIFTL_III(32,32,32, 
                                                                                VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__rd_ptr)), 6U), 0U, 0xaU)), 0x40U)
                                                  : 0ULL);
            if (((IData)(vlSelfRef.__PVT__rd_ptr) == (IData)(vlSelfRef.__PVT__ptr_end))) {
                vlSelfRef.__Vlvbound_hb8fa291e__0 = 1U;
                if (VL_LIKELY(((0x58fU >= ((IData)(0x58U) 
                                           + VL_EXTEND_II(32,11, 
                                                          (0x7ffU 
                                                           & VL_SEL_IIII(32, 
                                                                         ((IData)(0x59U) 
                                                                          * 
                                                                          VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_wrt_ptr))), 0U, 0xbU)))))))) {
                    VL_ASSIGNBIT_WI(((IData)(0x58U) 
                                     + VL_EXTEND_II(32,11, 
                                                    (0x7ffU 
                                                     & VL_SEL_IIII(32, 
                                                                   ((IData)(0x59U) 
                                                                    * 
                                                                    VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_wrt_ptr))), 0U, 0xbU)))), vlSelfRef.__PVT__ndict_tx, vlSelfRef.__Vlvbound_hb8fa291e__0);
                }
                vlSelfRef.__Vlvbound_hb3ecea42__0 = vlSelfRef.__PVT__seq_num_tx;
                if (VL_LIKELY(((0x58fU >= ((IData)(0x38U) 
                                           + VL_EXTEND_II(32,11, 
                                                          (0x7ffU 
                                                           & VL_SEL_IIII(32, 
                                                                         ((IData)(0x59U) 
                                                                          * 
                                                                          VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_wrt_ptr))), 0U, 0xbU)))))))) {
                    VL_ASSIGNSEL_WI(1424,32,((IData)(0x38U) 
                                             + VL_EXTEND_II(32,11, 
                                                            (0x7ffU 
                                                             & VL_SEL_IIII(32, 
                                                                           ((IData)(0x59U) 
                                                                            * 
                                                                            VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_wrt_ptr))), 0U, 0xbU)))), vlSelfRef.__PVT__ndict_tx, vlSelfRef.__Vlvbound_hb3ecea42__0);
                }
                vlSelfRef.__Vlvbound_hb5681c9b__0 = 
                    VL_EXTEND_II(32,16, (IData)(vlSelfRef.__PVT__bytes_abt_sent));
                if (VL_LIKELY(((0x58fU >= ((IData)(0x18U) 
                                           + VL_EXTEND_II(32,11, 
                                                          (0x7ffU 
                                                           & VL_SEL_IIII(32, 
                                                                         ((IData)(0x59U) 
                                                                          * 
                                                                          VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_wrt_ptr))), 0U, 0xbU)))))))) {
                    VL_ASSIGNSEL_WI(1424,32,((IData)(0x18U) 
                                             + VL_EXTEND_II(32,11, 
                                                            (0x7ffU 
                                                             & VL_SEL_IIII(32, 
                                                                           ((IData)(0x59U) 
                                                                            * 
                                                                            VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_wrt_ptr))), 0U, 0xbU)))), vlSelfRef.__PVT__ndict_tx, vlSelfRef.__Vlvbound_hb5681c9b__0);
                }
                vlSelfRef.__Vlvbound_h6259565b__0 = vlSelfRef.__PVT__ptr_str;
                if (VL_LIKELY(((0x58fU >= ((IData)(4U) 
                                           + VL_EXTEND_II(32,11, 
                                                          (0x7ffU 
                                                           & VL_SEL_IIII(32, 
                                                                         ((IData)(0x59U) 
                                                                          * 
                                                                          VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_wrt_ptr))), 0U, 0xbU)))))))) {
                    VL_ASSIGNSEL_WI(1424,4,((IData)(4U) 
                                            + VL_EXTEND_II(32,11, 
                                                           (0x7ffU 
                                                            & VL_SEL_IIII(32, 
                                                                          ((IData)(0x59U) 
                                                                           * 
                                                                           VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_wrt_ptr))), 0U, 0xbU)))), vlSelfRef.__PVT__ndict_tx, vlSelfRef.__Vlvbound_h6259565b__0);
                }
                vlSelfRef.__Vlvbound_h45274be6__0 = vlSelfRef.__PVT__rd_ptr;
                if (VL_LIKELY(((0x58fU >= (0x7ffU & 
                                           VL_SEL_IIII(32, 
                                                       ((IData)(0x59U) 
                                                        * 
                                                        VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_wrt_ptr))), 0U, 0xbU)))))) {
                    VL_ASSIGNSEL_WI(1424,4,VL_EXTEND_II(32,11, 
                                                        (0x7ffU 
                                                         & VL_SEL_IIII(32, 
                                                                       ((IData)(0x59U) 
                                                                        * 
                                                                        VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_wrt_ptr))), 0U, 0xbU))), vlSelfRef.__PVT__ndict_tx, vlSelfRef.__Vlvbound_h45274be6__0);
                }
                vlSelfRef.__Vlvbound_h5e8c2d41__0 = vlSelfRef.__PVT__checksum_l;
                if (VL_LIKELY(((0x58fU >= ((IData)(8U) 
                                           + VL_EXTEND_II(32,11, 
                                                          (0x7ffU 
                                                           & VL_SEL_IIII(32, 
                                                                         ((IData)(0x59U) 
                                                                          * 
                                                                          VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_wrt_ptr))), 0U, 0xbU)))))))) {
                    VL_ASSIGNSEL_WI(1424,16,((IData)(8U) 
                                             + VL_EXTEND_II(32,11, 
                                                            (0x7ffU 
                                                             & VL_SEL_IIII(32, 
                                                                           ((IData)(0x59U) 
                                                                            * 
                                                                            VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_wrt_ptr))), 0U, 0xbU)))), vlSelfRef.__PVT__ndict_tx, vlSelfRef.__Vlvbound_h5e8c2d41__0);
                }
                vlSelfRef.__PVT__nrd_FIFO_last = 1U;
                vlSelfRef.__PVT__nrd_state = 1U;
                vlSelfRef.__PVT__nrd_upd = 1U;
                vlSelfRef.__PVT__nbytes_abt_sent_msg_rd 
                    = vlSelfRef.__PVT__bytes_abt_sent;
                vlSelfRef.__PVT__ndict_wrt_ptr = (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__dict_wrt_ptr)));
            }
        }
    } else if ((3U == (IData)(vlSelfRef.__PVT__rd_state))) {
        if (vlSelfRef.__PVT__rd_FIFO_en) {
            vlSelfRef.__PVT__nrd_FIFO_valid = 1U;
            vlSelfRef.__PVT__nrd_FIFO_payload = ((0x27fU 
                                                  >= 
                                                  (0x3ffU 
                                                   & VL_SEL_IIII(32, 
                                                                 VL_SHIFTL_III(32,32,32, 
                                                                               VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__ptr_str)), 6U), 0U, 0xaU)))
                                                  ? 
                                                 VL_SEL_QWII(640, vlSelfRef.__PVT__TCP_tx_order, 
                                                             (0x3ffU 
                                                              & VL_SEL_IIII(32, 
                                                                            VL_SHIFTL_III(32,32,32, 
                                                                                VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__ptr_str)), 6U), 0U, 0xaU)), 0x40U)
                                                  : 0ULL);
            vlSelfRef.__PVT__nptr_str = (0xfU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__ptr_str)));
            if ((VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__ptr_str)) 
                 == (VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__ptr_end)) 
                     - (IData)(1U)))) {
                vlSelfRef.__PVT__nrd_FIFO_last = 1U;
                vlSelfRef.__PVT__nrd_state = 1U;
                vlSelfRef.__PVT__nout_order_req_l = 0U;
            }
        }
    }
    if ((0U == (IData)(vlSelfRef.__PVT__wr_state))) {
        if (((((0x58fU >= ((IData)(0x38U) + VL_EXTEND_II(32,11, 
                                                         (0x7ffU 
                                                          & VL_SEL_IIII(32, 
                                                                        ((IData)(0x59U) 
                                                                         * 
                                                                         VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_rd_ptr))), 0U, 0xbU)))))
                ? VL_SEL_IWII(1424, vlSelfRef.__PVT__dict_tx, 
                              ((IData)(0x38U) + VL_EXTEND_II(32,11, 
                                                             (0x7ffU 
                                                              & VL_SEL_IIII(32, 
                                                                            ((IData)(0x59U) 
                                                                             * 
                                                                             VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_rd_ptr))), 0U, 0xbU)))), 0x20U)
                : 0U) < vlSelfRef.__PVT__ACK_num_l) 
             & ((IData)(vlSelfRef.__PVT__dict_rd_ptr) 
                != (IData)(vlSelfRef.__PVT__dict_wrt_ptr)))) {
            vlSelfRef.__PVT__nwr_state = 2U;
            vlSelfRef.__PVT__nflush_ptr = (0xfU & (
                                                   (0x58fU 
                                                    >= 
                                                    ((IData)(4U) 
                                                     + 
                                                     VL_EXTEND_II(32,11, 
                                                                  (0x7ffU 
                                                                   & VL_SEL_IIII(32, 
                                                                                ((IData)(0x59U) 
                                                                                * 
                                                                                VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_rd_ptr))), 0U, 0xbU)))))
                                                    ? 
                                                   VL_SEL_IWII(1424, vlSelfRef.__PVT__dict_tx, 
                                                               ((IData)(4U) 
                                                                + 
                                                                VL_EXTEND_II(32,11, 
                                                                             (0x7ffU 
                                                                              & VL_SEL_IIII(32, 
                                                                                ((IData)(0x59U) 
                                                                                * 
                                                                                VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_rd_ptr))), 0U, 0xbU)))), 4U)
                                                    : 0U));
            vlSelfRef.__PVT__ndict_rd_ptr = (0xfU & 
                                             ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__dict_rd_ptr)));
        } else if (((IData)(vlSelfRef.__PVT__wr_FIFO_en) 
                    & (~ (IData)(vlSelfRef.__PVT__full)))) {
            vlSelfRef.__PVT__nwr_FIFO_valid = 1U;
            vlSelfRef.__PVT__nwrt_ptr = (0xfU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__wrt_ptr)));
            vlSelfRef.__Vlvbound_ha6c1b2f1__0 = vlSelfRef.__PVT__soupbin_TCP_payload;
            if (VL_LIKELY(((0x27fU >= (0x3ffU & VL_SEL_IIII(32, 
                                                            VL_SHIFTL_III(32,32,32, 
                                                                          VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__wrt_ptr)), 6U), 0U, 0xaU)))))) {
                VL_ASSIGNSEL_WQ(640,64,(0x3ffU & VL_SEL_IIII(32, 
                                                             VL_SHIFTL_III(32,32,32, 
                                                                           VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__wrt_ptr)), 6U), 0U, 0xaU)), vlSelfRef.__PVT__nTCP_tx_order, vlSelfRef.__Vlvbound_ha6c1b2f1__0);
            }
            vlSelfRef.__PVT__nwr_state = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__wr_state))) {
        vlSelfRef.__PVT__nflush_ptr = (0xfU & ((IData)(1U) 
                                               + (IData)(vlSelfRef.__PVT__flush_ptr)));
        vlSelfRef.__Vlvbound_hd8945327__0 = 0ULL;
        if (VL_LIKELY(((0x27fU >= (0x3ffU & VL_SEL_IIII(32, 
                                                        VL_SHIFTL_III(32,32,32, 
                                                                      VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__flush_ptr)), 6U), 0U, 0xaU)))))) {
            VL_ASSIGNSEL_WQ(640,64,(0x3ffU & VL_SEL_IIII(32, 
                                                         VL_SHIFTL_III(32,32,32, 
                                                                       VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__flush_ptr)), 6U), 0U, 0xaU)), vlSelfRef.__PVT__nTCP_tx_order, vlSelfRef.__Vlvbound_hd8945327__0);
        }
        if (((IData)(vlSelfRef.__PVT__flush_ptr) == 
             (0xfU & ((0x58fU >= (0x7ffU & VL_SEL_IIII(32, 
                                                       ((IData)(0x59U) 
                                                        * 
                                                        VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_rd_ptr))), 0U, 0xbU)))
                       ? VL_SEL_IWII(1424, vlSelfRef.__PVT__dict_tx, 
                                     VL_EXTEND_II(32,11, 
                                                  (0x7ffU 
                                                   & VL_SEL_IIII(32, 
                                                                 ((IData)(0x59U) 
                                                                  * 
                                                                  VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__dict_rd_ptr))), 0U, 0xbU))), 4U)
                       : 0U)))) {
            vlSelfRef.__PVT__nACK_rcv_flag_l = 0U;
            vlSelfRef.__PVT__nwr_state = 0U;
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__wr_state))) {
        vlSelfRef.__PVT__nwr_FIFO_valid = 1U;
        vlSelfRef.__PVT__nwrt_ptr = (0xfU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__wrt_ptr)));
        vlSelfRef.__Vlvbound_ha6c1b2f1__1 = vlSelfRef.__PVT__soupbin_TCP_payload;
        if (VL_LIKELY(((0x27fU >= (0x3ffU & VL_SEL_IIII(32, 
                                                        VL_SHIFTL_III(32,32,32, 
                                                                      VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__wrt_ptr)), 6U), 0U, 0xaU)))))) {
            VL_ASSIGNSEL_WQ(640,64,(0x3ffU & VL_SEL_IIII(32, 
                                                         VL_SHIFTL_III(32,32,32, 
                                                                       VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__wrt_ptr)), 6U), 0U, 0xaU)), vlSelfRef.__PVT__nTCP_tx_order, vlSelfRef.__Vlvbound_ha6c1b2f1__1);
        }
        if (vlSelfRef.__PVT__axis_last) {
            vlSelfRef.__PVT__nwr_FIFO_valid = 0U;
            vlSelfRef.__PVT__nmsg_end_ptr = (0xfU & 
                                             ((IData)(1U) 
                                              + ((IData)(vlSelfRef.__PVT__msg_end_ptr) 
                                                 + (IData)(vlSelfRef.__PVT__wrt_ptr))));
            vlSelfRef.__PVT__nbytes_abt_sent_msg = 
                (0xffffU & ((IData)(vlSelfRef.__PVT__bytes_abt_sent_msg) 
                            + VL_SEL_IIII(32, vlSelfRef.__PVT__len_seq, 0U, 0x10U)));
            vlSelfRef.__PVT__nwr_state = 0U;
        }
    }
}
