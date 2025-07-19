// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VUDP_tx__Syms.h"


VL_ATTR_COLD void VUDP_tx___024root__trace_init_sub__TOP__rx_pkg__0(VUDP_tx___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void VUDP_tx___024root__trace_init_sub__TOP__0(VUDP_tx___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VUDP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUDP_tx___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"UDP_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+4,0,"UDP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+6,0,"UDP_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+7,0,"UDP_src_port",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+8,0,"UDP_dest_port",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+9,0,"UDP_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+10,0,"IP_payload",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+12,0,"IP_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"IP_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("rx_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    VUDP_tx___024root__trace_init_sub__TOP__rx_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("UDP_tx", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"UDP_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+4,0,"UDP_payload",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+6,0,"UDP_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+7,0,"UDP_src_port",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+8,0,"UDP_dest_port",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+9,0,"UDP_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+10,0,"IP_payload",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+12,0,"IP_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"IP_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"current_state",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+15,0,"nstate",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+16,0,"computed_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+17,0,"header_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void VUDP_tx___024root__trace_init_sub__TOP__rx_pkg__0(VUDP_tx___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VUDP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUDP_tx___024root__trace_init_sub__TOP__rx_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declQuad(c+19,0,"FPGA_MAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+21,0,"NASDAQ_MAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+23,0,"IP_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+24,0,"IP_VERSION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+25,0,"IP_HDL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+26,0,"UDP_PROTOCOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+27,0,"TCP_PROTOCOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+28,0,"ICMP_PROTOCOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+29,0,"IP_TTL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+30,0,"IP_SRC_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"IP_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"UDP_SRC_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+33,0,"UDP_DEST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+34,0,"UDP_HEADER_LENGTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+35,0,"UDP_CHECKSUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
}

VL_ATTR_COLD void VUDP_tx___024root__trace_init_top(VUDP_tx___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VUDP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUDP_tx___024root__trace_init_top\n"); );
    // Body
    VUDP_tx___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VUDP_tx___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void VUDP_tx___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void VUDP_tx___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void VUDP_tx___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void VUDP_tx___024root__trace_register(VUDP_tx___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VUDP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUDP_tx___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VUDP_tx___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VUDP_tx___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VUDP_tx___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VUDP_tx___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VUDP_tx___024root__trace_const_0_sub_0(VUDP_tx___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void VUDP_tx___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUDP_tx___024root__trace_const_0\n"); );
    // Init
    VUDP_tx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VUDP_tx___024root*>(voidSelf);
    VUDP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VUDP_tx___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VUDP_tx___024root__trace_const_0_sub_0(VUDP_tx___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VUDP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUDP_tx___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullQData(oldp+19,(0x123456ULL),48);
    bufp->fullQData(oldp+21,(0x65431ULL),48);
    bufp->fullSData(oldp+23,(0x800U),16);
    bufp->fullCData(oldp+24,(4U),4);
    bufp->fullCData(oldp+25,(5U),4);
    bufp->fullCData(oldp+26,(0x11U),8);
    bufp->fullCData(oldp+27,(6U),8);
    bufp->fullCData(oldp+28,(1U),8);
    bufp->fullCData(oldp+29,(0x40U),8);
    bufp->fullIData(oldp+30,(0xffffffffU),32);
    bufp->fullIData(oldp+31,(0xaaaaaaaaU),32);
    bufp->fullSData(oldp+32,(0x1234U),16);
    bufp->fullSData(oldp+33,(0x4321U),16);
    bufp->fullSData(oldp+34,(8U),16);
    bufp->fullSData(oldp+35,(0U),16);
}

VL_ATTR_COLD void VUDP_tx___024root__trace_full_0_sub_0(VUDP_tx___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void VUDP_tx___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUDP_tx___024root__trace_full_0\n"); );
    // Init
    VUDP_tx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VUDP_tx___024root*>(voidSelf);
    VUDP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VUDP_tx___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VUDP_tx___024root__trace_full_0_sub_0(VUDP_tx___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VUDP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUDP_tx___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->CLK));
    bufp->fullBit(oldp+2,(vlSelf->nRST));
    bufp->fullBit(oldp+3,(vlSelf->UDP_valid));
    bufp->fullQData(oldp+4,(vlSelf->UDP_payload),64);
    bufp->fullSData(oldp+6,(vlSelf->UDP_len),16);
    bufp->fullSData(oldp+7,(vlSelf->UDP_src_port),16);
    bufp->fullSData(oldp+8,(vlSelf->UDP_dest_port),16);
    bufp->fullBit(oldp+9,(vlSelf->UDP_last));
    bufp->fullQData(oldp+10,(vlSelf->IP_payload),64);
    bufp->fullBit(oldp+12,(vlSelf->IP_valid));
    bufp->fullBit(oldp+13,(vlSelf->IP_last));
    bufp->fullCData(oldp+14,(vlSelf->UDP_tx__DOT__current_state),2);
    bufp->fullCData(oldp+15,(vlSelf->UDP_tx__DOT__nstate),2);
    bufp->fullSData(oldp+16,((0xffffU & ((IData)(8U) 
                                         + (IData)(vlSelf->UDP_len)))),16);
    bufp->fullQData(oldp+17,(vlSelf->UDP_tx__DOT__header_reg),64);
}
