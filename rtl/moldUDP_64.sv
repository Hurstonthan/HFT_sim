module moldUDP#(
    parameter end_session = 16'hffff,
    parameter heartbeat = 16'h0000 
    )(
    input logic clk,
    input logic n_rst,
    input logic UDP_flush,
    input logic UDP_valid,
    input logic [63:0] UDP_payload,
    input logic done,
    output logic mold_valid,
    // output logic [15:0] mold_length,
    output logic [63:0] mold_payload,
    output logic mold_request_valid,
    output logic [63:0] mold_request_payload
    );

    typedef enum logic [2:0] {IDLE, CHKSUM, SESSION, MSG, REREQ1, REREQ2, REREQ3, PAYLOAD} state_t; 

    logic miss;
    logic end_of_session;
    logic [15:0] checksum;
    logic [47:0] session_first; // 48
    logic [31:0] session_second; // 32
    logic [79:0] session; // 80
    logic [47:0] next_session_first; // 48
    logic [31:0] next_session_second; // 32
    logic [32:0] sequence_num_first; // 32
    logic [32:0] sequence_num_second; // 32
    logic [63:0] sequence_num; // 64
    logic [32:0] next_sequence_num_first; // 32
    logic [32:0] next_sequence_num_second; // 32
    logic [63:0] expected_sequence_num;
    logic [63:0] next_expected_sequence_num;
    logic [15:0] message_count;
    logic [15:0] message_length;
    logic [79:0] request_session;
    logic [63:0] request_sequence_num;
    logic [15:0] request_message_count;
    logic[63:0] miss_count;
    state_t curr_state, next_state;
    // logic next_mold_valid;
    // // logic [15:0] next_mold_length;
    // logic [63:0] next_mold_payload;
    // logic next_mold_request_valid;
    // logic [63:0] next_mold_request_payload;


    // register logic
    always_ff @ (posedge clk, negedge n_rst) begin: mold_FF
        if (~n_rst) begin 
            curr_state <= IDLE; 
            expected_sequence_num <= 64'b1;
            sequence_num_first <= 32'b0;
            sequence_num_second <= 32'b1;
            session_first <= 48'b0;
            session_second <= '0;
        end else begin
            expected_sequence_num <= next_expected_sequence_num;
            curr_state <= next_state;   
            sequence_num_first <= next_sequence_num_first;
            sequence_num_second <= next_sequence_num_second;
            session_first <= next_session_first;
            session_second <= next_session_second;
        end
    end


    always_comb begin
        // output logic
        mold_valid = (curr_state == PAYLOAD);
        mold_request_valid = (curr_state == REREQ1 | curr_state == REREQ2 | curr_state == REREQ3);
        mold_payload = UDP_payload;	
        mold_request_payload = '0;
        // is this a heartbeat message to end session?
        end_of_session = (message_length == end_session);
    
    
        // handling inputs from UDP layer
        next_sequence_num_first = sequence_num_first;
        next_sequence_num_second = sequence_num_second;
        next_session_first = session_first;
        next_session_second = session_second;
        session = {session_first, session_second};
        sequence_num = {sequence_num_first, sequence_num_second};
        case (curr_state)
            CHKSUM: begin
                checksum = UDP_payload[63:48];
                next_session_first = UDP_payload[47:0];
            end
            SESSION: begin
                next_session_second = UDP_payload[63:32];
                next_sequence_num_first = UDP_payload[31:0];
            end
            MSG: begin
                next_sequence_num_second = UDP_payload[63:32];
                message_count = UDP_payload[31:16];
                message_length = UDP_payload[15:0];
            end
            REREQ1: begin
                mold_request_payload = session[79:16];
                request_session[79:16] = session[79:16];
            end
            REREQ2: begin
                mold_request_payload = {session[15:0], sequence_num[63:16]};
                request_session[15:0] = session[15:0];
                request_sequence_num[63:16] = sequence_num[63:16]; 
            end
            REREQ3: begin
                mold_request_payload = {sequence_num[15:0], miss_count[15:0], 32'h00000000};
                request_sequence_num[15:0] = sequence_num[15:0]; 
                request_message_count = miss_count[15:0];
            end
        endcase
    
    
        // handling misses

        miss = (message_length != heartbeat && message_length != end_of_session && {sequence_num_first, sequence_num_second} != {expected_sequence_num});
	    miss_count = sequence_num - expected_sequence_num;
        
        next_expected_sequence_num = expected_sequence_num;
        if (end_of_session) begin
            next_expected_sequence_num = 64'b1;
        end else if (message_length == heartbeat) begin 
    	    next_expected_sequence_num = expected_sequence_num;
        end else if (curr_state == MSG)begin
    	    next_expected_sequence_num = sequence_num + message_count;
        end
        // next state logic 

    end
    always_comb begin: NEXTSTATE
        next_state = curr_state;
        case (curr_state)
            IDLE: next_state = CHKSUM;
            CHKSUM: next_state = SESSION;
            SESSION: next_state = MSG;
            MSG: begin
                next_state = (miss == 1'b1 ? REREQ1 : PAYLOAD);
            end
            REREQ1: next_state = REREQ2;
            REREQ2: next_state = REREQ3;
            REREQ3: next_state = (UDP_valid == 1'b1 ? CHKSUM : IDLE);
            PAYLOAD: next_state = (done ? IDLE : PAYLOAD);
        endcase 
    end
endmodule