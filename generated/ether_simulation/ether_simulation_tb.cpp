
#include "Vether_simulation.h"
#include "verilated.h"
#include "verilated_fst_c.h"
#include "ether_simulation_input.hpp"

static vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

static void tick(Vether_simulation *top, VerilatedFstC *tfp) {
    
    top->CLK = 1;
    top->eval(); 
    tfp->dump(main_time++);          
       
    top->CLK = 0;          
    top->eval();
    tfp->dump(main_time++);

}
//Setting up the handshake 

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vether_simulation *top = new Vether_simulation;

    Verilated::traceEverOn(true);
    VerilatedFstC *tfp = new VerilatedFstC;
    top->trace(tfp, 99);
    tfp->open("ether_simulation.vcd");

    // Reset phase
    reset_input_ether_simulation();
    tick(top, tfp);

    // Example stimulus
    drive_input_ether_simulation(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);

    top -> nRST= 1;
    top -> tb_count = 0xFF;
    tick(top, tfp);
    tick(top, tfp);

    //Part 1: Setting up the handshake
    // the client send SYN first
    top -> tb_count = 0;
    top -> TX_en_clt = 1;
    tick(top, tfp);
    top -> TX_en_clt = 0;
    while (!(top -> frame_end_clt)) {
        tick(top,tfp);
    }
    
    for (size_t i = 0; i < 10; i++) {
        tick(top,tfp);
    }



    tfp->close();
    delete top;
    return 0;
}
