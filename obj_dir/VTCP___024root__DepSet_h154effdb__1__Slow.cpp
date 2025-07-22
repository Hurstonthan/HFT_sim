// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTCP.h for the primary calling header

#include "VTCP__pch.h"
#include "VTCP___024root.h"

VL_ATTR_COLD void VTCP___024root___eval_triggers__stl(VTCP___024root* vlSelf);
VL_ATTR_COLD void VTCP___024root___eval_stl(VTCP___024root* vlSelf);

VL_ATTR_COLD bool VTCP___024root___eval_phase__stl(VTCP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTCP___024root___eval_phase__stl\n"); );
    VTCP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VTCP___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VTCP___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTCP___024root___dump_triggers__ico(VTCP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTCP___024root___dump_triggers__ico\n"); );
    VTCP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void VTCP___024root___dump_triggers__act(VTCP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTCP___024root___dump_triggers__act\n"); );
    VTCP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge TCP.tcp_flow.CLK)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge TCP.tcp_flow.nRST)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge CLK)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge nRST)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTCP___024root___dump_triggers__nba(VTCP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTCP___024root___dump_triggers__nba\n"); );
    VTCP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge TCP.tcp_flow.CLK)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge TCP.tcp_flow.nRST)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge CLK)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge nRST)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTCP___024root____Vm_traceActivitySetAll(VTCP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTCP___024root____Vm_traceActivitySetAll\n"); );
    VTCP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void VTCP___024root___ctor_var_reset(VTCP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTCP___024root___ctor_var_reset\n"); );
    VTCP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->CLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6192783415628501865ull);
    vlSelf->nRST = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9596079045119723318ull);
    vlSelf->TX_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3522186512893532196ull);
    vlSelf->IP_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10454921636400644467ull);
    vlSelf->IP_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7370612069209852218ull);
    vlSelf->IP_pseuder = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2907016794571974014ull);
    vlSelf->IP_payload = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16509947563924968673ull);
    vlSelf->TCP_len = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2451078185152812590ull);
    vlSelf->IP_bytes_rcv = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10742886468500543907ull);
    vlSelf->nw_segment = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10812341697392716583ull);
    vlSelf->axis_t_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3363515403628601574ull);
    vlSelf->TCP_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2204969768331049030ull);
    vlSelf->axis_data_rx = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 100764171667573631ull);
    vlSelf->handshake_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18365787243460844200ull);
    vlSelf->seq_rcv_start = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3374705689665004837ull);
    vlSelf->wr_FIFO_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11327851442339175407ull);
    vlSelf->wr_FIFO_offset = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7116352258542374170ull);
    vlSelf->rd_FIFO_valid_rcv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4700519793546433241ull);
    vlSelf->rd_FIFO_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1541493805853970047ull);
    vlSelf->rd_FIFO_len = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4311993884634595022ull);
    vlSelf->wr_ptr_out = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14280824392925468497ull);
    vlSelf->wr_FIFO_len = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1454357461022193599ull);
    vlSelf->rd_FIFO_en_rcv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4617402298794502370ull);
    vlSelf->seq_rx_FIFO_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1332892325987693968ull);
    vlSelf->full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6695099141381822181ull);
    vlSelf->ACK_num = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8536444321650387476ull);
    vlSelf->ACK_rcv_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3569977124790002748ull);
    vlSelf->out_order_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9025304112997670359ull);
    vlSelf->TCP_stop_flg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4843867744612491753ull);
    vlSelf->end_ss = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9419734627887829661ull);
    vlSelf->rd_FIFO_payload = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6002881770607720665ull);
    vlSelf->rd_FIFO_valid_tx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18178011142534342053ull);
    vlSelf->rd_FIFO_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10855001204654443987ull);
    vlSelf->bytes_abt_sent = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14892826253315460437ull);
    vlSelf->rd_FIFO_en_tx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11440818572813960739ull);
    vlSelf->TCP_send = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 881177396726162158ull);
    vlSelf->TCP_transmit = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6789772790240887932ull);
    vlSelf->re_trans = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11615218911393243005ull);
    vlSelf->checksum_re_trans = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13421358010320226515ull);
    vlSelf->rcv_next = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2660982951778821078ull);
    vlSelf->seq_num = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14348413887918754256ull);
    vlSelf->TCP__DOT__rcv_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9045596464337677783ull);
    vlSelf->TCP__DOT__TCP_control_rx = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9757076286282947474ull);
    vlSelf->TCP__DOT__seq_num_rx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 223867333529008298ull);
    vlSelf->TCP__DOT__ACK_rx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7814323136779178862ull);
    vlSelf->TCP__DOT__offset_rx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2966871835568169304ull);
    vlSelf->TCP__DOT__window_size_rx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3433114519493856006ull);
    vlSelf->TCP__DOT__checksum_rx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12604100061624798124ull);
    vlSelf->TCP__DOT__urgent_pointer_rx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6558991908866680779ull);
    vlSelf->TCP__DOT__payload_len_rx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16362204311465108213ull);
    vlSelf->TCP__DOT__seq_up = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18038768302961544816ull);
    vlSelf->TCP__DOT__seq_num_tx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13142383336399298978ull);
    vlSelf->TCP__DOT__ACK_tx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17027062420265303934ull);
    vlSelf->TCP__DOT__ISN_num = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13167593506297261858ull);
    vlSelf->TCP__DOT__bytes_sent = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12407513427564787024ull);
    vlSelf->TCP__DOT____Vcellout__tcp_flow__rd_FIFO_ptr = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16097666570869193586ull);
    vlSelf->TCP__DOT____Vcellout__tcp_flow__rd_FIFO_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4433813102961651576ull);
    vlSelf->TCP__DOT____Vcellout__tcp_flow__seq_rcv_str = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11304842431580299017ull);
    vlSelf->TCP__DOT____Vcellout__inst__TCP_checksum_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1158853858906502950ull);
    vlSelf->TCP__DOT__timeout_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5813177408459625403ull);
    vlSelf->TCP__DOT__hand_shake_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1292116139342812486ull);
    vlSelf->TCP__DOT__wr_FIFO_ptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17722989067988558283ull);
    vlSelf->TCP__DOT__rd_FIFO_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2234554548537792571ull);
    vlSelf->TCP__DOT__axis_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11100883163913590871ull);
    vlSelf->TCP__DOT__tcp_flow__DOT__CLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6784765566015191437ull);
    vlSelf->TCP__DOT__tcp_flow__DOT__nRST = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7783998452630449140ull);
    vlSelf->TCP__DOT__tcp_flow__DOT__case_bug = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12193414978561682080ull);
    vlSelf->TCP__DOT__tcp_flow__DOT__case_bug_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8586431500463931343ull);
    vlSelf->TCP__DOT__tcp_flow__DOT__state = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4659316145042486516ull);
    vlSelf->TCP__DOT__tcp_flow__DOT__nstate = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7971795960787403738ull);
    vlSelf->TCP__DOT__tcp_flow__DOT__tx_pkg_type = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8914842749925965227ull);
    vlSelf->TCP__DOT__tcp_flow__DOT__ack_num = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 16880276019509440227ull);
    vlSelf->TCP__DOT__tcp_flow__DOT__nack_num = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 451785435194138231ull);
    vlSelf->TCP__DOT__tcp_flow__DOT__seq_num = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 3186232054522405227ull);
    vlSelf->TCP__DOT__tcp_flow__DOT__nseq_num = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 16762570246514452281ull);
    vlSelf->TCP__DOT__tcp_flow__DOT__window_size = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2310036149076434295ull);
    vlSelf->TCP__DOT__tcp_flow__DOT__nwindow_size = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1825850616389625374ull);
    vlSelf->TCP__DOT__tcp_flow__DOT__wnd_allow = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2406310904009696406ull);
    vlSelf->TCP__DOT__tcp_flow__DOT__nhand_shake_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4284649378971911954ull);
    vlSelf->TCP__DOT__tcp_flow__DOT__nseq_rcv_str = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11113443377605763267ull);
    VL_SCOPED_RAND_RESET_W(1296, vlSelf->TCP__DOT__tcp_flow__DOT__nTCP_order, __VscopeHash, 7853084725057935799ull);
    VL_SCOPED_RAND_RESET_W(1296, vlSelf->TCP__DOT__tcp_flow__DOT__TCP_order, __VscopeHash, 14657012034689537814ull);
    vlSelf->TCP__DOT__tcp_flow__DOT__rcv_next = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4720364644786444588ull);
    vlSelf->TCP__DOT__tcp_flow__DOT__nrcv_next = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 626777152728348758ull);
    vlSelf->TCP__DOT__tcp_flow__DOT__free_idx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17045708746739439707ull);
    vlSelf->TCP__DOT__tcp_flow__DOT__match_idx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16497318576998584347ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->TCP__DOT__tcp_flow__DOT__seq_vec, __VscopeHash, 2736804627335632638ull);
    vlSelf->TCP__DOT__tcp_flow__DOT__free_mask = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8844793275995170250ull);
    vlSelf->TCP__DOT__tcp_flow__DOT__match_found = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5223143261905756524ull);
    vlSelf->TCP__DOT__tcp_flow__DOT__match_mask = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7372834658609478754ull);
    vlSelf->TCP__DOT__tcp_flow__DOT__overlap_mask = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2887464311075656776ull);
    vlSelf->TCP__DOT__tcp_flow__DOT__flush_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15061949458105501433ull);
    vlSelf->TCP__DOT__tcp_flow__DOT__nflush_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15209843015723973541ull);
    vlSelf->TCP__DOT__tcp_flow__DOT__len_flush_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9523111871300275721ull);
    vlSelf->TCP__DOT__tcp_flow__DOT__nlen_flush_ptr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2652676071024855039ull);
    vlSelf->TCP__DOT__tcp_flow__DOT__seq_rx_trk = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5091024840754712763ull);
    vlSelf->TCP__DOT__tcp_flow__DOT__nseq_rx_trk = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13229568291307662727ull);
    vlSelf->TCP__DOT__tcp_flow__DOT__bytes_drop = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2041999909146475387ull);
    vlSelf->TCP__DOT__tcp_flow__DOT__bytes_left = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12631875189621644149ull);
    vlSelf->TCP__DOT__tcp_flow__DOT__flush_list = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15094383634193723322ull);
    vlSelf->TCP__DOT__tcp_flow__DOT__nflush_list = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2030175187222670855ull);
    vlSelf->TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14142101690360021821ull);
    vlSelf->TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12523218290642787667ull);
    vlSelf->TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14661979217100718931ull);
    vlSelf->TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10891946136203614593ull);
    vlSelf->TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8144619017328895005ull);
    vlSelf->TCP__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2657864518185002954ull);
    vlSelf->TCP__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2773905234823059024ull);
    vlSelf->TCP__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3569586859772750734ull);
    vlSelf->TCP__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13096161936821505960ull);
    vlSelf->TCP__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8080106324342426303ull);
    vlSelf->TCP__DOT__tcp_flow__DOT____Vlvbound_h9a2cf0a4__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5884673517067627722ull);
    vlSelf->TCP__DOT__tcp_rcv__DOT__nTCP_control_rx = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7505998411702183113ull);
    vlSelf->TCP__DOT__tcp_rcv__DOT__nseq_num_rx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11455491625079746530ull);
    vlSelf->TCP__DOT__tcp_rcv__DOT__nACK_rx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10296180611218234923ull);
    vlSelf->TCP__DOT__tcp_rcv__DOT__noffset_rx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7461018080752003176ull);
    vlSelf->TCP__DOT__tcp_rcv__DOT__nwindow_size_rx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4593461592503430723ull);
    vlSelf->TCP__DOT__tcp_rcv__DOT__nchecksum_rx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15224859492019251002ull);
    vlSelf->TCP__DOT__tcp_rcv__DOT__nurgent_pointer_rx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2467218374926955575ull);
    vlSelf->TCP__DOT__tcp_rcv__DOT__bytes_trk = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5689464200880910290ull);
    vlSelf->TCP__DOT__tcp_rcv__DOT__nbytes_trk = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16282947586817934669ull);
    vlSelf->TCP__DOT__tcp_rcv__DOT__checksum_in = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6194789823631093613ull);
    vlSelf->TCP__DOT__tcp_rcv__DOT__TCP_checksum = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 16793380624730437543ull);
    vlSelf->TCP__DOT__tcp_rcv__DOT__nTCP_checksum = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 583793279012569931ull);
    vlSelf->TCP__DOT__tcp_rcv__DOT__TCP_data_dl = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7834133977303232420ull);
    vlSelf->TCP__DOT__tcp_rcv__DOT__nTCP_data_dl = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7203982758813213585ull);
    vlSelf->TCP__DOT__tcp_rcv__DOT__nTCP_payload_rx = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1941449110615606670ull);
    vlSelf->TCP__DOT__tcp_rcv__DOT__nTCP_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1133087187785577787ull);
    vlSelf->TCP__DOT__tcp_rcv__DOT__nrcv_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 892227555872567511ull);
    vlSelf->TCP__DOT__tcp_rcv__DOT__checksum_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2644477518714655626ull);
    vlSelf->TCP__DOT__tcp_rcv__DOT__nchecksum_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10164733910362197633ull);
    vlSelf->TCP__DOT__tcp_rcv__DOT__n_nw_segment = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12625612912100427305ull);
    vlSelf->TCP__DOT__tcp_rcv__DOT__nTCP_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7373760540052697103ull);
    vlSelf->TCP__DOT__tcp_rcv__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5128352850114496185ull);
    vlSelf->TCP__DOT__tcp_rcv__DOT__nstate = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10026587226932310924ull);
    vlSelf->TCP__DOT__TCP_tx__DOT__TCP_tx_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15667205935729781122ull);
    vlSelf->TCP__DOT__TCP_tx__DOT__TCP_tx_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6693199365414653241ull);
    vlSelf->TCP__DOT__TCP_tx__DOT__nbytes_sent = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5770754515013570817ull);
    vlSelf->TCP__DOT__TCP_tx__DOT__TCP_checksum = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 3452343345368738600ull);
    vlSelf->TCP__DOT__TCP_tx__DOT__nTCP_checksum = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 15929258074622963190ull);
    vlSelf->TCP__DOT__TCP_tx__DOT__valid_checksum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11928958544208634175ull);
    vlSelf->TCP__DOT__TCP_tx__DOT__state = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6355597206562716308ull);
    vlSelf->TCP__DOT__TCP_tx__DOT__nstate = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8084013551485449556ull);
    vlSelf->TCP__DOT__TCP_tx__DOT__nTCP_transmit = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17152348781159091198ull);
    vlSelf->TCP__DOT__TCP_tx__DOT__nTCP_tx_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2330724394183948211ull);
    vlSelf->TCP__DOT__TCP_tx__DOT__nTCP_tx_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7738765641292774924ull);
    vlSelf->TCP__DOT__TCP_tx__DOT__nseq_up = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7368071057002119138ull);
    vlSelf->TCP__DOT__ISN_gen__DOT__counter = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1987154240417976886ull);
    vlSelf->TCP__DOT__inst__DOT__nTCP_checksum_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16538371182108717129ull);
    vlSelf->TCP__DOT__inst__DOT__TCP_checksum = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 14989951628750879372ull);
    vlSelf->TCP__DOT__inst__DOT__nTCP_checksum = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 11906563024327158918ull);
    vlSelf->TCP__DOT__inst__DOT__TCP_checksum_send = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 1421065443351077691ull);
    vlSelf->TCP__DOT__inst__DOT__nTCP_checksum_send = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 452896795035342570ull);
    vlSelf->TCP__DOT__inst__DOT__temp = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 3480092539925906968ull);
    vlSelf->TCP__DOT__inst__DOT__temp1 = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 1042068985424804600ull);
    vlSelf->TCP__DOT__inst__DOT__up_send = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16362703162303899645ull);
    vlSelf->__Vtrigprevexpr___TOP__TCP__DOT__tcp_flow__DOT__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11797883812306189440ull);
    vlSelf->__Vtrigprevexpr___TOP__TCP__DOT__tcp_flow__DOT__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8759181613572488642ull);
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18225951476332272534ull);
    vlSelf->__Vtrigprevexpr___TOP__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5117209117380585348ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
