module tb_axi_lite;

    // ──────────────────────────────────────────────────────────────────────
    //  Parameters
    // ──────────────────────────────────────────────────────────────────────
    parameter CLK_PERIOD = 10;   // 10 ns clock  →  100 MHz
    parameter ADDR_WIDTH = 32;
    parameter DATA_WIDTH = 32;

    // ──────────────────────────────────────────────────────────────────────
    //  Signals (Master drives; Slave responds)
    // ──────────────────────────────────────────────────────────────────────
    reg                    clk;
    reg                    reset;

    //  Write Address
    reg  [ADDR_WIDTH-1:0]  awaddr;
    reg                    awvalid;
    wire                   awready;

    //  Write Data
    reg  [DATA_WIDTH-1:0]  wdata;
    reg  [3:0]             wstrb;
    reg                    wvalid;
    wire                   wready;

    //  Write Response
    wire [1:0]             bresp;
    wire                   bvalid;
    reg                    bready;

    //  Read Address
    reg  [ADDR_WIDTH-1:0]  araddr;
    reg                    arvalid;
    wire                   arready;

    //  Read Data
    wire [DATA_WIDTH-1:0]  rdata;
    wire [1:0]             rresp;
    wire                   rvalid;
    reg                    rready;

    // ──────────────────────────────────────────────────────────────────────
    //  DUT: AXI-Lite Slave
    // ──────────────────────────────────────────────────────────────────────
    axi_lite_slave #(
        .ADDR_WIDTH (ADDR_WIDTH),
        .DATA_WIDTH (DATA_WIDTH),
        .NUM_REGS   (4)
    ) u_slave (
        .clk        (clk),
        .reset      (reset),
        // Write Address
        .s_awaddr   (awaddr),   .s_awvalid (awvalid),  .s_awready (awready),
        // Write Data
        .s_wdata    (wdata),    .s_wstrb   (wstrb),
        .s_wvalid   (wvalid),   .s_wready  (wready),
        // Write Response
        .s_bresp    (bresp),    .s_bvalid  (bvalid),   .s_bready  (bready),
        // Read Address
        .s_araddr   (araddr),   .s_arvalid (arvalid),  .s_arready (arready),
        // Read Data
        .s_rdata    (rdata),    .s_rresp   (rresp),
        .s_rvalid   (rvalid),   .s_rready  (rready)
    );

    // ──────────────────────────────────────────────────────────────────────
    //  Clock Generator
    // ──────────────────────────────────────────────────────────────────────
    initial clk = 0;
    always #(CLK_PERIOD/2) clk <= ~clk;

    // ──────────────────────────────────────────────────────────────────────
    //  VCD Waveform Dump
    // ──────────────────────────────────────────────────────────────────────
    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0, tb_axi_lite);
    end

    // ──────────────────────────────────────────────────────────────────────
    //  Helper tasks
    // ──────────────────────────────────────────────────────────────────────

    task axi_write;
        input [ADDR_WIDTH-1:0] addr;
        input [DATA_WIDTH-1:0] data;
        begin
            @(negedge clk);
            awaddr  = addr;
            awvalid = 1'b1;

            $display("[WRITE] awvalid=1, wvalid=0 -> Sending address first...");

            @(posedge clk);
            while (!awready) @(posedge clk);

            $display("[WRITE] awready=1 -> Handshake Done");

            @(negedge clk);
            awvalid = 1'b0;

            wdata   = data;
            wstrb   = 4'hF;
            wvalid  = 1'b1;

            @(posedge clk);
            while (!wready) @(posedge clk);

            $display("[WRITE] wready=1 -> Data Accepted");

            @(negedge clk);
            wvalid = 1'b0;
            bready = 1'b1;

            @(posedge clk);
            while (!bvalid) @(posedge clk);

            $display("[WRITE] Response Received");

            @(negedge clk);
            bready = 1'b0;
        end
    endtask


    task axi_read;
        input [ADDR_WIDTH-1:0] addr;
        output [DATA_WIDTH-1:0] rd_data;

        begin
            @(negedge clk);
            araddr  = addr;
            arvalid = 1'b1;

            @(posedge clk);
            while (!arready) @(posedge clk);

            @(negedge clk);
            arvalid = 1'b0;
            rready  = 1'b1;

            @(posedge clk);
            while (!rvalid) @(posedge clk);

            rd_data = rdata;

            @(negedge clk);
            rready = 1'b0;
        end
    endtask


    // ──────────────────────────────────────────────────────────────────────
    //  Main Stimulus
    // ──────────────────────────────────────────────────────────────────────
    reg [DATA_WIDTH-1:0] captured_rdata;
    integer pass_cnt;
    integer fail_cnt;

    initial begin

        awaddr   = 0;
        awvalid = 0;
        wdata   = 0;
        wstrb   = 4'hF;
        wvalid  = 0;
        bready  = 0;
        araddr  = 0;
        arvalid = 0;
        rready  = 0;

        pass_cnt = 0;
        fail_cnt = 0;

        reset = 1'b1;

        repeat(4)
            @(posedge clk);

        @(negedge clk);
        reset = 1'b0;

        axi_write(32'h0000_0004,32'hA5A5_A5A5);

        axi_read(32'h0000_0004,captured_rdata);


        if(captured_rdata === 32'hA5A5_A5A5) begin
            $display("PASS");
            pass_cnt++;
        end
        else begin
            $display("FAIL");
            fail_cnt++;
        end


        $display("Passed=%0d Failed=%0d",
                  pass_cnt,fail_cnt);

        #(CLK_PERIOD*5);
        $finish;

    end


    initial begin
        #500000;
        $display("Watchdog timeout");
        $finish;
    end

endmodule

