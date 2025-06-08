// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_TX.h for the primary calling header

#include "Vether_TX__pch.h"
#include "Vether_TX__Syms.h"
#include "Vether_TX___024root.h"

void Vether_TX___024root___ctor_var_reset(Vether_TX___024root* vlSelf);

Vether_TX___024root::Vether_TX___024root(Vether_TX__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vether_TX___024root___ctor_var_reset(this);
}

void Vether_TX___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vether_TX___024root::~Vether_TX___024root() {
}
