`timescale 1ns / 10ps

`include "TCP_flow_if.vh"
`include "ether_pkg.vh"

module TCP_flow_ctrl #(
    parameter N = 128 //Number of out of order packets;
) (
    input logic CLK,
    input logic nRST,
    TCP_flow_if.rx myrx,
    TCP_flow_if.tx mytx
);

    import ether_pkg::*;
    typedef enum logic [6:0] {
        IDLE,
        WAIT_SYN_ACK,
        SEND_ACK,
        DATA_CONNECTED,
        SEND_FIN,
        WAIT_FIN_SERVER,
        SEND_ACK_END
    } TCP_state_t;


    TCP_state_t state, nstate;
    TCP_control_t rcv_pkg_type;
    TCP_control_t tx_pkg_type;
    ack_num_frame ack_num, nack_num;
    seq_num_frame seq_num, nseq_num;
    logic [15:0] window_size, nwindow_size;
    logic [31:0] bytes_in_flight;
    logic [31:0] wnd_allow;



    //We want 256K bytes of the TCP out of order packets
    TCP_out_order_t [127:0] TCP_out_order, nTCP_out_order;
    
    logic [31:0] rcv_next, nrcv_next;
    logic out_of_order_flg; //This flag is for handling the out of order packets

    logic [$clog2(N)-1:0] free_idx, match_idx;;
    logic [N - 1:0] v_vec, free_vec; //Vector of valid bits for the out of order packets
    
    logic [31:0] [N - 1 : 0] seq_vec;
    logic free_mask, match_found;
    logic [N - 1:0] match_mask;

    genvar i;

    assign mytx.TCP_len_data = mytx.bytes_abt_sent;
    assign mytx.TCP_control_tx = tx_pkg_type;
    assign myrx.rcv_next = rcv_next;
    assign myrx.seq_num = seq_num.seq_num;
    generate
        for (i = 0; i < N; i++) begin
            assign v_vec[i] = TCP_out_order[i].v;
        end
    endgenerate
    assign free_vec = ~v_vec; //Mask of free bits for the out of order packets

    for (i = 0; i < N; i++) begin
        assign match_mask[i] = (rcv_next >= TCP_out_order[i].seq_num) && TCP_out_order[i].v; //Mask of matched bits for the out of order packets
        
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
    

    //Explanation
    // "bytes in flight" is the number of bytes that have been sent but not yet acknowledged.
    // "bytes_send" is the number of bytes have sent
    // "bytes_abt_send" is the number of bytes that are about to be sent
    // "ack_num.ACK_num" is the number of bytes that have been acknowledged


    // assign bytes_in_flight = (mytx.bytes_sent + mytx.bytes_abt_sent) - (ack_num.ACK_num - mytx.ISN_num); //THIS IS CORRECT
    
    //assign bytes_in_flight = (mytx.bytes_sent + mytx.bytes_abt_sent) - (ack_num.ACK_num); //Assume that the ISN_num is 0
    assign bytes_in_flight = (seq_num.seq_num + mytx.bytes_abt_sent) - (ack_num.ACK_num - mytx.ISN_num); //Assume that the ISN_num is 0
    assign wnd_allow = {15'd0,window_size} - bytes_in_flight; //This is the number of bytes that can be sent
    assign rcv_pkg_type = TCP_control_t'(myrx.TCP_control_rx);



    always_ff @(posedge CLK, negedge nRST) begin
        if (!nRST) begin
            ack_num <= '0;
            seq_num <= '0; //Set the initial sequence number
            window_size <= 16'd40; //Set the initial number
            TCP_out_order <= 0;
            rcv_next <= '0;
            state <= IDLE;
        end else if (match_found) begin
            if (TCP_out_order[match_idx].seq_num == rcv_next) begin
                rcv_next <= rcv_next + TCP_out_order[match_idx].length; //Update the next sequence number to receive
                TCP_out_order[match_idx].v <= 1'b0; //Set the valid bit to 0
            end else if (rcv_next > TCP_out_order[match_idx].seq_num) begin
                //Need to check this logic
                if (rcv_next >= TCP_out_order[match_idx].seq_num + TCP_out_order[match_idx].length) begin
                    TCP_out_order[match_idx].v <= 1'b0; //Set the valid bit to 0
                end else begin
                    TCP_out_order[match_idx].seq_num <= rcv_next;
                    TCP_out_order[match_idx].length <= (TCP_out_order[match_idx].seq_num + TCP_out_order[match_idx].length) - (rcv_next);
                end
            end
        end
        else begin
            ack_num <= nack_num;
            seq_num <= nseq_num;
            window_size <= nwindow_size;
            TCP_out_order <= nTCP_out_order;
            state <= nstate;
            rcv_next <= nrcv_next;
            
        end
    end 


    //ACK num is rely on the sequence receive
    //Seq num is rely on the amount of bytes that have sent???
    always_comb begin //NEXT_STAGE logic
        nstate = state;
        nack_num = ack_num;
        nseq_num = seq_num;
        nwindow_size = window_size;
        nTCP_out_order = TCP_out_order;
        
        mytx.TCP_stop_flg = 1'b0;
        
        nrcv_next = rcv_next;
        

        out_of_order_flg = 1'b0; //Reset the out of order flag
        case (state)
            //During the IDLE, client will send the SYN packet first
            IDLE: begin
                nseq_num.seq_num = 32'd0;
                
                // if (mytx.SYN_sent) begin
                //     nstate = WAIT_SYN_ACK;
                //     nseq_num.seq_num = seq_num.seq_num + 1;
                // end
                if (mytx.seq_up) begin
                    nstate = WAIT_SYN_ACK;
                    nseq_num.seq_num = seq_num.seq_num + 1;
                end
            end

            WAIT_SYN_ACK: begin
                //If we receive SYN_ACK, we will increment seq_num and 
                mytx.TCP_stop_flg = 1'b1;
                if (myrx.rcv_data && rcv_pkg_type.SYN && rcv_pkg_type.ACK) begin                    
                    nstate = SEND_ACK;
                    // nseq_num.seq_num = seq_num.seq_num + 1;
                    nack_num.ACK_num = myrx.ACK_rx; //This should be this
                    nrcv_next = myrx.seq_num_rx + 1; 
                    nwindow_size = myrx.window_size_rx;
                end 
                //Logic of timeout issue
                else if (myrx.timeout_flag) begin
                    nstate = IDLE;
                end
            end

            SEND_ACK: begin
                if (mytx.seq_up) begin
                    //nseq_num.seq_num = seq_num.seq_num + 1;
                    nstate = DATA_CONNECTED;
                end
            end

            
            //The DATa_CONNECTED will be the center and communicate between sending and receiving
            DATA_CONNECTED: begin
                //bytes_sent - ACK_num is the number of bytes in flight
                //seq_up tell us that we done with
                if (|wnd_allow) begin
                    mytx.TCP_stop_flg = 1'b0; //We can send the data
                    if (mytx.seq_up) begin
                        nseq_num.seq_num = seq_num.seq_num + mytx.bytes_abt_sent;
                    end 
                end else begin
                    mytx.TCP_stop_flg = 1'b1; //We need to stop sending the data
                end

                //Flow receiving logic 
                if (myrx.rcv_data && (myrx.seq_num_rx >= rcv_next)) begin
                    nwindow_size = myrx.window_size_rx; //Update the new window size
                    
                    if (myrx.ACK_rx == ack_num.ACK_num && rcv_pkg_type.ACK) begin
                        if (ack_num.dup_chk == 3) begin
                            //Logic of 3 duplicated ACK and transmit the data again
                            //Need a flag to indicate that the data is sent again
                            nack_num.dup_chk = 0;
                            nseq_num.seq_num = myrx.ACK_rx; //Right??? this is how we update the sequence number if a packege is lost?
                        end else begin
                            nack_num.dup_chk = ack_num.dup_chk + 1;
                        end
                    //You have received ACK data
                    end else if (rcv_pkg_type.ACK) begin
                        nack_num.dup_chk = 0;
                        nack_num.ACK_num = myrx.ACK_rx;    
                    end

                    //Logic of sending ACK packets if needed
                    //Logic of receiving the offset of bytes data
                    if (myrx.seq_num_rx > rcv_next) begin //If out of order happened
                        if (free_mask) begin
                            nTCP_out_order[free_idx].seq_num = myrx.seq_num_rx;
                            nTCP_out_order[free_idx].length =  ((myrx.seq_num_rx + myrx.payload_len_rx) > (rcv_next + 32'hFFFF)) ? ((rcv_next + 32'hFFFF) - (myrx.seq_num_rx)) : myrx.payload_len_rx; //Len of the receiving payload
                            nTCP_out_order[free_idx].v = 1'b1; //Set the valid bit
                        end
                    end else begin
                        //In order packets case
                        nrcv_next = myrx.seq_num_rx + myrx.payload_len_rx;//seq_num_rx + len_of payload;
                        // if ((myrx.seq_num_rx + myrx.payload_len_rx) > 32'h FFFF) begin
                        //     nrcv_next = myrx.seq_num_rx + myrx.payload_len_rx - 32'h FFFF; //Wrap around the sequence number
                        // end else begin
                            
                        // end
                        
                        
                    end
                end else if (myrx.timeout_flag) begin
                    //Logic of timeout issue resend the packets
                    
                end
                //TCP_bytes will indicated that bytes/payload is done
                if (mytx.end_ss) begin
                    nstate = SEND_FIN;
                end

            end

            SEND_FIN: begin
                if (rcv_pkg_type.ACK) begin
                    nstate = WAIT_FIN_SERVER;
                end
            end

            WAIT_FIN_SERVER: begin
                mytx.TCP_stop_flg = 1'b0;
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
        
        // mytx.TCP_control_tx = TCP_control_t'(0);
        // mytx.TCP_control_tx.SYN = 1'b0;
        // mytx.TCP_control_tx.ACK = 1'b0;
        // mytx.TCP_control_tx.FIN = 1'b0;

        tx_pkg_type = '0;
        mytx.offset_tx = 4'd5;
        mytx.urgent_pointer_tx = 0;
        mytx.seq_num_tx = '0;
        mytx.ACK_tx = '0;
        mytx.window_size_tx = (mytx.full) ? 16'd0 : 16'hFFFF;
        mytx.hand_shake_done = 1'b0; //Reset the handshake done flag

        case (state)
            IDLE: begin
                // mytx.TCP_control_tx.SYN = 1'b1;
                tx_pkg_type.SYN = 1'b1;
                mytx.seq_num_tx = seq_num.seq_num;
                mytx.ACK_tx = 0;
                
            end

            WAIT_SYN_ACK: begin
                
            end

            SEND_ACK: begin
                tx_pkg_type.ACK = 1'b1;
                mytx.seq_num_tx = seq_num.seq_num;
                mytx.ACK_tx = rcv_next;
                if (mytx.ACK_sent) begin
                    mytx.hand_shake_done = 1'b1; //Handshake is done
                end
        
            end

            DATA_CONNECTED: begin
                //Do nothing
                mytx.seq_num_tx = seq_num.seq_num;
                tx_pkg_type.ACK = 1'b1;
                //mytx.ACK_tx = ack_num.ACK_num;
                mytx.ACK_tx = rcv_next;
        
            end

            SEND_FIN: begin
                
                tx_pkg_type.FIN = 1'b1;
                mytx.ACK_tx = rcv_next;
                
            end

            WAIT_FIN_SERVER: begin
                //Do nothing
            end

            SEND_ACK_END: begin
                tx_pkg_type.ACK = 1'b1;
                mytx.seq_num_tx = seq_num.seq_num;
                mytx.ACK_tx = rcv_next;
                
            end

            default: ;
        endcase
    end
endmodule