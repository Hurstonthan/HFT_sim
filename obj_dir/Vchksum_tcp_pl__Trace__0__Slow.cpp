// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vchksum_tcp_pl__Syms.h"


VL_ATTR_COLD void Vchksum_tcp_pl___024root__trace_init_sub__TOP__0(Vchksum_tcp_pl___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root__trace_init_sub__TOP__0\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"FIFO_rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+5,0,"TCP_payload_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+7,0,"TCP_checksum_pl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("chksum_tcp_pl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+11,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"FIFO_rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+5,0,"TCP_payload_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+7,0,"TCP_checksum_pl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+8,0,"TCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+9,0,"nTCP_checksum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+10,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vchksum_tcp_pl___024root__trace_init_top(Vchksum_tcp_pl___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root__trace_init_top\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vchksum_tcp_pl___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vchksum_tcp_pl___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vchksum_tcp_pl___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vchksum_tcp_pl___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vchksum_tcp_pl___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vchksum_tcp_pl___024root__trace_register(Vchksum_tcp_pl___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root__trace_register\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vchksum_tcp_pl___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vchksum_tcp_pl___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vchksum_tcp_pl___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vchksum_tcp_pl___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vchksum_tcp_pl___024root__trace_const_0_sub_0(Vchksum_tcp_pl___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vchksum_tcp_pl___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root__trace_const_0\n"); );
    // Init
    Vchksum_tcp_pl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vchksum_tcp_pl___024root*>(voidSelf);
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vchksum_tcp_pl___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vchksum_tcp_pl___024root__trace_const_0_sub_0(Vchksum_tcp_pl___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root__trace_const_0_sub_0\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+11,(0x40U),32);
}

VL_ATTR_COLD void Vchksum_tcp_pl___024root__trace_full_0_sub_0(Vchksum_tcp_pl___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vchksum_tcp_pl___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root__trace_full_0\n"); );
    // Init
    Vchksum_tcp_pl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vchksum_tcp_pl___024root*>(voidSelf);
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vchksum_tcp_pl___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vchksum_tcp_pl___024root__trace_full_0_sub_0(Vchksum_tcp_pl___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchksum_tcp_pl___024root__trace_full_0_sub_0\n"); );
    Vchksum_tcp_pl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.CLK));
    bufp->fullBit(oldp+2,(vlSelfRef.nRST));
    bufp->fullBit(oldp+3,(vlSelfRef.FIFO_rd_en));
    bufp->fullBit(oldp+4,(vlSelfRef.clear));
    bufp->fullQData(oldp+5,(vlSelfRef.TCP_payload_tx),64);
    bufp->fullSData(oldp+7,(vlSelfRef.TCP_checksum_pl),16);
    bufp->fullIData(oldp+8,(vlSelfRef.chksum_tcp_pl__DOT__TCP_checksum),17);
    bufp->fullIData(oldp+9,(vlSelfRef.chksum_tcp_pl__DOT__nTCP_checksum),17);
    bufp->fullIData(oldp+10,(vlSelfRef.chksum_tcp_pl__DOT__temp),20);
}
