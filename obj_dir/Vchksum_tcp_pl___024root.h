// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vchksum_tcp_pl.h for the primary calling header

#ifndef VERILATED_VCHKSUM_TCP_PL___024ROOT_H_
#define VERILATED_VCHKSUM_TCP_PL___024ROOT_H_  // guard

#include "verilated.h"


class Vchksum_tcp_pl__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vchksum_tcp_pl___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(CLK,0,0);
    VL_IN8(nRST,0,0);
    VL_IN8(FIFO_rd_en,0,0);
    VL_IN8(clear,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__CLK__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__nRST__0;
    CData/*0:0*/ __VactContinue;
    VL_OUT16(TCP_checksum_pl,15,0);
    IData/*16:0*/ chksum_tcp_pl__DOT__TCP_checksum;
    IData/*16:0*/ chksum_tcp_pl__DOT__nTCP_checksum;
    IData/*31:0*/ __VactIterCount;
    VL_IN64(TCP_payload_tx,63,0);
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vchksum_tcp_pl__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vchksum_tcp_pl___024root(Vchksum_tcp_pl__Syms* symsp, const char* v__name);
    ~Vchksum_tcp_pl___024root();
    VL_UNCOPYABLE(Vchksum_tcp_pl___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
