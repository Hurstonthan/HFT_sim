`timescale 1ns/10ps
module IP_rx #(
    parameter VERSION = 4'd4,
    parameter HDR = 4'd5,
    parameter DSCP = 6'd0,
    parameter ECN = 2'd0,
    parameter PROTOCOL = 8'h06, //TCP is 06, UDP is 0x11
    parameter SRC_ADDR = 32'hFFFF_FFFF_FFFF_FFFFF,
    parameter DEST_ADDR = 32'hFFFF_FFFF_FFFF_FFFFF
) (
    input logic CLK,
    input logic nRST,
    input logic MAC_valid,
    input logic [63:0] MAC_payload_rcv,
    input logic MAC_flush,
    input logic [7:0] bytes_rcv_len,

    output logic IP_valid,
    output logic IP_flush,
    output logic [15:0] IP_pseuder,
    output logic [63:0] IP_payload,
    output logic [15:0] TCP_len
);

typedef enum logic [5:0] { 
    IDLE,
    RCV_VER_IHL_DSCP_ECN, // 4b + 4b + 6b + 2b 
    RCV_LENGTH_IDEN_FLAGS_FRGOFF_TLL_PROTOCOL, //2B + 2B + 2B + 2B
    RCV_SUM_SRC_ADDR_DEST_ADDR, //2B + 4B + 2B
    RCV_PAYLOAD_DEST, //Remember need to check 2B left of dest addr
    CHK_SUM,
    RCV_PAYLOAD,
    ERROR
 } IP_t;

 IP_t state, nstate;
 logic [15:0] IP_checksum, nIP_checksum;
 logic [63:0] nIP_payload;
 logic [15:0] bytes_rcv, nbytes_rcv;

 logic chksum_en;
 logic [63:0] chksum_in;
 logic [15:0] chksum_pl;
 
 logic [16:0] chksum_final;

 logic [16:0] IP_pseuder_l, nIP_pseuder_l;
 logic [15:0] dst_addr, ndst_addr; //16 bit MSB of dst_addr
 logic [31:0] src_addr, nsrc_addr;
 logic [15:0] IP_len, nIP_len;
 logic [15:0] nTCP_len;
 logic [7:0] IP_hd_len, nIP_hd_len;
 logic [7:0] IP_protocol, nIP_protocol;
 logic nIP_valid;


 assign IP_pseuder = IP_pseuder_l;
 assign IP_bytes_rcv_len = bytes_rcv;

 chksum_tcp_pl (
    .CLK(CLK),
    .nRST(nRST),
    .clear(1'b0),
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
        IP_hd_len <= 0;
        TCP_len <= 0;
    end else begin
        if (MAC_flush || IP_flush) begin
            state <= IDLE;
            IP_checksum <= 0;
            IP_payload <= 0;
            bytes_rcv <= 0;
            dst_addr <= 0;
            IP_valid <= 0;

            IP_len <= 0;
            IP_pseuder_l <= 0;

            IP_hd_len <= 0;
            IP_protocol <= 0;
            dst_addr <= 0;
            src_addr <= 0;
            TCP_len <= 0;
        end
        else begin
            state <= nstate;
            IP_checksum <= nIP_checksum;
            IP_payload <= nIP_payload;
            bytes_rcv <= nbytes_rcv;
            dst_addr <= ndst_addr;
            IP_valid <= nIP_valid;

            IP_len <= nIP_len;
            IP_pseuder_l <= {15'b0 + nIP_pseuder_l[16]} + nIP_pseuder_l[15:0];
            IP_hd_len <= nIP_hd_len;
            IP_protocol <= nIP_protocol;
            dst_addr <= ndst_addr;
            src_addr <= nsrc_addr;
            TCP_len <= nTCP_len;
        end
        
    end
end


always_comb begin
    nstate = state;
    nIP_payload = IP_payload;
    chksum_en = 1'b0;
    chksum_in = MAC_payload_rcv;
    nbytes_rcv = bytes_rcv;
    ndst_addr = dst_addr;
    nIP_valid = 0;
    chksum_final = {1'b0, chksum_tcp_pl};
    nIP_len = IP_len;
    nIP_pseuder_l = IP_pseuder_l;
    nTCP_len = TCP_len;

    
    nIP_hd_len = nIP_hd_len;
    nIP_protocol = nIP_protocol;
    ndst_addr = ndst_addr;
    nsrc_addr = nsrc_addr;



    if (MAC_valid) begin
        nbytes_rcv = bytes_rcv + bytes_rcv_len;
    end
    
    case (state)
        IDLE: begin
            if (MAC_valid) begin
                nstate = RCV_VER_IHL_DSCP_ECN;
            end

        end

        RCV_VER_IHL_DSCP_ECN: begin
            chksum_en = 1'b1;
            if (MAC_valid && MAC_payload_rcv[63:60] == IP_VERSION) begin
                next_state = RCV_LENGTH_IDEN_FLAGS_FRGOFF_TLL_PROTOCOL;
                nIP_hd_len = {4'b0,MAC_payload_rcv[59:56]};
            end else begin
                next_state = IDLE
            end
        end

        RCV_LENGTH_IDEN_FLAGS_FRGOFF_TLL_PROTOCOL: begin
            chksum_en = 1'b1;
            if (MAC_valid) begin
                if (MAC_payload_rcv[63:56] <= 16'd1500 && 
                    MAC_payload_rcv[28:16] == 0 && //Fragoff
                    MAC_payload_rcv[15:8] !=0 && //TTL Total time live
                    !MAC_payload_rcv[31] && //MF != 1, no more segment
                    MAC_payload_rcv[7:0] == PROTOCOL) begin
                        next_state = RCV_SUM_SRC_ADDR_DEST_ADDR;
                        nIP_len = MAC_payload_rcv[63:56];
                        nIP_protocol = MAC_payload_rcv[7:0];
                    end else begin
                        next_state = ERROR;
                    end
            end 
        end

        RCV_SUM_SRC_ADDR_DEST_ADDR: begin
            chksum_en = 1'b1;
            if (MAC_valid) begin
                chksum_in = {16'h0, MAC_payload_rcv[47:0]};
                nIP_checksum = MAC_payload_rcv[63:48];
                ndst_addr = MAC_payload_rcv[15:0];
                if (MAC_payload_rcv[47:16] == SRC_ADDR) begin
                    nstate = RCV_PAYLOAD_DEST;
                    nIP_valid = 1'b1;
                    nsrc_addr = MAC_payload_rcv[47:16];
                end else begin
                    nstate = ERROR;
                    chksum_en = 1'b0;
                end
            end
        end

        RCV_PAYLOAD_DEST: begin
            chksum_in = {48'h0, MAC_payload_rcv[63:48]};
            chksum_en = 1'b1;
            if (MAC_valid) begin
                if (({dst_addr, MAC_payload_rcv[63:48]} == DEST_ADDR)) begin
                    nIP_payload = {MAC_payload_rcv[47:0], 24'b0};
                    nIP_valid = 1'b1;
                    nstate = CHK_SUM;
                    nTCP_len = IP_len - {15'b0, IP_hd_len};
                    nIP_pseuder_l = (IP_len - {15'b0, IP_hd_len}) + src_addr[31:16] + src_addr[15:0] + dst_addr + MAC_payload_rcv[63:48] + {8'b0, IP_protocol};
                end else begin
                    nstate = ERROR;
                end
            end
        end

        CHK_SUM: begin
            if (MAC_valid) begin
                nIP_payload = MAC_payload_rcv;
            end
            if ((~chksum_tcp_pl) == IP_checksum) begin
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
                if (bytes_rcv + bytes_rcv_len  >= IP_len) begin
                    nIP_valid = 1'b0;
                    nstate = ERROR;
                end else begin
                    nIP_valid = 1'b1;
                end
            end else begin
                nstate = IDLE;
                nIP_valid = 1'b0;
            end
        end

        ERROR: begin
            if (!MAC_valid) begin
                nstate = IDLE;
            end
        end

    endcase
end



endmodule
