`ifndef ETHER_PKG_VH
`define ETHER_PKG_VH



package ether_pkg;


//Adding the type and package later
//sequence number store
typedef struct packed {
    logic valid;
    logic [31:0] seq_num;
} seq_num_frame;

//ACK number store
typedef struct packed {
    logic [1:0] dup_chk;
    logic [31:0] ACK_num;
} ack_num_frame;

typedef struct packed {
    logic valid;
    logic [63:0] payload;
} TCP_FIFO_t;

//TCP_CONTROL frame
typedef struct packed {
    logic CWR;
    logic ECE;
    logic URG;
    logic PSH;
    logic RST;
    logic FIN;
    logic SYN;
    logic ACK;
} TCP_control_t;
































//Adding something to handle the out of order packets
typedef struct packed {
    logic [31:0] seq_num;
    logic [31:0] length;
    logic v;
} TCP_out_order_t;

// logic [$clog2(N)-1:0] free_idx, match_idx;;
// logic [31:0] [N - 1: 0] seq_vec;



endpackage

`endif
