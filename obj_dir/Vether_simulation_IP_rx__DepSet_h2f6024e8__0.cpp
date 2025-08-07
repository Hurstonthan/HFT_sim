// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation_IP_rx.h"

VL_INLINE_OPT void Vether_simulation_IP_rx___nba_sequent__TOP__ether_simulation__svr_inst__ip_rx__1(Vether_simulation_IP_rx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_IP_rx___nba_sequent__TOP__ether_simulation__svr_inst__ip_rx__1\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__IP_bytes_rcv_len = vlSelfRef.__PVT__IP_bytes_rcv_len;
    vlSelfRef.__Vdly__state = vlSelfRef.__PVT__state;
    vlSelfRef.__Vdly__IP_checksum = vlSelfRef.__PVT__IP_checksum;
    vlSelfRef.__Vdly__bytes_rcv = vlSelfRef.__PVT__bytes_rcv;
    vlSelfRef.__Vdly__dst_addr = vlSelfRef.__PVT__dst_addr;
    vlSelfRef.__Vdly__IP_len = vlSelfRef.__PVT__IP_len;
    vlSelfRef.__Vdly__is_tcp = vlSelfRef.__PVT__is_tcp;
    vlSelfRef.__Vdly__is_udp = vlSelfRef.__PVT__is_udp;
    vlSelfRef.__Vdly__IP_valid = vlSelfRef.__PVT__IP_valid;
    vlSelfRef.__Vdly__IP_last = vlSelfRef.__PVT__IP_last;
    vlSelfRef.__Vdly__IP_payload = vlSelfRef.__PVT__IP_payload;
    vlSelfRef.__Vdly__IP_pseuder = vlSelfRef.__PVT__IP_pseuder;
    if (vlSelfRef.__PVT__nRST) {
        vlSelfRef.__Vdly__state = vlSelfRef.__PVT__nstate;
        vlSelfRef.__Vdly__IP_checksum = vlSelfRef.__PVT__nIP_checksum;
        vlSelfRef.__Vdly__IP_payload = vlSelfRef.__PVT__nIP_payload;
        vlSelfRef.__Vdly__bytes_rcv = vlSelfRef.__PVT__nbytes_rcv;
        vlSelfRef.__Vdly__dst_addr = vlSelfRef.__PVT__ndst_addr;
        vlSelfRef.__Vdly__IP_valid = vlSelfRef.__PVT__nIP_valid;
        vlSelfRef.__Vdly__IP_len = vlSelfRef.__PVT__nIP_len;
        vlSelfRef.__Vdly__IP_bytes_rcv_len = vlSelfRef.__PVT__nIP_bytes_rcv_len;
        vlSelfRef.__Vdly__IP_last = vlSelfRef.__PVT__nIP_last;
        vlSelfRef.__Vdly__IP_pseuder = vlSelfRef.__PVT__nIP_pseuder;
        vlSelfRef.__Vdly__is_tcp = vlSelfRef.__PVT__next_is_tcp;
        vlSelfRef.__Vdly__is_udp = vlSelfRef.__PVT__next_is_udp;
    } else {
        vlSelfRef.__Vdly__state = 0U;
        vlSelfRef.__Vdly__IP_checksum = 0U;
        vlSelfRef.__Vdly__IP_payload = 0ULL;
        vlSelfRef.__Vdly__bytes_rcv = 0U;
        vlSelfRef.__Vdly__dst_addr = 0U;
        vlSelfRef.__Vdly__IP_valid = 0U;
        vlSelfRef.__Vdly__IP_last = 0U;
        vlSelfRef.__Vdly__IP_len = 0U;
        vlSelfRef.__Vdly__is_tcp = 0U;
        vlSelfRef.__Vdly__is_udp = 0U;
        vlSelfRef.__Vdly__IP_bytes_rcv_len = 0U;
        vlSelfRef.__Vdly__IP_pseuder = 0U;
    }
    vlSelfRef.__PVT__IP_bytes_rcv_len = vlSelfRef.__Vdly__IP_bytes_rcv_len;
    vlSelfRef.__PVT__state = vlSelfRef.__Vdly__state;
    vlSelfRef.__PVT__IP_checksum = vlSelfRef.__Vdly__IP_checksum;
    vlSelfRef.__PVT__bytes_rcv = vlSelfRef.__Vdly__bytes_rcv;
    vlSelfRef.__PVT__dst_addr = vlSelfRef.__Vdly__dst_addr;
    vlSelfRef.__PVT__IP_len = vlSelfRef.__Vdly__IP_len;
    vlSelfRef.__PVT__is_tcp = vlSelfRef.__Vdly__is_tcp;
    vlSelfRef.__PVT__is_udp = vlSelfRef.__Vdly__is_udp;
    vlSelfRef.__PVT__IP_valid = vlSelfRef.__Vdly__IP_valid;
    vlSelfRef.__PVT__IP_last = vlSelfRef.__Vdly__IP_last;
    vlSelfRef.__PVT__IP_payload = vlSelfRef.__Vdly__IP_payload;
    vlSelfRef.__PVT__IP_pseuder = vlSelfRef.__Vdly__IP_pseuder;
}

