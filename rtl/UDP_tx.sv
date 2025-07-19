`timescale 1ns/10ps
`include "rx_pkg.sv"

module UDP_tx(
    //todo check whetehr i can set src port address as UDP_dest
    input logic CLK, nRST,
    input logic UDP_valid, // sended from 
    input logic [63:0] UDP_payload, // payload to send
    input logic [15:0] UDP_len, // length of the UDP packet
    input logic [15:0] UDP_src_port, 
    input logic [15:0] UDP_dest_port, 
    input logic UDP_last, // end of the payload latched already

    output logic [63:0] IP_payload, // including the UDP header and payload
    output logic IP_valid, // signal to indicate that the IP packet is ready to be sent
    output logic IP_last
);
    import rx_pkg::*;

    typedef enum logic [1:0] {
        IDLE,
        SEND_HEADER,
        SEND_PAYLOAD,
        DONE
        // ERROR
    } UDP_tx_t;

    UDP_tx_t current_state, nstate;
    logic [15:0] computed_len; 
    logic [63:0] header_reg;
    // logic last_reg; 

    always_ff @(posedge CLK, negedge nRST) begin
        if (!nRST) begin
            current_state <= IDLE;
            header_reg <= '0;
        end else begin
            current_state <= nstate;
            header_reg <= {IP_DEST_ADDR[15:0], UDP_src_port, UDP_dest_port, computed_len};
            // may need to change the chksum

        end
    end

    assign computed_len = UDP_len + UDP_HEADER_LENGTH; 

    always_comb begin
        /* 0      7 8     15 16    23 24    31 32    39 40    47 48    55 56     63 
        * +--------+--------+--------+--------+--------+--------+--------+--------+
        * |       IP        |      Source     |   Destination   |       Length    |
        * |    Dest addr    |      Port       |      Port
        * +--------+--------+--------+--------+--------+--------+--------+--------+
        * |                 |                 
        * |    CHK_SUM      |    data octets ...     
        * +--------+--------+--------+--------+--------+--------+--------+--------+
        */
        // It will send IP_Dest_addr back first
        nstate = current_state;
        IP_valid = 1'b0;
        IP_payload = '0; 
        
        casez(current_state)
            IDLE: begin
                if (UDP_valid) begin
                    IP_valid = 1'b1; 

                    nstate = SEND_HEADER;
                end
            end

            SEND_HEADER: begin
                //source and destination addresses are flipped
                nstate = SEND_PAYLOAD;
                IP_valid = 1'b1;
                IP_payload = header_reg;
            end

            SEND_PAYLOAD: begin
                IP_valid = 1'b1;
                IP_payload = UDP_payload;
                if (UDP_last) begin
                    nstate = DONE;
                end else if (~UDP_valid) begin
                    nstate = IDLE;
                end
            end

            DONE: begin
                IP_last = 1'b1; //payload is done 
                nstate = IDLE; // done with sending the packet
            end

            // ERROR: begin
            //     IP_valid = 1'b0; // not sending anythin
            //     nstate = IDLE: 
            // end

            default: begin
                nstate = IDLE; // in case of unexpected state
            end
        endcase
    end
endmodule