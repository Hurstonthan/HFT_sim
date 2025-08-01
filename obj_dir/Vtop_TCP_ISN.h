// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_TCP_ISN_H_
#define VERILATED_VTOP_TCP_ISN_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_TCP_ISN final : public VerilatedModule {
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
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_TCP_ISN(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_TCP_ISN();
    VL_UNCOPYABLE(Vtop_TCP_ISN);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
