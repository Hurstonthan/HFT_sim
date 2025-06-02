//NOTE STILL NEED TO FIX THE IP_TX DUE TO THE DESIGN SUGGESTION PIPLINE WITH TCP TRANSMISSION


module IP_tx #(
    // parameter WORD_WIDTH = 64,
    // parameter ETHER_TYPE    //2 bytes
    // parameter IPV4_VER      //1 byte
    // parameter  LENGTH        // 2 bytes
    // parameter IP_IDENFICATION // 2 bytes
    // parameter IP_FLAG       // 2 byteS
    // parameter IP_OFFSET     // 1 byte
    // parameter IP_TTL       // 1 byte
    // parameter IP_PROTOCOL   // 1 byte
    // parameter IP_CHECKSUM   // 2 bytes
    // parameter IP_SRC_ADDR   // 4 bytes
    // parameter IP_DEST_ADDR  // 4 bytes

    parameter WORD_WIDTH         = 64,
    parameter ETHER_TYPE         = 16'h0800,   // IPv4 EtherType
    parameter IPV4_VER           = 8'h45,      // IPv4 + header length = 5 words (20 bytes)
    parameter LENGTH             = 16'd40,     // Total IP length (20 bytes IP header + 20 bytes TCP header)
    parameter IP_IDENFICATION    = 16'h0001,   // Example identification
    parameter IP_FLAG_OFFSET     = 16'h4000,   // Don't Fragment flag (DF = 1, offset = 0)
    parameter IP_TLL             = 8'h40,      // Time to Live (64)
    parameter IP_PROTOCOL        = 8'h06,      // TCP protocol number = 6
    parameter IP_SRC_ADDR        = 32'hC0A80101, // 192.168.1.1
    parameter IP_DEST_ADDR       = 32'hC0A80102  // 192.168.1.2

) (
    input logic CLK,
    input logic nRST,

    //Interface between Ethernet MAC and IP TX
    input logic IP_send,
    input logic [15:0] TCP_len_data,
    output logic [WORD_WIDTH - 1 : 0] IP_transmit
);
    
    typedef enum logic [6:0] {
        IDLE,
        SEND_ETYPE_IPV4_MSB_LENGTH,
        SEND_IP_HEADER1, //Send length LSB, IP_iden, IP_flag, IP offset,IP TLL, IP protocol, IP checksum MSB
        SEND_IP_HEADER2, //Send check sum IP LSB, source IP, dest IP MSB
        SEND_IP_HEADER3, //Send dest IP LSB 
        SEND_IP_PAYLOAD
        //That's all for IP header
    } IP_state_t;

    IP_state_t IP_state, nxIP_state;
    logic [WORD_WIDTH - 1 : 0] nxIP_transmit_l;

    //Adding the logic of IP checksum
    logic chk_sum_valid;
    logic [16:0] IPv4_chk_sum, nIPv4_chk_sum;
    // logic [16:0] sum_chk;

    always_ff @(posedge CLK, negedge nRST) begin
        if (!nRST) begin
            IP_transmit <= '0;
            IPv4_chk_sum <= '0;
            IP_state <= IDLE;
        end else begin
            IP_state <= nxIP_state;
            IP_transmit <= nxIP_transmit_l;
            IPv4_chk_sum <= ~(nIPv4_chk_sum[15:0] + {15'b0, nIPv4_chk_sum[16]});
        end
    end

    always_comb begin
        nIPv4_chk_sum = IPv4_chk_sum;
        if (chk_sum_valid) begin
            //0x4884 is including everything but TCP payload length, and the checksum
           nIPv4_chk_sum = 16'h4884 + TCP_len_data;
        end
    end

    always_comb begin //Output logic
        nxIP_transmit_l = IP_transmit;
        nxIP_state = IP_state;
        chk_sum_valid = 1'b0;

        case (IP_state)
            IDLE: begin
                if (IP_send) begin
                    nxIP_state = SEND_ETYPE_IPV4_MSB_LENGTH;
                    nxIP_transmit_l = {32'b0, ETHER_TYPE, IPV4_VER ,LENGTH[15:8]}; //Send EtherType and length
                    chk_sum_valid = 1'b1;
                end  
            end
            SEND_ETYPE_IPV4_MSB_LENGTH: begin
                nxIP_state = SEND_IP_HEADER1;
                nxIP_transmit_l = {LENGTH[7:0], IP_IDENFICATION, IP_FLAG_OFFSET, IP_TLL, IP_PROTOCOL, IPv4_chk_sum[15:8]}; //Send length LSB, IP_iden, IP_flag, IP offset,IP TLL, IP protocol, IP checksum MSB
            end
            SEND_IP_HEADER1: begin
                nxIP_state = SEND_IP_HEADER2;
                nxIP_transmit_l = {IPv4_chk_sum[7:0], IP_SRC_ADDR, IP_DEST_ADDR[31:8]};
            end
            SEND_IP_HEADER2: begin
                nxIP_state = SEND_IP_HEADER3;
                nxIP_transmit_l = {56'b0, IP_DEST_ADDR[7:0]}; //Send dest IP LSB
            end
            SEND_IP_HEADER3: begin
                nxIP_state = IDLE;
                nxIP_transmit_l = '0; //End of IP header, go back to IDLE
            end

            SEND_IP_PAYLOAD: begin

            end
            default: begin
                nxIP_transmit_l = '0;
            end
        endcase

    end

endmodule
