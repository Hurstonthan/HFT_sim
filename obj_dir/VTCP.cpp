// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VTCP__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

VTCP::VTCP(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VTCP__Syms(contextp(), _vcname__, this)}
    , CLK{vlSymsp->TOP.CLK}
    , nRST{vlSymsp->TOP.nRST}
    , TX_en{vlSymsp->TOP.TX_en}
    , IP_valid{vlSymsp->TOP.IP_valid}
    , IP_flush{vlSymsp->TOP.IP_flush}
    , IP_bytes_rcv{vlSymsp->TOP.IP_bytes_rcv}
    , nw_segment{vlSymsp->TOP.nw_segment}
    , axis_t_last{vlSymsp->TOP.axis_t_last}
    , TCP_flush{vlSymsp->TOP.TCP_flush}
    , handshake_done{vlSymsp->TOP.handshake_done}
    , wr_FIFO_en{vlSymsp->TOP.wr_FIFO_en}
    , wr_FIFO_offset{vlSymsp->TOP.wr_FIFO_offset}
    , rd_FIFO_valid_rcv{vlSymsp->TOP.rd_FIFO_valid_rcv}
    , rd_FIFO_ptr{vlSymsp->TOP.rd_FIFO_ptr}
    , rd_FIFO_len{vlSymsp->TOP.rd_FIFO_len}
    , wr_ptr_out{vlSymsp->TOP.wr_ptr_out}
    , wr_FIFO_len{vlSymsp->TOP.wr_FIFO_len}
    , rd_FIFO_en_rcv{vlSymsp->TOP.rd_FIFO_en_rcv}
    , full{vlSymsp->TOP.full}
    , ACK_rcv_flag{vlSymsp->TOP.ACK_rcv_flag}
    , out_order_req{vlSymsp->TOP.out_order_req}
    , TCP_stop_flg{vlSymsp->TOP.TCP_stop_flg}
    , end_ss{vlSymsp->TOP.end_ss}
    , rd_FIFO_valid_tx{vlSymsp->TOP.rd_FIFO_valid_tx}
    , rd_FIFO_last{vlSymsp->TOP.rd_FIFO_last}
    , rd_FIFO_en_tx{vlSymsp->TOP.rd_FIFO_en_tx}
    , TCP_send{vlSymsp->TOP.TCP_send}
    , re_trans{vlSymsp->TOP.re_trans}
    , IP_pseuder{vlSymsp->TOP.IP_pseuder}
    , TCP_len{vlSymsp->TOP.TCP_len}
    , bytes_abt_sent{vlSymsp->TOP.bytes_abt_sent}
    , checksum_re_trans{vlSymsp->TOP.checksum_re_trans}
    , seq_rcv_start{vlSymsp->TOP.seq_rcv_start}
    , seq_rx_FIFO_rd{vlSymsp->TOP.seq_rx_FIFO_rd}
    , ACK_num{vlSymsp->TOP.ACK_num}
    , rcv_next{vlSymsp->TOP.rcv_next}
    , seq_num{vlSymsp->TOP.seq_num}
    , IP_payload{vlSymsp->TOP.IP_payload}
    , axis_data_rx{vlSymsp->TOP.axis_data_rx}
    , rd_FIFO_payload{vlSymsp->TOP.rd_FIFO_payload}
    , TCP_transmit{vlSymsp->TOP.TCP_transmit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VTCP::VTCP(const char* _vcname__)
    : VTCP(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VTCP::~VTCP() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VTCP___024root___eval_debug_assertions(VTCP___024root* vlSelf);
#endif  // VL_DEBUG
void VTCP___024root___eval_static(VTCP___024root* vlSelf);
void VTCP___024root___eval_initial(VTCP___024root* vlSelf);
void VTCP___024root___eval_settle(VTCP___024root* vlSelf);
void VTCP___024root___eval(VTCP___024root* vlSelf);

void VTCP::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTCP::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VTCP___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VTCP___024root___eval_static(&(vlSymsp->TOP));
        VTCP___024root___eval_initial(&(vlSymsp->TOP));
        VTCP___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VTCP___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VTCP::eventsPending() { return false; }

uint64_t VTCP::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VTCP::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VTCP___024root___eval_final(VTCP___024root* vlSelf);

VL_ATTR_COLD void VTCP::final() {
    VTCP___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VTCP::hierName() const { return vlSymsp->name(); }
const char* VTCP::modelName() const { return "VTCP"; }
unsigned VTCP::threads() const { return 1; }
void VTCP::prepareClone() const { contextp()->prepareClone(); }
void VTCP::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VTCP::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VTCP___024root__trace_decl_types(VerilatedFst* tracep);

void VTCP___024root__trace_init_top(VTCP___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    VTCP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTCP___024root*>(voidSelf);
    VTCP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VTCP___024root__trace_decl_types(tracep);
    VTCP___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VTCP___024root__trace_register(VTCP___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void VTCP::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VTCP::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VTCP___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
