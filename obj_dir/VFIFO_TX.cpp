// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VFIFO_TX__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

VFIFO_TX::VFIFO_TX(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VFIFO_TX__Syms(contextp(), _vcname__, this)}
    , CLK{vlSymsp->TOP.CLK}
    , nRST{vlSymsp->TOP.nRST}
    , seq_up{vlSymsp->TOP.seq_up}
    , rd_FIFO_en{vlSymsp->TOP.rd_FIFO_en}
    , rd_FIFO_valid{vlSymsp->TOP.rd_FIFO_valid}
    , rd_FIFO_last{vlSymsp->TOP.rd_FIFO_last}
    , ACK_rcv_flag{vlSymsp->TOP.ACK_rcv_flag}
    , out_order_req{vlSymsp->TOP.out_order_req}
    , axis_last{vlSymsp->TOP.axis_last}
    , wr_FIFO_en{vlSymsp->TOP.wr_FIFO_en}
    , wr_FIFO_valid{vlSymsp->TOP.wr_FIFO_valid}
    , bytes_abt_sent{vlSymsp->TOP.bytes_abt_sent}
    , seq_num_tx{vlSymsp->TOP.seq_num_tx}
    , ACK_num{vlSymsp->TOP.ACK_num}
    , len_seq{vlSymsp->TOP.len_seq}
    , rd_FIFO_payload{vlSymsp->TOP.rd_FIFO_payload}
    , soupbin_TCP_payload{vlSymsp->TOP.soupbin_TCP_payload}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VFIFO_TX::VFIFO_TX(const char* _vcname__)
    : VFIFO_TX(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VFIFO_TX::~VFIFO_TX() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VFIFO_TX___024root___eval_debug_assertions(VFIFO_TX___024root* vlSelf);
#endif  // VL_DEBUG
void VFIFO_TX___024root___eval_static(VFIFO_TX___024root* vlSelf);
void VFIFO_TX___024root___eval_initial(VFIFO_TX___024root* vlSelf);
void VFIFO_TX___024root___eval_settle(VFIFO_TX___024root* vlSelf);
void VFIFO_TX___024root___eval(VFIFO_TX___024root* vlSelf);

void VFIFO_TX::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VFIFO_TX::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VFIFO_TX___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VFIFO_TX___024root___eval_static(&(vlSymsp->TOP));
        VFIFO_TX___024root___eval_initial(&(vlSymsp->TOP));
        VFIFO_TX___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VFIFO_TX___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VFIFO_TX::eventsPending() { return false; }

uint64_t VFIFO_TX::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VFIFO_TX::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VFIFO_TX___024root___eval_final(VFIFO_TX___024root* vlSelf);

VL_ATTR_COLD void VFIFO_TX::final() {
    VFIFO_TX___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VFIFO_TX::hierName() const { return vlSymsp->name(); }
const char* VFIFO_TX::modelName() const { return "VFIFO_TX"; }
unsigned VFIFO_TX::threads() const { return 1; }
void VFIFO_TX::prepareClone() const { contextp()->prepareClone(); }
void VFIFO_TX::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VFIFO_TX::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VFIFO_TX___024root__trace_decl_types(VerilatedFst* tracep);

void VFIFO_TX___024root__trace_init_top(VFIFO_TX___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    VFIFO_TX___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFIFO_TX___024root*>(voidSelf);
    VFIFO_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VFIFO_TX___024root__trace_decl_types(tracep);
    VFIFO_TX___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VFIFO_TX___024root__trace_register(VFIFO_TX___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void VFIFO_TX::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VFIFO_TX::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VFIFO_TX___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
