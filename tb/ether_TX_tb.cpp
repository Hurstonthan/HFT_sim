#include "Vether_TX.h"
#include "verilated.h"
#include "verilated_fst_c.h"


static uint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

void tick (Vether_TX* top, VerilatedFstC* tfp) {
    for (int k = 0; k < 2; k++) {
        top -> eval();
        tfp->dump(main_time);
        top -> CLK ^= 1;
        ++main_time;
    }
}


//Creating the classes that toggle the RX driver
class RXDriver {
    //Creating the private variables of the DUT
    private:
        Vether_TX* dut_;
        VerilatedFstC* tfp_;
        uint32_t ISN_num_tx = 456789; // Initial Sequence Number
        uint32_t ISN_num_rx = 123456; // Initial Sequence Number for RX
        uint32_t bytes_abt_sent = 5; // Bytes about to be sent
        uint32_t bytes_sent = 0; // Bytes sent
        uint32_t payload_len_rx = 32; // Payload length for RX, set to 32 bytes

        //Seq_num update for RX
        uint32_t rcv_nxt = ISN_num_rx; // Sequence number for RX, initialized to ISN_num_rx

        //Seq_num update for TX
        uint32_t seq_count_tx = 0; // Sequence number for TX, initialized to ISN_num_tx
        uint32_t ACK_trk = 0;

    public:
        explicit RXDriver(Vether_TX* dut, VerilatedFstC* tfp) : dut_(dut), tfp_(tfp) {}

        ~RXDriver() = default;

        void drive_input_rx(
            bool rcv_data,
            bool timeout_flag,
            uint8_t TCP_control_rx,
            uint32_t seq_num_rx,
            uint32_t ACK_rx,
            uint8_t offset_rx,
            uint16_t window_size_rx,
            uint16_t checksum_rx,
            uint16_t urgent_pointer_rx,
            uint32_t payload_len_rx
        ) {
            dut_-> rcv_data = rcv_data;
            dut_->timeout_flag = timeout_flag;
            dut_->TCP_control_rx = TCP_control_rx;
            dut_->seq_num_rx = seq_num_rx;
            dut_->ACK_rx = ACK_rx;
            dut_->offset_rx = offset_rx;
            dut_->window_size_rx = window_size_rx;
            dut_->checksum_rx = checksum_rx;
            dut_->urgent_pointer_rx = urgent_pointer_rx;
            dut_->payload_len_rx = payload_len_rx;

            //Toggle the clock and dump the trace
            tick(dut_, tfp_);
        }
        
        void reset () {
            dut_->nRST = 0; // Reset the RX interface
            dut_->CLK = 0; // Set clock to low
            dut_->rcv_data = 0; // Reset received data
            dut_->timeout_flag = 0; // Reset timeout flag
            dut_->TCP_control_rx = 0; // Reset TCP control flags
            dut_->seq_num_rx = ISN_num_rx; // Set initial sequence number for RX
            dut_->ACK_rx = 0; // Reset ACK number
            dut_->offset_rx = 0; // Reset offset
            dut_->window_size_rx = 64; // Reset window size setting that we will only receive 32 bytes
            dut_->checksum_rx = 0; // Reset checksum
            dut_->urgent_pointer_rx = 0; // Reset urgent pointer
            dut_->payload_len_rx = payload_len_rx; // Reset payload length

            dut_ -> SYN_sent = 0; // Reset SYN sent flag
            dut_ -> FIN_sent = 0; // Reset FIN sent flag
            dut_ -> ACK_sent = 0; // Reset ACK sent flag
            dut_ -> end_ss = 0; // Reset end of session flag
            dut_ -> ISN_num = ISN_num_tx; // Reset Initial Sequence Number for TX
            dut_ -> bytes_sent = 0; // Reset bytes sent
            dut_ -> bytes_abt_sent = bytes_abt_sent; // Reset bytes about to be sent

            for (int i = 0; i < 5; ++i) {
                dut_ -> eval();
                tfp_ -> dump(main_time++);
                dut_ -> CLK ^= 1;
            }
            dut_->nRST = 1;
        }
    //Creating the classes that toggle the TX driver
        void drive_input_tx (
            bool SYN_sent,
            bool FIN_sent,
            bool ACK_sent,
            bool end_ss,
            uint32_t ISN_num,
            uint32_t bytes_sent,
            uint32_t bytes_abt_sent,
            bool seq_up
        ) {
            dut_->SYN_sent = SYN_sent;
            dut_->FIN_sent = FIN_sent;
            dut_->ACK_sent = ACK_sent;
            dut_->end_ss = end_ss;
            dut_->ISN_num = ISN_num;
            dut_->bytes_sent = bytes_sent;
            dut_->bytes_abt_sent = bytes_abt_sent;
            dut_->seq_up = seq_up;

            //Toggle the clock and dump the trace
            tick(dut_, tfp_);
        }

