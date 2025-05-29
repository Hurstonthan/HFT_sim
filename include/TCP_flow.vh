`ifndef TCP_FLOW_VH
`define TCP_FLOW_VH

interface TCP_flow_if;


//Interface of between the TCP receiver and the TCP_FLOW logic
logic [7:0] TCP_control_rx;
logic [31:0] seq_num_rx;
logic [31:0] ACK_rx;
logic [3:0] offset_rx;
logic [15:0] window_size_rx;
logic [15:0] checksum_rx;
logic [15:0] urgent_pointer_rx;
logic rcv_data;


//Interface of between the TCP sender and the TCP_FLOW logic
logic TCP_tx_en, seq_up;
logic [7:0] TCP_control_tx;
logic [31:0] seq_num_tx;
logic [31:0] ACK_tx;
logic [3:0] offset_tx;
logic [15:0] window_size_tx;
logic [15:0] checksum_tx;
logic [15:0] urgent_pointer_tx;
logic [15:0] TCP_len_data;

logic SYN_sent, FIN_sent, timeout_flag;
logic [31:0] ISN_num;

//Number of bytes in flight
logic  [15:0] bytes_sent;
logic  [15:0] bytes_abt_sent;
logic  [15:0] len_bytes_rx;

modport rx(
    input rcv_data, timeout_flag,
    input TCP_control_rx,
    input seq_num_rx,
    input ACK_rx,
    input offset_rx,
    input window_size_rx,
    input checksum_rx,
    input urgent_pointer_rx,
    input len_bytes_rx
);

modport tx(
    input SYN_sent,
    input FIN_sent,
    input ISN_num,
    input bytes_sent,
    input bytes_abt_sent,
    input seq_up,
    output TCP_length_data,
    output TCP_stop_flg,
    output TCP_control_tx,
    output seq_num_tx,
    output ACK_tx,
    output offset_tx,
    output window_size_tx,
    output checksum_tx,
    output urgent_pointer_tx,
);

endinterface
`endif