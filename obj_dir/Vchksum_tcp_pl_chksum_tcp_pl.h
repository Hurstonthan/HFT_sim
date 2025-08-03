// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vchksum_tcp_pl.h for the primary calling header

#ifndef VERILATED_VCHKSUM_TCP_PL_CHKSUM_TCP_PL_H_
#define VERILATED_VCHKSUM_TCP_PL_CHKSUM_TCP_PL_H_  // guard

#include "verilated.h"


class Vchksum_tcp_pl__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vchksum_tcp_pl_chksum_tcp_pl final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(CLK,0,0);
    VL_IN8(nRST,0,0);
    VL_IN8(FIFO_rd_en,0,0);
    VL_IN8(clear,0,0);
    VL_OUT16(TCP_checksum_pl,15,0);
    IData/*16:0*/ __PVT__TCP_checksum;
    IData/*16:0*/ __PVT__nTCP_checksum;
    IData/*19:0*/ __PVT__temp;
    IData/*16:0*/ __Vdly__TCP_checksum;
    VL_IN64(TCP_payload_tx,63,0);

    // INTERNAL VARIABLES
    Vchksum_tcp_pl__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vchksum_tcp_pl_chksum_tcp_pl(Vchksum_tcp_pl__Syms* symsp, const char* v__name);
    ~Vchksum_tcp_pl_chksum_tcp_pl();
    VL_UNCOPYABLE(Vchksum_tcp_pl_chksum_tcp_pl);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
