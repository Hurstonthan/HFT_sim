// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation_TCP_flow_ctrl.h"

VL_INLINE_OPT void Vether_simulation_TCP_flow_ctrl___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__3(Vether_simulation_TCP_flow_ctrl* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vether_simulation_TCP_flow_ctrl___nba_sequent__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__3\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ACK_num = vlSelfRef.__PVT__ACK_rx;
    vlSelfRef.__PVT__rcv_pkg_type = vlSelfRef.__PVT__TCP_control_rx;
    vlSelfRef.__PVT__ACK_rcv_flag = ((IData)(vlSelfRef.__PVT__rcv_data) 
                                     & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__rcv_pkg_type), 4U));
}

VL_INLINE_OPT void Vether_simulation_TCP_flow_ctrl___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__2(Vether_simulation_TCP_flow_ctrl* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vether_simulation_TCP_flow_ctrl___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__2\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tx_pkg_type = 0U;
    VL_ASSIGNBIT_IO(4U, vlSelfRef.__PVT__tx_pkg_type);
    vlSelfRef.__PVT__offset_tx = 5U;
    vlSelfRef.__PVT__urgent_pointer_tx = 0U;
    vlSelfRef.__PVT__seq_num_tx = ((IData)(vlSelfRef.__PVT__out_order_req)
                                    ? vlSelfRef.__PVT__seq_tx_retrans
                                    : VL_SEL_IQII(33, vlSelfRef.__PVT__seq_num, 0U, 0x20U));
    vlSelfRef.__PVT__ACK_tx = vlSelfRef.__PVT__rcv_next;
    vlSelfRef.__PVT__window_size_tx = ((IData)(vlSelfRef.__PVT__full)
                                        ? 0U : 0xffffU);
    vlSelfRef.__PVT__nhand_shake_done = vlSelfRef.__PVT__hand_shake_done;
    if ((0U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__tx_pkg_type = 0U;
        VL_ASSIGNBIT_IO(1U, vlSelfRef.__PVT__tx_pkg_type);
        vlSelfRef.__PVT__seq_num_tx = VL_SEL_IQII(33, vlSelfRef.__PVT__seq_num, 0U, 0x20U);
        vlSelfRef.__PVT__ACK_tx = 0U;
    } else if ((3U != (IData)(vlSelfRef.__PVT__state))) {
        if ((1U == (IData)(vlSelfRef.__PVT__state))) {
            VL_ASSIGNBIT_IO(1U, vlSelfRef.__PVT__tx_pkg_type);
            VL_ASSIGNBIT_IO(4U, vlSelfRef.__PVT__tx_pkg_type);
            vlSelfRef.__PVT__seq_num_tx = VL_SEL_IQII(33, vlSelfRef.__PVT__seq_num, 0U, 0x20U);
            vlSelfRef.__PVT__ACK_tx = vlSelfRef.__PVT__rcv_next;
        } else if ((2U == (IData)(vlSelfRef.__PVT__state))) {
            if (((IData)(vlSelfRef.__PVT__rcv_data) 
                 & (vlSelfRef.__PVT__seq_num_rx == vlSelfRef.__PVT__rcv_next))) {
                vlSelfRef.__PVT__nhand_shake_done = 1U;
            }
        } else if ((4U == (IData)(vlSelfRef.__PVT__state))) {
            VL_ASSIGNBIT_IO(4U, vlSelfRef.__PVT__tx_pkg_type);
            vlSelfRef.__PVT__seq_num_tx = VL_SEL_IQII(33, vlSelfRef.__PVT__seq_num, 0U, 0x20U);
            vlSelfRef.__PVT__ACK_tx = vlSelfRef.__PVT__rcv_next;
            if (vlSelfRef.__PVT__seq_up) {
                vlSelfRef.__PVT__nhand_shake_done = 1U;
            }
        } else if ((5U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__nhand_shake_done = 0U;
            vlSelfRef.__PVT__seq_num_tx = ((IData)(vlSelfRef.__PVT__out_order)
                                            ? ((IData)(0x18U) 
                                               + VL_SEL_IQII(33, vlSelfRef.__PVT__seq_num, 0U, 0x20U))
                                            : ((IData)(vlSelfRef.__PVT__out_order_req)
                                                ? vlSelfRef.__PVT__seq_tx_retrans
                                                : VL_SEL_IQII(33, vlSelfRef.__PVT__seq_num, 0U, 0x20U)));
            VL_ASSIGNBIT_IO(4U, vlSelfRef.__PVT__tx_pkg_type);
            VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__tx_pkg_type, vlSelfRef.__PVT__end_ss);
            vlSelfRef.__PVT__ACK_tx = vlSelfRef.__PVT__rcv_next;
        }
    }
    vlSelfRef.__PVT__TCP_control_tx = vlSelfRef.__PVT__tx_pkg_type;
}

VL_INLINE_OPT void Vether_simulation_TCP_flow_ctrl___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__3(Vether_simulation_TCP_flow_ctrl* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vether_simulation_TCP_flow_ctrl___nba_comb__TOP__ether_simulation__svr_inst__u_tcp__tcp_flow__3\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__bytes_in_flight = ((VL_SEL_IQII(33, vlSelfRef.__PVT__seq_num, 0U, 0x20U) 
                                         + vlSelfRef.__PVT__bytes_abt_sent) 
                                        - (VL_SEL_IQII(35, vlSelfRef.__PVT__ack_num, 0U, 0x20U) 
                                           - vlSelfRef.__PVT__ISN_num));
    vlSelfRef.__PVT__wnd_allow = (VL_EXTEND_II(32,16, (IData)(vlSelfRef.__PVT__window_size)) 
                                  - vlSelfRef.__PVT__bytes_in_flight);
}

VL_INLINE_OPT void Vether_simulation_TCP_flow_ctrl___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__3(Vether_simulation_TCP_flow_ctrl* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vether_simulation_TCP_flow_ctrl___nba_sequent__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__3\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ACK_num = vlSelfRef.__PVT__ACK_rx;
    vlSelfRef.__PVT__rcv_pkg_type = vlSelfRef.__PVT__TCP_control_rx;
    vlSelfRef.__PVT__ACK_rcv_flag = ((IData)(vlSelfRef.__PVT__rcv_data) 
                                     & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__rcv_pkg_type), 4U));
}

