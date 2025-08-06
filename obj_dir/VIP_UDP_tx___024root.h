// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VIP_UDP_tx.h for the primary calling header

#ifndef VERILATED_VIP_UDP_TX___024ROOT_H_
#define VERILATED_VIP_UDP_TX___024ROOT_H_  // guard

#include "verilated.h"


class VIP_UDP_tx__Syms;

class alignas(VL_CACHE_LINE_BYTES) VIP_UDP_tx___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(CLK,0,0);
    VL_IN8(nRST,0,0);
    VL_IN8(valid,0,0);
    VL_IN8(protocol_last,0,0);
    VL_OUT8(IP_last,0,0);
    VL_OUT8(protocol_send,0,0);
    CData/*0:0*/ IP_UDP_tx__DOT__UDP_last;
    CData/*2:0*/ IP_UDP_tx__DOT__udp_tx_inst__DOT__current_state;
    CData/*2:0*/ IP_UDP_tx__DOT__udp_tx_inst__DOT__nstate;
    CData/*2:0*/ IP_UDP_tx__DOT__ip_tx_inst__DOT__IP_state;
    CData/*2:0*/ IP_UDP_tx__DOT__ip_tx_inst__DOT__nxIP_state;
    CData/*0:0*/ IP_UDP_tx__DOT__ip_tx_inst__DOT__chk_sum_valid;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__CLK__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__nRST__0;
    CData/*0:0*/ __VactContinue;
    VL_IN16(UDP_len,15,0);
    VL_OUT16(tt_len_data,15,0);
    SData/*15:0*/ IP_UDP_tx__DOT__udp_tx_inst__DOT__computed_len;
    SData/*15:0*/ IP_UDP_tx__DOT__ip_tx_inst__DOT__ntt_len_data;
    SData/*15:0*/ IP_UDP_tx__DOT__ip_tx_inst__DOT__chksum_rslt;
    IData/*19:0*/ IP_UDP_tx__DOT__ip_tx_inst__DOT__temp;
    IData/*16:0*/ IP_UDP_tx__DOT__ip_tx_inst__DOT__IPv4_chk_sum;
    IData/*16:0*/ IP_UDP_tx__DOT__ip_tx_inst__DOT__nIPv4_chk_sum;
    IData/*31:0*/ __VactIterCount;
    VL_IN64(UDP_payload,63,0);
    VL_OUT64(IP_transmit,63,0);
    QData/*63:0*/ IP_UDP_tx__DOT__IP_payload;
    QData/*63:0*/ IP_UDP_tx__DOT__udp_tx_inst__DOT__next_IP_payload;
    QData/*63:0*/ IP_UDP_tx__DOT__udp_tx_inst__DOT__header_reg;
    QData/*63:0*/ IP_UDP_tx__DOT__ip_tx_inst__DOT__nxIP_transmit_l;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VIP_UDP_tx__Syms* const vlSymsp;

    // CONSTRUCTORS
    VIP_UDP_tx___024root(VIP_UDP_tx__Syms* symsp, const char* v__name);
    ~VIP_UDP_tx___024root();
    VL_UNCOPYABLE(VIP_UDP_tx___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
