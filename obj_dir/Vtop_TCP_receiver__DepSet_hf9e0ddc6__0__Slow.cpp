// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_TCP_receiver.h"

VL_ATTR_COLD void Vtop_TCP_receiver___stl_sequent__TOP__top__u_tcp__tcp_rcv__0(Vtop_TCP_receiver* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_TCP_receiver___stl_sequent__TOP__top__u_tcp__tcp_rcv__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtemp_1;
    IData/*31:0*/ __Vtemp_2;
    IData/*31:0*/ __Vtemp_3;
    IData/*31:0*/ __Vtemp_4;
    IData/*31:0*/ __Vtemp_5;
    IData/*31:0*/ __Vtemp_6;
    IData/*31:0*/ __Vtemp_7;
    IData/*31:0*/ __Vtemp_8;
    // Body
    vlSelfRef.__PVT__TCP_checksum_comp = (0xffffU & 
                                          (~ VL_SEL_IIII(17, vlSelfRef.__PVT__TCP_checksum, 0U, 0x10U)));
    vlSelfRef.__PVT__n_nw_segment = vlSelfRef.__PVT__nw_segment;
    vlSelfRef.__PVT__nTCP_last = vlSelfRef.__PVT__TCP_last;
    vlSelfRef.__PVT__nstate = vlSelfRef.__PVT__state;
    vlSelfRef.__PVT__nbytes_trk = 0U;
    vlSelfRef.__PVT__nbytes_rcv = vlSelfRef.__PVT__bytes_rcv;
    vlSelfRef.__PVT__nTCP_checksum = vlSelfRef.__PVT__TCP_checksum;
    vlSelfRef.__PVT__nTCP_len_data = vlSelfRef.__PVT__TCP_len_data;
    vlSelfRef.__PVT__nTCP_payload_rx = vlSelfRef.__PVT__TCP_payload_rx;
    vlSelfRef.__PVT__nTCP_valid = vlSelfRef.__PVT__TCP_valid;
    vlSelfRef.__PVT__nTCP_control_rx = vlSelfRef.__PVT__TCP_control_rx;
    vlSelfRef.__PVT__nseq_num_rx = vlSelfRef.__PVT__seq_num_rx;
    vlSelfRef.__PVT__nACK_rx = vlSelfRef.__PVT__ACK_rx;
    vlSelfRef.__PVT__noffset_rx = vlSelfRef.__PVT__offset_rx;
    vlSelfRef.__PVT__nwindow_size_rx = vlSelfRef.__PVT__window_size_rx;
    vlSelfRef.__PVT__nchecksum_rx = vlSelfRef.__PVT__checksum_rx;
    vlSelfRef.__PVT__nurgent_pointer_rx = vlSelfRef.__PVT__urgent_pointer_rx;
    vlSelfRef.__PVT__nrcv_data = 0U;
    vlSelfRef.__PVT__TCP_flush = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__state))) {
        if ((((IData)(vlSelfRef.__PVT__valid_IP_header_rx) 
              & (0x1234U == (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x30U, 0x10U)))) 
             & (0x5678U == (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x20U, 0x10U))))) {
            VL_ASSIGNSEL_II(32,16,0x10U, vlSelfRef.__PVT__nseq_num_rx, 
                            (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x10U, 0x10U)));
            vlSelfRef.__PVT__nstate = 1U;
            vlSelfRef.__PVT__temp = (0xfffffU & (((
                                                   (VL_EXTEND_II(20,16, 
                                                                 (0xffffU 
                                                                  & VL_SEL_IIII(17, vlSelfRef.__PVT__TCP_checksum, 0U, 0x10U))) 
                                                    + 
                                                    VL_EXTEND_II(20,16, 
                                                                 (0xffffU 
                                                                  & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x30U, 0x10U)))) 
                                                   + 
                                                   VL_EXTEND_II(20,16, 
                                                                (0xffffU 
                                                                 & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x20U, 0x10U)))) 
                                                  + 
                                                  VL_EXTEND_II(20,16, 
                                                               (0xffffU 
                                                                & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x10U, 0x10U)))) 
                                                 + 
                                                 VL_EXTEND_II(20,16, (IData)(vlSelfRef.__PVT__IP_pseuder))));
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
        } else if (vlSelfRef.__PVT__valid_IP_header_rx) {
            vlSelfRef.__PVT__nstate = 5U;
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__state))) {
        VL_ASSIGNSEL_II(32,16,0U, vlSelfRef.__PVT__nseq_num_rx, 
                        (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x30U, 0x10U)));
        vlSelfRef.__PVT__nACK_rx = VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x10U, 0x20U);
        vlSelfRef.__PVT__noffset_rx = (0xfU & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0xcU, 4U));
        vlSelfRef.__PVT__nTCP_control_rx = (0xffU & 
                                            VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0U, 8U));
        vlSelfRef.__PVT__temp = (0xfffffU & ((((VL_EXTEND_II(20,16, 
                                                             (0xffffU 
                                                              & VL_SEL_IIII(17, vlSelfRef.__PVT__TCP_checksum, 0U, 0x10U))) 
                                                + VL_EXTEND_II(20,16, 
                                                               (0xffffU 
                                                                & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x30U, 0x10U)))) 
                                               + VL_EXTEND_II(20,16, 
                                                              (0xffffU 
                                                               & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x20U, 0x10U)))) 
                                              + VL_EXTEND_II(20,16, 
                                                             (0xffffU 
                                                              & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x10U, 0x10U)))) 
                                             + VL_EXTEND_II(20,16, 
                                                            (0xffffU 
                                                             & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0U, 0x10U)))));
        __Vtemp_3 = (0xfffffU & (VL_EXTEND_II(20,16, 
                                              (0xffffU 
                                               & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x10U))) 
                                 + VL_EXTEND_II(20,4, 
                                                (0xfU 
                                                 & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0x10U, 4U)))));
        vlSelfRef.__PVT__temp = __Vtemp_3;
        __Vtemp_4 = (0xfffffU & (VL_EXTEND_II(20,16, 
                                              (0xffffU 
                                               & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x10U))) 
                                 + VL_EXTEND_II(20,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(20, vlSelfRef.__PVT__temp, 0x10U)))));
        vlSelfRef.__PVT__temp = __Vtemp_4;
        vlSelfRef.__PVT__nTCP_checksum = (0x1ffffU 
                                          & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x11U));
        vlSelfRef.__PVT__nstate = 2U;
    } else if ((2U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__nwindow_size_rx = (0xffffU 
                                            & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x30U, 0x10U));
        vlSelfRef.__PVT__nchecksum_rx = (0xffffU & 
                                         VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x20U, 0x10U));
        vlSelfRef.__PVT__nurgent_pointer_rx = (0xffffU 
                                               & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x10U, 0x10U));
        vlSelfRef.__PVT__temp = (0xfffffU & (((VL_EXTEND_II(20,16, 
                                                            (0xffffU 
                                                             & VL_SEL_IIII(17, vlSelfRef.__PVT__TCP_checksum, 0U, 0x10U))) 
                                               + VL_EXTEND_II(20,16, 
                                                              (0xffffU 
                                                               & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x30U, 0x10U)))) 
                                              + VL_EXTEND_II(20,16, 
                                                             (0xffffU 
                                                              & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x10U, 0x10U)))) 
                                             + VL_EXTEND_II(20,16, 
                                                            (0xffffU 
                                                             & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0U, 0x10U)))));
        __Vtemp_5 = (0xfffffU & (VL_EXTEND_II(20,16, 
                                              (0xffffU 
                                               & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x10U))) 
                                 + VL_EXTEND_II(20,4, 
                                                (0xfU 
                                                 & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0x10U, 4U)))));
        vlSelfRef.__PVT__temp = __Vtemp_5;
        __Vtemp_6 = (0xfffffU & (VL_EXTEND_II(20,16, 
                                              (0xffffU 
                                               & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x10U))) 
                                 + VL_EXTEND_II(20,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(20, vlSelfRef.__PVT__temp, 0x10U)))));
        vlSelfRef.__PVT__temp = __Vtemp_6;
        vlSelfRef.__PVT__nTCP_checksum = (0x1ffffU 
                                          & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x11U));
        if (VL_REDOR_I((IData)(vlSelfRef.__PVT__TCP_len))) {
            vlSelfRef.__PVT__nbytes_trk = (0xffffU 
                                           & ((IData)(2U) 
                                              + (IData)(vlSelfRef.__PVT__bytes_trk)));
            vlSelfRef.__PVT__nTCP_valid = 1U;
            vlSelfRef.__PVT__n_nw_segment = 1U;
            vlSelfRef.__PVT__nbytes_rcv = 2U;
            vlSelfRef.__PVT__nTCP_payload_rx = VL_EXTEND_QI(64,16, 
                                                            (0xffffU 
                                                             & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0U, 0x10U)));
            vlSelfRef.__PVT__nstate = 3U;
        } else {
            vlSelfRef.__PVT__nstate = 4U;
        }
    } else if ((3U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__n_nw_segment = 1U;
        vlSelfRef.__PVT__nbytes_rcv = 8U;
        vlSelfRef.__PVT__nbytes_trk = (0xffffU & ((IData)(8U) 
                                                  + (IData)(vlSelfRef.__PVT__bytes_trk)));
        vlSelfRef.__PVT__temp = (0xfffffU & ((((VL_EXTEND_II(20,16, 
                                                             (0xffffU 
                                                              & VL_SEL_IIII(17, vlSelfRef.__PVT__TCP_checksum, 0U, 0x10U))) 
                                                + VL_EXTEND_II(20,16, 
                                                               (0xffffU 
                                                                & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x30U, 0x10U)))) 
                                               + VL_EXTEND_II(20,16, 
                                                              (0xffffU 
                                                               & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x20U, 0x10U)))) 
                                              + VL_EXTEND_II(20,16, 
                                                             (0xffffU 
                                                              & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0x10U, 0x10U)))) 
                                             + VL_EXTEND_II(20,16, 
                                                            (0xffffU 
                                                             & VL_SEL_IQII(64, vlSelfRef.__PVT__IP_payload_rx, 0U, 0x10U)))));
        __Vtemp_7 = (0xfffffU & (VL_EXTEND_II(20,16, 
                                              (0xffffU 
                                               & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x10U))) 
                                 + VL_EXTEND_II(20,4, 
                                                (0xfU 
                                                 & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0x10U, 4U)))));
        vlSelfRef.__PVT__temp = __Vtemp_7;
        __Vtemp_8 = (0xfffffU & (VL_EXTEND_II(20,16, 
                                              (0xffffU 
                                               & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x10U))) 
                                 + VL_EXTEND_II(20,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(20, vlSelfRef.__PVT__temp, 0x10U)))));
        vlSelfRef.__PVT__temp = __Vtemp_8;
        vlSelfRef.__PVT__nTCP_checksum = (0x1ffffU 
                                          & VL_SEL_IIII(20, vlSelfRef.__PVT__temp, 0U, 0x11U));
        vlSelfRef.__PVT__nTCP_payload_rx = vlSelfRef.__PVT__IP_payload_rx;
        if ((((IData)(8U) + VL_EXTEND_II(32,16, (IData)(vlSelfRef.__PVT__bytes_trk))) 
             < VL_EXTEND_II(32,16, (IData)(vlSelfRef.__PVT__TCP_len_data)))) {
            vlSelfRef.__PVT__nbytes_trk = (0xffffU 
                                           & ((IData)(8U) 
                                              + (IData)(vlSelfRef.__PVT__bytes_trk)));
        } else {
            vlSelfRef.__PVT__nbytes_trk = (0xffffU 
                                           & ((IData)(vlSelfRef.__PVT__bytes_trk) 
                                              + (((IData)(8U) 
                                                  + (IData)(vlSelfRef.__PVT__bytes_trk)) 
                                                 - (IData)(vlSelfRef.__PVT__TCP_len_data))));
            vlSelfRef.__PVT__nTCP_valid = 0U;
            vlSelfRef.__PVT__nTCP_last = 1U;
            vlSelfRef.__PVT__n_nw_segment = 1U;
            vlSelfRef.__PVT__nstate = 4U;
        }
    } else if ((4U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__n_nw_segment = 0U;
        vlSelfRef.__PVT__nTCP_last = 0U;
        vlSelfRef.__PVT__TCP_checksum_comp = (0xffffU 
                                              & (~ 
                                                 VL_SEL_IIII(17, vlSelfRef.__PVT__TCP_checksum, 0U, 0x10U)));
        if (((IData)(vlSelfRef.__PVT__TCP_checksum_comp) 
             == (IData)(vlSelfRef.__PVT__checksum_rx))) {
            vlSelfRef.__PVT__nrcv_data = 1U;
            vlSelfRef.__PVT__nstate = 0U;
            vlSelfRef.__PVT__nTCP_checksum = 0U;
        } else {
            vlSelfRef.__PVT__nstate = 5U;
        }
    } else if ((5U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__TCP_flush = 1U;
        if ((1U & (~ (IData)(vlSelfRef.__PVT__valid_IP_header_rx)))) {
            vlSelfRef.__PVT__nstate = 0U;
        }
    }
}

VL_ATTR_COLD void Vtop_TCP_receiver___ctor_var_reset(Vtop_TCP_receiver* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_TCP_receiver___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__CLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6192783415628501865ull);
    vlSelf->__PVT__nRST = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9596079045119723318ull);
    vlSelf->__PVT__IP_payload_rx = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16375298222059967374ull);
    vlSelf->__PVT__valid_IP_header_rx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13665116011488607467ull);
    vlSelf->__PVT__IP_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7370612069209852218ull);
    vlSelf->__PVT__TCP_len = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2451078185152812590ull);
    vlSelf->__PVT__IP_pseuder = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2907016794571974014ull);
    vlSelf->__PVT__rcv_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1176143556994983169ull);
    vlSelf->__PVT__TCP_control_rx = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17334492037900634746ull);
    vlSelf->__PVT__seq_num_rx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 364544424723261665ull);
    vlSelf->__PVT__ACK_rx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14319586186662147529ull);
    vlSelf->__PVT__offset_rx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3236647185777849343ull);
    vlSelf->__PVT__window_size_rx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14451436454142830211ull);
    vlSelf->__PVT__checksum_rx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14844497424139250528ull);
    vlSelf->__PVT__urgent_pointer_rx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6361226637399478120ull);
    vlSelf->__PVT__bytes_rcv = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2549967790072508984ull);
    vlSelf->__PVT__TCP_len_data = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11129810575715508051ull);
    vlSelf->__PVT__TCP_payload_rx = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13228787321670785686ull);
    vlSelf->__PVT__TCP_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 336136379442184794ull);
    vlSelf->__PVT__TCP_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2204969768331049030ull);
    vlSelf->__PVT__nw_segment = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10812341697392716583ull);
    vlSelf->__PVT__TCP_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1680497067136754032ull);
    vlSelf->__PVT__nTCP_control_rx = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11735371994526658541ull);
    vlSelf->__PVT__nseq_num_rx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14067697327800402594ull);
    vlSelf->__PVT__nACK_rx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6524486275815109710ull);
    vlSelf->__PVT__noffset_rx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13005811454975489537ull);
    vlSelf->__PVT__nwindow_size_rx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14747801224970284261ull);
    vlSelf->__PVT__nchecksum_rx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8761237958822409598ull);
    vlSelf->__PVT__nurgent_pointer_rx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7914921898784107102ull);
    vlSelf->__PVT__bytes_trk = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9909697768582248057ull);
    vlSelf->__PVT__nbytes_trk = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5702423731033487701ull);
    vlSelf->__PVT__checksum_in = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15553942605046102495ull);
    vlSelf->__PVT__nTCP_len_data = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6483681666852537396ull);
    vlSelf->__PVT__TCP_checksum = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 17605642142475400195ull);
    vlSelf->__PVT__nTCP_checksum = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 11131941618491356299ull);
    vlSelf->__PVT__TCP_checksum_comp = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16171138381310783177ull);
    vlSelf->__PVT__TCP_data_dl = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10532545493216843310ull);
    vlSelf->__PVT__nTCP_data_dl = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11137384854004959261ull);
    vlSelf->__PVT__nTCP_payload_rx = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9806923866198947421ull);
    vlSelf->__PVT__temp = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 7233838040978344170ull);
    vlSelf->__PVT__nTCP_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6317535421402120221ull);
    vlSelf->__PVT__nrcv_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10789806028145357175ull);
    vlSelf->__PVT__checksum_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17542935690189717698ull);
    vlSelf->__PVT__nchecksum_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4078147439893029705ull);
    vlSelf->__PVT__n_nw_segment = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17666894321009562079ull);
    vlSelf->__PVT__nTCP_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14837080824837578812ull);
    vlSelf->__PVT__nbytes_rcv = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17573847664257856799ull);
    vlSelf->__PVT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9404372463396948974ull);
    vlSelf->__PVT__nstate = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14473519320944010295ull);
    vlSelf->__Vdly__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15137669457351727936ull);
    vlSelf->__Vdly__TCP_control_rx = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12217818611261538673ull);
    vlSelf->__Vdly__seq_num_rx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11745730165644000008ull);
    vlSelf->__Vdly__ACK_rx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16766346114825129380ull);
    vlSelf->__Vdly__offset_rx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13938199598951551013ull);
    vlSelf->__Vdly__window_size_rx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 411849274988318898ull);
    vlSelf->__Vdly__checksum_rx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1135704450572723899ull);
    vlSelf->__Vdly__urgent_pointer_rx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15754269778832294603ull);
    vlSelf->__Vdly__TCP_len_data = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10187927590741415944ull);
    vlSelf->__Vdly__TCP_payload_rx = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5599725931102639578ull);
    vlSelf->__Vdly__TCP_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14840196993727191953ull);
    vlSelf->__Vdly__rcv_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11513782859843862514ull);
    vlSelf->__Vdly__TCP_checksum = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 10706132051156915888ull);
    vlSelf->__Vdly__bytes_trk = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 272412948362273383ull);
    vlSelf->__Vdly__nw_segment = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14693189014841899836ull);
    vlSelf->__Vdly__TCP_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 876204848910885051ull);
    vlSelf->__Vdly__bytes_rcv = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10579155383431852311ull);
}
