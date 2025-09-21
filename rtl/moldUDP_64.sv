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
    output logic [15:0] mold_length,
    output logic [63:0] mold_payload,
    output logic mold_request_valid, 
    output logic [63:0] mold_request_valid
);

    typedef enum logic [2:0] {IDLE, CHKSUM, SESSION, MSG, REREQ1, REREQ2, REREQ3, PAYLOAD} state; 

    logic miss;
    logic end_of_session;
    logic [15:0] checksum;
    logic [79:0] session;
    logic [63:0] sequence_num;
    logic [63:0] expected_sequence_num;
    logic [63:0] next_expected_sequence_num;
    logic [15:0] message_count;
    logic [15:0] message_length;
    state curr_state, next_state;


    // register logic
    always_ff @ (posedge clk, negedge n_rst) begin: mold_FF
        if (1'b0 == nRST) begin 
            curr_state <= IDLE; 
            expected_sequence_num <= 64'b1;
        end else begin
            expected_sequence_num <= next_expected_sequence_num;
            curr_state <= next_state;
        end
    end


    always_comb begin
    
        // output logic
        mold_valid = (state == PAYLOAD);
        mold_request_valid = (state == REREQ1 | state == REREQ2 | state == REREQ3);
    
        // is this a heartbeat message to end session?
        end_of_session = (message_length == end_session);
    
    
        // handling inputs from UDP layer
        if (state == CHKSUM) begin
            checksum = UDP_payload[15:0];
            session[79:32] = UDP_payload[63:16];
        end else if (state == SESSION) begin
            session[31:0] = UDP_payload[31:0];
            sequence_num[63:32] = UDP_payload[63:32];
        end else if (state == MSG) begin 
            sequence_num[31:0] = UDP_payload[31:0];
            message_count = UDP_payload[47:32];
            message_length = UDP_payload[63:47];
        end else if (state == PAYLOAD && message_length != heartbeat && message_length != end_session) begin 
    	mold_payload = UDP_payload;	
        end
    
    
        // handling misses
        miss = (sequence_num != expected_sequence_num && message_length != heartbeat && message_length != end_session);
        if (end_of_session) begin
            next_expected_sequence_num = 64'b1;
        end else if (message_length == heartbeat) begin 
    	next_expected_sequence_num = expected_sequence_num;
        end else begin
    	next_expected_sequence_num = sequence_num + 1;
        end
    
        // next state logic 
        case (curr_state) begin
            IDLE: next_state = CHKSUM;
            CHKSUM: next_state = SESSION;
            SESSION: next_state = MSG;
            MSG: next_state = (miss == 1'b1 ? REREQ1 : PAYLOAD);
            REREQ1: next_state = REREQ2;
            REREQ2: next_state = REREQ3;
            REREQ3: next_state = (UDP_valid == 1'b1 ? CHKSUM : IDLE);
            PAYLOAD: next_state = (end_of_session ? IDLE : PAYLOAD);
        endcase 
    end
endmodule
