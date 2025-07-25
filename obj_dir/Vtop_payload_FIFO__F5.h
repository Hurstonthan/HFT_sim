// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_PAYLOAD_FIFO__F5_H_
#define VERILATED_VTOP_PAYLOAD_FIFO__F5_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_payload_FIFO__F5 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__CLK,0,0);
        VL_IN8(__PVT__nRST,0,0);
        VL_IN8(__PVT__nw_segment,0,0);
        VL_IN8(__PVT__TCP_flush,0,0);
        VL_IN8(__PVT__axis_t_last,0,0);
        VL_IN8(__PVT__handshake_done,0,0);
        VL_IN8(__PVT__wr_FIFO_en,0,0);
        VL_IN8(__PVT__wr_FIFO_offset,7,0);
        VL_OUT8(__PVT__wr_ptr_out,2,0);
        VL_OUT8(__PVT__wr_FIFO_len,2,0);
        VL_IN8(__PVT__rd_FIFO_valid,0,0);
        VL_IN8(__PVT__rd_FIFO_ptr,2,0);
        VL_IN8(__PVT__rd_FIFO_len,2,0);
        VL_OUT8(__PVT__rd_FIFO_en,0,0);
        VL_OUT8(__PVT__full,0,0);
        VL_IN8(__PVT__axis_r_en,0,0);
        VL_OUT8(__PVT__axis_r_valid,0,0);
        CData/*2:0*/ __PVT__flush_ptr;
        CData/*2:0*/ __PVT__nflush_ptr;
        CData/*2:0*/ __PVT__len_TCP_flush;
        CData/*2:0*/ __PVT__nlen_TCP_flush;
        CData/*2:0*/ __PVT__rd_len_ptr;
        CData/*3:0*/ __PVT__bytes_len;
        CData/*0:0*/ __PVT__rd_FIFO_valid_l;
        CData/*0:0*/ __PVT__nrd_FIFO_valid_l;
        CData/*0:0*/ __PVT__naxis_r_valid;
        CData/*0:0*/ __PVT__TCP_flush_l;
        CData/*0:0*/ __PVT__nTCP_flush_l;
        CData/*7:0*/ __PVT__bytes_offset1;
        CData/*7:0*/ __PVT__bytes_offset2;
        CData/*7:0*/ __PVT__bytes_offset3;
        CData/*7:0*/ __PVT__bytes_offset4;
        CData/*7:0*/ __PVT__bytes_offset5;
        CData/*2:0*/ __PVT__wr_ptr;
        CData/*2:0*/ __PVT__nwr_ptr;
        CData/*2:0*/ __PVT__rd_ptr;
        CData/*2:0*/ __PVT__nrd_ptr;
        CData/*7:0*/ __Vlvbound_h48178a4d__0;
        CData/*2:0*/ __Vdly__wr_ptr;
        CData/*2:0*/ __Vdly__rd_ptr;
        CData/*0:0*/ __Vdly__rd_FIFO_en;
        CData/*2:0*/ __Vdly__flush_ptr;
        CData/*2:0*/ __Vdly__len_TCP_flush;
        CData/*0:0*/ __Vdly__axis_r_valid;
        CData/*0:0*/ __Vdly__TCP_flush_l;
        CData/*2:0*/ __Vdly__wr_FIFO_len;
        CData/*2:0*/ __Vdly__wr_ptr_out;
        CData/*2:0*/ __Vdly__rd_len_ptr;
        CData/*0:0*/ __VdlySet__TCP_FIFO__v0;
        CData/*2:0*/ __VdlyDim0__TCP_FIFO__v5;
        CData/*0:0*/ __VdlySet__TCP_FIFO__v5;
        CData/*0:0*/ __VdlySet__TCP_FIFO__v6;
        CData/*0:0*/ __VdlySet__TCP_FIFO__v7;
        CData/*0:0*/ __VdlySet__TCP_FIFO__v8;
        CData/*0:0*/ __VdlySet__TCP_FIFO__v9;
        CData/*0:0*/ __VdlySet__TCP_FIFO__v10;
        VL_IN(__PVT__seq_rcv_start,31,0);
        VL_OUT(__PVT__seq_rx_FIFO_rd,31,0);
        IData/*31:0*/ __PVT__seq_trk_rd;
        IData/*31:0*/ __PVT__nseq_trk_rd;
        IData/*31:0*/ __PVT__unnamedblk1__DOT__i;
        IData/*31:0*/ __Vdly__seq_rx_FIFO_rd;
        IData/*31:0*/ __Vdly__seq_trk_rd;
        VL_IN64(__PVT__axis_data_rx,63,0);
    };
    struct {
        VL_OUT64(__PVT__axis_rd_data,63,0);
        VlWide<3>/*71:0*/ __PVT__fifo_entry_rd;
        QData/*63:0*/ __PVT__payload1;
        QData/*63:0*/ __PVT__payload2;
        QData/*63:0*/ __PVT__payload3;
        QData/*63:0*/ __PVT__payload4;
        QData/*63:0*/ __PVT__payload5;
        VlWide<3>/*71:0*/ __Vlvbound_he08b30c9__0;
        VlWide<3>/*71:0*/ __Vlvbound_hbbd841ec__0;
        QData/*63:0*/ __Vlvbound_hf0dde044__0;
        QData/*63:0*/ __Vdly__axis_rd_data;
        VlWide<3>/*71:0*/ __VdlyVal__TCP_FIFO__v0;
        VlWide<3>/*71:0*/ __VdlyVal__TCP_FIFO__v1;
        VlWide<3>/*71:0*/ __VdlyVal__TCP_FIFO__v2;
        VlWide<3>/*71:0*/ __VdlyVal__TCP_FIFO__v3;
        VlWide<3>/*71:0*/ __VdlyVal__TCP_FIFO__v4;
        VlWide<3>/*71:0*/ __VdlyVal__TCP_FIFO__v5;
        VlWide<3>/*71:0*/ __VdlyVal__TCP_FIFO__v6;
        VlWide<3>/*71:0*/ __VdlyVal__TCP_FIFO__v7;
        VlWide<3>/*71:0*/ __VdlyVal__TCP_FIFO__v8;
        VlWide<3>/*71:0*/ __VdlyVal__TCP_FIFO__v9;
        VlWide<3>/*71:0*/ __VdlyVal__TCP_FIFO__v10;
        VlUnpacked<VlWide<3>/*71:0*/, 5> __PVT__TCP_FIFO;
        VlUnpacked<VlWide<3>/*71:0*/, 5> __PVT__nTCP_FIFO;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_payload_FIFO__F5(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_payload_FIFO__F5();
    VL_UNCOPYABLE(Vtop_payload_FIFO__F5);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
