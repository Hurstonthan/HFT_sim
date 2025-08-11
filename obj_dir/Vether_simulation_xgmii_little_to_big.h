// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vether_simulation.h for the primary calling header

#ifndef VERILATED_VETHER_SIMULATION_XGMII_LITTLE_TO_BIG_H_
#define VERILATED_VETHER_SIMULATION_XGMII_LITTLE_TO_BIG_H_  // guard

#include "verilated.h"


class Vether_simulation__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vether_simulation_xgmii_little_to_big final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__xgmii_rxc,7,0);
    VL_OUT8(__PVT__be_rxc,7,0);
    VL_IN64(__PVT__xgmii_rxd,63,0);
    VL_OUT64(__PVT__be_rxd,63,0);

    // INTERNAL VARIABLES
    Vether_simulation__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vether_simulation_xgmii_little_to_big(Vether_simulation__Syms* symsp, const char* v__name);
    ~Vether_simulation_xgmii_little_to_big();
    VL_UNCOPYABLE(Vether_simulation_xgmii_little_to_big);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
