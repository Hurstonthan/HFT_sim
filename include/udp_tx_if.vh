'ifndef UDP_TX_IF_VH
`define UDP_TX_IF_VH

`include "receiver_pkg.vh"
interface udp_mac_if_vh;
    import receiver_pkg::*;

    //input 
    logic UDP_tx_en,
    logic [7:0] UDP_control_tx,
    logic [31:0] seq_num_tx,
    logic [31:0] ACK_tx,
    logic [3:0] offset_tx,
    logic [15:0] window_size_tx,
    logic [15:0] urgent_pointer_tx,
    logic [15:0] UDP_basesum_payload,
    logic [DATA_SIZE - 1 : 0] UDP_payload_tx,
    logic [15:0] bytes_abt_sent;

    // output logic SYN_sent, FIN_sent,
    logic [15:0] bytes_sent,
    // Interface between TCP_tx and IP_tx
    // input logic TCP_send,
    logic [DATA_SIZE - 1 : 0] UDP_transmit
    modport udp_tx(
        input UDP_tx_en, UDP_control_tx, seq_num_tx, ACK_tx, offset_tx, window_size_tx, urgent_pointer_tx,
        UDP_basesum_payload, UDP_payload_tx, bytes_abt_sent,
        output bytes_sent, UDP_transmit
    );
    modport tb(
        output UDP_tx_en, UDP_control_tx, seq_num_tx, ACK_tx, offset_tx, window_size_tx, urgent_pointer_tx,
        UDP_basesum_payload, UDP_payload_tx, bytes_abt_sent,
        input bytes_sent, UDP_transmit
    );
endinterface

`endif 