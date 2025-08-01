// tb_MAC_rx.cpp  – Verilator translation of mac_rx_tb.sv
#include "VMAC_rx.h"
#include "verilated.h"
#include "verilated_fst_c.h"
#include <cstdint>
#include <vector>
#include <iostream>
#include <iomanip>

// ----------------------------------------------------------------------------
// Basic XGMII column type (mirrors SV “column_t”)
// ----------------------------------------------------------------------------


// ----------------------------------------------------------------------------
// Pre-computed stimulus vectors  (verbatim copy of the SV arrays)
// ----------------------------------------------------------------------------
static constexpr uint32_t CRC_OUT = 0x7436'9723;
static constexpr int      PRE_IDLE = 4;        // idle cols after every frame

static inline uint64_t bswap64(uint64_t x)
{
    return ((x & 0x00000000000000FFULL) << 56) |
           ((x & 0x000000000000FF00ULL) << 40) |
           ((x & 0x0000000000FF0000ULL) << 24) |
           ((x & 0x00000000FF000000ULL) <<  8) |
           ((x & 0x000000FF00000000ULL) >>  8) |
           ((x & 0x0000FF0000000000ULL) >> 24) |
           ((x & 0x00FF000000000000ULL) >> 40) |
           ((x & 0xFF00000000000000ULL) >> 56);
}



// ---- GOOD frame, /S/ in lane-0 ------------------------------------------------
//CRC32 = 0x1C3BB795	
struct Column {
    uint8_t  ctl;      // xgmii_rxc
    uint64_t dat;      // xgmii_rxd
};
static const std::vector<Column> GOOD_L0 = {
    {0xFF, 0x0707070707070707},          // idles
    {0xFF, 0x0707070707070707},          // idles
    {0xFF, 0x0707070707070707},          // idles
    {0x01, 0xD5555555555555FB},          // /S/ + 6×55 + D5

    // bytes 0-7  :  FF FF FC CC BB AA  AA CC
    {0x00, 0xCCAAAABBCCFFFFFF},

    // bytes 8-15 :  BB FF FF FF  08 00  00 00
    {0x00, 0xFFFF0008FFFFFFBB},

    // bytes 16-47: payload zeros (four full columns)
    {0x00, 0x0000000000000000},
    {0x00, 0x0000000000000000},
    {0x00, 0x0000000000000000},
    {0x00, 0x0000000000000000},

    // bytes 48-55: FCS (little-endian) + padding
    {0x00, 0x393176B800000000},
    {0x00, 0x0000000000000000},

    // bytes 56-59: remaining padding
    //CRC32 = 0x539B8212		
    {0x00, 0xFFFF0008FFFFFFBB},
    {0xE0, 0x0707FD12829B53AB},

    // trailing idles
    {0xFF, 0x0707070707070707},
    {0xFF, 0x0707070707070707}
};

