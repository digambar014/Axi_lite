// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_axi_lite.h for the primary calling header

#include "verilated.h"

#include "Vtb_axi_lite__Syms.h"
#include "Vtb_axi_lite___024root.h"

VL_ATTR_COLD void Vtb_axi_lite___024root___eval_initial__TOP(Vtb_axi_lite___024root* vlSelf);
VlCoroutine Vtb_axi_lite___024root___eval_initial__TOP__0(Vtb_axi_lite___024root* vlSelf);
VlCoroutine Vtb_axi_lite___024root___eval_initial__TOP__1(Vtb_axi_lite___024root* vlSelf);
VlCoroutine Vtb_axi_lite___024root___eval_initial__TOP__2(Vtb_axi_lite___024root* vlSelf);

void Vtb_axi_lite___024root___eval_initial(Vtb_axi_lite___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi_lite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite___024root___eval_initial\n"); );
    // Body
    Vtb_axi_lite___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_axi_lite___024root___eval_initial__TOP__0(vlSelf);
    Vtb_axi_lite___024root___eval_initial__TOP__1(vlSelf);
    Vtb_axi_lite___024root___eval_initial__TOP__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_axi_lite__DOT__clk__0 
        = vlSelf->tb_axi_lite__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_axi_lite__DOT__reset__0 
        = vlSelf->tb_axi_lite__DOT__reset;
}