VL_INLINE_OPT void Vether_simulation_TCP_flow_ctrl___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__2(Vether_simulation_TCP_flow_ctrl* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vether_simulation_TCP_flow_ctrl___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__2\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tx_pkg_type = 0U;
    VL_ASSIGNBIT_IO(4U, vlSelfRef.__PVT__tx_pkg_type);
    vlSelfRef.__PVT__offset_tx = 5U;
    vlSelfRef.__PVT__urgent_pointer_tx = 0U;
    vlSelfRef.__PVT__seq_num_tx = ((IData)(vlSelfRef.__PVT__out_order_req)
                                    ? vlSelfRef.__PVT__seq_tx_retrans
                                    : VL_SEL_IQII(33, vlSelfRef.__PVT__seq_num, 0U, 0x20U));
    vlSelfRef.__PVT__ACK_tx = vlSelfRef.__PVT__rcv_next;
    vlSelfRef.__PVT__window_size_tx = ((IData)(vlSelfRef.__PVT__full)
                                        ? 0U : 0xffffU);
    vlSelfRef.__PVT__nhand_shake_done = vlSelfRef.__PVT__hand_shake_done;
    if ((0U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__tx_pkg_type = 0U;
        VL_ASSIGNBIT_IO(1U, vlSelfRef.__PVT__tx_pkg_type);
        vlSelfRef.__PVT__seq_num_tx = VL_SEL_IQII(33, vlSelfRef.__PVT__seq_num, 0U, 0x20U);
        vlSelfRef.__PVT__ACK_tx = 0U;
    } else if ((3U != (IData)(vlSelfRef.__PVT__state))) {
        if ((1U == (IData)(vlSelfRef.__PVT__state))) {
            VL_ASSIGNBIT_IO(1U, vlSelfRef.__PVT__tx_pkg_type);
            VL_ASSIGNBIT_IO(4U, vlSelfRef.__PVT__tx_pkg_type);
            vlSelfRef.__PVT__seq_num_tx = VL_SEL_IQII(33, vlSelfRef.__PVT__seq_num, 0U, 0x20U);
            vlSelfRef.__PVT__ACK_tx = vlSelfRef.__PVT__rcv_next;
        } else if ((2U == (IData)(vlSelfRef.__PVT__state))) {
            if (((IData)(vlSelfRef.__PVT__rcv_data) 
                 & (vlSelfRef.__PVT__seq_num_rx == vlSelfRef.__PVT__rcv_next))) {
                vlSelfRef.__PVT__nhand_shake_done = 1U;
            }
        } else if ((4U == (IData)(vlSelfRef.__PVT__state))) {
            VL_ASSIGNBIT_IO(4U, vlSelfRef.__PVT__tx_pkg_type);
            vlSelfRef.__PVT__seq_num_tx = VL_SEL_IQII(33, vlSelfRef.__PVT__seq_num, 0U, 0x20U);
            vlSelfRef.__PVT__ACK_tx = vlSelfRef.__PVT__rcv_next;
            if (vlSelfRef.__PVT__seq_up) {
                vlSelfRef.__PVT__nhand_shake_done = 1U;
            }
        } else if ((5U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__nhand_shake_done = 0U;
            vlSelfRef.__PVT__seq_num_tx = ((IData)(vlSelfRef.__PVT__out_order)
                                            ? ((IData)(0x18U) 
                                               + VL_SEL_IQII(33, vlSelfRef.__PVT__seq_num, 0U, 0x20U))
                                            : ((IData)(vlSelfRef.__PVT__out_order_req)
                                                ? vlSelfRef.__PVT__seq_tx_retrans
                                                : VL_SEL_IQII(33, vlSelfRef.__PVT__seq_num, 0U, 0x20U)));
            VL_ASSIGNBIT_IO(4U, vlSelfRef.__PVT__tx_pkg_type);
            VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__tx_pkg_type, vlSelfRef.__PVT__end_ss);
            vlSelfRef.__PVT__ACK_tx = vlSelfRef.__PVT__rcv_next;
        }
    }
    vlSelfRef.__PVT__TCP_control_tx = vlSelfRef.__PVT__tx_pkg_type;
}

VL_INLINE_OPT void Vether_simulation_TCP_flow_ctrl___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__3(Vether_simulation_TCP_flow_ctrl* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vether_simulation_TCP_flow_ctrl___nba_comb__TOP__ether_simulation__clt_inst__u_tcp__tcp_flow__3\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__bytes_in_flight = ((VL_SEL_IQII(33, vlSelfRef.__PVT__seq_num, 0U, 0x20U) 
                                         + vlSelfRef.__PVT__bytes_abt_sent) 
                                        - (VL_SEL_IQII(35, vlSelfRef.__PVT__ack_num, 0U, 0x20U) 
                                           - vlSelfRef.__PVT__ISN_num));
    vlSelfRef.__PVT__wnd_allow = (VL_EXTEND_II(32,16, (IData)(vlSelfRef.__PVT__window_size)) 
                                  - vlSelfRef.__PVT__bytes_in_flight);
}
