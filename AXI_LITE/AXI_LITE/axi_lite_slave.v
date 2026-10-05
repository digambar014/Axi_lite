module axi_lite_slave #(
	parameter ADDR_WIDTH = 32,
	parameter DATA_WIDTH = 32,
	parameter NUM_REGS   =4

)(
	input wire clk,
	input wire reset,


	//Write Address Channel
	input wire [ADDR_WIDTH-1 : 0] s_awaddr,
	input wire                    s_awvalid,
        output reg                    s_awready,


	//Write Data Channel
	input wire [DATA_WIDTH-1:0]   s_wdata,
        input wire [3:0]              s_wstrb,

	input wire                    s_wvalid,
	output reg                    s_wready,

	//write Response Channel
	output reg [1:0]  s_bresp,
	output reg        s_bvalid,
	input wire        s_bready,
	
	// Ready Address Channel
	input wire [ADDR_WIDTH-1:0] s_araddr,
	input wire                  s_arvalid,
	output reg                  s_arready,

	// Read Data Channel
	output reg [DATA_WIDTH-1:0] s_rdata,
	output reg [1:0]      s_rresp,
        output reg            s_rvalid,
	input wire            s_rready

);
        reg [DATA_WIDTH-1:0] reg_file [0:NUM_REGS-1];
	integer k;

	reg [ADDR_WIDTH-1:0] wr_addr_q;
	reg [ADDR_WIDTH-1:0] rd_addr_q;

	localparam WR_IDLE = 2'd0,
	           WR_DATA = 2'd1,
		   WR_RESP = 2'd2;

        reg [1:0] wstate;

        always @(posedge clk or posedge reset) begin
		if(reset)begin
		       wstate      <= WR_IDLE;
		       s_awready   <= 1'b0;
		       s_wready    <= 1'b0;
		       s_bvalid    <= 1'b0;
		       s_bresp     <= 2'b00;
		       wr_addr_q  <= 0;

		       for(k = 0 ; k < NUM_REGS ; k = k+1)begin
			       reg_file[k] <= 0 ;
		       end

		  end else begin
			        s_awready <= 1'b0;
				s_wready  <= 1'b0;

				case(wstate)
					WR_IDLE : begin
						if(s_awvalid) begin
							s_awready <= 1'b1;
							wr_addr_q <= s_awaddr;
							wstate    <= WR_DATA;
						end
					end

					WR_DATA :begin
						if(s_wvalid) begin
							s_wready <= 1'b1;

							if(s_wstrb[0]) reg_file[(wr_addr_q>>2) % NUM_REGS][7:0]   <= s_wdata [7:0];
							if(s_wstrb[1]) reg_file[(wr_addr_q>>2) % NUM_REGS][15:8]  <= s_wdata [15:8];
							if(s_wstrb[2]) reg_file[(wr_addr_q>>2) % NUM_REGS][23:16] <= s_wdata [23:16];
							if(s_wstrb[3]) reg_file[(wr_addr_q>>2) % NUM_REGS][31:24] <= s_wdata [31:24];
							s_bvalid <= 1'b1;
						        s_bresp <= 2'b00;
							wstate   <= WR_RESP;

						end
					end

					WR_RESP :begin
						if(s_bready && s_bvalid) begin
							s_bvalid <= 1'b0;
							wstate <= WR_IDLE;

						end
					end

					default : wstate <= WR_IDLE;
				endcase
			end
		end

		// Read FSM

		localparam RD_IDLE = 2'd0,
			   RD_DATA = 2'd1;

		reg [1:0] rstate;

		always @(posedge clk or posedge reset) begin
			if(reset) begin
				rstate <= RD_IDLE;
				s_arready <= 1'b0;
				s_rvalid  <= 1'b0;
				s_rdata  <= 0;
				s_rresp  <= 2'b00;
				rd_addr_q <=0;
			end else begin
				s_arready <= 1'b0;

				case(rstate)

					RD_IDLE : begin
						if(s_arvalid) begin
							s_arready <= 1'b1;
							rd_addr_q <= s_araddr;

							s_rdata <= reg_file[(s_araddr>>2) % NUM_REGS] ;
							s_rresp <= 2'b00;
							s_rvalid <= 1'b1;
							rstate   <= RD_DATA;

						end
					end

					RD_DATA :begin
						if(s_rready && s_rvalid)begin
							s_rvalid <= 1'b0;
							rstate   <= RD_IDLE;
						end
					end

					default : rstate <= RD_IDLE;

				endcase

			end
			end
			endmodule





                                                                                                  
              


							







		        	