VL_INLINE_OPT VlCoroutine Vtb_axi_lite___024root___eval_initial__TOP__0(Vtb_axi_lite___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi_lite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite___024root___eval_initial__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vtask_tb_axi_lite__DOT__axi_write__0__addr;
    __Vtask_tb_axi_lite__DOT__axi_write__0__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi_lite__DOT__axi_write__0__data;
    __Vtask_tb_axi_lite__DOT__axi_write__0__data = 0;
    IData/*31:0*/ __Vtask_tb_axi_lite__DOT__axi_read__1__addr;
    __Vtask_tb_axi_lite__DOT__axi_read__1__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi_lite__DOT__axi_read__1__rd_data;
    __Vtask_tb_axi_lite__DOT__axi_read__1__rd_data = 0;
    // Body
    vlSelf->tb_axi_lite__DOT__awaddr = 0U;
    vlSelf->tb_axi_lite__DOT__awvalid = 0U;
    vlSelf->tb_axi_lite__DOT__wdata = 0U;
    vlSelf->tb_axi_lite__DOT__wstrb = 0xfU;
    vlSelf->tb_axi_lite__DOT__wvalid = 0U;
    vlSelf->tb_axi_lite__DOT__bready = 0U;
    vlSelf->tb_axi_lite__DOT__araddr = 0U;
    vlSelf->tb_axi_lite__DOT__arvalid = 0U;
    vlSelf->tb_axi_lite__DOT__rready = 0U;
    vlSelf->tb_axi_lite__DOT__pass_cnt = 0U;
    vlSelf->tb_axi_lite__DOT__fail_cnt = 0U;
    vlSelf->tb_axi_lite__DOT__reset = 1U;
    co_await vlSelf->__VtrigSched_h677ae78a__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_axi_lite.clk)", 
                                                       "tb_axi_lite.v", 
                                                       179);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h677ae78a__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_axi_lite.clk)", 
                                                       "tb_axi_lite.v", 
                                                       179);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h677ae78a__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_axi_lite.clk)", 
                                                       "tb_axi_lite.v", 
                                                       179);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h677ae78a__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_axi_lite.clk)", 
                                                       "tb_axi_lite.v", 
                                                       179);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h677ae849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_axi_lite.clk)", 
                                                       "tb_axi_lite.v", 
                                                       181);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi_lite__DOT__reset = 0U;
    __Vtask_tb_axi_lite__DOT__axi_write__0__data = 0xa5a5a5a5U;
    __Vtask_tb_axi_lite__DOT__axi_write__0__addr = 4U;
    co_await vlSelf->__VtrigSched_h677ae849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_axi_lite.clk)", 
                                                       "tb_axi_lite.v", 
                                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi_lite__DOT__awaddr = __Vtask_tb_axi_lite__DOT__axi_write__0__addr;
    vlSelf->tb_axi_lite__DOT__awvalid = 1U;
    VL_WRITEF("[WRITE] awvalid=1, wvalid=0 -> Sending address first...\n");
    co_await vlSelf->__VtrigSched_h677ae78a__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_axi_lite.clk)", 
                                                       "tb_axi_lite.v", 
                                                       95);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((1U & (~ (IData)(vlSelf->tb_axi_lite__DOT__awready)))) {
        co_await vlSelf->__VtrigSched_h677ae78a__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_axi_lite.clk)", 
                                                           "tb_axi_lite.v", 
                                                           96);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    VL_WRITEF("[WRITE] awready=1 -> Handshake Done\n");
    co_await vlSelf->__VtrigSched_h677ae849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_axi_lite.clk)", 
                                                       "tb_axi_lite.v", 
                                                       100);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi_lite__DOT__awvalid = 0U;
    vlSelf->tb_axi_lite__DOT__wdata = __Vtask_tb_axi_lite__DOT__axi_write__0__data;
    vlSelf->tb_axi_lite__DOT__wstrb = 0xfU;
    vlSelf->tb_axi_lite__DOT__wvalid = 1U;
    co_await vlSelf->__VtrigSched_h677ae78a__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_axi_lite.clk)", 
                                                       "tb_axi_lite.v", 
                                                       107);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((1U & (~ (IData)(vlSelf->tb_axi_lite__DOT__wready)))) {
        co_await vlSelf->__VtrigSched_h677ae78a__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_axi_lite.clk)", 
                                                           "tb_axi_lite.v", 
                                                           108);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    VL_WRITEF("[WRITE] wready=1 -> Data Accepted\n");
    co_await vlSelf->__VtrigSched_h677ae849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_axi_lite.clk)", 
                                                       "tb_axi_lite.v", 
                                                       112);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi_lite__DOT__wvalid = 0U;
    vlSelf->tb_axi_lite__DOT__bready = 1U;
    co_await vlSelf->__VtrigSched_h677ae78a__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_axi_lite.clk)", 
                                                       "tb_axi_lite.v", 
                                                       116);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((1U & (~ (IData)(vlSelf->tb_axi_lite__DOT__bvalid)))) {
        co_await vlSelf->__VtrigSched_h677ae78a__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_axi_lite.clk)", 
                                                           "tb_axi_lite.v", 
                                                           117);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    VL_WRITEF("[WRITE] Response Received\n");
    co_await vlSelf->__VtrigSched_h677ae849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_axi_lite.clk)", 
                                                       "tb_axi_lite.v", 
                                                       121);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi_lite__DOT__bready = 0U;
    __Vtask_tb_axi_lite__DOT__axi_read__1__addr = 4U;
    co_await vlSelf->__VtrigSched_h677ae849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_axi_lite.clk)", 
                                                       "tb_axi_lite.v", 
                                                       132);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi_lite__DOT__araddr = __Vtask_tb_axi_lite__DOT__axi_read__1__addr;
    vlSelf->tb_axi_lite__DOT__arvalid = 1U;
    co_await vlSelf->__VtrigSched_h677ae78a__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_axi_lite.clk)", 
                                                       "tb_axi_lite.v", 
                                                       136);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((1U & (~ (IData)(vlSelf->tb_axi_lite__DOT__arready)))) {
        co_await vlSelf->__VtrigSched_h677ae78a__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_axi_lite.clk)", 
                                                           "tb_axi_lite.v", 
                                                           137);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VtrigSched_h677ae849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_axi_lite.clk)", 
                                                       "tb_axi_lite.v", 
                                                       139);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi_lite__DOT__arvalid = 0U;
    vlSelf->tb_axi_lite__DOT__rready = 1U;
    co_await vlSelf->__VtrigSched_h677ae78a__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_axi_lite.clk)", 
                                                       "tb_axi_lite.v", 
                                                       143);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((1U & (~ (IData)(vlSelf->tb_axi_lite__DOT__rvalid)))) {
        co_await vlSelf->__VtrigSched_h677ae78a__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_axi_lite.clk)", 
                                                           "tb_axi_lite.v", 
                                                           144);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    __Vtask_tb_axi_lite__DOT__axi_read__1__rd_data 
        = vlSelf->tb_axi_lite__DOT__rdata;
    co_await vlSelf->__VtrigSched_h677ae849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_axi_lite.clk)", 
                                                       "tb_axi_lite.v", 
                                                       148);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi_lite__DOT__rready = 0U;
    vlSelf->tb_axi_lite__DOT__captured_rdata = __Vtask_tb_axi_lite__DOT__axi_read__1__rd_data;
    if ((0xa5a5a5a5U == vlSelf->tb_axi_lite__DOT__captured_rdata)) {
        VL_WRITEF("PASS\n");
        vlSelf->tb_axi_lite__DOT__pass_cnt = ((IData)(1U) 
                                              + vlSelf->tb_axi_lite__DOT__pass_cnt);
    } else {
        VL_WRITEF("FAIL\n");
        vlSelf->tb_axi_lite__DOT__fail_cnt = ((IData)(1U) 
                                              + vlSelf->tb_axi_lite__DOT__fail_cnt);
    }
    VL_WRITEF("Passed=%0d Failed=%0d\n",32,vlSelf->tb_axi_lite__DOT__pass_cnt,
              32,vlSelf->tb_axi_lite__DOT__fail_cnt);
    co_await vlSelf->__VdlySched.delay(0x32ULL, nullptr, 
                                       "tb_axi_lite.v", 
                                       202);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("tb_axi_lite.v", 203, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_axi_lite___024root___eval_initial__TOP__1(Vtb_axi_lite___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi_lite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite___024root___eval_initial__TOP__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0x7a120ULL, 
                                       nullptr, "tb_axi_lite.v", 
                                       209);
    VL_WRITEF("Watchdog timeout\n");
    VL_FINISH_MT("tb_axi_lite.v", 211, "");
}

