
#include "Vtop.h"
#include "verilated.h"
#include "verilated_fst_c.h"
#include "top_input.hpp"
#include <cstdint>
#include <iostream>
#include <vector>
#include <tuple>
static vluint64_t main_time = 0;
uint32_t ACK_curr;
int TX_data = 0;
// uint16_t IP_pseuder = 0x1234;
double sc_time_stamp() { return main_time; }
struct IP_rx_in {
    const char              *name;
    uint64_t    payload;
};

struct IP_addr {
    uint32_t src_ip;
    uint32_t dest_ip;
    
};

struct IP_payload_t {
    uint8_t bytes_len;
    uint64_t payload;
};



Vtop *top = new Vtop;
VerilatedFstC *tfp = new VerilatedFstC;

IP_rx_in in1;
IP_rx_in in2;
IP_rx_in in3;

std::vector<IP_payload_t> testcase1 {
    {8, 0x1111222233334444},
    {8, 0xDEADAAAABCBC5555},
    {8, 0xA5A5A5A5A55AA55A},
    
};

std::vector<IP_payload_t> testcase2 {
    {8, 0x4444333322221111},
    {8, 0xCAFECAFECAFECAFE}
};

std::vector<IP_payload_t> zero_case{
    {0, 0x00}
};

IP_addr IP_pseudo = {
    0xAAAABBBB,
    0xCCCCDDDD
};



static void tick(Vtop *top, VerilatedFstC *tfp) {
    top->CLK = 1;
    top->eval(); 
    tfp->dump(main_time++);          
       
    top->CLK = 0;          
    top->eval();
    tfp->dump(main_time++);
}


uint16_t getting_tcp_len (
    const std::vector<IP_payload_t>& payload
) {
    uint16_t tcp_len = 0;
    for (const auto& w: payload) {
        tcp_len += w.bytes_len;
    }
    return tcp_len;
}


uint16_t calc_tcp_checksum(const IP_addr& ip,
                           const std::vector<IP_rx_in>& hdr64,
                           const std::vector<IP_payload_t>& payload,
                           uint16_t tcp_len_cal)
{
    uint32_t sum = 0;
    // const uint16_t tcp_len = static_cast<uint16_t>(getting_tcp_len(payload));
    int trk = 0;

    auto add16 = [&](uint16_t w)
    {
        //printf("Checksum in ----- %X\n", w);
        sum += w;
        while (sum >> 16)                  // fold any carry immediately
            sum = (sum & 0xFFFF) + (sum >> 16);
        
    };

    /* ───── 1. pseudo-header ───── */
    add16(static_cast<uint16_t>((ip.src_ip >>16) & 0xFFFF));   // high 16
    add16(static_cast<uint16_t>( ip.src_ip        & 0xFFFF));  // low 16
    add16(static_cast<uint16_t>((ip.dest_ip>>16) & 0xFFFF));
    add16(static_cast<uint16_t>( ip.dest_ip       & 0xFFFF));
    add16(0x0006);                         // protocol = TCP
    add16(20 + tcp_len_cal);                        // length (no htons)
    

    /* ───── 2. TCP header ───── */
    size_t word16_idx = 0;                 // counts 16-bit words
    for (const auto& w : hdr64)
    {
        uint64_t v = w.payload;
        uint16_t c3 = (v >> 48) & 0xFFFF;  // MS chunk
        uint16_t c2 = (v >> 32) & 0xFFFF;
        uint16_t c1 = (v >> 16) & 0xFFFF;
        uint16_t c0 =  v        & 0xFFFF;  // LS chunk

        // zero checksum field (word #8 for 20-B hdr, #10 for 24-B hdr)
        if (word16_idx     == 8 || word16_idx     == 10) c0 = 0;
        if (word16_idx + 1 == 8 || word16_idx + 1 == 10) c1 = 0;
        if (word16_idx + 2 == 8 || word16_idx + 2 == 10) c2 = 0;
        if (word16_idx + 3 == 8 || word16_idx + 3 == 10) c3 = 0;

        add16(c0); add16(c1); add16(c2); add16(c3);
        ++word16_idx;
    }

    

    if (tcp_len_cal != 0) {
        for (const auto& w : payload)
        {
            uint64_t v = w.payload;
            // printf("payload -------------> %lX\n", v);
            uint16_t c3 = (v >> 48) & 0xFFFF;  // MS chunk
            uint16_t c2 = (v >> 32) & 0xFFFF;
            uint16_t c1 = (v >> 16) & 0xFFFF;
            uint16_t c0 =  v        & 0xFFFF;  // LS chunk

            // // zero checksum field (word #8 for 20-B hdr, #10 for 24-B hdr)
            // if (word16_idx     == 8 || word16_idx     == 10) c0 = 0;
            // if (word16_idx + 1 == 8 || word16_idx + 1 == 10) c1 = 0;
            // if (word16_idx + 2 == 8 || word16_idx + 2 == 10) c2 = 0;
            // if (word16_idx + 3 == 8 || word16_idx + 3 == 10) c3 = 0;

            add16(c0); add16(c1); add16(c2); add16(c3);
            ++word16_idx;
        }
    }

    if (tcp_len_cal & 1) add16(0x0000);

    /* ───── 4. final one’s-complement ───── */
    while (sum >> 16)                      // just in case
        sum = (sum & 0xFFFF) + (sum >> 16);
    // printf("trk:  %d ------------- check sum: %X\n", trk++, static_cast<uint16_t>(~sum));
    return static_cast<uint16_t>(~sum);
}



