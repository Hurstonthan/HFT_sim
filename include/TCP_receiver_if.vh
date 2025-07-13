`ifndef TCP_RECEIVER_IF_VH
`define TCP_RECEIVER_IF_VH




interface TCP_receiver_if;

    // Interface for the TCP receiver
    logic [63:0] IP_payload_rx;
    logic valid_IP_header_rx;
    logic IP_flush;
    

    logic [7:0] TCP_control_rx;
    logic [31:0] seq_num_rx;
    logic [31:0] ACK_rx;
    logic [3:0] offset_rx;
    logic [15:0] window_size_rx;
    logic [15:0] checksum_rx;
    logic [15:0] urgent_pointer_rx;
    logic [15:0] TCP_len_data;
    logic [15:0] TCP_len;
    logic [15:0] IP_pseuder;
    logic rcv_data, TCP_valid, TCP_flush;

    // Interface between receiver and the data
    logic [63:0] TCP_payload_rx; // Received TCP payload
    
    


    // Modport for the receiver
    modport rx_ctrl(
        input IP_payload_rx,
        input valid_IP_header_rx,
        input IP_flush,
        input TCP_len,
        input IP_pseuder,

        output rcv_data,
        output TCP_control_rx,
        output seq_num_rx,
        output ACK_rx,
        output offset_rx,
        output window_size_rx,
        output checksum_rx,
        output urgent_pointer_rx,
        output TCP_len_data,
        output TCP_payload_rx,
        output TCP_valid,
        output TCP_flush
    );
endinterface

`endif 
