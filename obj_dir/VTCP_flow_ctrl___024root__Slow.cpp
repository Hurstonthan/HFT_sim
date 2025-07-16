// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTCP_flow_ctrl.h for the primary calling header

#include "VTCP_flow_ctrl__pch.h"
#include "VTCP_flow_ctrl__Syms.h"
#include "VTCP_flow_ctrl___024root.h"

void VTCP_flow_ctrl___024root___ctor_var_reset(VTCP_flow_ctrl___024root* vlSelf);

VTCP_flow_ctrl___024root::VTCP_flow_ctrl___024root(VTCP_flow_ctrl__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTCP_flow_ctrl___024root___ctor_var_reset(this);
}

void VTCP_flow_ctrl___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VTCP_flow_ctrl___024root::~VTCP_flow_ctrl___024root() {
}
