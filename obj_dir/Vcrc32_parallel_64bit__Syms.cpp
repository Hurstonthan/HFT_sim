// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vcrc32_parallel_64bit__pch.h"
#include "Vcrc32_parallel_64bit.h"
#include "Vcrc32_parallel_64bit___024root.h"

// FUNCTIONS
Vcrc32_parallel_64bit__Syms::~Vcrc32_parallel_64bit__Syms()
{
}

Vcrc32_parallel_64bit__Syms::Vcrc32_parallel_64bit__Syms(VerilatedContext* contextp, const char* namep, Vcrc32_parallel_64bit* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(25);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-11);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
