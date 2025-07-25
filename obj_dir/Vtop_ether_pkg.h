// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_ETHER_PKG_H_
#define VERILATED_VTOP_ETHER_PKG_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_ether_pkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_ether_pkg(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_ether_pkg();
    VL_UNCOPYABLE(Vtop_ether_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
