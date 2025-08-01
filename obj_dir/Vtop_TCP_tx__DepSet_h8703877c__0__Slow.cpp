// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_TCP_tx.h"

VL_ATTR_COLD void Vtop_TCP_tx___eval_initial__TOP__top__u_tcp__TCP_tx(Vtop_TCP_tx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_TCP_tx___eval_initial__TOP__top__u_tcp__TCP_tx\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__src_port = 0x1234U;
    vlSelfRef.__PVT__dest_port = 0x5678U;
}

VL_ATTR_COLD void Vtop_TCP_tx___stl_sequent__TOP__top__u_tcp__TCP_tx__0(Vtop_TCP_tx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_TCP_tx___stl_sequent__TOP__top__u_tcp__TCP_tx__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtemp_1;
    IData/*31:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__PVT__nstate = vlSelfRef.__PVT__state;
    vlSelfRef.__PVT__nTCP_transmit = vlSelfRef.__PVT__TCP_transmit;
    vlSelfRef.__PVT__nTCP_tx_valid = vlSelfRef.__PVT__TCP_tx_valid;
    vlSelfRef.__PVT__nTCP_tx_last = vlSelfRef.__PVT__TCP_tx_last;
    vlSelfRef.__PVT__nbytes_sent = vlSelfRef.__PVT__bytes_sent;
    vlSelfRef.__PVT__valid_checksum = 0U;
    vlSelfRef.__PVT__rd_FIFO_en = 0U;
    vlSelfRef.__PVT__nseq_up = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__nTCP_tx_last = 0U;
        if (vlSelfRef.__PVT__TCP_send) {
            vlSelfRef.__PVT__nstate = 1U;
            vlSelfRef.__PVT__nTCP_transmit = VL_CONCAT_QII(64,32,32, 
                                                           VL_EXTEND_II(32,16, (IData)(vlSelfRef.__PVT__src_port)), 
                                                           VL_CONCAT_III(32,16,16, (IData)(vlSelfRef.__PVT__dest_port), 
                                                                         (0xffffU 
                                                                          & VL_SEL_IIII(32, vlSelfRef.__PVT__seq_num_tx, 0x10U, 0x10U))));
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__nstate = 2U;
        vlSelfRef.__PVT__nTCP_transmit = VL_CONCAT_QIQ(64,16,48, 
                                                       (0xffffU 
                                                        & VL_SEL_IIII(32, vlSelfRef.__PVT__seq_num_tx, 0U, 0x10U)), 
                                                       VL_CONCAT_QII(48,32,16, vlSelfRef.__PVT__ACK_tx, 
                                                                     VL_CONCAT_III(16,4,12, (IData)(vlSelfRef.__PVT__offset_tx), 
                                                                                VL_EXTEND_II(12,8, (IData)(vlSelfRef.__PVT__TCP_control_tx)))));
        vlSelfRef.__PVT__valid_checksum = 1U;
    } else if ((2U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__valid_checksum = 0U;
        vlSelfRef.__PVT__rd_FIFO_en = 1U;
        vlSelfRef.__PVT__nTCP_transmit = VL_CONCAT_QII(64,32,32, 
                                                       VL_CONCAT_III(32,16,16, (IData)(vlSelfRef.__PVT__window_size_tx), 
                                                                     (0xffffU 
                                                                      & VL_SEL_IIII(17, vlSelfRef.__PVT__TCP_checksum, 0U, 0x10U))), 
                                                       VL_CONCAT_III(32,16,16, (IData)(vlSelfRef.__PVT__urgent_pointer_tx), 0U));
        vlSelfRef.__PVT__nstate = 3U;
        if (VL_REDOR_I(vlSelfRef.__PVT__bytes_abt_sent)) {
            vlSelfRef.__PVT__nTCP_transmit = VL_CONCAT_QII(64,32,32, 
                                                           VL_CONCAT_III(32,16,16, (IData)(vlSelfRef.__PVT__window_size_tx), 
                                                                         (0xffffU 
                                                                          & VL_SEL_IIII(17, vlSelfRef.__PVT__TCP_checksum, 0U, 0x10U))), 
                                                           VL_CONCAT_III(32,16,16, (IData)(vlSelfRef.__PVT__urgent_pointer_tx), 0U));
            vlSelfRef.__PVT__nstate = 3U;
        } else {
            vlSelfRef.__PVT__nstate = 0U;
            vlSelfRef.__PVT__nseq_up = 1U;
            vlSelfRef.__PVT__nTCP_tx_last = 1U;
        }
    } else if ((3U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__rd_FIFO_en = 1U;
        if (VL_REDOR_I(vlSelfRef.__PVT__bytes_abt_sent)) {
            vlSelfRef.__PVT__nTCP_transmit = vlSelfRef.__PVT__rd_FIFO_payload;
            vlSelfRef.__PVT__nstate = 4U;
        }
    } else if ((4U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__rd_FIFO_en = 1U;
        vlSelfRef.__PVT__nTCP_transmit = vlSelfRef.__PVT__rd_FIFO_payload;
        if (vlSelfRef.__PVT__rd_FIFO_last) {
            vlSelfRef.__PVT__nstate = 0U;
            vlSelfRef.__PVT__nTCP_tx_last = 1U;
            vlSelfRef.__PVT__nseq_up = 1U;
            if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__TCP_control_tx), 1U) 
                       | VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__TCP_control_tx), 0U)))) {
                vlSelfRef.__PVT__nbytes_sent = ((IData)(1U) 
                                                + vlSelfRef.__PVT__bytes_sent);
            }
        }
    }
    vlSelfRef.__PVT__nTCP_checksum = vlSelfRef.__PVT__TCP_checksum;
    if (vlSelfRef.__PVT__valid_checksum) {
        vlSelfRef.__PVT__temp = (0xfffffU & ((IData)(0xec42U) 
                                             + ((((
                                                   (((VL_EXTEND_II(20,16, 
                                                                   (0xffffU 
                                                                    & VL_SEL_IIII(32, vlSelfRef.__PVT__bytes_abt_sent, 0U, 0x10U))) 
                                                      + 
                                                      VL_EXTEND_II(20,16, 
                                                                   (0xffffU 
                                                                    & VL_SEL_IIII(32, vlSelfRef.__PVT__seq_num_tx, 0x10U, 0x10U)))) 
                                                     + 
                                                     VL_EXTEND_II(20,16, 
                                                                  (0xffffU 
                                                                   & VL_SEL_IIII(32, vlSelfRef.__PVT__seq_num_tx, 0U, 0x10U)))) 
                                                    + 
                                                    VL_EXTEND_II(20,16, 
                                                                 (0xffffU 
                                                                  & VL_SEL_IIII(32, vlSelfRef.__PVT__ACK_tx, 0x10U, 0x10U)))) 
                                                   + 
                                                   VL_EXTEND_II(20,16, 
                                                                (0xffffU 
                                                                 & VL_SEL_IIII(32, vlSelfRef.__PVT__ACK_tx, 0U, 0x10U)))) 
                                                  + 
                                                  VL_EXTEND_II(20,16, 
                                                               VL_CONCAT_III(16,4,12, (IData)(vlSelfRef.__PVT__offset_tx), 
                                                                             VL_EXTEND_II(12,8, (IData)(vlSelfRef.__PVT__TCP_control_tx))))) 
                                                 + 
                                                 VL_EXTEND_II(20,16, (IData)(vlSelfRef.__PVT__urgent_pointer_tx))) 
                                                + VL_EXTEND_II(20,16, (IData)(vlSelfRef.__PVT__TCP_basesum_payload)))));
        __Vtemp_1 = (0xfffffU & (VL_EXTEND_II(20,16, 
                                              (0xffffU 
                                               & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x10U))) 
                                 + VL_EXTEND_II(20,4, 
                                                (0xfU 
                                                 & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0x10U, 4U)))));
        vlSelfRef.__PVT__temp = __Vtemp_1;
        __Vtemp_2 = (0xfffffU & (VL_EXTEND_II(20,16, 
                                              (0xffffU 
                                               & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x10U))) 
                                 + VL_EXTEND_II(20,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(20, vlSelfRef.__PVT__temp, 0x10U)))));
        vlSelfRef.__PVT__temp = __Vtemp_2;
        vlSelfRef.__PVT__nTCP_checksum = (0x1ffffU 
                                          & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x11U));
    }
}

VL_ATTR_COLD void Vtop_TCP_tx___ctor_var_reset(Vtop_TCP_tx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_TCP_tx___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__CLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6192783415628501865ull);
    vlSelf->__PVT__nRST = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9596079045119723318ull);
    vlSelf->__PVT__TCP_control_tx = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1155514922710194501ull);
    vlSelf->__PVT__seq_num_tx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15452675836633821188ull);
    vlSelf->__PVT__ACK_tx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13840256559930938490ull);
    vlSelf->__PVT__offset_tx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10448814117025191111ull);
    vlSelf->__PVT__window_size_tx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12658951007252711963ull);
    vlSelf->__PVT__urgent_pointer_tx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2381669506756488056ull);
    vlSelf->__PVT__rd_FIFO_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6363420242050000687ull);
    vlSelf->__PVT__rd_FIFO_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 615369904805283052ull);
    vlSelf->__PVT__rd_FIFO_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10855001204654443987ull);
    vlSelf->__PVT__rd_FIFO_payload = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6002881770607720665ull);
    vlSelf->__PVT__bytes_abt_sent = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14892826253315460437ull);
    vlSelf->__PVT__seq_up = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 796946559863942825ull);
    vlSelf->__PVT__bytes_sent = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15316022159330874346ull);
    vlSelf->__PVT__TCP_send = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 881177396726162158ull);
    vlSelf->__PVT__TCP_tx_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12370470160844133949ull);
    vlSelf->__PVT__TCP_tx_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17036648421095257551ull);
    vlSelf->__PVT__TCP_transmit = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6789772790240887932ull);
    vlSelf->__PVT__TCP_basesum_payload = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6455875245337241831ull);
    vlSelf->__PVT__src_port = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8626058859119763364ull);
    vlSelf->__PVT__dest_port = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11900258226362864160ull);
    vlSelf->__PVT__nbytes_sent = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9325649228192095340ull);
    vlSelf->__PVT__TCP_checksum = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 17605642142475400195ull);
    vlSelf->__PVT__nTCP_checksum = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 11131941618491356299ull);
    vlSelf->__PVT__valid_checksum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12973439623506776991ull);
    vlSelf->__PVT__state = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9404372463396948974ull);
    vlSelf->__PVT__nstate = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14473519320944010295ull);
    vlSelf->__PVT__nTCP_transmit = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15787560512394429413ull);
    vlSelf->__PVT__temp = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 7233838040978344170ull);
    vlSelf->__PVT__nTCP_tx_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13352658128820573761ull);
    vlSelf->__PVT__nTCP_tx_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13902780429104757014ull);
    vlSelf->__PVT__nseq_up = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13145411900540766400ull);
    vlSelf->__Vdly__state = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15137669457351727936ull);
    vlSelf->__Vdly__TCP_transmit = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2589617483484795081ull);
    vlSelf->__Vdly__TCP_tx_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3502441774621079666ull);
    vlSelf->__Vdly__TCP_tx_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5455783375675995690ull);
    vlSelf->__Vdly__bytes_sent = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16319730788411491047ull);
    vlSelf->__Vdly__seq_up = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5109661614460466787ull);
    vlSelf->__Vdly__TCP_checksum = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 10706132051156915888ull);
}
