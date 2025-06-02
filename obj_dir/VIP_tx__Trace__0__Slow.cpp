// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VIP_tx__Syms.h"


VL_ATTR_COLD void VIP_tx___024root__trace_init_sub__TOP__0(VIP_tx___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_tx___024root__trace_init_sub__TOP__0\n"); );
    VIP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"IP_send",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"TCP_len_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+5,0,"IP_transmit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("IP_tx", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+14,0,"WORD_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"ETHER_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+16,0,"IPV4_VER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+17,0,"LENGTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+18,0,"IP_IDENFICATION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+19,0,"IP_FLAG_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+20,0,"IP_TLL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+21,0,"IP_PROTOCOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+22,0,"IP_SRC_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"IP_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"IP_send",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"TCP_len_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+5,0,"IP_transmit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+7,0,"IP_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+8,0,"nxIP_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declQuad(c+9,0,"nxIP_transmit_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+11,0,"chk_sum_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"IPv4_chk_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+13,0,"nIPv4_chk_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void VIP_tx___024root__trace_init_top(VIP_tx___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_tx___024root__trace_init_top\n"); );
    VIP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VIP_tx___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VIP_tx___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VIP_tx___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VIP_tx___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VIP_tx___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VIP_tx___024root__trace_register(VIP_tx___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_tx___024root__trace_register\n"); );
    VIP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VIP_tx___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VIP_tx___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VIP_tx___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VIP_tx___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VIP_tx___024root__trace_const_0_sub_0(VIP_tx___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VIP_tx___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_tx___024root__trace_const_0\n"); );
    // Init
    VIP_tx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VIP_tx___024root*>(voidSelf);
    VIP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VIP_tx___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VIP_tx___024root__trace_const_0_sub_0(VIP_tx___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_tx___024root__trace_const_0_sub_0\n"); );
    VIP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+14,(0x40U),32);
    bufp->fullSData(oldp+15,(0x800U),16);
    bufp->fullCData(oldp+16,(0x45U),8);
    bufp->fullSData(oldp+17,(0x28U),16);
    bufp->fullSData(oldp+18,(1U),16);
    bufp->fullSData(oldp+19,(0x4000U),16);
    bufp->fullCData(oldp+20,(0x40U),8);
    bufp->fullCData(oldp+21,(6U),8);
    bufp->fullIData(oldp+22,(0xc0a80101U),32);
    bufp->fullIData(oldp+23,(0xc0a80102U),32);
}

VL_ATTR_COLD void VIP_tx___024root__trace_full_0_sub_0(VIP_tx___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VIP_tx___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_tx___024root__trace_full_0\n"); );
    // Init
    VIP_tx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VIP_tx___024root*>(voidSelf);
    VIP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VIP_tx___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VIP_tx___024root__trace_full_0_sub_0(VIP_tx___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIP_tx___024root__trace_full_0_sub_0\n"); );
    VIP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.CLK));
    bufp->fullBit(oldp+2,(vlSelfRef.nRST));
    bufp->fullBit(oldp+3,(vlSelfRef.IP_send));
    bufp->fullSData(oldp+4,(vlSelfRef.TCP_len_data),16);
    bufp->fullQData(oldp+5,(vlSelfRef.IP_transmit),64);
    bufp->fullCData(oldp+7,(vlSelfRef.IP_tx__DOT__IP_state),7);
    bufp->fullCData(oldp+8,(vlSelfRef.IP_tx__DOT__nxIP_state),7);
    bufp->fullQData(oldp+9,(vlSelfRef.IP_tx__DOT__nxIP_transmit_l),64);
    bufp->fullBit(oldp+11,(vlSelfRef.IP_tx__DOT__chk_sum_valid));
    bufp->fullIData(oldp+12,(vlSelfRef.IP_tx__DOT__IPv4_chk_sum),17);
    bufp->fullIData(oldp+13,(vlSelfRef.IP_tx__DOT__nIPv4_chk_sum),17);
}
