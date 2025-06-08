// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_TX.h for the primary calling header

#include "Vether_TX__pch.h"
#include "Vether_TX_TCP_flow_if.h"
#include "Vether_TX__Syms.h"

void Vether_TX_TCP_flow_if___ctor_var_reset(Vether_TX_TCP_flow_if* vlSelf);

Vether_TX_TCP_flow_if::Vether_TX_TCP_flow_if(Vether_TX__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vether_TX_TCP_flow_if___ctor_var_reset(this);
}

void Vether_TX_TCP_flow_if::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vether_TX_TCP_flow_if::~Vether_TX_TCP_flow_if() {
}
