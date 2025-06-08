// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vether_TX__Syms.h"


void Vether_TX___024root__trace_chg_0_sub_0(Vether_TX___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vether_TX___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_TX___024root__trace_chg_0\n"); );
    // Init
    Vether_TX___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vether_TX___024root*>(voidSelf);
    Vether_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vether_TX___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vether_TX___024root__trace_chg_0_sub_0(Vether_TX___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_TX___024root__trace_chg_0_sub_0\n"); );
    Vether_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgCData(oldp+0,(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nstate),7);
        bufp->chgQData(oldp+1,(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nack_num),34);
        bufp->chgQData(oldp+3,(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nseq_num),33);
        bufp->chgSData(oldp+5,(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nwindow_size),16);
        bufp->chgIData(oldp+6,(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__bytes_in_flight),32);
        bufp->chgWData(oldp+7,(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nTCP_out_order),1152);
        bufp->chgIData(oldp+43,(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nstart_ptr),18);
        bufp->chgIData(oldp+44,(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nincr_ptr),18);
        bufp->chgIData(oldp+45,(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__ntrk_ptr),18);
        bufp->chgIData(oldp+46,(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__nrcv_next),32);
        bufp->chgBit(oldp+47,(vlSymsp->TOP__ether_TX__DOT__my_TCP.TCP_stop_flg));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+48,(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__state),7);
        bufp->chgCData(oldp+49,(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__tx_pkg_type),8);
        bufp->chgQData(oldp+50,(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__ack_num),34);
        bufp->chgQData(oldp+52,(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__seq_num),33);
        bufp->chgSData(oldp+54,(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__window_size),16);
        bufp->chgWData(oldp+55,(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order),1152);
        bufp->chgIData(oldp+91,(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__start_ptr),18);
        bufp->chgIData(oldp+92,(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__incr_ptr),18);
        bufp->chgIData(oldp+93,(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__trk_ptr),18);
        bufp->chgIData(oldp+94,(vlSelfRef.ether_TX__DOT__my_TCP_flow_ctrl__DOT__rcv_next),32);
        bufp->chgIData(oldp+95,(vlSymsp->TOP__ether_TX__DOT__my_TCP.seq_num_tx),32);
        bufp->chgIData(oldp+96,(vlSymsp->TOP__ether_TX__DOT__my_TCP.ACK_tx),32);
    }
    bufp->chgBit(oldp+97,(vlSelfRef.CLK));
    bufp->chgBit(oldp+98,(vlSelfRef.nRST));
    bufp->chgBit(oldp+99,(vlSelfRef.rcv_data));
    bufp->chgBit(oldp+100,(vlSelfRef.timeout_flag));
    bufp->chgCData(oldp+101,(vlSelfRef.TCP_control_rx),8);
    bufp->chgIData(oldp+102,(vlSelfRef.seq_num_rx),32);
    bufp->chgIData(oldp+103,(vlSelfRef.ACK_rx),32);
    bufp->chgCData(oldp+104,(vlSelfRef.offset_rx),4);
    bufp->chgSData(oldp+105,(vlSelfRef.window_size_rx),16);
    bufp->chgSData(oldp+106,(vlSelfRef.checksum_rx),16);
    bufp->chgSData(oldp+107,(vlSelfRef.urgent_pointer_rx),16);
    bufp->chgIData(oldp+108,(vlSelfRef.payload_len_rx),32);
    bufp->chgBit(oldp+109,(vlSelfRef.SYN_sent));
    bufp->chgBit(oldp+110,(vlSelfRef.ACK_sent));
    bufp->chgBit(oldp+111,(vlSelfRef.FIN_sent));
    bufp->chgBit(oldp+112,(vlSelfRef.end_ss));
    bufp->chgIData(oldp+113,(vlSelfRef.ISN_num),32);
    bufp->chgIData(oldp+114,(vlSelfRef.bytes_sent),32);
    bufp->chgIData(oldp+115,(vlSelfRef.bytes_abt_sent),32);
    bufp->chgBit(oldp+116,(vlSelfRef.seq_up));
    bufp->chgIData(oldp+117,(vlSelfRef.TCP_len_data),32);
    bufp->chgBit(oldp+118,(vlSelfRef.TCP_stop_flg));
    bufp->chgCData(oldp+119,(vlSelfRef.TCP_control_tx),8);
    bufp->chgIData(oldp+120,(vlSelfRef.seq_num_tx),32);
    bufp->chgIData(oldp+121,(vlSelfRef.ACK_tx),32);
    bufp->chgCData(oldp+122,(vlSelfRef.offset_tx),4);
    bufp->chgSData(oldp+123,(vlSelfRef.window_size_tx),16);
    bufp->chgSData(oldp+124,(vlSelfRef.checksum_tx),16);
    bufp->chgSData(oldp+125,(vlSelfRef.urgent_pointer_tx),16);
}

void Vether_TX___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vether_TX___024root__trace_cleanup\n"); );
    // Init
    Vether_TX___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vether_TX___024root*>(voidSelf);
    Vether_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
