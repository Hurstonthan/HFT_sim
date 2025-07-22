// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpayload_FIFO.h for the primary calling header

#include "Vpayload_FIFO__pch.h"
#include "Vpayload_FIFO___024root.h"

VL_ATTR_COLD void Vpayload_FIFO___024root___eval_static(Vpayload_FIFO___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpayload_FIFO___024root___eval_static\n"); );
    Vpayload_FIFO__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__CLK__0 = vlSelfRef.CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__nRST__0 = vlSelfRef.nRST;
}

VL_ATTR_COLD void Vpayload_FIFO___024root___eval_initial(Vpayload_FIFO___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpayload_FIFO___024root___eval_initial\n"); );
    Vpayload_FIFO__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vpayload_FIFO___024root___eval_final(Vpayload_FIFO___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpayload_FIFO___024root___eval_final\n"); );
    Vpayload_FIFO__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpayload_FIFO___024root___dump_triggers__stl(Vpayload_FIFO___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vpayload_FIFO___024root___eval_phase__stl(Vpayload_FIFO___024root* vlSelf);

VL_ATTR_COLD void Vpayload_FIFO___024root___eval_settle(Vpayload_FIFO___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpayload_FIFO___024root___eval_settle\n"); );
    Vpayload_FIFO__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vpayload_FIFO___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/payload_FIFO.sv", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vpayload_FIFO___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpayload_FIFO___024root___dump_triggers__stl(Vpayload_FIFO___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpayload_FIFO___024root___dump_triggers__stl\n"); );
    Vpayload_FIFO__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vpayload_FIFO___024root___stl_sequent__TOP__0(Vpayload_FIFO___024root* vlSelf);
VL_ATTR_COLD void Vpayload_FIFO___024root____Vm_traceActivitySetAll(Vpayload_FIFO___024root* vlSelf);

VL_ATTR_COLD void Vpayload_FIFO___024root___eval_stl(Vpayload_FIFO___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpayload_FIFO___024root___eval_stl\n"); );
    Vpayload_FIFO__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vpayload_FIFO___024root___stl_sequent__TOP__0(vlSelf);
        Vpayload_FIFO___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vpayload_FIFO___024root___stl_sequent__TOP__0(Vpayload_FIFO___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpayload_FIFO___024root___stl_sequent__TOP__0\n"); );
    Vpayload_FIFO__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.seq_rx_FIFO_rd = vlSelfRef.payload_FIFO__DOT__seq_trk_rd;
    vlSelfRef.rd_FIFO_en = vlSelfRef.axis_r_en;
    vlSelfRef.wr_FIFO_len = vlSelfRef.payload_FIFO__DOT__wr_ptr;
    vlSelfRef.payload_FIFO__DOT__nwr_ptr = vlSelfRef.payload_FIFO__DOT__wr_ptr;
    if (vlSelfRef.wr_FIFO_en) {
        vlSelfRef.payload_FIFO__DOT__nwr_ptr = (7U 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.payload_FIFO__DOT__wr_ptr)));
        vlSelfRef.payload_FIFO__DOT____Vlvbound_h5d12e1c7__0 
            = vlSelfRef.axis_data_rx;
        vlSelfRef.payload_FIFO__DOT____Vlvbound_hfce51f23__0 
            = vlSelfRef.wr_FIFO_offset;
        if ((4U >= (IData)(vlSelfRef.payload_FIFO__DOT__wr_ptr))) {
            vlSelfRef.payload_FIFO__DOT__nTCP_FIFO[vlSelfRef.payload_FIFO__DOT__wr_ptr][0U] 
                = ((0xffU & vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
                    [vlSelfRef.payload_FIFO__DOT__wr_ptr][0U]) 
                   | ((IData)(vlSelfRef.payload_FIFO__DOT____Vlvbound_h5d12e1c7__0) 
                      << 8U));
            vlSelfRef.payload_FIFO__DOT__nTCP_FIFO[vlSelfRef.payload_FIFO__DOT__wr_ptr][1U] 
                = (((IData)(vlSelfRef.payload_FIFO__DOT____Vlvbound_h5d12e1c7__0) 
                    >> 0x18U) | ((IData)((vlSelfRef.payload_FIFO__DOT____Vlvbound_h5d12e1c7__0 
                                          >> 0x20U)) 
                                 << 8U));
            vlSelfRef.payload_FIFO__DOT__nTCP_FIFO[vlSelfRef.payload_FIFO__DOT__wr_ptr][2U] 
                = ((IData)((vlSelfRef.payload_FIFO__DOT____Vlvbound_h5d12e1c7__0 
                            >> 0x20U)) >> 0x18U);
            vlSelfRef.payload_FIFO__DOT__nTCP_FIFO[vlSelfRef.payload_FIFO__DOT__wr_ptr][0U] 
                = ((0xffffff00U & vlSelfRef.payload_FIFO__DOT__nTCP_FIFO
                    [vlSelfRef.payload_FIFO__DOT__wr_ptr][0U]) 
                   | (IData)(vlSelfRef.payload_FIFO__DOT____Vlvbound_hfce51f23__0));
        }
    }
    vlSelfRef.full = (((IData)(vlSelfRef.payload_FIFO__DOT__rd_ptr) 
                       - (IData)(1U)) == (IData)(vlSelfRef.wr_ptr_out));
    vlSelfRef.payload_FIFO__DOT__fifo_entry_rd[0U] 
        = vlSelfRef.payload_FIFO__DOT__TCP_FIFO[((4U 
                                                  >= (IData)(vlSelfRef.payload_FIFO__DOT__rd_ptr))
                                                  ? (IData)(vlSelfRef.payload_FIFO__DOT__rd_ptr)
                                                  : 0U)][0U];
    vlSelfRef.payload_FIFO__DOT__fifo_entry_rd[1U] 
        = vlSelfRef.payload_FIFO__DOT__TCP_FIFO[((4U 
                                                  >= (IData)(vlSelfRef.payload_FIFO__DOT__rd_ptr))
                                                  ? (IData)(vlSelfRef.payload_FIFO__DOT__rd_ptr)
                                                  : 0U)][1U];
    vlSelfRef.payload_FIFO__DOT__fifo_entry_rd[2U] 
        = vlSelfRef.payload_FIFO__DOT__TCP_FIFO[((4U 
                                                  >= (IData)(vlSelfRef.payload_FIFO__DOT__rd_ptr))
                                                  ? (IData)(vlSelfRef.payload_FIFO__DOT__rd_ptr)
                                                  : 0U)][2U];
    vlSelfRef.payload_FIFO__DOT__nrd_FIFO_valid_l = vlSelfRef.payload_FIFO__DOT__rd_FIFO_valid_l;
    if (vlSelfRef.rd_FIFO_valid) {
        vlSelfRef.payload_FIFO__DOT__nrd_FIFO_valid_l = 1U;
    } else if (((IData)(vlSelfRef.payload_FIFO__DOT__rd_ptr) 
                == (IData)(vlSelfRef.rd_FIFO_len))) {
        vlSelfRef.payload_FIFO__DOT__nrd_FIFO_valid_l = 0U;
    }
    vlSelfRef.payload_FIFO__DOT__naxis_r_valid = vlSelfRef.axis_r_valid;
    vlSelfRef.payload_FIFO__DOT__nrd_ptr = vlSelfRef.rd_FIFO_ptr;
    vlSelfRef.payload_FIFO__DOT__nseq_trk_rd = vlSelfRef.payload_FIFO__DOT__seq_trk_rd;
    if (vlSelfRef.axis_r_en) {
        if (((IData)(vlSelfRef.payload_FIFO__DOT__rd_FIFO_valid_l) 
             & ((IData)(vlSelfRef.payload_FIFO__DOT__rd_ptr) 
                != (IData)(vlSelfRef.payload_FIFO__DOT__flush_ptr)))) {
            vlSelfRef.payload_FIFO__DOT__naxis_r_valid = 1U;
            vlSelfRef.payload_FIFO__DOT__nrd_ptr = 
                (7U & ((IData)(1U) + (IData)(vlSelfRef.payload_FIFO__DOT__rd_ptr)));
            vlSelfRef.payload_FIFO__DOT__nseq_trk_rd 
                = (vlSelfRef.payload_FIFO__DOT__seq_trk_rd 
                   + (0xfU & ((1U & ((IData)(vlSelfRef.wr_FIFO_offset) 
                                     >> 7U)) + ((1U 
                                                 & ((IData)(vlSelfRef.wr_FIFO_offset) 
                                                    >> 6U)) 
                                                + (
                                                   (1U 
                                                    & ((IData)(vlSelfRef.wr_FIFO_offset) 
                                                       >> 5U)) 
                                                   + 
                                                   ((1U 
                                                     & ((IData)(vlSelfRef.wr_FIFO_offset) 
                                                        >> 4U)) 
                                                    + 
                                                    ((1U 
                                                      & ((IData)(vlSelfRef.wr_FIFO_offset) 
                                                         >> 3U)) 
                                                     + 
                                                     ((1U 
                                                       & ((IData)(vlSelfRef.wr_FIFO_offset) 
                                                          >> 2U)) 
                                                      + 
                                                      ((1U 
                                                        & ((IData)(vlSelfRef.wr_FIFO_offset) 
                                                           >> 1U)) 
                                                       + 
                                                       (1U 
                                                        & (IData)(vlSelfRef.wr_FIFO_offset)))))))))));
        } else {
            vlSelfRef.payload_FIFO__DOT__naxis_r_valid = 0U;
            vlSelfRef.payload_FIFO__DOT__nrd_ptr = 
                (7U & (IData)(vlSelfRef.payload_FIFO__DOT__rd_ptr));
            vlSelfRef.payload_FIFO__DOT__nseq_trk_rd 
                = vlSelfRef.payload_FIFO__DOT__seq_trk_rd;
        }
    }
    vlSelfRef.payload_FIFO__DOT__nTCP_flush_l = vlSelfRef.payload_FIFO__DOT__TCP_flush_l;
    if ((1U & (~ ((IData)(vlSelfRef.TCP_flush) | (IData)(vlSelfRef.payload_FIFO__DOT__TCP_flush_l))))) {
        if (((IData)(vlSelfRef.payload_FIFO__DOT__flush_ptr) 
             == (IData)(vlSelfRef.payload_FIFO__DOT__len_TCP_flush))) {
            vlSelfRef.payload_FIFO__DOT__nTCP_flush_l = 0U;
        } else if ((1U & (~ ((IData)(vlSelfRef.nw_segment) 
                             | (IData)(vlSelfRef.wr_FIFO_en))))) {
            if (vlSelfRef.TCP_flush) {
                vlSelfRef.payload_FIFO__DOT__nTCP_flush_l = 1U;
            }
        }
        if (((IData)(vlSelfRef.payload_FIFO__DOT__flush_ptr) 
             != (IData)(vlSelfRef.payload_FIFO__DOT__len_TCP_flush))) {
            if ((1U & (~ ((IData)(vlSelfRef.nw_segment) 
                          | (IData)(vlSelfRef.wr_FIFO_en))))) {
                if (vlSelfRef.TCP_flush) {
                    vlSelfRef.payload_FIFO__DOT__nlen_TCP_flush 
                        = vlSelfRef.payload_FIFO__DOT__wr_ptr;
                }
            }
        }
    }
    vlSelfRef.payload_FIFO__DOT__nflush_ptr = vlSelfRef.payload_FIFO__DOT__wr_ptr;
    if (((IData)(vlSelfRef.TCP_flush) | (IData)(vlSelfRef.payload_FIFO__DOT__TCP_flush_l))) {
        vlSelfRef.payload_FIFO__DOT__nflush_ptr = (7U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.payload_FIFO__DOT__flush_ptr)));
    } else if (((IData)(vlSelfRef.payload_FIFO__DOT__flush_ptr) 
                != (IData)(vlSelfRef.payload_FIFO__DOT__len_TCP_flush))) {
        if (((IData)(vlSelfRef.nw_segment) | (IData)(vlSelfRef.wr_FIFO_en))) {
            vlSelfRef.payload_FIFO__DOT__nflush_ptr 
                = vlSelfRef.payload_FIFO__DOT__flush_ptr;
        } else if (vlSelfRef.TCP_flush) {
            vlSelfRef.payload_FIFO__DOT__nflush_ptr 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.payload_FIFO__DOT__flush_ptr)));
        }
    }
}

