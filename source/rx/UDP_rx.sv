`timescale 1ns/10ps
`include "rx_pkg.vh"

module UDP_rx (
    input logic CLK, nRST,
    input logic IP_valid,
    input logic IP_flush,
    input logic [63:0] IP_payload,
    input logic is_udp,

    output logic UDP_flush,
    output logic UDP_valid,
    output logic [63:0] UDP_payload 
);
    import rx_pkg::*;
    logic [15:0] cnt, next_cnt, UDP_len, next_UDP_len;
    UDP_t current_state, nstate;
    logic next_UDP_valid;
    logic [63:0] next_UDP_payload;

    always_ff @(posedge CLK, negedge nRST) begin
        if (!nRST || IP_flush || UDP_flush) begin
            current_state <= UDP_IDLE;
            UDP_valid <= '0;
            UDP_payload <= '0;
            udp_len <= '0;
            cnt <= '0;
        end else begin
            current_state <= nstate;
            UDP_valid <= next_UDP_valid;
            UDP_payload <= next_UDP_payload;
            cnt <= next_cnt;
            udp_len <= next_UDP_len;
        end
    end

    always_comb begin
        nstate = current_state;
        next_UDP_valid = '0; 
        UDP_flush = '0;
        next_cnt = cnt;
        next_UDP_len = UDP_len; 

        /* 0      7 8     15 16    23 24    31 32    39 40    47 48    55 56     63 
        * +--------+--------+--------+--------+--------+--------+--------+--------+
        * |       IP        |   Destination   |   Destination   |       Length    |
        * |    Dest addr    |      Port       |      Port
        * +--------+--------+--------+--------+--------+--------+--------+--------+
        * |                 |                 
        * |    CHK_SUM      |    data octets ...     
        * +--------+--------+--------+--------+--------+--------+--------+--------+
        */
        case(current_state) 
            UDP_IDLE: begin
                if (MAC_valid && is_udp) begin
                    nstate = UDP_SRC_ADDR;
                end
            end

            UDP_HEADER: begin
                // todo check whether need tp swap 
                if (MAC_valid) begin
                    if (IP_payload[31:16] == UDP_DEST_ADDR && IP_payload[47:32] == UDP_SRC_ADDR) begin
                        nstate = UDP_CHK_SUM_PAYLOAD;
                        next_UDP_len = IP_payload[15:0]; 
                        next_UDP_valid = 1'b1;
                        next_cnt = 16'd6; // 6 bytes from CHK_SUM is payload
                    end else begin
                        nstate = UDP_ERROR;
                        UDP_flush = 1'b1;
                    end
                end
            end

            UDP_CHK_SUM_PAYLOAD: begin
                if(IP_valid) begin
                    next_UDP_payload = {16'b0, IP_payload[47:0]};
                    nstate = UDP_PAYLOAD; // change to CHK_SUM if needed 
                    next_cnt = cnt + 16'd8; 
                    next_UDP_valid = 1'b1;
                end //may need to add else logic
            end

            UDP_PAYLOAD: begin 
                if (IP_valid) begin
                    next_cnt = cnt + 16'd8; //8 is the size of the UDP payload
                    next_UDP_payload = IP_payload;

                    //check for end of the UDP packet
                    if (cnt >= UDP_len) begin 
                        nstate = UDP_DONE; 
                        // UDP_flush = 1'b1;
                    end else begin
                        next_UDP_valid = 1'b1;
                    end
                end
            end

            UDP_DONE: begin
                nstate = UDP_IDLE; 
                next_UDP_len = '0;
                next_cnt = '0;
            end

            UDP_CHK_SUM: // optional

            UDP_ERROR: begin
                UDP_flush = 1'b1;
                if (!IP_valid) begin
                    nstate = UDP_IDLE;
                end
            end

            default: nstate = UDP_IDLE; 
        endcase 
    end
endmodule
