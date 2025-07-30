// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMAC_rx.h for the primary calling header

#include "VMAC_rx__pch.h"
#include "VMAC_rx__Syms.h"
#include "VMAC_rx___024root.h"

void VMAC_rx___024root___ctor_var_reset(VMAC_rx___024root* vlSelf);

VMAC_rx___024root::VMAC_rx___024root(VMAC_rx__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VMAC_rx___024root___ctor_var_reset(this);
}

void VMAC_rx___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VMAC_rx___024root::~VMAC_rx___024root() {
}
