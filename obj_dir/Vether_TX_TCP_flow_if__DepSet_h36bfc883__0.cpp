// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_TX.h for the primary calling header

#include "Vether_TX__pch.h"
#include "Vether_TX_TCP_flow_if.h"

std::string VL_TO_STRING(const Vether_TX_TCP_flow_if* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_TX_TCP_flow_if::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
