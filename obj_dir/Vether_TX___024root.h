// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vether_TX.h for the primary calling header

#ifndef VERILATED_VETHER_TX___024ROOT_H_
#define VERILATED_VETHER_TX___024ROOT_H_  // guard

#include "verilated.h"
class Vether_TX_TCP_flow_if;


class Vether_TX__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vether_TX___024root final : public VerilatedModule {
  public:
    // CELLS
    Vether_TX_TCP_flow_if* __PVT__ether_TX__DOT__my_TCP;

    // DESIGN SPECIFIC STATE
    VL_IN8(CLK,0,0);
    VL_IN8(nRST,0,0);
    VL_IN8(rcv_data,0,0);
    VL_IN8(timeout_flag,0,0);
    VL_IN8(TCP_control_rx,7,0);
    VL_IN8(offset_rx,3,0);
    VL_IN8(SYN_sent,0,0);
    VL_IN8(ACK_sent,0,0);
    VL_IN8(FIN_sent,0,0);
    VL_IN8(end_ss,0,0);
    VL_IN8(seq_up,0,0);
    VL_OUT8(TCP_stop_flg,0,0);
    VL_OUT8(TCP_control_tx,7,0);
    VL_OUT8(offset_tx,3,0);
    CData/*6:0*/ ether_TX__DOT__my_TCP_flow_ctrl__DOT__state;
    CData/*6:0*/ ether_TX__DOT__my_TCP_flow_ctrl__DOT__nstate;
    CData/*7:0*/ ether_TX__DOT__my_TCP_flow_ctrl__DOT__tx_pkg_type;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__CLK__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__nRST__0;
    CData/*0:0*/ __VactContinue;
    VL_IN16(window_size_rx,15,0);
    VL_IN16(checksum_rx,15,0);
    VL_IN16(urgent_pointer_rx,15,0);
    VL_OUT16(window_size_tx,15,0);
    VL_OUT16(checksum_tx,15,0);
    VL_OUT16(urgent_pointer_tx,15,0);
    SData/*15:0*/ ether_TX__DOT__my_TCP_flow_ctrl__DOT__window_size;
    SData/*15:0*/ ether_TX__DOT__my_TCP_flow_ctrl__DOT__nwindow_size;
    VL_IN(seq_num_rx,31,0);
    VL_IN(ACK_rx,31,0);
    VL_IN(payload_len_rx,31,0);
    VL_IN(ISN_num,31,0);
    VL_IN(bytes_sent,31,0);
    VL_IN(bytes_abt_sent,31,0);
    VL_OUT(TCP_len_data,31,0);
    VL_OUT(seq_num_tx,31,0);
    VL_OUT(ACK_tx,31,0);
    IData/*31:0*/ ether_TX__DOT__my_TCP_flow_ctrl__DOT__bytes_in_flight;
    IData/*17:0*/ ether_TX__DOT__my_TCP_flow_ctrl__DOT__start_ptr;
    IData/*17:0*/ ether_TX__DOT__my_TCP_flow_ctrl__DOT__incr_ptr;
    IData/*17:0*/ ether_TX__DOT__my_TCP_flow_ctrl__DOT__nstart_ptr;
    IData/*17:0*/ ether_TX__DOT__my_TCP_flow_ctrl__DOT__nincr_ptr;
    IData/*17:0*/ ether_TX__DOT__my_TCP_flow_ctrl__DOT__trk_ptr;
    IData/*17:0*/ ether_TX__DOT__my_TCP_flow_ctrl__DOT__ntrk_ptr;
    IData/*31:0*/ ether_TX__DOT__my_TCP_flow_ctrl__DOT__rcv_next;
    IData/*31:0*/ ether_TX__DOT__my_TCP_flow_ctrl__DOT__nrcv_next;
    IData/*31:0*/ ether_TX__DOT__my_TCP_flow_ctrl__DOT____Vlvbound_h64428630__0;
    IData/*31:0*/ ether_TX__DOT__my_TCP_flow_ctrl__DOT____Vlvbound_hcac8f00c__0;
    IData/*31:0*/ __VactIterCount;
    QData/*33:0*/ ether_TX__DOT__my_TCP_flow_ctrl__DOT__ack_num;
    QData/*33:0*/ ether_TX__DOT__my_TCP_flow_ctrl__DOT__nack_num;
    QData/*32:0*/ ether_TX__DOT__my_TCP_flow_ctrl__DOT__seq_num;
    QData/*32:0*/ ether_TX__DOT__my_TCP_flow_ctrl__DOT__nseq_num;
    VlWide<36>/*1151:0*/ ether_TX__DOT__my_TCP_flow_ctrl__DOT__TCP_out_order;
    VlWide<36>/*1151:0*/ ether_TX__DOT__my_TCP_flow_ctrl__DOT__nTCP_out_order;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vether_TX__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vether_TX___024root(Vether_TX__Syms* symsp, const char* v__name);
    ~Vether_TX___024root();
    VL_UNCOPYABLE(Vether_TX___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
