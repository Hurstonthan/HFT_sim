`include "TCP_receiver_if.vh"


module TCP_receiver #(
    parameter WORD_WIDTH = 64,
    parameter OFF_SET = 5,
    parameter SRC_PORT = 16'h1234, // Example source port
    parameter DEST_PORT = 16'h5678, // Example destination port
    parameter IP_HEADER_LENGTH = 20
) (
    input wire CLK,
    input wire nRST,
    
    // Interface with the TCP flow logic
    TCP_receiver_if.rx_ctrl TCP_rx, // TCP receiver interface
);

    // Latching TCP_header signals
    logic [7:0] nTCP_control_rx; // Control flags    
    logic [31:0] nseq_num_rx, nACK_rx; // Sequence and acknowledgment numbers
    logic [3:0] noffset_rx; // Offset
    logic [15:0] nwindow_size_rx, nchecksum_rx, nurgent_pointer_rx; // Window size, checksum, and urgent pointer
    logic [15:0] checksum_rx, nchecksum_rx; // Checksum for received data
    logic [15:0] bytes_trk, nbytes_trk;
    logic [15:0] checksum_in;
    logic [16:0] TCP_checksum, nTCP_checksum;
    logic [7:0] TCP_data_dl, nTCP_data_dl;
    logic [63:0] nTCP_payload_rx;
    logic [63:0] IP_payload_rx;
    logic nTCP_valid, nrcv_data;
    logic checksum_en, nchecksum_en;
    
    assign IP_payload_rx =TCP_rx.IP_payload_rx;

    typedef enum logic [2:0] {
        IDLE,
        RCV_SEQ_ACK_OFFSET_FLAGS_WINDOWSIZE,
        RCV_WINDOWSIZE_CHECKSUM_URGENT_PAYLOAD,
        RCV_DATA,
        TCP_CHECKSUM,
        ERR_CASE
    } TCP_t;
    TCP_t state, nstate;

    always_ff @(posedge CLK or negedge nRST) begin
        if (!nRST) begin
            state <= IDLE;
            TCP_rx.TCP_control_rx <= '0;
            TCP_rx.seq_num_rx <= '0;
            TCP_rx.ACK_rx <= '0;
            TCP_rx.offset_rx <= '0;
            TCP_rx.window_size_rx <= '0;
            TCP_rx.checksum_rx <= '0;
            TCP_rx.urgent_pointer_rx <= '0;
            TCP_rx.TCP_len_data <= '0;
            TCP_checksum <= 0;
            TCP_rx.TCP_payload_rx <= 0;
            TCP_rx.TCP_valid <= 0;
            TCP_rx.rcv_data <= 0;
            bytes_trk <= '0;
            
        end else begin
            if (TCP_rx.IP_flush) begin
                state <= IDLE;
                TCP_rx.TCP_control_rx <= '0;
                TCP_rx.seq_num_rx <= '0;
                TCP_rx.ACK_rx <= '0;
                TCP_rx.offset_rx <= '0;
                TCP_rx.window_size_rx <= '0;
                TCP_rx.checksum_rx <= '0;
                TCP_rx.urgent_pointer_rx <= '0;
                TCP_rx.TCP_len_data <= '0;
                TCP_checksum <= 0;
                TCP_rx.TCP_payload_rx <= 0;
                TCP_rx.TCP_valid <= 0;
                TCP_rx.rcv_data <= 0;
                bytes_trk <= '0;
            end else begin
                state <= nstate;
                TCP_rx.TCP_control_rx <= nTCP_control_rx;
                TCP_rx.seq_num_rx <= nseq_num_rx;
                TCP_rx.ACK_rx <= nACK_rx;
                TCP_rx.offset_rx <= noffset_rx;
                TCP_rx.window_size_rx <= nwindow_size_rx;
                TCP_rx.checksum_rx <= nchecksum_rx;
                TCP_rx.urgent_pointer_rx <= nurgent_pointer_rx;
                TCP_rx.TCP_len_data <= TCP_rx.TCP_len;
                TCP_checksum <= {15'b0, nTCP_checksum[16]} + nTCP_checksum[15:0];
                TCP_rx.TCP_payload_rx <= nTCP_payload_rx;
                TCP_rx.TCP_valid <= nTCP_valid;
                TCP_rx.rcv_data <= nrcv_data;
                bytes_trk <= nbytes_trk;
            end

        end
    end

    //Next state logic
    always_comb begin
        nstate = state; // Default to current state
        nbytes_trk = 0; // Default to current bytes tracked
        nTCP_checksum = TCP_checksum;
        nTCP_len_data = TCP_rx.TCP_len_data; // Default to current length
        nTCP_payload_rx = TCP_rx.TCP_payload_rx;
        nTCP_valid = TCP_valid;
        nTCP_control_rx = TCP_rx_control_rx;
        nseq_num_rx     = TCP_rx.seq_num_rx;
        nACK_rx         = TCP_rx.ACK_rx;
        noffset_rx      = TCP_rx.offset_rx;
        nwindow_size_rx = TCP_rx.window_size_rx;
        nchecksum_rx    = TCP_rx.checksum_rx;
        nurgent_pointer_rx = TCP_rx.urgent_pointer_rx;
        nrcv_data = 1'b0;
        TCP_rx.TCP_flush = 0;

        case (state)
            IDLE: begin
                if (TCP_rx.IP_header_rx && IP_payload_rx[63:48] == SRC_PORT && 
                    IP_payload_rx[47:32] == DEST_PORT) begin
                    nseq_num_rx[31:16] = IP_payload_rx[31:16]; // Extract sequence number
                    nstate = RCV_SEQ_ACK_OFFSET_FLAGS_WINDOWSIZE;
                    nTCP_checksum = IP_payload_rx[63:48] + IP_payload_rx[47:32] + IP_payload_rx[31:16] + TCP_rx.IP_pseuder;
                    end else begin
                        nstate = ERR_CASE; // Invalid header, go to error case
                    end
            end

            RCV_SEQ_ACK_OFFSET_FLAGS_WINDOWSIZE: begin
                nseq_num_rx[15:0] = IP_payload_rx[63:48]; // Extract sequence number
                nACK_rx = IP_payload_rx[47:16]; // Extract acknowledgment number
                noffset_rx = IP_payload_rx[15:12]; // Extract offset
                nTCP_control_rx = IP_payload_rx[7:0]; // Extract control flags
                // nwindow_size_rx[15:8] = IP_payload_rx[7:0]; // Extract window size
                nTCP_checksum = IP_payload_rx[63:48] + IP_payload_rx[47:32] + IP_payload_rx[31:16] + IP_payload_rx[15:0];
                nstate = RCV_WINDOWSIZE_CHECKSUM_URGENT_PAYLOAD;
            end


            RCV_WINDOWSIZE_CHECKSUM_URGENT_PAYLOAD: begin
                nwindow_size_rx[15:0] = IP_payload_rx[63:48]; // Extract window size
                nchecksum_rx = IP_payload_rx[47:32]; // Extract checksum
                nurgent_pointer_rx = IP_payload_rx[31:16]; // Extract urgent pointer
                nTCP_checksum = IP_payload_rx[63:48] + 16'h0 + IP_payload_rx[31:16] + IP_payload_rx[15:0];
                nTCP_valid = 1'b1;
                nTCP_payload_rx = IP_payload_rx[15:0];
                nbytes_trk = bytes_trk + 2;
                nstate = RCV_DATA;
            end



            RCV_DATA: begin
                // Process the received data here (e.g., store it, send ACK, etc.)
                nbytes_trk = bytes_trk + 8; // Increment bytes tracked
                nTCP_checksum = IP_payload_rx[63:48] + IP_payload_rx[47:32] + IP_payload_rx[31:16] + IP_payload_rx[15:0];
                TCP_rx.TCP_payload_rx = IP_payload_rx; // Store received payload     
                if (bytes_trk + 8 < TCP_len_data) begin
                    nbytes_trk = bytes_trk + 8;
                end else begin
                    nbytes_trk = bytes_trk + ((bytes_trk + 8) - TCP_len_data);
                    nTCP_valid = 1'b0;
                    nstate = TCP_CHECKSUM; // Go back to IDLE after processing all data
                end
            end

            TCP_CHECKSUM: begin
                if (~TCP_checksum == checksum_rx) begin
                    nrcv_data = 1'b1;
                    nstate = IDLE;
                end else begin
                    nstate = ERR_CASE;
                end
            end

            ERR_CASE: begin
                TCP_rx.TCP_flush = 1'b1;
                if (!TCP_rx.valid_IP_header_rx) begin
                    nstate = ERR_CASE;
                end
            end
        endcase
        

    end


endmodule