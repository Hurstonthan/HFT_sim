// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_payload_FIFO.h"

VL_ATTR_COLD void Vtop_payload_FIFO___stl_sequent__TOP__top__u_payload_fifo__0(Vtop_payload_FIFO* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_payload_FIFO___stl_sequent__TOP__top__u_payload_fifo__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__payload1 = VL_SEL_QWII(72, vlSelfRef.__PVT__TCP_FIFO
                                            [0U], 8U, 0x40U);
    vlSelfRef.__PVT__payload2 = VL_SEL_QWII(72, vlSelfRef.__PVT__TCP_FIFO
                                            [1U], 8U, 0x40U);
    vlSelfRef.__PVT__payload3 = VL_SEL_QWII(72, vlSelfRef.__PVT__TCP_FIFO
                                            [2U], 8U, 0x40U);
    vlSelfRef.__PVT__payload4 = VL_SEL_QWII(72, vlSelfRef.__PVT__TCP_FIFO
                                            [3U], 8U, 0x40U);
    vlSelfRef.__PVT__payload5 = VL_SEL_QWII(72, vlSelfRef.__PVT__TCP_FIFO
                                            [4U], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset1 = (0xffU & VL_SEL_IWII(72, 
                                                          vlSelfRef.__PVT__TCP_FIFO
                                                          [0U], 0U, 8U));
    vlSelfRef.__PVT__bytes_offset2 = (0xffU & VL_SEL_IWII(72, 
                                                          vlSelfRef.__PVT__TCP_FIFO
                                                          [1U], 0U, 8U));
    vlSelfRef.__PVT__bytes_offset3 = (0xffU & VL_SEL_IWII(72, 
                                                          vlSelfRef.__PVT__TCP_FIFO
                                                          [2U], 0U, 8U));
    vlSelfRef.__PVT__bytes_offset4 = (0xffU & VL_SEL_IWII(72, 
                                                          vlSelfRef.__PVT__TCP_FIFO
                                                          [3U], 0U, 8U));
    vlSelfRef.__PVT__bytes_offset5 = (0xffU & VL_SEL_IWII(72, 
                                                          vlSelfRef.__PVT__TCP_FIFO
                                                          [4U], 0U, 8U));
    VL_ASSIGN_W(72,vlSelfRef.__PVT__fifo_entry_rd, 
                vlSelfRef.__PVT__TCP_FIFO[((9U >= (IData)(vlSelfRef.__PVT__rd_ptr))
                                            ? (IData)(vlSelfRef.__PVT__rd_ptr)
                                            : 0U)]);
    vlSelfRef.__PVT__full = ((VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__rd_ptr)) 
                              - (IData)(1U)) == VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__wr_ptr_out)));
}

