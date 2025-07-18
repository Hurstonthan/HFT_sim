// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUDP_rx.h for the primary calling header

#include "VUDP_rx__pch.h"
#include "VUDP_rx__Syms.h"
#include "VUDP_rx___024root.h"

void VUDP_rx___024root___ctor_var_reset(VUDP_rx___024root* vlSelf);

VUDP_rx___024root::VUDP_rx___024root(VUDP_rx__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VUDP_rx___024root___ctor_var_reset(this);
}

void VUDP_rx___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VUDP_rx___024root::~VUDP_rx___024root() {
}
