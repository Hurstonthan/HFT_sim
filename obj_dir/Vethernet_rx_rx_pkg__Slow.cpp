// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vethernet_rx.h for the primary calling header

#include "Vethernet_rx__pch.h"
#include "Vethernet_rx__Syms.h"
#include "Vethernet_rx_rx_pkg.h"

void Vethernet_rx_rx_pkg___ctor_var_reset(Vethernet_rx_rx_pkg* vlSelf);

Vethernet_rx_rx_pkg::Vethernet_rx_rx_pkg(Vethernet_rx__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vethernet_rx_rx_pkg___ctor_var_reset(this);
}

void Vethernet_rx_rx_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vethernet_rx_rx_pkg::~Vethernet_rx_rx_pkg() {
}
