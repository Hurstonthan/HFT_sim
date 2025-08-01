// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vethernet_rx.h for the primary calling header

#ifndef VERILATED_VETHERNET_RX_PRIORITY_ENCODER__W10_MZ1_H_
#define VERILATED_VETHERNET_RX_PRIORITY_ENCODER__W10_MZ1_H_  // guard

#include "verilated.h"


class Vethernet_rx__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vethernet_rx_priority_encoder__W10_Mz1 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(__PVT__valid,0,0);
    VL_OUT8(__PVT__idx,3,0);
    VL_IN16(__PVT__din,15,0);
    IData/*31:0*/ __PVT__unnamedblk2__DOT__i;

    // INTERNAL VARIABLES
    Vethernet_rx__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vethernet_rx_priority_encoder__W10_Mz1(Vethernet_rx__Syms* symsp, const char* v__name);
    ~Vethernet_rx_priority_encoder__W10_Mz1();
    VL_UNCOPYABLE(Vethernet_rx_priority_encoder__W10_Mz1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
