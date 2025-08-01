// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vethernet_rx.h for the primary calling header

#include "Vethernet_rx__pch.h"
#include "Vethernet_rx__Syms.h"
#include "Vethernet_rx_priority_encoder__W8_Mz1.h"

void Vethernet_rx_priority_encoder__W8_Mz1___ctor_var_reset(Vethernet_rx_priority_encoder__W8_Mz1* vlSelf);

Vethernet_rx_priority_encoder__W8_Mz1::Vethernet_rx_priority_encoder__W8_Mz1(Vethernet_rx__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vethernet_rx_priority_encoder__W8_Mz1___ctor_var_reset(this);
}

void Vethernet_rx_priority_encoder__W8_Mz1::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vethernet_rx_priority_encoder__W8_Mz1::~Vethernet_rx_priority_encoder__W8_Mz1() {
}
