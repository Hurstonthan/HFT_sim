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
    logic [2:0] dup_chk;
    logic [31:0] ACK_num;
} ack_num_frame;

typedef struct packed {
    //logic out_order_flag;
    logic valid;
    logic [63:0] payload;
} TCP_FIFO_t;


typedef enum logic [1:0] {
    IDLE    = 2'b00,
    DONE = 2'b01,
    FLUSH   = 2'b10,
    DATA    = 2'b11
} nw_segment_t;

//TCP_CONTROL frame
typedef struct packed {
    logic CWR;
    logic ECE;
    logic URG;
    logic ACK;
    logic PSH;
    logic RST;
    logic SYN;
    logic FIN;
    
} TCP_control_t;


//Adding something to handle the out of order packets
// typedef struct packed {
//     logic [31:0] seq_num;
//     logic [15:0] seq_length;
//     logic [15:0] rd_ptr;
//     logic [15:0] length_ptr;
//     logic v;
// } TCP_order_t;

// logic [$clog2(N)-1:0] free_idx, match_idx;;
// logic [31:0] [N - 1: 0] seq_vec;



endpackage

`endif