// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vchksum_tcp_pl.h for the primary calling header

#include "Vchksum_tcp_pl__pch.h"
#include "Vchksum_tcp_pl_chksum_tcp_pl.h"

VL_INLINE_OPT void Vchksum_tcp_pl_chksum_tcp_pl___ico_sequent__TOP__chksum_tcp_pl__0(Vchksum_tcp_pl_chksum_tcp_pl* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vchksum_tcp_pl_chksum_tcp_pl___ico_sequent__TOP__chksum_tcp_pl__0\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtemp_1;
    IData/*31:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__PVT__nTCP_checksum = vlSelfRef.__PVT__TCP_checksum;
    if (vlSelfRef.clear) {
        vlSelfRef.__PVT__nTCP_checksum = 0U;
    } else if (vlSelfRef.FIFO_rd_en) {
        vlSelfRef.__PVT__temp = (0xfffffU & ((((VL_EXTEND_II(20,16, 
                                                             (0xffffU 
                                                              & VL_SEL_IIII(17, vlSelfRef.__PVT__TCP_checksum, 0U, 0x10U))) 
                                                + VL_EXTEND_II(20,16, 
                                                               (0xffffU 
                                                                & VL_SEL_IQII(64, vlSelfRef.TCP_payload_tx, 0U, 0x10U)))) 
                                               + VL_EXTEND_II(20,16, 
                                                              (0xffffU 
                                                               & VL_SEL_IQII(64, vlSelfRef.TCP_payload_tx, 0x10U, 0x10U)))) 
                                              + VL_EXTEND_II(20,16, 
                                                             (0xffffU 
                                                              & VL_SEL_IQII(64, vlSelfRef.TCP_payload_tx, 0x20U, 0x10U)))) 
                                             + VL_EXTEND_II(20,16, 
                                                            (0xffffU 
                                                             & VL_SEL_IQII(64, vlSelfRef.TCP_payload_tx, 0x30U, 0x10U)))));
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

VL_INLINE_OPT void Vchksum_tcp_pl_chksum_tcp_pl___nba_sequent__TOP__chksum_tcp_pl__0(Vchksum_tcp_pl_chksum_tcp_pl* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vchksum_tcp_pl_chksum_tcp_pl___nba_sequent__TOP__chksum_tcp_pl__0\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtemp_1;
    IData/*31:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__Vdly__TCP_checksum = vlSelfRef.__PVT__TCP_checksum;
    vlSelfRef.__Vdly__TCP_checksum = ((IData)(vlSelfRef.nRST)
                                       ? vlSelfRef.__PVT__nTCP_checksum
                                       : 0U);
    vlSelfRef.__PVT__TCP_checksum = vlSelfRef.__Vdly__TCP_checksum;
    vlSelfRef.TCP_checksum_pl = (0xffffU & VL_SEL_IIII(17, vlSelfRef.__PVT__TCP_checksum, 0U, 0x10U));
    vlSelfRef.__PVT__nTCP_checksum = vlSelfRef.__PVT__TCP_checksum;
    if (vlSelfRef.clear) {
        vlSelfRef.__PVT__nTCP_checksum = 0U;
    } else if (vlSelfRef.FIFO_rd_en) {
        vlSelfRef.__PVT__temp = (0xfffffU & ((((VL_EXTEND_II(20,16, 
                                                             (0xffffU 
                                                              & VL_SEL_IIII(17, vlSelfRef.__PVT__TCP_checksum, 0U, 0x10U))) 
                                                + VL_EXTEND_II(20,16, 
                                                               (0xffffU 
                                                                & VL_SEL_IQII(64, vlSelfRef.TCP_payload_tx, 0U, 0x10U)))) 
                                               + VL_EXTEND_II(20,16, 
                                                              (0xffffU 
                                                               & VL_SEL_IQII(64, vlSelfRef.TCP_payload_tx, 0x10U, 0x10U)))) 
                                              + VL_EXTEND_II(20,16, 
                                                             (0xffffU 
                                                              & VL_SEL_IQII(64, vlSelfRef.TCP_payload_tx, 0x20U, 0x10U)))) 
                                             + VL_EXTEND_II(20,16, 
                                                            (0xffffU 
                                                             & VL_SEL_IQII(64, vlSelfRef.TCP_payload_tx, 0x30U, 0x10U)))));
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
