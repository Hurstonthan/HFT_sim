// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_TX.h for the primary calling header

#include "Vether_TX__pch.h"
#include "Vether_TX_TCP_flow_if.h"

VL_ATTR_COLD void Vether_TX_TCP_flow_if___ctor_var_reset(Vether_TX_TCP_flow_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_TX_TCP_flow_if___ctor_var_reset\n"); );
    Vether_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__TCP_tx_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8269560893833140337ull);
    vlSelf->seq_num_tx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15452675836633821188ull);
    vlSelf->ACK_tx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13840256559930938490ull);
    vlSelf->checksum_tx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6497913269903047936ull);
    vlSelf->TCP_stop_flg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4843867744612491753ull);
}
