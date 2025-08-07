// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vethernet_rx.h for the primary calling header

#include "Vethernet_rx__pch.h"
#include "Vethernet_rx__Syms.h"
#include "Vethernet_rx___024root.h"

void Vethernet_rx___024root___ctor_var_reset(Vethernet_rx___024root* vlSelf);

Vethernet_rx___024root::Vethernet_rx___024root(Vethernet_rx__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vethernet_rx___024root___ctor_var_reset(this);
}

void Vethernet_rx___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vethernet_rx___024root::~Vethernet_rx___024root() {
}