VL_ATTR_COLD void Vtop_payload_FIFO___stl_sequent__TOP__top__u_payload_fifo__1(Vtop_payload_FIFO* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_payload_FIFO___stl_sequent__TOP__top__u_payload_fifo__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__bytes_len = (0xfU & (((((((VL_EXTEND_II(4,1, 
                                                             (1U 
                                                              & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wr_FIFO_offset), 7U))) 
                                                + VL_EXTEND_II(4,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wr_FIFO_offset), 6U)))) 
                                               + VL_EXTEND_II(4,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wr_FIFO_offset), 5U)))) 
                                              + VL_EXTEND_II(4,1, 
                                                             (1U 
                                                              & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wr_FIFO_offset), 4U)))) 
                                             + VL_EXTEND_II(4,1, 
                                                            (1U 
                                                             & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wr_FIFO_offset), 3U)))) 
                                            + VL_EXTEND_II(4,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wr_FIFO_offset), 2U)))) 
                                           + VL_EXTEND_II(4,1, 
                                                          (1U 
                                                           & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wr_FIFO_offset), 1U)))) 
                                          + VL_EXTEND_II(4,1, 
                                                         (1U 
                                                          & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wr_FIFO_offset), 0U)))));
    vlSelfRef.__PVT__nwr_ptr = vlSelfRef.__PVT__wr_ptr;
    vlSelfRef.__PVT__nrd_ptr = vlSelfRef.__PVT__rd_FIFO_ptr;
    vlSelfRef.__PVT__nflush_ptr = vlSelfRef.__PVT__wr_ptr;
    vlSelfRef.__PVT__nTCP_flush_l = vlSelfRef.__PVT__TCP_flush_l;
    vlSelfRef.__PVT__nseq_trk_rd = vlSelfRef.__PVT__seq_trk_rd;
    vlSelfRef.__PVT__nrd_FIFO_valid_l = vlSelfRef.__PVT__rd_FIFO_valid_l;
    vlSelfRef.__PVT__naxis_r_valid = vlSelfRef.__PVT__axis_r_valid;
    if (((IData)(vlSelfRef.__PVT__TCP_flush) | (IData)(vlSelfRef.__PVT__TCP_flush_l))) {
        vlSelfRef.__PVT__nflush_ptr = (0xfU & ((IData)(1U) 
                                               + (IData)(vlSelfRef.__PVT__flush_ptr)));
    } else if (((IData)(vlSelfRef.__PVT__flush_ptr) 
                == (IData)(vlSelfRef.__PVT__len_TCP_flush))) {
        vlSelfRef.__PVT__nTCP_flush_l = 0U;
    } else if (((IData)(vlSelfRef.__PVT__nw_segment) 
                | (IData)(vlSelfRef.__PVT__wr_FIFO_en))) {
        vlSelfRef.__PVT__nflush_ptr = vlSelfRef.__PVT__flush_ptr;
    } else if (vlSelfRef.__PVT__TCP_flush) {
        vlSelfRef.__PVT__nTCP_flush_l = 1U;
        vlSelfRef.__PVT__nlen_TCP_flush = vlSelfRef.__PVT__wr_ptr;
        vlSelfRef.__PVT__nflush_ptr = (0xfU & ((IData)(1U) 
                                               + (IData)(vlSelfRef.__PVT__flush_ptr)));
    }
    if (vlSelfRef.__PVT__wr_FIFO_en) {
        vlSelfRef.__PVT__nwr_ptr = (0xfU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__wr_ptr)));
        vlSelfRef.__Vlvbound_hcbd49069__0 = vlSelfRef.__PVT__axis_data_rx;
        if (VL_LIKELY(((9U >= (IData)(vlSelfRef.__PVT__wr_ptr))))) {
            VL_ASSIGNSEL_WQ(72,64,8U, vlSelfRef.__PVT__nTCP_FIFO
                            [vlSelfRef.__PVT__wr_ptr], vlSelfRef.__Vlvbound_hcbd49069__0);
        }
        vlSelfRef.__Vlvbound_h8aa71cb5__0 = vlSelfRef.__PVT__wr_FIFO_offset;
        if (VL_LIKELY(((9U >= (IData)(vlSelfRef.__PVT__wr_ptr))))) {
            VL_ASSIGNSEL_WI(72,8,0U, vlSelfRef.__PVT__nTCP_FIFO
                            [vlSelfRef.__PVT__wr_ptr], vlSelfRef.__Vlvbound_h8aa71cb5__0);
        }
    }
    if (vlSelfRef.__PVT__rd_FIFO_valid) {
        vlSelfRef.__PVT__nrd_FIFO_valid_l = 1U;
    } else if (((IData)(vlSelfRef.__PVT__rd_ptr) == (IData)(vlSelfRef.__PVT__rd_FIFO_len))) {
        vlSelfRef.__PVT__nrd_FIFO_valid_l = 0U;
    }
    if (vlSelfRef.__PVT__axis_r_en) {
        if (((IData)(vlSelfRef.__PVT__rd_FIFO_valid_l) 
             & ((IData)(vlSelfRef.__PVT__rd_ptr) != (IData)(vlSelfRef.__PVT__flush_ptr)))) {
            vlSelfRef.__PVT__nseq_trk_rd = (vlSelfRef.__PVT__seq_trk_rd 
                                            + VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__bytes_len)));
            vlSelfRef.__PVT__nrd_ptr = (0xfU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__rd_ptr)));
            vlSelfRef.__PVT__naxis_r_valid = 1U;
        } else {
            vlSelfRef.__PVT__nseq_trk_rd = vlSelfRef.__PVT__seq_trk_rd;
            vlSelfRef.__PVT__nrd_ptr = vlSelfRef.__PVT__rd_ptr;
            vlSelfRef.__PVT__naxis_r_valid = 0U;
        }
    }
}

