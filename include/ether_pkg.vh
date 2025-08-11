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

//Variables for timewait flags
parameter int CLK_HZ = 156000000;
parameter int SEC = 60;
parameter int TIMEWAIT_SEC = 2 * SEC;
//parameter int TIMEWAIT_TICK = CLK_HZ * TIMEWAIT_SEC;
parameter int TIMEWAIT_TICK = 300;


parameter int TIMEWAIT_SIZE = $clog2(TIMEWAIT_TICK + 1);



endpackage

`endif