// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMAC_rx.h for the primary calling header

#ifndef VERILATED_VMAC_RX_XGMII_LITTLE_TO_BIG_H_
#define VERILATED_VMAC_RX_XGMII_LITTLE_TO_BIG_H_  // guard

#include "verilated.h"


class VMAC_rx__Syms;

class alignas(VL_CACHE_LINE_BYTES) VMAC_rx_xgmii_little_to_big final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__xgmii_rxc,7,0);
    VL_OUT8(__PVT__be_rxc,7,0);
    VL_IN64(__PVT__xgmii_rxd,63,0);
    VL_OUT64(__PVT__be_rxd,63,0);

    // INTERNAL VARIABLES
    VMAC_rx__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMAC_rx_xgmii_little_to_big(VMAC_rx__Syms* symsp, const char* v__name);
    ~VMAC_rx_xgmii_little_to_big();
    VL_UNCOPYABLE(VMAC_rx_xgmii_little_to_big);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
