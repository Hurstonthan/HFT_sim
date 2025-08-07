`timescale 1ns / 10ps
`include "TCP_flow_if.vh"
`include "ether_pkg.vh"

module TCP_flow_ctrl #(
    parameter N = 10,
    parameter int FIFO_DEPTH  = 2048,               // words  (must be power‑of‑2)
    parameter int FIFO_WIDTH = $clog2(FIFO_DEPTH)

) (
    input logic CLK,
    input logic nRST,

    input logic rcv_data,
    input logic [7:0] TCP_control_rx,
    input logic [31:0] seq_num_rx,
    input logic [31:0] ACK_rx,
    input logic [3:0] offset_rx,
    input logic [15:0] window_size_rx,
    input logic [15:0] checksum_rx,
    input logic [15:0] urgent_pointer_rx,
    
    input logic end_ss,
    // output logic TCP_tx_en,
    input logic seq_up,
    output logic [7:0] TCP_control_tx,
    output logic [31:0] seq_num_tx,
    output logic [31:0] ACK_tx,
    output logic [3:0] offset_tx,
    output logic [15:0] window_size_tx,
    // output logic [15:0] checksum_tx,
    output logic [15:0] urgent_pointer_tx,
    output logic TCP_stop_flg,
    
    input logic full,
    input logic timeout_flag,
    output logic hand_shake_done,
    output logic [31:0] seq_rcv_str,
    input logic [31:0] ISN_num,
    input logic [31:0] bytes_sent,
    input logic [31:0] bytes_abt_sent,
    input logic TCP_last,
    output logic [31:0] rcv_next_out,
    output logic [31:0] seq_num_out,
    input logic [31:0] seq_rx_FIFO_rd,
    input logic [7:0] TCP_bytes_trk,
    output logic [7:0] wr_FIFO_offset,
    input logic [7:0] wr_FIFO_len,
    output logic [7:0] rd_FIFO_len,
    input logic [FIFO_WIDTH - 1:0] wr_FIFO_ptr,
    output logic [FIFO_WIDTH - 1:0] rd_FIFO_ptr,
    output logic wr_FIFO_en,
    input logic rd_FIFO_en,
    input logic nw_segment,
    input logic TCP_flush,
    output logic rd_FIFO_valid,

    output logic [31:0] ACK_num,
    output logic ACK_rcv_flag,
    output logic out_order_req,

    //Timeout
    output logic count_en_timeout,
    output logic clear_timeout

);

    import ether_pkg::*;
    typedef enum logic [6:0] {
        IDLE,
        SEND_SYN_ACK,
        WAIT_ACK,
        WAIT_SYN_ACK,
        SEND_ACK,
        DATA_CONNECTED,
        FLUSH_DATA,
        SEND_FIN,
        WAIT_FIN_SERVER,
        SEND_ACK_END
    } TCP_state_t;

    typedef enum logic [1:0] {
        non_overlap = 2'b00,
        left_trim = 2'b01,
        right_trim = 2'b10,
        overlap = 2'b11
    } case_debug_t;

    typedef struct packed {
        logic v;
        logic [31:0] seq_num;
        logic [31:0] seq_length;
        logic [15:0] rd_ptr;
        logic [15:0] length_ptr;
        
    } TCP_order_t;

    case_debug_t case_bug;
    logic case_bug_0;


    TCP_state_t state, nstate;
    TCP_control_t rcv_pkg_type;
    TCP_control_t tx_pkg_type;
    ack_num_frame ack_num, nack_num;
    seq_num_frame seq_num, nseq_num;
    logic [15:0] window_size, nwindow_size;
    logic [31:0] bytes_in_flight;
    logic [31:0] wnd_allow;
    logic nhand_shake_done;
    logic [31:0] nseq_rcv_str;
    logic ncount_en_timeout, nclear_timeout;


    
    TCP_order_t  nTCP_order [N-1:0]; 
    TCP_order_t TCP_order  [N-1:0];
    
    
    logic [31:0] rcv_next, nrcv_next;
    logic [31:0] rcv_next_prev;
    logic out_of_order_flg; //This flag is for handling the out of order packets

    logic nout_order_req;
    logic [31:0] seq_tx_retrans, nseq_tx_retrans;

    logic [$clog2(N)-1:0] free_idx, match_idx;;
    logic [N - 1:0] v_vec, free_vec; //Vector of valid bits for the out of order packets
    logic [31:0] [N - 1 : 0] seq_vec;
    logic free_mask, match_found;
    logic [3:0] flush_ptr, nflush_ptr, len_flush_ptr;
    logic [7:0] nlen_flush_ptr;
    logic debug;
    // logic overlap_condition;
    genvar  k;

    //Masking conditions for handle triming cases
    logic [N - 1:0] match_mask;
    logic [N -1 : 0] overlap_mask, left_trim_mask, right_trim_mask;
    logic [$clog2(N) - 1:0] lt_idx, rt_idx, ov_idx;



    //New out of order handle in Tripping and slice case
    logic [31:0] seq_rx_trk, nseq_rx_trk, seq_rx_str, nseq_rx_str;
    logic [7:0] bytes_drop, bytes_left;
    logic [N-1:0][3:0] flush_list, nflush_list;

    // assign TCP_len_data = bytes_abt_sent;
    assign TCP_control_tx = tx_pkg_type;
    assign rcv_next_out = rcv_next;
    assign seq_num_out = seq_num.seq_num;
    assign ACK_num = ACK_rx;
    assign ACK_rcv_flag = rcv_data && rcv_pkg_type.ACK ;
    assign debug = TCP_last ? seq_num.valid : 1;
    

    
    // initial begin
    //     $display("CLK : %d", CLK);
    //     for (int i = 0; i < N; i++) begin
    //         $display("Entry %d: seq_num: %d, seq_length: %d, rd_ptr: %d, length_ptr: %d, v: %d", i,TCP_order[i].seq_num, TCP_order[i].seq_length, TCP_order[i].rd_ptr, TCP_order[i].length_ptr, TCP_order[i].v);
    //     end
    // end
    generate
        for (k = 0; k < N; k++) begin
            assign v_vec[k] = TCP_order[k].v;
        end
    endgenerate

    generate
        for (k = 0; k< N; k++) begin
            assign overlap_mask[k]    = ((TCP_order[k].v && ((seq_rx_trk + TCP_bytes_trk < TCP_order[k].seq_length) && (seq_rx_trk >= TCP_order[k].seq_num))) || (seq_rx_trk + TCP_bytes_trk < rcv_next));
            assign left_trim_mask[k]  = (TCP_order[k].v && (seq_rx_trk < TCP_order[k].seq_length) && (seq_rx_trk + TCP_bytes_trk >= TCP_order[k].seq_length));
            assign right_trim_mask[k] = TCP_order[k].v && (seq_rx_trk < TCP_order[k].seq_num) && (seq_rx_trk + TCP_bytes_trk > TCP_order[k].seq_num);
        end
    endgenerate
    assign free_vec = ~v_vec; //Mask of free bits for the out of order packets

    for (genvar i = 0; i < N; i++) begin
        assign match_mask[i] = ((rcv_next == TCP_order[i].seq_num) && TCP_order[i].v); //Mask of matched bits for the out of order packets
    end

    priority_encoder #(
        .WIDTH(N)
    ) me (
        .din(match_mask),
        .valid(match_found),
        .idx(match_idx)
    );

    priority_encoder #(
        .WIDTH(N)
    ) pe (
        .din(free_vec),
        .valid(free_mask),
        .idx(free_idx)
    );

    
    //Convert idx for getting right trim left trim overlap case
    priority_encoder #(
        .WIDTH(N)
    ) lt (
        .din(left_trim_mask),
        .valid(),
        .idx(lt_idx)
    );
    priority_encoder #(
        .WIDTH(N)
    ) rt (
        .din(right_trim_mask),
        .valid(),
        .idx(rt_idx)
    );
    priority_encoder #(
        .WIDTH(N)
    ) ov (
        .din(overlap_mask),
        .valid(),
        .idx(rt_idx)
    );
    

    //Explanation
    // "bytes in flight" is the number of bytes that have been sent but not yet acknowledged.
    // "bytes_send" is the number of bytes have sent
    // "bytes_abt_send" is the number of bytes that are about to be sent
    // "ack_num.ACK_num" is the number of bytes that have been acknowledged
    // assign bytes_in_flight = (bytes_sent + bytes_abt_sent) - (ack_num.ACK_num - ISN_num); //THIS IS CORRECT
    //assign bytes_in_flight = (bytes_sent + bytes_abt_sent) - (ack_num.ACK_num); //Assume that the ISN_num is 0
    assign bytes_in_flight = (seq_num.seq_num + bytes_abt_sent) - (ack_num.ACK_num - ISN_num); //Assume that the ISN_num is 0
    assign wnd_allow = {15'd0,window_size} - bytes_in_flight; //This is the number of bytes that can be sent
    assign rcv_pkg_type = TCP_control_t'(TCP_control_rx);



    always_ff @(posedge CLK, negedge nRST) begin
        if (!nRST) begin
            seq_rx_trk <= 0;
            flush_ptr <= 0;
            flush_list <= 0;
            len_flush_ptr <= 0;
            hand_shake_done <= 0;
            seq_rcv_str <= 0;
            out_order_req <= 0;
            seq_tx_retrans <=0;
            seq_rx_str <= 0;
            rcv_next_prev <= 0;
            count_en_timeout <= 0;
            clear_timeout <= 0;
        end else if (TCP_flush) begin
            seq_rx_trk <= 0;
            flush_ptr <= nflush_ptr;
            flush_list <= nflush_list;
            len_flush_ptr <= nlen_flush_ptr;
            out_order_req <= 0;
            seq_tx_retrans <=0;
            seq_rx_str <= 0;
        end
        else begin
            seq_rx_trk <= nseq_rx_trk;
            flush_ptr <= nflush_ptr;
            len_flush_ptr <= nlen_flush_ptr;
            flush_list <= nflush_list;
            hand_shake_done <= nhand_shake_done;
            seq_rcv_str <= nseq_rcv_str;
            out_order_req <= nout_order_req;
            seq_tx_retrans <= nseq_tx_retrans;
            seq_rx_str <= nseq_rx_str;
            count_en_timeout <= ncount_en_timeout;
            clear_timeout <= nclear_timeout;
            if (!nw_segment) begin
                rcv_next_prev <= rcv_next;
            end

        end
    end
    always_ff @(posedge CLK, negedge nRST) begin
        if (!nRST) begin
            ack_num <= '0;
            seq_num.valid <= 1'b0;
            seq_num.seq_num <= ISN_num; //Set the initial sequence number
            window_size <= 16'd40; //Set the initial number
            // TCP_order <= 0;
            for (int x = 0; x < N; x++) begin
                TCP_order[x] <= 0;
            end
            rcv_next <= '0;
            state <= IDLE;
        end 
        else begin
            ack_num <= nack_num;
            seq_num <= nseq_num;
            window_size <= nwindow_size;
            TCP_order <= nTCP_order;
            // TCP_order <= '1;

            for (int x = 0; x < N; x++) begin
                TCP_order[x] <= nTCP_order[x];
            end
            
            state <= nstate;
            if (match_found) begin
                rcv_next <= TCP_order[match_idx].seq_length; //Update the next sequence number to receive
                // if (TCP_order[match_idx].seq_num == rcv_next) begin
                //     // rcv_next <= rcv_next + TCP_order[match_idx].seq_length; //Update the next sequence number to receive
                //     rcv_next <= TCP_order[match_idx].seq_length; //Update the next sequence number to receive
                //     //TCP_order[match_idx].v <= 1'b0; //Set the valid bit to 0
                // end 
                //else if (rcv_next > TCP_order[match_idx].seq_num) begin
                //     //Need to check this logic
                //     if (rcv_next >= TCP_order[match_idx].seq_num + TCP_order[match_idx].length) begin
                //         TCP_order[match_idx].v <= 1'b0; //Set the valid bit to 0
                //     end else begin
                //         TCP_order[match_idx].seq_num <= rcv_next;
                //         TCP_order[match_idx].length <= (TCP_order[match_idx].seq_num + TCP_order[match_idx].length) - (rcv_next);
                //     end
                // end
            end
            else begin
                rcv_next <= nrcv_next;
            end

            
        end
    end 
    

    // always_ff @(posedge CLK) begin
    //     $display("[%0t] nRST=%0b  nTCP_order[0].v=%0b  TCP_order[0].v=%0b  debug=%0b",
    //          $time, nRST, nTCP_order[0].v, TCP_order[0].v, debug);
    // end

    always_comb begin //NEXT_STAGE logic
        nstate = state;
        nack_num = ack_num;
        nseq_num = seq_num;
        nwindow_size = window_size;
        nTCP_order = TCP_order;
        TCP_stop_flg = 1'b0;
        nrcv_next = rcv_next;
        out_of_order_flg = 1'b0; //Reset the out of order flag

        nseq_rx_trk = seq_num_rx;
        nseq_rx_str = seq_num_rx;
        bytes_left = 0;
        bytes_drop = 0;

        wr_FIFO_en = nw_segment;
        wr_FIFO_offset = 0;
        rd_FIFO_ptr = 0;
        rd_FIFO_len = 0;
        rd_FIFO_valid = 1'b0;

        nflush_list =flush_list;
        nflush_ptr = flush_ptr;
        nlen_flush_ptr = len_flush_ptr;

        case_bug = case_debug_t'(2'b00);
        case_bug_0 = 1'b0;

        //Case for handshake
        nseq_rcv_str = seq_rcv_str;
        nout_order_req = out_order_req;
        nseq_tx_retrans = seq_tx_retrans;

        //TIMEOUT FLAG LOGIC
        ncount_en_timeout = count_en_timeout;
        nclear_timeout = 1'b0;

        
        ///////////////////////TRIMMING CASE ////////////////////////
        if (nw_segment) begin
            //Case 1: Full overlap
            nseq_rx_trk = seq_rx_trk + TCP_bytes_trk;
            nseq_rx_str = seq_rx_str;
            if (seq_rx_trk == rcv_next) begin
                nrcv_next = rcv_next + TCP_bytes_trk;
            end

            if (|overlap_mask) begin
                case_bug = overlap;
                nseq_rx_str = TCP_order[ov_idx].seq_length;
                wr_FIFO_en = 1'b0;
                if (seq_rx_trk == rcv_next) begin
                    nrcv_next = TCP_order[ov_idx].seq_length;
                end
            end
            //Case 2: right trim
            //seq_rx_trk < TCP_order[i].seq_num && seq_rx_trk + TCP_bytes_trk > TCP_order[i].seq_num
            else if (|right_trim_mask) begin
                case_bug = right_trim;
                //case_bug_0 = 1'b1;
                //I'm about to enter the overlap segment
                //I'm still write the data
                bytes_drop = seq_rx_trk + TCP_bytes_trk - TCP_order[rt_idx].seq_num;
                bytes_left = TCP_bytes_trk - bytes_drop;
                // nseq_rx_trk = seq_rx_trk + bytes_left;
                wr_FIFO_offset = (8'hFF << bytes_drop);
                // if (rcv_next == seq_rx_trk) begin
                //     nrcv_next = TCP_order[rt_idx].seq_length;
                // end

                ///This is where we meet overlap and finish a segment
                if (free_mask) begin
                    nTCP_order[free_idx].seq_num = seq_rx_str;
                    nTCP_order[free_idx].seq_length = seq_rx_trk + bytes_left;
                    nTCP_order[free_idx].rd_ptr = wr_FIFO_ptr;
                    nTCP_order[free_idx].length_ptr = wr_FIFO_len + 1;//length_ptr will be 
                    nTCP_order[free_idx].v = 1'b1;//length_ptr will be 
                    nflush_list[len_flush_ptr] = free_idx;
                    nlen_flush_ptr = len_flush_ptr + 1;
                end
                // if (seq_num_rx == rcv_next) begin
                //     nrcv_next = seq_rx_trk + bytes_left;
                // end
            end

            //Case 3: left trim
            else if (|left_trim_mask) begin
                case_bug = left_trim;
                case_bug_0 = 1'b1;
                bytes_drop = (TCP_order[lt_idx].seq_length) - seq_rx_trk;
                bytes_left = TCP_bytes_trk - bytes_drop;
                // nseq_rx_trk = seq_rx_trk + bytes_left;
                nseq_rx_trk = seq_rx_trk + TCP_bytes_trk;
                nseq_rx_str = TCP_order[lt_idx].seq_length;
                wr_FIFO_offset = (8'hFF >> bytes_drop);
                // if ((seq_rx_trk + TCP_bytes_trk) > rcv_next) begin
                //     nrcv_next = seq_rx_trk + TCP_bytes_trk;
                // end
                if (free_mask && TCP_last) begin 
                    // case_bug = right_trim;
                    nTCP_order[free_idx].seq_num = TCP_order[lt_idx].seq_length;
                    nTCP_order[free_idx].seq_length = seq_rx_trk + TCP_bytes_trk;
                    nTCP_order[free_idx].rd_ptr = wr_FIFO_ptr;
                    nTCP_order[free_idx].length_ptr = wr_FIFO_len;//length_ptr will be 
                    nTCP_order[free_idx].v = 1'b1;
                    nflush_list[len_flush_ptr] = free_idx;
                    nlen_flush_ptr = len_flush_ptr + 1;
                end
            end

            //Case 4: Non overlap
            else begin
                case_bug = non_overlap;
                // wr_FIFO_en = 1'b1;
                wr_FIFO_offset = 8'hFF >> (8 - TCP_bytes_trk);
                if (free_mask && TCP_last) begin 
                    // case_bug = right_trim;
                    nTCP_order[free_idx].seq_num = seq_rx_str;
                    nTCP_order[free_idx].seq_length = seq_rx_trk + TCP_bytes_trk;
                    nTCP_order[free_idx].rd_ptr = wr_FIFO_ptr;
                    nTCP_order[free_idx].length_ptr = wr_FIFO_len + 1;//length_ptr will be 
                    nTCP_order[free_idx].v = 1'b1;
                    nflush_list[len_flush_ptr] = free_idx;
                    nlen_flush_ptr = len_flush_ptr + 1;
                end
            end
        end
        ////////////////////////////////////////////////////////////

        //Receiving // Writing logic
        //seq_rx_trk is the start of the sequence number rx       
        for (int i = 0; i < N; i = i + 1) begin
            // if (nw_segment) begin
            //     //Case 1: Full overlap
            //     nseq_rx_trk = seq_rx_trk + TCP_bytes_trk;
            //     if (TCP_order[i].v && (seq_rx_trk >= TCP_order[i].seq_num) && (seq_rx_trk + TCP_bytes_trk < (TCP_order[i].seq_length))) begin
            //         case_bug = overlap;
            //         wr_FIFO_en = 1'b0;
            //     end

            //     //Case 2: right trim
            //     //seq_rx_trk < TCP_order[i].seq_num && seq_rx_trk + TCP_bytes_trk > TCP_order[i].seq_num
            //     else if (TCP_order[i].v && (seq_rx_trk < TCP_order[i].seq_num) && (seq_rx_trk + TCP_bytes_trk > TCP_order[i].seq_num)) begin
            //         case_bug = right_trim;
            //         //case_bug_0 = 1'b1;
            //         //I'm about to enter the overlap segment
            //         //I'm still write the data
            //         bytes_drop = seq_rx_trk + TCP_bytes_trk - TCP_order[i].seq_num;
            //         bytes_left = TCP_bytes_trk - bytes_drop;
            //         // nseq_rx_trk = seq_rx_trk + bytes_left;
            //         wr_FIFO_offset = (8'hFF << bytes_drop);

            //         ///This is where we meet overlap and finish a segment
            //         if (free_mask) begin
            //             nTCP_order[free_idx].seq_num = seq_num_rx;
            //             nTCP_order[free_idx].seq_length = seq_rx_trk + bytes_left;
            //             nTCP_order[free_idx].rd_ptr = wr_FIFO_ptr;
            //             nTCP_order[free_idx].length_ptr = wr_FIFO_len;//length_ptr will be 
            //             nTCP_order[free_idx].v = 1'b1;//length_ptr will be 
            //             nflush_list[len_flush_ptr] = free_idx;
            //             nlen_flush_ptr = len_flush_ptr + 1;
            //         end
            //         if (seq_num_rx == rcv_next) begin
            //             nrcv_next = seq_rx_trk + bytes_left;
            //         end
            //     end

            //     //Case 3: left trim
            //     else if (TCP_order[i].v && (seq_rx_trk < TCP_order[i].seq_length) && (seq_rx_trk + TCP_bytes_trk >= TCP_order[i].seq_length)) begin
            //         case_bug = left_trim;
            //         case_bug_0 = 1'b1;
            //         bytes_drop = (TCP_order[i].seq_length) - seq_rx_trk;
            //         bytes_left = TCP_bytes_trk - bytes_drop;
            //         nseq_rx_trk = seq_rx_trk + bytes_left;
            //         //wr_FIFO_offset = (8'hFF >> bytes_drop);
            //         wr_FIFO_offset = 0;
            //     end

            //     //Case 4: Non overlap
            //     else if (!(|overlap_mask)) begin
            //         case_bug = non_overlap;
            //         // wr_FIFO_en = 1'b1;
            //         wr_FIFO_offset = 8'hFF >> (8 - TCP_bytes_trk);
            //         if (free_mask && TCP_last) begin 
            //             // case_bug = right_trim;
            //             nTCP_order[free_idx].seq_num = seq_num_rx;
            //             nTCP_order[free_idx].seq_length = seq_rx_trk + TCP_bytes_trk;
            //             nTCP_order[free_idx].rd_ptr = wr_FIFO_ptr;
            //             nTCP_order[free_idx].length_ptr = wr_FIFO_len + 1;//length_ptr will be 
            //             nTCP_order[free_idx].v = 1'b1;
            //             nflush_list[len_flush_ptr] = free_idx;
            //             nlen_flush_ptr = len_flush_ptr + 1;

            //             if (seq_num_rx == rcv_next) begin
            //                 nrcv_next = seq_rx_trk + TCP_bytes_trk;
            //             end
            //         end
            //     end
            // end

            //Reading FIFO logic
            if (rd_FIFO_en) begin
                //case_bug_0 = 1'b1;
                if ((seq_rx_FIFO_rd == TCP_order[i].seq_num) && TCP_order[i].v) begin
                    rd_FIFO_ptr = TCP_order[i].rd_ptr;
                    rd_FIFO_len = TCP_order[i].length_ptr;
                    rd_FIFO_valid = 1'b1;
                    nTCP_order[i].v = 1'b0;
                end
            end        
        end
        
        case (state)
            //During the IDLE, client will send the SYN packet first
            IDLE: begin
                nseq_num.seq_num = seq_num;
                
                // if (SYN_sent) begin
                //     nstate = WAIT_SYN_ACK;
                //     nseq_num.seq_num = seq_num.seq_num + 1;
                // end
                if (seq_up) begin
                    nstate = WAIT_SYN_ACK;
                    nseq_num.seq_num = seq_num.seq_num + 1;
                end

                if (rcv_data && rcv_pkg_type.SYN) begin
                    nstate = SEND_SYN_ACK;
                    nrcv_next = seq_num_rx + 1;
                end
            end

            SEND_SYN_ACK: begin
                if (seq_up) begin
                    nstate = WAIT_ACK;
                end
            end

            WAIT_ACK: begin
                TCP_stop_flg = 1'b1;
                ncount_en_timeout = 1'b1;
                if (rcv_data && seq_num_rx == rcv_next) begin
                    nstate = DATA_CONNECTED;
                    ncount_en_timeout = 1'b0;
                    nclear_timeout = 1'b1;
                    nack_num.ACK_num = ACK_rx;
                    nwindow_size = window_size_rx;
                end

            end

            WAIT_SYN_ACK: begin
                //If we receive SYN_ACK, we will increment seq_num and 
                TCP_stop_flg = 1'b1;
                ncount_en_timeout = 1'b1;
                
                if (rcv_data && rcv_pkg_type.SYN && rcv_pkg_type.ACK) begin                    
                    nstate = SEND_ACK;
                    ncount_en_timeout = 1'b0;
                    nclear_timeout = 1'b1;
                    // nseq_num.seq_num = seq_num.seq_num + 1;
                    nack_num.ACK_num = ACK_rx; //This should be this
                    nrcv_next = seq_num_rx + 1;
                    nseq_rcv_str = seq_num_rx + 1; 
                    nwindow_size = window_size_rx;
                end 
                //Logic of timeout issue
                else if (timeout_flag) begin
                    nstate = IDLE;
                end
            end

            SEND_ACK: begin
                if (seq_up) begin
                    //nseq_num.seq_num = seq_num.seq_num + 1;
                    nstate = DATA_CONNECTED;
                end
            end

            
            //The DATa_CONNECTED will be the center and communicate between sending and receiving
            DATA_CONNECTED: begin
                //bytes_sent - ACK_num is the number of bytes in flight
                //seq_up tell us that we done with
                if (|wnd_allow) begin
                    TCP_stop_flg = 1'b0; //We can send the data
                    if (seq_up && !out_order_req) begin
                        nseq_num.seq_num = seq_num.seq_num + bytes_abt_sent;
                        ncount_en_timeout = 1'b1;
                    end else if (seq_up) begin
                        nout_order_req = 1'b0;
                        ncount_en_timeout = 1'b1;
                    end
                end else begin
                    TCP_stop_flg = 1'b1; //We need to stop sending the data
                end

                //Flow receiving logic
                //If we rcv 
                
                if (rcv_data  && (seq_rx_trk >= rcv_next)) begin
                    nwindow_size = window_size_rx; //Update the new window size
                    if (ACK_rx == ack_num.ACK_num && rcv_pkg_type.ACK) begin
                        if (ack_num.dup_chk == 3) begin
                            //Logic of 3 duplicated ACK and transmit the data again
                            //Need a flag to indicate that the data is sent again
                            nack_num.dup_chk = 0;
                            nout_order_req = 1'b1;
                            // nseq_num.seq_num = ACK_rx; //Right??? this is how we update the sequence number if a packege is lost?
                            nseq_tx_retrans = ACK_rx;
                            nclear_timeout = 1'b1;
                        end else begin
                            nack_num.dup_chk = ack_num.dup_chk + 1;
                        end
                    //You have received ACK data
                    end else if (rcv_pkg_type.ACK && ACK_rx > ack_num.ACK_num) begin
                        nack_num.dup_chk = 0;
                        nack_num.ACK_num = ACK_rx;    
                        nclear_timeout = 1'b1;
                    end
                    nflush_ptr = 0;
                    nlen_flush_ptr = 0;
                    for (int i = 0; i < N; i++) begin
                            nflush_list[i] = 0;       
                    end

                    
                    
                end 
                else if (timeout_flag) begin
                    //Logic of timeout issue resend the packets
                    nout_order_req = 1'b1;
                    nseq_tx_retrans = ACK_rx;   
                end

                 
                //TCP_bytes will indicated that bytes/payload is done
                if (TCP_flush) begin
                    nstate = FLUSH_DATA;
                end else if (end_ss) begin

                end 

            end
            FLUSH_DATA: begin
                nTCP_order[flush_list[flush_ptr]].v = 0;
                nflush_ptr = flush_ptr + 1;
                if ((nflush_ptr) >= len_flush_ptr) begin
                    nstate = DATA_CONNECTED;
                    nflush_ptr = 0;
                    nlen_flush_ptr = 0;
                    nflush_list = 0;
                    nrcv_next  = rcv_next_prev;
                end
            end
            SEND_FIN: begin
                if (rcv_pkg_type.ACK) begin
                    nstate = WAIT_FIN_SERVER;
                end
            end

            WAIT_FIN_SERVER: begin
                TCP_stop_flg = 1'b0;
                if (rcv_pkg_type.FIN) begin
                    nstate = SEND_ACK_END;
                end
            end

            SEND_ACK_END: begin
                if (rcv_pkg_type.ACK) begin
                    nstate = IDLE;
                end
            end

            default:;
        endcase    
    end

    always_comb begin //Output logic
        
        // TCP_control_tx = TCP_control_t'(0);
        // TCP_control_tx.SYN = 1'b0;
        // TCP_control_tx.ACK = 1'b0;
        // TCP_control_tx.FIN = 1'b0;

        tx_pkg_type = '0;
        tx_pkg_type.ACK = 1'b1;
        offset_tx = 4'd5;
        urgent_pointer_tx = 0;
        seq_num_tx = (out_order_req) ? seq_tx_retrans : seq_num.seq_num;
        ACK_tx = rcv_next;
        window_size_tx = (full) ? 16'd0 : 16'hFFFF;
        nhand_shake_done = hand_shake_done; //Reset the handshake done flag

        case (state)
            IDLE: begin
                // TCP_control_tx.SYN = 1'b1;
                tx_pkg_type = '0;
                tx_pkg_type.SYN = 1'b1;
                seq_num_tx = seq_num.seq_num;
                ACK_tx = 0;
                
            end

            WAIT_SYN_ACK: begin
                
            end

            SEND_SYN_ACK: begin
                tx_pkg_type.SYN = 1'b1;
                tx_pkg_type.ACK = 1'b1;
                seq_num_tx = seq_num.seq_num;
                ACK_tx = rcv_next;
            end

            WAIT_ACK: begin
                if (rcv_data && seq_num_rx == rcv_next) begin
                    nhand_shake_done = 1'b1; //Handshake is done
                end
            end

            SEND_ACK: begin
                tx_pkg_type.ACK = 1'b1;
                seq_num_tx = seq_num.seq_num;
                ACK_tx = rcv_next;
                if (seq_up) begin
                    nhand_shake_done = 1'b1; //Handshake is done
                end
        
            end

            DATA_CONNECTED: begin
                //Do nothing
                nhand_shake_done = 1'b0;
                seq_num_tx = (out_order_req) ? seq_tx_retrans : seq_num.seq_num;
                tx_pkg_type.ACK = 1'b1;
                //ACK_tx = ack_num.ACK_num;
                ACK_tx = rcv_next;
            end

            SEND_FIN: begin
                tx_pkg_type.FIN = 1'b1;
                ACK_tx = rcv_next;    
            end

            WAIT_FIN_SERVER: begin
                //Do nothing
            end

            SEND_ACK_END: begin
                tx_pkg_type.ACK = 1'b1;
                seq_num_tx = seq_num.seq_num;
                ACK_tx = rcv_next;
                
            end

            default: ;
        endcase
    end
endmodule
