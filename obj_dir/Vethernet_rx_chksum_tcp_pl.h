// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vethernet_rx.h for the primary calling header

#ifndef VERILATED_VETHERNET_RX_CHKSUM_TCP_PL_H_
#define VERILATED_VETHERNET_RX_CHKSUM_TCP_PL_H_  // guard

#include "verilated.h"


class Vethernet_rx__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vethernet_rx_chksum_tcp_pl final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__CLK,0,0);
    VL_IN8(__PVT__nRST,0,0);
    VL_IN8(__PVT__FIFO_rd_en,0,0);
    VL_IN8(__PVT__clear,0,0);
    VL_OUT16(__PVT__TCP_checksum_pl,15,0);
    IData/*16:0*/ __PVT__TCP_checksum;
    IData/*16:0*/ __PVT__nTCP_checksum;
    IData/*19:0*/ __PVT__temp;
    IData/*16:0*/ __Vdly__TCP_checksum;
    VL_IN64(__PVT__TCP_payload_tx,63,0);

    // INTERNAL VARIABLES
    Vethernet_rx__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vethernet_rx_chksum_tcp_pl(Vethernet_rx__Syms* symsp, const char* v__name);
    ~Vethernet_rx_chksum_tcp_pl();
    VL_UNCOPYABLE(Vethernet_rx_chksum_tcp_pl);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
