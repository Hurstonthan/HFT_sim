// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vether_simulation__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vether_simulation::Vether_simulation(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vether_simulation__Syms(contextp(), _vcname__, this)}
    , CLK{vlSymsp->TOP.CLK}
    , nRST{vlSymsp->TOP.nRST}
    , tb_count{vlSymsp->TOP.tb_count}
    , client_lost{vlSymsp->TOP.client_lost}
    , out_order{vlSymsp->TOP.out_order}
    , err_flag{vlSymsp->TOP.err_flag}
    , TX_en_svr{vlSymsp->TOP.TX_en_svr}
    , end_ss_svr{vlSymsp->TOP.end_ss_svr}
    , xgmii_txc_svr{vlSymsp->TOP.xgmii_txc_svr}
    , frame_end_svr{vlSymsp->TOP.frame_end_svr}
    , xgmii_rxc_svr{vlSymsp->TOP.xgmii_rxc_svr}
    , axis_last_svr{vlSymsp->TOP.axis_last_svr}
    , wr_FIFO_en_svr{vlSymsp->TOP.wr_FIFO_en_svr}
    , wr_FIFO_validing_svr{vlSymsp->TOP.wr_FIFO_validing_svr}
    , axis_r_en_svr{vlSymsp->TOP.axis_r_en_svr}
    , axis_r_valid_svr{vlSymsp->TOP.axis_r_valid_svr}
    , TCP_stop_flag_svr{vlSymsp->TOP.TCP_stop_flag_svr}
    , TX_en_clt{vlSymsp->TOP.TX_en_clt}
    , end_ss_clt{vlSymsp->TOP.end_ss_clt}
    , xgmii_txc_clt{vlSymsp->TOP.xgmii_txc_clt}
    , frame_end_clt{vlSymsp->TOP.frame_end_clt}
    , xgmii_rxc_clt{vlSymsp->TOP.xgmii_rxc_clt}
    , axis_last_clt{vlSymsp->TOP.axis_last_clt}
    , wr_FIFO_en_clt{vlSymsp->TOP.wr_FIFO_en_clt}
    , wr_FIFO_valid_clt{vlSymsp->TOP.wr_FIFO_valid_clt}
    , axis_r_en_clt{vlSymsp->TOP.axis_r_en_clt}
    , axis_r_valid_clt{vlSymsp->TOP.axis_r_valid_clt}
    , TCP_stop_flag_clt{vlSymsp->TOP.TCP_stop_flag_clt}
    , len_seq_svr{vlSymsp->TOP.len_seq_svr}
    , seq_num_svr{vlSymsp->TOP.seq_num_svr}
    , rcv_next_svr{vlSymsp->TOP.rcv_next_svr}
    , len_seq_clt{vlSymsp->TOP.len_seq_clt}
    , seq_num_clt{vlSymsp->TOP.seq_num_clt}
    , rcv_next_clt{vlSymsp->TOP.rcv_next_clt}
    , xgmii_txd_svr{vlSymsp->TOP.xgmii_txd_svr}
    , xgmii_rxd_svr{vlSymsp->TOP.xgmii_rxd_svr}
    , soupbin_TCP_payload_svr{vlSymsp->TOP.soupbin_TCP_payload_svr}
    , axis_rd_data_svr{vlSymsp->TOP.axis_rd_data_svr}
    , xgmii_txd_clt{vlSymsp->TOP.xgmii_txd_clt}
    , xgmii_rxd_clt{vlSymsp->TOP.xgmii_rxd_clt}
    , soupbin_TCP_payload_clt{vlSymsp->TOP.soupbin_TCP_payload_clt}
    , axis_rd_data_clt{vlSymsp->TOP.axis_rd_data_clt}
    , __PVT__ether_simulation{vlSymsp->TOP.__PVT__ether_simulation}
    , __PVT__rx_pkg{vlSymsp->TOP.__PVT__rx_pkg}
    , __PVT__ether_pkg{vlSymsp->TOP.__PVT__ether_pkg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vether_simulation::Vether_simulation(const char* _vcname__)
    : Vether_simulation(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vether_simulation::~Vether_simulation() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vether_simulation___024root___eval_debug_assertions(Vether_simulation___024root* vlSelf);
#endif  // VL_DEBUG
void Vether_simulation___024root___eval_static(Vether_simulation___024root* vlSelf);
void Vether_simulation___024root___eval_initial(Vether_simulation___024root* vlSelf);
void Vether_simulation___024root___eval_settle(Vether_simulation___024root* vlSelf);
void Vether_simulation___024root___eval(Vether_simulation___024root* vlSelf);

void Vether_simulation::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vether_simulation::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vether_simulation___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vether_simulation___024root___eval_static(&(vlSymsp->TOP));
        Vether_simulation___024root___eval_initial(&(vlSymsp->TOP));
        Vether_simulation___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vether_simulation___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vether_simulation::eventsPending() { return false; }

uint64_t Vether_simulation::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vether_simulation::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vether_simulation___024root___eval_final(Vether_simulation___024root* vlSelf);

VL_ATTR_COLD void Vether_simulation::final() {
    Vether_simulation___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vether_simulation::hierName() const { return vlSymsp->name(); }
const char* Vether_simulation::modelName() const { return "Vether_simulation"; }
unsigned Vether_simulation::threads() const { return 1; }
void Vether_simulation::prepareClone() const { contextp()->prepareClone(); }
void Vether_simulation::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vether_simulation::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vether_simulation___024root__trace_decl_types(VerilatedFst* tracep);

void Vether_simulation___024root__trace_init_top(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vether_simulation___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vether_simulation___024root*>(voidSelf);
    Vether_simulation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vether_simulation___024root__trace_decl_types(tracep);
    Vether_simulation___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vether_simulation___024root__trace_register(Vether_simulation___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vether_simulation::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vether_simulation::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vether_simulation___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
