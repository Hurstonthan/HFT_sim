// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vcrc32_parallel_64bit__Syms.h"


VL_ATTR_COLD void Vcrc32_parallel_64bit___024root__trace_init_sub__TOP__0(Vcrc32_parallel_64bit___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc32_parallel_64bit___024root__trace_init_sub__TOP__0\n"); );
    Vcrc32_parallel_64bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"crc_init",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+6,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+8,0,"crc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("crc32_parallel_64bit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"crc_init",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+6,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+8,0,"crc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"crc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"next_crc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcrc32_parallel_64bit___024root__trace_init_top(Vcrc32_parallel_64bit___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc32_parallel_64bit___024root__trace_init_top\n"); );
    Vcrc32_parallel_64bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcrc32_parallel_64bit___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcrc32_parallel_64bit___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vcrc32_parallel_64bit___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vcrc32_parallel_64bit___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vcrc32_parallel_64bit___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vcrc32_parallel_64bit___024root__trace_register(Vcrc32_parallel_64bit___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc32_parallel_64bit___024root__trace_register\n"); );
    Vcrc32_parallel_64bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vcrc32_parallel_64bit___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vcrc32_parallel_64bit___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vcrc32_parallel_64bit___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vcrc32_parallel_64bit___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcrc32_parallel_64bit___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc32_parallel_64bit___024root__trace_const_0\n"); );
    // Init
    Vcrc32_parallel_64bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcrc32_parallel_64bit___024root*>(voidSelf);
    Vcrc32_parallel_64bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vcrc32_parallel_64bit___024root__trace_full_0_sub_0(Vcrc32_parallel_64bit___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vcrc32_parallel_64bit___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc32_parallel_64bit___024root__trace_full_0\n"); );
    // Init
    Vcrc32_parallel_64bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcrc32_parallel_64bit___024root*>(voidSelf);
    Vcrc32_parallel_64bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcrc32_parallel_64bit___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcrc32_parallel_64bit___024root__trace_full_0_sub_0(Vcrc32_parallel_64bit___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc32_parallel_64bit___024root__trace_full_0_sub_0\n"); );
    Vcrc32_parallel_64bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.CLK));
    bufp->fullBit(oldp+2,(vlSelfRef.nRST));
    bufp->fullBit(oldp+3,(vlSelfRef.valid));
    bufp->fullBit(oldp+4,(vlSelfRef.crc_init));
    bufp->fullBit(oldp+5,(vlSelfRef.rx));
    bufp->fullQData(oldp+6,(vlSelfRef.data_in),64);
    bufp->fullIData(oldp+8,(vlSelfRef.crc_out),32);
    bufp->fullIData(oldp+9,(vlSelfRef.crc32_parallel_64bit__DOT__crc_reg),32);
    bufp->fullIData(oldp+10,(vlSelfRef.crc32_parallel_64bit__DOT__next_crc),32);
}
