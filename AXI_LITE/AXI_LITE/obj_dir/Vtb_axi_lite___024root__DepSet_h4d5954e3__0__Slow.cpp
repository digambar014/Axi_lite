// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_axi_lite.h for the primary calling header

#include "verilated.h"

#include "Vtb_axi_lite__Syms.h"
#include "Vtb_axi_lite___024root.h"

VL_ATTR_COLD void Vtb_axi_lite___024root___eval_static(Vtb_axi_lite___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi_lite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtb_axi_lite___024root___eval_final(Vtb_axi_lite___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi_lite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtb_axi_lite___024root___eval_settle(Vtb_axi_lite___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi_lite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axi_lite___024root___dump_triggers__act(Vtb_axi_lite___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi_lite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_axi_lite.clk or posedge tb_axi_lite.reset)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge tb_axi_lite.clk)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge tb_axi_lite.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axi_lite___024root___dump_triggers__nba(Vtb_axi_lite___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi_lite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_axi_lite.clk or posedge tb_axi_lite.reset)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge tb_axi_lite.clk)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge tb_axi_lite.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_axi_lite___024root___ctor_var_reset(Vtb_axi_lite___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi_lite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_axi_lite__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_axi_lite__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->tb_axi_lite__DOT__awaddr = VL_RAND_RESET_I(32);
    vlSelf->tb_axi_lite__DOT__awvalid = VL_RAND_RESET_I(1);
    vlSelf->tb_axi_lite__DOT__awready = VL_RAND_RESET_I(1);
    vlSelf->tb_axi_lite__DOT__wdata = VL_RAND_RESET_I(32);
    vlSelf->tb_axi_lite__DOT__wstrb = VL_RAND_RESET_I(4);
    vlSelf->tb_axi_lite__DOT__wvalid = VL_RAND_RESET_I(1);
    vlSelf->tb_axi_lite__DOT__wready = VL_RAND_RESET_I(1);
    vlSelf->tb_axi_lite__DOT__bresp = VL_RAND_RESET_I(2);
    vlSelf->tb_axi_lite__DOT__bvalid = VL_RAND_RESET_I(1);
    vlSelf->tb_axi_lite__DOT__bready = VL_RAND_RESET_I(1);
    vlSelf->tb_axi_lite__DOT__araddr = VL_RAND_RESET_I(32);
    vlSelf->tb_axi_lite__DOT__arvalid = VL_RAND_RESET_I(1);
    vlSelf->tb_axi_lite__DOT__arready = VL_RAND_RESET_I(1);
    vlSelf->tb_axi_lite__DOT__rdata = VL_RAND_RESET_I(32);
    vlSelf->tb_axi_lite__DOT__rresp = VL_RAND_RESET_I(2);
    vlSelf->tb_axi_lite__DOT__rvalid = VL_RAND_RESET_I(1);
    vlSelf->tb_axi_lite__DOT__rready = VL_RAND_RESET_I(1);
    vlSelf->tb_axi_lite__DOT__captured_rdata = VL_RAND_RESET_I(32);
    vlSelf->tb_axi_lite__DOT__pass_cnt = VL_RAND_RESET_I(32);
    vlSelf->tb_axi_lite__DOT__fail_cnt = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_axi_lite__DOT__u_slave__DOT__reg_file[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_axi_lite__DOT__u_slave__DOT__k = VL_RAND_RESET_I(32);
    vlSelf->tb_axi_lite__DOT__u_slave__DOT__wr_addr_q = VL_RAND_RESET_I(32);
    vlSelf->tb_axi_lite__DOT__u_slave__DOT__rd_addr_q = VL_RAND_RESET_I(32);
    vlSelf->tb_axi_lite__DOT__u_slave__DOT__wstate = VL_RAND_RESET_I(2);
    vlSelf->tb_axi_lite__DOT__u_slave__DOT__rstate = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__tb_axi_lite__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__tb_axi_lite__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_axi_lite__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_axi_lite__DOT__reset__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
