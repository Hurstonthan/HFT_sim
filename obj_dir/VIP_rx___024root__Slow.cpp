// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIP_rx.h for the primary calling header

#include "VIP_rx__pch.h"
#include "VIP_rx__Syms.h"
#include "VIP_rx___024root.h"

void VIP_rx___024root___ctor_var_reset(VIP_rx___024root* vlSelf);

VIP_rx___024root::VIP_rx___024root(VIP_rx__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VIP_rx___024root___ctor_var_reset(this);
}

void VIP_rx___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VIP_rx___024root::~VIP_rx___024root() {
}
