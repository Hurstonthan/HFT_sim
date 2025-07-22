// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpayload_FIFO.h for the primary calling header

#ifndef VERILATED_VPAYLOAD_FIFO___024ROOT_H_
#define VERILATED_VPAYLOAD_FIFO___024ROOT_H_  // guard

#include "verilated.h"


class Vpayload_FIFO__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpayload_FIFO___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(CLK,0,0);
    VL_IN8(nRST,0,0);
    VL_IN8(nw_segment,0,0);
    VL_IN8(TCP_flush,0,0);
    VL_IN8(axis_t_last,0,0);
    VL_IN8(handshake_done,0,0);
    VL_IN8(wr_FIFO_en,0,0);
    VL_IN8(wr_FIFO_offset,7,0);
    VL_OUT8(wr_ptr_out,2,0);
    VL_OUT8(wr_FIFO_len,2,0);
    VL_IN8(rd_FIFO_valid,0,0);
    VL_IN8(rd_FIFO_ptr,2,0);
    VL_IN8(rd_FIFO_len,2,0);
    VL_OUT8(rd_FIFO_en,0,0);
    VL_OUT8(full,0,0);
    VL_IN8(axis_r_en,0,0);
    VL_OUT8(axis_r_valid,0,0);
    CData/*2:0*/ payload_FIFO__DOT__flush_ptr;
    CData/*2:0*/ payload_FIFO__DOT__nflush_ptr;
    CData/*2:0*/ payload_FIFO__DOT__len_TCP_flush;
    CData/*2:0*/ payload_FIFO__DOT__nlen_TCP_flush;
    CData/*2:0*/ payload_FIFO__DOT__rd_len_ptr;
    CData/*0:0*/ payload_FIFO__DOT__rd_FIFO_valid_l;
    CData/*0:0*/ payload_FIFO__DOT__nrd_FIFO_valid_l;
    CData/*0:0*/ payload_FIFO__DOT__naxis_r_valid;
    CData/*0:0*/ payload_FIFO__DOT__TCP_flush_l;
    CData/*0:0*/ payload_FIFO__DOT__nTCP_flush_l;
    CData/*2:0*/ payload_FIFO__DOT__wr_ptr;
    CData/*2:0*/ payload_FIFO__DOT__nwr_ptr;
    CData/*2:0*/ payload_FIFO__DOT__rd_ptr;
    CData/*2:0*/ payload_FIFO__DOT__nrd_ptr;
    CData/*7:0*/ payload_FIFO__DOT____Vlvbound_hfce51f23__0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__CLK__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__nRST__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(seq_rcv_start,31,0);
    VL_OUT(seq_rx_FIFO_rd,31,0);
    IData/*31:0*/ payload_FIFO__DOT__seq_trk_rd;
    IData/*31:0*/ payload_FIFO__DOT__nseq_trk_rd;
    IData/*31:0*/ payload_FIFO__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VL_IN64(axis_data_rx,63,0);
    VL_OUT64(axis_rd_data,63,0);
    VlWide<3>/*71:0*/ payload_FIFO__DOT__fifo_entry_rd;
    VlWide<3>/*71:0*/ payload_FIFO__DOT____Vlvbound_h83587f98__0;
    QData/*63:0*/ payload_FIFO__DOT____Vlvbound_h5d12e1c7__0;
    VlUnpacked<VlWide<3>/*71:0*/, 5> payload_FIFO__DOT__TCP_FIFO;
    VlUnpacked<VlWide<3>/*71:0*/, 5> payload_FIFO__DOT__nTCP_FIFO;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vpayload_FIFO__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpayload_FIFO___024root(Vpayload_FIFO__Syms* symsp, const char* v__name);
    ~Vpayload_FIFO___024root();
    VL_UNCOPYABLE(Vpayload_FIFO___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
