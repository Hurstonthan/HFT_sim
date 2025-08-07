// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation_IP_rx.h"

VL_ATTR_COLD void Vether_simulation_IP_rx___ctor_var_reset(Vether_simulation_IP_rx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_IP_rx___ctor_var_reset\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__CLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6192783415628501865ull);
    vlSelf->__PVT__nRST = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9596079045119723318ull);
    vlSelf->__PVT__MAC_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16882839068407703899ull);
    vlSelf->__PVT__MAC_payload_rcv = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4151267856945533676ull);
    vlSelf->__PVT__MAC_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5567373176478683438ull);
    vlSelf->__PVT__bytes_rcv_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8940703865407227134ull);
    vlSelf->__PVT__IP_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10454921636400644467ull);
    vlSelf->__PVT__IP_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7370612069209852218ull);
    vlSelf->__PVT__IP_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1739779174672738923ull);
    vlSelf->__PVT__IP_payload = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16509947563924968673ull);
    vlSelf->__PVT__IP_bytes_rcv_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13671918877784535672ull);
    vlSelf->__PVT__IP_pseuder = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2907016794571974014ull);
    vlSelf->__PVT__is_udp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8635861780934784090ull);
    vlSelf->__PVT__is_tcp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1011679135266419320ull);
    vlSelf->__PVT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9404372463396948974ull);
    vlSelf->__PVT__nstate = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14473519320944010295ull);
    vlSelf->__PVT__IP_checksum = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 195647036795844730ull);
    vlSelf->__PVT__nIP_checksum = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5986713089212814797ull);
    vlSelf->__PVT__nIP_payload = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6977936882057337749ull);
    vlSelf->__PVT__bytes_rcv = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2549967790072508984ull);
    vlSelf->__PVT__nbytes_rcv = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17573847664257856799ull);
    vlSelf->__PVT__chksum_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14064018416082148071ull);
    vlSelf->__PVT__chksum_clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16235569745030128722ull);
    vlSelf->__PVT__chksum_in = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2410970220648627545ull);
    vlSelf->__PVT__chksum_pl = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4542242213720006894ull);
    vlSelf->__PVT__chksum_final = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 10814152443258030108ull);
    vlSelf->__PVT__dst_addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10797398236050318282ull);
    vlSelf->__PVT__ndst_addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17698791207718241579ull);
    vlSelf->__PVT__IP_len = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16727393467907144165ull);
    vlSelf->__PVT__nIP_len = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14811736786899597615ull);
    vlSelf->__PVT__nIP_bytes_rcv_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6472737806124397632ull);
    vlSelf->__PVT__nIP_pseuder = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10598323689724610776ull);
    vlSelf->__PVT__temp = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 7233838040978344170ull);
    vlSelf->__PVT__nIP_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1371468948574551131ull);
    vlSelf->__PVT__nIP_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1574176776897446677ull);
    vlSelf->__PVT__next_is_udp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5025551545282829110ull);
    vlSelf->__PVT__next_is_tcp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15479221200107414780ull);
    vlSelf->__PVT__total_len = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 457624637349689913ull);
    vlSelf->__PVT__frags_flag = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2899061800603132820ull);
    vlSelf->__PVT__ttl = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8137850875466763729ull);
    vlSelf->__PVT__flags = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7921719909686688401ull);
    vlSelf->__PVT__fragoff = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 3361304389022148014ull);
    vlSelf->__PVT__test_valid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14978471197972757186ull);
    vlSelf->__PVT__ip_version = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12867776541938913026ull);
    vlSelf->__PVT__is_src_addr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6427074662922742261ull);
    vlSelf->__PVT__is_ip_version_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11649947861515591739ull);
    vlSelf->__Vdly__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15137669457351727936ull);
    vlSelf->__Vdly__IP_checksum = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13894426497167793442ull);
    vlSelf->__Vdly__IP_payload = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9091338040211756566ull);
    vlSelf->__Vdly__bytes_rcv = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10579155383431852311ull);
    vlSelf->__Vdly__dst_addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11507460236939497541ull);
    vlSelf->__Vdly__IP_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16966767126475409038ull);
    vlSelf->__Vdly__IP_len = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2854735296135568012ull);
    vlSelf->__Vdly__IP_bytes_rcv_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13795610254581637315ull);
    vlSelf->__Vdly__IP_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14887692707272044333ull);
    vlSelf->__Vdly__IP_pseuder = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4369160355155895477ull);
    vlSelf->__Vdly__is_tcp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1527639715377744793ull);
    vlSelf->__Vdly__is_udp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8199572416490347541ull);
}
