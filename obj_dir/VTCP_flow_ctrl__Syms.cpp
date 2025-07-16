// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VTCP_flow_ctrl__pch.h"
#include "VTCP_flow_ctrl.h"
#include "VTCP_flow_ctrl___024root.h"

// FUNCTIONS
VTCP_flow_ctrl__Syms::~VTCP_flow_ctrl__Syms()
{
}

VTCP_flow_ctrl__Syms::VTCP_flow_ctrl__Syms(VerilatedContext* contextp, const char* namep, VTCP_flow_ctrl* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(81);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-11);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
