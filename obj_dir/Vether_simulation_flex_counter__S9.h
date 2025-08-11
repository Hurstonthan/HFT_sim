// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vether_simulation.h for the primary calling header

#ifndef VERILATED_VETHER_SIMULATION_FLEX_COUNTER__S9_H_
#define VERILATED_VETHER_SIMULATION_FLEX_COUNTER__S9_H_  // guard

#include "verilated.h"


class Vether_simulation__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vether_simulation_flex_counter__S9 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__CLK,0,0);
    VL_IN8(__PVT__nRST,0,0);
    VL_IN8(__PVT__clear,0,0);
    VL_IN8(__PVT__count_enable,0,0);
    VL_OUT8(__PVT__rollover_flag,0,0);
    CData/*0:0*/ __PVT__nxt_rollover_flag;
    CData/*0:0*/ __Vdly__rollover_flag;
    VL_IN16(__PVT__rollover_val,8,0);
    VL_IN16(__PVT__initial_val,8,0);
    VL_OUT16(__PVT__count_out,8,0);
    SData/*8:0*/ __PVT__nxt_count_out;
    SData/*8:0*/ __Vdly__count_out;

    // INTERNAL VARIABLES
    Vether_simulation__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vether_simulation_flex_counter__S9(Vether_simulation__Syms* symsp, const char* v__name);
    ~Vether_simulation_flex_counter__S9();
    VL_UNCOPYABLE(Vether_simulation_flex_counter__S9);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
