`ifndef RECIEVER_PKG_VH
`define RECIEVER_PKG_VH
package reciever_pkg;
    parameter DATA_SIZE = 16;
    parameter LENGTH = 2; // = 16/8
    parameter VLAN_TAG_SIZE = 1; // check what is VLAN tag size
    
    typedef enum logic[1:0] {
        IDLE, //waiting for the data
        HEADER, //processing the header
        PAYLOAD, //processing the payload
        ERROR //error state
    } state_t;
endpackage
