// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vether_simulation.h for the primary calling header

#include "Vether_simulation__pch.h"
#include "Vether_simulation_payload_FIFO.h"

VL_ATTR_COLD void Vether_simulation_payload_FIFO___stl_sequent__TOP__ether_simulation__svr_inst__u_payload_fifo__0(Vether_simulation_payload_FIFO* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_payload_FIFO___stl_sequent__TOP__ether_simulation__svr_inst__u_payload_fifo__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(72,vlSelfRef.__PVT__fifo_entry_rd, 
                vlSelfRef.__PVT__TCP_FIFO[vlSelfRef.__PVT__rd_ptr]);
    vlSelfRef.__PVT__payload[0U] = VL_SEL_QWII(72, 
                                               vlSelfRef.__PVT__TCP_FIFO
                                               [0U], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset[0U] = (0xffU & VL_SEL_IWII(72, 
                                                             vlSelfRef.__PVT__TCP_FIFO
                                                             [0U], 0U, 8U));
    vlSelfRef.__PVT__payload[1U] = VL_SEL_QWII(72, 
                                               vlSelfRef.__PVT__TCP_FIFO
                                               [1U], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset[1U] = (0xffU & VL_SEL_IWII(72, 
                                                             vlSelfRef.__PVT__TCP_FIFO
                                                             [1U], 0U, 8U));
    vlSelfRef.__PVT__payload[2U] = VL_SEL_QWII(72, 
                                               vlSelfRef.__PVT__TCP_FIFO
                                               [2U], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset[2U] = (0xffU & VL_SEL_IWII(72, 
                                                             vlSelfRef.__PVT__TCP_FIFO
                                                             [2U], 0U, 8U));
    vlSelfRef.__PVT__payload[3U] = VL_SEL_QWII(72, 
                                               vlSelfRef.__PVT__TCP_FIFO
                                               [3U], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset[3U] = (0xffU & VL_SEL_IWII(72, 
                                                             vlSelfRef.__PVT__TCP_FIFO
                                                             [3U], 0U, 8U));
    vlSelfRef.__PVT__payload[4U] = VL_SEL_QWII(72, 
                                               vlSelfRef.__PVT__TCP_FIFO
                                               [4U], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset[4U] = (0xffU & VL_SEL_IWII(72, 
                                                             vlSelfRef.__PVT__TCP_FIFO
                                                             [4U], 0U, 8U));
    vlSelfRef.__PVT__payload[5U] = VL_SEL_QWII(72, 
                                               vlSelfRef.__PVT__TCP_FIFO
                                               [5U], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset[5U] = (0xffU & VL_SEL_IWII(72, 
                                                             vlSelfRef.__PVT__TCP_FIFO
                                                             [5U], 0U, 8U));
    vlSelfRef.__PVT__payload[6U] = VL_SEL_QWII(72, 
                                               vlSelfRef.__PVT__TCP_FIFO
                                               [6U], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset[6U] = (0xffU & VL_SEL_IWII(72, 
                                                             vlSelfRef.__PVT__TCP_FIFO
                                                             [6U], 0U, 8U));
    vlSelfRef.__PVT__payload[7U] = VL_SEL_QWII(72, 
                                               vlSelfRef.__PVT__TCP_FIFO
                                               [7U], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset[7U] = (0xffU & VL_SEL_IWII(72, 
                                                             vlSelfRef.__PVT__TCP_FIFO
                                                             [7U], 0U, 8U));
    vlSelfRef.__PVT__payload[8U] = VL_SEL_QWII(72, 
                                               vlSelfRef.__PVT__TCP_FIFO
                                               [8U], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset[8U] = (0xffU & VL_SEL_IWII(72, 
                                                             vlSelfRef.__PVT__TCP_FIFO
                                                             [8U], 0U, 8U));
    vlSelfRef.__PVT__payload[9U] = VL_SEL_QWII(72, 
                                               vlSelfRef.__PVT__TCP_FIFO
                                               [9U], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset[9U] = (0xffU & VL_SEL_IWII(72, 
                                                             vlSelfRef.__PVT__TCP_FIFO
                                                             [9U], 0U, 8U));
    vlSelfRef.__PVT__payload[0xaU] = VL_SEL_QWII(72, 
                                                 vlSelfRef.__PVT__TCP_FIFO
                                                 [0xaU], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset[0xaU] = (0xffU & 
                                           VL_SEL_IWII(72, 
                                                       vlSelfRef.__PVT__TCP_FIFO
                                                       [0xaU], 0U, 8U));
    vlSelfRef.__PVT__payload[0xbU] = VL_SEL_QWII(72, 
                                                 vlSelfRef.__PVT__TCP_FIFO
                                                 [0xbU], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset[0xbU] = (0xffU & 
                                           VL_SEL_IWII(72, 
                                                       vlSelfRef.__PVT__TCP_FIFO
                                                       [0xbU], 0U, 8U));
    vlSelfRef.__PVT__payload[0xcU] = VL_SEL_QWII(72, 
                                                 vlSelfRef.__PVT__TCP_FIFO
                                                 [0xcU], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset[0xcU] = (0xffU & 
                                           VL_SEL_IWII(72, 
                                                       vlSelfRef.__PVT__TCP_FIFO
                                                       [0xcU], 0U, 8U));
    vlSelfRef.__PVT__payload[0xdU] = VL_SEL_QWII(72, 
                                                 vlSelfRef.__PVT__TCP_FIFO
                                                 [0xdU], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset[0xdU] = (0xffU & 
                                           VL_SEL_IWII(72, 
                                                       vlSelfRef.__PVT__TCP_FIFO
                                                       [0xdU], 0U, 8U));
    vlSelfRef.__PVT__payload[0xeU] = VL_SEL_QWII(72, 
                                                 vlSelfRef.__PVT__TCP_FIFO
                                                 [0xeU], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset[0xeU] = (0xffU & 
                                           VL_SEL_IWII(72, 
                                                       vlSelfRef.__PVT__TCP_FIFO
                                                       [0xeU], 0U, 8U));
    vlSelfRef.__PVT__payload[0xfU] = VL_SEL_QWII(72, 
                                                 vlSelfRef.__PVT__TCP_FIFO
                                                 [0xfU], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset[0xfU] = (0xffU & 
                                           VL_SEL_IWII(72, 
                                                       vlSelfRef.__PVT__TCP_FIFO
                                                       [0xfU], 0U, 8U));
    vlSelfRef.__PVT__bytes_len = (0xfU & (((((((VL_EXTEND_II(4,1, 
                                                             (1U 
                                                              & VL_BITSEL_IWII(72, 
                                                                               vlSelfRef.__PVT__TCP_FIFO
                                                                               [vlSelfRef.__PVT__rd_ptr], 0U))) 
                                                + VL_EXTEND_II(4,1, 
                                                               (1U 
                                                                & VL_BITSEL_IWII(72, 
                                                                                vlSelfRef.__PVT__TCP_FIFO
                                                                                [vlSelfRef.__PVT__rd_ptr], 1U)))) 
                                               + VL_EXTEND_II(4,1, 
                                                              (1U 
                                                               & VL_BITSEL_IWII(72, 
                                                                                vlSelfRef.__PVT__TCP_FIFO
                                                                                [vlSelfRef.__PVT__rd_ptr], 2U)))) 
                                              + VL_EXTEND_II(4,1, 
                                                             (1U 
                                                              & VL_BITSEL_IWII(72, 
                                                                               vlSelfRef.__PVT__TCP_FIFO
                                                                               [vlSelfRef.__PVT__rd_ptr], 3U)))) 
                                             + VL_EXTEND_II(4,1, 
                                                            (1U 
                                                             & VL_BITSEL_IWII(72, 
                                                                              vlSelfRef.__PVT__TCP_FIFO
                                                                              [vlSelfRef.__PVT__rd_ptr], 4U)))) 
                                            + VL_EXTEND_II(4,1, 
                                                           (1U 
                                                            & VL_BITSEL_IWII(72, 
                                                                             vlSelfRef.__PVT__TCP_FIFO
                                                                             [vlSelfRef.__PVT__rd_ptr], 5U)))) 
                                           + VL_EXTEND_II(4,1, 
                                                          (1U 
                                                           & VL_BITSEL_IWII(72, 
                                                                            vlSelfRef.__PVT__TCP_FIFO
                                                                            [vlSelfRef.__PVT__rd_ptr], 6U)))) 
                                          + VL_EXTEND_II(4,1, 
                                                         (1U 
                                                          & VL_BITSEL_IWII(72, 
                                                                           vlSelfRef.__PVT__TCP_FIFO
                                                                           [vlSelfRef.__PVT__rd_ptr], 7U)))));
    vlSelfRef.__PVT__full = ((VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__rd_ptr)) 
                              - (IData)(1U)) == VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__wr_ptr_out)));
}

VL_ATTR_COLD void Vether_simulation_payload_FIFO___stl_sequent__TOP__ether_simulation__svr_inst__u_payload_fifo__1(Vether_simulation_payload_FIFO* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_payload_FIFO___stl_sequent__TOP__ether_simulation__svr_inst__u_payload_fifo__1\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nwr_ptr = vlSelfRef.__PVT__wr_ptr;
    vlSelfRef.__PVT__nrd_ptr = vlSelfRef.__PVT__rd_ptr;
    vlSelfRef.__PVT__nflush_ptr = vlSelfRef.__PVT__wr_ptr;
    vlSelfRef.__PVT__nTCP_flush_l = vlSelfRef.__PVT__TCP_flush_l;
    vlSelfRef.__PVT__nseq_trk_rd = vlSelfRef.__PVT__seq_trk_rd;
    vlSelfRef.__PVT__nrd_FIFO_valid_l = vlSelfRef.__PVT__rd_FIFO_valid_l;
    vlSelfRef.__PVT__nrd_len_ptr = vlSelfRef.__PVT__rd_len_ptr;
    vlSelfRef.__PVT__naxis_r_valid = vlSelfRef.__PVT__axis_r_valid;
    vlSelfRef.__PVT__nhandshake = vlSelfRef.__PVT__handshake;
    if (((IData)(vlSelfRef.__PVT__TCP_flush) | (IData)(vlSelfRef.__PVT__TCP_flush_l))) {
        vlSelfRef.__PVT__nwr_ptr = vlSelfRef.__PVT__flush_ptr;
    } else if (((IData)(vlSelfRef.__PVT__nw_segment) 
                | (IData)(vlSelfRef.__PVT__wr_FIFO_en))) {
        vlSelfRef.__PVT__nflush_ptr = vlSelfRef.__PVT__flush_ptr;
    }
    if (((IData)(vlSelfRef.__PVT__wr_FIFO_en) & (IData)(vlSelfRef.__PVT__handshake))) {
        vlSelfRef.__PVT__nwr_ptr = (0xfU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__wr_ptr)));
        VL_ASSIGNSEL_WQ(72,64,8U, vlSelfRef.__PVT__nTCP_FIFO
                        [vlSelfRef.__PVT__wr_ptr], vlSelfRef.__PVT__axis_data_rx);
        VL_ASSIGNSEL_WI(72,8,0U, vlSelfRef.__PVT__nTCP_FIFO
                        [vlSelfRef.__PVT__wr_ptr], vlSelfRef.__PVT__wr_FIFO_offset);
    }
    if (vlSelfRef.__PVT__rd_FIFO_valid) {
        vlSelfRef.__PVT__nrd_FIFO_valid_l = 1U;
        vlSelfRef.__PVT__nrd_len_ptr = vlSelfRef.__PVT__rd_FIFO_len;
        vlSelfRef.__PVT__nrd_ptr = vlSelfRef.__PVT__rd_FIFO_ptr;
    } else if (((IData)(vlSelfRef.__PVT__rd_ptr) == (IData)(vlSelfRef.__PVT__rd_len_ptr))) {
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
            vlSelfRef.__PVT__naxis_r_valid = 0U;
        }
    }
}

VL_ATTR_COLD void Vether_simulation_payload_FIFO___stl_sequent__TOP__ether_simulation__clt_inst__u_payload_fifo__0(Vether_simulation_payload_FIFO* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_payload_FIFO___stl_sequent__TOP__ether_simulation__clt_inst__u_payload_fifo__0\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(72,vlSelfRef.__PVT__fifo_entry_rd, 
                vlSelfRef.__PVT__TCP_FIFO[vlSelfRef.__PVT__rd_ptr]);
    vlSelfRef.__PVT__payload[0U] = VL_SEL_QWII(72, 
                                               vlSelfRef.__PVT__TCP_FIFO
                                               [0U], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset[0U] = (0xffU & VL_SEL_IWII(72, 
                                                             vlSelfRef.__PVT__TCP_FIFO
                                                             [0U], 0U, 8U));
    vlSelfRef.__PVT__payload[1U] = VL_SEL_QWII(72, 
                                               vlSelfRef.__PVT__TCP_FIFO
                                               [1U], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset[1U] = (0xffU & VL_SEL_IWII(72, 
                                                             vlSelfRef.__PVT__TCP_FIFO
                                                             [1U], 0U, 8U));
    vlSelfRef.__PVT__payload[2U] = VL_SEL_QWII(72, 
                                               vlSelfRef.__PVT__TCP_FIFO
                                               [2U], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset[2U] = (0xffU & VL_SEL_IWII(72, 
                                                             vlSelfRef.__PVT__TCP_FIFO
                                                             [2U], 0U, 8U));
    vlSelfRef.__PVT__payload[3U] = VL_SEL_QWII(72, 
                                               vlSelfRef.__PVT__TCP_FIFO
                                               [3U], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset[3U] = (0xffU & VL_SEL_IWII(72, 
                                                             vlSelfRef.__PVT__TCP_FIFO
                                                             [3U], 0U, 8U));
    vlSelfRef.__PVT__payload[4U] = VL_SEL_QWII(72, 
                                               vlSelfRef.__PVT__TCP_FIFO
                                               [4U], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset[4U] = (0xffU & VL_SEL_IWII(72, 
                                                             vlSelfRef.__PVT__TCP_FIFO
                                                             [4U], 0U, 8U));
    vlSelfRef.__PVT__payload[5U] = VL_SEL_QWII(72, 
                                               vlSelfRef.__PVT__TCP_FIFO
                                               [5U], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset[5U] = (0xffU & VL_SEL_IWII(72, 
                                                             vlSelfRef.__PVT__TCP_FIFO
                                                             [5U], 0U, 8U));
    vlSelfRef.__PVT__payload[6U] = VL_SEL_QWII(72, 
                                               vlSelfRef.__PVT__TCP_FIFO
                                               [6U], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset[6U] = (0xffU & VL_SEL_IWII(72, 
                                                             vlSelfRef.__PVT__TCP_FIFO
                                                             [6U], 0U, 8U));
    vlSelfRef.__PVT__payload[7U] = VL_SEL_QWII(72, 
                                               vlSelfRef.__PVT__TCP_FIFO
                                               [7U], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset[7U] = (0xffU & VL_SEL_IWII(72, 
                                                             vlSelfRef.__PVT__TCP_FIFO
                                                             [7U], 0U, 8U));
    vlSelfRef.__PVT__payload[8U] = VL_SEL_QWII(72, 
                                               vlSelfRef.__PVT__TCP_FIFO
                                               [8U], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset[8U] = (0xffU & VL_SEL_IWII(72, 
                                                             vlSelfRef.__PVT__TCP_FIFO
                                                             [8U], 0U, 8U));
    vlSelfRef.__PVT__payload[9U] = VL_SEL_QWII(72, 
                                               vlSelfRef.__PVT__TCP_FIFO
                                               [9U], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset[9U] = (0xffU & VL_SEL_IWII(72, 
                                                             vlSelfRef.__PVT__TCP_FIFO
                                                             [9U], 0U, 8U));
    vlSelfRef.__PVT__payload[0xaU] = VL_SEL_QWII(72, 
                                                 vlSelfRef.__PVT__TCP_FIFO
                                                 [0xaU], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset[0xaU] = (0xffU & 
                                           VL_SEL_IWII(72, 
                                                       vlSelfRef.__PVT__TCP_FIFO
                                                       [0xaU], 0U, 8U));
    vlSelfRef.__PVT__payload[0xbU] = VL_SEL_QWII(72, 
                                                 vlSelfRef.__PVT__TCP_FIFO
                                                 [0xbU], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset[0xbU] = (0xffU & 
                                           VL_SEL_IWII(72, 
                                                       vlSelfRef.__PVT__TCP_FIFO
                                                       [0xbU], 0U, 8U));
    vlSelfRef.__PVT__payload[0xcU] = VL_SEL_QWII(72, 
                                                 vlSelfRef.__PVT__TCP_FIFO
                                                 [0xcU], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset[0xcU] = (0xffU & 
                                           VL_SEL_IWII(72, 
                                                       vlSelfRef.__PVT__TCP_FIFO
                                                       [0xcU], 0U, 8U));
    vlSelfRef.__PVT__payload[0xdU] = VL_SEL_QWII(72, 
                                                 vlSelfRef.__PVT__TCP_FIFO
                                                 [0xdU], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset[0xdU] = (0xffU & 
                                           VL_SEL_IWII(72, 
                                                       vlSelfRef.__PVT__TCP_FIFO
                                                       [0xdU], 0U, 8U));
    vlSelfRef.__PVT__payload[0xeU] = VL_SEL_QWII(72, 
                                                 vlSelfRef.__PVT__TCP_FIFO
                                                 [0xeU], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset[0xeU] = (0xffU & 
                                           VL_SEL_IWII(72, 
                                                       vlSelfRef.__PVT__TCP_FIFO
                                                       [0xeU], 0U, 8U));
    vlSelfRef.__PVT__payload[0xfU] = VL_SEL_QWII(72, 
                                                 vlSelfRef.__PVT__TCP_FIFO
                                                 [0xfU], 8U, 0x40U);
    vlSelfRef.__PVT__bytes_offset[0xfU] = (0xffU & 
                                           VL_SEL_IWII(72, 
                                                       vlSelfRef.__PVT__TCP_FIFO
                                                       [0xfU], 0U, 8U));
    vlSelfRef.__PVT__bytes_len = (0xfU & (((((((VL_EXTEND_II(4,1, 
                                                             (1U 
                                                              & VL_BITSEL_IWII(72, 
                                                                               vlSelfRef.__PVT__TCP_FIFO
                                                                               [vlSelfRef.__PVT__rd_ptr], 0U))) 
                                                + VL_EXTEND_II(4,1, 
                                                               (1U 
                                                                & VL_BITSEL_IWII(72, 
                                                                                vlSelfRef.__PVT__TCP_FIFO
                                                                                [vlSelfRef.__PVT__rd_ptr], 1U)))) 
                                               + VL_EXTEND_II(4,1, 
                                                              (1U 
                                                               & VL_BITSEL_IWII(72, 
                                                                                vlSelfRef.__PVT__TCP_FIFO
                                                                                [vlSelfRef.__PVT__rd_ptr], 2U)))) 
                                              + VL_EXTEND_II(4,1, 
                                                             (1U 
                                                              & VL_BITSEL_IWII(72, 
                                                                               vlSelfRef.__PVT__TCP_FIFO
                                                                               [vlSelfRef.__PVT__rd_ptr], 3U)))) 
                                             + VL_EXTEND_II(4,1, 
                                                            (1U 
                                                             & VL_BITSEL_IWII(72, 
                                                                              vlSelfRef.__PVT__TCP_FIFO
                                                                              [vlSelfRef.__PVT__rd_ptr], 4U)))) 
                                            + VL_EXTEND_II(4,1, 
                                                           (1U 
                                                            & VL_BITSEL_IWII(72, 
                                                                             vlSelfRef.__PVT__TCP_FIFO
                                                                             [vlSelfRef.__PVT__rd_ptr], 5U)))) 
                                           + VL_EXTEND_II(4,1, 
                                                          (1U 
                                                           & VL_BITSEL_IWII(72, 
                                                                            vlSelfRef.__PVT__TCP_FIFO
                                                                            [vlSelfRef.__PVT__rd_ptr], 6U)))) 
                                          + VL_EXTEND_II(4,1, 
                                                         (1U 
                                                          & VL_BITSEL_IWII(72, 
                                                                           vlSelfRef.__PVT__TCP_FIFO
                                                                           [vlSelfRef.__PVT__rd_ptr], 7U)))));
    vlSelfRef.__PVT__full = ((VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__rd_ptr)) 
                              - (IData)(1U)) == VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__wr_ptr_out)));
}

VL_ATTR_COLD void Vether_simulation_payload_FIFO___stl_sequent__TOP__ether_simulation__clt_inst__u_payload_fifo__1(Vether_simulation_payload_FIFO* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_payload_FIFO___stl_sequent__TOP__ether_simulation__clt_inst__u_payload_fifo__1\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nwr_ptr = vlSelfRef.__PVT__wr_ptr;
    vlSelfRef.__PVT__nrd_ptr = vlSelfRef.__PVT__rd_ptr;
    vlSelfRef.__PVT__nflush_ptr = vlSelfRef.__PVT__wr_ptr;
    vlSelfRef.__PVT__nTCP_flush_l = vlSelfRef.__PVT__TCP_flush_l;
    vlSelfRef.__PVT__nseq_trk_rd = vlSelfRef.__PVT__seq_trk_rd;
    vlSelfRef.__PVT__nrd_FIFO_valid_l = vlSelfRef.__PVT__rd_FIFO_valid_l;
    vlSelfRef.__PVT__nrd_len_ptr = vlSelfRef.__PVT__rd_len_ptr;
    vlSelfRef.__PVT__naxis_r_valid = vlSelfRef.__PVT__axis_r_valid;
    vlSelfRef.__PVT__nhandshake = vlSelfRef.__PVT__handshake;
    if (((IData)(vlSelfRef.__PVT__TCP_flush) | (IData)(vlSelfRef.__PVT__TCP_flush_l))) {
        vlSelfRef.__PVT__nwr_ptr = vlSelfRef.__PVT__flush_ptr;
    } else if (((IData)(vlSelfRef.__PVT__nw_segment) 
                | (IData)(vlSelfRef.__PVT__wr_FIFO_en))) {
        vlSelfRef.__PVT__nflush_ptr = vlSelfRef.__PVT__flush_ptr;
    }
    if (((IData)(vlSelfRef.__PVT__wr_FIFO_en) & (IData)(vlSelfRef.__PVT__handshake))) {
        vlSelfRef.__PVT__nwr_ptr = (0xfU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__wr_ptr)));
        VL_ASSIGNSEL_WQ(72,64,8U, vlSelfRef.__PVT__nTCP_FIFO
                        [vlSelfRef.__PVT__wr_ptr], vlSelfRef.__PVT__axis_data_rx);
        VL_ASSIGNSEL_WI(72,8,0U, vlSelfRef.__PVT__nTCP_FIFO
                        [vlSelfRef.__PVT__wr_ptr], vlSelfRef.__PVT__wr_FIFO_offset);
    }
    if (vlSelfRef.__PVT__rd_FIFO_valid) {
        vlSelfRef.__PVT__nrd_FIFO_valid_l = 1U;
        vlSelfRef.__PVT__nrd_len_ptr = vlSelfRef.__PVT__rd_FIFO_len;
        vlSelfRef.__PVT__nrd_ptr = vlSelfRef.__PVT__rd_FIFO_ptr;
    } else if (((IData)(vlSelfRef.__PVT__rd_ptr) == (IData)(vlSelfRef.__PVT__rd_len_ptr))) {
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
            vlSelfRef.__PVT__naxis_r_valid = 0U;
        }
    }
}

VL_ATTR_COLD void Vether_simulation_payload_FIFO___ctor_var_reset(Vether_simulation_payload_FIFO* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vether_simulation_payload_FIFO___ctor_var_reset\n"); );
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(72, vlSelf->__PVT__TCP_FIFO[__Vi0], __VscopeHash, 9388026644081116466ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(72, vlSelf->__PVT__nTCP_FIFO[__Vi0], __VscopeHash, 6201906900979090643ull);
    }
    VL_SCOPED_RAND_RESET_W(72, vlSelf->__PVT__fifo_entry_rd, __VscopeHash, 7603860537774548504ull);
    vlSelf->__PVT__flush_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12629206001683931762ull);
    vlSelf->__PVT__nflush_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4733891924914347654ull);
    vlSelf->__PVT__len_TCP_flush = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16207856346514006386ull);
    vlSelf->__PVT__nlen_TCP_flush = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 434479146916130705ull);
    vlSelf->__PVT__rd_len_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1323015811732051027ull);
    vlSelf->__PVT__nrd_len_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9770567455443883210ull);
    vlSelf->__PVT__seq_trk_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5597391329415738108ull);
    vlSelf->__PVT__nseq_trk_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16714118793671617377ull);
    vlSelf->__PVT__bytes_len = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8219785737058615002ull);
    vlSelf->__PVT__rd_FIFO_valid_l = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18251088185603097672ull);
    vlSelf->__PVT__nrd_FIFO_valid_l = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10243358524547403510ull);
    vlSelf->__PVT__naxis_r_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13310703565603645684ull);
    vlSelf->__PVT__TCP_flush_l = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5066170270725843370ull);
    vlSelf->__PVT__nTCP_flush_l = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17711388217799035390ull);
    vlSelf->__PVT__handshake = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14047965953334755415ull);
    vlSelf->__PVT__nhandshake = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17389643272364340452ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__payload[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14284949165898147015ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__bytes_offset[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9480138795055053938ull);
    }
    vlSelf->__PVT__wr_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12436053222651956031ull);
    vlSelf->__PVT__nwr_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1876698004006870143ull);
    vlSelf->__PVT__rd_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8582113012353463185ull);
    vlSelf->__PVT__nrd_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8308338580089836589ull);
    vlSelf->__PVT__unnamedblk1__DOT__i = 0;
    vlSelf->__Vdly__wr_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6265375712968675170ull);
    vlSelf->__Vdly__rd_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1296402517236374361ull);
    vlSelf->__Vdly__rd_FIFO_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17408200852565543397ull);
    vlSelf->__Vdly__rd_FIFO_valid_l = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16921457110226626990ull);
    vlSelf->__Vdly__rd_len_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10418901856708786751ull);
    vlSelf->__Vdly__seq_rx_FIFO_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17300098257617802234ull);
    vlSelf->__Vdly__handshake = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15485587280037912469ull);
    vlSelf->__Vdly__flush_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16317277963448058588ull);
    vlSelf->__Vdly__len_TCP_flush = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4499794943241228148ull);
    vlSelf->__Vdly__axis_r_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3604655781892561961ull);
    vlSelf->__Vdly__TCP_flush_l = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17526780631238086618ull);
    vlSelf->__Vdly__seq_trk_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13027755999420008345ull);
    vlSelf->__Vdly__wr_FIFO_len = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2463755035948012911ull);
    vlSelf->__Vdly__wr_ptr_out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11191159754855846327ull);
    vlSelf->__Vdly__axis_rd_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17392126712206161775ull);
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
    VL_SCOPED_RAND_RESET_W(72, vlSelf->__VdlyVal__TCP_FIFO__v11, __VscopeHash, 7785207286410026610ull);
    VL_SCOPED_RAND_RESET_W(72, vlSelf->__VdlyVal__TCP_FIFO__v12, __VscopeHash, 1932493220738310204ull);
    VL_SCOPED_RAND_RESET_W(72, vlSelf->__VdlyVal__TCP_FIFO__v13, __VscopeHash, 174302670671952001ull);
    VL_SCOPED_RAND_RESET_W(72, vlSelf->__VdlyVal__TCP_FIFO__v14, __VscopeHash, 1270673332910998916ull);
    VL_SCOPED_RAND_RESET_W(72, vlSelf->__VdlyVal__TCP_FIFO__v15, __VscopeHash, 14780529845602812544ull);
    vlSelf->__VdlyDim0__TCP_FIFO__v16 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3784483764481506743ull);
    vlSelf->__VdlySet__TCP_FIFO__v16 = 0;
    vlSelf->__VdlySet__TCP_FIFO__v17 = 0;
    vlSelf->__VdlySet__TCP_FIFO__v18 = 0;
    vlSelf->__VdlySet__TCP_FIFO__v19 = 0;
    vlSelf->__VdlySet__TCP_FIFO__v20 = 0;
    vlSelf->__VdlySet__TCP_FIFO__v21 = 0;
    vlSelf->__VdlySet__TCP_FIFO__v22 = 0;
    vlSelf->__VdlySet__TCP_FIFO__v23 = 0;
    vlSelf->__VdlySet__TCP_FIFO__v24 = 0;
    vlSelf->__VdlySet__TCP_FIFO__v25 = 0;
    vlSelf->__VdlySet__TCP_FIFO__v26 = 0;
    vlSelf->__VdlySet__TCP_FIFO__v27 = 0;
    vlSelf->__VdlySet__TCP_FIFO__v28 = 0;
    vlSelf->__VdlySet__TCP_FIFO__v29 = 0;
    vlSelf->__VdlySet__TCP_FIFO__v30 = 0;
    vlSelf->__VdlySet__TCP_FIFO__v31 = 0;
    vlSelf->__VdlySet__TCP_FIFO__v32 = 0;
}
