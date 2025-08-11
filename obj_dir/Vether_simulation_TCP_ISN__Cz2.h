// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vether_simulation.h for the primary calling header

#ifndef VERILATED_VETHER_SIMULATION_TCP_ISN__CZ2_H_
#define VERILATED_VETHER_SIMULATION_TCP_ISN__CZ2_H_  // guard

#include "verilated.h"


class Vether_simulation__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vether_simulation_TCP_ISN__Cz2 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__CLK,0,0);
    VL_IN8(__PVT__nRST,0,0);
    VL_IN8(__PVT__gen_en,0,0);
    VL_OUT(__PVT__ISN_num,31,0);
    IData/*31:0*/ __PVT__counter;
    IData/*31:0*/ __Vdly__counter;
    IData/*31:0*/ __Vdly__ISN_num;

    // INTERNAL VARIABLES
    Vether_simulation__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vether_simulation_TCP_ISN__Cz2(Vether_simulation__Syms* symsp, const char* v__name);
    ~Vether_simulation_TCP_ISN__Cz2();
    VL_UNCOPYABLE(Vether_simulation_TCP_ISN__Cz2);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
