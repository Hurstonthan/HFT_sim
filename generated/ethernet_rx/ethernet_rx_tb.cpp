
// #include "Vethernet_rx.h"
// #include "verilated.h"
// #include "verilated_fst_c.h"
// #include "ethernet_rx_input.hpp"

// static vluint64_t main_time = 0;
// double sc_time_stamp() { return main_time; }

// static void tick(Vethernet_rx *top, VerilatedFstC *tfp) {
//     top->eval(); tfp->dump(main_time++);
//     top->CLK ^= 1;
//     top->eval(); tfp->dump(main_time++);
// }

// int main(int argc, char **argv) {
//     Verilated::commandArgs(argc, argv);
//     Vethernet_rx *top = new Vethernet_rx;

//     Verilated::traceEverOn(true);
//     VerilatedFstC *tfp = new VerilatedFstC;
//     top->trace(tfp, 99);
//     tfp->open("ethernet_rx.vcd");

//     // Reset phase
//     reset_input_ethernet_rx();
//     tick(top, tfp);

//     // Example stimulus
//     drive_input_ethernet_rx(0, 0, 0);
//     for (int i = 0; i < 20; ++i) tick(top, tfp);

//     tfp->close();
//     delete top;
//     return 0;
// }



#include "Vethernet_rx.h"
#include "verilated.h"
#include "verilated_fst_c.h"
#include "ethernet_rx_input.hpp"
#include <cstdint>
#include <vector>
#include <iostream>
#include <iomanip>

static vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

static void tick(Vethernet_rx *top, VerilatedFstC *tfp) {
    top->CLK = 1;
    top->eval(); tfp->dump(main_time++);
    top->CLK = 0;
    top->eval(); tfp->dump(main_time++);
}

void reset_module(Vethernet_rx *top, VerilatedFstC *tfp) {
    top->xgmii_rxd = 0;
    top->xgmii_rxc = 0;
    for (int i = 0; i < 5; i++) tick(top, tfp);
    
    top->nRST = 1;
    
    for (int i = 0; i < 5; i++) tick(top, tfp);
}

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

    // bytes 0-7  :  FF FF FF CC BB AA  AA CC
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

/* GOOD_L4 – SOF on lane-4, IPv4/TCP, Src=0xFFFFFFFF, Dst=0xAAAAAAAA */
// static const std::vector<Column> GOOD_L4 = {
//     /* 3 × Idle words ------------------------------------------------- */
//     {0xFF, 0x0707070707070707},
//     {0xFF, 0x0707070707070707},
//     {0xFF, 0x0707070707070707},

//     /* /S/ on lane-4  + 6×55 preamble + one 0xD5 ---------------------- */
//     /* lanes 0-3 = Idle (0x07, ctl=1), lane-4 = /S/ (0xFB, ctl=1)      */
//     {0x1F, 0x555555FB07070707},

//     /* 3 remaining 0x55 + 0xD5 + first 4 bytes of Dest-MAC ------------ */
//     {0x00, 0xCCFFFFFFD5555555},

//     /* Dest-MAC bytes 4-5 + full Src-MAC ------------------------------ */
//     {0x00, 0xFFFFFFBBCCAAAABB},

//     /* EtherType 0x0800 + first 8 B of IPv4 header -------------------- */
//     {0x00, 0x01002B0000450008},

//     /* IPv4 header bytes 8-15 ---------------------------------------- */
//     {0x00, 0xFFFF77E506400040},

//     /* IPv4 header bytes 16-19 + TCP sport/dport ---------------------- */
//     {0x00, 0x3412AAAAAAAAFFFF},

//     /* TCP seq/ack (0) ------------------------------------------------ */
//     {0x00, 0x0000000000007856},

//     /* TCP hdr tail (DataOff=5, SYN, win 0x4000) --------------------- */
//     {0x00, 0x0000004002500000},

//     /* 3-byte payload DE AD BE + 3 pad zeros -------------------------- */
//     {0x00, 0x000000BEADDE0000},

//     /* FCS 0x252DB70B (little-endian) + 4 pad zeros ------------------- */
//     {0x00, 0x00000000252DB70B},

//     /* extra all-zero pad word (keeps same pattern as GOOD_L0) -------- */
//     {0x00, 0x0000000000000000},

//     /* terminator /T/ on lane-5 (ctl bits 5-7 = 1 → 0xE0) ------------- */
//     {0xE0, 0x0707FD0000000000},

//     /* trailing Idles ------------------------------------------------- */
//     {0xFF, 0x0707070707070707},
//     {0xFF, 0x0707070707070707}
// };

