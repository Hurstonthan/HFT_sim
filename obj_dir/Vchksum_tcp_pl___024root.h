// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vchksum_tcp_pl.h for the primary calling header

#ifndef VERILATED_VCHKSUM_TCP_PL___024ROOT_H_
#define VERILATED_VCHKSUM_TCP_PL___024ROOT_H_  // guard

#include "verilated.h"
class Vchksum_tcp_pl_chksum_tcp_pl;
class Vchksum_tcp_pl_ether_pkg;
class Vchksum_tcp_pl_rx_pkg;


class Vchksum_tcp_pl__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vchksum_tcp_pl___024root final : public VerilatedModule {
  public:
    // CELLS
    Vchksum_tcp_pl_chksum_tcp_pl* __PVT__chksum_tcp_pl;
    Vchksum_tcp_pl_rx_pkg* __PVT__rx_pkg;
    Vchksum_tcp_pl_ether_pkg* __PVT__ether_pkg;

    // DESIGN SPECIFIC STATE
    VL_IN8(CLK,0,0);
    VL_IN8(nRST,0,0);
    VL_IN8(FIFO_rd_en,0,0);
    VL_IN8(clear,0,0);
    CData/*0:0*/ __VstlExecute;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlContinue;
    CData/*0:0*/ __VicoExecute;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VicoContinue;
    CData/*0:0*/ __Vtrigprevexpr___TOP__chksum_tcp_pl__CLK__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__chksum_tcp_pl__nRST__0;
    CData/*0:0*/ __VactExecute;
    CData/*0:0*/ __VactFirstIteration;
    CData/*0:0*/ __VactContinue;
    CData/*0:0*/ __VnbaExecute;
    CData/*0:0*/ __VnbaFirstIteration;
    CData/*0:0*/ __VnbaContinue;
    VL_OUT16(TCP_checksum_pl,15,0);
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VnbaIterCount;
    VL_IN64(TCP_payload_tx,63,0);
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VpreTriggered;
    VlTriggerVec<2> __VnbaTriggered;

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