std::vector<IP_rx_in> prepare_header (uint32_t seq_num_rx, uint32_t ACK_num_rx, uint8_t TCP_control_rx_arg, std::vector<IP_payload_t>& payload, uint16_t tcp_len) {
    uint16_t seq_num_MSB      = (seq_num_rx >> 16) & 0xFFFF;
    uint16_t seq_num_LSB      =  seq_num_rx        & 0xFFFF;
    uint16_t window_size_rx   = 0x1111;
    uint16_t checksum_rx      = 0x0000;
    uint16_t urgent_pointer_rx= 0x0000;
    uint8_t  TCP_control_rx   = TCP_control_rx_arg;

    
    
    std::vector<IP_rx_in> TCP_header;

    in1.name = "48-bit src/dst ports + MSB seq";
    in1.payload = (static_cast<uint64_t>(0x12345678ULL << 32) | (static_cast<uint64_t> (seq_num_MSB) << 16));

    in2.name = "64-bit LSB seq, ACK, hdrLen, ctrl";
    in2.payload = ((static_cast<uint64_t>(seq_num_LSB) << 48) | (static_cast<uint64_t>(ACK_num_rx) << 16)  | (static_cast<uint64_t>(0x50) << 8) | TCP_control_rx);
    
    in3.name = "64-bit window, checksum, urgPtr, padding";
    in3.payload = (static_cast<uint64_t>(window_size_rx)     << 48) |
                  (static_cast<uint64_t>(checksum_rx)        << 32) |
                  (static_cast<uint64_t>(urgent_pointer_rx)  << 16) |
                  (static_cast<uint64_t>(0x0000));
    //printf("%lX\n", in3.payload);
    
    TCP_header = {in1, in2, in3};

    checksum_rx = calc_tcp_checksum (IP_pseudo, TCP_header, payload, tcp_len);

    in3.payload = (static_cast<uint64_t>(window_size_rx)     << 48) |
                  (static_cast<uint64_t>(checksum_rx)        << 32) |
                  (static_cast<uint64_t>(urgent_pointer_rx)  << 16) |
                  (static_cast<uint64_t>(0x0000));

    printf("Seq num rx -----> %X\n", seq_num_rx);
    printf("ACK num rx -----> %X\n", ACK_num_rx);
    printf("TCP control rx -----> %X\n", TCP_control_rx);
    printf("Check sum rx -----> %X\n", checksum_rx);
    printf("\n------------------\n");
    
    TCP_header = {in1, in2, in3};
    return TCP_header;
}



