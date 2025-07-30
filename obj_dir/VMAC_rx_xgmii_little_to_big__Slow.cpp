// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMAC_rx.h for the primary calling header

#include "VMAC_rx__pch.h"
#include "VMAC_rx__Syms.h"
#include "VMAC_rx_xgmii_little_to_big.h"

void VMAC_rx_xgmii_little_to_big___ctor_var_reset(VMAC_rx_xgmii_little_to_big* vlSelf);

VMAC_rx_xgmii_little_to_big::VMAC_rx_xgmii_little_to_big(VMAC_rx__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VMAC_rx_xgmii_little_to_big___ctor_var_reset(this);
}

void VMAC_rx_xgmii_little_to_big::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VMAC_rx_xgmii_little_to_big::~VMAC_rx_xgmii_little_to_big() {
}
