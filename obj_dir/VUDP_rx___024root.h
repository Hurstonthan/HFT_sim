// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUDP_rx.h for the primary calling header

#ifndef VERILATED_VUDP_RX___024ROOT_H_
#define VERILATED_VUDP_RX___024ROOT_H_  // guard

#include "verilated.h"


class VUDP_rx__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUDP_rx___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(CLK,0,0);
    VL_IN8(nRST,0,0);
    VL_IN8(IP_valid,0,0);
    VL_IN8(IP_flush,0,0);
    VL_IN8(is_udp,0,0);
    VL_OUT8(UDP_flush,0,0);
    VL_OUT8(UDP_valid,0,0);
    CData/*2:0*/ UDP_rx__DOT__current_state;
    CData/*2:0*/ UDP_rx__DOT__nstate;
    CData/*0:0*/ UDP_rx__DOT__next_UDP_valid;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__CLK__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__nRST__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ UDP_rx__DOT__cnt;
    SData/*15:0*/ UDP_rx__DOT__next_cnt;
    SData/*15:0*/ UDP_rx__DOT__UDP_len;
    SData/*15:0*/ UDP_rx__DOT__next_UDP_len;
    IData/*31:0*/ __VactIterCount;
    VL_IN64(IP_payload,63,0);
    VL_OUT64(UDP_payload,63,0);
    QData/*63:0*/ UDP_rx__DOT__next_UDP_payload;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VUDP_rx__Syms* const vlSymsp;

    // CONSTRUCTORS
    VUDP_rx___024root(VUDP_rx__Syms* symsp, const char* v__name);
    ~VUDP_rx___024root();
    VL_UNCOPYABLE(VUDP_rx___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
