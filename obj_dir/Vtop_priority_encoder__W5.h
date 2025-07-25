// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_PRIORITY_ENCODER__W5_H_
#define VERILATED_VTOP_PRIORITY_ENCODER__W5_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_priority_encoder__W5 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__din,4,0);
    VL_OUT8(__PVT__valid,0,0);
    VL_OUT8(__PVT__idx,2,0);
    IData/*31:0*/ __PVT__unnamedblk2__DOT__i;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_priority_encoder__W5(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_priority_encoder__W5();
    VL_UNCOPYABLE(Vtop_priority_encoder__W5);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
