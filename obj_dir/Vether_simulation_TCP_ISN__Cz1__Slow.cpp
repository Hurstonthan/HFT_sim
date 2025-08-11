// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation_TCP_ISN__Cz1.h"
#include "Vether_simulation__Syms.h"

void Vether_simulation_TCP_ISN__Cz1___ctor_var_reset(Vether_simulation_TCP_ISN__Cz1* vlSelf);

Vether_simulation_TCP_ISN__Cz1::Vether_simulation_TCP_ISN__Cz1(Vether_simulation__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vether_simulation_TCP_ISN__Cz1___ctor_var_reset(this);
}

void Vether_simulation_TCP_ISN__Cz1::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vether_simulation_TCP_ISN__Cz1::~Vether_simulation_TCP_ISN__Cz1() {
}
