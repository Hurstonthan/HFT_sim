// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTCP_flow_ctrl.h for the primary calling header

#include "VTCP_flow_ctrl__pch.h"
#include "VTCP_flow_ctrl___024root.h"

VL_ATTR_COLD void VTCP_flow_ctrl___024root___eval_triggers__stl(VTCP_flow_ctrl___024root* vlSelf);
VL_ATTR_COLD void VTCP_flow_ctrl___024root___eval_stl(VTCP_flow_ctrl___024root* vlSelf);

VL_ATTR_COLD bool VTCP_flow_ctrl___024root___eval_phase__stl(VTCP_flow_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTCP_flow_ctrl___024root___eval_phase__stl\n"); );
    VTCP_flow_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VTCP_flow_ctrl___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VTCP_flow_ctrl___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTCP_flow_ctrl___024root___dump_triggers__ico(VTCP_flow_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTCP_flow_ctrl___024root___dump_triggers__ico\n"); );
    VTCP_flow_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void VTCP_flow_ctrl___024root___dump_triggers__act(VTCP_flow_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTCP_flow_ctrl___024root___dump_triggers__act\n"); );
    VTCP_flow_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void VTCP_flow_ctrl___024root___dump_triggers__nba(VTCP_flow_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTCP_flow_ctrl___024root___dump_triggers__nba\n"); );
    VTCP_flow_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void VTCP_flow_ctrl___024root____Vm_traceActivitySetAll(VTCP_flow_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTCP_flow_ctrl___024root____Vm_traceActivitySetAll\n"); );
    VTCP_flow_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void VTCP_flow_ctrl___024root___ctor_var_reset(VTCP_flow_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTCP_flow_ctrl___024root___ctor_var_reset\n"); );
    VTCP_flow_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->CLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6192783415628501865ull);
    vlSelf->nRST = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9596079045119723318ull);
    vlSelf->TCP_control_rx = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17334492037900634746ull);
    vlSelf->seq_num_rx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 364544424723261665ull);
    vlSelf->ACK_rx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14319586186662147529ull);
    vlSelf->offset_rx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3236647185777849343ull);
    vlSelf->window_size_rx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14451436454142830211ull);
    vlSelf->checksum_rx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14844497424139250528ull);
    vlSelf->urgent_pointer_rx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6361226637399478120ull);
    vlSelf->rcv_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1176143556994983169ull);
    vlSelf->TCP_tx_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8269560893833140337ull);
    vlSelf->seq_up = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 796946559863942825ull);
    vlSelf->TCP_control_tx = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1155514922710194501ull);
    vlSelf->seq_num_tx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15452675836633821188ull);
    vlSelf->ACK_tx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13840256559930938490ull);
    vlSelf->offset_tx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10448814117025191111ull);
    vlSelf->window_size_tx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12658951007252711963ull);
    vlSelf->checksum_tx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6497913269903047936ull);
    vlSelf->urgent_pointer_tx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2381669506756488056ull);
    vlSelf->end_ss = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9419734627887829661ull);
    vlSelf->TCP_stop_flg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4843867744612491753ull);
    vlSelf->full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6695099141381822181ull);
    vlSelf->timeout_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17326411071393352280ull);
    vlSelf->hand_shake_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13814527802426099546ull);
    vlSelf->ISN_num = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1935430307898601140ull);
    vlSelf->bytes_sent = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15316022159330874346ull);
    vlSelf->bytes_abt_sent = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14892826253315460437ull);
    vlSelf->payload_len_rx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2219682286286776853ull);
    vlSelf->TCP_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1680497067136754032ull);
    vlSelf->rcv_next_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16332856309101195695ull);
    vlSelf->seq_num_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17778731020150437419ull);
    vlSelf->seq_rx_FIFO_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1332892325987693968ull);
    vlSelf->TCP_bytes_trk = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15496913196332461671ull);
    vlSelf->wr_FIFO_offset = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7116352258542374170ull);
    vlSelf->wr_FIFO_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1454357461022193599ull);
    vlSelf->rd_FIFO_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4311993884634595022ull);
    vlSelf->wr_FIFO_ptr = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 324534551891662112ull);
    vlSelf->rd_FIFO_ptr = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1541493805853970047ull);
    vlSelf->wr_FIFO_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11327851442339175407ull);
    vlSelf->rd_FIFO_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6363420242050000687ull);
    vlSelf->nw_segment = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10812341697392716583ull);
    vlSelf->TCP_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2204969768331049030ull);
    vlSelf->rd_FIFO_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 615369904805283052ull);
    vlSelf->TCP_flow_ctrl__DOT__case_bug = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1328230178483783888ull);
    vlSelf->TCP_flow_ctrl__DOT__case_bug_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3741021932458911532ull);
    vlSelf->TCP_flow_ctrl__DOT__state = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8673952958897783744ull);
    vlSelf->TCP_flow_ctrl__DOT__nstate = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 918280339271349523ull);
    vlSelf->TCP_flow_ctrl__DOT__tx_pkg_type = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3668174390947400217ull);
    vlSelf->TCP_flow_ctrl__DOT__ack_num = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 18222501176050902894ull);
    vlSelf->TCP_flow_ctrl__DOT__nack_num = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 897742327230154256ull);
    vlSelf->TCP_flow_ctrl__DOT__seq_num = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 11900015903514223613ull);
    vlSelf->TCP_flow_ctrl__DOT__nseq_num = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 13051202127629104820ull);
    vlSelf->TCP_flow_ctrl__DOT__window_size = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2378569007479367645ull);
    vlSelf->TCP_flow_ctrl__DOT__nwindow_size = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4236821241873095759ull);
    vlSelf->TCP_flow_ctrl__DOT__wnd_allow = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4520401778474041552ull);
    VL_SCOPED_RAND_RESET_W(1296, vlSelf->TCP_flow_ctrl__DOT__nTCP_order, __VscopeHash, 859339631474503373ull);
    VL_SCOPED_RAND_RESET_W(1296, vlSelf->TCP_flow_ctrl__DOT__TCP_order, __VscopeHash, 5640780328140271064ull);
    vlSelf->TCP_flow_ctrl__DOT__rcv_next = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12503769942012331782ull);
    vlSelf->TCP_flow_ctrl__DOT__nrcv_next = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4693058358145717600ull);
    vlSelf->TCP_flow_ctrl__DOT__free_idx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2027081783954977380ull);
    vlSelf->TCP_flow_ctrl__DOT__match_idx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5415480446689569785ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->TCP_flow_ctrl__DOT__seq_vec, __VscopeHash, 10956883565288886546ull);
    vlSelf->TCP_flow_ctrl__DOT__free_mask = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4324932700703805582ull);
    vlSelf->TCP_flow_ctrl__DOT__match_found = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7383504201967130432ull);
    vlSelf->TCP_flow_ctrl__DOT__match_mask = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8941120263487177552ull);
    vlSelf->TCP_flow_ctrl__DOT__overlap_mask = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5305496307156497887ull);
    vlSelf->TCP_flow_ctrl__DOT__flush_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14504793611699877868ull);
    vlSelf->TCP_flow_ctrl__DOT__nflush_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 221422577526652481ull);
    vlSelf->TCP_flow_ctrl__DOT__len_flush_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3193709217931241733ull);
    vlSelf->TCP_flow_ctrl__DOT__nlen_flush_ptr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9177921984239848556ull);
    vlSelf->TCP_flow_ctrl__DOT__seq_rx_trk = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14619276684540588790ull);
    vlSelf->TCP_flow_ctrl__DOT__nseq_rx_trk = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14121619451336605489ull);
    vlSelf->TCP_flow_ctrl__DOT__bytes_drop = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8448854992525801646ull);
    vlSelf->TCP_flow_ctrl__DOT__bytes_left = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17990096416086525521ull);
    vlSelf->TCP_flow_ctrl__DOT__flush_list = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12564317636229409117ull);
    vlSelf->TCP_flow_ctrl__DOT__nflush_list = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7273952910864599895ull);
    vlSelf->TCP_flow_ctrl__DOT____Vlvbound_hde8f6f4b__0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17120970275103753062ull);
    vlSelf->TCP_flow_ctrl__DOT____Vlvbound_h679159bf__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7402266821586844948ull);
    vlSelf->TCP_flow_ctrl__DOT____Vlvbound_h6a649313__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13776522655294578847ull);
    vlSelf->TCP_flow_ctrl__DOT____Vlvbound_h283b1f05__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13420068925834091120ull);
    vlSelf->TCP_flow_ctrl__DOT____Vlvbound_hac5f4658__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14942440763075708114ull);
    vlSelf->TCP_flow_ctrl__DOT____Vlvbound_hde8f6f4b__1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17803485959753406380ull);
    vlSelf->TCP_flow_ctrl__DOT____Vlvbound_h679159bf__1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15254185228923937271ull);
    vlSelf->TCP_flow_ctrl__DOT____Vlvbound_h6a649313__1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13502573925664260403ull);
    vlSelf->TCP_flow_ctrl__DOT____Vlvbound_h283b1f05__1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4469797499191930392ull);
    vlSelf->TCP_flow_ctrl__DOT____Vlvbound_hac5f4658__1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5498758881411211949ull);
    vlSelf->TCP_flow_ctrl__DOT____Vlvbound_h1381218e__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6583824266364728867ull);
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18225951476332272534ull);
    vlSelf->__Vtrigprevexpr___TOP__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5117209117380585348ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
