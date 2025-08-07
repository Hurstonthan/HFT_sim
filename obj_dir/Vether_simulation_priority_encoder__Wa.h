// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vether_simulation.h for the primary calling header

#ifndef VERILATED_VETHER_SIMULATION_PRIORITY_ENCODER__WA_H_
#define VERILATED_VETHER_SIMULATION_PRIORITY_ENCODER__WA_H_  // guard

#include "verilated.h"


class Vether_simulation__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vether_simulation_priority_encoder__Wa final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(__PVT__valid,0,0);
    VL_OUT8(__PVT__idx,3,0);
    VL_IN16(__PVT__din,9,0);
    IData/*31:0*/ __PVT__unnamedblk2__DOT__i;

    // INTERNAL VARIABLES
    Vether_simulation__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vether_simulation_priority_encoder__Wa(Vether_simulation__Syms* symsp, const char* v__name);
    ~Vether_simulation_priority_encoder__Wa();
    VL_UNCOPYABLE(Vether_simulation_priority_encoder__Wa);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
