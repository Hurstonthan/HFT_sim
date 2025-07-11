#include "Vethernet_mac_tx.h"
#include "verilated.h"
#include "verilated_fst_c.h"


static uint64_t main_time = 0;
double sc_time_stamp() { return main_time; }
int len_clk;

void tick (Vethernet_mac_tx* top, VerilatedFstC* tfp) {
    for (int k = 0; k < 2; k++) {
        top -> eval();
        tfp->dump(main_time);
        top -> CLK ^= 1;
        ++main_time;
    }
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vethernet_mac_tx* top = new Vethernet_mac_tx;

    Verilated::traceEverOn(true);
    VerilatedFstC* tfp = new VerilatedFstC;
    top->trace(tfp, 99);
    tfp->open("ethernet_mac_tx.vcd");

    // Reset
    top->nRST = 0;
    top->CLK = 0;
    top -> TX_en = 0;
    top -> IP_transmit = 0;
    top -> TCP_len_data_mc = 0;
    top -> bytes_sent_ip_mac = 0;
    
    for (int i = 0; i < 4; ++i) {
        top->eval();
        tfp->dump(main_time++);
        top->CLK ^= 1;
    }
    top->nRST = 1;

    // Simulate here
    // Simualte the total number of cycles that ensure Ethernet Header is correct
    top -> TX_en = 1;
    top -> IP_transmit = 1;
    top -> TCP_len_data_mc = 10; // Set to 0 for now
    top -> bytes_sent_ip_mac = 0;

    len_clk = 10;
    
    //This should indicate that the state of FSM should be in IP Payload and stop there due to TCP_len_data is 10
    for (int i = 0; i < 10; i++) {
        tick(top, tfp);
    }

    //Now setting bytes_sent_ip_mac to 10
    top -> bytes_sent_ip_mac = 10;
    for (int i = 0; i < 10; i++) {
        tick(top, tfp);
    }

    tfp->close();
    delete top;
    return 0;
}
