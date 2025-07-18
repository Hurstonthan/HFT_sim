// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VIP_rx__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

VIP_rx::VIP_rx(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VIP_rx__Syms(contextp(), _vcname__, this)}
    , CLK{vlSymsp->TOP.CLK}
    , nRST{vlSymsp->TOP.nRST}
    , MAC_valid{vlSymsp->TOP.MAC_valid}
    , MAC_flush{vlSymsp->TOP.MAC_flush}
    , bytes_rcv_len{vlSymsp->TOP.bytes_rcv_len}
    , IP_valid{vlSymsp->TOP.IP_valid}
    , IP_flush{vlSymsp->TOP.IP_flush}
    , is_udp{vlSymsp->TOP.is_udp}
    , is_tcp{vlSymsp->TOP.is_tcp}
    , MAC_payload_rcv{vlSymsp->TOP.MAC_payload_rcv}
    , IP_payload{vlSymsp->TOP.IP_payload}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VIP_rx::VIP_rx(const char* _vcname__)
    : VIP_rx(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VIP_rx::~VIP_rx() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VIP_rx___024root___eval_debug_assertions(VIP_rx___024root* vlSelf);
#endif  // VL_DEBUG
void VIP_rx___024root___eval_static(VIP_rx___024root* vlSelf);
void VIP_rx___024root___eval_initial(VIP_rx___024root* vlSelf);
void VIP_rx___024root___eval_settle(VIP_rx___024root* vlSelf);
void VIP_rx___024root___eval(VIP_rx___024root* vlSelf);

void VIP_rx::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VIP_rx::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VIP_rx___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VIP_rx___024root___eval_static(&(vlSymsp->TOP));
        VIP_rx___024root___eval_initial(&(vlSymsp->TOP));
        VIP_rx___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VIP_rx___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VIP_rx::eventsPending() { return false; }

uint64_t VIP_rx::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VIP_rx::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VIP_rx___024root___eval_final(VIP_rx___024root* vlSelf);

VL_ATTR_COLD void VIP_rx::final() {
    VIP_rx___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VIP_rx::hierName() const { return vlSymsp->name(); }
const char* VIP_rx::modelName() const { return "VIP_rx"; }
unsigned VIP_rx::threads() const { return 1; }
void VIP_rx::prepareClone() const { contextp()->prepareClone(); }
void VIP_rx::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VIP_rx::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VIP_rx___024root__trace_decl_types(VerilatedFst* tracep);

void VIP_rx___024root__trace_init_top(VIP_rx___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    VIP_rx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VIP_rx___024root*>(voidSelf);
    VIP_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VIP_rx___024root__trace_decl_types(tracep);
    VIP_rx___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VIP_rx___024root__trace_register(VIP_rx___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void VIP_rx::trace(VerilatedFstC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VIP_rx::trace()' shall not be called after 'VerilatedFstC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VIP_rx___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