VL_ATTR_COLD void Vtop_payload_FIFO___ctor_var_reset(Vtop_payload_FIFO* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_payload_FIFO___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__CLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6192783415628501865ull);
    vlSelf->__PVT__nRST = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9596079045119723318ull);
    vlSelf->__PVT__nw_segment = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10812341697392716583ull);
    vlSelf->__PVT__TCP_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2204969768331049030ull);
    vlSelf->__PVT__axis_t_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3363515403628601574ull);
    vlSelf->__PVT__axis_data_rx = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 100764171667573631ull);
    vlSelf->__PVT__handshake_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18365787243460844200ull);
    vlSelf->__PVT__seq_rcv_start = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3374705689665004837ull);
    vlSelf->__PVT__wr_FIFO_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11327851442339175407ull);
    vlSelf->__PVT__wr_FIFO_offset = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7116352258542374170ull);
    vlSelf->__PVT__wr_ptr_out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14280824392925468497ull);
    vlSelf->__PVT__wr_FIFO_len = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1454357461022193599ull);
    vlSelf->__PVT__rd_FIFO_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 615369904805283052ull);
    vlSelf->__PVT__rd_FIFO_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1541493805853970047ull);
    vlSelf->__PVT__rd_FIFO_len = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4311993884634595022ull);
    vlSelf->__PVT__rd_FIFO_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6363420242050000687ull);
    vlSelf->__PVT__seq_rx_FIFO_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1332892325987693968ull);
    vlSelf->__PVT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6695099141381822181ull);
    vlSelf->__PVT__axis_r_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8032066648238806430ull);
    vlSelf->__PVT__axis_r_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14134597143016856134ull);
    vlSelf->__PVT__axis_rd_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9324982647399811729ull);
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(72, vlSelf->__PVT__TCP_FIFO[__Vi0], __VscopeHash, 9388026644081116466ull);
    }
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(72, vlSelf->__PVT__nTCP_FIFO[__Vi0], __VscopeHash, 6201906900979090643ull);
    }
    VL_SCOPED_RAND_RESET_W(72, vlSelf->__PVT__fifo_entry_rd, __VscopeHash, 7603860537774548504ull);
    vlSelf->__PVT__flush_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12629206001683931762ull);
    vlSelf->__PVT__nflush_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4733891924914347654ull);
    vlSelf->__PVT__len_TCP_flush = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16207856346514006386ull);
    vlSelf->__PVT__nlen_TCP_flush = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 434479146916130705ull);
    vlSelf->__PVT__rd_len_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1323015811732051027ull);
    vlSelf->__PVT__seq_trk_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5597391329415738108ull);
    vlSelf->__PVT__nseq_trk_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16714118793671617377ull);
    vlSelf->__PVT__bytes_len = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8219785737058615002ull);
    vlSelf->__PVT__rd_FIFO_valid_l = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18251088185603097672ull);
    vlSelf->__PVT__nrd_FIFO_valid_l = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10243358524547403510ull);
    vlSelf->__PVT__naxis_r_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13310703565603645684ull);
    vlSelf->__PVT__TCP_flush_l = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5066170270725843370ull);
    vlSelf->__PVT__nTCP_flush_l = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17711388217799035390ull);
    vlSelf->__PVT__payload1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11710698417865792702ull);
    vlSelf->__PVT__payload2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9249103820328703281ull);
    vlSelf->__PVT__payload3 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15105036558926968406ull);
    vlSelf->__PVT__payload4 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9232926322166067402ull);
    vlSelf->__PVT__payload5 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13541573159511409577ull);
    vlSelf->__PVT__bytes_offset1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2964547887756038474ull);
    vlSelf->__PVT__bytes_offset2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10166748920697566620ull);
    vlSelf->__PVT__bytes_offset3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7260746564500039673ull);
    vlSelf->__PVT__bytes_offset4 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 272815712433225993ull);
    vlSelf->__PVT__bytes_offset5 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3948943664041369085ull);
    vlSelf->__PVT__wr_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12436053222651956031ull);
    vlSelf->__PVT__nwr_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1876698004006870143ull);
    vlSelf->__PVT__rd_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8582113012353463185ull);
    vlSelf->__PVT__nrd_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8308338580089836589ull);
    vlSelf->__PVT__unnamedblk1__DOT__i = 0;
    VL_SCOPED_RAND_RESET_W(72, vlSelf->__Vlvbound_hbd43f519__0, __VscopeHash, 11312427918316068609ull);
    VL_SCOPED_RAND_RESET_W(72, vlSelf->__Vlvbound_h512a2773__0, __VscopeHash, 9206333869279099189ull);
    vlSelf->__Vlvbound_hcbd49069__0 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5788148065424970974ull);
    vlSelf->__Vlvbound_h8aa71cb5__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14092656698236138503ull);
    vlSelf->__Vdly__wr_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6265375712968675170ull);
    vlSelf->__Vdly__rd_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1296402517236374361ull);
    vlSelf->__Vdly__rd_FIFO_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17408200852565543397ull);
    vlSelf->__Vdly__seq_rx_FIFO_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17300098257617802234ull);
    vlSelf->__Vdly__flush_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16317277963448058588ull);
    vlSelf->__Vdly__len_TCP_flush = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4499794943241228148ull);
    vlSelf->__Vdly__axis_r_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3604655781892561961ull);
    vlSelf->__Vdly__TCP_flush_l = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17526780631238086618ull);
    vlSelf->__Vdly__seq_trk_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13027755999420008345ull);
    vlSelf->__Vdly__wr_FIFO_len = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2463755035948012911ull);
    vlSelf->__Vdly__wr_ptr_out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11191159754855846327ull);
    vlSelf->__Vdly__axis_rd_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17392126712206161775ull);
    vlSelf->__Vdly__rd_len_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10418901856708786751ull);
    VL_SCOPED_RAND_RESET_W(72, vlSelf->__VdlyVal__TCP_FIFO__v0, __VscopeHash, 17696590141765517270ull);
    vlSelf->__VdlySet__TCP_FIFO__v0 = 0;
    VL_SCOPED_RAND_RESET_W(72, vlSelf->__VdlyVal__TCP_FIFO__v1, __VscopeHash, 14198139256993985830ull);
    VL_SCOPED_RAND_RESET_W(72, vlSelf->__VdlyVal__TCP_FIFO__v2, __VscopeHash, 10009065438464099089ull);
    VL_SCOPED_RAND_RESET_W(72, vlSelf->__VdlyVal__TCP_FIFO__v3, __VscopeHash, 5560334521154487789ull);
    VL_SCOPED_RAND_RESET_W(72, vlSelf->__VdlyVal__TCP_FIFO__v4, __VscopeHash, 17471883392645241746ull);
    VL_SCOPED_RAND_RESET_W(72, vlSelf->__VdlyVal__TCP_FIFO__v5, __VscopeHash, 18064620280276054681ull);
    VL_SCOPED_RAND_RESET_W(72, vlSelf->__VdlyVal__TCP_FIFO__v6, __VscopeHash, 14212614836740802013ull);
    VL_SCOPED_RAND_RESET_W(72, vlSelf->__VdlyVal__TCP_FIFO__v7, __VscopeHash, 4397504402063979151ull);
    VL_SCOPED_RAND_RESET_W(72, vlSelf->__VdlyVal__TCP_FIFO__v8, __VscopeHash, 8595068234579420836ull);
    VL_SCOPED_RAND_RESET_W(72, vlSelf->__VdlyVal__TCP_FIFO__v9, __VscopeHash, 15156723772472061643ull);
    VL_SCOPED_RAND_RESET_W(72, vlSelf->__VdlyVal__TCP_FIFO__v10, __VscopeHash, 14455657011900524977ull);
    vlSelf->__VdlyDim0__TCP_FIFO__v10 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4528447245041957717ull);
    vlSelf->__VdlySet__TCP_FIFO__v10 = 0;
    VL_SCOPED_RAND_RESET_W(72, vlSelf->__VdlyVal__TCP_FIFO__v11, __VscopeHash, 7785207286410026610ull);
    vlSelf->__VdlySet__TCP_FIFO__v11 = 0;
    VL_SCOPED_RAND_RESET_W(72, vlSelf->__VdlyVal__TCP_FIFO__v12, __VscopeHash, 1932493220738310204ull);
    vlSelf->__VdlySet__TCP_FIFO__v12 = 0;
    VL_SCOPED_RAND_RESET_W(72, vlSelf->__VdlyVal__TCP_FIFO__v13, __VscopeHash, 174302670671952001ull);
    vlSelf->__VdlySet__TCP_FIFO__v13 = 0;
    VL_SCOPED_RAND_RESET_W(72, vlSelf->__VdlyVal__TCP_FIFO__v14, __VscopeHash, 1270673332910998916ull);
    vlSelf->__VdlySet__TCP_FIFO__v14 = 0;
    VL_SCOPED_RAND_RESET_W(72, vlSelf->__VdlyVal__TCP_FIFO__v15, __VscopeHash, 14780529845602812544ull);
    vlSelf->__VdlySet__TCP_FIFO__v15 = 0;
    VL_SCOPED_RAND_RESET_W(72, vlSelf->__VdlyVal__TCP_FIFO__v16, __VscopeHash, 2128172100124455219ull);
    vlSelf->__VdlySet__TCP_FIFO__v16 = 0;
    VL_SCOPED_RAND_RESET_W(72, vlSelf->__VdlyVal__TCP_FIFO__v17, __VscopeHash, 15363205062799769196ull);
    vlSelf->__VdlySet__TCP_FIFO__v17 = 0;
    VL_SCOPED_RAND_RESET_W(72, vlSelf->__VdlyVal__TCP_FIFO__v18, __VscopeHash, 10125441800018783066ull);
    vlSelf->__VdlySet__TCP_FIFO__v18 = 0;
    VL_SCOPED_RAND_RESET_W(72, vlSelf->__VdlyVal__TCP_FIFO__v19, __VscopeHash, 10564263109249684447ull);
    vlSelf->__VdlySet__TCP_FIFO__v19 = 0;
    VL_SCOPED_RAND_RESET_W(72, vlSelf->__VdlyVal__TCP_FIFO__v20, __VscopeHash, 17716109852065735158ull);
    vlSelf->__VdlySet__TCP_FIFO__v20 = 0;
}
