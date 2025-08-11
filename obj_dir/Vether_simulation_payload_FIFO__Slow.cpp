// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation__Syms.h"
#include "Vether_simulation_payload_FIFO.h"

void Vether_simulation_payload_FIFO___ctor_var_reset(Vether_simulation_payload_FIFO* vlSelf);

Vether_simulation_payload_FIFO::Vether_simulation_payload_FIFO(Vether_simulation__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vether_simulation_payload_FIFO___ctor_var_reset(this);
}

void Vether_simulation_payload_FIFO::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vether_simulation_payload_FIFO::~Vether_simulation_payload_FIFO() {
}
