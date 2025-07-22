// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VFIFO_TX__pch.h"
#include "VFIFO_TX.h"
#include "VFIFO_TX___024root.h"

// FUNCTIONS
VFIFO_TX__Syms::~VFIFO_TX__Syms()
{
}

VFIFO_TX__Syms::VFIFO_TX__Syms(VerilatedContext* contextp, const char* namep, VFIFO_TX* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(57);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
