// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vethernet_rx.h for the primary calling header

#include "Vethernet_rx__pch.h"
#include "Vethernet_rx_MAC_rx.h"

VL_ATTR_COLD void Vethernet_rx_MAC_rx___ctor_var_reset(Vethernet_rx_MAC_rx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vethernet_rx_MAC_rx___ctor_var_reset\n"); );
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__CLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6192783415628501865ull);
    vlSelf->__PVT__nRST = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9596079045119723318ull);
    vlSelf->__PVT__xgmii_rxd = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14365979020943574069ull);
    vlSelf->__PVT__xgmii_rxc = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11892103045410615185ull);
    vlSelf->__PVT__MAC_payload_rcv = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4151267856945533676ull);
    vlSelf->__PVT__MAC_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16882839068407703899ull);
    vlSelf->__PVT__CRC_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16946334118890181985ull);
    vlSelf->__PVT__frame_ok = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2537328812920291937ull);
    vlSelf->__PVT__bytes_rcv_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8940703865407227134ull);
    vlSelf->__PVT__crc_init = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18340435131149598088ull);
    vlSelf->__PVT__end_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14488688720691505148ull);
    vlSelf->__PVT__crc_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1753120250124389930ull);
    vlSelf->__PVT__crc_in = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12337601207866027140ull);
    vlSelf->__PVT__crc_in_big = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9881189500506068258ull);
    vlSelf->__PVT__xgmii_rxc_frame = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14767225294505613108ull);
    vlSelf->__PVT__nxgmii_rxc_frame = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7615191693448720072ull);
    vlSelf->__PVT__bytes_offset = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9480138795055053938ull);
    vlSelf->__PVT__end_FCS = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13161216207337109483ull);
    vlSelf->__PVT__str_FCS = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 509897672778809243ull);
    vlSelf->__PVT__sof_found = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7751111509662750386ull);
    vlSelf->__PVT__crc_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6912596090739275331ull);
    vlSelf->__PVT__nsof_found = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12004700650207328487ull);
    vlSelf->__PVT__sof_lane = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12936515810297857732ull);
    vlSelf->__PVT__nsof_lane = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12888690470868048842ull);
    vlSelf->__PVT__xgmii_rxd_f = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11244782306600639439ull);
    vlSelf->__PVT__nxgmii_rxd_f = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 376932725855852622ull);
    vlSelf->__PVT__xgmii_rxd_MSB = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13947669933378652963ull);
    vlSelf->__PVT__xgmii_rxd_f_cvt = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16753070726915024228ull);
    vlSelf->__PVT__xgmii_rxc_f = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15843434436151972690ull);
    vlSelf->__PVT__nxgmii_rxc_f = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9556564978523257058ull);
    vlSelf->__PVT__xgmii_rxc_MSB = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15650026489414068191ull);
    vlSelf->__PVT__FCS_rxc = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10464079062751904220ull);
    vlSelf->__PVT__nFCS_rxc = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18287840624963742449ull);
    vlSelf->__PVT__FCS_offset = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8482341860179865956ull);
    vlSelf->__PVT__crc_check = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11163707158736579992ull);
    vlSelf->__PVT__ncrc_check = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4406226535554480638ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__frame_store, __VscopeHash, 2795754803985848348ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__nframe_store, __VscopeHash, 6268698731376077250ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__FCS_grap, __VscopeHash, 11698847505364000419ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__FCS_shifted, __VscopeHash, 16035356375688482599ull);
    vlSelf->__PVT__crc_ind = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12654792523700329363ull);
    vlSelf->__PVT__ncrc_ind = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6301439794286643737ull);
    vlSelf->__PVT__shift_bits = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7928481622896797541ull);
    vlSelf->__PVT__byte_END = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16376312156161212628ull);
    vlSelf->__PVT__FCS_frame = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11473110822599412120ull);
    vlSelf->__PVT__nFCS_frame = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15095012849411410071ull);
    vlSelf->__PVT__rg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7949930029546432755ull);
    vlSelf->__PVT__nrg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11927490343095378668ull);
    vlSelf->__PVT__FCS_frame_cvt = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11016584808402171135ull);
    vlSelf->__PVT__crc_delay = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4813008388058198035ull);
    vlSelf->__PVT__ncrc_delay = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14128846217241602304ull);
    vlSelf->__PVT__i = 0;
    vlSelf->__PVT__soft_dl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8968774620453428783ull);
    vlSelf->__PVT__nsoft_dl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9160597459876293464ull);
    vlSelf->__PVT__case_debug = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7228688212424364840ull);
    vlSelf->__PVT__MAC_payload_rcv_cvrt = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1485399560965132782ull);
    vlSelf->__PVT__nMAC_payload_rcv_cvrt = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1981054871737973314ull);
    vlSelf->__PVT__bytes_rcv = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2549967790072508984ull);
    vlSelf->__PVT__nbytes_rcv = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17573847664257856799ull);
    vlSelf->__PVT__bytes_rcv_dl = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2492766819790171542ull);
    vlSelf->__PVT__nbytes_rcv_dl = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13292331707982266750ull);
    vlSelf->__PVT__nMAC_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9938363080629532322ull);
    vlSelf->__Vcellinp__crc_frame_convert__xgmii_rxd = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6096225534916767112ull);
    vlSelf->__Vcellinp__xgmii_fcs__din = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6627477552104625771ull);
    vlSelf->__PVT__state = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9404372463396948974ull);
    vlSelf->__PVT__next_state = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10383377256973303270ull);
    vlSelf->__PVT__mac_dest_addr = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 2298845720583880866ull);
    vlSelf->__PVT__mac_src_addr = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 10259348937054852327ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__temp, __VscopeHash, 7233838040978344170ull);
    vlSelf->__PVT__mac_dest_addr_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6375811014845466327ull);
    vlSelf->__PVT__mac_src_addr_first_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 354876500476174177ull);
    vlSelf->__PVT__mac_src_addr_second_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1688965875965462932ull);
    vlSelf->__Vdly__state = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15137669457351727936ull);
    vlSelf->__Vdly__crc_check = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16097479611084379645ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__Vdly__frame_store, __VscopeHash, 2870292541581303272ull);
    vlSelf->__Vdly__rg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6324504929429351645ull);
    vlSelf->__Vdly__FCS_frame = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1821840388967903550ull);
    vlSelf->__Vdly__crc_delay = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6160477841137183465ull);
    vlSelf->__Vdly__sof_found = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4315844490141895796ull);
    vlSelf->__Vdly__sof_lane = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17410564454789812997ull);
    vlSelf->__Vdly__xgmii_rxc_frame = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16618981106761526267ull);
    vlSelf->__Vdly__soft_dl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7714107382174671966ull);
    vlSelf->__Vdly__MAC_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5775285337768583202ull);
    vlSelf->__Vdly__MAC_payload_rcv_cvrt = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12450893245573341151ull);
    vlSelf->__Vdly__bytes_rcv = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10579155383431852311ull);
    vlSelf->__Vdly__bytes_rcv_dl = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16827195039149851673ull);
    vlSelf->__Vdly__FCS_rxc = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 316673685554898760ull);
}
