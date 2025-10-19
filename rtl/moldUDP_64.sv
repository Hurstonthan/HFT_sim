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
    output logic [15:0] mold_count,
    output logic [63:0] mold_payload,
    output logic [63:0] sequence_id,
    output logic [79:0] session_id
    );

    typedef enum logic [2:0] {IDLE, CHKSUM, SESSION, MSG, PAYLOAD} state_t; 

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
    logic [15:0] next_count;
    logic [15:0] next_length;

    logic [63:0] next_payload;
    logic next_valid;
    state_t curr_state, next_state;


    // register logic
    always_ff @ (posedge clk, negedge n_rst) begin: mold_FF
        if (~n_rst) begin 
            curr_state <= IDLE; 
            sequence_num_first <= 32'b0;
            sequence_num_second <= 32'b1;
            session_first <= 48'b0;
            session_second <= '0;
            mold_payload <= '0;
            mold_valid <= '0;
            mold_count <= '0;
            mold_length <= '0;
        end else begin
            curr_state <= next_state;   
            sequence_num_first <= next_sequence_num_first;
            sequence_num_second <= next_sequence_num_second;
            session_first <= next_session_first;
            session_second <= next_session_second;
            mold_payload <= next_payload;
            mold_valid <= next_valid;
            mold_count <= next_count;
            mold_length <= next_length;
        end
    end


    assign session = {session_first, session_second};
    assign sequence_num = {sequence_num_first, sequence_num_second};
    assign session_id = session;
    assign sequence_id = sequence_num;



    // output logic and header info
    always_comb begin
        next_valid = (curr_state == PAYLOAD);
        next_state = curr_state;
        // default values
        next_payload = UDP_payload;	
        next_length = mold_length;
        next_count = mold_count; 

        next_sequence_num_first = sequence_num_first;
        next_sequence_num_second = sequence_num_second;
        next_session_first = session_first;
        next_session_second = session_second;

        case (curr_state)
            IDLE: begin
                if (UDP_valid) begin
                    next_state = CHKSUM;
                    next_session_first = UDP_payload[47:0];
                    checksum = UDP_payload[63:48]; // not used in MOLDUDP, it is UDP signa
                end else begin
                    next_state = curr_state; // keep in IDLE
                end
            end
            CHKSUM: begin
                next_state = SESSION;
                next_session_second = UDP_payload[63:32];
                next_sequence_num_first = UDP_payload[31:0];
            end
            SESSION: begin
                next_state = MSG;
                next_sequence_num_second = UDP_payload[63:32];
                next_count = UDP_payload[31:16];
                next_length = UDP_payload[15:0];
            end
            MSG: begin
                if (mold_count == heartbeat | mold_count == end_session) begin
                    next_state = IDLE;
                end else begin
                    next_state = PAYLOAD;
                end
            end
            PAYLOAD: next_state = (done ? IDLE : PAYLOAD); 
        endcase
    end
    // next state logi 
endmodule