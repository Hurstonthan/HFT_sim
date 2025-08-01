// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vethernet_rx.h for the primary calling header

#include "Vethernet_rx__pch.h"
#include "Vethernet_rx_ethernet_rx.h"

VL_ATTR_COLD void Vethernet_rx_ethernet_rx___ctor_var_reset(Vethernet_rx_ethernet_rx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vethernet_rx_ethernet_rx___ctor_var_reset\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->CLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6192783415628501865ull);
    vlSelf->nRST = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9596079045119723318ull);
    vlSelf->xgmii_rxd = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14365979020943574069ull);
    vlSelf->xgmii_rxc = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11892103045410615185ull);
    vlSelf->IP_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10454921636400644467ull);
    vlSelf->IP_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7370612069209852218ull);
    vlSelf->IP_payload = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16509947563924968673ull);
    vlSelf->is_udp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8635861780934784090ull);
    vlSelf->is_tcp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1011679135266419320ull);
    vlSelf->__PVT__MAC_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16882839068407703899ull);
    vlSelf->__PVT__MAC_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5567373176478683438ull);
    vlSelf->__PVT__MAC_payload_rcv = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4151267856945533676ull);
    vlSelf->__PVT__bytes_rcv_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8940703865407227134ull);
    vlSelf->__PVT__frame_ok = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2537328812920291937ull);
}
