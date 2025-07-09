`timescale 1ns/10ps
`include "chksum_tcp_pl.sv"
`include "rx_pkg.vh"
module IP_rx #(
    // parameter VERSION = 4'd4,
    // parameter HDR = 4'd5,
    // parameter DSCP = 6'd0,
    // parameter ECN = 2'd0,
    // parameter PROTOCOL = 8'h06, //TCP is 06, UDP is 0x11
    // parameter SRC_ADDR = 32'hFFFF_FFFF_FFFF_FFFFF,
    // parameter DEST_ADDR = 32'hFFFF_FFFF_FFFF_FFFFF
) (
    input logic CLK,
    input logic nRST,
    input logic MAC_valid,
    input logic [63:0] MAC_payload_rcv,
    input logic MAC_flush,
    input logic [7:0] bytes_rcv_len,

    output logic IP_valid,
    output logic IP_flush,
    output logic [63:0] IP_payload,
    output logic is_udp,
    output logic is_tcp
);
    import rx_pkg::*;
    IP_t state, nstate;
    logic [15:0] IP_checksum, nIP_checksum;
    logic [63:0] nIP_payload;
    logic [15:0] bytes_rcv, nbytes_rcv;

    logic chksum_en, chksum_clear;
    logic [63:0] chksum_in;
    logic [15:0] chksum_pl;
    logic [16:0] chksum_final;
    logic [15:0] dst_addr, ndst_addr;
    logic [15:0] IP_len, nIP_len;
    
    // logic [63:0] crc_in, crc_in_big;

    logic nIP_valid;
    logic next_is_udp, next_is_tcp;
    //todo fix the checksum logic
    chksum_tcp_pl (
       .CLK(CLK),
       .nRST(nRST),
       .clear(chksum_clear),
       .FIFO_rd_en(chksum_en),
       .TCP_payload_tx(chksum_in),
       .TCP_checksum_pl(chksum_pl)
    );

    always_ff @(posedge CLK, negedge nRST) begin
    if (!nRST) begin
        state <= IDLE;
        IP_checksum <= 0;
        IP_payload <= 0;
        bytes_rcv <= 0;
        dst_addr <= 0;
        IP_valid <= 0;
        IP_len <= 0;
        is_tcp <= 0;
        is_udp <= 0;
    end else begin
        if (MAC_flush || IP_flush) begin //todo check whethere IP flush cause timing
            state <= IDLE;
            IP_checksum <= 0;
            IP_payload <= 0;
            bytes_rcv <= 0;
            dst_addr <= 0;
            IP_valid <= 0;
            IP_len <= 0;
            is_tcp <= 0;
            is_udp <= 0;
        end
        else begin
            state <= nstate;
            IP_checksum <= nIP_checksum;
            IP_payload <= nIP_payload;
            bytes_rcv <= nbytes_rcv;
            dst_addr <= ndst_addr;
            IP_valid <= nIP_valid;
            IP_len <= nIP_len;
            is_tcp <= next_is_tcp;
            is_udp <= next_is_udp;
        end
        
    end
end


always_comb begin
     /* 0      7 8     15 16    23 24    31 32    39 40    47 48       55 56     63 
        * +--------+--------+--------+--------+--------+--------+--------+--------+
        * |          MAC Source addr          |     IP Type     |Ver |IHL|   TOS  |
        * +--------+--------+--------+--------+--------+--------+--------+--------+
        * |      Total      |  Identification |Flags|Fragoff    |   TTL  |Protocol|               
        * |     Length      |    data octets  |                 |        |        |
        * +--------+--------+--------+--------+--------+--------+--------+--------+
        * |      Header     |              Source               |       Dest      |
        * |   Checksum      |              Address              |       Address   |
        * +--------+--------+--------+--------+--------+--------+--------+--------+
        * |     Destr       | Data ...
        * |     Address     |
        * +--------+--------+--------+--------+--------+--------+--------+--------+
        */
    nstate = state;
    nIP_payload = IP_payload;
    chksum_en = 1'b0;
    chksum_in = MAC_payload_rcv;
    nbytes_rcv = bytes_rcv;
    ndst_addr = dst_addr;
    nIP_valid = 0;
    chksum_clear = 1'b0;
    chksum_final = {1'b0, chksum_tcp_pl};
    nIP_len = IP_len;
    next_is_tcp = is_tcp;
    next_is_udp = is_udp;

    if (MAC_valid) begin
        nbytes_rcv = bytes_rcv + bytes_rcv_len;
    end

    case (state)
        IDLE: begin
            chksum_clear = 1'b1;
            if (MAC_valid) begin
                nstate = RCV_VER_IHL_DSCP_ECN; 
            end
        end

        RCV_VER_IHL_DSCP_ECN: begin
            if (MAC_valid) begin
                chksum_en = 1'b1;
                if (MAC_payload_rcv[63:60] == IP_VERSION) begin
                    nstate = RCV_LENGTH_IDEN_FLAGS_FRGOFF_TLL_PROTOCOL;
                end else begin
                    nstate = ERROR;
                    IP_flush = 1'b1;
                end
            end
        end

        RCV_LENGTH_IDEN_FLAGS_FRGOFF_TLL_PROTOCOL: begin
            if (MAC_valid) begin
                // total length 
                chksum_en = 1'b1;
                // todo set chksum_in = 
                nIP_len = MAC_payload_rcv[63:56];

                // Check the protocol type
                next_is_tcp = (MAC_payload_rcv[7:0] == TCP_PROTOCOL);
                next_is_udp = (MAC_payload_rcv[7:0] == UDP_PROTOCOL);
    
                if (MAC_payload_rcv[63:56] <= 16'd1480 && 
                    MAC_payload_rcv[28:16] == 0 && //Fragoff
                    MAC_payload_rcv[15:8] !=0 && //Time to live
                    !MAC_payload_rcv[31] && //MF != 1, no more segment
                    (next_is_tcp || next_is_udp)) begin
                        nstate = RCV_SUM_SRC_ADDR_DEST_ADDR;
                    end else begin
                        IP_flush = 1'b1;
                        nstate = ERROR;
                    end
            end 
        end

        RCV_SUM_SRC_ADDR_DEST_ADDR: begin
            if (MAC_valid) begin
                chksum_en = 1'b1;
                chksum_in = {16'h0, MAC_payload_rcv[47:0]};

                // Store header checksum and destination address
                nIP_checksum = MAC_payload_rcv[63:48];
                ndst_addr = MAC_payload_rcv[15:0]; // store the destonation address as part of the element
                
                if (MAC_payload_rcv[47:16] == IP_SRC_ADDR) begin
                    nstate = RCV_PAYLOAD_DEST;
                    nIP_valid = 1'b1;
                end else begin
                    nstate = ERROR;
                    chksum_en = 1'b0;
                end
            end
        end

        RCV_PAYLOAD_DEST: begin
            if (MAC_valid) begin
                chksum_in = {48'h0, MAC_payload_rcv[63:48]};
                chksum_en = 1'b1;
                
                if (({dst_addr, MAC_payload_rcv[63:48]} == IP_DEST_ADDR)) begin
                    nIP_payload = {16'h0, MAC_payload_rcv[47:0]};
                    nIP_valid = 1'b1;
                    nstate = CHK_SUM;
                end else begin
                    nstate = ERROR;
                    IP_flush = 1'b1;
                end
            end
        end

        CHK_SUM: begin
            if (MAC_valid) begin
                nIP_payload = MAC_payload_rcv;
            end
            // sum everything of 16 bits, if oversize, take the most significant bit to.
            // take the complement of the sum
            //todo finish the checksum
            // msb (most significant bit) order 
            if (chksum_tcp_pl == IP_checksum) begin
                nstate = RCV_PAYLOAD;
                nIP_valid = 1'b1;
            end else begin
                nstate = ERROR;
                IP_flush = 1'b1;
            end

        end

        RCV_PAYLOAD: begin
            if (MAC_valid) begin
                nIP_payload = MAC_payload_rcv;
                nIP_valid = 1'b1;
                if (bytes_rcv >= IP_len) begin //checking the rectver length
                    nIP_valid = 1'b0;
                    nstate = DONE;
                end 
            end
        end

        DONE: begin
            nIP_valid = 1'b0;
            nstate = IDLE;
        end

        ERROR: begin
            // IP_flush = 1'b1;
            if (!MAC_valid) begin
                nstate = IDLE;
            end
        end
        default: nstate = IDLE; 
    endcase
end
endmodule
