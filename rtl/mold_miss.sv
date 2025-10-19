module mold_miss#()(
    input logic clk, 
    input logic n_rst, 
    input logic [79:0] session_id,
    input logic [63:0] sequence_num_input,
    input logic [15:0] message_count,
    output logic rerequest_valid,
    output logic [63:0] rerequest_payload
);


typedef enum logic [1:0] {IDLE, SESSION, SEQ, COUNT} state_t;

state_t state, next_state;

logic miss, next_miss;
logic [63:0] next_payload;
logic [15:0] current_count, next_count;
logic [79:0] current_session;
logic [63:0] seq_num;
logic [63:0] next_seq_num;
logic [63:0] expected_seq_num;
logic [63:0] next_expected_seq_num;



logic [15:0] request_count, next_request_count;
logic [63:0] request_seq, next_request_seq;

always_ff @ (posedge clk, negedge n_rst) begin
    if (~n_rst) begin
        seq_num <= '0;
        expected_seq_num <= '1;
        current_session <= '0;
        state <= IDLE;
        miss <= '0;
        current_count <= '0;
        request_seq <= '0;
        rerequest_payload <= '0;
        request_count <= '0;
    end else begin
        seq_num <= next_seq_num;
        expected_seq_num <= next_expected_seq_num;
        current_session <= session_id;
        state <= next_state;
        miss <= next_miss;
        current_count <= next_count;
        request_seq <= next_request_seq;
        rerequest_payload <= next_payload;
        request_count <= next_request_count;
    end
end


always_comb begin: fsm
    // rerequest_payload = payload;
    next_payload = rerequest_payload;
    rerequest_valid = (state != IDLE);

    next_miss = miss;
    next_count = message_count;
    next_request_count = request_count;
    next_request_seq = request_seq;

    next_seq_num = (miss ? seq_num: sequence_num_input);

    if (~miss && (next_seq_num > expected_seq_num)) begin
        next_miss = 1;

        next_request_count = next_seq_num - expected_seq_num;
        next_request_seq = expected_seq_num;
    end

    next_expected_seq_num = ((miss | next_seq_num < expected_seq_num) ? expected_seq_num : next_seq_num + next_count);


    case(state) 
        IDLE: begin 
            next_state = (miss ? SESSION : IDLE);
            next_payload = current_session[79:16];
        end

        SESSION: begin
            next_state = SEQ;
            next_payload[63:48] = current_session[15:0];
            next_payload[47:0] = request_seq[63:16];
        end
        SEQ: begin
            next_state = COUNT;
            next_payload[63:48] = request_seq[15:0];
            next_payload[47:32] = request_count;
            next_payload[31:0] = '1;
        end
        COUNT: begin
            next_state = IDLE;
            next_miss = 0;
        end
    endcase

end


endmodule