`include "ether_pkg.vh"
module TCP_tx #(
    parameter WORD_WIDTH = 64
    parameter OFF_SET = 5,
    parameter SRC_PORT = 16'h1234, // Example source port
    parameter DEST_PORT = 16'h5678  // Example destination port

) (
    input logic CLK,
    input logic nRST,
    input logic TCP_tx_en,
    input logic [7:0] TCP_control_tx,
    input logic [31:0] seq_num_tx,
    input logic [31:0] ACK_tx,
    input logic [3:0] offset_tx,
    input logic [15:0] window_size_tx,
    input logic [15:0] urgent_pointer_tx,
    input logic [15:0] TCP_basesum_payload,
    input logic [WORD_WIDTH - 1 : 0] TCP_payload_tx,
    input logic [15:0] bytes_abt_sent;

    output logic SYN_sent, FIN_sent,
    output logic [17:0] bytes_sent,
    // Interface between TCP_tx and IP_tx
    input logic TCP_send,
    output logic [WORD_WIDTH - 1 : 0] TCP_transmit
);

import ether_pkg::*;

logic [15:0] src_port, dest_port;
logic [17:0] nbytes_sent;
logic [16:0] TCP_checksum, nTCP_checksum;
logic valid_checksum;

assign src_port = SRC_PORT;
assign dest_port = DEST_PORT;


typedef enum logic [6:0] {
    IDLE,
    SEND_SRC_DEST_SEQ,
    SEND_SEQ_ACK_OFFSET_FLAGS_WINDOWSIZE,
    SEND_WINDOWSIZE_CHECKSUM_URGENT_PAYLOAD,
    SEND_TCP_PAYLOAD,
} TCP_state_t;


TCP_state_t state, nstate;
logic [WORD_WIDTH - 1: 0] nTCP_transmit;

always_ff @(posedge CLK, negedge nRST) begin
    if (!nRST) begin
        state <= '0;
        TCP_transmit <= '0;
        bytes_sent <= '0;
        TCP_checksum <= '0;
    end else begin
        state <= nstate;
        TCP_transmit <= nTCP_transmit;
        bytes_sent <= nbytes_sent;
        TCP_checksum <= ~(nTCP_checksum[15:0] + nTCP_checksum[16]);
    end
end

always_comb begin
    nTCP_checksum = TCP_checksum;
    if (valid_checksum) begin
        //EC1A include Pseudo header, src port, dest_port, window size
        nTCP_checksum = 16'hEC42 
                        + bytes_abt_sent 
                        + seq_num_tx[31:16] 
                        + seq_num_tx[15:0] 
                        + ACK_tx[31:16] 
                        + ACK_tx[15:0] 
                        + {offset_tx, 4'b0000, TCP_control_rx} 
                        + urgent_pointer_tx 
                        + TCP_basesum_payload;
    end
end
always_comb begin
    nstate = state;
    nTCP_transmit = TCP_transmit;
    nbytes_sent = bytes_sent;
    seq_up = 1'b0; // Reset sequence update flag
    valid_checksum = 1'b0;
    case(state)
        IDLE: begin
            if (TCP_send) begin
                nstate = SEND_SRC_DEST_SEQ;
                nTCP_transmit = {8'b0,src_port, dest_port, seq_num_tx[31:8]}; // Send source port, destination port, and the first 24 bits of sequence number
            end
        end

        SEND_SEQ_ACK_OFFSET_FLAGS_WINDOWSIZE: begin
            valid_checksum = 1'b1;
            nTCP_tranmit = {seq_num_tx[7:0], ACK_tx, offset_tx, TCP_control_tx, window_size_tx[15:8]}; // Send the last 8 bits of sequence number, ACK number, offset, control flags, and window size
        end

        SEND_WINDOWSIZE_CHECKSUM_URGENT_PAYLOAD: begin
            nTCP_transmit = {window_size_tx[7:0], TCP_checksum[15:0], urgent_pointer_tx, TCP_payload_tx[23:0]}; // Send the last 8 bits of window size, checksum, urgent pointer, and 24 bits of zero padding
            nbytes_sent = bytes_sent + 18'd3; // Update the number of bytes sent
        end

        SEND_TCP_PAYLOAD: begin
            nTCP_transmit = TCP_payload_tx; // Send the rest of the TCP payload
            nbytes_sent = bytes_sent + 18'd8; // Update the number of bytes sent
            if (TCP_send && (TCP_control_tx[1] || TCP_control_tx[0])) begin
                {SYN_sent, FIN_sent} = TCP_control_tx[1:0]; // Reset SYN and FIN flags
                nbytes_sent = bytes_sent + 18'd1; // Update the number of bytes sent
                nstate = IDLE; // Go back to IDLE after sending the payload
                seq_up = 1'b1; // Indicate that the sequence number should be updated
            end else if (TCP_send) begin
                nstate = IDLE; // Go back to IDLE after sending the payload
                seq_up = 1'b1;
            end
        end
    endcase
end




endmodule