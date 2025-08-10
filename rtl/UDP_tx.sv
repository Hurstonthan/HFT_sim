`timescale 1ns/10ps
module UDP_tx
#(
    parameter UDP_DEST_ADDR = 16'h1234, 
    parameter UDP_SRC_ADDR = 16'h4321, 
    parameter UDP_HEADER_LENGTH = 16'h08, 
    parameter UDP_CHECKSUM = 16'h0000,
    parameter IP_DEST_ADDR = 32'hC0A80102  // destination IP address
)
(
    input logic CLK, nRST,
    input logic valid, // sended from Ip layer
    input logic [63:0] UDP_payload, // payload to send
    input logic [15:0] UDP_len, // length of the UDP packet
    // input logic [15:0] UDP_src_port, 
    // input logic [15:0] UDP_dest_port, 
    input logic protocol_last, // end of the payload latched already

    output logic [63:0] IP_payload, // including the UDP header and payload
    // output logic IP_valid, // signal to indicate that the IP packet is ready to be sent
    output logic UDP_last,
    output logic [15:0] protocol_Data_len
    // output logic [15:0] IP_len 
);
    typedef enum logic [2:0] {
        IDLE,
        SEND_HEADER,
        SEND_PAYLOAD,
        DONE,
        SEND_CHKSUM_PAYLOAD
        // ERROR
    } state_t;
    logic [63:0] next_IP_payload;
    state_t current_state, nstate;
    logic [15:0] computed_len; 
    logic [63:0] header_reg;
    logic [15:0] IP_len;
    // logic last_reg; 

    always_ff @(posedge CLK, negedge nRST) begin
        if (!nRST) begin
            current_state <= IDLE;
            header_reg <= '0;
            IP_payload <= '0;
        end else begin
            current_state <= nstate;
            // may need to change the header_reg
            header_reg <= {16'b0, UDP_SRC_ADDR, UDP_DEST_ADDR, IP_len};
            // may need to change the chksum
            IP_payload <= next_IP_payload;
        end
    end

    assign IP_len = UDP_len + UDP_HEADER_LENGTH; 
    assign protocol_Data_len = UDP_len; 
    
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
        // IP_valid = 1'b0;
        next_IP_payload = '0; 
        UDP_last = 1'b0;
        casez(current_state)
            IDLE: begin
                if (valid) begin
                    //IP_valid = 1'b1; 
                    nstate = SEND_HEADER;
                    next_IP_payload = header_reg;
                end
            end

            SEND_HEADER: begin
                //source and destination addresses are flipped
                nstate = SEND_CHKSUM_PAYLOAD;
                // IP_valid = 1'b1;
                // chksum will be implemented later
                next_IP_payload = {16'b0, UDP_payload[47:0]};
            end

            SEND_CHKSUM_PAYLOAD: begin
                // nstate = (protocol_last)? DONE : SEND_PAYLOAD;
                nstate = SEND_PAYLOAD;
                next_IP_payload = UDP_payload;
            end

            SEND_PAYLOAD: begin
                // IP_valid = 1'b1;
                next_IP_payload = UDP_payload;
                if (protocol_last) begin
                    nstate = DONE;
                end else begin
                    nstate = SEND_PAYLOAD;
                end
            end

            DONE: begin
                UDP_last = 1'b1; //payload is done 
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
