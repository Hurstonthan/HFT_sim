// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMAC_IP_UDP_rx.h for the primary calling header

#ifndef VERILATED_VMAC_IP_UDP_RX___024ROOT_H_
#define VERILATED_VMAC_IP_UDP_RX___024ROOT_H_  // guard

#include "verilated.h"


class VMAC_IP_UDP_rx__Syms;

class alignas(VL_CACHE_LINE_BYTES) VMAC_IP_UDP_rx___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(CLK,0,0);
        VL_IN8(nRST,0,0);
        VL_IN8(xgmii_rxc,7,0);
        VL_OUT8(UDP_flush,0,0);
        VL_OUT8(UDP_valid,0,0);
        CData/*0:0*/ MAC_IP_UDP_rx__DOT__IP_valid;
        CData/*0:0*/ MAC_IP_UDP_rx__DOT__IP_flush;
        CData/*0:0*/ MAC_IP_UDP_rx__DOT__is_udp;
        CData/*0:0*/ MAC_IP_UDP_rx__DOT__is_tcp;
        CData/*0:0*/ MAC_IP_UDP_rx__DOT__MAC_valid;
        CData/*0:0*/ MAC_IP_UDP_rx__DOT__CRC_flush;
        CData/*0:0*/ MAC_IP_UDP_rx__DOT__frame_ok;
        CData/*0:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__crc_init;
        CData/*0:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__end_valid;
        CData/*2:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__bytes_offset;
        CData/*2:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__end_FCS;
        CData/*2:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__str_FCS;
        CData/*0:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__sof_found;
        CData/*0:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__crc_valid;
        CData/*0:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__nsof_found;
        CData/*2:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__sof_lane;
        CData/*2:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__nsof_lane;
        CData/*7:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__xgmii_rxc_f;
        CData/*7:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__nxgmii_rxc_f;
        CData/*7:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__xgmii_rxc_MSB;
        CData/*3:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__FCS_offset;
        CData/*7:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__byte_END;
        CData/*0:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__crc_delay;
        CData/*0:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__ncrc_delay;
        CData/*0:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__soft_dl;
        CData/*0:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__nsoft_dl;
        CData/*7:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__bytes_rcv;
        CData/*7:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__nbytes_rcv;
        CData/*7:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__bytes_rcv_dl;
        CData/*7:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__nbytes_rcv_dl;
        CData/*0:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__nMAC_valid;
        CData/*5:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__state;
        CData/*5:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__next_state;
        CData/*7:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__crc_convert__DOT__xgmii_rxc;
        CData/*7:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__crc_frame_convert__DOT__xgmii_rxc;
        CData/*7:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__payload_cvrt__DOT__xgmii_rxc;
        CData/*0:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__xgmii_fcs__DOT__valid;
        CData/*3:0*/ MAC_IP_UDP_rx__DOT__ip_inst__DOT__state;
        CData/*3:0*/ MAC_IP_UDP_rx__DOT__ip_inst__DOT__nstate;
        CData/*0:0*/ MAC_IP_UDP_rx__DOT__ip_inst__DOT__chksum_en;
        CData/*0:0*/ MAC_IP_UDP_rx__DOT__ip_inst__DOT__chksum_clear;
        CData/*0:0*/ MAC_IP_UDP_rx__DOT__ip_inst__DOT__nIP_valid;
        CData/*0:0*/ MAC_IP_UDP_rx__DOT__ip_inst__DOT__next_is_udp;
        CData/*0:0*/ MAC_IP_UDP_rx__DOT__ip_inst__DOT__next_is_tcp;
        CData/*3:0*/ MAC_IP_UDP_rx__DOT__ip_inst__DOT__test_valid;
        CData/*3:0*/ MAC_IP_UDP_rx__DOT__ip_inst__DOT__ip_version;
        CData/*0:0*/ MAC_IP_UDP_rx__DOT__ip_inst__DOT__is_src_addr;
        CData/*0:0*/ MAC_IP_UDP_rx__DOT__ip_inst__DOT__is_ip_version_valid;
        CData/*2:0*/ MAC_IP_UDP_rx__DOT__udp_inst__DOT__current_state;
        CData/*2:0*/ MAC_IP_UDP_rx__DOT__udp_inst__DOT__nstate;
        CData/*0:0*/ MAC_IP_UDP_rx__DOT__udp_inst__DOT__next_UDP_valid;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoDidInit;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__nRST__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
    };
    struct {
        SData/*15:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__xgmii_rxc_frame;
        SData/*15:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__nxgmii_rxc_frame;
        SData/*15:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__FCS_rxc;
        SData/*15:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__crc_ind;
        SData/*15:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__ncrc_ind;
        SData/*15:0*/ MAC_IP_UDP_rx__DOT__ip_inst__DOT__IP_checksum;
        SData/*15:0*/ MAC_IP_UDP_rx__DOT__ip_inst__DOT__nIP_checksum;
        SData/*15:0*/ MAC_IP_UDP_rx__DOT__ip_inst__DOT__bytes_rcv;
        SData/*15:0*/ MAC_IP_UDP_rx__DOT__ip_inst__DOT__nbytes_rcv;
        SData/*15:0*/ MAC_IP_UDP_rx__DOT__ip_inst__DOT__dst_addr;
        SData/*15:0*/ MAC_IP_UDP_rx__DOT__ip_inst__DOT__ndst_addr;
        SData/*15:0*/ MAC_IP_UDP_rx__DOT__ip_inst__DOT__IP_len;
        SData/*15:0*/ MAC_IP_UDP_rx__DOT__ip_inst__DOT__nIP_len;
        SData/*15:0*/ MAC_IP_UDP_rx__DOT__udp_inst__DOT__cnt;
        SData/*15:0*/ MAC_IP_UDP_rx__DOT__udp_inst__DOT__next_cnt;
        SData/*15:0*/ MAC_IP_UDP_rx__DOT__udp_inst__DOT__UDP_len;
        SData/*15:0*/ MAC_IP_UDP_rx__DOT__udp_inst__DOT__next_UDP_len;
        IData/*31:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__crc_check;
        IData/*31:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__ncrc_check;
        VlWide<4>/*127:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__frame_store;
        VlWide<4>/*127:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__nframe_store;
        VlWide<4>/*127:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__FCS_grap;
        VlWide<4>/*127:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__FCS_shifted;
        IData/*31:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__FCS_frame;
        IData/*31:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__nFCS_frame;
        IData/*31:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__rg;
        IData/*31:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__nrg;
        VlWide<4>/*127:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__temp;
        IData/*31:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__CRC__DOT__crc_reg;
        IData/*31:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__CRC__DOT__next_crc;
        IData/*16:0*/ MAC_IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__TCP_checksum;
        IData/*16:0*/ MAC_IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__nTCP_checksum;
        IData/*19:0*/ MAC_IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__temp;
        IData/*19:0*/ MAC_IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__temp1;
        IData/*19:0*/ MAC_IP_UDP_rx__DOT__ip_inst__DOT__chksum_inst__DOT__temp2;
        IData/*31:0*/ __VactIterCount;
        VL_IN64(xgmii_rxd,63,0);
        VL_OUT64(UDP_payload,63,0);
        QData/*63:0*/ MAC_IP_UDP_rx__DOT__IP_payload;
        QData/*63:0*/ MAC_IP_UDP_rx__DOT__MAC_payload_rcv;
        QData/*63:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__crc_in_big;
        QData/*63:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__xgmii_rxd_f;
        QData/*63:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__nxgmii_rxd_f;
        QData/*63:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__xgmii_rxd_MSB;
        QData/*63:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__FCS_frame_cvt;
        QData/*63:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__MAC_payload_rcv_cvrt;
        QData/*63:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__nMAC_payload_rcv_cvrt;
        QData/*47:0*/ MAC_IP_UDP_rx__DOT__mac_inst__DOT__mac_dest_addr;
        QData/*63:0*/ MAC_IP_UDP_rx__DOT__ip_inst__DOT__nIP_payload;
        QData/*63:0*/ MAC_IP_UDP_rx__DOT__ip_inst__DOT__chksum_in;
        QData/*63:0*/ MAC_IP_UDP_rx__DOT__udp_inst__DOT__next_UDP_payload;
        QData/*47:0*/ __Vtrigprevexpr___TOP__MAC_IP_UDP_rx__DOT__mac_inst__DOT__mac_dest_addr__0;
        QData/*47:0*/ __Vtrigprevexpr___TOP__MAC_IP_UDP_rx__DOT__mac_inst__DOT__mac_dest_addr__1;
        QData/*47:0*/ __Vtrigprevexpr___TOP__MAC_IP_UDP_rx__DOT__mac_inst__DOT__mac_dest_addr__2;
        VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    };
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<2> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VMAC_IP_UDP_rx__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMAC_IP_UDP_rx___024root(VMAC_IP_UDP_rx__Syms* symsp, const char* v__name);
    ~VMAC_IP_UDP_rx___024root();
    VL_UNCOPYABLE(VMAC_IP_UDP_rx___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
