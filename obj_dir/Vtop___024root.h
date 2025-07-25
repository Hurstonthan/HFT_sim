// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
class Vtop_ether_pkg;
class Vtop_top;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtop_top* __PVT__top;
    Vtop_ether_pkg* __PVT__ether_pkg;

    // DESIGN SPECIFIC STATE
    VL_IN8(CLK,0,0);
    VL_IN8(nRST,0,0);
    VL_IN8(IP_valid,0,0);
    VL_IN8(IP_flush,0,0);
    VL_IN8(IP_bytes_rcv,7,0);
    VL_IN8(TCP_send,0,0);
    VL_OUT8(TCP_last,0,0);
    VL_IN8(TX_en,0,0);
    VL_IN8(axis_last,0,0);
    VL_IN8(wr_FIFO_en,0,0);
    VL_IN8(axis_r_en,0,0);
    VL_OUT8(axis_r_valid,0,0);
    VL_OUT8(TCP_stop_flag,0,0);
    VL_OUT8(wr_FIFO_full,0,0);
    CData/*0:0*/ __VstlExecute;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlContinue;
    CData/*0:0*/ __VicoExecute;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VicoContinue;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top__u_fifo_tx____PVT__CLK__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top__u_fifo_tx____PVT__nRST__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top__u_payload_fifo____PVT__CLK__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top__u_payload_fifo____PVT__nRST__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top__u_tcp__ISN_gen____PVT__CLK__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top__u_tcp__ISN_gen____PVT__nRST__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top__u_tcp__inst____PVT__CLK__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top__u_tcp__inst____PVT__nRST__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top__u_tcp__TCP_tx____PVT__CLK__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top__u_tcp__TCP_tx____PVT__nRST__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top__u_tcp__tcp_rcv____PVT__CLK__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top__u_tcp__tcp_rcv____PVT__nRST__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top__u_tcp__tcp_flow____PVT__CLK__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top__u_tcp__tcp_flow____PVT__nRST__0;
    CData/*0:0*/ __VactExecute;
    CData/*0:0*/ __VactFirstIteration;
    CData/*0:0*/ __VactContinue;
    CData/*0:0*/ __VnbaExecute;
    CData/*0:0*/ __VnbaFirstIteration;
    CData/*0:0*/ __VnbaContinue;
    VL_IN16(IP_pseuder,15,0);
    VL_IN16(TCP_len,15,0);
    VL_IN(len_seq,31,0);
    VL_OUT(rcv_next,31,0);
    VL_OUT(seq_num,31,0);
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VnbaIterCount;
    VL_IN64(IP_payload,63,0);
    VL_OUT64(TCP_transmit,63,0);
    VL_IN64(soupbin_TCP_payload,63,0);
    VL_OUT64(axis_rd_data,63,0);
    VlUnpacked<CData/*0:0*/, 13> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<14> __VactTriggered;
    VlTriggerVec<14> __VpreTriggered;
    VlTriggerVec<14> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