static const std::vector<Column> GOOD_L4 = {
    /* leading idles (unchanged) */
    {0xFF, 0x0707070707070707},
    {0xFF, 0x0707070707070707},
    {0xFF, 0x0707070707070707},

    /* lanes 0-3 = idles, lane 4 = /S/, lanes 5-7 = first 0x55 0x55 0x55  */
    {0x1F, 0x555555FB07070707},

    /* remaining 0x55 0x55 0x55, SFD (0xD5), start of destination MAC … */
    {0x00, 0xCCFFFFFFD5555555},
    {0x00, 0xFFFFFFBBCCAAAABB},

    /* header & payload (same bytes, just re-aligned) */
    {0x00, 0x00000000FFFF0008},
    {0x00, 0x0000000000000000},
    {0x00, 0x0000000000000000},
    {0x00, 0x0000000000000000},
    {0x00, 0x0000000000000000},

    /* FCS (little-endian) + padding */
    {0x00, 0x00000000393176B8},
    {0x00, 0xFFFFFFBB00000000},

    /* terminator + trailer */
    {0x00, 0x829B53ABFFFF0008},
    {0xFE, 0x070707070707FD12},   // /T/ now in lane 1, lanes 2-7 idle

    /* trailing idles (unchanged count) */
    {0xFF, 0x0707070707070707},
    {0xFF, 0x0707070707070707}
};

inline std::vector<uint64_t> reverse_xgmii_data(const std::vector<Column>& cols)
{
    std::vector<uint64_t> out;
    out.reserve(cols.size());

    for (const Column& c : cols) {
        out.push_back(bswap64(c.dat));     // little → big
        
    }
    return out;
}

static void drive_idle(Vethernet_rx *dut, VerilatedFstC *tfp, int cycles = 1)
{
    for (int i = 0; i < cycles; ++i) {
        dut->xgmii_rxc = 0xFF;
        dut->xgmii_rxd = 0x0707'0707'0707'0707ULL;
        tick(dut, tfp);
        
    }
}

static std::vector<Column> generate_frame (bool lane4) {
    std::vector<Column> frame;
    Column segment;

    uint64_t start_data = 0;
    uint8_t start_control = 0x01;

    if (~lane4) {
        start_data |= uint64_t (0xFB) << 0;
        for (int i = 1; i < 7; i++) {
            start_data |= uint64_t (0x55) << (i * 8);
        }
        start_data |= uint64_t (0xD5) << 56;
        segment = {0x01, start_data};
        frame.push_back(segment);

        
        // bytes 0-7  :  FF FF FF CC BB AA  AA CC (AA CC is LSB)
        uint64_t mac_data = 0;
        mac_data |= uint64_t (0xFF) << 0;
        mac_data |= uint64_t (0xFF) << 8;
        mac_data |= uint64_t (0xFF) << 16;
        mac_data |= uint64_t (0xCC) << 24;
        mac_data |= uint64_t (0xBB) << 32;
        mac_data |= uint64_t (0xAA) << 40;

        //SRC_ADDR LSB
        mac_data |= uint64_t (0xAA) << 48;
        mac_data |= uint64_t (0xCC) << 56;


        segment = {0x00, mac_data};

        frame.push_back(segment);

        //Adding MAC SRC ADDR
        //     {0x00, 0xFFFF0008FFFFFFBB},
        //
        mac_data = 0;
        //Type of service (TOS)
        mac_data |= uint64_t (0x00) << 56;
        //Version + IHL
        mac_data |= uint64_t (0x45) << 48;
        mac_data |= uint64_t (0x00) << 40;
        mac_data |= uint64_t (0x08) << 32;
        mac_data |= uint64_t (0xFF) << 24;
        mac_data |= uint64_t (0xFF) << 16;

        //SRC_ADDR LSB
        mac_data |= uint64_t (0xFF) << 8;
        mac_data |= uint64_t (0xBB) << 0;

        segment = {0x00, mac_data};


        frame.push_back(segment);

        uint64_t IP_data = 0;
        //Total length
        IP_data |= uint64_t (0x00) << 0;
        IP_data |= uint64_t (0x2B) << 8;

        //Idenfication
        IP_data |= uint64_t (0x00) << 16;
        IP_data |= uint64_t (0x01) << 24;

        //Frag + fragment offset
        IP_data |= uint64_t (0x40) << 32;
        IP_data |= uint64_t (0x00) << 40;

        //Time to live
        IP_data |= uint64_t (0x40) << 48;
        //Protocol 06 is TCP
        IP_data |= uint64_t (0x06) << 56;

        segment = {0x00, IP_data};
        frame.push_back(segment);

        //Next segment
        IP_data = 0;
        //Checksum 2 B
        //Checksum 0x1A88
        IP_data |= uint64_t (0x1A) << 0;
        IP_data |= uint64_t (0x88) << 8;

        //Source addr
        IP_data |= uint64_t (0xFF) << 16;
        IP_data |= uint64_t (0xFF) << 24;
        IP_data |= uint64_t (0xFF) << 32;
        IP_data |= uint64_t (0xFF) << 40;

        //Dest addr MSB
        IP_data |= uint64_t (0xAA) << 48;
        IP_data |= uint64_t (0xAA) << 56;


        segment = {0x00, IP_data};

        frame.push_back(segment);

        //Next segment
        IP_data = 0;
        IP_data |= uint64_t (0xAA) << 0;
        IP_data |= uint64_t (0xAA) << 8;

        //CRC value 0x1C5D62B7
        //Type of service (TOS)
        //CRC holder
        IP_data |= uint64_t (0x1C) << 16;
        IP_data |= uint64_t (0x5D) << 24;
        IP_data |= uint64_t (0x62) << 32;
        IP_data |= uint64_t (0xB7) << 40;
        IP_data |= uint64_t (0xFD) << 48;
        IP_data |= uint64_t (0x07) << 56;
        segment = {0xC0, IP_data};

        frame.push_back(segment);







    //     static const std::vector<Column> GOOD_L0 = {
    //     {0xFF, 0x0707070707070707},          // idles
    //     {0xFF, 0x0707070707070707},          // idles
    //     {0xFF, 0x0707070707070707},          // idles
    //     {0x01, 0xD5555555555555FB},          // /S/ + 6×55 + D5

    //     // bytes 0-7  :  FF FF FF CC BB AA  AA CC
    //     {0x00, 0xCCAAAABBCCFFFFFF},

    //     // bytes 8-15 :  BB FF FF FF  08 00  00 00
    //     {0x00, 0xFFFF0008FFFFFFBB},

    //     // bytes 16-47: payload zeros (four full columns)
    //     {0x00, 0x0000000000000000},
    //     {0x00, 0x0000000000000000},
    //     {0x00, 0x0000000000000000},
    //     {0x00, 0x0000000000000000},

    //     // bytes 48-55: FCS (little-endian) + padding
    //     {0x00, 0x393176B800000000},
    //     {0x00, 0x0000000000000000},

    //     // bytes 56-59: remaining padding
    //     //CRC32 = 0x539B8212		
    //     {0x00, 0xFFFF0008FFFFFFBB},
    //     {0xE0, 0x0707FD12829B53AB},

    //     // trailing idles
    //     {0xFF, 0x0707070707070707},
    //     {0xFF, 0x0707070707070707}
    // };

        





    } 

    return frame;
    // else {

    // }

    

}