VL_INLINE_OPT void Vether_simulation_IP_rx___nba_sequent__TOP__ether_simulation__clt_inst__ip_rx__1(Vether_simulation_IP_rx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_IP_rx___nba_sequent__TOP__ether_simulation__clt_inst__ip_rx__1\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__IP_bytes_rcv_len = vlSelfRef.__PVT__IP_bytes_rcv_len;
    vlSelfRef.__Vdly__state = vlSelfRef.__PVT__state;
    vlSelfRef.__Vdly__IP_checksum = vlSelfRef.__PVT__IP_checksum;
    vlSelfRef.__Vdly__bytes_rcv = vlSelfRef.__PVT__bytes_rcv;
    vlSelfRef.__Vdly__dst_addr = vlSelfRef.__PVT__dst_addr;
    vlSelfRef.__Vdly__IP_len = vlSelfRef.__PVT__IP_len;
    vlSelfRef.__Vdly__is_tcp = vlSelfRef.__PVT__is_tcp;
    vlSelfRef.__Vdly__is_udp = vlSelfRef.__PVT__is_udp;
    vlSelfRef.__Vdly__IP_valid = vlSelfRef.__PVT__IP_valid;
    vlSelfRef.__Vdly__IP_last = vlSelfRef.__PVT__IP_last;
    vlSelfRef.__Vdly__IP_payload = vlSelfRef.__PVT__IP_payload;
    vlSelfRef.__Vdly__IP_pseuder = vlSelfRef.__PVT__IP_pseuder;
    if (vlSelfRef.__PVT__nRST) {
        vlSelfRef.__Vdly__state = vlSelfRef.__PVT__nstate;
        vlSelfRef.__Vdly__IP_checksum = vlSelfRef.__PVT__nIP_checksum;
        vlSelfRef.__Vdly__IP_payload = vlSelfRef.__PVT__nIP_payload;
        vlSelfRef.__Vdly__bytes_rcv = vlSelfRef.__PVT__nbytes_rcv;
        vlSelfRef.__Vdly__dst_addr = vlSelfRef.__PVT__ndst_addr;
        vlSelfRef.__Vdly__IP_valid = vlSelfRef.__PVT__nIP_valid;
        vlSelfRef.__Vdly__IP_len = vlSelfRef.__PVT__nIP_len;
        vlSelfRef.__Vdly__IP_bytes_rcv_len = vlSelfRef.__PVT__nIP_bytes_rcv_len;
        vlSelfRef.__Vdly__IP_last = vlSelfRef.__PVT__nIP_last;
        vlSelfRef.__Vdly__IP_pseuder = vlSelfRef.__PVT__nIP_pseuder;
        vlSelfRef.__Vdly__is_tcp = vlSelfRef.__PVT__next_is_tcp;
        vlSelfRef.__Vdly__is_udp = vlSelfRef.__PVT__next_is_udp;
    } else {
        vlSelfRef.__Vdly__state = 0U;
        vlSelfRef.__Vdly__IP_checksum = 0U;
        vlSelfRef.__Vdly__IP_payload = 0ULL;
        vlSelfRef.__Vdly__bytes_rcv = 0U;
        vlSelfRef.__Vdly__dst_addr = 0U;
        vlSelfRef.__Vdly__IP_valid = 0U;
        vlSelfRef.__Vdly__IP_last = 0U;
        vlSelfRef.__Vdly__IP_len = 0U;
        vlSelfRef.__Vdly__is_tcp = 0U;
        vlSelfRef.__Vdly__is_udp = 0U;
        vlSelfRef.__Vdly__IP_bytes_rcv_len = 0U;
        vlSelfRef.__Vdly__IP_pseuder = 0U;
    }
    vlSelfRef.__PVT__IP_bytes_rcv_len = vlSelfRef.__Vdly__IP_bytes_rcv_len;
    vlSelfRef.__PVT__state = vlSelfRef.__Vdly__state;
    vlSelfRef.__PVT__IP_checksum = vlSelfRef.__Vdly__IP_checksum;
    vlSelfRef.__PVT__bytes_rcv = vlSelfRef.__Vdly__bytes_rcv;
    vlSelfRef.__PVT__dst_addr = vlSelfRef.__Vdly__dst_addr;
    vlSelfRef.__PVT__IP_len = vlSelfRef.__Vdly__IP_len;
    vlSelfRef.__PVT__is_tcp = vlSelfRef.__Vdly__is_tcp;
    vlSelfRef.__PVT__is_udp = vlSelfRef.__Vdly__is_udp;
    vlSelfRef.__PVT__IP_valid = vlSelfRef.__Vdly__IP_valid;
    vlSelfRef.__PVT__IP_last = vlSelfRef.__Vdly__IP_last;
    vlSelfRef.__PVT__IP_payload = vlSelfRef.__Vdly__IP_payload;
    vlSelfRef.__PVT__IP_pseuder = vlSelfRef.__Vdly__IP_pseuder;
}