        void stop_tx() {
            dut_ -> SYN_sent = 0; // Reset SYN sent flag
            dut_ -> FIN_sent = 0; // Reset FIN sent flag
            dut_ -> ACK_sent = 0; // Reset ACK sent flag
            dut_ -> end_ss = 0; // Reset end of session flag
            dut_ -> seq_up = false; // Reset sequence update flag
            tick(dut_, tfp_); // Toggle the clock and dump the trace
            
        }

        void update_seq () {
            dut_ -> seq_up = true;
            tick(dut_, tfp_); // Toggle the clock and dump the trace
            dut_ -> seq_up = false; // Reset sequencxq12k   a=-\.e number for RX
        }

        void stop_rx() {
            dut_ -> rcv_data = false; // Reset received data
            tick(dut_, tfp_); // Toggle the clock and dump the trace
        }

        void send_type_pkg (const std::string& type) {
            if (type == "SYN") {
                bytes_sent += 1; // Reset bytes sent for SYN packet
                drive_input_tx (
                    true, // SYN_sent
                    false, // FIN_sent
                    false, // ACK_sent
                    false, // end_ss
                    ISN_num_tx, // ISN_num
                    bytes_sent, // bytes_sent
                    bytes_abt_sent, // bytes_abt_sent
                    false // seq_up
                );
                
                seq_count_tx += 1; // Update sequence number for TX
                
            } else if (type == "FIN") {
                dut_->SYN_sent = 0;
                dut_->FIN_sent = 1;
                dut_->ACK_sent = 0;
                tick(dut_, tfp_);
                seq_count_tx += 1; // Update sequence number for TX
            } else if (type == "ACK") {
                drive_input_tx (
                    false, // SYN_sent
                    false, // FIN_sent
                    true, // ACK_sent
                    false, // end_ss
                    ISN_num_tx, // ISN_num
                    bytes_sent, // bytes_sent
                    bytes_abt_sent, // bytes_abt_sent
                    false // seq_up
                );

                bytes_sent += bytes_abt_sent; // Update bytes sent
                seq_count_tx += bytes_abt_sent; // Update sequence number for TX
                printf("ACK sent, bytes_sent: %u\n", bytes_sent);
                if (seq_count_tx != dut_->seq_num_rx) {
                    // Handle sequence number mismatch
                    bytes_sent -= bytes_abt_sent; // Rollback bytes sent
                
                } else {
                    seq_count_tx += bytes_abt_sent; // Update sequence number for TX
                }
                
            } else if (type == "SYN_ACK") {
                bytes_sent += 1; // Update bytes sent
                printf("SYN_ACK sent, bytes_sent: %u\n", bytes_sent);
                drive_input_tx (
                    false, // SYN_sent
                    false, // FIN_sent
                    true, // ACK_sent
                    false, // end_ss
                    ISN_num_tx, // ISN_num
                    bytes_sent, // bytes_sent
                    bytes_abt_sent, // bytes_abt_sent
                    false // seq_up
                );
                
                
            } else if (type == "DATA") {
                drive_input_tx (
                    false, // SYN_sent
                    false, // FIN_sent
                    false, // ACK_sent
                    false, // end_ss
                    ISN_num_tx, // ISN_num
                    bytes_sent, // bytes_sent
                    bytes_abt_sent, // bytes_abt_sent
                    false // seq_up
                );

                bytes_sent += bytes_abt_sent; // Update bytes sent
                seq_count_tx += bytes_abt_sent; // Update sequence number for TX

                // if (seq_count_tx != dut_->seq_num_tx) {
                //     // Handle sequence number mismatch
                //     bytes_sent -= bytes_abt_sent; // Rollback bytes sent
                // } else {
                //     seq_count_tx += bytes_abt_sent; // Update sequence number for TX
                // }
                
  
            } 
            else {
                // Handle unknown type
                
            }

        }