VL_INLINE_OPT VlCoroutine Vtb_axi_lite___024root___eval_initial__TOP__2(Vtb_axi_lite___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi_lite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite___024root___eval_initial__TOP__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "tb_axi_lite.v", 
                                           71);
        vlSelf->__Vdlyvval__tb_axi_lite__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelf->tb_axi_lite__DOT__clk)));
        vlSelf->__Vdlyvset__tb_axi_lite__DOT__clk__v0 = 1U;
    }
}

void Vtb_axi_lite___024root___eval_act(Vtb_axi_lite___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi_lite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtb_axi_lite___024root___nba_sequent__TOP__0(Vtb_axi_lite___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi_lite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__tb_axi_lite__DOT__u_slave__DOT__wstate;
    __Vdly__tb_axi_lite__DOT__u_slave__DOT__wstate = 0;
    CData/*0:0*/ __Vdly__tb_axi_lite__DOT__bvalid;
    __Vdly__tb_axi_lite__DOT__bvalid = 0;
    IData/*31:0*/ __Vdly__tb_axi_lite__DOT__u_slave__DOT__wr_addr_q;
    __Vdly__tb_axi_lite__DOT__u_slave__DOT__wr_addr_q = 0;
    CData/*0:0*/ __Vdlyvset__tb_axi_lite__DOT__u_slave__DOT__reg_file__v0;
    __Vdlyvset__tb_axi_lite__DOT__u_slave__DOT__reg_file__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__tb_axi_lite__DOT__u_slave__DOT__reg_file__v4;
    __Vdlyvdim0__tb_axi_lite__DOT__u_slave__DOT__reg_file__v4 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_axi_lite__DOT__u_slave__DOT__reg_file__v4;
    __Vdlyvlsb__tb_axi_lite__DOT__u_slave__DOT__reg_file__v4 = 0;
    CData/*7:0*/ __Vdlyvval__tb_axi_lite__DOT__u_slave__DOT__reg_file__v4;
    __Vdlyvval__tb_axi_lite__DOT__u_slave__DOT__reg_file__v4 = 0;
    CData/*0:0*/ __Vdlyvset__tb_axi_lite__DOT__u_slave__DOT__reg_file__v4;
    __Vdlyvset__tb_axi_lite__DOT__u_slave__DOT__reg_file__v4 = 0;
    CData/*1:0*/ __Vdlyvdim0__tb_axi_lite__DOT__u_slave__DOT__reg_file__v5;
    __Vdlyvdim0__tb_axi_lite__DOT__u_slave__DOT__reg_file__v5 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_axi_lite__DOT__u_slave__DOT__reg_file__v5;
    __Vdlyvlsb__tb_axi_lite__DOT__u_slave__DOT__reg_file__v5 = 0;
    CData/*7:0*/ __Vdlyvval__tb_axi_lite__DOT__u_slave__DOT__reg_file__v5;
    __Vdlyvval__tb_axi_lite__DOT__u_slave__DOT__reg_file__v5 = 0;
    CData/*0:0*/ __Vdlyvset__tb_axi_lite__DOT__u_slave__DOT__reg_file__v5;
    __Vdlyvset__tb_axi_lite__DOT__u_slave__DOT__reg_file__v5 = 0;
    CData/*1:0*/ __Vdlyvdim0__tb_axi_lite__DOT__u_slave__DOT__reg_file__v6;
    __Vdlyvdim0__tb_axi_lite__DOT__u_slave__DOT__reg_file__v6 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_axi_lite__DOT__u_slave__DOT__reg_file__v6;
    __Vdlyvlsb__tb_axi_lite__DOT__u_slave__DOT__reg_file__v6 = 0;
    CData/*7:0*/ __Vdlyvval__tb_axi_lite__DOT__u_slave__DOT__reg_file__v6;
    __Vdlyvval__tb_axi_lite__DOT__u_slave__DOT__reg_file__v6 = 0;
    CData/*0:0*/ __Vdlyvset__tb_axi_lite__DOT__u_slave__DOT__reg_file__v6;
    __Vdlyvset__tb_axi_lite__DOT__u_slave__DOT__reg_file__v6 = 0;
    CData/*1:0*/ __Vdlyvdim0__tb_axi_lite__DOT__u_slave__DOT__reg_file__v7;
    __Vdlyvdim0__tb_axi_lite__DOT__u_slave__DOT__reg_file__v7 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_axi_lite__DOT__u_slave__DOT__reg_file__v7;
    __Vdlyvlsb__tb_axi_lite__DOT__u_slave__DOT__reg_file__v7 = 0;
    CData/*7:0*/ __Vdlyvval__tb_axi_lite__DOT__u_slave__DOT__reg_file__v7;
    __Vdlyvval__tb_axi_lite__DOT__u_slave__DOT__reg_file__v7 = 0;
    CData/*0:0*/ __Vdlyvset__tb_axi_lite__DOT__u_slave__DOT__reg_file__v7;
    __Vdlyvset__tb_axi_lite__DOT__u_slave__DOT__reg_file__v7 = 0;
    CData/*1:0*/ __Vdly__tb_axi_lite__DOT__u_slave__DOT__rstate;
    __Vdly__tb_axi_lite__DOT__u_slave__DOT__rstate = 0;
    CData/*0:0*/ __Vdly__tb_axi_lite__DOT__rvalid;
    __Vdly__tb_axi_lite__DOT__rvalid = 0;
    // Body
    __Vdly__tb_axi_lite__DOT__rvalid = vlSelf->tb_axi_lite__DOT__rvalid;
    __Vdly__tb_axi_lite__DOT__u_slave__DOT__rstate 
        = vlSelf->tb_axi_lite__DOT__u_slave__DOT__rstate;
    __Vdly__tb_axi_lite__DOT__u_slave__DOT__wr_addr_q 
        = vlSelf->tb_axi_lite__DOT__u_slave__DOT__wr_addr_q;
    __Vdly__tb_axi_lite__DOT__bvalid = vlSelf->tb_axi_lite__DOT__bvalid;
    __Vdly__tb_axi_lite__DOT__u_slave__DOT__wstate 
        = vlSelf->tb_axi_lite__DOT__u_slave__DOT__wstate;
    __Vdlyvset__tb_axi_lite__DOT__u_slave__DOT__reg_file__v0 = 0U;
    __Vdlyvset__tb_axi_lite__DOT__u_slave__DOT__reg_file__v4 = 0U;
    __Vdlyvset__tb_axi_lite__DOT__u_slave__DOT__reg_file__v5 = 0U;
    __Vdlyvset__tb_axi_lite__DOT__u_slave__DOT__reg_file__v6 = 0U;
    __Vdlyvset__tb_axi_lite__DOT__u_slave__DOT__reg_file__v7 = 0U;
    if (vlSelf->tb_axi_lite__DOT__reset) {
        vlSelf->tb_axi_lite__DOT__u_slave__DOT__k = 4U;
        __Vdly__tb_axi_lite__DOT__u_slave__DOT__rstate = 0U;
        vlSelf->tb_axi_lite__DOT__arready = 0U;
        __Vdly__tb_axi_lite__DOT__rvalid = 0U;
        vlSelf->tb_axi_lite__DOT__rdata = 0U;
        vlSelf->tb_axi_lite__DOT__rresp = 0U;
        vlSelf->tb_axi_lite__DOT__u_slave__DOT__rd_addr_q = 0U;
        __Vdly__tb_axi_lite__DOT__u_slave__DOT__wstate = 0U;
        vlSelf->tb_axi_lite__DOT__awready = 0U;
        vlSelf->tb_axi_lite__DOT__wready = 0U;
        __Vdly__tb_axi_lite__DOT__bvalid = 0U;
        vlSelf->tb_axi_lite__DOT__bresp = 0U;
        __Vdly__tb_axi_lite__DOT__u_slave__DOT__wr_addr_q = 0U;
        __Vdlyvset__tb_axi_lite__DOT__u_slave__DOT__reg_file__v0 = 1U;
    } else {
        vlSelf->tb_axi_lite__DOT__arready = 0U;
        if ((0U == (IData)(vlSelf->tb_axi_lite__DOT__u_slave__DOT__rstate))) {
            if (vlSelf->tb_axi_lite__DOT__arvalid) {
                vlSelf->tb_axi_lite__DOT__arready = 1U;
                vlSelf->tb_axi_lite__DOT__u_slave__DOT__rd_addr_q 
                    = vlSelf->tb_axi_lite__DOT__araddr;
                vlSelf->tb_axi_lite__DOT__rdata = vlSelf->tb_axi_lite__DOT__u_slave__DOT__reg_file
                    [(3U & (vlSelf->tb_axi_lite__DOT__araddr 
                            >> 2U))];
                vlSelf->tb_axi_lite__DOT__rresp = 0U;
                __Vdly__tb_axi_lite__DOT__rvalid = 1U;
                __Vdly__tb_axi_lite__DOT__u_slave__DOT__rstate = 1U;
            }
        } else if ((1U == (IData)(vlSelf->tb_axi_lite__DOT__u_slave__DOT__rstate))) {
            if (((IData)(vlSelf->tb_axi_lite__DOT__rready) 
                 & (IData)(vlSelf->tb_axi_lite__DOT__rvalid))) {
                __Vdly__tb_axi_lite__DOT__rvalid = 0U;
                __Vdly__tb_axi_lite__DOT__u_slave__DOT__rstate = 0U;
            }
        } else {
            __Vdly__tb_axi_lite__DOT__u_slave__DOT__rstate = 0U;
        }
        vlSelf->tb_axi_lite__DOT__awready = 0U;
        vlSelf->tb_axi_lite__DOT__wready = 0U;
        if ((0U == (IData)(vlSelf->tb_axi_lite__DOT__u_slave__DOT__wstate))) {
            if (vlSelf->tb_axi_lite__DOT__awvalid) {
                vlSelf->tb_axi_lite__DOT__awready = 1U;
                __Vdly__tb_axi_lite__DOT__u_slave__DOT__wr_addr_q 
                    = vlSelf->tb_axi_lite__DOT__awaddr;
                __Vdly__tb_axi_lite__DOT__u_slave__DOT__wstate = 1U;
            }
        } else if ((1U == (IData)(vlSelf->tb_axi_lite__DOT__u_slave__DOT__wstate))) {
            if (vlSelf->tb_axi_lite__DOT__wvalid) {
                vlSelf->tb_axi_lite__DOT__wready = 1U;
                if ((1U & (IData)(vlSelf->tb_axi_lite__DOT__wstrb))) {
                    __Vdlyvval__tb_axi_lite__DOT__u_slave__DOT__reg_file__v4 
                        = (0xffU & vlSelf->tb_axi_lite__DOT__wdata);
                    __Vdlyvset__tb_axi_lite__DOT__u_slave__DOT__reg_file__v4 = 1U;
                    __Vdlyvlsb__tb_axi_lite__DOT__u_slave__DOT__reg_file__v4 = 0U;
                    __Vdlyvdim0__tb_axi_lite__DOT__u_slave__DOT__reg_file__v4 
                        = (3U & (vlSelf->tb_axi_lite__DOT__u_slave__DOT__wr_addr_q 
                                 >> 2U));
                }
                __Vdly__tb_axi_lite__DOT__bvalid = 1U;
                vlSelf->tb_axi_lite__DOT__bresp = 0U;
                __Vdly__tb_axi_lite__DOT__u_slave__DOT__wstate = 2U;
                if ((2U & (IData)(vlSelf->tb_axi_lite__DOT__wstrb))) {
                    __Vdlyvval__tb_axi_lite__DOT__u_slave__DOT__reg_file__v5 
                        = (0xffU & (vlSelf->tb_axi_lite__DOT__wdata 
                                    >> 8U));
                    __Vdlyvset__tb_axi_lite__DOT__u_slave__DOT__reg_file__v5 = 1U;
                    __Vdlyvlsb__tb_axi_lite__DOT__u_slave__DOT__reg_file__v5 = 8U;
                    __Vdlyvdim0__tb_axi_lite__DOT__u_slave__DOT__reg_file__v5 
                        = (3U & (vlSelf->tb_axi_lite__DOT__u_slave__DOT__wr_addr_q 
                                 >> 2U));
                }
                if ((4U & (IData)(vlSelf->tb_axi_lite__DOT__wstrb))) {
                    __Vdlyvval__tb_axi_lite__DOT__u_slave__DOT__reg_file__v6 
                        = (0xffU & (vlSelf->tb_axi_lite__DOT__wdata 
                                    >> 0x10U));
                    __Vdlyvset__tb_axi_lite__DOT__u_slave__DOT__reg_file__v6 = 1U;
                    __Vdlyvlsb__tb_axi_lite__DOT__u_slave__DOT__reg_file__v6 = 0x10U;
                    __Vdlyvdim0__tb_axi_lite__DOT__u_slave__DOT__reg_file__v6 
                        = (3U & (vlSelf->tb_axi_lite__DOT__u_slave__DOT__wr_addr_q 
                                 >> 2U));
                }
                if ((8U & (IData)(vlSelf->tb_axi_lite__DOT__wstrb))) {
                    __Vdlyvval__tb_axi_lite__DOT__u_slave__DOT__reg_file__v7 
                        = (vlSelf->tb_axi_lite__DOT__wdata 
                           >> 0x18U);
                    __Vdlyvset__tb_axi_lite__DOT__u_slave__DOT__reg_file__v7 = 1U;
                    __Vdlyvlsb__tb_axi_lite__DOT__u_slave__DOT__reg_file__v7 = 0x18U;
                    __Vdlyvdim0__tb_axi_lite__DOT__u_slave__DOT__reg_file__v7 
                        = (3U & (vlSelf->tb_axi_lite__DOT__u_slave__DOT__wr_addr_q 
                                 >> 2U));
                }
            }
        } else if ((2U == (IData)(vlSelf->tb_axi_lite__DOT__u_slave__DOT__wstate))) {
            if (((IData)(vlSelf->tb_axi_lite__DOT__bready) 
                 & (IData)(vlSelf->tb_axi_lite__DOT__bvalid))) {
                __Vdly__tb_axi_lite__DOT__bvalid = 0U;
                __Vdly__tb_axi_lite__DOT__u_slave__DOT__wstate = 0U;
            }
        } else {
            __Vdly__tb_axi_lite__DOT__u_slave__DOT__wstate = 0U;
        }
    }
    vlSelf->tb_axi_lite__DOT__u_slave__DOT__rstate 
        = __Vdly__tb_axi_lite__DOT__u_slave__DOT__rstate;
    vlSelf->tb_axi_lite__DOT__rvalid = __Vdly__tb_axi_lite__DOT__rvalid;
    vlSelf->tb_axi_lite__DOT__u_slave__DOT__wstate 
        = __Vdly__tb_axi_lite__DOT__u_slave__DOT__wstate;
    vlSelf->tb_axi_lite__DOT__bvalid = __Vdly__tb_axi_lite__DOT__bvalid;
    vlSelf->tb_axi_lite__DOT__u_slave__DOT__wr_addr_q 
        = __Vdly__tb_axi_lite__DOT__u_slave__DOT__wr_addr_q;
    if (__Vdlyvset__tb_axi_lite__DOT__u_slave__DOT__reg_file__v0) {
        vlSelf->tb_axi_lite__DOT__u_slave__DOT__reg_file[0U] = 0U;
        vlSelf->tb_axi_lite__DOT__u_slave__DOT__reg_file[1U] = 0U;
        vlSelf->tb_axi_lite__DOT__u_slave__DOT__reg_file[2U] = 0U;
        vlSelf->tb_axi_lite__DOT__u_slave__DOT__reg_file[3U] = 0U;
    }
    if (__Vdlyvset__tb_axi_lite__DOT__u_slave__DOT__reg_file__v4) {
        vlSelf->tb_axi_lite__DOT__u_slave__DOT__reg_file[__Vdlyvdim0__tb_axi_lite__DOT__u_slave__DOT__reg_file__v4] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_axi_lite__DOT__u_slave__DOT__reg_file__v4))) 
                & vlSelf->tb_axi_lite__DOT__u_slave__DOT__reg_file
                [__Vdlyvdim0__tb_axi_lite__DOT__u_slave__DOT__reg_file__v4]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_axi_lite__DOT__u_slave__DOT__reg_file__v4) 
                                   << (IData)(__Vdlyvlsb__tb_axi_lite__DOT__u_slave__DOT__reg_file__v4))));
    }
    if (__Vdlyvset__tb_axi_lite__DOT__u_slave__DOT__reg_file__v5) {
        vlSelf->tb_axi_lite__DOT__u_slave__DOT__reg_file[__Vdlyvdim0__tb_axi_lite__DOT__u_slave__DOT__reg_file__v5] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_axi_lite__DOT__u_slave__DOT__reg_file__v5))) 
                & vlSelf->tb_axi_lite__DOT__u_slave__DOT__reg_file
                [__Vdlyvdim0__tb_axi_lite__DOT__u_slave__DOT__reg_file__v5]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_axi_lite__DOT__u_slave__DOT__reg_file__v5) 
                                   << (IData)(__Vdlyvlsb__tb_axi_lite__DOT__u_slave__DOT__reg_file__v5))));
    }
    if (__Vdlyvset__tb_axi_lite__DOT__u_slave__DOT__reg_file__v6) {
        vlSelf->tb_axi_lite__DOT__u_slave__DOT__reg_file[__Vdlyvdim0__tb_axi_lite__DOT__u_slave__DOT__reg_file__v6] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_axi_lite__DOT__u_slave__DOT__reg_file__v6))) 
                & vlSelf->tb_axi_lite__DOT__u_slave__DOT__reg_file
                [__Vdlyvdim0__tb_axi_lite__DOT__u_slave__DOT__reg_file__v6]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_axi_lite__DOT__u_slave__DOT__reg_file__v6) 
                                   << (IData)(__Vdlyvlsb__tb_axi_lite__DOT__u_slave__DOT__reg_file__v6))));
    }
    if (__Vdlyvset__tb_axi_lite__DOT__u_slave__DOT__reg_file__v7) {
        vlSelf->tb_axi_lite__DOT__u_slave__DOT__reg_file[__Vdlyvdim0__tb_axi_lite__DOT__u_slave__DOT__reg_file__v7] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_axi_lite__DOT__u_slave__DOT__reg_file__v7))) 
                & vlSelf->tb_axi_lite__DOT__u_slave__DOT__reg_file
                [__Vdlyvdim0__tb_axi_lite__DOT__u_slave__DOT__reg_file__v7]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_axi_lite__DOT__u_slave__DOT__reg_file__v7) 
                                   << (IData)(__Vdlyvlsb__tb_axi_lite__DOT__u_slave__DOT__reg_file__v7))));
    }
}

