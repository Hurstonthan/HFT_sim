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
    //todo what should I do with length checking
);
    import rx_pkg::*;
    UDP_t current_state, nstate;
    logic next_UDP_valid;
    logic [63:0] next_UDP_payload;

    always_ff @(posedge CLK, negedge nRST) begin
        if (!nRST || IP_flush || UDP_flush) begin
            current_state <= UDP_IDLE;
            UDP_valid <= '0;
            UDP_payload <= '0;
        end else begin
            current_state <= nstate;
            UDP_valid <= next_UDP_valid;
            UDP_payload <= next_UDP_payload;
        end
    end

    always_comb begin
        nstate = current_state;
        next_UDP_valid = '0; 
        UDP_flush = '0;
        case(current_state) 
            UDP_IDLE:
                if (MAC_valid && is_udp) begin
                    nstate = UDP_SRC_ADDR;
                end
            UDP_SRC_ADDR_DEST_ADDR_LENGTH:
                if (MAC_valid) begin
                    if (IP_payload[31:16] == UDP_DEST_ADDR || IP_payload[47:32] == UDP_SRC_ADDR) begin
                        nstate = UDP_CHK_DEST_ADDR_LENGTH_CHK_SUM_PAYLOAD;
                        next_UDP_valid = '0;
                    end else begin
                        nstate = ERROR;
                        UDP_flush = 1'b1;
                    end
                end
            UDP_CHK_SUM_PAYLOAD:
                if(IP_valid) begin
                    next_UDP_payload = {16'b0, IP_payload[47:0]};
                    nstate = UDP_PAYLOAD; // change to CHK_SUM if needed 
                end //may need to add else logic
            UDP_PAYLOAD:
                //todo check the length of udp 
                if (IP_valid) begin
                    next_UDP_payload = IP_payload;
                    //zero padding
                    if () begin //todo check whether the length is the same for payload
                        nstate = ERROR;
                        // UDP_flush = 1'b1;
                    end else begin
                        next_UDP_valid = 1'b1;
                    end
                end
            UDP_CHK_SUM: // optional

            UDP_ERROR:
                if (!IP_valid) begin
                    nstate = IDLE;
                end
        endcase 
    end
endmodule