uint16_t IP_pseuder_cal (IP_addr ip_pseudo, std::vector<IP_payload_t> payload, uint16_t tcp_len) {
    uint32_t sum = 0;
    // uint16_t tcp_len;
    // tcp_len = getting_tcp_len (payload) + 2;
    auto add16 = [&](uint16_t w)
    {
        // printf("Checksum in ----- %X\n", w);
        sum += w;
        while (sum >> 16)                  // fold any carry immediately
            sum = (sum & 0xFFFF) + (sum >> 16);
        
    };

    /* ───── 1. pseudo-header ───── */
    add16(static_cast<uint16_t>((ip_pseudo.src_ip >>16) & 0xFFFF));   // high 16
    add16(static_cast<uint16_t>( ip_pseudo.src_ip        & 0xFFFF));  // low 16
    add16(static_cast<uint16_t>((ip_pseudo.dest_ip>>16) & 0xFFFF));
    add16(static_cast<uint16_t>( ip_pseudo.dest_ip       & 0xFFFF));
    add16(0x0006);                         // protocol = TCP
    add16(20 + tcp_len);                        // length (no htons)
    return static_cast<uint16_t> (sum);

}

void rcv_IP (const std::vector<IP_rx_in>& IP_payloads, const std::vector<IP_payload_t>& payload, uint16_t TCP_len) {
    size_t len_pay;
    top -> IP_pseuder = IP_pseuder_cal(IP_pseudo, payload, TCP_len);
    //top -> TCP_len = getting_tcp_len (payload) + 2;
    top -> TCP_len = TCP_len;
    if (TCP_len == 0) len_pay = 0; else len_pay = payload.size();
    printf("len pay ----> %ld\n", len_pay);

    for (size_t i = 0; i < (IP_payloads.size() + len_pay); i++) {
        top -> IP_valid = 1;
        // if (i > IP_payloads.size()) {
        //     top -> IP_bytes_rcv = pay;
        // } else {
        //     top -> IP_bytes_rcv = 8;
        // }
        if (i < IP_payloads.size()) {
            top -> IP_payload = IP_payloads[i].payload;
            top -> IP_bytes_rcv = 8;
        } else {
            top -> IP_payload = payload[i - IP_payloads.size()].payload;
            top -> IP_bytes_rcv = payload[i - IP_payloads.size()].bytes_len;
        }
        
        //printf("Cycle %lu: name: %s IP_payload: %lX\n", i, IP_payloads[i].name, IP_payloads[i].payload);
        tick(top, tfp);
    }

    top -> IP_valid = 0;
    tick(top, tfp);
    tick(top, tfp);
    tick(top, tfp);
    tick(top, tfp);
}


//--------------------- FUNCTION for TX --------------------------//
void sending_TCP() {
    top -> TX_en = 1;
    tick(top, tfp);
    top -> TX_en = 0;
    tick(top, tfp);
    tick(top, tfp);
    tick(top, tfp);
    top -> TCP_send = 1;
    for (int i = 0; i < 25; i++) {
        if (top -> TCP_last == 1) {
            top -> TCP_send = 0;
        }
        tick(top, tfp);
    }
    top -> TX_en = 0;
    top -> TCP_send = 0;
    tick(top,tfp);
}
//--------------------- FUNCTION for FIFO_TX --------------------------//

void wr_FIFO_TX () {
    int32_t len_seq = 24;
    int i;
    top -> wr_FIFO_en = 1;
    top -> len_seq    = len_seq;

    for (i = 0; i < ((len_seq / 8) - 1); i++) {
        TX_data++;
        top -> soupbin_TCP_payload = TX_data;
        tick(top, tfp);
    }

    top -> soupbin_TCP_payload = ++TX_data;
    top -> axis_last = 1;
    tick(top, tfp);
    

    top -> wr_FIFO_en = 0;
    top -> axis_last = 0;
    tick(top, tfp);
    tick(top, tfp);
    tick(top, tfp);
    tick(top, tfp);
}


//-------------------------- FUNCTION for TCP_logic-------------------//

