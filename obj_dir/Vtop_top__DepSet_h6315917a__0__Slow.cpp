// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_top.h"

VL_ATTR_COLD void Vtop_top___ctor_var_reset(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___ctor_var_reset\n"); );
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
    vlSelf->__PVT__nw_segment = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10812341697392716583ull);
    vlSelf->__PVT__axis_t_last_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14293112127140556272ull);
    vlSelf->__PVT__TCP_flush_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3023192678017809743ull);
    vlSelf->__PVT__axis_data_rx_int = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7940186925797908560ull);
    vlSelf->__PVT__handshake_done_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15734663808501982530ull);
    vlSelf->__PVT__seq_rcv_start_int = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5559315230212178791ull);
    vlSelf->__PVT__wr_pfifo_en_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2898268167597898557ull);
    vlSelf->__PVT__wr_pfifo_offset_int = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3634938164104502636ull);
    vlSelf->__PVT__wr_ptr_out_int = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1551116655381703597ull);
    vlSelf->__PVT__wr_pfifo_len_int = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13184361547409127232ull);
    vlSelf->__PVT__rd_pfifo_valid_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4596936724003769544ull);
    vlSelf->__PVT__rd_pfifo_ptr_int = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14742878579909422445ull);
    vlSelf->__PVT__rd_pfifo_len_int = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5320577577067068119ull);
    vlSelf->__PVT__rd_pfifo_en_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10796930455319901684ull);
    vlSelf->__PVT__seq_rx_FIFO_rd_int = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13016604209862564202ull);
    vlSelf->__PVT__rd_ftx_en_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11626604536871915676ull);
    vlSelf->__PVT__rd_ftx_payload_int = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6046903138081744364ull);
    vlSelf->__PVT__rd_ftx_valid_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9679144400900910392ull);
    vlSelf->__PVT__rd_ftx_last_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2133003622429745567ull);
    vlSelf->__PVT__bytes_abt_sent_int = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17981272664815994062ull);
    vlSelf->__PVT__ACK_num_int = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8469395807279432718ull);
    vlSelf->__PVT__ACK_rcv_flag_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13239568949548562171ull);
    vlSelf->__PVT__out_order_req_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3840409123370978531ull);
    vlSelf->__PVT__TCP_stop_flg_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17536281091718463298ull);
    vlSelf->__PVT__end_ss_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4920562650220800859ull);
    vlSelf->__PVT__re_trans_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16614384999854959566ull);
    vlSelf->__PVT__checksum_re_trans_int = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8203674271751096614ull);
    vlSelf->__PVT__seq_up = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 796946559863942825ull);
    vlSelf->__PVT__seq_num_tx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15452675836633821188ull);
    vlSelf->__PVT__checksum_TX = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4316659010836385484ull);
    vlSelf->__PVT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6695099141381822181ull);
    vlSelf->__PVT__rd_FIFO_valid_tx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18178011142534342053ull);
    vlSelf->__PVT__rd_FIFO_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10855001204654443987ull);
    vlSelf->__PVT__rd_FIFO_payload = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6002881770607720665ull);
    vlSelf->__PVT__bytes_abt_sent = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14892826253315460437ull);
    vlSelf->__PVT__wr_TX_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4758776881579859045ull);
}
