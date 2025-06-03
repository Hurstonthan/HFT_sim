#include "VIP_tx.h"
#include "verilated.h"
#include "verilated_fst_c.h"


//call the main time to track the the time simulation
static uint64_t main_time = 0;
//sc_time_stamp() is needed for the Verilator to trace timing
double sc_time_stamp() {return main_time;}

//The function of tick like CLK++, I believe so
void tick (VIP_tx* top, VerilatedFstC* tfp) {
    for (int k = 0; k < 2; k++) {
        top -> eval();
        tfp->dump(main_time);
        top -> CLK ^= 1;
        ++main_time;
    }
}

int main (int argc, char** argv) {
    //This is where you passed the arguments like --trace, --verilator+seed+1234, and so on
    Verilated::commandArgs(argc, argv);
    VIP_tx* top = new VIP_tx; //Instantiate the top module in the testbench

    //Setting up the trace for gtkwave
    Verilated::traceEverOn(true);
    VerilatedFstC* tfp = new VerilatedFstC;
    top -> trace(tfp, 99);
    tfp -> open ("./IP_tx.vcd");


    //Intialize the reset part
    top -> nRST = 0;
    top -> CLK = 1;
    top -> IP_send = 0;
    top -> TCP_transmit = 0;
    top -> TCP_len_data = 15;

    //Increment for 4 cycles
    for (int i = 0; i < 4; i++) {
        tick(top, tfp);
    }
    top -> nRST = 1;

    //Passing the IP_send variable as the array, I guessed....
    int len_data = 4;
    uint64_t data_vec[len_data] = {
        0xDA,
        0XFF,
        0xCC,
        0xBE
    };

    //Now passing the data and observe it
    top -> IP_send = 1;
    for (int p = 0; p < 10; p++) {
        tick(top, tfp);
        printf("Cyle %d -> IP_transmit = 0x%08X\n", p, top -> IP_transmit);
    }
    // for (int k = 0; k < len_data; k++) {
    //     top -> TCP
    // }


    //IDLE case
    top -> IP_send = 0;
    for (int p = 0; p < 4; p++) {
        tick(top, tfp);
    }

    tfp -> close();
    delete tfp;
    delete top;
    return 0;

}