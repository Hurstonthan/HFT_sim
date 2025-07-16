// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VTCP_flow_ctrl__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

VTCP_flow_ctrl::VTCP_flow_ctrl(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VTCP_flow_ctrl__Syms(contextp(), _vcname__, this)}
    , CLK{vlSymsp->TOP.CLK}
    , nRST{vlSymsp->TOP.nRST}
    , TCP_control_rx{vlSymsp->TOP.TCP_control_rx}
    , offset_rx{vlSymsp->TOP.offset_rx}
    , rcv_data{vlSymsp->TOP.rcv_data}
    , TCP_tx_en{vlSymsp->TOP.TCP_tx_en}
    , seq_up{vlSymsp->TOP.seq_up}
    , TCP_control_tx{vlSymsp->TOP.TCP_control_tx}
    , offset_tx{vlSymsp->TOP.offset_tx}
    , end_ss{vlSymsp->TOP.end_ss}
    , TCP_stop_flg{vlSymsp->TOP.TCP_stop_flg}
    , full{vlSymsp->TOP.full}
    , timeout_flag{vlSymsp->TOP.timeout_flag}
    , hand_shake_done{vlSymsp->TOP.hand_shake_done}
    , TCP_last{vlSymsp->TOP.TCP_last}
    , TCP_bytes_trk{vlSymsp->TOP.TCP_bytes_trk}
    , wr_FIFO_offset{vlSymsp->TOP.wr_FIFO_offset}
    , wr_FIFO_len{vlSymsp->TOP.wr_FIFO_len}
    , rd_FIFO_len{vlSymsp->TOP.rd_FIFO_len}
    , wr_FIFO_en{vlSymsp->TOP.wr_FIFO_en}
    , rd_FIFO_en{vlSymsp->TOP.rd_FIFO_en}
    , nw_segment{vlSymsp->TOP.nw_segment}
    , TCP_flush{vlSymsp->TOP.TCP_flush}
    , rd_FIFO_valid{vlSymsp->TOP.rd_FIFO_valid}
    , window_size_rx{vlSymsp->TOP.window_size_rx}
    , checksum_rx{vlSymsp->TOP.checksum_rx}
    , urgent_pointer_rx{vlSymsp->TOP.urgent_pointer_rx}
    , window_size_tx{vlSymsp->TOP.window_size_tx}
    , checksum_tx{vlSymsp->TOP.checksum_tx}
    , urgent_pointer_tx{vlSymsp->TOP.urgent_pointer_tx}
    , wr_FIFO_ptr{vlSymsp->TOP.wr_FIFO_ptr}
    , rd_FIFO_ptr{vlSymsp->TOP.rd_FIFO_ptr}
    , seq_num_rx{vlSymsp->TOP.seq_num_rx}
    , ACK_rx{vlSymsp->TOP.ACK_rx}
    , seq_num_tx{vlSymsp->TOP.seq_num_tx}
    , ACK_tx{vlSymsp->TOP.ACK_tx}
    , ISN_num{vlSymsp->TOP.ISN_num}
    , bytes_sent{vlSymsp->TOP.bytes_sent}
    , bytes_abt_sent{vlSymsp->TOP.bytes_abt_sent}
    , payload_len_rx{vlSymsp->TOP.payload_len_rx}
    , rcv_next_out{vlSymsp->TOP.rcv_next_out}
    , seq_num_out{vlSymsp->TOP.seq_num_out}
    , seq_rx_FIFO_rd{vlSymsp->TOP.seq_rx_FIFO_rd}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VTCP_flow_ctrl::VTCP_flow_ctrl(const char* _vcname__)
    : VTCP_flow_ctrl(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VTCP_flow_ctrl::~VTCP_flow_ctrl() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VTCP_flow_ctrl___024root___eval_debug_assertions(VTCP_flow_ctrl___024root* vlSelf);
#endif  // VL_DEBUG
void VTCP_flow_ctrl___024root___eval_static(VTCP_flow_ctrl___024root* vlSelf);
void VTCP_flow_ctrl___024root___eval_initial(VTCP_flow_ctrl___024root* vlSelf);
void VTCP_flow_ctrl___024root___eval_settle(VTCP_flow_ctrl___024root* vlSelf);
void VTCP_flow_ctrl___024root___eval(VTCP_flow_ctrl___024root* vlSelf);

void VTCP_flow_ctrl::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTCP_flow_ctrl::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VTCP_flow_ctrl___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VTCP_flow_ctrl___024root___eval_static(&(vlSymsp->TOP));
        VTCP_flow_ctrl___024root___eval_initial(&(vlSymsp->TOP));
        VTCP_flow_ctrl___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VTCP_flow_ctrl___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VTCP_flow_ctrl::eventsPending() { return false; }

uint64_t VTCP_flow_ctrl::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VTCP_flow_ctrl::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VTCP_flow_ctrl___024root___eval_final(VTCP_flow_ctrl___024root* vlSelf);

VL_ATTR_COLD void VTCP_flow_ctrl::final() {
    VTCP_flow_ctrl___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VTCP_flow_ctrl::hierName() const { return vlSymsp->name(); }
const char* VTCP_flow_ctrl::modelName() const { return "VTCP_flow_ctrl"; }
unsigned VTCP_flow_ctrl::threads() const { return 1; }
void VTCP_flow_ctrl::prepareClone() const { contextp()->prepareClone(); }
void VTCP_flow_ctrl::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VTCP_flow_ctrl::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VTCP_flow_ctrl___024root__trace_decl_types(VerilatedFst* tracep);

void VTCP_flow_ctrl___024root__trace_init_top(VTCP_flow_ctrl___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    VTCP_flow_ctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTCP_flow_ctrl___024root*>(voidSelf);
    VTCP_flow_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VTCP_flow_ctrl___024root__trace_decl_types(tracep);
    VTCP_flow_ctrl___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VTCP_flow_ctrl___024root__trace_register(VTCP_flow_ctrl___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void VTCP_flow_ctrl::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VTCP_flow_ctrl::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VTCP_flow_ctrl___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
