// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_axi_lite.h for the primary calling header

#ifndef VERILATED_VTB_AXI_LITE___024ROOT_H_
#define VERILATED_VTB_AXI_LITE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_axi_lite__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_axi_lite___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_axi_lite__DOT__clk;
    CData/*0:0*/ tb_axi_lite__DOT__reset;
    CData/*0:0*/ tb_axi_lite__DOT__awvalid;
    CData/*0:0*/ tb_axi_lite__DOT__awready;
    CData/*3:0*/ tb_axi_lite__DOT__wstrb;
    CData/*0:0*/ tb_axi_lite__DOT__wvalid;
    CData/*0:0*/ tb_axi_lite__DOT__wready;
    CData/*1:0*/ tb_axi_lite__DOT__bresp;
    CData/*0:0*/ tb_axi_lite__DOT__bvalid;
    CData/*0:0*/ tb_axi_lite__DOT__bready;
    CData/*0:0*/ tb_axi_lite__DOT__arvalid;
    CData/*0:0*/ tb_axi_lite__DOT__arready;
    CData/*1:0*/ tb_axi_lite__DOT__rresp;
    CData/*0:0*/ tb_axi_lite__DOT__rvalid;
    CData/*0:0*/ tb_axi_lite__DOT__rready;
    CData/*1:0*/ tb_axi_lite__DOT__u_slave__DOT__wstate;
    CData/*1:0*/ tb_axi_lite__DOT__u_slave__DOT__rstate;
    CData/*0:0*/ __Vdlyvval__tb_axi_lite__DOT__clk__v0;
    CData/*0:0*/ __Vdlyvset__tb_axi_lite__DOT__clk__v0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_axi_lite__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_axi_lite__DOT__reset__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_axi_lite__DOT__awaddr;
    IData/*31:0*/ tb_axi_lite__DOT__wdata;
    IData/*31:0*/ tb_axi_lite__DOT__araddr;
    IData/*31:0*/ tb_axi_lite__DOT__rdata;
    IData/*31:0*/ tb_axi_lite__DOT__captured_rdata;
    IData/*31:0*/ tb_axi_lite__DOT__pass_cnt;
    IData/*31:0*/ tb_axi_lite__DOT__fail_cnt;
    IData/*31:0*/ tb_axi_lite__DOT__u_slave__DOT__k;
    IData/*31:0*/ tb_axi_lite__DOT__u_slave__DOT__wr_addr_q;
    IData/*31:0*/ tb_axi_lite__DOT__u_slave__DOT__rd_addr_q;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 4> tb_axi_lite__DOT__u_slave__DOT__reg_file;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h677ae78a__0;
    VlTriggerScheduler __VtrigSched_h677ae849__0;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_axi_lite__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_axi_lite___024root(Vtb_axi_lite__Syms* symsp, const char* v__name);
    ~Vtb_axi_lite___024root();
    VL_UNCOPYABLE(Vtb_axi_lite___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
