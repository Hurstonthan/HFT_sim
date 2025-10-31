module moldUDP64_top#()(
    input logic clk,
    input logic n_rst,
    input logic UDP_flush,
    input logic UDP_valid,
    input logic done,
    input logic [63:0] UDP_payload,
    output logic rerequest_valid,
    output logic [63:0] rerequest_payload,
    output logic [63:0] moldUDP_payload, //connecting counter payload
    output logic [7:0] segment_sel0,
    output logic [7:0] segment_sel1,
    output logic moldUDP_done
);
    logic mold_valid;
    logic [15:0] mold_length, mold_count;
    logic [63:0] mold_payload, sequence_id;
    logic [79:0] session_id;
    logic mold_done;
    moldUDP DECODE(
        .clk(clk),
        .n_rst(n_rst),
        .UDP_flush(UDP_flush),
        .UDP_valid(UDP_payload),
        .UDP_payload(UDP_payload),
        .done(mold_done),
        .mold_valid(mold_valid),
        .mold_length(mold_length),
        .mold_count(mold_count),
        .mold_payload(mold_payload),
        .sequence_id(sequence_id),
        .session_id(session_id)
    );

    mold_counter COUNTER(
        .clk(clk),
        .n_rst(n_rst),
        .sequence_id(sequence_id),
        .mold_payload(mold_payload),
        .mold_length(mold_length), //from the first segment
        .mold_valid(mold_valid),
        .message_count(mold_count),
        .counter_done(mold_done), 
        .counter_payload(moldUDP_payload),
        .segment_sel0(segment_sel0), //MSB if 11110001 means the first section is high and second is low, so on
        .segment_sel1(segment_sel1)
    );

    mold_miss MISS_DETECT(
        .clk(clk),
        .n_rst(n_rst),
        .session_id(session_id),
        .sequence_num_input(sequence_id),
        .message_count(mold_count),
        .rerequest_valid(rerequest_valid),
        .rerequest_payload(rerequest_payload)
    );
endmodule