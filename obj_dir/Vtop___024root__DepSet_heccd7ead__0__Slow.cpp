// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    vlSelfRef.__VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    vlSelfRef.__VstlContinue = 1U;
    while (vlSelfRef.__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < vlSelfRef.__VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/top.sv", 3, "", "Settle region did not converge.");
        }
        __Vtemp_1 = ((IData)(1U) + vlSelfRef.__VstlIterCount);
        vlSelfRef.__VstlIterCount = __Vtemp_1;
        vlSelfRef.__VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            vlSelfRef.__VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    vlSelfRef.__VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (vlSelfRef.__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (vlSelfRef.__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge top.u_fifo_tx.CLK)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge top.u_fifo_tx.nRST)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge top.u_payload_fifo.CLK)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge top.u_payload_fifo.nRST)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge top.u_tcp.ISN_gen.CLK)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(negedge top.u_tcp.ISN_gen.nRST)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @(posedge top.u_tcp.inst.CLK)\n");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @(negedge top.u_tcp.inst.nRST)\n");
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @(posedge top.u_tcp.TCP_tx.CLK)\n");
    }
    if ((0x200ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @(negedge top.u_tcp.TCP_tx.nRST)\n");
    }
    if ((0x400ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @(posedge top.u_tcp.tcp_rcv.CLK)\n");
    }
    if ((0x800ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @(negedge top.u_tcp.tcp_rcv.nRST)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @(posedge top.u_tcp.tcp_flow.CLK)\n");
    }
    if ((0x2000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 13 is active: @(negedge top.u_tcp.tcp_flow.nRST)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge top.u_fifo_tx.CLK)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge top.u_fifo_tx.nRST)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge top.u_payload_fifo.CLK)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge top.u_payload_fifo.nRST)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge top.u_tcp.ISN_gen.CLK)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(negedge top.u_tcp.ISN_gen.nRST)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @(posedge top.u_tcp.inst.CLK)\n");
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @(negedge top.u_tcp.inst.nRST)\n");
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @(posedge top.u_tcp.TCP_tx.CLK)\n");
    }
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @(negedge top.u_tcp.TCP_tx.nRST)\n");
    }
    if ((0x400ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @(posedge top.u_tcp.tcp_rcv.CLK)\n");
    }
    if ((0x800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @(negedge top.u_tcp.tcp_rcv.nRST)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @(posedge top.u_tcp.tcp_flow.CLK)\n");
    }
    if ((0x2000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 13 is active: @(negedge top.u_tcp.tcp_flow.nRST)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vm_traceActivitySetAll\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
    vlSelfRef.__Vm_traceActivity[7U] = 1U;
    vlSelfRef.__Vm_traceActivity[8U] = 1U;
    vlSelfRef.__Vm_traceActivity[9U] = 1U;
    vlSelfRef.__Vm_traceActivity[0xaU] = 1U;
    vlSelfRef.__Vm_traceActivity[0xbU] = 1U;
    vlSelfRef.__Vm_traceActivity[0xcU] = 1U;
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->CLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6192783415628501865ull);
    vlSelf->nRST = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9596079045119723318ull);
    vlSelf->IP_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10454921636400644467ull);
    vlSelf->IP_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7370612069209852218ull);
    vlSelf->IP_pseuder = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2907016794571974014ull);
    vlSelf->IP_payload = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16509947563924968673ull);
    vlSelf->TCP_len = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2451078185152812590ull);
    vlSelf->IP_bytes_rcv = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10742886468500543907ull);
    vlSelf->TCP_send = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 881177396726162158ull);
    vlSelf->TCP_transmit = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6789772790240887932ull);
    vlSelf->TCP_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1680497067136754032ull);
    vlSelf->TX_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3522186512893532196ull);
    vlSelf->axis_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10901583754854957544ull);
    vlSelf->wr_FIFO_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11327851442339175407ull);
    vlSelf->len_seq = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9067084145827924886ull);
    vlSelf->soupbin_TCP_payload = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18175650338536413172ull);
    vlSelf->axis_r_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8032066648238806430ull);
    vlSelf->axis_r_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14134597143016856134ull);
    vlSelf->axis_rd_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9324982647399811729ull);
    vlSelf->TCP_stop_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10812039392004460878ull);
    vlSelf->rcv_next = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2660982951778821078ull);
    vlSelf->seq_num = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14348413887918754256ull);
    vlSelf->wr_FIFO_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8793387143990763765ull);
    vlSelf->__Vtrigprevexpr___TOP__top__u_fifo_tx____PVT__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18310885730242049520ull);
    vlSelf->__Vtrigprevexpr___TOP__top__u_fifo_tx____PVT__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15364841867724633747ull);
    vlSelf->__Vtrigprevexpr___TOP__top__u_payload_fifo____PVT__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18050482027217391673ull);
    vlSelf->__Vtrigprevexpr___TOP__top__u_payload_fifo____PVT__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 594765058125291353ull);
    vlSelf->__Vtrigprevexpr___TOP__top__u_tcp__ISN_gen____PVT__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12421716494514774711ull);
    vlSelf->__Vtrigprevexpr___TOP__top__u_tcp__ISN_gen____PVT__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18153056319669855442ull);
    vlSelf->__Vtrigprevexpr___TOP__top__u_tcp__inst____PVT__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8198558842412147504ull);
    vlSelf->__Vtrigprevexpr___TOP__top__u_tcp__inst____PVT__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5593797650292737332ull);
    vlSelf->__Vtrigprevexpr___TOP__top__u_tcp__TCP_tx____PVT__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3768607768358857928ull);
    vlSelf->__Vtrigprevexpr___TOP__top__u_tcp__TCP_tx____PVT__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17402626067805886584ull);
    vlSelf->__Vtrigprevexpr___TOP__top__u_tcp__tcp_rcv____PVT__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5960620868362923231ull);
    vlSelf->__Vtrigprevexpr___TOP__top__u_tcp__tcp_rcv____PVT__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8387579131622094602ull);
    vlSelf->__Vtrigprevexpr___TOP__top__u_tcp__tcp_flow____PVT__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4934611632636348413ull);
    vlSelf->__Vtrigprevexpr___TOP__top__u_tcp__tcp_flow____PVT__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14694248462678608355ull);
    for (int __Vi0 = 0; __Vi0 < 13; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
