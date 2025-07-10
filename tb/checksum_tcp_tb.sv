module chksum_tcp_tb;
localparam int DATA_W = 64;
localparam int SUM_W = 16;
localparam int N = DATA_W / SUM_W;
localparam int L_W = SUM_W + $clog2(N+1);
localparam int C_W = L_W - SUM_W;

task test_checksum(input exp_err_v, input integer cycles);
    begin
        logic [DATA_W-1:0] data;
	    logic [SUM_W-1:0]  sum;
	    logic [L_W-1:0] tmp;
	    logic [C_W:0]   carry;
	    for( int c = 0; c < cycles; c++) begin
	    	data = $random; // random also generates 32 bits, will need to update if I go to 64 
	    	tmp = sum;
	    	for( int i = 0; i < N; i ++ ) begin
	    		tmp += data[i*SUM_W+SUM_W-1:i*SUM_W];
	    	end
	    	carry = tmp[L_W-1:SUM_W];
	    	tmp = tmp[SUM_W-1:0] + carry;
	    	sum = ~tmp;	
	    end
    end
endtask

endmodule