        void rcv_data_pkg (bool loss, const std::string& type) {
            if (loss) {
                drive_input_rx (
                    true, // rcv_data
                    false, // timeout_flag
                    0b000010, // TCP_control_rx (ACK)
                    rcv_nxt + 16, // seq_num_rx
                    seq_count_tx, // ACK_rx
                    5, // offset_rx (5 * 4 = 20 bytes)
                    32, // window_size_rx
                    0, // checksum_rx
                    0, // urgent_pointer_rx
                    payload_len_rx // payload_len_rx
                );

            } else {
                if (type == "SYN") {
                    drive_input_rx (
                        true, // rcv_data
                        false, // timeout_flag
                        0b000011, // TCP_control_rx (SYN)
                        rcv_nxt, // seq_num_rx
                        seq_count_tx, // ACK_rx
                        5, // offset_rx (5 * 4 = 20 bytes)
                        32, // window_size_rx
                        0, // checksum_rx
                        0, // urgent_pointer_rx
                        payload_len_rx // payload_len_rx
                    );

                    // drive_input_rx (
                    //     true, // rcv_data
                    //     false, // timeout_flag
                    //     0b000011, // TCP_control_rx (SYN)
                    //     0, // seq_num_rx
                    //     0, // ACK_rx
                    //     5, // offset_rx (5 * 4 = 20 bytes)
                    //     32, // window_size_rx
                    //     0, // checksum_rx
                    //     0, // urgent_pointer_rx
                    //     payload_len_rx // payload_len_rx
                    // );

                    rcv_nxt += 1; // Update the sequence number for RX


                } else if (type == "FIN") {
                    drive_input_rx (
                        true, // rcv_data
                        false, // timeout_flag
                        0b000100, // TCP_control_rx (FIN)
                        rcv_nxt, // seq_num_rx
                        seq_count_tx, // ACK_rx
                        5, // offset_rx (5 * 4 = 20 bytes)
                        32, // window_size_rx
                        0, // checksum_rx
                        0, // urgent_pointer_rx
                        payload_len_rx // payload_len_rx
                    );

                    rcv_nxt += 1; // Update the sequence number for RX


                } else if (type == "ACK") {
                    drive_input_rx (
                        true, // rcv_data
                        false, // timeout_flag
                        0b000010, // TCP_control_rx (ACK)
                        rcv_nxt, // seq_num_rx (simulate ACK for SYN)
                        seq_count_tx, // ACK_rx (simulate ACK for SYN)
                        5, // offset_rx (5 * 4 = 20 bytes)
                        32, // window_size_rx
                        0, // checksum_rx
                        0, // urgent_pointer_rx
                        payload_len_rx // payload_len_rx
                    );

                    rcv_nxt += payload_len_rx; // Update the sequence number for RX


                } else if (type == "DATA") {
                    drive_input_rx (
                        true, // rcv_data
                        false, // timeout_flag
                        0b000010, // TCP_control_rx (ACK)
                        rcv_nxt, // seq_num_rx
                        seq_count_tx, // ACK_rx
                        5, // offset_rx (5 * 4 = 20 bytes)
                        32, // window_size_rx
                        0, // checksum_rx
                        0, // urgent_pointer_rx
                        payload_len_rx // payload_len_rx
                    );

                    rcv_nxt += payload_len_rx; // Update the sequence number for RX


            }
        }
        stop_rx(); // Stop the RX interface after receiving the packet

    }
};

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vether_TX* top = new Vether_TX;

    Verilated::traceEverOn(true);
    VerilatedFstC* tfp = new VerilatedFstC;
    top->trace(tfp, 99);
    tfp->open("ether_TX.vcd");


    

    //Reset case for the rx interface
    // top-> nRST = 0;
    // top-> CLK = 0;
    
    // top-> rcv_data = 0;
    
    // for (int i = 0; i < 4; ++i) {
    //     top->eval();
    //     tfp->dump(main_time++);
    //     top->CLK ^= 1;
    // }
    // top->nRST = 1;

    // Simulate here
    RXDriver rx_driver(top, tfp);
    rx_driver.reset(); // Reset the RX interface
    tick(top, tfp); // Toggle the clock and dump the trace
    tick(top, tfp); // Toggle the clock and dump the trace

    // Simulate the TX transmission
    //Send the SYN packet first
    rx_driver.send_type_pkg("SYN");

    //Wait for the ACK SYN from RX
    rx_driver.rcv_data_pkg(false, "SYN");

    //tick(top, tfp); // Toggle the clock and dump the trace
    //tick(top, tfp); // Toggle the clock and dump the trace

    rx_driver.send_type_pkg("SYN_ACK");
    top -> ACK_sent = 0;
    // rx_driver.stop_tx(); // Stop the TX interface after sending SYN_ACK
    // tick(top, tfp); // Toggle the clock and dump the trace
    // tick(top, tfp); // Toggle the clock and dump the trace



    //Handshake complete, now send the data to check the sequence number
    rx_driver.send_type_pkg("DATA");
    rx_driver.update_seq();
    rx_driver.send_type_pkg("DATA");
    rx_driver.update_seq();
    rx_driver.send_type_pkg("DATA");
    rx_driver.update_seq();
    rx_driver.send_type_pkg("DATA");
    rx_driver.update_seq();
    rx_driver.send_type_pkg("DATA");
    rx_driver.update_seq();
    rx_driver.send_type_pkg("DATA");
    rx_driver.update_seq();
    rx_driver.send_type_pkg("DATA");
    tick(top, tfp); // Toggle the clock and dump the trace
    tick(top, tfp); // Toggle the clock and dump the trace
    rx_driver.rcv_data_pkg(false, "DATA"); // Simulate receiving data

    // printf("Check top -> bytes_sent: %u\n", top->bytes_sent);
    // tick(top, tfp); // Toggle the clock and dump the trace
    // rx_driver.send_type_pkg("DATA");
    // tick(top, tfp); // Toggle the clock and dump the trace

    tfp->close();
    delete top;
    return 0;
}
