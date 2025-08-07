// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VETHER_SIMULATION_H_
#define VERILATED_VETHER_SIMULATION_H_  // guard

#include "verilated.h"

class Vether_simulation__Syms;
class Vether_simulation___024root;
class VerilatedFstC;
class Vether_simulation_ether_pkg;
class Vether_simulation_ether_simulation;
class Vether_simulation_rx_pkg;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vether_simulation VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vether_simulation__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = true;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&CLK,0,0);
    VL_IN8(&nRST,0,0);
    VL_IN8(&tb_count,7,0);
    VL_IN8(&TX_en_svr,0,0);
    VL_OUT8(&xgmii_txc_svr,7,0);
    VL_OUT8(&frame_end_svr,0,0);
    VL_IN8(&xgmii_rxc_svr,7,0);
    VL_IN8(&axis_last_svr,0,0);
    VL_IN8(&wr_FIFO_en_svr,0,0);
    VL_OUT8(&wr_FIFO_validing_svr,0,0);
    VL_IN8(&axis_r_en_svr,0,0);
    VL_OUT8(&axis_r_valid_svr,0,0);
    VL_OUT8(&TCP_stop_flag_svr,0,0);
    VL_IN8(&TX_en_clt,0,0);
    VL_OUT8(&xgmii_txc_clt,7,0);
    VL_OUT8(&frame_end_clt,0,0);
    VL_IN8(&xgmii_rxc_clt,7,0);
    VL_IN8(&axis_last_clt,0,0);
    VL_IN8(&wr_FIFO_en_clt,0,0);
    VL_OUT8(&wr_FIFO_valid_clt,0,0);
    VL_IN8(&axis_r_en_clt,0,0);
    VL_OUT8(&axis_r_valid_clt,0,0);
    VL_OUT8(&TCP_stop_flag_clt,0,0);
    VL_IN(&len_seq_svr,31,0);
    VL_OUT(&seq_num_svr,31,0);
    VL_OUT(&rcv_next_svr,31,0);
    VL_IN(&len_seq_clt,31,0);
    VL_OUT(&seq_num_clt,31,0);
    VL_OUT(&rcv_next_clt,31,0);
    VL_OUT64(&xgmii_txd_svr,63,0);
    VL_IN64(&xgmii_rxd_svr,63,0);
    VL_IN64(&soupbin_TCP_payload_svr,63,0);
    VL_OUT64(&axis_rd_data_svr,63,0);
    VL_OUT64(&xgmii_txd_clt,63,0);
    VL_IN64(&xgmii_rxd_clt,63,0);
    VL_IN64(&soupbin_TCP_payload_clt,63,0);
    VL_OUT64(&axis_rd_data_clt,63,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vether_simulation_ether_simulation* const __PVT__ether_simulation;
    Vether_simulation_rx_pkg* const __PVT__rx_pkg;
    Vether_simulation_ether_pkg* const __PVT__ether_pkg;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vether_simulation___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vether_simulation(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vether_simulation(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vether_simulation();
  private:
    VL_UNCOPYABLE(Vether_simulation);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
