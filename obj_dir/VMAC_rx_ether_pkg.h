// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMAC_rx.h for the primary calling header

#ifndef VERILATED_VMAC_RX_ETHER_PKG_H_
#define VERILATED_VMAC_RX_ETHER_PKG_H_  // guard

#include "verilated.h"


class VMAC_rx__Syms;

class alignas(VL_CACHE_LINE_BYTES) VMAC_rx_ether_pkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VMAC_rx__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMAC_rx_ether_pkg(VMAC_rx__Syms* symsp, const char* v__name);
    ~VMAC_rx_ether_pkg();
    VL_UNCOPYABLE(VMAC_rx_ether_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
