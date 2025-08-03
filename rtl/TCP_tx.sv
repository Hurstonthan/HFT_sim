`include "ether_pkg.vh"
module TCP_tx #(
    parameter DATA_WIDTH = 64,
    parameter OFF_SET = 5,
    parameter SRC_PORT = 16'h1234, // Example source port
    parameter DEST_PORT = 16'h5678  // Example destination port

) (
    input logic CLK,
    input logic nRST,
    input logic [7:0] TCP_control_tx,
    input logic [31:0] seq_num_tx,
    input logic [31:0] ACK_tx,
    input logic [3:0] offset_tx,
    input logic [15:0] window_size_tx,
    input logic [15:0] urgent_pointer_tx,
    
    
    output logic rd_FIFO_en,
    input  logic rd_FIFO_valid,
    input  logic rd_FIFO_last,
    input  logic [DATA_WIDTH - 1 : 0] rd_FIFO_payload,

    input logic [31:0] bytes_abt_sent,
    

    output logic seq_up,
    output logic [31:0] bytes_sent,
    

    // Interface between TCP_tx and IP_tx
    input logic TCP_send,
    output logic TCP_tx_valid,
    output logic TCP_tx_last,
    output logic [DATA_WIDTH - 1 : 0] TCP_transmit,
    input logic [15:0] TCP_basesum_payload
    
);

import ether_pkg::*;

logic [15:0] src_port, dest_port;
logic [31:0] nbytes_sent;
logic [16:0] TCP_checksum, nTCP_checksum;
logic valid_checksum;

assign src_port = SRC_PORT;
assign dest_port = DEST_PORT;


typedef enum logic [6:0] {
    IDLE,
    SEND_SRC_DEST_SEQ,
    SEND_SEQ_ACK_OFFSET_FLAGS_WINDOWSIZE,
    SEND_WINDOWSIZE_CHECKSUM_URGENT_PAYLOAD,
    SEND_TCP_PAYLOAD
} TCP_state_t;


TCP_state_t state, nstate;
logic [DATA_WIDTH - 1: 0] nTCP_transmit;
logic [19:0] temp;
logic nTCP_tx_valid, nTCP_tx_last;
logic nseq_up;


//TCP_tx implementation for avoiding 2 bytes
logic [47:0] frame_hold, nframe_hold;

always_ff @(posedge CLK, negedge nRST) begin
    if (!nRST) begin
        state <= IDLE;
        TCP_transmit <= '0;
        bytes_sent <= '0;
        TCP_checksum <= '0;
        seq_up <= 1'b0;
        TCP_tx_valid <= 0;
        TCP_tx_last <= 0;
        frame_hold <= 0;
    end else begin
        state <= nstate;
        TCP_transmit <= nTCP_transmit;
        TCP_tx_valid <= nTCP_tx_valid;
        TCP_tx_last <= nTCP_tx_last;
        bytes_sent <= nbytes_sent;
        seq_up <= nseq_up;
        frame_hold <= nframe_hold;
        if (valid_checksum) begin
            TCP_checksum <= ~(nTCP_checksum);
        end else begin
            TCP_checksum <= nTCP_checksum; // Keep the previous checksum if not valid
        end

    end
end

always_comb begin
    nTCP_checksum = TCP_checksum;
    if (valid_checksum) begin
        //EC42 include Pseudo header, src port, dest_port, window size
        temp =  16'hEC42 
                        + bytes_abt_sent[15:0] 
                        + seq_num_tx[31:16] 
                        + seq_num_tx[15:0] 
                        + ACK_tx[31:16] 
                        + ACK_tx[15:0] 
                        + {offset_tx, 4'b0000, TCP_control_tx} 
                        + urgent_pointer_tx 
                        + TCP_basesum_payload;
        temp = temp[15:0] + temp[19:16];
        temp = temp[15:0] + temp[16];
        nTCP_checksum = temp[16:0];
    end
end
always_comb begin
    nstate = state;
    nTCP_transmit = TCP_transmit;
    nTCP_tx_valid = TCP_tx_valid;
    nTCP_tx_last = TCP_tx_last;
    nbytes_sent = bytes_sent;
    valid_checksum = 1'b0;
    rd_FIFO_en = 1'b0; // Reset read enable flag
    nseq_up = 1'b0; // Reset sequence update flag for next state
    nframe_hold = frame_hold;



    case(state)
        IDLE: begin
            nTCP_tx_last = 1'b0;
            if (TCP_send) begin
                nstate = SEND_SRC_DEST_SEQ;
                nTCP_transmit = {16'b0,src_port, dest_port, seq_num_tx[31:16]}; // Send source port, destination port, and the first 24 bits of sequence number
            end
        end

        SEND_SRC_DEST_SEQ: begin
            nstate = SEND_SEQ_ACK_OFFSET_FLAGS_WINDOWSIZE;
            rd_FIFO_en = 1'b1;
            nTCP_transmit = {seq_num_tx[15:0], ACK_tx, {offset_tx, 4'b0}, TCP_control_tx}; // Send the last 8 bits of sequence number, ACK number, offset, control flags, and window size
            valid_checksum = 1'b1; // Enable checksum calculation
        end

        SEND_SEQ_ACK_OFFSET_FLAGS_WINDOWSIZE: begin
            valid_checksum = 1'b0;
            rd_FIFO_en = 1'b1;
            //nTCP_transmit = {window_size_tx[15:0], TCP_checksum[15:0], urgent_pointer_tx, 16'd0};// Send the last 8 bits of window size, checksum, urgent pointer, and 24 bits of zero padding
            nTCP_transmit = {window_size_tx[15:0], TCP_checksum[15:0], urgent_pointer_tx, rd_FIFO_payload[63:48]};// Send the last 8 bits of window size, checksum, urgent pointer, and 16 bits of data
            nframe_hold = rd_FIFO_payload[47:0];
            nstate = SEND_WINDOWSIZE_CHECKSUM_URGENT_PAYLOAD; // Move to the next state
            

            if (bytes_abt_sent > 2) begin
                nstate = SEND_WINDOWSIZE_CHECKSUM_URGENT_PAYLOAD; // Move to the next state
            end else begin
                nstate = IDLE;
                nseq_up = 1;
                nTCP_tx_last = 1;    
            end
        end

        SEND_WINDOWSIZE_CHECKSUM_URGENT_PAYLOAD: begin
            rd_FIFO_en = 1'b1; // Enable read from FIFO
            if (|bytes_abt_sent) begin
                nTCP_transmit = {frame_hold, rd_FIFO_payload[63:48]}; // Send the TCP payload
                nframe_hold = rd_FIFO_payload[47:0];
                nstate = SEND_TCP_PAYLOAD; // Move to the next state
            end else begin
                nstate = IDLE;
                nTCP_tx_last = 1'b1;
                nseq_up = 1'b1;
            end

            // nbytes_sent = bytes_sent + 18'd3; // Update the number of bytes sent
        end

        SEND_TCP_PAYLOAD: begin
            rd_FIFO_en = 1'b1; // Enable read from FIFO
            nTCP_transmit = {frame_hold, rd_FIFO_payload[63:48]}; // Send the TCP payload
                nframe_hold = rd_FIFO_payload[47:0];
            

            // if (bytes_sent >= bytes_abt_sent - 1) begin
            //     nstate = IDLE;
            //     nseq_up = 1'b1; // Indicate that the sequence number should be updated
            //     if (TCP_control_tx[1] || TCP_control_tx[0]) begin
            //         nbytes_sent = bytes_sent + 32'd1; // Update the number of bytes sent
            //     end
            // end
            
            if (rd_FIFO_last) begin
                nstate = IDLE;
                nTCP_tx_last = 1'b1;
                nseq_up = 1'b1; // Indicate that the sequence number should be updated
                if (TCP_control_tx[1] || TCP_control_tx[0]) begin
                    nbytes_sent = bytes_sent + 32'd1; // Update the number of bytes sent
                end
            end

            // if (!TCP_send && (TCP_control_tx[1] || TCP_control_tx[0])) begin 
            //     nbytes_sent = bytes_sent + 32'd1; // Update the number of bytes sent
            //     nstate = IDLE; // Go back to IDLE after sending the payload
            //     seq_up = 1'b1; // Indicate that the sequence number should be updated
            // end else if (!TCP_send) begin
            //     nstate = IDLE; // Go back to IDLE after sending the payload
            //     seq_up = 1'b1;
            // end
        end
    endcase
end




endmodule
