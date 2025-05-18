`timescale 1ps/1ps

module ethernet_mac_tx #(
    parameter WORD_WIDTH = 64,
    parameter CTRL_WIDTH = 8,
    parameter MAC_SRC_ADDR = 48'h FF_FF_FF_FF_FF,
    parameter MAC_DEST_ADDR = 48'h FF_FF_FF_FF_FF,
    parameter ETHERType = 16'h0800
) (
    input wire CLK,
    input wire nRST,
    input logic rcv_mac_addr,
    input logic [47:0] dst_mac_addr,

    output logic arp_req,
    output wire [CTRL_WIDTH - 1:0] xgmii_txd,
    output wire [WORD_WIDTH - 1:0] xgmii_txc,

    
    input logic [WORD_WIDTH - 1:0] IP_transmitt, //Interface btw Ethernet MAC and IP
    input logic [WORD_WIDTH - 1:0] TCP_transmitt, //Interface btw Ethernet MAC and TCP

    
);


    assign xgmii_txd = xgmii_txd_l;
    assign xgmii_txc = xgmii_txc_l;
    

    typedef enum logic [6:0] {
        IDLE,
        SEND_PREAMBLE_SFD,
        SEND_ETHER_HEAD1
        SEND_ETHER_HEAD2,
        SEND_IP_HEADER,
        SEND_IP_TCP_HEADER    
    } ether_state_t;

    logic [WORD_WIDTH - 1 : 0] xgmii_txd_l, nxgmii_txd_l;
    logic [CTRL_WIDTH - 1 : 0] xgmii_txc_l, nxgmii_txc_l;
    ether_state_t state, nstate;

    

    always_ff @(posedge CLK, negedge nRST) begin
        if (!nRST) begin
            state <= IDLE;
            xgmii_txd_l <= 64'h07070707_07070707;
            xgmii_txc_l <= '1;
        end else begin
            state <= nstate;
            xgmii_txd_l <= nxgmii_txd_l;
            xgmii_txc_l <= nxgmii_txc_l;
            
        end
    end


    always_comb begin
        nxgmii_txd_l = xgmii_txd_l;
        nxgmii_txc_l = xgmii_txc_l;
        arp_req = 1'b0;

        case (state)
            IDLE: begin
                nxgmii_txd_l = 64'h07070707_07070707;
                nxgmii_txc_l = '1;
            end

            SEND_PREAMBLE_SFD: begin
                // Logic to send preamble and SFD
                nxgmii_txd_l = {56'h55555555555555, 8'hFB}; //Preamble and SFD 
                nxgmii_txc_l = 8'b000_0001;
            end

            SEND_ETHER_HEAD1: begin
                // Logic to send destination and source MAC addresses
                nxgmii_txc_l =  '0;
                if (rcv_mac_addr) begin
                    nxgmii_txd_l = {dst_mac_addr,MAC_SRC_ADDR[47:32]};
                end else begin
                    nxgmii_txd_l = {MAC_DEST_ADDR,MAC_SRC_ADDR[47:32]}; //ARP protocol
                    arp_req = 1'b1;
                end
                
            end

            SEND_ETHER_HEAD2: begin
                // Logic to send Ether type header
                //Sending the MAC source address, Ethernet type, IPv4 header, MSB of length
                //MAC_SRC_ADDR[31:0] 4 bytes,
                //Ethertype 2 bytes,
                //IPv4 header 1 byte,
                //length MSB 1 byte
                nxgmii_txd_l = {MAC_SRC_ADDR[31:0], ETHERType, IPv4_ver, length_MSB}; //16bits remaining
                nxgmii_txc_l =  '0;
            end

            SEND_IP_HEADER: begin
                // Logic to send IP header
                //length_MSB 1 byte, 
                //IP_iden 2 bytes, 
                //IP_flags 1 byte, 
                //IP_offset 1 byte, 
                //IP_TLL 1 byte, 
                //IP protocol 1 byte, 
                //IP checksum MSB 1 byte -> 8 bytes
                nxgmii_txd_l = {length_LSB, IP_iden, IP_flags, IP_offset, IP_TLL, IP_protocol, IP_chksm_MSB};
                nxgmii_txc_l =  '0;
            end

            SEND_IP_TCP_HEADER: begin
                // Logic to send IP and TCP header
                //IP chksm LSB 1 byte,
                //source IP 4 bytes,
                //dest IP MSB 3 bytes
                nxgmii_txd_l = {IP_chksm_LSB, source_IP, dest_IP[31:8]};
                nxgmii_txc_l =  '0;
            end

            SEND_IP_TCP_HEADER2: begin

                // Logic to send TCP header
                //dest IP LSB 1 byte,
                //TCP src port 2 bytes,
                //TCP dest port 2 bytes,
                //TCP seq num 3 bytes
                nxgmii_txd_l = {dest_IP[7:0], TCP_src_port, TCP_dest_port, TCP_seq_num[31:8]};
                nxgmii_txc_l =  '0;
            end

            SEND_TCP_HEADER3: begin
                //TCP seq num LSB 1 byte,
                //TCP ack num 4 bytes,
                //TCP offset 1 byte,
                //TCP flags 1 byte,
                //TCP window size MSB 1 bytes
                nxgmii_txd_l = {TCP_seq_num[7:0], TCP_ack_num, TCP_offset, TCP_flags, TCP_window_size[15:8]};
                nxgmii_txc_l =  '0;
            end

            SEND_TCP_HEADER4_PAYLOAD1: begin
                //TCP window size LSB 1 byte,
                //TCP checksum 2 bytes,
                //TCP urgent pointer 2 byte,
                //TCP options 0 bytes
                //TCP payload_part1 3 bytes

                //Total sizeof TCP header is 20 bytes
                //TCP_offset is 0x50
               
                nxgmii_txd_l = {TCP_window_size[7:0], TCP_checksum, TCP_urgent_pointer, 24'h0};
                nxgmii_txc_l =  '0;
            end

            SEND_TCP_PAYLOAD: begin


            end

            SEND_FCS_TERMINATE: begin
                // Logic to send FCS and terminate
                nxgmii_txd_l = 64'h00_00_00_00_00_00_00_FD; // FCS and 0xFD
                nxgmii_txc_l = 8'b0000_0001; // all control
            end


            //Continue work implementing IDLE codes 0x07 for at least 12 bytes -> 96 bits
            // Should be first send 64'h 0707070707070707
            // Then send txc: 8'b0000_0001
            // Then second send 64'h of 0x07 and then going back to IDLE 

            

            default: begin
                nxgmii_txd_l = 0;
                nxgmii_rxd_l = 0;
                nxgmii_txc_l = 0;
                nxgmii_rxc_l = 0;
            end
        endcase

    end

endmodule