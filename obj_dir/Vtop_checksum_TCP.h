// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_CHECKSUM_TCP_H_
#define VERILATED_VTOP_CHECKSUM_TCP_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_checksum_TCP final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__CLK,0,0);
    VL_IN8(__PVT__nRST,0,0);
    VL_IN8(__PVT__clear,0,0);
    VL_IN8(__PVT__wr_FIFO_en,0,0);
    VL_IN8(__PVT__axis_last,0,0);
    VL_IN8(__PVT__TX_en,0,0);
    VL_IN8(__PVT__re_trans,0,0);
    CData/*0:0*/ __PVT__up_send;
    VL_OUT16(__PVT__TCP_checksum_out,15,0);
    SData/*15:0*/ __PVT__nTCP_checksum_out;
    SData/*15:0*/ __Vdly__TCP_checksum_out;
    IData/*16:0*/ __PVT__TCP_checksum;
    IData/*16:0*/ __PVT__nTCP_checksum;
    IData/*16:0*/ __PVT__TCP_checksum_send;
    IData/*16:0*/ __PVT__nTCP_checksum_send;
    IData/*19:0*/ __PVT__temp;
    IData/*19:0*/ __PVT__temp1;
    IData/*16:0*/ __Vdly__TCP_checksum;
    IData/*16:0*/ __Vdly__TCP_checksum_send;
    VL_IN64(__PVT__TCP_payload_tx,63,0);

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_checksum_TCP(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_checksum_TCP();
    VL_UNCOPYABLE(Vtop_checksum_TCP);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
