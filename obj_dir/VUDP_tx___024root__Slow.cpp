// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUDP_tx.h for the primary calling header

#include "VUDP_tx__pch.h"
#include "VUDP_tx__Syms.h"
#include "VUDP_tx___024root.h"

void VUDP_tx___024root___ctor_var_reset(VUDP_tx___024root* vlSelf);

VUDP_tx___024root::VUDP_tx___024root(VUDP_tx__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VUDP_tx___024root___ctor_var_reset(this);
}

void VUDP_tx___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VUDP_tx___024root::~VUDP_tx___024root() {
}
