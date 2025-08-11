// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation__Syms.h"
#include "Vether_simulation___024root.h"

void Vether_simulation___024root___ctor_var_reset(Vether_simulation___024root* vlSelf);

Vether_simulation___024root::Vether_simulation___024root(Vether_simulation__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vether_simulation___024root___ctor_var_reset(this);
}

void Vether_simulation___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vether_simulation___024root::~Vether_simulation___024root() {
}