// ---- GOOD frame, /S/ in lane-4 ------------------------------------------------
static const std::vector<Column> GOOD_L4 = {
    {0xFF, 0x0707'0707'0707'0707ULL},
    {0x1F, 0x5555'55FB'0707'0707ULL},
    {0x00, 0xFFFF'FFFF'D555'5555ULL},
    {0x00, 0xBBFF'FFFF'AACC'FFFFULL},
    {0x00, 0x0000'0000'FFFF'0800ULL},
    {0x00, 0x0000'0000'0000'0000ULL},
    {0x00, 0x0000'0000'0000'0000ULL},
    {0x00, 0x0000'0000'0000'0000ULL},
    {0x00, 0x0000'0000'0000'0000ULL},
    {0x00, 0x0000'0000'3931'76B8ULL},
    {0x00, 0x3674'00AB'0000'0000ULL},          // /T/ in lane-4
    {0xFC, 0x0707'0707'07FD'2397ULL},
    {0xFF, 0x0707'0707'0707'0707ULL}
};

// ---- BAD-CRC frame (single-bit flip in FCS) ----------------------------------
static std::vector<Column> BAD_CRC = [] {
    auto v = GOOD_L0;
    v[8].dat = 0x3931'76B9'0000'0000ULL;       // flip LSB of FCS
    return v;
}();

// ----------------------------------------------------------------------------
// Clock / trace helpers  (one call = one full 10 ns cycle @100 MHz)
// ----------------------------------------------------------------------------

inline std::vector<uint64_t> reverse_xgmii_data(const std::vector<Column>& cols)
{
    std::vector<uint64_t> out;
    out.reserve(cols.size());

    for (const Column& c : cols) {
        if (c.ctl == 0x00)                     // all 8 lanes carry data
            out.push_back(bswap64(c.dat));     // little → big
    }
    return out;
}

static vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

static void tick(VMAC_rx *dut, VerilatedFstC *tfp)
{
    dut->CLK = 1;
    dut->eval(); 
    tfp->dump(main_time++);          
       
    dut->CLK = 0;          
    dut->eval();
    tfp->dump(main_time++);
}

static void drive_idle(VMAC_rx *dut, VerilatedFstC *tfp, int cycles = 1)
{
    for (int i = 0; i < cycles; ++i) {
        dut->xgmii_rxc = 0xFF;
        dut->xgmii_rxd = 0x0707'0707'0707'0707ULL;
        tick(dut, tfp);
        
    }
}

static void drive_col(VMAC_rx *dut, VerilatedFstC *tfp, const Column &c)
{
    dut->xgmii_rxc = c.ctl;
    dut->xgmii_rxd = c.dat;
    tick(dut, tfp);
}

// ----------------------------------------------------------------------------
// Generic test runner
// ----------------------------------------------------------------------------
static bool run_frame(VMAC_rx          *dut,
                      VerilatedFstC    *tfp,
                      const std::vector<Column>& frame,
                      const char       *name,
                      bool              expect_ok,
                      bool              expect_crc_flush = false)
{
    // Stimulus
    for (const auto &c : frame)
        drive_col(dut, tfp, c);

    // Post-frame idle + sampling
    bool ok_seen  = false;
    bool flush_seen = false;
    for (int i = 0; i < PRE_IDLE; ++i) {
        drive_idle(dut, tfp, 1);
        ok_seen    |= dut->frame_ok;
        flush_seen |= dut->CRC_flush;
    }

    bool pass = (ok_seen == expect_ok) && (flush_seen == expect_crc_flush);

    std::cout << std::left << std::setw(12) << name << " : "
              << (pass ? "PASS" : "FAIL")
              << "   (frame_ok=" << ok_seen
              << ", CRC_flush="  << flush_seen << ")\n";
    return pass;
}

// ----------------------------------------------------------------------------
// Individual test-case wrappers (pure convenience)
// ----------------------------------------------------------------------------
static bool test_good_L0 (VMAC_rx *dut, VerilatedFstC *tfp)
{ return run_frame(dut, tfp, GOOD_L0,  "GOOD_L0",  true,  false); }

static bool test_good_L4 (VMAC_rx *dut, VerilatedFstC *tfp)
{ return run_frame(dut, tfp, GOOD_L4,  "GOOD_L4",  true,  false); }

static bool test_bad_crc (VMAC_rx *dut, VerilatedFstC *tfp)
{ return run_frame(dut, tfp, BAD_CRC, "BAD_CRC", false, true ); }

// ----------------------------------------------------------------------------
// Main program  (reset once, then run all test-cases)
// ----------------------------------------------------------------------------
int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);

    VMAC_rx *dut = new VMAC_rx;
    Verilated::traceEverOn(true);
    VerilatedFstC *tfp = new VerilatedFstC;
    dut->trace(tfp, 99);
    tfp->open("MAC_rx.vcd");

    // Global reset – two idle columns low-reset, then release
    dut->nRST = 0;  drive_idle(dut, tfp, 2);

    dut->nRST = 1;  
    tick(dut, tfp);
    tick(dut, tfp);

    // ------------------------------------------------------ run the tests
    
    bool all_pass = test_good_L0(dut, tfp);

    // std::cout << "\n-----------------------------------------\n"
    //           << (all_pass ? "ALL TESTS PASSED" : "SOME TESTS FAILED")
    //           << "\n-----------------------------------------\n";

    auto reversed = reverse_xgmii_data(GOOD_L0);
    std::cout << std::uppercase << std::hex << std::setfill('0');
    for (uint64_t w : reversed) {
        std::cout << "0x" << std::setw(16) << w << '\n';
    }

    std::cout << "-------------------------" << std::endl;

    for (Column w : GOOD_L0) {
        std::cout << "0x" << std::setw(16) << w.dat << '\n';
    }
    
    tfp->close();
    delete dut;
    return 0;
}
