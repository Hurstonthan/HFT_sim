// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_TX.h for the primary calling header

#include "Vether_TX__pch.h"
#include "Vether_TX__Syms.h"
#include "Vether_TX___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vether_TX___024root___dump_triggers__stl(Vether_TX___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vether_TX___024root___eval_triggers__stl(Vether_TX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_TX___024root___eval_triggers__stl\n"); );
    Vether_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vether_TX___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vether_TX___024root___stl_sequent__TOP__0(Vether_TX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_TX___024root___stl_sequent__TOP__0\n"); );
    Vether_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TCP_len_data = vlSelfRef.bytes_abt_sent;
    vlSelfRef.checksum_tx = vlSymsp->TOP__ether_TX__DOT__my_TCP.checksum_tx;
    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__tx_pkg_type = 0U;
    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nwindow_size 
        = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__window_size;
    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nincr_ptr 
        = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__incr_ptr;
    vlSymsp->TOP__ether_TX__DOT__my_TCP.seq_num_tx = 0U;
    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nack_num 
        = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__ack_num;
    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__ntrk_ptr 
        = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__trk_ptr;
    vlSymsp->TOP__ether_TX__DOT__my_TCP.ACK_tx = 0U;
    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nstate 
        = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__state;
    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nstart_ptr 
        = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__start_ptr;
    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nrcv_next 
        = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__rcv_next;
    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nTCP_out_order[0U] 
        = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order[0U];
    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nTCP_out_order[1U] 
        = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order[1U];
    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nTCP_out_order[2U] 
        = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order[2U];
    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nTCP_out_order[3U] 
        = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order[3U];
    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nTCP_out_order[4U] 
        = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order[4U];
    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nTCP_out_order[5U] 
        = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order[5U];
    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nTCP_out_order[6U] 
        = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order[6U];
    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nTCP_out_order[7U] 
        = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order[7U];
    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nTCP_out_order[8U] 
        = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order[8U];
    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nTCP_out_order[9U] 
        = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order[9U];
    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nTCP_out_order[0xaU] 
        = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order[0xaU];
    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nTCP_out_order[0xbU] 
        = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order[0xbU];
    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nTCP_out_order[0xcU] 
        = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order[0xcU];
    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nTCP_out_order[0xdU] 
        = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order[0xdU];
    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nTCP_out_order[0xeU] 
        = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order[0xeU];
    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nTCP_out_order[0xfU] 
        = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order[0xfU];
    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nTCP_out_order[0x10U] 
        = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order[0x10U];
    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nTCP_out_order[0x11U] 
        = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order[0x11U];
    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nTCP_out_order[0x12U] 
        = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order[0x12U];
    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nTCP_out_order[0x13U] 
        = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order[0x13U];
    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nTCP_out_order[0x14U] 
        = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order[0x14U];
    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nTCP_out_order[0x15U] 
        = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order[0x15U];
    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nTCP_out_order[0x16U] 
        = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order[0x16U];
    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nTCP_out_order[0x17U] 
        = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order[0x17U];
    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nTCP_out_order[0x18U] 
        = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order[0x18U];
    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nTCP_out_order[0x19U] 
        = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order[0x19U];
    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nTCP_out_order[0x1aU] 
        = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order[0x1aU];
    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nTCP_out_order[0x1bU] 
        = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order[0x1bU];
    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nTCP_out_order[0x1cU] 
        = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order[0x1cU];
    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nTCP_out_order[0x1dU] 
        = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order[0x1dU];
    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nTCP_out_order[0x1eU] 
        = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order[0x1eU];
    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nTCP_out_order[0x1fU] 
        = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order[0x1fU];
    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nTCP_out_order[0x20U] 
        = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order[0x20U];
    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nTCP_out_order[0x21U] 
        = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order[0x21U];
    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nTCP_out_order[0x22U] 
        = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order[0x22U];
    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nTCP_out_order[0x23U] 
        = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order[0x23U];
    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__bytes_in_flight 
        = ((vlSelfRef.bytes_sent + vlSelfRef.bytes_abt_sent) 
           - (IData)(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__ack_num));
    if ((1U & (~ ((IData)(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__state) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__state) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__state) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__state) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__state))) {
                        if ((2U & (IData)(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__state))) {
                            if ((1U & (~ (IData)(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__state)))) {
                                vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__tx_pkg_type 
                                    = (1U | (IData)(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__tx_pkg_type));
                                vlSymsp->TOP__ether_TX__DOT__my_TCP.seq_num_tx 
                                    = (IData)(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__seq_num);
                                vlSymsp->TOP__ether_TX__DOT__my_TCP.ACK_tx 
                                    = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__rcv_next;
                                if ((1U & (IData)(vlSelfRef.TCP_control_rx))) {
                                    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nstate = 0U;
                                }
                            }
                        } else {
                            if ((1U & (~ (IData)(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__state)))) {
                                vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__tx_pkg_type 
                                    = (4U | (IData)(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__tx_pkg_type));
                                vlSymsp->TOP__ether_TX__DOT__my_TCP.ACK_tx 
                                    = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__rcv_next;
                            }
                            if ((1U & (IData)(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__state))) {
                                if ((4U & (IData)(vlSelfRef.TCP_control_rx))) {
                                    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nstate = 6U;
                                }
                            } else if ((1U & (IData)(vlSelfRef.TCP_control_rx))) {
                                vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nstate = 5U;
                            }
                        }
                        vlSelfRef.TCP_control_tx = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__tx_pkg_type;
                        vlSelfRef.seq_num_tx = vlSymsp->TOP__ether_TX__DOT__my_TCP.seq_num_tx;
                        vlSelfRef.ACK_tx = vlSymsp->TOP__ether_TX__DOT__my_TCP.ACK_tx;
                        vlSymsp->TOP__ether_TX__DOT__my_TCP.TCP_stop_flg = 0U;
                        if ((1U & (~ ((IData)(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__state) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__state))) {
                                vlSymsp->TOP__ether_TX__DOT__my_TCP.TCP_stop_flg = 0U;
                            }
                        }
                    } else if ((2U & (IData)(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__state))) {
                        if ((1U & (~ (IData)(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__state)))) {
                            vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__tx_pkg_type 
                                = (1U | (IData)(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__tx_pkg_type));
                        }
                        vlSelfRef.TCP_control_tx = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__tx_pkg_type;
                        if ((1U & (IData)(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__state))) {
                            vlSymsp->TOP__ether_TX__DOT__my_TCP.seq_num_tx 
                                = (IData)(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__seq_num);
                            vlSelfRef.seq_num_tx = vlSymsp->TOP__ether_TX__DOT__my_TCP.seq_num_tx;
                            vlSymsp->TOP__ether_TX__DOT__my_TCP.ACK_tx 
                                = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__rcv_next;
                            vlSelfRef.ACK_tx = vlSymsp->TOP__ether_TX__DOT__my_TCP.ACK_tx;
                            vlSymsp->TOP__ether_TX__DOT__my_TCP.TCP_stop_flg = 0U;
                            if (vlSelfRef.end_ss) {
                                vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nstate = 4U;
                            }
                            vlSymsp->TOP__ether_TX__DOT__my_TCP.TCP_stop_flg 
                                = (1U & (~ ((vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__bytes_in_flight 
                                             <= (IData)(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__window_size)) 
                                            & (IData)(vlSelfRef.seq_up))));
                        } else {
                            vlSymsp->TOP__ether_TX__DOT__my_TCP.seq_num_tx 
                                = (IData)(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__seq_num);
                            vlSelfRef.seq_num_tx = vlSymsp->TOP__ether_TX__DOT__my_TCP.seq_num_tx;
                            vlSymsp->TOP__ether_TX__DOT__my_TCP.ACK_tx 
                                = (IData)(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__ack_num);
                            vlSelfRef.ACK_tx = vlSymsp->TOP__ether_TX__DOT__my_TCP.ACK_tx;
                            vlSymsp->TOP__ether_TX__DOT__my_TCP.TCP_stop_flg = 0U;
                            if (vlSelfRef.ACK_sent) {
                                vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nstate = 3U;
                            }
                        }
                    } else {
                        if ((1U & (~ (IData)(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__state)))) {
                            vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__tx_pkg_type 
                                = (2U | (IData)(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__tx_pkg_type));
                            vlSymsp->TOP__ether_TX__DOT__my_TCP.seq_num_tx 
                                = (IData)(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__seq_num);
                            vlSymsp->TOP__ether_TX__DOT__my_TCP.ACK_tx = 0U;
                        }
                        vlSelfRef.TCP_control_tx = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__tx_pkg_type;
                        vlSelfRef.seq_num_tx = vlSymsp->TOP__ether_TX__DOT__my_TCP.seq_num_tx;
                        vlSelfRef.ACK_tx = vlSymsp->TOP__ether_TX__DOT__my_TCP.ACK_tx;
                        vlSymsp->TOP__ether_TX__DOT__my_TCP.TCP_stop_flg = 0U;
                        if ((1U & (IData)(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__state))) {
                            if ((((IData)(vlSelfRef.rcv_data) 
                                  & ((IData)(vlSelfRef.TCP_control_rx) 
                                     >> 1U)) & (IData)(vlSelfRef.TCP_control_rx))) {
                                vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nstate = 2U;
                            } else if (vlSelfRef.timeout_flag) {
                                vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nstate = 0U;
                            }
                            vlSymsp->TOP__ether_TX__DOT__my_TCP.TCP_stop_flg = 1U;
                        } else if (vlSelfRef.SYN_sent) {
                            vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nstate = 1U;
                        }
                    }
                    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nseq_num 
                        = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__seq_num;
                    if ((1U & (~ ((IData)(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__state) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__state))) {
                            if ((1U & (IData)(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__state))) {
                                if (((vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__bytes_in_flight 
                                      <= (IData)(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__window_size)) 
                                     & (IData)(vlSelfRef.seq_up))) {
                                    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nseq_num 
                                        = ((0x100000000ULL 
                                            & vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nseq_num) 
                                           | (IData)((IData)(
                                                             ((IData)(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__seq_num) 
                                                              + vlSelfRef.bytes_abt_sent))));
                                }
                                if (vlSelfRef.rcv_data) {
                                    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nwindow_size 
                                        = vlSelfRef.window_size_rx;
                                    if ((vlSelfRef.seq_num_rx 
                                         != vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__rcv_next)) {
                                        vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nincr_ptr 
                                            = (0x3ffffU 
                                               & ((IData)(1U) 
                                                  + vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__incr_ptr));
                                        if ((vlSelfRef.seq_num_rx 
                                             == (((0x47fU 
                                                   >= 
                                                   ((IData)(0x20U) 
                                                    + 
                                                    (0x7ffU 
                                                     & VL_SHIFTL_III(11,32,32, vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__trk_ptr, 6U))))
                                                   ? 
                                                  (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         (0x7ffU 
                                                          & VL_SHIFTL_III(11,32,32, vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__trk_ptr, 6U)))))
                                                     ? 0U
                                                     : 
                                                    (vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order[
                                                     (((IData)(0x3fU) 
                                                       + 
                                                       (0x7ffU 
                                                        & VL_SHIFTL_III(11,32,32, vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__trk_ptr, 6U))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          (0x7ffU 
                                                           & VL_SHIFTL_III(11,32,32, vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__trk_ptr, 6U))))))) 
                                                   | (vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order[
                                                      (((IData)(0x20U) 
                                                        + 
                                                        (0x7ffU 
                                                         & VL_SHIFTL_III(11,32,32, vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__trk_ptr, 6U))) 
                                                       >> 5U)] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          (0x7ffU 
                                                           & VL_SHIFTL_III(11,32,32, vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__trk_ptr, 6U))))))
                                                   : 0U) 
                                                 + 
                                                 ((0x47fU 
                                                   >= 
                                                   (0x7ffU 
                                                    & VL_SHIFTL_III(11,32,32, vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__trk_ptr, 6U)))
                                                   ? 
                                                  (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(11,32,32, vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__trk_ptr, 6U)))
                                                     ? 0U
                                                     : 
                                                    (vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order[
                                                     (((IData)(0x1fU) 
                                                       + 
                                                       (0x7ffU 
                                                        & VL_SHIFTL_III(11,32,32, vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__trk_ptr, 6U))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(11,32,32, vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__trk_ptr, 6U))))) 
                                                   | (vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order[
                                                      (0x3fU 
                                                       & (VL_SHIFTL_III(11,32,32, vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__trk_ptr, 6U) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(11,32,32, vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__trk_ptr, 6U))))
                                                   : 0U)))) {
                                            vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__ntrk_ptr 
                                                = (0x3ffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__trk_ptr));
                                        }
                                        vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT____Vlvbound_h64428630__0 
                                            = vlSelfRef.seq_num_rx;
                                        if ((0x47fU 
                                             >= ((IData)(0x20U) 
                                                 + 
                                                 (0x7ffU 
                                                  & VL_SHIFTL_III(11,32,32, vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__incr_ptr, 6U))))) {
                                            VL_ASSIGNSEL_WI(1152,32,
                                                            ((IData)(0x20U) 
                                                             + 
                                                             (0x7ffU 
                                                              & VL_SHIFTL_III(11,32,32, vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__incr_ptr, 6U))), vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nTCP_out_order, vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT____Vlvbound_h64428630__0);
                                        }
                                        vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT____Vlvbound_hcac8f00c__0 
                                            = vlSelfRef.payload_len_rx;
                                        if ((0x47fU 
                                             >= (0x7ffU 
                                                 & VL_SHIFTL_III(11,32,32, vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__incr_ptr, 6U)))) {
                                            VL_ASSIGNSEL_WI(1152,32,
                                                            (0x7ffU 
                                                             & VL_SHIFTL_III(11,32,32, vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__incr_ptr, 6U)), vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nTCP_out_order, vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT____Vlvbound_hcac8f00c__0);
                                        }
                                    }
                                    if (((vlSelfRef.ACK_rx 
                                          == (IData)(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__ack_num)) 
                                         & (IData)(vlSelfRef.TCP_control_rx))) {
                                        vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nack_num 
                                            = ((0xffffffffULL 
                                                & vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nack_num) 
                                               | ((QData)((IData)(
                                                                  ((2U 
                                                                    == 
                                                                    (3U 
                                                                     & (IData)(
                                                                               (vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__ack_num 
                                                                                >> 0x20U))))
                                                                    ? 0U
                                                                    : 
                                                                   (3U 
                                                                    & ((IData)(1U) 
                                                                       + (IData)(
                                                                                (vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__ack_num 
                                                                                >> 0x20U))))))) 
                                                  << 0x20U));
                                        if ((2U == 
                                             (3U & (IData)(
                                                           (vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__ack_num 
                                                            >> 0x20U))))) {
                                            vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nseq_num 
                                                = (
                                                   (0x100000000ULL 
                                                    & vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nseq_num) 
                                                   | (IData)((IData)(vlSelfRef.ACK_rx)));
                                        }
                                    } else if ((1U 
                                                & (IData)(vlSelfRef.TCP_control_rx))) {
                                        vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nack_num 
                                            = (QData)((IData)(vlSelfRef.ACK_rx));
                                    }
                                    if ((vlSelfRef.seq_num_rx 
                                         == vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__rcv_next)) {
                                        vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nrcv_next 
                                            = (vlSelfRef.seq_num_rx 
                                               + vlSelfRef.payload_len_rx);
                                        if ((((0x47fU 
                                               >= ((IData)(0x20U) 
                                                   + 
                                                   (0x7ffU 
                                                    & VL_SHIFTL_III(11,32,32, vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__start_ptr, 6U))))
                                               ? ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x20U) 
                                                        + 
                                                        (0x7ffU 
                                                         & VL_SHIFTL_III(11,32,32, vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__start_ptr, 6U)))))
                                                    ? 0U
                                                    : 
                                                   (vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order[
                                                    (((IData)(0x3fU) 
                                                      + 
                                                      (0x7ffU 
                                                       & VL_SHIFTL_III(11,32,32, vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__start_ptr, 6U))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         (0x7ffU 
                                                          & VL_SHIFTL_III(11,32,32, vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__start_ptr, 6U))))))) 
                                                  | (vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order[
                                                     (((IData)(0x20U) 
                                                       + 
                                                       (0x7ffU 
                                                        & VL_SHIFTL_III(11,32,32, vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__start_ptr, 6U))) 
                                                      >> 5U)] 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         (0x7ffU 
                                                          & VL_SHIFTL_III(11,32,32, vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__start_ptr, 6U))))))
                                               : 0U) 
                                             == (vlSelfRef.seq_num_rx 
                                                 + vlSelfRef.payload_len_rx))) {
                                            vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nstart_ptr 
                                                = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__trk_ptr;
                                            vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nrcv_next 
                                                = (
                                                   ((0x47fU 
                                                     >= 
                                                     ((IData)(0x20U) 
                                                      + 
                                                      (0x7ffU 
                                                       & VL_SHIFTL_III(11,32,32, vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__trk_ptr, 6U))))
                                                     ? 
                                                    (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           (0x7ffU 
                                                            & VL_SHIFTL_III(11,32,32, vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__trk_ptr, 6U)))))
                                                       ? 0U
                                                       : 
                                                      (vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order[
                                                       (((IData)(0x3fU) 
                                                         + 
                                                         (0x7ffU 
                                                          & VL_SHIFTL_III(11,32,32, vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__trk_ptr, 6U))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            (0x7ffU 
                                                             & VL_SHIFTL_III(11,32,32, vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__trk_ptr, 6U))))))) 
                                                     | (vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order[
                                                        (((IData)(0x20U) 
                                                          + 
                                                          (0x7ffU 
                                                           & VL_SHIFTL_III(11,32,32, vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__trk_ptr, 6U))) 
                                                         >> 5U)] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            (0x7ffU 
                                                             & VL_SHIFTL_III(11,32,32, vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__trk_ptr, 6U))))))
                                                     : 0U) 
                                                   + 
                                                   ((0x47fU 
                                                     >= 
                                                     (0x7ffU 
                                                      & VL_SHIFTL_III(11,32,32, vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__trk_ptr, 6U)))
                                                     ? 
                                                    (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(11,32,32, vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__trk_ptr, 6U)))
                                                       ? 0U
                                                       : 
                                                      (vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order[
                                                       (((IData)(0x1fU) 
                                                         + 
                                                         (0x7ffU 
                                                          & VL_SHIFTL_III(11,32,32, vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__trk_ptr, 6U))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(11,32,32, vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__trk_ptr, 6U))))) 
                                                     | (vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order[
                                                        (0x3fU 
                                                         & (VL_SHIFTL_III(11,32,32, vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__trk_ptr, 6U) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(11,32,32, vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__trk_ptr, 6U))))
                                                     : 0U));
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (IData)(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__state))) {
                            if ((((IData)(vlSelfRef.rcv_data) 
                                  & ((IData)(vlSelfRef.TCP_control_rx) 
                                     >> 1U)) & (IData)(vlSelfRef.TCP_control_rx))) {
                                vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nwindow_size 
                                    = vlSelfRef.window_size_rx;
                                vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nack_num 
                                    = ((0x300000000ULL 
                                        & vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nack_num) 
                                       | (IData)((IData)(
                                                         ((IData)(1U) 
                                                          + (IData)(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__seq_num)))));
                                vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nrcv_next 
                                    = ((IData)(1U) 
                                       + vlSelfRef.seq_num_rx);
                                vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nseq_num 
                                    = ((0x100000000ULL 
                                        & vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nseq_num) 
                                       | (IData)((IData)(
                                                         ((IData)(1U) 
                                                          + (IData)(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__seq_num)))));
                            }
                        } else {
                            vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nseq_num 
                                = (1ULL | (0x100000000ULL 
                                           & vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nseq_num));
                        }
                    }
                } else {
                    vlSelfRef.TCP_control_tx = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__tx_pkg_type;
                    vlSelfRef.seq_num_tx = vlSymsp->TOP__ether_TX__DOT__my_TCP.seq_num_tx;
                    vlSelfRef.ACK_tx = vlSymsp->TOP__ether_TX__DOT__my_TCP.ACK_tx;
                    vlSymsp->TOP__ether_TX__DOT__my_TCP.TCP_stop_flg = 0U;
                    vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nseq_num 
                        = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__seq_num;
                }
            } else {
                vlSelfRef.TCP_control_tx = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__tx_pkg_type;
                vlSelfRef.seq_num_tx = vlSymsp->TOP__ether_TX__DOT__my_TCP.seq_num_tx;
                vlSelfRef.ACK_tx = vlSymsp->TOP__ether_TX__DOT__my_TCP.ACK_tx;
                vlSymsp->TOP__ether_TX__DOT__my_TCP.TCP_stop_flg = 0U;
                vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nseq_num 
                    = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__seq_num;
            }
        } else {
            vlSelfRef.TCP_control_tx = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__tx_pkg_type;
            vlSelfRef.seq_num_tx = vlSymsp->TOP__ether_TX__DOT__my_TCP.seq_num_tx;
            vlSelfRef.ACK_tx = vlSymsp->TOP__ether_TX__DOT__my_TCP.ACK_tx;
            vlSymsp->TOP__ether_TX__DOT__my_TCP.TCP_stop_flg = 0U;
            vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nseq_num 
                = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__seq_num;
        }
    } else {
        vlSelfRef.TCP_control_tx = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__tx_pkg_type;
        vlSelfRef.seq_num_tx = vlSymsp->TOP__ether_TX__DOT__my_TCP.seq_num_tx;
        vlSelfRef.ACK_tx = vlSymsp->TOP__ether_TX__DOT__my_TCP.ACK_tx;
        vlSymsp->TOP__ether_TX__DOT__my_TCP.TCP_stop_flg = 0U;
        vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nseq_num 
            = vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__seq_num;
    }
    vlSelfRef.TCP_stop_flg = vlSymsp->TOP__ether_TX__DOT__my_TCP.TCP_stop_flg;
}
