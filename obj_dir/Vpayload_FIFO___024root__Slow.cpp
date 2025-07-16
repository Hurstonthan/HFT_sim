// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpayload_FIFO.h for the primary calling header

#include "Vpayload_FIFO__pch.h"
#include "Vpayload_FIFO__Syms.h"
#include "Vpayload_FIFO___024root.h"

void Vpayload_FIFO___024root___ctor_var_reset(Vpayload_FIFO___024root* vlSelf);

Vpayload_FIFO___024root::Vpayload_FIFO___024root(Vpayload_FIFO__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vpayload_FIFO___024root___ctor_var_reset(this);
}

void Vpayload_FIFO___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vpayload_FIFO___024root::~Vpayload_FIFO___024root() {
}
