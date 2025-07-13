// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcrc32_parallel_64bit.h for the primary calling header

#include "Vcrc32_parallel_64bit__pch.h"
#include "Vcrc32_parallel_64bit___024root.h"

void Vcrc32_parallel_64bit___024root___ico_sequent__TOP__0(Vcrc32_parallel_64bit___024root* vlSelf);

void Vcrc32_parallel_64bit___024root___eval_ico(Vcrc32_parallel_64bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc32_parallel_64bit___024root___eval_ico\n"); );
    Vcrc32_parallel_64bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vcrc32_parallel_64bit___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vcrc32_parallel_64bit___024root___ico_sequent__TOP__0(Vcrc32_parallel_64bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc32_parallel_64bit___024root___ico_sequent__TOP__0\n"); );
    Vcrc32_parallel_64bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xfffffffeU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (1U & (VL_REDXOR_32((0x481b4e5aU & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                  ^ VL_REDXOR_64((0x4d101df481b4e5aULL 
                                  & vlSelfRef.data_in)))));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xfffffffdU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (2U & ((VL_REDXOR_32((0x90369cb5U & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                   ^ VL_REDXOR_64((0x9a203be90369cb5ULL 
                                   & vlSelfRef.data_in))) 
                  << 1U)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xfffffffbU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (4U & ((VL_REDXOR_32((0x206d396bU & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                   ^ VL_REDXOR_64((0x1344077d206d396bULL 
                                   & vlSelfRef.data_in))) 
                  << 2U)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xfffffff7U & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (8U & ((VL_REDXOR_32((0x40da72d7U & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                   ^ VL_REDXOR_64((0x26880efa40da72d7ULL 
                                   & vlSelfRef.data_in))) 
                  << 3U)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xffffffefU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x10U & ((VL_REDXOR_32((0x81b4e5afU & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                      ^ VL_REDXOR_64((0x4d101df481b4e5afULL 
                                      & vlSelfRef.data_in))) 
                     << 4U)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xffffffdfU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x20U & ((VL_REDXOR_32((0x369cb5eU & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                      ^ VL_REDXOR_64((0x9a203be90369cb5eULL 
                                      & vlSelfRef.data_in))) 
                     << 5U)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xffffffbfU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x40U & ((VL_REDXOR_32((0x4ec8d8e6U & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                      ^ VL_REDXOR_64((0x3091760d4ec8d8e6ULL 
                                      & vlSelfRef.data_in))) 
                     << 6U)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xffffff7fU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x80U & ((VL_REDXOR_32((0x9d91b1cdU & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                      ^ VL_REDXOR_64((0x6122ec1a9d91b1cdULL 
                                      & vlSelfRef.data_in))) 
                     << 7U)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xfffffeffU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x100U & ((VL_REDXOR_32((0x3b23639aU & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                       ^ VL_REDXOR_64((0xc245d8353b23639aULL 
                                       & vlSelfRef.data_in))) 
                      << 8U)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xfffffdffU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x200U & ((VL_REDXOR_32((0x3e5d896eU & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                       ^ VL_REDXOR_64((0x805ab1b53e5d896eULL 
                                       & vlSelfRef.data_in))) 
                      << 9U)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xfffffbffU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x400U & ((VL_REDXOR_32((0x34a05c86U & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                       ^ VL_REDXOR_64((0x46462b534a05c86ULL 
                                       & vlSelfRef.data_in))) 
                      << 0xaU)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xfffff7ffU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x800U & ((VL_REDXOR_32((0x6940b90cU & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                       ^ VL_REDXOR_64((0x8c8c56a6940b90cULL 
                                       & vlSelfRef.data_in))) 
                      << 0xbU)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xffffefffU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x1000U & ((VL_REDXOR_32((0xd2817218U & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                        ^ VL_REDXOR_64((0x11918ad4d2817218ULL 
                                        & vlSelfRef.data_in))) 
                       << 0xcU)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xffffdfffU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x2000U & ((VL_REDXOR_32((0xa502e430U & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                        ^ VL_REDXOR_64((0x232315a9a502e430ULL 
                                        & vlSelfRef.data_in))) 
                       << 0xdU)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xffffbfffU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x4000U & ((VL_REDXOR_32((0x4a05c860U & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                        ^ VL_REDXOR_64((0x46462b534a05c860ULL 
                                        & vlSelfRef.data_in))) 
                       << 0xeU)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xffff7fffU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x8000U & ((VL_REDXOR_32((0x940b90c0U & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                        ^ VL_REDXOR_64((0x8c8c56a6940b90c0ULL 
                                        & vlSelfRef.data_in))) 
                       << 0xfU)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xfffeffffU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x10000U & ((VL_REDXOR_32((0x600c6fdaU 
                                       & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                         ^ VL_REDXOR_64((0x1dc9ac92600c6fdaULL 
                                         & vlSelfRef.data_in))) 
                        << 0x10U)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xfffdffffU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x20000U & ((VL_REDXOR_32((0xc018dfb5U 
                                       & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                         ^ VL_REDXOR_64((0x3b935924c018dfb5ULL 
                                         & vlSelfRef.data_in))) 
                        << 0x11U)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xfffbffffU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x40000U & ((VL_REDXOR_32((0x8031bf6aU 
                                       & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                         ^ VL_REDXOR_64((0x7726b2498031bf6aULL 
                                         & vlSelfRef.data_in))) 
                        << 0x12U)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xfff7ffffU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x80000U & ((VL_REDXOR_32((0x637ed5U & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                         ^ VL_REDXOR_64((0xee4d649300637ed5ULL 
                                         & vlSelfRef.data_in))) 
                        << 0x13U)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xffefffffU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x100000U & ((VL_REDXOR_32((0x48ddb3f0U 
                                        & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                          ^ VL_REDXOR_64((0xd84bc8f948ddb3f0ULL 
                                          & vlSelfRef.data_in))) 
                         << 0x14U)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xffdfffffU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x200000U & ((VL_REDXOR_32((0xd9a029bbU 
                                        & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                          ^ VL_REDXOR_64((0xb446902dd9a029bbULL 
                                          & vlSelfRef.data_in))) 
                         << 0x15U)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xffbfffffU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x400000U & ((VL_REDXOR_32((0xfb5b1d2cU 
                                        & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                          ^ VL_REDXOR_64((0x6c5c2184fb5b1d2cULL 
                                          & vlSelfRef.data_in))) 
                         << 0x16U)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xff7fffffU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x800000U & ((VL_REDXOR_32((0xf6b63a59U 
                                        & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                          ^ VL_REDXOR_64((0xd8b84309f6b63a59ULL 
                                          & vlSelfRef.data_in))) 
                         << 0x17U)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xfeffffffU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x1000000U & ((VL_REDXOR_32((0xa5773ae8U 
                                         & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                           ^ VL_REDXOR_64((0xb5a187cca5773ae8ULL 
                                           & vlSelfRef.data_in))) 
                          << 0x18U)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xfdffffffU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x2000000U & ((VL_REDXOR_32((0x2f53b8aU 
                                         & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                           ^ VL_REDXOR_64((0x6f920e4602f53b8aULL 
                                           & vlSelfRef.data_in))) 
                          << 0x19U)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xfbffffffU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x4000000U & ((VL_REDXOR_32((0x5ea7715U 
                                         & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                           ^ VL_REDXOR_64((0xdf241c8c05ea7715ULL 
                                           & vlSelfRef.data_in))) 
                          << 0x1aU)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xf7ffffffU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x8000000U & ((VL_REDXOR_32((0x43cfa071U 
                                         & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                           ^ VL_REDXOR_64((0xba9938c743cfa071ULL 
                                           & vlSelfRef.data_in))) 
                          << 0x1bU)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xefffffffU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x10000000U & ((VL_REDXOR_32((0xcf840eb8U 
                                          & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                            ^ VL_REDXOR_64((0x71e37051cf840eb8ULL 
                                            & vlSelfRef.data_in))) 
                           << 0x1cU)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xdfffffffU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x20000000U & ((VL_REDXOR_32((0x9f081d70U 
                                          & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                            ^ VL_REDXOR_64((0xe3c6e0a39f081d70ULL 
                                            & vlSelfRef.data_in))) 
                           << 0x1dU)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xbfffffffU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x40000000U & ((VL_REDXOR_32((0x760b74bbU 
                                          & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                            ^ VL_REDXOR_64((0xc35cc098760b74bbULL 
                                            & vlSelfRef.data_in))) 
                           << 0x1eU)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0x7fffffffU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | ((VL_REDXOR_32((0xa40da72dU & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
             ^ VL_REDXOR_64((0x826880efa40da72dULL 
                             & vlSelfRef.data_in))) 
            << 0x1fU));
    vlSelfRef.crc_out = ((IData)(vlSelfRef.rx) ? vlSelfRef.crc32_parallel_64bit__DOT__crc_reg
                          : (~ vlSelfRef.crc32_parallel_64bit__DOT__crc_reg));
}

void Vcrc32_parallel_64bit___024root___eval_triggers__ico(Vcrc32_parallel_64bit___024root* vlSelf);

bool Vcrc32_parallel_64bit___024root___eval_phase__ico(Vcrc32_parallel_64bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc32_parallel_64bit___024root___eval_phase__ico\n"); );
    Vcrc32_parallel_64bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vcrc32_parallel_64bit___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vcrc32_parallel_64bit___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vcrc32_parallel_64bit___024root___eval_act(Vcrc32_parallel_64bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc32_parallel_64bit___024root___eval_act\n"); );
    Vcrc32_parallel_64bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vcrc32_parallel_64bit___024root___nba_sequent__TOP__0(Vcrc32_parallel_64bit___024root* vlSelf);

void Vcrc32_parallel_64bit___024root___eval_nba(Vcrc32_parallel_64bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc32_parallel_64bit___024root___eval_nba\n"); );
    Vcrc32_parallel_64bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcrc32_parallel_64bit___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vcrc32_parallel_64bit___024root___nba_sequent__TOP__0(Vcrc32_parallel_64bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc32_parallel_64bit___024root___nba_sequent__TOP__0\n"); );
    Vcrc32_parallel_64bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.nRST) {
        if (vlSelfRef.crc_init) {
            vlSelfRef.crc32_parallel_64bit__DOT__crc_reg = 0xffffffffU;
        } else if (vlSelfRef.valid) {
            vlSelfRef.crc32_parallel_64bit__DOT__crc_reg 
                = vlSelfRef.crc32_parallel_64bit__DOT__next_crc;
        }
    } else {
        vlSelfRef.crc32_parallel_64bit__DOT__crc_reg = 0xffffffffU;
    }
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xfffffffeU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (1U & (VL_REDXOR_32((0x481b4e5aU & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                  ^ VL_REDXOR_64((0x4d101df481b4e5aULL 
                                  & vlSelfRef.data_in)))));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xfffffffdU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (2U & ((VL_REDXOR_32((0x90369cb5U & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                   ^ VL_REDXOR_64((0x9a203be90369cb5ULL 
                                   & vlSelfRef.data_in))) 
                  << 1U)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xfffffffbU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (4U & ((VL_REDXOR_32((0x206d396bU & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                   ^ VL_REDXOR_64((0x1344077d206d396bULL 
                                   & vlSelfRef.data_in))) 
                  << 2U)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xfffffff7U & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (8U & ((VL_REDXOR_32((0x40da72d7U & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                   ^ VL_REDXOR_64((0x26880efa40da72d7ULL 
                                   & vlSelfRef.data_in))) 
                  << 3U)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xffffffefU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x10U & ((VL_REDXOR_32((0x81b4e5afU & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                      ^ VL_REDXOR_64((0x4d101df481b4e5afULL 
                                      & vlSelfRef.data_in))) 
                     << 4U)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xffffffdfU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x20U & ((VL_REDXOR_32((0x369cb5eU & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                      ^ VL_REDXOR_64((0x9a203be90369cb5eULL 
                                      & vlSelfRef.data_in))) 
                     << 5U)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xffffffbfU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x40U & ((VL_REDXOR_32((0x4ec8d8e6U & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                      ^ VL_REDXOR_64((0x3091760d4ec8d8e6ULL 
                                      & vlSelfRef.data_in))) 
                     << 6U)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xffffff7fU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x80U & ((VL_REDXOR_32((0x9d91b1cdU & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                      ^ VL_REDXOR_64((0x6122ec1a9d91b1cdULL 
                                      & vlSelfRef.data_in))) 
                     << 7U)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xfffffeffU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x100U & ((VL_REDXOR_32((0x3b23639aU & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                       ^ VL_REDXOR_64((0xc245d8353b23639aULL 
                                       & vlSelfRef.data_in))) 
                      << 8U)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xfffffdffU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x200U & ((VL_REDXOR_32((0x3e5d896eU & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                       ^ VL_REDXOR_64((0x805ab1b53e5d896eULL 
                                       & vlSelfRef.data_in))) 
                      << 9U)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xfffffbffU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x400U & ((VL_REDXOR_32((0x34a05c86U & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                       ^ VL_REDXOR_64((0x46462b534a05c86ULL 
                                       & vlSelfRef.data_in))) 
                      << 0xaU)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xfffff7ffU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x800U & ((VL_REDXOR_32((0x6940b90cU & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                       ^ VL_REDXOR_64((0x8c8c56a6940b90cULL 
                                       & vlSelfRef.data_in))) 
                      << 0xbU)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xffffefffU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x1000U & ((VL_REDXOR_32((0xd2817218U & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                        ^ VL_REDXOR_64((0x11918ad4d2817218ULL 
                                        & vlSelfRef.data_in))) 
                       << 0xcU)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xffffdfffU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x2000U & ((VL_REDXOR_32((0xa502e430U & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                        ^ VL_REDXOR_64((0x232315a9a502e430ULL 
                                        & vlSelfRef.data_in))) 
                       << 0xdU)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xffffbfffU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x4000U & ((VL_REDXOR_32((0x4a05c860U & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                        ^ VL_REDXOR_64((0x46462b534a05c860ULL 
                                        & vlSelfRef.data_in))) 
                       << 0xeU)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xffff7fffU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x8000U & ((VL_REDXOR_32((0x940b90c0U & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                        ^ VL_REDXOR_64((0x8c8c56a6940b90c0ULL 
                                        & vlSelfRef.data_in))) 
                       << 0xfU)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xfffeffffU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x10000U & ((VL_REDXOR_32((0x600c6fdaU 
                                       & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                         ^ VL_REDXOR_64((0x1dc9ac92600c6fdaULL 
                                         & vlSelfRef.data_in))) 
                        << 0x10U)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xfffdffffU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x20000U & ((VL_REDXOR_32((0xc018dfb5U 
                                       & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                         ^ VL_REDXOR_64((0x3b935924c018dfb5ULL 
                                         & vlSelfRef.data_in))) 
                        << 0x11U)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xfffbffffU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x40000U & ((VL_REDXOR_32((0x8031bf6aU 
                                       & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                         ^ VL_REDXOR_64((0x7726b2498031bf6aULL 
                                         & vlSelfRef.data_in))) 
                        << 0x12U)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xfff7ffffU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x80000U & ((VL_REDXOR_32((0x637ed5U & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                         ^ VL_REDXOR_64((0xee4d649300637ed5ULL 
                                         & vlSelfRef.data_in))) 
                        << 0x13U)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xffefffffU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x100000U & ((VL_REDXOR_32((0x48ddb3f0U 
                                        & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                          ^ VL_REDXOR_64((0xd84bc8f948ddb3f0ULL 
                                          & vlSelfRef.data_in))) 
                         << 0x14U)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xffdfffffU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x200000U & ((VL_REDXOR_32((0xd9a029bbU 
                                        & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                          ^ VL_REDXOR_64((0xb446902dd9a029bbULL 
                                          & vlSelfRef.data_in))) 
                         << 0x15U)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xffbfffffU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x400000U & ((VL_REDXOR_32((0xfb5b1d2cU 
                                        & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                          ^ VL_REDXOR_64((0x6c5c2184fb5b1d2cULL 
                                          & vlSelfRef.data_in))) 
                         << 0x16U)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xff7fffffU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x800000U & ((VL_REDXOR_32((0xf6b63a59U 
                                        & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                          ^ VL_REDXOR_64((0xd8b84309f6b63a59ULL 
                                          & vlSelfRef.data_in))) 
                         << 0x17U)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xfeffffffU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x1000000U & ((VL_REDXOR_32((0xa5773ae8U 
                                         & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                           ^ VL_REDXOR_64((0xb5a187cca5773ae8ULL 
                                           & vlSelfRef.data_in))) 
                          << 0x18U)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xfdffffffU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x2000000U & ((VL_REDXOR_32((0x2f53b8aU 
                                         & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                           ^ VL_REDXOR_64((0x6f920e4602f53b8aULL 
                                           & vlSelfRef.data_in))) 
                          << 0x19U)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xfbffffffU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x4000000U & ((VL_REDXOR_32((0x5ea7715U 
                                         & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                           ^ VL_REDXOR_64((0xdf241c8c05ea7715ULL 
                                           & vlSelfRef.data_in))) 
                          << 0x1aU)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xf7ffffffU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x8000000U & ((VL_REDXOR_32((0x43cfa071U 
                                         & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                           ^ VL_REDXOR_64((0xba9938c743cfa071ULL 
                                           & vlSelfRef.data_in))) 
                          << 0x1bU)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xefffffffU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x10000000U & ((VL_REDXOR_32((0xcf840eb8U 
                                          & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                            ^ VL_REDXOR_64((0x71e37051cf840eb8ULL 
                                            & vlSelfRef.data_in))) 
                           << 0x1cU)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xdfffffffU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x20000000U & ((VL_REDXOR_32((0x9f081d70U 
                                          & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                            ^ VL_REDXOR_64((0xe3c6e0a39f081d70ULL 
                                            & vlSelfRef.data_in))) 
                           << 0x1dU)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0xbfffffffU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | (0x40000000U & ((VL_REDXOR_32((0x760b74bbU 
                                          & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
                            ^ VL_REDXOR_64((0xc35cc098760b74bbULL 
                                            & vlSelfRef.data_in))) 
                           << 0x1eU)));
    vlSelfRef.crc32_parallel_64bit__DOT__next_crc = 
        ((0x7fffffffU & vlSelfRef.crc32_parallel_64bit__DOT__next_crc) 
         | ((VL_REDXOR_32((0xa40da72dU & vlSelfRef.crc32_parallel_64bit__DOT__crc_reg)) 
             ^ VL_REDXOR_64((0x826880efa40da72dULL 
                             & vlSelfRef.data_in))) 
            << 0x1fU));
    vlSelfRef.crc_out = ((IData)(vlSelfRef.rx) ? vlSelfRef.crc32_parallel_64bit__DOT__crc_reg
                          : (~ vlSelfRef.crc32_parallel_64bit__DOT__crc_reg));
}

void Vcrc32_parallel_64bit___024root___eval_triggers__act(Vcrc32_parallel_64bit___024root* vlSelf);

bool Vcrc32_parallel_64bit___024root___eval_phase__act(Vcrc32_parallel_64bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc32_parallel_64bit___024root___eval_phase__act\n"); );
    Vcrc32_parallel_64bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcrc32_parallel_64bit___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vcrc32_parallel_64bit___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcrc32_parallel_64bit___024root___eval_phase__nba(Vcrc32_parallel_64bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc32_parallel_64bit___024root___eval_phase__nba\n"); );
    Vcrc32_parallel_64bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcrc32_parallel_64bit___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcrc32_parallel_64bit___024root___dump_triggers__ico(Vcrc32_parallel_64bit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcrc32_parallel_64bit___024root___dump_triggers__nba(Vcrc32_parallel_64bit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcrc32_parallel_64bit___024root___dump_triggers__act(Vcrc32_parallel_64bit___024root* vlSelf);
#endif  // VL_DEBUG

void Vcrc32_parallel_64bit___024root___eval(Vcrc32_parallel_64bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc32_parallel_64bit___024root___eval\n"); );
    Vcrc32_parallel_64bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vcrc32_parallel_64bit___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/crc32_parallel_64bit.sv", 2, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vcrc32_parallel_64bit___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vcrc32_parallel_64bit___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/crc32_parallel_64bit.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vcrc32_parallel_64bit___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/crc32_parallel_64bit.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vcrc32_parallel_64bit___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vcrc32_parallel_64bit___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcrc32_parallel_64bit___024root___eval_debug_assertions(Vcrc32_parallel_64bit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc32_parallel_64bit___024root___eval_debug_assertions\n"); );
    Vcrc32_parallel_64bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.CLK & 0xfeU)))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY(((vlSelfRef.nRST & 0xfeU)))) {
        Verilated::overWidthError("nRST");}
    if (VL_UNLIKELY(((vlSelfRef.valid & 0xfeU)))) {
        Verilated::overWidthError("valid");}
    if (VL_UNLIKELY(((vlSelfRef.crc_init & 0xfeU)))) {
        Verilated::overWidthError("crc_init");}
    if (VL_UNLIKELY(((vlSelfRef.rx & 0xfeU)))) {
        Verilated::overWidthError("rx");}
}
#endif  // VL_DEBUG
