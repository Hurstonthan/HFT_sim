// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcrc32_parallel_64bit__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vcrc32_parallel_64bit::Vcrc32_parallel_64bit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcrc32_parallel_64bit__Syms(contextp(), _vcname__, this)}
    , CLK{vlSymsp->TOP.CLK}
    , nRST{vlSymsp->TOP.nRST}
    , valid{vlSymsp->TOP.valid}
    , crc_init{vlSymsp->TOP.crc_init}
    , rx{vlSymsp->TOP.rx}
    , crc_out{vlSymsp->TOP.crc_out}
    , data_in{vlSymsp->TOP.data_in}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vcrc32_parallel_64bit::Vcrc32_parallel_64bit(const char* _vcname__)
    : Vcrc32_parallel_64bit(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcrc32_parallel_64bit::~Vcrc32_parallel_64bit() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcrc32_parallel_64bit___024root___eval_debug_assertions(Vcrc32_parallel_64bit___024root* vlSelf);
#endif  // VL_DEBUG
void Vcrc32_parallel_64bit___024root___eval_static(Vcrc32_parallel_64bit___024root* vlSelf);
void Vcrc32_parallel_64bit___024root___eval_initial(Vcrc32_parallel_64bit___024root* vlSelf);
void Vcrc32_parallel_64bit___024root___eval_settle(Vcrc32_parallel_64bit___024root* vlSelf);
void Vcrc32_parallel_64bit___024root___eval(Vcrc32_parallel_64bit___024root* vlSelf);

void Vcrc32_parallel_64bit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcrc32_parallel_64bit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcrc32_parallel_64bit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcrc32_parallel_64bit___024root___eval_static(&(vlSymsp->TOP));
        Vcrc32_parallel_64bit___024root___eval_initial(&(vlSymsp->TOP));
        Vcrc32_parallel_64bit___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcrc32_parallel_64bit___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcrc32_parallel_64bit::eventsPending() { return false; }

uint64_t Vcrc32_parallel_64bit::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vcrc32_parallel_64bit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcrc32_parallel_64bit___024root___eval_final(Vcrc32_parallel_64bit___024root* vlSelf);

VL_ATTR_COLD void Vcrc32_parallel_64bit::final() {
    Vcrc32_parallel_64bit___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcrc32_parallel_64bit::hierName() const { return vlSymsp->name(); }
const char* Vcrc32_parallel_64bit::modelName() const { return "Vcrc32_parallel_64bit"; }
unsigned Vcrc32_parallel_64bit::threads() const { return 1; }
void Vcrc32_parallel_64bit::prepareClone() const { contextp()->prepareClone(); }
void Vcrc32_parallel_64bit::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vcrc32_parallel_64bit::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vcrc32_parallel_64bit___024root__trace_decl_types(VerilatedFst* tracep);

void Vcrc32_parallel_64bit___024root__trace_init_top(Vcrc32_parallel_64bit___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcrc32_parallel_64bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcrc32_parallel_64bit___024root*>(voidSelf);
    Vcrc32_parallel_64bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vcrc32_parallel_64bit___024root__trace_decl_types(tracep);
    Vcrc32_parallel_64bit___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcrc32_parallel_64bit___024root__trace_register(Vcrc32_parallel_64bit___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vcrc32_parallel_64bit::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vcrc32_parallel_64bit::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vcrc32_parallel_64bit___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
