// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcrc32_parallel_64bit.h for the primary calling header

#ifndef VERILATED_VCRC32_PARALLEL_64BIT___024ROOT_H_
#define VERILATED_VCRC32_PARALLEL_64BIT___024ROOT_H_  // guard

#include "verilated.h"


class Vcrc32_parallel_64bit__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcrc32_parallel_64bit___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(CLK,0,0);
    VL_IN8(nRST,0,0);
    VL_IN8(valid,0,0);
    VL_IN8(crc_init,0,0);
    VL_IN8(rx,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__CLK__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__nRST__0;
    CData/*0:0*/ __VactContinue;
    VL_OUT(crc_out,31,0);
    IData/*31:0*/ crc32_parallel_64bit__DOT__crc_reg;
    IData/*31:0*/ crc32_parallel_64bit__DOT__next_crc;
    IData/*31:0*/ __VactIterCount;
    VL_IN64(data_in,63,0);
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcrc32_parallel_64bit__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcrc32_parallel_64bit___024root(Vcrc32_parallel_64bit__Syms* symsp, const char* v__name);
    ~Vcrc32_parallel_64bit___024root();
    VL_UNCOPYABLE(Vcrc32_parallel_64bit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
