`ifndef RECIEVER_PKG_VH
`define RECIEVER_PKG_VH
// data input are MSB first, so we need to reverse the order of the bits
package receiver_pkg;
    parameter TOTAL_SIZE = 256; // total size of the packet in bits
    parameter DATA_SIZE = 64;
    parameter BYTE_NUMBER = 8; // = 64/8
    parameter COUNT = TOTAL_SIZE / DATA_SIZE; // number of data words in the packet
    typedef logic [COUNT-1:0] count_t;

    parameter VLAN_TAG_SIZE = 1; // clengthheck what is VLAN tag size
    parameter TPIC = 16'h8100; // VLAN tag type, 16'h8100 for IEEE 802.1Q
    parameter VLAN_ID = 12'h000; // VLAN ID, 12'h000 for no VLAN

    //todo determine the correct values for FPGA_MAC and NASDAQ_MAC
    //MAC layer parameters
    parameter FPGA_MAC = ; // the correct mac destination address - 6 byte
    parameter NASDAQ_MAC = ; // the correct mac source address - 6 byte
    parameter IP_TYPE = 16'h0800; // IP protocol number 16'h0800

    //IP layer parameters
    parameter IP_VERSION = 4'h4; // IPv4 version
    parameter IP_HEADER_LENGTH = 4'h5; // IPv4 header length in 32-bit words
    parameter UDP_PROTOCOL = 8'h11; // UDP protocol number 
    parameter TCP_PROTOCOL = 8'h06; // TCP protocol number
    parameter IP_TTL = 8'h40; // Time to Live (TTL) value
    parameter FPGA_IP = ; // the correct ip destination address - 4 byte
    parameter NASDAQ_IP = ; // the correct ip source address - 4 byte

    //UDP layer parameters

    // FSM states
    typedef enum logic [2:0] { 
        IDLE,
        HEADER,
        VLAN, //process the VLAN tag
        PAYLOAD,
        ERROR
     } mac_state_t;

    typedef enum logic[1:0] {
        IDLE, //waiting for the data
        HEADER, //processing the header
        PAYLOAD, //processing the payload
        ERROR //error state
    } state_t;
endpackage
