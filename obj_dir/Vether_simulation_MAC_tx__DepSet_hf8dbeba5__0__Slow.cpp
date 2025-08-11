// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation_MAC_tx.h"

VL_ATTR_COLD void Vether_simulation_MAC_tx___ctor_var_reset(Vether_simulation_MAC_tx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_MAC_tx___ctor_var_reset\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__CLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6192783415628501865ull);
    vlSelf->__PVT__nRST = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9596079045119723318ull);
    vlSelf->__PVT__TX_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3522186512893532196ull);
    vlSelf->__PVT__xgmii_txd = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6870240535326776383ull);
    vlSelf->__PVT__xgmii_txc = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12255542505013825090ull);
    vlSelf->__PVT__IP_transmit = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13918429040783823530ull);
    vlSelf->__PVT__tt_len_data = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17207426720994874401ull);
    vlSelf->__PVT__IP_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1739779174672738923ull);
    vlSelf->__PVT__IP_send = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2555916959053399504ull);
    vlSelf->__PVT__frame_end = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10763152428090563105ull);
    vlSelf->__PVT__xgmii_txd_l = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13386978690841791258ull);
    vlSelf->__PVT__nxgmii_txd_l = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9170711246784182682ull);
    vlSelf->__PVT__xgmii_txc_l = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18438207069270892778ull);
    vlSelf->__PVT__nxgmii_txc_l = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3443051520881845290ull);
    vlSelf->__PVT__IP_send_l = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5900497473931223340ull);
    vlSelf->__PVT__state = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9404372463396948974ull);
    vlSelf->__PVT__nstate = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14473519320944010295ull);
    vlSelf->__PVT__crc_init = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18340435131149598088ull);
    vlSelf->__PVT__valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4944192500720994163ull);
    vlSelf->__PVT__nvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15330755621714908673ull);
    vlSelf->__PVT__IP_last_dl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14437784228335681199ull);
    vlSelf->__PVT__crc_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1753120250124389930ull);
    vlSelf->__PVT__len_counter = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15243626677953395101ull);
    vlSelf->__PVT__nlen_counter = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9762770556833652113ull);
    vlSelf->__Vdly__state = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15137669457351727936ull);
    vlSelf->__Vdly__xgmii_txd_l = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1850321853847929764ull);
    vlSelf->__Vdly__xgmii_txc_l = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18293373525896364076ull);
    vlSelf->__Vdly__len_counter = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10097855325763518289ull);
    vlSelf->__Vdly__IP_last_dl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10404487548845897374ull);
    vlSelf->__Vdly__IP_send = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6945726573287714387ull);
}
