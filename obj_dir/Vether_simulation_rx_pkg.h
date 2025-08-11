// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vether_simulation.h for the primary calling header

#ifndef VERILATED_VETHER_SIMULATION_RX_PKG_H_
#define VERILATED_VETHER_SIMULATION_RX_PKG_H_  // guard

#include "verilated.h"


class Vether_simulation__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vether_simulation_rx_pkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vether_simulation__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vether_simulation_rx_pkg(Vether_simulation__Syms* symsp, const char* v__name);
    ~Vether_simulation_rx_pkg();
    VL_UNCOPYABLE(Vether_simulation_rx_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
