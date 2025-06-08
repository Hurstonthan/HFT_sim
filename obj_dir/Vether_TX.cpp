// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vether_TX__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vether_TX::Vether_TX(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vether_TX__Syms(contextp(), _vcname__, this)}
    , CLK{vlSymsp->TOP.CLK}
    , nRST{vlSymsp->TOP.nRST}
    , rcv_data{vlSymsp->TOP.rcv_data}
    , timeout_flag{vlSymsp->TOP.timeout_flag}
    , TCP_control_rx{vlSymsp->TOP.TCP_control_rx}
    , offset_rx{vlSymsp->TOP.offset_rx}
    , SYN_sent{vlSymsp->TOP.SYN_sent}
    , ACK_sent{vlSymsp->TOP.ACK_sent}
    , FIN_sent{vlSymsp->TOP.FIN_sent}
    , end_ss{vlSymsp->TOP.end_ss}
    , seq_up{vlSymsp->TOP.seq_up}
    , TCP_stop_flg{vlSymsp->TOP.TCP_stop_flg}
    , TCP_control_tx{vlSymsp->TOP.TCP_control_tx}
    , offset_tx{vlSymsp->TOP.offset_tx}
    , window_size_rx{vlSymsp->TOP.window_size_rx}
    , checksum_rx{vlSymsp->TOP.checksum_rx}
    , urgent_pointer_rx{vlSymsp->TOP.urgent_pointer_rx}
    , window_size_tx{vlSymsp->TOP.window_size_tx}
    , checksum_tx{vlSymsp->TOP.checksum_tx}
    , urgent_pointer_tx{vlSymsp->TOP.urgent_pointer_tx}
    , seq_num_rx{vlSymsp->TOP.seq_num_rx}
    , ACK_rx{vlSymsp->TOP.ACK_rx}
    , payload_len_rx{vlSymsp->TOP.payload_len_rx}
    , ISN_num{vlSymsp->TOP.ISN_num}
    , bytes_sent{vlSymsp->TOP.bytes_sent}
    , bytes_abt_sent{vlSymsp->TOP.bytes_abt_sent}
    , TCP_len_data{vlSymsp->TOP.TCP_len_data}
    , seq_num_tx{vlSymsp->TOP.seq_num_tx}
    , ACK_tx{vlSymsp->TOP.ACK_tx}
    , __PVT__ether_TX__DOT__my_TCP{vlSymsp->TOP.__PVT__ether_TX__DOT__my_TCP}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vether_TX::Vether_TX(const char* _vcname__)
    : Vether_TX(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vether_TX::~Vether_TX() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vether_TX___024root___eval_debug_assertions(Vether_TX___024root* vlSelf);
#endif  // VL_DEBUG
void Vether_TX___024root___eval_static(Vether_TX___024root* vlSelf);
void Vether_TX___024root___eval_initial(Vether_TX___024root* vlSelf);
void Vether_TX___024root___eval_settle(Vether_TX___024root* vlSelf);
void Vether_TX___024root___eval(Vether_TX___024root* vlSelf);

void Vether_TX::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vether_TX::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vether_TX___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vether_TX___024root___eval_static(&(vlSymsp->TOP));
        Vether_TX___024root___eval_initial(&(vlSymsp->TOP));
        Vether_TX___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vether_TX___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vether_TX::eventsPending() { return false; }

uint64_t Vether_TX::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vether_TX::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vether_TX___024root___eval_final(Vether_TX___024root* vlSelf);

VL_ATTR_COLD void Vether_TX::final() {
    Vether_TX___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vether_TX::hierName() const { return vlSymsp->name(); }
const char* Vether_TX::modelName() const { return "Vether_TX"; }
unsigned Vether_TX::threads() const { return 1; }
void Vether_TX::prepareClone() const { contextp()->prepareClone(); }
void Vether_TX::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vether_TX::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vether_TX___024root__trace_decl_types(VerilatedFst* tracep);

void Vether_TX___024root__trace_init_top(Vether_TX___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vether_TX___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vether_TX___024root*>(voidSelf);
    Vether_TX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_TX___024root__trace_decl_types(tracep);
    Vether_TX___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vether_TX___024root__trace_register(Vether_TX___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vether_TX::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vether_TX::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vether_TX___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
