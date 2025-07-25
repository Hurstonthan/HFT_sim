// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_checksum_TCP.h"

VL_ATTR_COLD void Vtop_checksum_TCP___stl_sequent__TOP__top__u_tcp__inst__0(Vtop_checksum_TCP* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_checksum_TCP___stl_sequent__TOP__top__u_tcp__inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtemp_1;
    IData/*31:0*/ __Vtemp_2;
    IData/*31:0*/ __Vtemp_3;
    IData/*31:0*/ __Vtemp_4;
    // Body
    vlSelfRef.__PVT__up_send = ((IData)(vlSelfRef.__PVT__TX_en) 
                                & (~ (IData)(vlSelfRef.__PVT__re_trans)));
    vlSelfRef.__PVT__nTCP_checksum = vlSelfRef.__PVT__TCP_checksum;
    vlSelfRef.__PVT__nTCP_checksum_send = vlSelfRef.__PVT__TCP_checksum_send;
    vlSelfRef.__PVT__nTCP_checksum_out = vlSelfRef.__PVT__TCP_checksum_out;
    if (vlSelfRef.__PVT__up_send) {
        vlSelfRef.__PVT__nTCP_checksum_send = 0U;
        vlSelfRef.__PVT__nTCP_checksum_out = (0xffffU 
                                              & VL_SEL_IIII(17, vlSelfRef.__PVT__TCP_checksum_send, 0U, 0x10U));
    }
    if (vlSelfRef.__PVT__clear) {
        vlSelfRef.__PVT__nTCP_checksum = 0U;
    } else if (vlSelfRef.__PVT__wr_FIFO_en) {
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
        if (vlSelfRef.__PVT__axis_last) {
            vlSelfRef.__PVT__temp1 = (0xfffffU & (VL_EXTEND_II(20,16, 
                                                               (0xffffU 
                                                                & VL_SEL_IIII(17, vlSelfRef.__PVT__TCP_checksum_send, 0U, 0x10U))) 
                                                  + 
                                                  VL_EXTEND_II(20,16, 
                                                               (0xffffU 
                                                                & VL_SEL_IIII(17, vlSelfRef.__PVT__nTCP_checksum, 0U, 0x10U)))));
            __Vtemp_3 = (0xfffffU & (VL_EXTEND_II(20,16, 
                                                  (0xffffU 
                                                   & VL_SEL_IIII(20, vlSelfRef.__PVT__temp1, 0U, 0x10U))) 
                                     + VL_EXTEND_II(20,4, 
                                                    (0xfU 
                                                     & VL_SEL_IIII(20, vlSelfRef.__PVT__temp1, 0x10U, 4U)))));
            vlSelfRef.__PVT__temp1 = __Vtemp_3;
            __Vtemp_4 = (0xfffffU & (VL_EXTEND_II(20,16, 
                                                  (0xffffU 
                                                   & VL_SEL_IIII(20, vlSelfRef.__PVT__temp1, 0U, 0x10U))) 
                                     + VL_EXTEND_II(20,1, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(20, vlSelfRef.__PVT__temp1, 0x10U)))));
            vlSelfRef.__PVT__temp1 = __Vtemp_4;
            vlSelfRef.__PVT__nTCP_checksum_send = (0x1ffffU 
                                                   & VL_SEL_IIII(32, 
                                                                 ((IData)(vlSelfRef.__PVT__up_send)
                                                                   ? 0U
                                                                   : 
                                                                  VL_EXTEND_II(32,17, 
                                                                               (0x1ffffU 
                                                                                & VL_SEL_IIII(20, vlSelfRef.__PVT__temp1, 0U, 0x11U)))), 0U, 0x11U));
            vlSelfRef.__PVT__nTCP_checksum_out = (0xffffU 
                                                  & VL_SEL_IIII(17, 
                                                                ((IData)(vlSelfRef.__PVT__up_send)
                                                                  ? 
                                                                 VL_EXTEND_II(17,16, 
                                                                              (0xffffU 
                                                                               & VL_SEL_IIII(20, vlSelfRef.__PVT__temp1, 0U, 0x10U)))
                                                                  : vlSelfRef.__PVT__TCP_checksum_send), 0U, 0x10U));
            vlSelfRef.__PVT__nTCP_checksum = 0U;
        }
    }
}

VL_ATTR_COLD void Vtop_checksum_TCP___ctor_var_reset(Vtop_checksum_TCP* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_checksum_TCP___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__CLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6192783415628501865ull);
    vlSelf->__PVT__nRST = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9596079045119723318ull);
    vlSelf->__PVT__clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11731883408449213572ull);
    vlSelf->__PVT__wr_FIFO_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11327851442339175407ull);
    vlSelf->__PVT__axis_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10901583754854957544ull);
    vlSelf->__PVT__TCP_payload_tx = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4942590929804810109ull);
    vlSelf->__PVT__TX_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3522186512893532196ull);
    vlSelf->__PVT__re_trans = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11615218911393243005ull);
    vlSelf->__PVT__TCP_checksum_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15781285163878921991ull);
    vlSelf->__PVT__nTCP_checksum_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4481064113728010615ull);
    vlSelf->__PVT__TCP_checksum = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 17605642142475400195ull);
    vlSelf->__PVT__nTCP_checksum = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 11131941618491356299ull);
    vlSelf->__PVT__TCP_checksum_send = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 6648787778415481896ull);
    vlSelf->__PVT__nTCP_checksum_send = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 3463319914042882580ull);
    vlSelf->__PVT__temp = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 7233838040978344170ull);
    vlSelf->__PVT__temp1 = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 16394504645315645554ull);
    vlSelf->__PVT__up_send = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6192705319657089262ull);
    vlSelf->__Vdly__TCP_checksum = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 10706132051156915888ull);
    vlSelf->__Vdly__TCP_checksum_send = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 15605681085476434504ull);
    vlSelf->__Vdly__TCP_checksum_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7234277158103976482ull);
}
