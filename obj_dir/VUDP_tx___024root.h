// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUDP_tx.h for the primary calling header

#ifndef VERILATED_VUDP_TX___024ROOT_H_
#define VERILATED_VUDP_TX___024ROOT_H_  // guard

#include "verilated.h"


class VUDP_tx__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUDP_tx___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(CLK,0,0);
    VL_IN8(nRST,0,0);
    VL_IN8(UDP_valid,0,0);
    VL_IN8(UDP_last,0,0);
    VL_OUT8(IP_valid,0,0);
    VL_OUT8(IP_last,0,0);
    CData/*1:0*/ UDP_tx__DOT__current_state;
    CData/*1:0*/ UDP_tx__DOT__nstate;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__CLK__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__nRST__0;
    CData/*0:0*/ __VactContinue;
    VL_IN16(UDP_len,15,0);
    VL_IN16(UDP_src_port,15,0);
    VL_IN16(UDP_dest_port,15,0);
    IData/*31:0*/ __VactIterCount;
    VL_IN64(UDP_payload,63,0);
    VL_OUT64(IP_payload,63,0);
    QData/*63:0*/ UDP_tx__DOT__header_reg;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VUDP_tx__Syms* const vlSymsp;

    // CONSTRUCTORS
    VUDP_tx___024root(VUDP_tx__Syms* symsp, const char* v__name);
    ~VUDP_tx___024root();
    VL_UNCOPYABLE(VUDP_tx___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
