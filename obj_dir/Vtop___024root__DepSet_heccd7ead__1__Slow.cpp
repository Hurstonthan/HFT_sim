// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TCP_stop_flag = vlSelfRef.top__DOT__TCP_stop_flg_int;
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
    if (vlSelfRef.top__DOT__wr_pfifo_en_int) {
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
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
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
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge top.u_tcp.tcp_flow.CLK)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge top.u_tcp.tcp_flow.nRST)\n");
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
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge top.u_tcp.tcp_flow.CLK)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge top.u_tcp.tcp_flow.nRST)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge CLK)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge nRST)\n");
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
    vlSelf->top__DOT__nw_segment = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17132881172733111452ull);
    vlSelf->top__DOT__axis_t_last_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 481648770091417519ull);
    vlSelf->top__DOT__TCP_flush_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11707427675207803420ull);
    vlSelf->top__DOT__axis_data_rx_int = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1970607308504971884ull);
    vlSelf->top__DOT__handshake_done_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15505723021236472740ull);
    vlSelf->top__DOT__seq_rcv_start_int = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1747088965743893719ull);
    vlSelf->top__DOT__wr_pfifo_en_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3365131914084235863ull);
    vlSelf->top__DOT__wr_pfifo_offset_int = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13985188995271150662ull);
    vlSelf->top__DOT__wr_ptr_out_int = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18224861354681059205ull);
    vlSelf->top__DOT__rd_pfifo_valid_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8061517548518629461ull);
    vlSelf->top__DOT__rd_ftx_en_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17285316131690264792ull);
    vlSelf->top__DOT__rd_ftx_payload_int = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7652992831610138603ull);
    vlSelf->top__DOT__rd_ftx_valid_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14410112259390539219ull);
    vlSelf->top__DOT__rd_ftx_last_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13602282158775069634ull);
    vlSelf->top__DOT__bytes_abt_sent_int = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4006890583095916905ull);
    vlSelf->top__DOT__ACK_rcv_flag_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15479625416779135750ull);
    vlSelf->top__DOT__out_order_req_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7506850588264524821ull);
    vlSelf->top__DOT__TCP_stop_flg_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10835944324406360239ull);
    vlSelf->top__DOT__end_ss_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 678630115058302362ull);
    vlSelf->top__DOT__checksum_re_trans_int = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5065176120216164436ull);
    vlSelf->top__DOT__seq_up = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1154436396157742268ull);
    vlSelf->top__DOT__seq_num_tx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9734337739723826960ull);
    vlSelf->top__DOT__checksum_TX = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10653787240542459892ull);
    vlSelf->top__DOT__wr_TX_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15943947269278108737ull);
    vlSelf->top__DOT__u_tcp__DOT__rcv_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6082296260790079308ull);
    vlSelf->top__DOT__u_tcp__DOT__TCP_control_rx = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7660862312410063543ull);
    vlSelf->top__DOT__u_tcp__DOT__seq_num_rx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8380246014771306999ull);
    vlSelf->top__DOT__u_tcp__DOT__ACK_rx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1397083748002721221ull);
    vlSelf->top__DOT__u_tcp__DOT__offset_rx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6509764701452510663ull);
    vlSelf->top__DOT__u_tcp__DOT__window_size_rx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11496930822872355203ull);
    vlSelf->top__DOT__u_tcp__DOT__checksum_rx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8179587059654485472ull);
    vlSelf->top__DOT__u_tcp__DOT__urgent_pointer_rx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9978597338586473996ull);
    vlSelf->top__DOT__u_tcp__DOT__payload_len_rx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1179881895830049955ull);
    vlSelf->top__DOT__u_tcp__DOT__seq_up = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3846100472968619884ull);
    vlSelf->top__DOT__u_tcp__DOT__seq_num_tx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18200715594793032400ull);
    vlSelf->top__DOT__u_tcp__DOT__ACK_tx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8826403730942637847ull);
    vlSelf->top__DOT__u_tcp__DOT__ISN_num = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12721445525006606301ull);
    vlSelf->top__DOT__u_tcp__DOT__bytes_sent = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7982765206052020714ull);
    vlSelf->top__DOT__u_tcp__DOT____Vcellout__tcp_flow__rd_FIFO_ptr = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2983738519750066333ull);
    vlSelf->top__DOT__u_tcp__DOT____Vcellout__tcp_flow__rd_FIFO_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9883755730662300649ull);
    vlSelf->top__DOT__u_tcp__DOT____Vcellout__tcp_flow__seq_rcv_str = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5380009567459056000ull);
    vlSelf->top__DOT__u_tcp__DOT____Vcellout__inst__TCP_checksum_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13063629480079744054ull);
    vlSelf->top__DOT__u_tcp__DOT__timeout_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13790116598397016480ull);
    vlSelf->top__DOT__u_tcp__DOT__hand_shake_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 485631435293795525ull);
    vlSelf->top__DOT__u_tcp__DOT__wr_FIFO_ptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1781248174050783068ull);
    vlSelf->top__DOT__u_tcp__DOT__rd_FIFO_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8126972726563952509ull);
    vlSelf->top__DOT__u_tcp__DOT__axis_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13455224554635974487ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_flow__DOT__CLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15382754458782335511ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_flow__DOT__nRST = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3622099166345178469ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16665438160197884890ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_flow__DOT__case_bug_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13260081238219446958ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_flow__DOT__state = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11087024570779548969ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_flow__DOT__nstate = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17198606489259957298ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_flow__DOT__tx_pkg_type = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11207756260608085360ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_flow__DOT__ack_num = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 10491171346455548249ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_flow__DOT__nack_num = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 14200091592791369188ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_num = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 4958895204031509565ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_flow__DOT__nseq_num = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 13382280821427580147ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_flow__DOT__window_size = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5039014882817982816ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_flow__DOT__nwindow_size = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11382812095031764868ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_flow__DOT__wnd_allow = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17858703762176422832ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_flow__DOT__nhand_shake_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1770280561977294466ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_flow__DOT__nseq_rcv_str = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5291819638299033334ull);
    VL_SCOPED_RAND_RESET_W(1296, vlSelf->top__DOT__u_tcp__DOT__tcp_flow__DOT__nTCP_order, __VscopeHash, 2680107900432589893ull);
    VL_SCOPED_RAND_RESET_W(1296, vlSelf->top__DOT__u_tcp__DOT__tcp_flow__DOT__TCP_order, __VscopeHash, 13660821578732298753ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_flow__DOT__rcv_next = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3966540248643694137ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_flow__DOT__nrcv_next = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5905376177379696418ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_flow__DOT__free_idx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13336618436932211039ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_flow__DOT__match_idx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14638754969391980632ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_vec, __VscopeHash, 13507017703511006856ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_flow__DOT__free_mask = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6023530935485746919ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_flow__DOT__match_found = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9497297242969444493ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_flow__DOT__match_mask = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3715532303255535389ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_flow__DOT__overlap_mask = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10411659635451398639ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17934973816090699895ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3456131828751219164ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_flow__DOT__len_flush_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6757914747785715813ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_flow__DOT__nlen_flush_ptr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2798081129993722947ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_flow__DOT__seq_rx_trk = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1941829389850164464ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_flow__DOT__nseq_rx_trk = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8281822389364456844ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_drop = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15335252007755966963ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_flow__DOT__bytes_left = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15140803663875983419ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_flow__DOT__flush_list = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11661206908777437046ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_flow__DOT__nflush_list = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9566527655578219852ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12850610089514978829ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8286474762607118142ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13563844159869103562ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2563002114278941618ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3670041201811689726ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h70c14363__1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2554531034803674434ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_hff0b8934__1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3921783865873818778ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h02920f5e__1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11295989331911431857ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h3e2cc1ea__1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16350097510735962767ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h0edd9a8a__1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7280706431731129440ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_flow__DOT____Vlvbound_h9a2cf0a4__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2092097778620595085ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_rcv__DOT__nTCP_control_rx = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13056929542389987937ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_rcv__DOT__nseq_num_rx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15973769018751872348ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_rcv__DOT__nACK_rx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2947279924276876248ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_rcv__DOT__noffset_rx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14709039924474891799ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_rcv__DOT__nwindow_size_rx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11108387359626779056ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_rcv__DOT__nchecksum_rx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14958318488498763239ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_rcv__DOT__nurgent_pointer_rx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14197617046577490095ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_rcv__DOT__bytes_trk = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4608478860815199958ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_rcv__DOT__nbytes_trk = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13931132178860739425ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_rcv__DOT__checksum_in = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4383867439382302265ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_rcv__DOT__TCP_checksum = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 1722590562120094090ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_rcv__DOT__nTCP_checksum = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 15446512645980394689ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_rcv__DOT__TCP_data_dl = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8332960554275827519ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_rcv__DOT__nTCP_data_dl = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1941880465434329953ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_rcv__DOT__nTCP_payload_rx = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18255097460774120466ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_rcv__DOT__nTCP_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1799187362088890176ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_rcv__DOT__nrcv_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11782768532052388577ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_rcv__DOT__checksum_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15952086698045958389ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_rcv__DOT__nchecksum_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9053843006194358606ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_rcv__DOT__n_nw_segment = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12182396778752165898ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_rcv__DOT__nTCP_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 342007179817277930ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_rcv__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13874725618623963631ull);
    vlSelf->top__DOT__u_tcp__DOT__tcp_rcv__DOT__nstate = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4488901682227914398ull);
    vlSelf->top__DOT__u_tcp__DOT__TCP_tx__DOT__TCP_tx_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15979657602526207120ull);
    vlSelf->top__DOT__u_tcp__DOT__TCP_tx__DOT__TCP_tx_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14417867073115360082ull);
    vlSelf->top__DOT__u_tcp__DOT__TCP_tx__DOT__nbytes_sent = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 485743264544271046ull);
    vlSelf->top__DOT__u_tcp__DOT__TCP_tx__DOT__TCP_checksum = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 15679021182047536069ull);
    vlSelf->top__DOT__u_tcp__DOT__TCP_tx__DOT__nTCP_checksum = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 8312102130510898026ull);
    vlSelf->top__DOT__u_tcp__DOT__TCP_tx__DOT__valid_checksum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15033878208020316550ull);
    vlSelf->top__DOT__u_tcp__DOT__TCP_tx__DOT__state = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8325205035671725127ull);
    vlSelf->top__DOT__u_tcp__DOT__TCP_tx__DOT__nstate = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9401689697460480492ull);
    vlSelf->top__DOT__u_tcp__DOT__TCP_tx__DOT__nTCP_transmit = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16421393166515026536ull);
    vlSelf->top__DOT__u_tcp__DOT__TCP_tx__DOT__nTCP_tx_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16174777761111396542ull);
    vlSelf->top__DOT__u_tcp__DOT__TCP_tx__DOT__nTCP_tx_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4032740421451705977ull);
    vlSelf->top__DOT__u_tcp__DOT__TCP_tx__DOT__nseq_up = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13045613487789245634ull);
    vlSelf->top__DOT__u_tcp__DOT__ISN_gen__DOT__counter = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13663614426923886824ull);
    vlSelf->top__DOT__u_tcp__DOT__inst__DOT__nTCP_checksum_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4184577103149242806ull);
    vlSelf->top__DOT__u_tcp__DOT__inst__DOT__TCP_checksum = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 16885720050639104428ull);
    vlSelf->top__DOT__u_tcp__DOT__inst__DOT__nTCP_checksum = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 11865854270619850795ull);
    vlSelf->top__DOT__u_tcp__DOT__inst__DOT__TCP_checksum_send = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 2713110838144083706ull);
    vlSelf->top__DOT__u_tcp__DOT__inst__DOT__nTCP_checksum_send = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 2016565516922960036ull);
    vlSelf->top__DOT__u_tcp__DOT__inst__DOT__temp = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 3429840249176451989ull);
    vlSelf->top__DOT__u_tcp__DOT__inst__DOT__temp1 = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 7249985714607007885ull);
    vlSelf->top__DOT__u_tcp__DOT__inst__DOT__up_send = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11916232294475724159ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(72, vlSelf->top__DOT__u_payload_fifo__DOT__TCP_FIFO[__Vi0], __VscopeHash, 8331597694796904834ull);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(72, vlSelf->top__DOT__u_payload_fifo__DOT__nTCP_FIFO[__Vi0], __VscopeHash, 7722810931184010683ull);
    }
    VL_SCOPED_RAND_RESET_W(72, vlSelf->top__DOT__u_payload_fifo__DOT__fifo_entry_rd, __VscopeHash, 1251428509837208541ull);
    vlSelf->top__DOT__u_payload_fifo__DOT__flush_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8350755689407666673ull);
    vlSelf->top__DOT__u_payload_fifo__DOT__nflush_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10440924934856857543ull);
    vlSelf->top__DOT__u_payload_fifo__DOT__len_TCP_flush = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12898706345628755412ull);
    vlSelf->top__DOT__u_payload_fifo__DOT__nlen_TCP_flush = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9991212709870276294ull);
    vlSelf->top__DOT__u_payload_fifo__DOT__rd_len_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8335667228276372869ull);
    vlSelf->top__DOT__u_payload_fifo__DOT__seq_trk_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11313017774859689320ull);
    vlSelf->top__DOT__u_payload_fifo__DOT__nseq_trk_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13741117608802307730ull);
    vlSelf->top__DOT__u_payload_fifo__DOT__rd_FIFO_valid_l = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15947189241498800244ull);
    vlSelf->top__DOT__u_payload_fifo__DOT__nrd_FIFO_valid_l = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6624044930105210859ull);
    vlSelf->top__DOT__u_payload_fifo__DOT__naxis_r_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6258938623619471336ull);
    vlSelf->top__DOT__u_payload_fifo__DOT__TCP_flush_l = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4374696196533490219ull);
    vlSelf->top__DOT__u_payload_fifo__DOT__nTCP_flush_l = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 415071447245307882ull);
    vlSelf->top__DOT__u_payload_fifo__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12425369633541701707ull);
    vlSelf->top__DOT__u_payload_fifo__DOT__nwr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13274348166000701221ull);
    vlSelf->top__DOT__u_payload_fifo__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4183782997687028131ull);
    vlSelf->top__DOT__u_payload_fifo__DOT__nrd_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5950205444144388527ull);
    vlSelf->top__DOT__u_payload_fifo__DOT__unnamedblk1__DOT__i = 0;
    VL_SCOPED_RAND_RESET_W(72, vlSelf->top__DOT__u_payload_fifo__DOT____Vlvbound_h83587f98__0, __VscopeHash, 971672807115023252ull);
    vlSelf->top__DOT__u_payload_fifo__DOT____Vlvbound_h5d12e1c7__0 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 200490001923406383ull);
    vlSelf->top__DOT__u_payload_fifo__DOT____Vlvbound_hfce51f23__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13874423658341325768ull);
    vlSelf->top__DOT__u_fifo_tx__DOT__nbytes_abt_sent = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16386930007605499460ull);
    vlSelf->top__DOT__u_fifo_tx__DOT__bytes_msg_trk = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2810735542563579714ull);
    vlSelf->top__DOT__u_fifo_tx__DOT__nrd_FIFO_payload = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16148968864685752317ull);
    vlSelf->top__DOT__u_fifo_tx__DOT__ptr_str = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9952705573516605183ull);
    vlSelf->top__DOT__u_fifo_tx__DOT__nptr_str = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7171675586474326411ull);
    vlSelf->top__DOT__u_fifo_tx__DOT__ptr_end = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17631242111033860036ull);
    vlSelf->top__DOT__u_fifo_tx__DOT__nptr_end = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1998775450081630480ull);
    vlSelf->top__DOT__u_fifo_tx__DOT__flush_ptr = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7496807413666609147ull);
    vlSelf->top__DOT__u_fifo_tx__DOT__nflush_ptr = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16407402639830523798ull);
    vlSelf->top__DOT__u_fifo_tx__DOT__bytes_abt_sent_msg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18216391901764807340ull);
    vlSelf->top__DOT__u_fifo_tx__DOT__nbytes_abt_sent_msg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1968332747354956597ull);
    vlSelf->top__DOT__u_fifo_tx__DOT__msg_end_ptr = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6638302790643453551ull);
    vlSelf->top__DOT__u_fifo_tx__DOT__nmsg_end_ptr = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12344742041029568851ull);
    vlSelf->top__DOT__u_fifo_tx__DOT__rd_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11839432804457871971ull);
    vlSelf->top__DOT__u_fifo_tx__DOT__nrd_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17899445609637818854ull);
    vlSelf->top__DOT__u_fifo_tx__DOT__wr_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17018241154549618203ull);
    vlSelf->top__DOT__u_fifo_tx__DOT__nwr_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12403052798942017853ull);
    VL_SCOPED_RAND_RESET_W(1488, vlSelf->top__DOT__u_fifo_tx__DOT__dict_tx, __VscopeHash, 340273611542319970ull);
    VL_SCOPED_RAND_RESET_W(1488, vlSelf->top__DOT__u_fifo_tx__DOT__ndict_tx, __VscopeHash, 11142710423135248364ull);
    vlSelf->top__DOT__u_fifo_tx__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14526686422098950351ull);
    vlSelf->top__DOT__u_fifo_tx__DOT__nrd_FIFO_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9912318868869142009ull);
    vlSelf->top__DOT__u_fifo_tx__DOT__nrd_FIFO_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17694565820031982172ull);
    vlSelf->top__DOT__u_fifo_tx__DOT__nwr_FIFO_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8604999930677659795ull);
    vlSelf->top__DOT__u_fifo_tx__DOT__dict_wrt_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13754938055776641173ull);
    vlSelf->top__DOT__u_fifo_tx__DOT__ndict_wrt_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14203439368720496830ull);
    vlSelf->top__DOT__u_fifo_tx__DOT__dict_rd_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3784640521102406257ull);
    vlSelf->top__DOT__u_fifo_tx__DOT__ndict_rd_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7974073883178783914ull);
    vlSelf->top__DOT__u_fifo_tx__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11243258442933438348ull);
    vlSelf->top__DOT__u_fifo_tx__DOT__nrd_ptr = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15513107607405972441ull);
    vlSelf->top__DOT__u_fifo_tx__DOT__wrt_ptr = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16380067679241911487ull);
    vlSelf->top__DOT__u_fifo_tx__DOT__nwrt_ptr = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15504763001149954303ull);
    VL_SCOPED_RAND_RESET_W(4096, vlSelf->top__DOT__u_fifo_tx__DOT__TCP_tx_order, __VscopeHash, 10693800071992110778ull);
    VL_SCOPED_RAND_RESET_W(4096, vlSelf->top__DOT__u_fifo_tx__DOT__nTCP_tx_order, __VscopeHash, 8692294807743533093ull);
    vlSelf->top__DOT__u_fifo_tx__DOT__out_order_req_l = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12579160972607510556ull);
    vlSelf->top__DOT__u_fifo_tx__DOT__nout_order_req_l = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8012771922005460812ull);
    vlSelf->top__DOT__u_fifo_tx__DOT__ACK_rcv_flag_l = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17746270711198390660ull);
    vlSelf->top__DOT__u_fifo_tx__DOT__nACK_rcv_flag_l = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17568485859506499301ull);
    vlSelf->top__DOT__u_fifo_tx__DOT__ACK_num_l = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4157255689270374363ull);
    vlSelf->top__DOT__u_fifo_tx__DOT__nACK_num_l = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15044507870917330830ull);
    vlSelf->top__DOT__u_fifo_tx__DOT__rd_debug_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9388980588362849911ull);
    vlSelf->top__DOT__u_fifo_tx__DOT__rd_debug_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15471982607375689500ull);
    vlSelf->top__DOT__u_fifo_tx__DOT__rd_upd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7344815132483761575ull);
    vlSelf->top__DOT__u_fifo_tx__DOT__nrd_upd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17226578288128256130ull);
    vlSelf->top__DOT__u_fifo_tx__DOT__bytes_abt_sent_msg_rd = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7794221730774046841ull);
    vlSelf->top__DOT__u_fifo_tx__DOT__nbytes_abt_sent_msg_rd = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10174900153258115975ull);
    vlSelf->top__DOT__u_fifo_tx__DOT__checksum_l = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3569028501267179745ull);
    vlSelf->top__DOT__u_fifo_tx__DOT__nchecksum_l = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10746222074288038138ull);
    vlSelf->top__DOT__u_fifo_tx__DOT____Vlvbound_haafa9b1c__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1222981214274755318ull);
    vlSelf->top__DOT__u_fifo_tx__DOT____Vlvbound_hde36d840__0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1246819021583656698ull);
    vlSelf->top__DOT__u_fifo_tx__DOT____Vlvbound_hcf6169df__0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14915006786987594922ull);
    vlSelf->top__DOT__u_fifo_tx__DOT____Vlvbound_h7a818793__0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3890546384924082208ull);
    vlSelf->top__DOT__u_fifo_tx__DOT____Vlvbound_h6aad29f5__0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13551892243753514603ull);
    vlSelf->top__DOT__u_fifo_tx__DOT____Vlvbound_h60920ae5__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17566032820669449253ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__u_tcp__DOT__tcp_flow__DOT__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2451970360262226353ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__u_tcp__DOT__tcp_flow__DOT__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12462271108864048928ull);
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18225951476332272534ull);
    vlSelf->__Vtrigprevexpr___TOP__nRST__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5117209117380585348ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
