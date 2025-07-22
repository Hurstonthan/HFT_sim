// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFIFO_TX.h for the primary calling header

#include "VFIFO_TX__pch.h"
#include "VFIFO_TX___024root.h"

VL_ATTR_COLD void VFIFO_TX___024root___eval_static(VFIFO_TX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_TX___024root___eval_static\n"); );
    VFIFO_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__CLK__0 = vlSelfRef.CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__nRST__0 = vlSelfRef.nRST;
}

VL_ATTR_COLD void VFIFO_TX___024root___eval_initial(VFIFO_TX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_TX___024root___eval_initial\n"); );
    VFIFO_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VFIFO_TX___024root___eval_final(VFIFO_TX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_TX___024root___eval_final\n"); );
    VFIFO_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFIFO_TX___024root___dump_triggers__stl(VFIFO_TX___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VFIFO_TX___024root___eval_phase__stl(VFIFO_TX___024root* vlSelf);

VL_ATTR_COLD void VFIFO_TX___024root___eval_settle(VFIFO_TX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_TX___024root___eval_settle\n"); );
    VFIFO_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VFIFO_TX___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/FIFO_TX.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VFIFO_TX___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFIFO_TX___024root___dump_triggers__stl(VFIFO_TX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_TX___024root___dump_triggers__stl\n"); );
    VFIFO_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VFIFO_TX___024root___stl_sequent__TOP__0(VFIFO_TX___024root* vlSelf);
VL_ATTR_COLD void VFIFO_TX___024root____Vm_traceActivitySetAll(VFIFO_TX___024root* vlSelf);

VL_ATTR_COLD void VFIFO_TX___024root___eval_stl(VFIFO_TX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_TX___024root___eval_stl\n"); );
    VFIFO_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VFIFO_TX___024root___stl_sequent__TOP__0(vlSelf);
        VFIFO_TX___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void VFIFO_TX___024root___stl_sequent__TOP__0(VFIFO_TX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_TX___024root___stl_sequent__TOP__0\n"); );
    VFIFO_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.re_trans = vlSelfRef.FIFO_TX__DOT__out_order_req_l;
    vlSelfRef.FIFO_TX__DOT__nACK_num_l = vlSelfRef.FIFO_TX__DOT__ACK_num_l;
    vlSelfRef.FIFO_TX__DOT__nmsg_end_ptr = vlSelfRef.FIFO_TX__DOT__msg_end_ptr;
    vlSelfRef.FIFO_TX__DOT__ndict_rd_ptr = vlSelfRef.FIFO_TX__DOT__dict_rd_ptr;
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
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x2eU)) {
        vlSelfRef.FIFO_TX__DOT__ndict_tx[__Vilp1] = 
            vlSelfRef.FIFO_TX__DOT__dict_tx[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    if ((0U != (IData)(vlSelfRef.FIFO_TX__DOT__rd_state))) {
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
    vlSelfRef.FIFO_TX__DOT__full = (((IData)(vlSelfRef.FIFO_TX__DOT__rd_ptr) 
                                     - (IData)(1U)) 
                                    == (IData)(vlSelfRef.FIFO_TX__DOT__wrt_ptr));
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

VL_ATTR_COLD void VFIFO_TX___024root___eval_triggers__stl(VFIFO_TX___024root* vlSelf);

VL_ATTR_COLD bool VFIFO_TX___024root___eval_phase__stl(VFIFO_TX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_TX___024root___eval_phase__stl\n"); );
    VFIFO_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VFIFO_TX___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VFIFO_TX___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFIFO_TX___024root___dump_triggers__ico(VFIFO_TX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_TX___024root___dump_triggers__ico\n"); );
    VFIFO_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VFIFO_TX___024root___dump_triggers__act(VFIFO_TX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_TX___024root___dump_triggers__act\n"); );
    VFIFO_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge CLK)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge nRST)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VFIFO_TX___024root___dump_triggers__nba(VFIFO_TX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_TX___024root___dump_triggers__nba\n"); );
    VFIFO_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge CLK)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge nRST)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VFIFO_TX___024root____Vm_traceActivitySetAll(VFIFO_TX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_TX___024root____Vm_traceActivitySetAll\n"); );
    VFIFO_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void VFIFO_TX___024root___ctor_var_reset(VFIFO_TX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_TX___024root___ctor_var_reset\n"); );
    VFIFO_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->CLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6192783415628501865ull);
    vlSelf->nRST = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9596079045119723318ull);
    vlSelf->seq_up = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 796946559863942825ull);
    vlSelf->seq_num_tx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15452675836633821188ull);
    vlSelf->rd_FIFO_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6363420242050000687ull);
    vlSelf->TX_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3522186512893532196ull);
    vlSelf->checksum_TX = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4316659010836385484ull);
    vlSelf->rd_FIFO_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 615369904805283052ull);
    vlSelf->rd_FIFO_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10855001204654443987ull);
    vlSelf->rd_FIFO_payload = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6002881770607720665ull);
    vlSelf->bytes_abt_sent = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14892826253315460437ull);
    vlSelf->ACK_num = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8536444321650387476ull);
    vlSelf->ACK_rcv_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3569977124790002748ull);
    vlSelf->out_order_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9025304112997670359ull);
    vlSelf->TCP_stop_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10812039392004460878ull);
    vlSelf->end_ss = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9419734627887829661ull);
    vlSelf->axis_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10901583754854957544ull);
    vlSelf->wr_FIFO_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11327851442339175407ull);
    vlSelf->len_seq = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9067084145827924886ull);
    vlSelf->soupbin_TCP_payload = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18175650338536413172ull);
    vlSelf->wr_FIFO_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6692967410572391745ull);
    vlSelf->re_trans = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11615218911393243005ull);
    vlSelf->checksum_re_trans = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13421358010320226515ull);
    vlSelf->FIFO_TX__DOT__nbytes_abt_sent = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14260299383768398027ull);
    vlSelf->FIFO_TX__DOT__bytes_msg_trk = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6142901969759253876ull);
    vlSelf->FIFO_TX__DOT__nrd_FIFO_payload = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10482580141037729936ull);
    vlSelf->FIFO_TX__DOT__ptr_str = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10646560619205210646ull);
    vlSelf->FIFO_TX__DOT__nptr_str = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7267725652729547304ull);
    vlSelf->FIFO_TX__DOT__ptr_end = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11788853976768175596ull);
    vlSelf->FIFO_TX__DOT__nptr_end = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4525440471238034528ull);
    vlSelf->FIFO_TX__DOT__flush_ptr = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5707409852844255120ull);
    vlSelf->FIFO_TX__DOT__nflush_ptr = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5820988024987938420ull);
    vlSelf->FIFO_TX__DOT__bytes_abt_sent_msg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3085018407120886160ull);
    vlSelf->FIFO_TX__DOT__nbytes_abt_sent_msg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5504424282007557831ull);
    vlSelf->FIFO_TX__DOT__msg_end_ptr = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7607186506526160900ull);
    vlSelf->FIFO_TX__DOT__nmsg_end_ptr = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17542964736599863812ull);
    vlSelf->FIFO_TX__DOT__rd_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10323459624504199843ull);
    vlSelf->FIFO_TX__DOT__nrd_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6947592977354171042ull);
    vlSelf->FIFO_TX__DOT__wr_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4941561786178680360ull);
    vlSelf->FIFO_TX__DOT__nwr_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 700561284067159113ull);
    VL_SCOPED_RAND_RESET_W(1488, vlSelf->FIFO_TX__DOT__dict_tx, __VscopeHash, 10768592794378209090ull);
    VL_SCOPED_RAND_RESET_W(1488, vlSelf->FIFO_TX__DOT__ndict_tx, __VscopeHash, 8874131564250208372ull);
    vlSelf->FIFO_TX__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2110066179480249762ull);
    vlSelf->FIFO_TX__DOT__nrd_FIFO_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14900740612864513905ull);
    vlSelf->FIFO_TX__DOT__nrd_FIFO_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17215532767155235365ull);
    vlSelf->FIFO_TX__DOT__nwr_FIFO_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12897818127298730046ull);
    vlSelf->FIFO_TX__DOT__dict_wrt_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6026281651305234799ull);
    vlSelf->FIFO_TX__DOT__ndict_wrt_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15319013434701102900ull);
    vlSelf->FIFO_TX__DOT__dict_rd_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2618081000941461160ull);
    vlSelf->FIFO_TX__DOT__ndict_rd_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 48242416781621139ull);
    vlSelf->FIFO_TX__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4596935669492180875ull);
    vlSelf->FIFO_TX__DOT__nrd_ptr = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8979308285130390441ull);
    vlSelf->FIFO_TX__DOT__wrt_ptr = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1060150822100574806ull);
    vlSelf->FIFO_TX__DOT__nwrt_ptr = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13316542851691519629ull);
    VL_SCOPED_RAND_RESET_W(4096, vlSelf->FIFO_TX__DOT__TCP_tx_order, __VscopeHash, 6967225939694262742ull);
    VL_SCOPED_RAND_RESET_W(4096, vlSelf->FIFO_TX__DOT__nTCP_tx_order, __VscopeHash, 4725848273551352090ull);
    vlSelf->FIFO_TX__DOT__out_order_req_l = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8860749794976245268ull);
    vlSelf->FIFO_TX__DOT__nout_order_req_l = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5423304147868026920ull);
    vlSelf->FIFO_TX__DOT__ACK_rcv_flag_l = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2955408460492056869ull);
    vlSelf->FIFO_TX__DOT__nACK_rcv_flag_l = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7143343796931106382ull);
    vlSelf->FIFO_TX__DOT__ACK_num_l = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6907200959831678498ull);
    vlSelf->FIFO_TX__DOT__nACK_num_l = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16049525966034898466ull);
    vlSelf->FIFO_TX__DOT__rd_debug_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14604302528283235267ull);
    vlSelf->FIFO_TX__DOT__rd_debug_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4538566602081478631ull);
    vlSelf->FIFO_TX__DOT__rd_upd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18155826906620878147ull);
    vlSelf->FIFO_TX__DOT__nrd_upd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10547329616695410043ull);
    vlSelf->FIFO_TX__DOT__bytes_abt_sent_msg_rd = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5787142094451177662ull);
    vlSelf->FIFO_TX__DOT__nbytes_abt_sent_msg_rd = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15504106850073794519ull);
    vlSelf->FIFO_TX__DOT__checksum_l = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5496031332478634304ull);
    vlSelf->FIFO_TX__DOT__nchecksum_l = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3340076717750945069ull);
    vlSelf->FIFO_TX__DOT____Vlvbound_haafa9b1c__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17240826177991137349ull);
    vlSelf->FIFO_TX__DOT____Vlvbound_hde36d840__0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9734891147725811551ull);
    vlSelf->FIFO_TX__DOT____Vlvbound_hcf6169df__0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11111972188967330505ull);
    vlSelf->FIFO_TX__DOT____Vlvbound_h7a818793__0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2255196755590618100ull);
    vlSelf->FIFO_TX__DOT____Vlvbound_h6aad29f5__0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8416411780585182167ull);
    vlSelf->FIFO_TX__DOT____Vlvbound_h60920ae5__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17588550100412723047ull);
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18225951476332272534ull);
    vlSelf->__Vtrigprevexpr___TOP__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5117209117380585348ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
