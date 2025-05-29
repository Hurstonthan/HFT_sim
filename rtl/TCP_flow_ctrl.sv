`include "TCP_flow.vh"
`include "ether_pkg.vh"

module TCP_flow_ctrl #parameter (
    
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
    ack_num_frame ack_num, nack_num;
    seq_num_frame seq_num, nseq_num;
    logic [15:0] window_size, nwindow_size;
    logic [15:0] bytes_in_flight;



    //We want 256K bytes of the TCP out of order packets
    TCP_out_order_t [17:0] TCP_out_order, nTCP_out_order;
    logic [17:0] start_ptr, incr_ptr, nstart_ptr, nincr_ptr; //These pointers are for handling the receiving out of orders packets
    logic [17:0] trk_ptr, ntrk_ptr; //This pointer is for handling the sending out of orders packets
    logic [31:0] rcv_next, nrcv_next;

    assign mytx.TCP_len_data = mytx.bytes_abt_sent;
    

    //Explanation
    // "bytes in flight" is the number of bytes that have been sent but not yet acknowledged.
    // "bytes_send" is the number of bytes have sent
    // "bytes_abt_send" is the number of bytes that are about to be sent
    // "ack_num.ACK_num" is the number of bytes that have been acknowledged
    assign bytes_in_flight = (mytx.bytes_sent + mytx.bytes_abt_sent)  - ack_num.ACK_num;
    assign rcv_pkg_type = TCP_control_t'(myrx.TCP_control_rx);



    always_ff @(posedge CLK, negedge nRST) begin
        if (!nRST) begin
            ack_num <= '0;
            seq_num <= '0;
            window_size <= 16'd40; //Set the initial number
            TCP_out_order <= '0;
            start_ptr <= '0;
            incr_ptr <= '0;
            rcv_next <= '0;
            trk_ptr <= '0;
        end else begin
            ack_num <= nack_num;
            seq_num <= nseq_num;
            window_size <= nwindow_size;
            TCP_out_order <= nTCP_out_order;
            start_ptr <= nstart_ptr;
            incr_ptr <= nincr_ptr;
            rcv_next <= nrcv_next;
            trk_ptr <= ntrk_ptr;
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
        nstart_ptr = start_ptr;
        nincr_ptr = incr_ptr;
        TCP_stop_flg = 1'b0;
        nrcv_next = rcv_next;
        ntrk_ptr = trk_ptr;
        case (state)
            //During the IDLE, client will send the SYN packet first
            IDLE: begin
                nseq_num.seq_num = ISN_num;
                if (mytx.SYN_sent) begin
                    nstate = WAIT_SYN_ACK;
                end
            end

            WAIT_SYN_ACK: begin
                //If we receive SYN_ACK, we will increment seq_num and 
                mytx.TCP_stop_flg = 1'b1;
                if (rcv_data && rcv_pkg_type.SYN && rcv_pkg_type.ACK) begin                    
                    nstate = SEND_ACK;
                    nseq_num.seq_num = seq_num.seq_num + 1;
                    nack_num.ACK_num = myrx.seq_num_rx + 1; //This should be this
                    nrcv_next = myrx.seq_num_rx + 1; 
                    nwindow_size = myrx.window_size_rx;
                end 
                //Logic of timeout issue
                else if (myrx.timeout_flag) begin
                    nstate = IDLE;
                end
            end

            SEND_ACK: begin
                if (mytx.ACK_sent) begin
                    nstate = DATA_CONNECTED;
                end
            end

            // WAIT_ACK: begin
            //     mytx.TCP_stop_flg = 1'b1;
            //     if (myrx.rcv_data) begin
            //         nstate = DATA_CONNECTED;
            //         nwindow_size = myrx.window_size_rx; //Update the new window size
            //         if (myrx.ACK_rx == ack_num.ACK_num && rcv_pkg_type.ACK) begin
            //             if (ack_num.dup_chk == 2) begin
            //                 //Logic of 3 duplicated ACK and transmit the data again
            //                 //Need a flag to indicate that the data is sent again
            //                 nack_num.dup_chk = 0;
            //                 nseq_num.seq_num = myrx.ACK_rx; //Right??? this is how we update the sequence number if a packege is lost?

            //             end else begin
            //                 nack_num.dup_chk = ack_num.dup_chk + 1;
            //             end
            //         //You have received ACK data
            //         end else if (rcv_pkg_type.ACK) begin
            //             nack_num.dup_chk = 0;
            //             nack_num.ACK_num = myrx.ACK_rx;    
            //         end

            //         //Logic of sending ACK packets if needed
            //         //Logic of receiving the offset of bytes data
            //         if (myrx.seq_num_rx != rcv_next) begin //If out of order happened
            //             nTCP_out_order[incr_ptr].seq_num = myrx.seq_num_rx;
            //             nTCP_out_order[incr_ptr].length = myrx.payload_len_rcv; //Len of the receiving payload
            //             nincr_ptr = incr_ptr + 1;
            //             //If the upcoming pointer 
            //             if (myrx.seq_num_rx == TCP_out_order[trk_ptr].seq_num + TCP_out_order[trk_ptr].length) begin
            //                 ntrk_ptr = trk_ptr + 1;
            //             end
            //         end else begin
            //             nrcv_next = myrx.seq_num_rx + myrx.payload_len_rcv;//seq_num_rx + len_of payload;
            //             //ACK_tx = //seq_num_rx + len_of payload;
            //             if (TCP_out_order[start_ptr].seq_num == myrx.seq_num_rx + myrx.payload_len_rcv) begin
            //                 nrcv_next = TCP_out_order[trk_ptr].seq_num + TCP_out_order[trk_ptr].length;
            //                 nstart_ptr = trk_ptr;
            //             end 
            //         end
            //     end else if (myrx.timeout_flag) begin
            //         //Logic of timeout issue resend the packets
                    
            //     end
            // end

            //The DATa_CONNECTED will be the center and communicate between sending and receiving
            DATA_CONNECTED: begin
                //bytes_sent - ACK_num is the number of bytes in flight
                //seq_up tell us that we done with
                if (bytes_in_flight <= window_size && mytx.seq_up) begin
                    mytx.TCP_stop_flg = 1'b0;
                    nseq_num.seq_num = seq_num.seq_num + mytx.bytes_abt_sent;
                    
                end else begin
                    //Logic of stopping the sending
                    mytx.TCP_stop_flg = 1'b1;
                    // nstate = WAIT_ACK;
                end

                //Flow receiving logic 
                if (myrx.rcv_data) begin
                    nwindow_size = myrx.window_size_rx; //Update the new window size
                    
                    if (myrx.ACK_rx == ack_num.ACK_num && rcv_pkg_type.ACK) begin
                        if (ack_num.dup_chk == 2) begin
                            //Logic of 3 duplicated ACK and transmit the data again
                            //Need a flag to indicate that the data is sent again
                            nack_num.dup_chk = 0;
                            nseq_num.seq_num = ACK_rx; //Right??? this is how we update the sequence number if a packege is lost?

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
                    if (myrx.seq_num_rx != rcv_next) begin //If out of order happened
                        nTCP_out_order[incr_ptr].seq_num = myrx.seq_num_rx;
                        nTCP_out_order[incr_ptr].length = myrx.payload_len_rcv; //Len of the receiving payload
                        nincr_ptr = incr_ptr + 1;
                        //If the upcoming pointer 
                        if (myrx.seq_num_rx == TCP_out_order[trk_ptr].seq_num + TCP_out_order[trk_ptr].length) begin
                            ntrk_ptr = trk_ptr + 1;
                        end
                    end else begin
                        nrcv_next = myrx.seq_num_rx + myrx.payload_len_rcv;//seq_num_rx + len_of payload;
                        //ACK_tx = //seq_num_rx + len_of payload;
                        if (TCP_out_order[start_ptr].seq_num == myrx.seq_num_rx + myrx.payload_len_rcv) begin
                            nrcv_next = TCP_out_order[trk_ptr].seq_num + TCP_out_order[trk_ptr].length;
                            nstart_ptr = trk_ptr;
                        end 
                    end
                end else if (myrx.timeout_flag) begin
                    //Logic of timeout issue resend the packets
                    
                end
                //TCP_bytes will indicated that bytes/payload is done
                if (logic_sendFIND) begin
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
        endcase    
    end

    always_comb begin //Output logic
        
        mytx.TCP_control_tx = TCP_control_t'(0);
        mytx.TCP_control_tx.SYN = 1'b0;
        mytx.TCP_control_tx.ACK = 1'b0;
        mytx.TCP_control_tx.FIN = 1'b0;
        mytx.offset_tx = 4'd5;
        mytx.urgent_pointer_tx = 0;
        mytx.window_size_tx = 16'd31; //64KB;
        

        case (state)
            IDLE: begin
                mytx.TCP_control_tx.SYN = 1'b1;
                mytx.seq_num_tx = seq_num.seq_num;
                mytx.ACK_tx = 0;
                
            end

            WAIT_SYN_ACK: begin
                
            end

            SEND_ACK: begin
                mytx.seq_num_tx = seq_num.seq_num;
                mytx.ACK_tx = ack_num.ACK_num;
        
            end

            DATA_CONNECTED: begin
                //Do nothing
                mytx.seq_num_tx = seq_num.seq_num;
                //mytx.ACK_tx = ack_num.ACK_num;
                mytx.ACK_tx = rcv_next;
        
            end

            SEND_FIN: begin
                mytx.TCP_control_tx.FIN = 1'b1;
                mytx.ACK_tx = rcv_next;
                
            end

            WAIT_FIN_SERVER: begin
                //Do nothing
            end

            SEND_ACK_END: begin
                mytx.TCP_control_tx.ACK = 1'b1;
                mytx.seq_num_tx = seq_num.seq_num;
                mytx.ACK_tx = rcv_next;
                
            end
        endcase
    end
endmodule


//05/13/2025
//Missing the logic that need to fill
" 1) Figure out a way that resend TCP byte data if a package is lost
  2) Figure out a way that updating sequence number if a package is lost
  3) Figure out a way that updating the ACKs number if a package is lost : Done
"