void setup_handshake() {
    /* --------------------- example header-building code ------------------- */
    const uint32_t ISN_seq_rx = 0xBBCCDADA;
    uint32_t seq_num_rx       = ISN_seq_rx;
    uint32_t ACK_num_rx       = 0x1234ABCD;

    uint16_t seq_num_MSB      = (seq_num_rx >> 16) & 0xFFFF;
    uint16_t seq_num_LSB      =  seq_num_rx        & 0xFFFF;
    uint16_t window_size_rx   = 0x1111;
    uint16_t checksum_rx      = 0x0000;
    uint16_t urgent_pointer_rx= 0x0000;
    uint16_t TCP_len = 0x0;
    uint8_t  TCP_control_rx   = 0x12;
    std::vector<IP_rx_in> TCP_header;


    
    top -> tb_count = 0;
    TCP_header = prepare_header (seq_num_rx, ACK_num_rx, TCP_control_rx, zero_case,0);
    sending_TCP();
    ACK_num_rx = (top -> seq_num);
    ACK_curr = ACK_num_rx;
    TCP_len = 0;
    TCP_header = prepare_header (seq_num_rx, ACK_num_rx, TCP_control_rx, zero_case,0);
    rcv_IP (TCP_header, zero_case, 0);
    tick(top, tfp);
    tick(top, tfp);
    sending_TCP();
    
    
    std::cout << "Hand shake setup done" << std::endl;

}

void rcv_inorder_data() {
    uint32_t seq_num_rx, ACK_num_rx;
    uint16_t seq_num_MSB, seq_num_LSB;
    uint16_t window_size_rx, checksum_rx, urgent_pointer_rx, TCP_len;
    uint8_t TCP_control_rx;
    std::vector<IP_rx_in> TCP_header;
    
    // First segment
    seq_num_rx       = top -> rcv_next;
    ACK_num_rx       = ACK_curr;
    seq_num_MSB      = (seq_num_rx >> 16) & 0xFFFF;
    seq_num_LSB      =  seq_num_rx        & 0xFFFF;
    window_size_rx   = 0x1111;
    checksum_rx      = 0x0000;
    urgent_pointer_rx= 0x0000;
    TCP_len = getting_tcp_len(testcase1) + 2;
    TCP_control_rx   = 0x10;
    

    TCP_header = prepare_header (seq_num_rx, ACK_num_rx, TCP_control_rx, testcase1,TCP_len);
    rcv_IP (TCP_header, testcase1, TCP_len);
    tick(top, tfp);
    tick(top, tfp);

    //Second segment
    seq_num_rx       = top -> rcv_next;
    ACK_num_rx       = ACK_curr;
    seq_num_MSB      = (seq_num_rx >> 16) & 0xFFFF;
    seq_num_LSB      =  seq_num_rx        & 0xFFFF;
    window_size_rx   = 0x1111;
    checksum_rx      = 0x0000;
    urgent_pointer_rx= 0x0000;
    TCP_len = getting_tcp_len(testcase2) + 2;
    TCP_control_rx   = 0x10;

    TCP_header = prepare_header (seq_num_rx, ACK_num_rx, TCP_control_rx, testcase2,TCP_len);
    rcv_IP (TCP_header, testcase2, TCP_len);
    tick(top, tfp);
    tick(top, tfp);
}

void rcv_update_ACKS_order_data() {
    uint32_t seq_num_rx, ACK_num_rx;
    uint16_t seq_num_MSB, seq_num_LSB;
    uint16_t window_size_rx, checksum_rx, urgent_pointer_rx, TCP_len;
    uint8_t TCP_control_rx;
    std::vector<IP_rx_in> TCP_header;
    
    // First segment
    seq_num_rx       = top -> rcv_next;
    ACK_num_rx       = (top -> seq_num) - 24;
    ACK_curr         = ACK_num_rx;
    seq_num_MSB      = (seq_num_rx >> 16) & 0xFFFF;
    seq_num_LSB      =  seq_num_rx        & 0xFFFF;
    window_size_rx   = 0x1111;
    checksum_rx      = 0x0000;
    urgent_pointer_rx= 0x0000;
    TCP_len = getting_tcp_len(testcase1) + 2;
    TCP_control_rx   = 0x10;
    

    TCP_header = prepare_header (seq_num_rx, ACK_num_rx, TCP_control_rx, testcase1,TCP_len);
    rcv_IP (TCP_header, testcase1, TCP_len);
    tick(top, tfp);
    tick(top, tfp);
    tick(top, tfp);
    tick(top, tfp);
    tick(top, tfp);
    tick(top, tfp);
    tick(top, tfp);
    tick(top, tfp);
}