VL_ATTR_COLD void Vpayload_FIFO___024root___eval_triggers__stl(Vpayload_FIFO___024root* vlSelf);

VL_ATTR_COLD bool Vpayload_FIFO___024root___eval_phase__stl(Vpayload_FIFO___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpayload_FIFO___024root___eval_phase__stl\n"); );
    Vpayload_FIFO__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vpayload_FIFO___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vpayload_FIFO___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpayload_FIFO___024root___dump_triggers__ico(Vpayload_FIFO___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpayload_FIFO___024root___dump_triggers__ico\n"); );
    Vpayload_FIFO__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vpayload_FIFO___024root___dump_triggers__act(Vpayload_FIFO___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpayload_FIFO___024root___dump_triggers__act\n"); );
    Vpayload_FIFO__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vpayload_FIFO___024root___dump_triggers__nba(Vpayload_FIFO___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpayload_FIFO___024root___dump_triggers__nba\n"); );
    Vpayload_FIFO__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vpayload_FIFO___024root____Vm_traceActivitySetAll(Vpayload_FIFO___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpayload_FIFO___024root____Vm_traceActivitySetAll\n"); );
    Vpayload_FIFO__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vpayload_FIFO___024root___ctor_var_reset(Vpayload_FIFO___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpayload_FIFO___024root___ctor_var_reset\n"); );
    Vpayload_FIFO__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->CLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6192783415628501865ull);
    vlSelf->nRST = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9596079045119723318ull);
    vlSelf->nw_segment = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10812341697392716583ull);
    vlSelf->TCP_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2204969768331049030ull);
    vlSelf->axis_t_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3363515403628601574ull);
    vlSelf->axis_data_rx = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 100764171667573631ull);
    vlSelf->handshake_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18365787243460844200ull);
    vlSelf->seq_rcv_start = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3374705689665004837ull);
    vlSelf->wr_FIFO_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11327851442339175407ull);
    vlSelf->wr_FIFO_offset = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7116352258542374170ull);
    vlSelf->wr_ptr_out = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14280824392925468497ull);
    vlSelf->wr_FIFO_len = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1454357461022193599ull);
    vlSelf->rd_FIFO_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 615369904805283052ull);
    vlSelf->rd_FIFO_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1541493805853970047ull);
    vlSelf->rd_FIFO_len = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4311993884634595022ull);
    vlSelf->rd_FIFO_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6363420242050000687ull);
    vlSelf->seq_rx_FIFO_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1332892325987693968ull);
    vlSelf->full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6695099141381822181ull);
    vlSelf->axis_r_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8032066648238806430ull);
    vlSelf->axis_r_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14134597143016856134ull);
    vlSelf->axis_rd_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9324982647399811729ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(72, vlSelf->payload_FIFO__DOT__TCP_FIFO[__Vi0], __VscopeHash, 13326740518830751139ull);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(72, vlSelf->payload_FIFO__DOT__nTCP_FIFO[__Vi0], __VscopeHash, 16855323004440448302ull);
    }
    VL_SCOPED_RAND_RESET_W(72, vlSelf->payload_FIFO__DOT__fifo_entry_rd, __VscopeHash, 11291318372049005831ull);
    vlSelf->payload_FIFO__DOT__flush_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1521829419214853775ull);
    vlSelf->payload_FIFO__DOT__nflush_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4124337954605908597ull);
    vlSelf->payload_FIFO__DOT__len_TCP_flush = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9833706545968370496ull);
    vlSelf->payload_FIFO__DOT__nlen_TCP_flush = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15860922499434274258ull);
    vlSelf->payload_FIFO__DOT__rd_len_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17903571051856497606ull);
    vlSelf->payload_FIFO__DOT__seq_trk_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17560624468906420364ull);
    vlSelf->payload_FIFO__DOT__nseq_trk_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7828274462692258815ull);
    vlSelf->payload_FIFO__DOT__rd_FIFO_valid_l = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16004729768259502257ull);
    vlSelf->payload_FIFO__DOT__nrd_FIFO_valid_l = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11292018201662906149ull);
    vlSelf->payload_FIFO__DOT__naxis_r_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 89034581662323913ull);
    vlSelf->payload_FIFO__DOT__TCP_flush_l = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16063882506041458707ull);
    vlSelf->payload_FIFO__DOT__nTCP_flush_l = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13353978122910875879ull);
    vlSelf->payload_FIFO__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8704495641221592464ull);
    vlSelf->payload_FIFO__DOT__nwr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10684259656985368090ull);
    vlSelf->payload_FIFO__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5957734484518245938ull);
    vlSelf->payload_FIFO__DOT__nrd_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5902257180348420742ull);
    vlSelf->payload_FIFO__DOT__unnamedblk1__DOT__i = 0;
    VL_SCOPED_RAND_RESET_W(72, vlSelf->payload_FIFO__DOT____Vlvbound_h83587f98__0, __VscopeHash, 7447709708201742604ull);
    vlSelf->payload_FIFO__DOT____Vlvbound_h5d12e1c7__0 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13575346640163331184ull);
    vlSelf->payload_FIFO__DOT____Vlvbound_hfce51f23__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16700865802882456706ull);
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18225951476332272534ull);
    vlSelf->__Vtrigprevexpr___TOP__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5117209117380585348ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
