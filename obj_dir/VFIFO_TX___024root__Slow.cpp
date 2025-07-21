// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFIFO_TX.h for the primary calling header

#include "VFIFO_TX__pch.h"
#include "VFIFO_TX__Syms.h"
#include "VFIFO_TX___024root.h"

void VFIFO_TX___024root___ctor_var_reset(VFIFO_TX___024root* vlSelf);

VFIFO_TX___024root::VFIFO_TX___024root(VFIFO_TX__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VFIFO_TX___024root___ctor_var_reset(this);
}

void VFIFO_TX___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VFIFO_TX___024root::~VFIFO_TX___024root() {
}
