`ifndef TCP_IF_VH
`define TCP_IF_VH

interface TCP_if;

    // Interface between the TCP receiver and the TCP_FLOW logic
    logic [7:0] TCP_control_rx;
    logic [31:0] seq_num_rx;
    logic [31:0] ACK_rx;
    logic [3:0] offset_rx;
    logic [15:0] window_size_rx;
    logic [15:0] checksum_rx;
    logic [15:0] urgent_pointer_rx;
    logic rcv_data;

    // Interface between the TCP sender and the TCP_FLOW logic
    logic TCP_tx_en, seq_up;
    logic [7:0] TCP_control_tx;
    logic [31:0] seq_num_tx;
    logic [31:0] ACK_tx;
    logic [3:0] offset_tx;
    logic [15:0] window_size_tx;
    logic [15:0] checksum_tx;
    logic [15:0] urgent_pointer_tx;
    logic [31:0] TCP_len_data;
    logic end_ss;
    logic TCP_stop_flg;

    // Flags for transmission control
    logic SYN_sent, ACK_sent, FIN_sent, timeout_flag;
    logic [31:0] ISN_num;  // Initial Sequence Number
    logic [31:0] rcv_next; // Next sequence number to receive
    logic [31:0] seq_num;  // Current sequence number

    // Number of bytes in flight
    logic  [31:0] bytes_sent;
    logic  [31:0] bytes_abt_sent; // Bytes about to be sent
    logic  [31:0] payload_len_rx;  // Length of received payload

    modport rx(
        input rcv_data, timeout_flag,
        input TCP_control_rx,
        input seq_num_rx,
        input ACK_rx,
        input offset_rx,
        input window_size_rx,
        input checksum_rx,
        input urgent_pointer_rx,
        input payload_len_rx
    );

    modport tx(
        input SYN_sent,
        input FIN_sent,
        input ACK_sent,
        input end_ss,
        input ISN_num,
        input bytes_sent,
        input bytes_abt_sent
    );
    modport tx_ctrl(
        input TCP_tx_en,
        input seq_up,
        input TCP_control_tx,
        input seq_num_tx,
        input ACK_tx,
        input offset_tx,
        input window_size_tx,
        input checksum_tx,
        input urgent_pointer_tx,
        input TCP_len_data,
        input end_ss,
        input TCP_stop_flg
    );
    modport rx_ctrl(
        output TCP_tx_en,
        output seq_up,
        output TCP_control_tx,
        output seq_num_tx,
        output ACK_tx,
        output offset_tx,
        output window_size_tx,
        output checksum_tx,
        output urgent_pointer_tx,
        output TCP_len_data,
        output end_ss,
        output TCP_stop_flg
    );
endinterface

`endif