// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VUDP_tx__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

VUDP_tx::VUDP_tx(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VUDP_tx__Syms(contextp(), _vcname__, this)}
    , CLK{vlSymsp->TOP.CLK}
    , nRST{vlSymsp->TOP.nRST}
    , UDP_valid{vlSymsp->TOP.UDP_valid}
    , UDP_last{vlSymsp->TOP.UDP_last}
    , IP_valid{vlSymsp->TOP.IP_valid}
    , IP_last{vlSymsp->TOP.IP_last}
    , UDP_len{vlSymsp->TOP.UDP_len}
    , UDP_src_port{vlSymsp->TOP.UDP_src_port}
    , UDP_dest_port{vlSymsp->TOP.UDP_dest_port}
    , UDP_payload{vlSymsp->TOP.UDP_payload}
    , IP_payload{vlSymsp->TOP.IP_payload}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VUDP_tx::VUDP_tx(const char* _vcname__)
    : VUDP_tx(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VUDP_tx::~VUDP_tx() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VUDP_tx___024root___eval_debug_assertions(VUDP_tx___024root* vlSelf);
#endif  // VL_DEBUG
void VUDP_tx___024root___eval_static(VUDP_tx___024root* vlSelf);
void VUDP_tx___024root___eval_initial(VUDP_tx___024root* vlSelf);
void VUDP_tx___024root___eval_settle(VUDP_tx___024root* vlSelf);
void VUDP_tx___024root___eval(VUDP_tx___024root* vlSelf);

void VUDP_tx::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VUDP_tx::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VUDP_tx___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VUDP_tx___024root___eval_static(&(vlSymsp->TOP));
        VUDP_tx___024root___eval_initial(&(vlSymsp->TOP));
        VUDP_tx___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VUDP_tx___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VUDP_tx::eventsPending() { return false; }

uint64_t VUDP_tx::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VUDP_tx::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VUDP_tx___024root___eval_final(VUDP_tx___024root* vlSelf);

VL_ATTR_COLD void VUDP_tx::final() {
    VUDP_tx___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VUDP_tx::hierName() const { return vlSymsp->name(); }
const char* VUDP_tx::modelName() const { return "VUDP_tx"; }
unsigned VUDP_tx::threads() const { return 1; }
void VUDP_tx::prepareClone() const { contextp()->prepareClone(); }
void VUDP_tx::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VUDP_tx::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VUDP_tx___024root__trace_decl_types(VerilatedFst* tracep);

void VUDP_tx___024root__trace_init_top(VUDP_tx___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    VUDP_tx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VUDP_tx___024root*>(voidSelf);
    VUDP_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VUDP_tx___024root__trace_decl_types(tracep);
    VUDP_tx___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VUDP_tx___024root__trace_register(VUDP_tx___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void VUDP_tx::trace(VerilatedFstC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VUDP_tx::trace()' shall not be called after 'VerilatedFstC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VUDP_tx___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
