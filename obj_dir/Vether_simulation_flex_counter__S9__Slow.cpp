// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation__Syms.h"
#include "Vether_simulation_flex_counter__S9.h"

void Vether_simulation_flex_counter__S9___ctor_var_reset(Vether_simulation_flex_counter__S9* vlSelf);

Vether_simulation_flex_counter__S9::Vether_simulation_flex_counter__S9(Vether_simulation__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vether_simulation_flex_counter__S9___ctor_var_reset(this);
}

void Vether_simulation_flex_counter__S9::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vether_simulation_flex_counter__S9::~Vether_simulation_flex_counter__S9() {
}
