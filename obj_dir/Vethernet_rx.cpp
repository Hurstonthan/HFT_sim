// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vethernet_rx__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vethernet_rx::Vethernet_rx(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vethernet_rx__Syms(contextp(), _vcname__, this)}
    , CLK{vlSymsp->TOP.CLK}
    , nRST{vlSymsp->TOP.nRST}
    , xgmii_rxc{vlSymsp->TOP.xgmii_rxc}
    , IP_valid{vlSymsp->TOP.IP_valid}
    , IP_flush{vlSymsp->TOP.IP_flush}
    , is_udp{vlSymsp->TOP.is_udp}
    , is_tcp{vlSymsp->TOP.is_tcp}
    , xgmii_rxd{vlSymsp->TOP.xgmii_rxd}
    , IP_payload{vlSymsp->TOP.IP_payload}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vethernet_rx::Vethernet_rx(const char* _vcname__)
    : Vethernet_rx(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vethernet_rx::~Vethernet_rx() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vethernet_rx___024root___eval_debug_assertions(Vethernet_rx___024root* vlSelf);
#endif  // VL_DEBUG
void Vethernet_rx___024root___eval_static(Vethernet_rx___024root* vlSelf);
void Vethernet_rx___024root___eval_initial(Vethernet_rx___024root* vlSelf);
void Vethernet_rx___024root___eval_settle(Vethernet_rx___024root* vlSelf);
void Vethernet_rx___024root___eval(Vethernet_rx___024root* vlSelf);

void Vethernet_rx::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vethernet_rx::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vethernet_rx___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vethernet_rx___024root___eval_static(&(vlSymsp->TOP));
        Vethernet_rx___024root___eval_initial(&(vlSymsp->TOP));
        Vethernet_rx___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vethernet_rx___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vethernet_rx::eventsPending() { return false; }

uint64_t Vethernet_rx::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vethernet_rx::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vethernet_rx___024root___eval_final(Vethernet_rx___024root* vlSelf);

VL_ATTR_COLD void Vethernet_rx::final() {
    Vethernet_rx___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vethernet_rx::hierName() const { return vlSymsp->name(); }
const char* Vethernet_rx::modelName() const { return "Vethernet_rx"; }
unsigned Vethernet_rx::threads() const { return 1; }
void Vethernet_rx::prepareClone() const { contextp()->prepareClone(); }
void Vethernet_rx::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vethernet_rx::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vethernet_rx___024root__trace_decl_types(VerilatedFst* tracep);

void Vethernet_rx___024root__trace_init_top(Vethernet_rx___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vethernet_rx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vethernet_rx___024root*>(voidSelf);
    Vethernet_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vethernet_rx___024root__trace_decl_types(tracep);
    Vethernet_rx___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vethernet_rx___024root__trace_register(Vethernet_rx___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vethernet_rx::trace(VerilatedFstC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vethernet_rx::trace()' shall not be called after 'VerilatedFstC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vethernet_rx___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
