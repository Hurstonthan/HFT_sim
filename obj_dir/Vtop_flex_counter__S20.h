// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_FLEX_COUNTER__S20_H_
#define VERILATED_VTOP_FLEX_COUNTER__S20_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_flex_counter__S20 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__CLK,0,0);
    VL_IN8(__PVT__nRST,0,0);
    VL_IN8(__PVT__clear,0,0);
    VL_IN8(__PVT__count_enable,0,0);
    VL_OUT8(__PVT__rollover_flag,0,0);
    CData/*0:0*/ __PVT__nxt_rollover_flag;
    CData/*0:0*/ __Vdly__rollover_flag;
    VL_IN(__PVT__rollover_val,31,0);
    VL_IN(__PVT__initial_val,31,0);
    VL_OUT(__PVT__count_out,31,0);
    IData/*31:0*/ __PVT__nxt_count_out;
    IData/*31:0*/ __Vdly__count_out;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_flex_counter__S20(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_flex_counter__S20();
    VL_UNCOPYABLE(Vtop_flex_counter__S20);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
