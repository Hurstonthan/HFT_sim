`timescale 1ns / 10ps
module FIFO_TX #(
    parameter DATA_WIDTH = 64,
    parameter FIFO_DEPTH = 10, // Depth of the FIFO
    parameter FIFO_WIDTH = $clog2(FIFO_DEPTH) // Width of the FIFO address
)(
    input logic CLK,
    input logic nRST,

    //TCP TX interface
    input logic seq_up,
    input logic [31:0] seq_num_tx,
    input logic rd_FIFO_en,
    input logic TX_en, //The signal determine what we are gonna send in 
    input logic end_ss,
    input logic hand_shake_done,
    input logic [15:0] checksum_TX,
    

    output logic rd_FIFO_valid,
    output logic rd_FIFO_last,
    output logic [DATA_WIDTH - 1:0] rd_FIFO_payload,
    output logic [15:0] bytes_abt_sent,

    //TCP flow CTRL interface
    input logic [31:0] ACK_num,
    input logic ACK_rcv_flag,
    input logic out_order_req,
    output logic TCP_stop_flag,

    //Soupbin TCP interface
    input logic wr_FIFO_en,
    input logic axis_last,
    input logic [31:0] len_seq,
    input logic [DATA_WIDTH - 1:0] soupbin_TCP_payload,
    output logic wr_FIFO_valid, //FULL case

    //Checksum interface
    output logic re_trans,
    output logic [15:0] checksum_re_trans
    
);

    

    //variable that wait for updating TX_en sending
    logic [15:0] nbytes_abt_sent, bytes_msg_trk, nbytes_msg_trk;
    logic  [DATA_WIDTH - 1:0] nrd_FIFO_payload;
    logic [FIFO_WIDTH - 1:0] ptr_str, nptr_str, ptr_end, nptr_end;
    logic [FIFO_WIDTH - 1:0] flush_ptr, nflush_ptr;
    logic [15:0] bytes_abt_sent_msg, nbytes_abt_sent_msg;
    logic [FIFO_WIDTH - 1:0] msg_end_ptr, nmsg_end_ptr;
    string test_case;

    // logic [FIFO_WIDTH - 1:0]   
    typedef struct packed {
        logic valid;
        logic [31:0] seq_num;
        logic [31:0] len_seq;
        logic [15:0] checksum;
        logic [FIFO_WIDTH - 1:0] ptr_str;
        logic [FIFO_WIDTH - 1:0] ptr_end;

    } FIFO_TX_t;

    typedef enum logic [1:0] { 
        IDLE_RD,
        HAND_SHAKE_DONE,
        IN_ORDER_DATA,
        OUT_ORDER_DATA
    } rd_state_t;

    typedef enum logic [1:0] {
        IDLE_WR,
        WRITING,
        FLUSHING

    } wr_state_t;


    rd_state_t rd_state, nrd_state;
    wr_state_t wr_state, nwr_state;


    // FIFO_TX_t [15:0] dict_tx, ndict_tx;
    FIFO_TX_t [15:0] dict_tx, ndict_tx;
    logic full, empty,nrd_FIFO_last, nrd_FIFO_valid;
    logic nwr_FIFO_valid;
    logic [$clog2(16) -1 : 0] dict_wrt_ptr, ndict_wrt_ptr, dict_rd_ptr, ndict_rd_ptr;
    logic [FIFO_WIDTH - 1:0] rd_ptr, nrd_ptr, wrt_ptr, nwrt_ptr;
    logic [FIFO_DEPTH - 1:0] [DATA_WIDTH - 1:0] TCP_tx_order, nTCP_tx_order;

    logic out_order_req_l, nout_order_req_l;
    logic ACK_rcv_flag_l, nACK_rcv_flag_l;
    logic [31:0] ACK_num_l, nACK_num_l;
    logic rd_debug_1;
    logic rd_debug_2;

    //Solution for handling updating bytes_abt_sent_msg in reading
    logic rd_upd, nrd_upd;
    logic [15:0] bytes_abt_sent_msg_rd, nbytes_abt_sent_msg_rd;
    logic [15:0] checksum_l, nchecksum_l;

    assign full = (rd_ptr - 1) == wrt_ptr;
    assign empty = wrt_ptr == rd_ptr;
    assign re_trans = out_order_req_l;



    always_ff @(posedge CLK, negedge nRST) begin
        if (!nRST) begin
            ptr_str <= 0;
            ptr_end <= 0;
            rd_ptr <= 0;
            rd_state <=IDLE_RD;
            bytes_abt_sent <= 0;
            rd_FIFO_last <= 0;
            rd_FIFO_payload <= 0;
            rd_FIFO_valid <= 0;
            dict_tx <= 0;
            out_order_req_l <= 0;
            ACK_rcv_flag_l <= 0;
            ACK_num_l <= 0;
            msg_end_ptr <= 0;
            
        end else begin
            ptr_str <= nptr_str;
            ptr_end <= nptr_end;
            bytes_abt_sent <= nbytes_abt_sent;
            dict_tx <= ndict_tx;
            ACK_rcv_flag_l <= nACK_rcv_flag_l;
            rd_state <= nrd_state;
            rd_FIFO_valid <= nrd_FIFO_valid;
            rd_FIFO_last <= nrd_FIFO_last;
            rd_FIFO_payload <= nrd_FIFO_payload;
            rd_ptr <= nrd_ptr;
            out_order_req_l <= nout_order_req_l;
            ACK_num_l <= nACK_num_l;
            msg_end_ptr <= nmsg_end_ptr;
        end
    end 

    // ---------------------- WRITING PART ---------------------------------
    always_ff @(posedge CLK, negedge nRST) begin
        if (!nRST) begin
            wrt_ptr <= 0;
            TCP_tx_order <= 0;
            dict_wrt_ptr <= 0;
            dict_rd_ptr <= 0;
            wr_FIFO_valid <= 0;
            bytes_msg_trk <= 0;
            wr_state <= IDLE_WR;
            flush_ptr <= 0;
            bytes_abt_sent_msg <= 0;
            bytes_abt_sent_msg_rd <= 0;
            rd_upd <= 0;
            checksum_l <= 0;
        end else begin
            wr_state <= nwr_state;
            wrt_ptr <= nwrt_ptr;
            TCP_tx_order <= nTCP_tx_order;
            dict_wrt_ptr <= ndict_wrt_ptr;
            dict_rd_ptr <= ndict_rd_ptr;
            wr_FIFO_valid <= nwr_FIFO_valid;
            bytes_msg_trk <= nbytes_msg_trk;
            flush_ptr <= nflush_ptr;
            bytes_abt_sent_msg <= nbytes_abt_sent_msg;
            bytes_abt_sent_msg_rd <= nbytes_abt_sent_msg_rd;
            rd_upd <= nrd_upd;
            checksum_l <= nchecksum_l;
        end    
    
    end

    

    always_comb begin 
        //---------------------- WRITING VARIABLES ------------------------------
        nwrt_ptr = wrt_ptr;
        nTCP_tx_order = TCP_tx_order;
        ndict_tx = dict_tx;
        ndict_rd_ptr = dict_rd_ptr;
        ndict_wrt_ptr = dict_wrt_ptr;
        nwr_FIFO_valid = 0;
        nbytes_msg_trk = 0;
        nmsg_end_ptr = msg_end_ptr;
        //globale variable for sending and receiving
        nbytes_abt_sent_msg = bytes_abt_sent_msg;
        nbytes_abt_sent = bytes_abt_sent;
        nwr_state = wr_state;
        nflush_ptr = flush_ptr;
        nACK_rcv_flag_l = ACK_rcv_flag_l;
        nACK_num_l = ACK_num_l;
        nchecksum_l = checksum_l;
        

        
        //---------------------- READING VARIABLES AND LOGIC ------------------------------
        nrd_state = rd_state;
        nptr_str = ptr_str;
        nptr_end = ptr_end; //msg_end_ptr is the currnet end msg bytes
        nrd_ptr = rd_ptr;
        nrd_FIFO_last = rd_FIFO_last;
        nrd_FIFO_payload = rd_FIFO_payload;
        nrd_FIFO_valid = rd_FIFO_valid;
        nout_order_req_l = out_order_req_l;
        nrd_upd = rd_upd;
        nbytes_abt_sent_msg_rd = bytes_abt_sent_msg_rd;


        if (out_order_req) begin
            nout_order_req_l = 1'b1;
        end

        if (ACK_rcv_flag) begin
            nACK_rcv_flag_l = 1'b1;
            nACK_num_l = ACK_num;
        end

        //Solution for updating rd bytes_abt_sent in reading side
        if (!axis_last && rd_upd) begin
            nbytes_abt_sent_msg = bytes_abt_sent_msg - bytes_abt_sent_msg_rd;
        end

        

        case (rd_state)
            IDLE_RD: begin
                nbytes_abt_sent = 0;
                nchecksum_l = 0;
                nrd_FIFO_last = 1'b1;
                if (hand_shake_done) begin
                    nrd_state = HAND_SHAKE_DONE;
                    nrd_FIFO_last = 1'b1;
                    
                end

            end

            HAND_SHAKE_DONE: begin
                nbytes_abt_sent = bytes_abt_sent;
                nchecksum_l = 0;
                nrd_FIFO_valid = 1'b0;
                nrd_FIFO_last = 1'b0;
                nrd_upd = 1'b0;
                test_case = "Handshake done";

                if (TX_en) begin
                    if (out_order_req) begin
                        nrd_state = OUT_ORDER_DATA;
                        nptr_str = dict_tx[dict_rd_ptr].ptr_str;
                        nptr_end = dict_tx[dict_rd_ptr].ptr_end;
                        nbytes_abt_sent = dict_tx[dict_rd_ptr].len_seq;
                        nchecksum_l = dict_tx[dict_rd_ptr].checksum;        
                    end else begin
                        nrd_state = IN_ORDER_DATA;
                        nptr_str = rd_ptr;
                        nptr_end = msg_end_ptr;
                        nbytes_abt_sent = bytes_abt_sent_msg;
                        
                    end
                end
            end

            IN_ORDER_DATA: begin
                rd_debug_1 = (dict_wrt_ptr != (dict_rd_ptr - 1));
                rd_debug_2 = (rd_ptr - 1) != (msg_end_ptr);
                nchecksum_l = checksum_TX;

                //This is the state checking the dictionary full or not and whether rd ptr
                //ptr_end is the next ptr of the end of ptr that store the msg 
                //rd_ptr != (msg_end_ptr - 1) check do we have any empty msg or not
                if ((rd_FIFO_en && (dict_wrt_ptr != (dict_rd_ptr - 1)) && (ptr_str < (msg_end_ptr)))) begin
                    nrd_FIFO_valid = 1'b1;
                    nrd_ptr = rd_ptr + 1;
                    nrd_FIFO_payload = TCP_tx_order[rd_ptr];
                    //msg_end_ptr is in writing side
                    if ((rd_ptr) == (ptr_end + 1)) begin
                        ndict_tx[dict_wrt_ptr].valid = 1'b1;
                        ndict_tx[dict_wrt_ptr].seq_num = seq_num_tx;
                        ndict_tx[dict_wrt_ptr].len_seq = bytes_abt_sent;
                        ndict_tx[dict_wrt_ptr].ptr_str = ptr_str;
                        ndict_tx[dict_wrt_ptr].ptr_end = rd_ptr;
                        ndict_tx[dict_wrt_ptr].checksum = checksum_l;
                        nrd_FIFO_last = 1'b1;
                        nrd_state = HAND_SHAKE_DONE;
                        nrd_upd = 1'b1;
                        nbytes_abt_sent_msg_rd = bytes_abt_sent;
                        ndict_wrt_ptr = dict_wrt_ptr + 1;
                        nrd_ptr = rd_ptr;
                    end 
                end

                // if (rd_FIFO_en && (ptr_str >= (msg_end_ptr))) begin
                //     nrd_FIFO_last = 1'b1;
                //     nrd_state = HAND_SHAKE_DONE;
                //     nrd_ptr = rd_ptr;
                // end

                
            end

            OUT_ORDER_DATA: begin
                if (rd_FIFO_en) begin
                    nrd_FIFO_valid = 1'b1;
                    nrd_FIFO_payload = TCP_tx_order[ptr_str];
                    nptr_str = ptr_str + 1;
                    if (ptr_str == (ptr_end)) begin
                        nrd_FIFO_last = 1'b1;
                        nrd_state = HAND_SHAKE_DONE;
                        nout_order_req_l = 1'b0;
                    end 
                end
            end
        
        

        endcase

        //---------------------- WRITING VARIABLES ------------------------------

        case (wr_state)
            IDLE_WR: begin
                // if (ACK_rcv_flag_l && dict_tx[dict_rd_ptr].seq_num < ACK_num_l && (dict_rd_ptr != dict_wrt_ptr)) begin
                if (dict_tx[dict_rd_ptr].seq_num + dict_tx[dict_rd_ptr].len_seq <= ACK_num_l && (dict_rd_ptr != dict_wrt_ptr)) begin
                    nwr_state = FLUSHING;
                    nflush_ptr = dict_tx[dict_rd_ptr].ptr_str;
                end else if (wr_FIFO_en && !full) begin
                    nwr_FIFO_valid = 1'b1;
                    nwrt_ptr = wrt_ptr + 1;
                    nTCP_tx_order[wrt_ptr] = soupbin_TCP_payload;
                    //nbytes_msg_trk = bytes_msg_trk + len_seq;
                    nwr_state = WRITING;
                end

            end

            FLUSHING: begin
                nflush_ptr = flush_ptr + 1;
                nTCP_tx_order[flush_ptr] = 0;
                if (flush_ptr == dict_tx[dict_rd_ptr].ptr_end) begin
                    nACK_rcv_flag_l = 1'b0;
                    ndict_rd_ptr = dict_rd_ptr + 1;
                    nwr_state = IDLE_WR;
                end
            end

            WRITING: begin
                nwr_FIFO_valid = 1'b1;
                nwrt_ptr = wrt_ptr + 1;
                nTCP_tx_order[wrt_ptr] = soupbin_TCP_payload;
                //nbytes_msg_trk = bytes_msg_trk + len_seq;
                
                if (axis_last) begin
                    nwr_FIFO_valid = 1'b0;
                    nmsg_end_ptr = wrt_ptr;
                    nbytes_abt_sent_msg = bytes_abt_sent_msg + len_seq;
                    nwr_state = IDLE_WR;
                end

            end

        endcase
 
    end

endmodule
