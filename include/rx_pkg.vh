`ifndef RX_PKG_VH
`define RX_PKG_VH
// data input are MSB first, so we need to reverse the order of the bits
package rx_pkg;
    parameter TOTAL_SIZE = 256; // total size of the packet in bits
    parameter DATA_SIZE = 64;
    parameter BYTE_NUMBER = 8; // = 64/8
    parameter COUNT = TOTAL_SIZE / DATA_SIZE; // number of data words in the packet
    typedef logic [COUNT-1:0] count_t;

    parameter VLAN_TAG_SIZE = 1; // clengthheck what is VLAN tag size
    parameter TPIC = 16'h8100; // VLAN tag type, 16'h8100 for IEEE 802.1Q
    parameter VLAN_ID = 12'h000; // VLAN ID, 12'h000 for no VLAN

    //todo determine the correct values for FPGA_MAC and NASDAQ_MAC
    //change sample to the correct numbers
    //MAC layer parameters
    parameter FPGA_MAC = 48'h123456; // the correct mac destination address - 6 byte
    parameter NASDAQ_MAC = 48'h65431; // the correct mac source address - 6 byte
    parameter IP_TYPE = 16'h0800; // IP protocol number 16'h0800

    //IP layer parameters
    parameter IP_VERSION = 4'h4; // IPv4 version
    parameter IP_HDL = 4'h5; // IPv4 header length in 32-bit words
    parameter UDP_PROTOCOL = 8'h11; 
    parameter TCP_PROTOCOL = 8'h06; 
    parameter IP_TTL = 8'h40; 
    parameter IP_SRC_ADDR = 32'hFFFF_FFFF_FFFF_FFFFF; // cans be changed 
    parameter IP_DEST_ADDR = 32'hFFFF_FFFF_FFFF_FFFFF; 

    //UDP layer parameters
    parameter UDP_SRC_ADDR = 16'h1234; 
    parameter UDP_DEST_ADDR = 16'h4321; 
    parameter UDP_HEADER_LENGTH = 16'h08;
    parameter UDP_CHECKSUM = 16'h0000; // UDP checksum, 16'h0000 for no checksum
    
    typedef enum logic [2:0] { 
        IDLE,
        RCV_VER_IHL_DSCP_ECN, // 4b + 4b + 6b + 2b 
        RCV_LENGTH_IDEN_FLAGS_FRGOFF_TLL_PROTOCOL, //2B + 2B + 2B + 2B
        RCV_SUM_SRC_ADDR_DEST_ADDR, //2B + 4B + 2B
        RCV_PAYLOAD_DEST, //Remember need to check 2B left of dest addr
        CHK_SUM,
        RCV_PAYLOAD,
        ERROR
    } IP_t;

    typedef enum logic [2:0] { 
        UDP_IDLE,
        UDP_SRC_ADDR_DEST_ADDR_LENGTH, //IP dest + 2B + 2B + 2B 
        UDP_CHK_SUM_PAYLOAD, //checksum + 2B
        UDP_PAYLOAD,
        UDP_CHK_SUM, //optional
        UDP_ERROR
    } UDP_t;
     

endpackage

`endif 