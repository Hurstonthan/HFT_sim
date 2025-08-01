// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vethernet_rx.h for the primary calling header

#ifndef VERILATED_VETHERNET_RX_RX_PKG_H_
#define VERILATED_VETHERNET_RX_RX_PKG_H_  // guard

#include "verilated.h"


class Vethernet_rx__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vethernet_rx_rx_pkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vethernet_rx__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vethernet_rx_rx_pkg(Vethernet_rx__Syms* symsp, const char* v__name);
    ~Vethernet_rx_rx_pkg();
    VL_UNCOPYABLE(Vethernet_rx_rx_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
