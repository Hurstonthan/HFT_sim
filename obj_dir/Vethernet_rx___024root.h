// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vethernet_rx.h for the primary calling header

#ifndef VERILATED_VETHERNET_RX___024ROOT_H_
#define VERILATED_VETHERNET_RX___024ROOT_H_  // guard

#include "verilated.h"
class Vethernet_rx_ether_pkg;
class Vethernet_rx_ethernet_rx;
class Vethernet_rx_rx_pkg;


class Vethernet_rx__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vethernet_rx___024root final : public VerilatedModule {
  public:
    // CELLS
    Vethernet_rx_ethernet_rx* __PVT__ethernet_rx;
    Vethernet_rx_rx_pkg* __PVT__rx_pkg;
    Vethernet_rx_ether_pkg* __PVT__ether_pkg;

    // DESIGN SPECIFIC STATE
    VL_IN8(CLK,0,0);
    VL_IN8(nRST,0,0);
    VL_IN8(xgmii_rxc,7,0);
    VL_OUT8(IP_valid,0,0);
    VL_OUT8(IP_flush,0,0);
    VL_OUT8(is_udp,0,0);
    VL_OUT8(is_tcp,0,0);
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __VstlExecute;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlContinue;
    CData/*0:0*/ __VicoDidInit;
    CData/*0:0*/ __VicoExecute;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VicoContinue;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ethernet_rx__ip_inst____PVT__CLK__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ethernet_rx__ip_inst____PVT__nRST__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ethernet_rx__mac_inst____PVT__CLK__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ethernet_rx__mac_inst____PVT__nRST__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ethernet_rx__mac_inst__CRC____PVT__CLK__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ethernet_rx__mac_inst__CRC____PVT__nRST__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ethernet_rx__ip_inst__chksum_inst____PVT__CLK__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ethernet_rx__ip_inst__chksum_inst____PVT__nRST__0;
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
    VL_OUT64(IP_payload,63,0);
    QData/*47:0*/ __Vtrigprevexpr___TOP__ethernet_rx__mac_inst____PVT__mac_dest_addr__0;
    QData/*47:0*/ __Vtrigprevexpr___TOP__ethernet_rx__mac_inst____PVT__mac_dest_addr__1;
    QData/*47:0*/ __Vtrigprevexpr___TOP__ethernet_rx__mac_inst____PVT__mac_dest_addr__2;
    VlUnpacked<CData/*0:0*/, 10> __Vm_traceActivity;
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<2> __VicoTriggered;
    VlTriggerVec<9> __VactTriggered;
    VlTriggerVec<9> __VpreTriggered;
    VlTriggerVec<9> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vethernet_rx__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vethernet_rx___024root(Vethernet_rx__Syms* symsp, const char* v__name);
    ~Vethernet_rx___024root();
    VL_UNCOPYABLE(Vethernet_rx___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
