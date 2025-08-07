// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VMAC_IP_UDP_rx__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

VMAC_IP_UDP_rx::VMAC_IP_UDP_rx(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VMAC_IP_UDP_rx__Syms(contextp(), _vcname__, this)}
    , CLK{vlSymsp->TOP.CLK}
    , nRST{vlSymsp->TOP.nRST}
    , xgmii_rxc{vlSymsp->TOP.xgmii_rxc}
    , UDP_flush{vlSymsp->TOP.UDP_flush}
    , UDP_valid{vlSymsp->TOP.UDP_valid}
    , xgmii_rxd{vlSymsp->TOP.xgmii_rxd}
    , UDP_payload{vlSymsp->TOP.UDP_payload}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VMAC_IP_UDP_rx::VMAC_IP_UDP_rx(const char* _vcname__)
    : VMAC_IP_UDP_rx(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VMAC_IP_UDP_rx::~VMAC_IP_UDP_rx() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VMAC_IP_UDP_rx___024root___eval_debug_assertions(VMAC_IP_UDP_rx___024root* vlSelf);
#endif  // VL_DEBUG
void VMAC_IP_UDP_rx___024root___eval_static(VMAC_IP_UDP_rx___024root* vlSelf);
void VMAC_IP_UDP_rx___024root___eval_initial(VMAC_IP_UDP_rx___024root* vlSelf);
void VMAC_IP_UDP_rx___024root___eval_settle(VMAC_IP_UDP_rx___024root* vlSelf);
void VMAC_IP_UDP_rx___024root___eval(VMAC_IP_UDP_rx___024root* vlSelf);

void VMAC_IP_UDP_rx::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMAC_IP_UDP_rx::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VMAC_IP_UDP_rx___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VMAC_IP_UDP_rx___024root___eval_static(&(vlSymsp->TOP));
        VMAC_IP_UDP_rx___024root___eval_initial(&(vlSymsp->TOP));
        VMAC_IP_UDP_rx___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VMAC_IP_UDP_rx___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VMAC_IP_UDP_rx::eventsPending() { return false; }

uint64_t VMAC_IP_UDP_rx::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VMAC_IP_UDP_rx::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VMAC_IP_UDP_rx___024root___eval_final(VMAC_IP_UDP_rx___024root* vlSelf);

VL_ATTR_COLD void VMAC_IP_UDP_rx::final() {
    VMAC_IP_UDP_rx___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VMAC_IP_UDP_rx::hierName() const { return vlSymsp->name(); }
const char* VMAC_IP_UDP_rx::modelName() const { return "VMAC_IP_UDP_rx"; }
unsigned VMAC_IP_UDP_rx::threads() const { return 1; }
void VMAC_IP_UDP_rx::prepareClone() const { contextp()->prepareClone(); }
void VMAC_IP_UDP_rx::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VMAC_IP_UDP_rx::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VMAC_IP_UDP_rx___024root__trace_decl_types(VerilatedFst* tracep);

void VMAC_IP_UDP_rx___024root__trace_init_top(VMAC_IP_UDP_rx___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    VMAC_IP_UDP_rx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMAC_IP_UDP_rx___024root*>(voidSelf);
    VMAC_IP_UDP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VMAC_IP_UDP_rx___024root__trace_decl_types(tracep);
    VMAC_IP_UDP_rx___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VMAC_IP_UDP_rx___024root__trace_register(VMAC_IP_UDP_rx___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void VMAC_IP_UDP_rx::trace(VerilatedFstC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VMAC_IP_UDP_rx::trace()' shall not be called after 'VerilatedFstC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VMAC_IP_UDP_rx___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
