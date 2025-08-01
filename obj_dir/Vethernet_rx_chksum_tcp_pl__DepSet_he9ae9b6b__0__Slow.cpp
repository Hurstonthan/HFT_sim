// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vethernet_rx.h for the primary calling header

#include "Vethernet_rx__pch.h"
#include "Vethernet_rx_chksum_tcp_pl.h"

VL_ATTR_COLD void Vethernet_rx_chksum_tcp_pl___stl_sequent__TOP__ethernet_rx__ip_inst__chksum_inst__0(Vethernet_rx_chksum_tcp_pl* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vethernet_rx_chksum_tcp_pl___stl_sequent__TOP__ethernet_rx__ip_inst__chksum_inst__0\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__TCP_checksum_pl = (0xffffU & VL_SEL_IIII(17, 
                                                              ((0U 
                                                                == 
                                                                (0xffffU 
                                                                 & VL_SEL_IIII(17, vlSelfRef.__PVT__TCP_checksum, 0U, 0x10U)))
                                                                ? 0xffffU
                                                                : vlSelfRef.__PVT__TCP_checksum), 0U, 0x10U));
}

VL_ATTR_COLD void Vethernet_rx_chksum_tcp_pl___stl_sequent__TOP__ethernet_rx__ip_inst__chksum_inst__1(Vethernet_rx_chksum_tcp_pl* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vethernet_rx_chksum_tcp_pl___stl_sequent__TOP__ethernet_rx__ip_inst__chksum_inst__1\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtemp_1;
    IData/*31:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__PVT__nTCP_checksum = vlSelfRef.__PVT__TCP_checksum;
    if (vlSelfRef.__PVT__clear) {
        vlSelfRef.__PVT__nTCP_checksum = 0U;
    } else if (vlSelfRef.__PVT__FIFO_rd_en) {
        vlSelfRef.__PVT__temp = (0xfffffU & ((((VL_EXTEND_II(20,16, 
                                                             (0xffffU 
                                                              & VL_SEL_IIII(17, vlSelfRef.__PVT__TCP_checksum, 0U, 0x10U))) 
                                                + VL_EXTEND_II(20,16, 
                                                               (0xffffU 
                                                                & VL_SEL_IQII(64, vlSelfRef.__PVT__TCP_payload_tx, 0U, 0x10U)))) 
                                               + VL_EXTEND_II(20,16, 
                                                              (0xffffU 
                                                               & VL_SEL_IQII(64, vlSelfRef.__PVT__TCP_payload_tx, 0x10U, 0x10U)))) 
                                              + VL_EXTEND_II(20,16, 
                                                             (0xffffU 
                                                              & VL_SEL_IQII(64, vlSelfRef.__PVT__TCP_payload_tx, 0x20U, 0x10U)))) 
                                             + VL_EXTEND_II(20,16, 
                                                            (0xffffU 
                                                             & VL_SEL_IQII(64, vlSelfRef.__PVT__TCP_payload_tx, 0x30U, 0x10U)))));
        __Vtemp_1 = (0xfffffU & (VL_EXTEND_II(20,16, 
                                              (0xffffU 
                                               & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x10U))) 
                                 + VL_EXTEND_II(20,4, 
                                                (0xfU 
                                                 & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0x10U, 4U)))));
        vlSelfRef.__PVT__temp = __Vtemp_1;
        __Vtemp_2 = (0xfffffU & (VL_EXTEND_II(20,16, 
                                              (0xffffU 
                                               & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x10U))) 
                                 + VL_EXTEND_II(20,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(20, vlSelfRef.__PVT__temp, 0x10U)))));
        vlSelfRef.__PVT__temp = __Vtemp_2;
        vlSelfRef.__PVT__nTCP_checksum = (0x1ffffU 
                                          & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x11U));
    }
}

VL_ATTR_COLD void Vethernet_rx_chksum_tcp_pl___ctor_var_reset(Vethernet_rx_chksum_tcp_pl* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vethernet_rx_chksum_tcp_pl___ctor_var_reset\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__CLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6192783415628501865ull);
    vlSelf->__PVT__nRST = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9596079045119723318ull);
    vlSelf->__PVT__FIFO_rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4128175887487812915ull);
    vlSelf->__PVT__clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11731883408449213572ull);
    vlSelf->__PVT__TCP_payload_tx = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4942590929804810109ull);
    vlSelf->__PVT__TCP_checksum_pl = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7924513635327023977ull);
    vlSelf->__PVT__TCP_checksum = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 17605642142475400195ull);
    vlSelf->__PVT__nTCP_checksum = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 11131941618491356299ull);
    vlSelf->__PVT__temp = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 7233838040978344170ull);
    vlSelf->__Vdly__TCP_checksum = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 10706132051156915888ull);
}
