// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_FIFO_TX.h"

VL_ATTR_COLD void Vtop_FIFO_TX___stl_sequent__TOP__top__u_fifo_tx__0(Vtop_FIFO_TX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_FIFO_TX___stl_sequent__TOP__top__u_fifo_tx__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__empty = ((IData)(vlSelfRef.__PVT__wrt_ptr) 
                              == (IData)(vlSelfRef.__PVT__rd_ptr));
    vlSelfRef.__PVT__re_trans = vlSelfRef.__PVT__out_order_req_l;
    vlSelfRef.__PVT__full = ((VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__rd_ptr)) 
                              - (IData)(1U)) == VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__wrt_ptr)));
}

VL_ATTR_COLD void Vtop_FIFO_TX___stl_sequent__TOP__top__u_fifo_tx__1(Vtop_FIFO_TX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_FIFO_TX___stl_sequent__TOP__top__u_fifo_tx__1\n"); );
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

VL_ATTR_COLD void Vtop_FIFO_TX___ctor_var_reset(Vtop_FIFO_TX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_FIFO_TX___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__CLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6192783415628501865ull);
    vlSelf->__PVT__nRST = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9596079045119723318ull);
    vlSelf->__PVT__seq_up = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 796946559863942825ull);
    vlSelf->__PVT__seq_num_tx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15452675836633821188ull);
    vlSelf->__PVT__rd_FIFO_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6363420242050000687ull);
    vlSelf->__PVT__TX_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3522186512893532196ull);
    vlSelf->__PVT__hand_shake_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13814527802426099546ull);
    vlSelf->__PVT__checksum_TX = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4316659010836385484ull);
    vlSelf->__PVT__rd_FIFO_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 615369904805283052ull);
    vlSelf->__PVT__rd_FIFO_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10855001204654443987ull);
    vlSelf->__PVT__rd_FIFO_payload = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6002881770607720665ull);
    vlSelf->__PVT__bytes_abt_sent = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14892826253315460437ull);
    vlSelf->__PVT__ACK_num = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8536444321650387476ull);
    vlSelf->__PVT__ACK_rcv_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3569977124790002748ull);
    vlSelf->__PVT__out_order_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9025304112997670359ull);
    vlSelf->__PVT__TCP_stop_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10812039392004460878ull);
    vlSelf->__PVT__end_ss = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9419734627887829661ull);
    vlSelf->__PVT__axis_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10901583754854957544ull);
    vlSelf->__PVT__wr_FIFO_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11327851442339175407ull);
    vlSelf->__PVT__len_seq = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9067084145827924886ull);
    vlSelf->__PVT__soupbin_TCP_payload = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18175650338536413172ull);
    vlSelf->__PVT__wr_FIFO_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6692967410572391745ull);
    vlSelf->__PVT__re_trans = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11615218911393243005ull);
    vlSelf->__PVT__checksum_re_trans = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13421358010320226515ull);
    vlSelf->__PVT__nbytes_abt_sent = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2013386643870935079ull);
    vlSelf->__PVT__bytes_msg_trk = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1734810485456161270ull);
    vlSelf->__PVT__nbytes_msg_trk = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16636270517931918532ull);
    vlSelf->__PVT__nrd_FIFO_payload = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18204804316692797115ull);
    vlSelf->__PVT__ptr_str = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17507851768293139031ull);
    vlSelf->__PVT__nptr_str = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2598781958789910776ull);
    vlSelf->__PVT__ptr_end = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 545482962064680126ull);
    vlSelf->__PVT__nptr_end = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9975737397444179983ull);
    vlSelf->__PVT__flush_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12629206001683931762ull);
    vlSelf->__PVT__nflush_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4733891924914347654ull);
    vlSelf->__PVT__bytes_abt_sent_msg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7943163400236222751ull);
    vlSelf->__PVT__nbytes_abt_sent_msg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2964574420189609423ull);
    vlSelf->__PVT__msg_end_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8429715997136932416ull);
    vlSelf->__PVT__nmsg_end_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15817006998441629965ull);
    vlSelf->__PVT__rd_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7097515545755597481ull);
    vlSelf->__PVT__nrd_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18345856749471999742ull);
    vlSelf->__PVT__wr_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5280511308092715804ull);
    vlSelf->__PVT__nwr_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15504643839010432996ull);
    VL_SCOPED_RAND_RESET_W(1424, vlSelf->__PVT__dict_tx, __VscopeHash, 8132685491524372907ull);
    VL_SCOPED_RAND_RESET_W(1424, vlSelf->__PVT__ndict_tx, __VscopeHash, 13644340326169214446ull);
    vlSelf->__PVT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6695099141381822181ull);
    vlSelf->__PVT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3016723684638320966ull);
    vlSelf->__PVT__nrd_FIFO_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 356173231846644250ull);
    vlSelf->__PVT__nrd_FIFO_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4001576852689382274ull);
    vlSelf->__PVT__nwr_FIFO_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8099430462208924156ull);
    vlSelf->__PVT__dict_wrt_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8371961255502928767ull);
    vlSelf->__PVT__ndict_wrt_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7658264056147584220ull);
    vlSelf->__PVT__dict_rd_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4050154379600367266ull);
    vlSelf->__PVT__ndict_rd_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16954263561210659524ull);
    vlSelf->__PVT__rd_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8582113012353463185ull);
    vlSelf->__PVT__nrd_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8308338580089836589ull);
    vlSelf->__PVT__wrt_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9596283480440020227ull);
    vlSelf->__PVT__nwrt_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7051466794798759104ull);
    VL_SCOPED_RAND_RESET_W(640, vlSelf->__PVT__TCP_tx_order, __VscopeHash, 17298542801316741648ull);
    VL_SCOPED_RAND_RESET_W(640, vlSelf->__PVT__nTCP_tx_order, __VscopeHash, 13917383682734073223ull);
    vlSelf->__PVT__out_order_req_l = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9631289590388859388ull);
    vlSelf->__PVT__nout_order_req_l = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3534741861462136992ull);
    vlSelf->__PVT__ACK_rcv_flag_l = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15379323453983390604ull);
    vlSelf->__PVT__nACK_rcv_flag_l = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14915012020914461628ull);
    vlSelf->__PVT__ACK_num_l = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2166433587722822873ull);
    vlSelf->__PVT__nACK_num_l = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17911831605349379035ull);
    vlSelf->__PVT__rd_debug_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12532295267835098533ull);
    vlSelf->__PVT__rd_debug_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14227416136890610580ull);
    vlSelf->__PVT__rd_upd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12382500935212045783ull);
    vlSelf->__PVT__nrd_upd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16201949828648227823ull);
    vlSelf->__PVT__bytes_abt_sent_msg_rd = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16560716286873167439ull);
    vlSelf->__PVT__nbytes_abt_sent_msg_rd = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 647950956854511219ull);
    vlSelf->__PVT__checksum_l = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11898903522432219945ull);
    vlSelf->__PVT__nchecksum_l = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17591144526434207816ull);
    vlSelf->__Vlvbound_hb8fa291e__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7768765834568473999ull);
    vlSelf->__Vlvbound_hb3ecea42__0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13289760452459523314ull);
    vlSelf->__Vlvbound_hb5681c9b__0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6365747162926723377ull);
    vlSelf->__Vlvbound_h6259565b__0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10894104945972959315ull);
    vlSelf->__Vlvbound_h45274be6__0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11133530538576419367ull);
    vlSelf->__Vlvbound_h5e8c2d41__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12489195498590416777ull);
    vlSelf->__Vlvbound_ha6c1b2f1__0 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6404978976145724310ull);
    vlSelf->__Vlvbound_hd8945327__0 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9669073231682508161ull);
    vlSelf->__Vlvbound_ha6c1b2f1__1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13377350625485700597ull);
    vlSelf->__Vdly__ptr_str = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8882147916468860456ull);
    vlSelf->__Vdly__ptr_end = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12248857168987750108ull);
    vlSelf->__Vdly__bytes_abt_sent = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9174556343561160833ull);
    VL_SCOPED_RAND_RESET_W(1424, vlSelf->__Vdly__dict_tx, __VscopeHash, 13317015764355666217ull);
    vlSelf->__Vdly__ACK_rcv_flag_l = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13460826663267061702ull);
    vlSelf->__Vdly__rd_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16646535725462025211ull);
    vlSelf->__Vdly__rd_FIFO_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16917633016641136715ull);
    vlSelf->__Vdly__rd_FIFO_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7926326192418661880ull);
    vlSelf->__Vdly__rd_FIFO_payload = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9952630960183386876ull);
    vlSelf->__Vdly__rd_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1296402517236374361ull);
    vlSelf->__Vdly__out_order_req_l = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14647208207734858150ull);
    vlSelf->__Vdly__ACK_num_l = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9274035187688924433ull);
    vlSelf->__Vdly__msg_end_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17410273443884323119ull);
    vlSelf->__Vdly__wr_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13392601894025658814ull);
    vlSelf->__Vdly__wrt_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7899569692232946774ull);
    VL_SCOPED_RAND_RESET_W(640, vlSelf->__Vdly__TCP_tx_order, __VscopeHash, 4107404051855469694ull);
    vlSelf->__Vdly__dict_wrt_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16221445728698166955ull);
    vlSelf->__Vdly__dict_rd_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6268604221282537776ull);
    vlSelf->__Vdly__wr_FIFO_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4213482388978796307ull);
    vlSelf->__Vdly__bytes_msg_trk = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1256573506744215735ull);
    vlSelf->__Vdly__flush_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16317277963448058588ull);
    vlSelf->__Vdly__bytes_abt_sent_msg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11193919116730834715ull);
    vlSelf->__Vdly__bytes_abt_sent_msg_rd = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8868471588927239230ull);
    vlSelf->__Vdly__rd_upd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12587236724163895628ull);
    vlSelf->__Vdly__checksum_l = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10845474858099498384ull);
}
