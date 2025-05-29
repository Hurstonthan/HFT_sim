`ifndef ETHER_PKG_VH
`define ETHER_PKG_VH



package ether_pkg;


//Adding the type and package later
//sequence number store
typedef struct packed {
    logic valid,
    logic [31:0] seq_num
} seq_num_frame;

//ACK number store
typedef struct packed {
    logic [1:0] dup_chk,
    logic [31:0] ACK_num
} ack_num_frame;

//TCP_CONTROL frame
typedef struct packed {
    logic CWR,
    logic ECE,
    logic URG,
    logic ACK,
    logic PSH,
    logic RST,
    logic SYN,
    logic FIN
} TCP_control_t;

typedef struct packed {
    logic [31:0] seq_num,
    logic [31:0] length
} TCP_out_order_t;


endpackage

`endif