void rcv_out_of_order_data() {
    uint32_t seq_num_rx, ACK_num_rx;
    uint16_t seq_num_MSB, seq_num_LSB;
    uint16_t window_size_rx, checksum_rx, urgent_pointer_rx, TCP_len;
    uint8_t TCP_control_rx;
    std::vector<IP_rx_in> TCP_header;
    
    // First segment
    seq_num_rx       = top -> rcv_next + 16 + 2; //The gap is 4 bytes
    ACK_num_rx       = ACK_curr;
    seq_num_MSB      = (seq_num_rx >> 16) & 0xFFFF;
    seq_num_LSB      =  seq_num_rx        & 0xFFFF;
    window_size_rx   = 0x1111;
    checksum_rx      = 0x0000;
    urgent_pointer_rx= 0x0000;
    TCP_len = getting_tcp_len(testcase2) + 2;
    TCP_control_rx   = 0x10;
    

    TCP_header = prepare_header (seq_num_rx, ACK_num_rx, TCP_control_rx, testcase2,TCP_len);
    rcv_IP (TCP_header, testcase2, TCP_len);
    tick(top, tfp);
    tick(top, tfp);
    tick(top, tfp);

    //Second segment in order
    seq_num_rx       = top -> rcv_next; //The gap is 4 bytes
    ACK_num_rx       = ACK_curr;
    seq_num_MSB      = (seq_num_rx >> 16) & 0xFFFF;
    seq_num_LSB      =  seq_num_rx        & 0xFFFF;
    window_size_rx   = 0x1111;
    checksum_rx      = 0x0000;
    urgent_pointer_rx= 0x0000;
    TCP_len = getting_tcp_len(testcase1) + 2;
    TCP_control_rx   = 0x10;
    

    TCP_header = prepare_header (seq_num_rx, ACK_num_rx, TCP_control_rx, testcase1,TCP_len);
    rcv_IP (TCP_header, testcase1, TCP_len);
    tick(top, tfp);
    tick(top, tfp);
    tick(top, tfp);
    
}





void rd_FIFO_rcv () {
    top -> axis_r_en = 1;
    for (int i = 0; i < 20; i++) {
        // if top -> axis_r_valid == 0)
        tick(top, tfp);
    }
    top -> axis_r_en = 0;
    tick(top, tfp);
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    
    Verilated::traceEverOn(true);
    
    top->trace(tfp, 99);
    tfp->open("top.vcd");

    
    // Reset phase
    top -> tb_count = -1;
    reset_input_top();
    tick(top, tfp);

    // Example stimulus
    drive_input_top(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    tick(top, tfp);
    tick(top, tfp);
    tick(top, tfp);
    tick(top, tfp);
    top -> nRST = 1;
    tick(top, tfp);
    tick(top, tfp);
    tick(top, tfp);
    tick(top, tfp);

    //Setting up handshake done
    setup_handshake();

    //Testing APP write into FIFO (Also testing the basesum of TCP) 
    top -> tb_count +=1;
    wr_FIFO_TX();
    top -> tb_count +=1;
    sending_TCP();
    tick(top, tfp);
    tick(top, tfp);
    tick(top, tfp);
    tick(top, tfp);

    //Testing in order rcv
    top -> tb_count += 1;
    rcv_inorder_data();
    top -> tb_count +=1;
    rd_FIFO_rcv();

    //Writing data
    top -> tb_count +=1;
    wr_FIFO_TX();
    top -> tb_count +=1;
    sending_TCP();

    //Receive ACKs to update which is work!!!
    top -> tb_count +=1;
    rcv_update_ACKS_order_data();
    top -> tb_count +=1;
    rd_FIFO_rcv();


    //Need to test out of order logics more
    top -> tb_count +=1;
    rcv_out_of_order_data();
    top -> tb_count +=1;
    rd_FIFO_rcv();

    //Fast transmission
    



    tfp->close();
    delete top;
    return 0;
}
