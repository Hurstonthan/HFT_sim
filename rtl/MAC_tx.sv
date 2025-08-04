`timescale 1ns/1ps

module MAC_tx #(
    parameter WORD_WIDTH = 64,
    parameter CTRL_WIDTH = 8,
    parameter MAC_SRC_ADDR  = 48'h FFFF_FFCC_BBAA,
    parameter MAC_DEST_ADDR = 48'h AACC_BBFF_FFFF,
    parameter ETHER_TYPE         = 16'h0800   // IPv4 EtherType
) (
    input wire CLK,
    input wire nRST,

    input logic TX_en,

    output wire [WORD_WIDTH - 1:0] xgmii_txd,
    output wire [CTRL_WIDTH - 1:0] xgmii_txc,

    //Interface btw Ethernet MAC and IP
    input logic [WORD_WIDTH - 1:0] IP_transmit, 
    input logic [15:0] tt_len_data,
    input logic IP_last,
    output logic IP_send
);


    typedef enum logic [6:0] {
        IDLE,
        SEND_PREAMBLE_SFD,
        SEND_ETHER_HEAD1,
        SEND_ETHER_HEAD2,
        SEND_IP_HEADER_PAYLOAD,
        SEND_FCS_TERMINATE,
        SEND_ZERO_PADDING,
        SEND_IDLE_END1    
    } ether_state_t;

    logic [WORD_WIDTH - 1 : 0] xgmii_txd_l, nxgmii_txd_l;
    logic [CTRL_WIDTH - 1 : 0] xgmii_txc_l, nxgmii_txc_l;
    logic IP_send_l; //Signals indicating IP module and TCP need to send the 64 bits data
    ether_state_t state, nstate;

    logic crc_init, valid;
    logic [31:0] crc_out;

    //variables to assist zero paddins for >= 46 bytes 
    logic [15:0] len_counter, nlen_counter;


    

    assign xgmii_txd = xgmii_txd_l;
    assign xgmii_txc = xgmii_txc_l; 


      crc32_parallel_64bit CRC (
        .CLK(CLK),
        .nRST(nRST),
        .valid(valid),
        .crc_init(crc_init),
        .data_in(xgmii_txd),
        .crc_out(crc_out)
      );

    always_ff @(posedge CLK, negedge nRST) begin //64 bits XGMII transmission
        if (!nRST) begin
            state <= IDLE;
            xgmii_txd_l <= 64'h07070707_07070707;
            xgmii_txc_l <= '1;
            len_counter <= 0;
        end else begin
            state <= nstate;
            xgmii_txd_l <= nxgmii_txd_l;
            xgmii_txc_l <= nxgmii_txc_l;
            len_counter <= nlen_counter;
            
        end
    end

    always_ff @(posedge CLK, negedge nRST) begin 
        if (!nRST) begin
            IP_send <= 0;
        end else begin
            IP_send <= IP_send_l;
        end
    end

    always_comb begin //NEXT STATE BLOCK LOGIC 
        nstate = state;
        IP_send_l = IP_send;
        crc_init = 1'b0;
        valid = 1'b1;
        
        case (state)
            IDLE: begin
                crc_init = 1'b1; //Initialize CRC
                valid = 1'b0;
                if (TX_en) begin
                    nstate = SEND_PREAMBLE_SFD;
                    IP_send_l = 1'b1;
                end
            end
            SEND_PREAMBLE_SFD: begin
                nstate = SEND_ETHER_HEAD1;
                IP_send_l = 1'b1; //V changing need to change with questa
                crc_init = 1'b1; //Initialize CRC
            end
            SEND_ETHER_HEAD1: begin
                nstate = SEND_ETHER_HEAD2;
                IP_send_l = 1'b1;
            end

            SEND_ETHER_HEAD2: begin
                nstate = SEND_IP_HEADER_PAYLOAD;
                IP_send_l = 1'b1;
                // if (bytes_sent_ip_mac >= (protocol_len_data_mac - 15'd1)) begin
                //     nstate = SEND_FCS_TERMINATE; //Send FCS and terminate
                //     IP_send_l = 1'b0;
                // end
            end

            SEND_IP_HEADER_PAYLOAD: begin
                IP_send_l = 1'b1;
                //Case of tt_len_data < 46 (minimum payload len)
                if (IP_last && (tt_len_data < 46)) begin
                    IP_send_l = 1'b0;
                    nstate = SEND_ZERO_PADDING;
                    nlen_counter = tt_len_data;
                end else if (IP_last) begin
                    nstate = SEND_FCS_TERMINATE; //Send FCS and terminate
                    IP_send_l = 1'b0;
                end
            end            

            SEND_ZERO_PADDING: begin
                nlen_counter = len_counter + 8;
                if (len_counter >=46) begin
                    nstate = SEND_IDLE_END1;
                    IP_send_l = 1'b0;
                end
                
            end

            SEND_FCS_TERMINATE: begin
                valid = 1'b0;
                crc_init = 1'b1;
                nstate = SEND_IDLE_END1; //Send IDLE end
            end
            SEND_IDLE_END1: begin
                crc_init = 1'b1;
                nstate = IDLE;
            end
            default: begin
                
            end

        endcase    

    end

    always_comb begin //64 bits XGMII transmission output
        nxgmii_txd_l = xgmii_txd_l;
        nxgmii_txc_l = xgmii_txc_l;
        case (state)
            IDLE: begin
                nxgmii_txd_l = 64'h07070707_07070707;
                nxgmii_txc_l = '1;
                if (TX_en) begin
                    nxgmii_txd_l = {8'hFB,48'h555555555555, 8'hD5}; //Preamble and SFD 
                    nxgmii_txc_l = 8'b000_0001;
                end
            end

            SEND_PREAMBLE_SFD: begin
                //Ok I make a mistake
                // Logic to send preamble and SFD
                nxgmii_txc_l =  '0;
                nxgmii_txd_l = {MAC_DEST_ADDR,MAC_SRC_ADDR[47:32]};
                
            end

            SEND_ETHER_HEAD1: begin
                // Logic to send destination and source MAC addresses

                //LATCH ISSUE
                // nxgmii_txc_l =  '0;
                // nxgmii_txd_l = {MAC_DEST_ADDR,MAC_SRC_ADDR[47:32]};
                // if (rcv_mac_addr) begin
                //     nxgmii_txd_l = {dst_mac_addr,MAC_SRC_ADDR[47:32]};
                // end else begin
                //     nxgmii_txd_l = {MAC_DEST_ADDR,MAC_SRC_ADDR[47:32]}; //ARP protocol
                //     arp_req = 1'b1;
                // end
                
                nxgmii_txd_l = {MAC_SRC_ADDR[31:0], IP_transmit[31:0]};
                
                nxgmii_txc_l =  '0; 
                //5 byte of MAC_SRC_ADDR
                //2 byte of ETHER_TYPE
                //1 byte of IP_transmit 
            end

            SEND_ETHER_HEAD2: begin
                // Logic to send Ether type header
                //Sending the MAC source address, Ethernet type, IPv4 header, MSB of length
                //MAC_SRC_ADDR[31:0] 4 bytes,
                //Ethertype 2 bytes,
                //IPv4 header 1 byte,
                //length MSB 1 byte
                
                // nxgmii_txd_l = {MAC_SRC_ADDR[31:0], ETHERType, IPv4_ver, length_MSB};
                // nxgmii_txc_l =  '0;

                //IP transmitt will get the Ethertype, IPv4_ver, length_MSB
                nxgmii_txd_l = IP_transmit;
                nxgmii_txc_l =  '0;
                // if (bytes_sent_ip_mac >= (protocol_len_data_mac - 15'd1)) begin
                //     nxgmii_txd_l = {crc_out, 8'h FD}; // FCS and 0xFD
                //     nxgmii_txc_l = 8'b0000_0001; // all control
                // end

            end

            SEND_IP_HEADER_PAYLOAD: begin
                // Logic to send IP header
                //length_LSB 1 byte, 
                //IP_iden 2 bytes, 
                //IP_flags 1 byte, 
                //IP_offset 1 byte, 
                //IP_TLL 1 byte, 
                //IP protocol 1 byte, 
                //IP checksum MSB 1 byte -> 8 bytes

                // nxgmii_txd_l = {length_LSB, IP_iden, IP_flags, IP_offset, IP_TLL, IP_protocol, IP_chksm_MSB};
                // nxgmii_txc_l =  '0;
                nxgmii_txd_l = IP_transmit;
                nxgmii_txc_l =  '0;

                
                
            end

            SEND_ZERO_PADDING: begin
                nxgmii_txd_l = 0;
                nxgmii_txc_l = 0;
                if (len_counter >= 46) begin
                    nxgmii_txd_l = {crc_out, 32'hFD070707}; // FCS and 0xFD
                    nxgmii_txc_l = 8'b0000_1111; // all control
                end

            end

            // SEND_IP_TCP_HEADER: begin
            //     // Logic to send IP and TCP header
            //     //IP chksm LSB 1 byte,
            //     //source IP 4 bytes,
            //     //dest IP MSB 3 bytes
            //     nxgmii_txd_l = IP_transmit;
            //     nxgmii_txc_l =  '0;
            // end

            // SEND_IP_TCP_HEADER2: begin

            //     // Logic to send TCP header
            //     //dest IP LSB 1 byte,
            //     //TCP src port 2 bytes,
            //     //TCP dest port 2 bytes,
            //     //TCP seq num 3 bytes

            //     // nxgmii_txd_l = {dest_IP[7:0], TCP_src_port, TCP_dest_port, TCP_seq_num[31:8]};
            //     // nxgmii_txc_l =  '0;

            //     // nxgmii_txd_l = {IP_transmit[7:0], TCP_transmit[55:0]};
            //     nxgmii_txd_l = IP_tr
            //     nxgmii_txc_l =  '0;
            // end

            // SEND_TCP_HEADER3: begin
            //     //TCP seq num LSB 1 byte,
            //     //TCP ack num 4 bytes,
            //     //TCP offset 1/2 bytes,
            //     //TCP flags 1 byte,
            //     //TCP window size MSB 1 bytes
            //     // nxgmii_txd_l = {TCP_seq_num[7:0], TCP_ack_num, TCP_offset, TCP_flags, TCP_window_size[15:8]};
            //     // nxgmii_txc_l =  '0;

            //     nxgmii_txd_l = TCP_transmit;
            //     nxgmii_txc_l =  '0;
            // end

            // SEND_TCP_HEADER4_PAYLOAD1: begin
            //     //TCP window size LSB 1 byte,
            //     //TCP checksum 2 bytes,
            //     //TCP urgent pointer 2 byte,
            //     //TCP options 0 bytes
            //     //TCP payload_part1 3 bytes

            //     //Total sizeof TCP header is 20 bytes
            //     //TCP_offset is 0x50
               
            //     // nxgmii_txd_l = {TCP_window_size[7:0], TCP_checksum, TCP_urgent_pointer, 24'h0};
            //     // nxgmii_txc_l =  '0;

            //     nxgmii_txd_l = TCP_transmit;
            //     nxgmii_txc_l =  '0;
            // end

            // SEND_TCP_PAYLOAD: begin
            //     nxgmii_txd_l = TCP_transmit;
            //     nxgmii_txc_l =  '0;
            // end

            SEND_FCS_TERMINATE: begin
                // Logic to send FCS and terminate
                nxgmii_txd_l = {crc_out, 32'hFD070707}; // FCS and 0xFD
                // // nxgmii_txd_l = 64'h00_00_00_00_00_00_00_FD; // FCS and 0xFD
                // nxgmii_txc_l = 8'b0000_0001; // all control

                // nxgmii_txd_l = 64'h07070707_07070707;
                nxgmii_txc_l = 8'b0000_1111;

            end

            SEND_IDLE_END1: begin
                nxgmii_txd_l = 64'h07070707_07070707;
                nxgmii_txc_l = 8'hFF;
            end

            //Continue work implementing IDLE codes 0x07 for at least 12 bytes -> 96 bits
            // Should be first send 64'h 0707070707070707
            // Then send txc: 8'b0000_0001
            // Then second send 64'h of 0x07 and then going back to IDLE 
            // SEND_IDLE_END1: begin
            //     nxgmii_txd_l = 64'h07070707_07070707;
            //     nxgmii_txc_l = 8'b0000_0001;
            // end
            default: begin
                nxgmii_txd_l = 0;
                nxgmii_txc_l = 0;
            end
        endcase

    end

    

endmodule
