// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTCP.h for the primary calling header

#include "VTCP__pch.h"
#include "VTCP__Syms.h"
#include "VTCP___024root.h"

void VTCP___024root___ctor_var_reset(VTCP___024root* vlSelf);

VTCP___024root::VTCP___024root(VTCP__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTCP___024root___ctor_var_reset(this);
}

void VTCP___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VTCP___024root::~VTCP___024root() {
}
