// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vpayload_FIFO__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vpayload_FIFO::Vpayload_FIFO(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vpayload_FIFO__Syms(contextp(), _vcname__, this)}
    , CLK{vlSymsp->TOP.CLK}
    , nRST{vlSymsp->TOP.nRST}
    , nw_segment{vlSymsp->TOP.nw_segment}
    , TCP_flush{vlSymsp->TOP.TCP_flush}
    , axis_t_last{vlSymsp->TOP.axis_t_last}
    , handshake_done{vlSymsp->TOP.handshake_done}
    , wr_FIFO_en{vlSymsp->TOP.wr_FIFO_en}
    , wr_FIFO_offset{vlSymsp->TOP.wr_FIFO_offset}
    , wr_ptr_out{vlSymsp->TOP.wr_ptr_out}
    , wr_FIFO_len{vlSymsp->TOP.wr_FIFO_len}
    , rd_FIFO_valid{vlSymsp->TOP.rd_FIFO_valid}
    , rd_FIFO_ptr{vlSymsp->TOP.rd_FIFO_ptr}
    , rd_FIFO_len{vlSymsp->TOP.rd_FIFO_len}
    , rd_FIFO_en{vlSymsp->TOP.rd_FIFO_en}
    , full{vlSymsp->TOP.full}
    , axis_r_en{vlSymsp->TOP.axis_r_en}
    , axis_r_valid{vlSymsp->TOP.axis_r_valid}
    , seq_rcv_start{vlSymsp->TOP.seq_rcv_start}
    , seq_rx_FIFO_rd{vlSymsp->TOP.seq_rx_FIFO_rd}
    , axis_data_rx{vlSymsp->TOP.axis_data_rx}
    , axis_rd_data{vlSymsp->TOP.axis_rd_data}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vpayload_FIFO::Vpayload_FIFO(const char* _vcname__)
    : Vpayload_FIFO(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vpayload_FIFO::~Vpayload_FIFO() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vpayload_FIFO___024root___eval_debug_assertions(Vpayload_FIFO___024root* vlSelf);
#endif  // VL_DEBUG
void Vpayload_FIFO___024root___eval_static(Vpayload_FIFO___024root* vlSelf);
void Vpayload_FIFO___024root___eval_initial(Vpayload_FIFO___024root* vlSelf);
void Vpayload_FIFO___024root___eval_settle(Vpayload_FIFO___024root* vlSelf);
void Vpayload_FIFO___024root___eval(Vpayload_FIFO___024root* vlSelf);

void Vpayload_FIFO::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vpayload_FIFO::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vpayload_FIFO___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vpayload_FIFO___024root___eval_static(&(vlSymsp->TOP));
        Vpayload_FIFO___024root___eval_initial(&(vlSymsp->TOP));
        Vpayload_FIFO___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vpayload_FIFO___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vpayload_FIFO::eventsPending() { return false; }

uint64_t Vpayload_FIFO::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vpayload_FIFO::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vpayload_FIFO___024root___eval_final(Vpayload_FIFO___024root* vlSelf);

VL_ATTR_COLD void Vpayload_FIFO::final() {
    Vpayload_FIFO___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vpayload_FIFO::hierName() const { return vlSymsp->name(); }
const char* Vpayload_FIFO::modelName() const { return "Vpayload_FIFO"; }
unsigned Vpayload_FIFO::threads() const { return 1; }
void Vpayload_FIFO::prepareClone() const { contextp()->prepareClone(); }
void Vpayload_FIFO::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vpayload_FIFO::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vpayload_FIFO___024root__trace_decl_types(VerilatedFst* tracep);

void Vpayload_FIFO___024root__trace_init_top(Vpayload_FIFO___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vpayload_FIFO___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpayload_FIFO___024root*>(voidSelf);
    Vpayload_FIFO__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vpayload_FIFO___024root__trace_decl_types(tracep);
    Vpayload_FIFO___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vpayload_FIFO___024root__trace_register(Vpayload_FIFO___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vpayload_FIFO::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vpayload_FIFO::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vpayload_FIFO___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
