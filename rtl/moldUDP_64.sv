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
    state curr_state, next_state;


    // register logic
    always_ff @ (posedge clk, negedge n_rst) begin: mold_FF
        if (1'b0 == nRST) begin 
	    curr_state <= IDLE; 
	end else begin
	    curr_state <= next_state;
	end
    end


    always_comb begin

    // next state logic 

    case (curr_state) begin
	IDLE: next_state = CHKSUM;
        CHKSUM: next_state = SESSION;
 	SESSION: next_state = MSG;
	MSG: next_state = (miss == 1'b1 ? REREQ1 : PAYLOAD);
	REREQ1: next_state = REREQ2;
	REREQ2: next_state = REREQ3;
	REREQ3: next_state = (UDP_valid == 1'b1 ? CHKSUM : IDLE);
	PAYLOAD: next_state = IDLE;
    endcase 



    // output logic
    mold_valid = (state == PAYLOAD);
    mold_request_valid = (state == REREQ1 | state == REREQ2 | state == REREQ3);

    
    end