VL_INLINE_OPT void Vtb_axi_lite___024root___nba_sequent__TOP__1(Vtb_axi_lite___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi_lite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->__Vdlyvset__tb_axi_lite__DOT__clk__v0) {
        vlSelf->tb_axi_lite__DOT__clk = vlSelf->__Vdlyvval__tb_axi_lite__DOT__clk__v0;
        vlSelf->__Vdlyvset__tb_axi_lite__DOT__clk__v0 = 0U;
    }
}

void Vtb_axi_lite___024root___eval_nba(Vtb_axi_lite___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi_lite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_axi_lite___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_axi_lite___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vtb_axi_lite___024root___eval_triggers__act(Vtb_axi_lite___024root* vlSelf);
void Vtb_axi_lite___024root___timing_commit(Vtb_axi_lite___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axi_lite___024root___dump_triggers__act(Vtb_axi_lite___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_axi_lite___024root___timing_resume(Vtb_axi_lite___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axi_lite___024root___dump_triggers__nba(Vtb_axi_lite___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_axi_lite___024root___eval(Vtb_axi_lite___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi_lite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite___024root___eval\n"); );
    // Init
    VlTriggerVec<4> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtb_axi_lite___024root___eval_triggers__act(vlSelf);
            Vtb_axi_lite___024root___timing_commit(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtb_axi_lite___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("tb_axi_lite.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vtb_axi_lite___024root___timing_resume(vlSelf);
                Vtb_axi_lite___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtb_axi_lite___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("tb_axi_lite.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtb_axi_lite___024root___eval_nba(vlSelf);
        }
    }
}

void Vtb_axi_lite___024root___timing_commit(Vtb_axi_lite___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi_lite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h677ae78a__0.commit("@(posedge tb_axi_lite.clk)");
    }
    if ((! (8ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h677ae849__0.commit("@(negedge tb_axi_lite.clk)");
    }
}

void Vtb_axi_lite___024root___timing_resume(Vtb_axi_lite___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi_lite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h677ae78a__0.resume("@(posedge tb_axi_lite.clk)");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h677ae849__0.resume("@(negedge tb_axi_lite.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vtb_axi_lite___024root___eval_debug_assertions(Vtb_axi_lite___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi_lite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
