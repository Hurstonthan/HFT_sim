// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VIP_tx.h for the primary calling header

#ifndef VERILATED_VIP_TX___024ROOT_H_
#define VERILATED_VIP_TX___024ROOT_H_  // guard

#include "verilated.h"


class VIP_tx__Syms;

class alignas(VL_CACHE_LINE_BYTES) VIP_tx___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(CLK,0,0);
    VL_IN8(nRST,0,0);
    VL_IN8(IP_send,0,0);
    CData/*6:0*/ IP_tx__DOT__IP_state;
    CData/*6:0*/ IP_tx__DOT__nxIP_state;
    CData/*0:0*/ IP_tx__DOT__chk_sum_valid;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__CLK__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__nRST__0;
    CData/*0:0*/ __VactContinue;
    VL_IN16(TCP_len_data,15,0);
    IData/*16:0*/ IP_tx__DOT__IPv4_chk_sum;
    IData/*16:0*/ IP_tx__DOT__nIPv4_chk_sum;
    IData/*31:0*/ __VactIterCount;
    VL_OUT64(IP_transmit,63,0);
    QData/*63:0*/ IP_tx__DOT__nxIP_transmit_l;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VIP_tx__Syms* const vlSymsp;

    // CONSTRUCTORS
    VIP_tx___024root(VIP_tx__Syms* symsp, const char* v__name);
    ~VIP_tx___024root();
    VL_UNCOPYABLE(VIP_tx___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
