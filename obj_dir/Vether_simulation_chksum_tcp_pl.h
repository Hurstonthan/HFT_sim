// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vether_simulation.h for the primary calling header

#ifndef VERILATED_VETHER_SIMULATION_CHKSUM_TCP_PL_H_
#define VERILATED_VETHER_SIMULATION_CHKSUM_TCP_PL_H_  // guard

#include "verilated.h"


class Vether_simulation__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vether_simulation_chksum_tcp_pl final : public VerilatedModule {
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
    Vether_simulation__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vether_simulation_chksum_tcp_pl(Vether_simulation__Syms* symsp, const char* v__name);
    ~Vether_simulation_chksum_tcp_pl();
    VL_UNCOPYABLE(Vether_simulation_chksum_tcp_pl);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
