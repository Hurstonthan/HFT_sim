// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMAC_rx.h for the primary calling header

#ifndef VERILATED_VMAC_RX___024ROOT_H_
#define VERILATED_VMAC_RX___024ROOT_H_  // guard

#include "verilated.h"
class VMAC_rx_MAC_rx;
class VMAC_rx_ether_pkg;


class VMAC_rx__Syms;

class alignas(VL_CACHE_LINE_BYTES) VMAC_rx___024root final : public VerilatedModule {
  public:
    // CELLS
    VMAC_rx_MAC_rx* __PVT__MAC_rx;
    VMAC_rx_ether_pkg* __PVT__ether_pkg;

    // DESIGN SPECIFIC STATE
    VL_IN8(CLK,0,0);
    VL_IN8(nRST,0,0);
    VL_IN8(xgmii_rxc,7,0);
    VL_OUT8(MAC_valid,0,0);
    VL_OUT8(CRC_flush,0,0);
    VL_OUT8(frame_ok,0,0);
    VL_OUT8(bytes_rcv_len,7,0);
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __VstlExecute;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlContinue;
    CData/*0:0*/ __VicoDidInit;
    CData/*0:0*/ __VicoExecute;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VicoContinue;
    CData/*0:0*/ __Vtrigprevexpr___TOP__MAC_rx__CLK__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__MAC_rx__nRST__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__MAC_rx__CRC____PVT__CLK__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__MAC_rx__CRC____PVT__nRST__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactExecute;
    CData/*0:0*/ __VactFirstIteration;
    CData/*0:0*/ __VactContinue;
    CData/*0:0*/ __VnbaExecute;
    CData/*0:0*/ __VnbaFirstIteration;
    CData/*0:0*/ __VnbaContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VnbaIterCount;
    VL_IN64(xgmii_rxd,63,0);
    VL_OUT64(MAC_payload_rcv,63,0);
    QData/*47:0*/ __Vtrigprevexpr___TOP__MAC_rx____PVT__mac_dest_addr__0;
    QData/*47:0*/ __Vtrigprevexpr___TOP__MAC_rx____PVT__mac_dest_addr__1;
    QData/*47:0*/ __Vtrigprevexpr___TOP__MAC_rx____PVT__mac_dest_addr__2;
    VlUnpacked<CData/*0:0*/, 7> __Vm_traceActivity;
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<2> __VicoTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VpreTriggered;
    VlTriggerVec<5> __VnbaTriggered;

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
