// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vpayload_FIFO__pch.h"
#include "Vpayload_FIFO.h"
#include "Vpayload_FIFO___024root.h"

// FUNCTIONS
Vpayload_FIFO__Syms::~Vpayload_FIFO__Syms()
{
}

Vpayload_FIFO__Syms::Vpayload_FIFO__Syms(VerilatedContext* contextp, const char* namep, Vpayload_FIFO* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(177);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-8);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
