// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMAC_rx.h for the primary calling header

#ifndef VERILATED_VMAC_RX___024ROOT_H_
#define VERILATED_VMAC_RX___024ROOT_H_  // guard

#include "verilated.h"


class VMAC_rx__Syms;

class alignas(VL_CACHE_LINE_BYTES) VMAC_rx___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(CLK,0,0);
    VL_IN8(nRST,0,0);
    VL_IN8(xgmii_rxc,7,0);
    VL_OUT8(MAC_valid,0,0);
    VL_OUT8(CRC_flush,0,0);
    VL_OUT8(frame_ok,0,0);
    VL_OUT8(bytes_rcv_len,7,0);
    CData/*0:0*/ MAC_rx__DOT__crc_init;
    CData/*0:0*/ MAC_rx__DOT__end_valid;
    CData/*2:0*/ MAC_rx__DOT__bytes_offset;
    CData/*2:0*/ MAC_rx__DOT__end_FCS;
    CData/*2:0*/ MAC_rx__DOT__str_FCS;
    CData/*0:0*/ MAC_rx__DOT__sof_found;
    CData/*0:0*/ MAC_rx__DOT__crc_valid;
    CData/*0:0*/ MAC_rx__DOT__nsof_found;
    CData/*2:0*/ MAC_rx__DOT__sof_lane;
    CData/*2:0*/ MAC_rx__DOT__nsof_lane;
    CData/*7:0*/ MAC_rx__DOT__xgmii_rxc_f;
    CData/*7:0*/ MAC_rx__DOT__nxgmii_rxc_f;
    CData/*3:0*/ MAC_rx__DOT__FCS_offset;
    CData/*7:0*/ MAC_rx__DOT__byte_END;
    CData/*0:0*/ MAC_rx__DOT__crc_delay;
    CData/*0:0*/ MAC_rx__DOT__ncrc_delay;
    CData/*0:0*/ MAC_rx__DOT__soft_dl;
    CData/*0:0*/ MAC_rx__DOT__nsoft_dl;
    CData/*7:0*/ MAC_rx__DOT__bytes_rcv;
    CData/*7:0*/ MAC_rx__DOT__nbytes_rcv;
    CData/*7:0*/ MAC_rx__DOT__bytes_rcv_dl;
    CData/*7:0*/ MAC_rx__DOT__nbytes_rcv_dl;
    CData/*0:0*/ MAC_rx__DOT__nMAC_valid;
    CData/*5:0*/ MAC_rx__DOT__state;
    CData/*5:0*/ MAC_rx__DOT__next_state;
    CData/*7:0*/ MAC_rx__DOT__crc_convert__DOT__xgmii_rxc;
    CData/*7:0*/ MAC_rx__DOT__crc_frame_convert__DOT__xgmii_rxc;
    CData/*0:0*/ MAC_rx__DOT__xgmii_fcs__DOT__valid;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__CLK__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__nRST__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ MAC_rx__DOT__xgmii_rxc_frame;
    SData/*15:0*/ MAC_rx__DOT__nxgmii_rxc_frame;
    SData/*15:0*/ MAC_rx__DOT__FCS_rxc;
    SData/*15:0*/ MAC_rx__DOT__crc_ind;
    SData/*15:0*/ MAC_rx__DOT__ncrc_ind;
    IData/*31:0*/ MAC_rx__DOT__crc_check;
    IData/*31:0*/ MAC_rx__DOT__ncrc_check;
    VlWide<4>/*127:0*/ MAC_rx__DOT__frame_store;
    VlWide<4>/*127:0*/ MAC_rx__DOT__nframe_store;
    VlWide<4>/*127:0*/ MAC_rx__DOT__FCS_shifted;
    IData/*31:0*/ MAC_rx__DOT__FCS_frame;
    IData/*31:0*/ MAC_rx__DOT__nFCS_frame;
    IData/*31:0*/ MAC_rx__DOT__CRC__DOT__crc_reg;
    IData/*31:0*/ MAC_rx__DOT__CRC__DOT__next_crc;
    IData/*31:0*/ __VactIterCount;
    VL_IN64(xgmii_rxd,63,0);
    VL_OUT64(MAC_payload_rcv,63,0);
    QData/*63:0*/ MAC_rx__DOT__crc_in_big;
    QData/*63:0*/ MAC_rx__DOT__xgmii_rxd_f;
    QData/*63:0*/ MAC_rx__DOT__nxgmii_rxd_f;
    QData/*63:0*/ MAC_rx__DOT__FCS_frame_cvt;
    QData/*63:0*/ MAC_rx__DOT__nMAC_payload_rcv;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VMAC_rx__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMAC_rx___024root(VMAC_rx__Syms* symsp, const char* v__name);
    ~VMAC_rx___024root();
    VL_UNCOPYABLE(VMAC_rx___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