static void drive_col(Vethernet_rx *dut, VerilatedFstC *tfp, const Column &c)
{
    dut->xgmii_rxc = c.ctl;
    dut->xgmii_rxd = c.dat;
    tick(dut, tfp);
}

// ----------------------------------------------------------------------------
// Generic test runner
// ----------------------------------------------------------------------------
static bool run_frame(Vethernet_rx          *dut,
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
    
    return 0;
}

// ----------------------------------------------------------------------------
// Individual test-case wrappers (pure convenience)
// ----------------------------------------------------------------------------
static bool test_good_L0 (Vethernet_rx *dut, VerilatedFstC *tfp)
{ return run_frame(dut, tfp, GOOD_L0,  "GOOD_L0",  true,  false); }

static bool test_good_L4 (Vethernet_rx *dut, VerilatedFstC *tfp)
{ return run_frame(dut, tfp, GOOD_L4,  "GOOD_L4",  true,  false); }

static bool test_frame (Vethernet_rx * dut, VerilatedFstC *tfp, std::vector<Column> frame)
{ return run_frame(dut, tfp, frame, "frame generated", true, false);}

// static bool test_bad_crc (Vethernet_rx *dut, VerilatedFstC *tfp)
// { return run_frame(dut, tfp, BAD_CRC, "BAD_CRC", false, true ); }





int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vethernet_rx *top = new Vethernet_rx;

    Verilated::traceEverOn(true);
    VerilatedFstC *tfp = new VerilatedFstC;
    top->trace(tfp, 99);
    tfp->open("ethernet_rx.vcd");
    top -> nRST = 0;
    drive_idle (top, tfp, 2);
    top -> nRST = 1;

    auto frame_generated = generate_frame (false);

    // Reset phase
    reset_module(top, tfp);
    tick(top, tfp);
    tick(top, tfp);
    test_frame (top, tfp, frame_generated);
    //test_good_L0(top, tfp);
    //test_good_L4(top, tfp);


    tick(top, tfp);
    tick(top, tfp);
    tick(top, tfp);
    tick(top, tfp);
    tick(top, tfp);
    tick(top, tfp);
    tick(top, tfp);
    tick(top, tfp);

    auto reversed = reverse_xgmii_data(frame_generated);
    std::cout << std::uppercase << std::hex << std::setfill('0');
    for (uint64_t w : reversed) {
        // std::cout << "0x" << std::setw(16) << w << '\n';
        printf("0x%lX\n", w);
    }

    std::cout << "-------------------------" << std::endl;

    for (Column w : frame_generated) {
        // std::cout << "0x" << std::setw(16) << w.dat << '\n';
        printf("0x%lX\n", w.dat);
        //printf("0x%X\n", w.ctl);
    }

    

    tfp->close();
    delete top;
    delete tfp;
    std::cout << "Simulation finished." << std::endl;
    return 0;
}