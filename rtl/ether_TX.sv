`include "TCP_flow_if.vh"
`include "ether_pkg.vh"

// //Interface of between the TCP receiver and the TCP_FLOW logic
// logic [7:0] TCP_control_rx;
// logic [31:0] seq_num_rx;
// logic [31:0] ACK_rx;
// logic [3:0] offset_rx;
// logic [15:0] window_size_rx;
// logic [15:0] checksum_rx;
// logic [15:0] urgent_pointer_rx;
// logic rcv_data;


// //Interface of between the TCP sender and the TCP_FLOW logic
// logic TCP_tx_en, seq_up;
// logic [7:0] TCP_control_tx;
// logic [31:0] seq_num_tx;
// logic [31:0] ACK_tx;
// logic [3:0] offset_tx;
// logic [15:0] window_size_tx;
// logic [15:0] checksum_tx;
// logic [15:0] urgent_pointer_tx;
// logic [31:0] TCP_len_data;
// logic end_ss;
// logic TCP_stop_flg;

// logic SYN_sent, ACK_sent,FIN_sent, timeout_flag;
// logic [31:0] ISN_num;

// //Number of bytes in flight
// logic  [31:0] bytes_sent;
// logic  [31:0] bytes_abt_sent;
// logic  [31:0] payload_len_rx;

// modport rx(
//     input rcv_data, timeout_flag,
//     input TCP_control_rx,
//     input seq_num_rx,
//     input ACK_rx,
//     input offset_rx,
//     input window_size_rx,
//     input checksum_rx,
//     input urgent_pointer_rx,
//     input payload_len_rx
// );

// modport tx(
//     input SYN_sent,
//     input FIN_sent,
//     input ACK_sent,
//     input end_ss,
//     input ISN_num,
//     input bytes_sent,
//     input bytes_abt_sent,
//     input seq_up,
//     output TCP_len_data,
//     output TCP_stop_flg,
//     output TCP_control_tx,
//     output seq_num_tx,
//     output ACK_tx,
//     output offset_tx,
//     output window_size_tx,
//     output checksum_tx,
//     output urgent_pointer_tx
// );

//Making the wrapper first
module ether_TX (
    input logic CLK,
    input logic nRST,
    input logic rcv_data,
    input logic timeout_flag,
    input logic [7:0] TCP_control_rx,
    input logic [31:0] seq_num_rx,
    input logic [31:0] ACK_rx,
    input logic [3:0] offset_rx,
    input logic [15:0] window_size_rx,
    input logic [15:0] checksum_rx,
    input logic [15:0] urgent_pointer_rx,
    input logic [31:0] payload_len_rx,
    // Interface to the TCP sender
    input logic SYN_sent,
    input logic ACK_sent,
    input logic FIN_sent,
    input logic end_ss,
    input logic [31:0] ISN_num,
    input logic [31:0] bytes_sent,
    input logic [31:0] bytes_abt_sent,
    input logic seq_up,
    output logic [31:0] TCP_len_data,
    output logic TCP_stop_flg,
    output logic [7:0] TCP_control_tx,
    output logic [31:0] seq_num_tx,
    output logic [31:0] ACK_tx,
    output logic [3:0] offset_tx,
    output logic [15:0] window_size_tx,
    output logic [15:0] checksum_tx,
    output logic [15:0] urgent_pointer_tx
    
);


    TCP_flow_if my_TCP();
    // Assigning the modports
    assign my_TCP.rcv_data = rcv_data;
    assign my_TCP.timeout_flag = timeout_flag;
    assign my_TCP.TCP_control_rx = TCP_control_rx;
    assign my_TCP.seq_num_rx = seq_num_rx;
    assign my_TCP.ACK_rx = ACK_rx;
    assign my_TCP.offset_rx = offset_rx;
    assign my_TCP.window_size_rx = window_size_rx;
    assign my_TCP.checksum_rx = checksum_rx;
    assign my_TCP.urgent_pointer_rx = urgent_pointer_rx;
    assign my_TCP.payload_len_rx = payload_len_rx;


    assign my_TCP.SYN_sent = SYN_sent;
    assign my_TCP.FIN_sent = FIN_sent;
    assign my_TCP.ACK_sent = ACK_sent;
    assign my_TCP.end_ss = end_ss;
    assign my_TCP.ISN_num = ISN_num;
    assign my_TCP.bytes_sent = bytes_sent;
    assign my_TCP.bytes_abt_sent = bytes_abt_sent;
    assign my_TCP.seq_up = seq_up;
    assign TCP_len_data = my_TCP.TCP_len_data;
    assign TCP_stop_flg = my_TCP.TCP_stop_flg;
    assign TCP_control_tx = my_TCP.TCP_control_tx;
    assign seq_num_tx = my_TCP.seq_num_tx;
    assign ACK_tx = my_TCP.ACK_tx;
    assign offset_tx = my_TCP.offset_tx;
    assign window_size_tx = my_TCP.window_size_tx;
    assign checksum_tx = my_TCP.checksum_tx;
    assign urgent_pointer_tx = my_TCP.urgent_pointer_tx;
    

    TCP_flow_ctrl my_TCP_flow_ctrl (
        .CLK(CLK),
        .nRST(nRST),
        .myrx(my_TCP.rx),
        .mytx(my_TCP.tx)
    );

endmodule
