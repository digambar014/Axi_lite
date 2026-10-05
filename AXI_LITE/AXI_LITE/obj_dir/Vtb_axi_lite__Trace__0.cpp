// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_axi_lite__Syms.h"


void Vtb_axi_lite___024root__trace_chg_sub_0(Vtb_axi_lite___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_axi_lite___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite___024root__trace_chg_top_0\n"); );
    // Init
    Vtb_axi_lite___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_axi_lite___024root*>(voidSelf);
    Vtb_axi_lite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_axi_lite___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_axi_lite___024root__trace_chg_sub_0(Vtb_axi_lite___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi_lite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->tb_axi_lite__DOT__reset));
        bufp->chgIData(oldp+1,(vlSelf->tb_axi_lite__DOT__awaddr),32);
        bufp->chgBit(oldp+2,(vlSelf->tb_axi_lite__DOT__awvalid));
        bufp->chgIData(oldp+3,(vlSelf->tb_axi_lite__DOT__wdata),32);
        bufp->chgCData(oldp+4,(vlSelf->tb_axi_lite__DOT__wstrb),4);
        bufp->chgBit(oldp+5,(vlSelf->tb_axi_lite__DOT__wvalid));
        bufp->chgBit(oldp+6,(vlSelf->tb_axi_lite__DOT__bready));
        bufp->chgIData(oldp+7,(vlSelf->tb_axi_lite__DOT__araddr),32);
        bufp->chgBit(oldp+8,(vlSelf->tb_axi_lite__DOT__arvalid));
        bufp->chgBit(oldp+9,(vlSelf->tb_axi_lite__DOT__rready));
        bufp->chgIData(oldp+10,(vlSelf->tb_axi_lite__DOT__captured_rdata),32);
        bufp->chgIData(oldp+11,(vlSelf->tb_axi_lite__DOT__pass_cnt),32);
        bufp->chgIData(oldp+12,(vlSelf->tb_axi_lite__DOT__fail_cnt),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+13,(vlSelf->tb_axi_lite__DOT__awready));
        bufp->chgBit(oldp+14,(vlSelf->tb_axi_lite__DOT__wready));
        bufp->chgCData(oldp+15,(vlSelf->tb_axi_lite__DOT__bresp),2);
        bufp->chgBit(oldp+16,(vlSelf->tb_axi_lite__DOT__bvalid));
        bufp->chgBit(oldp+17,(vlSelf->tb_axi_lite__DOT__arready));
        bufp->chgIData(oldp+18,(vlSelf->tb_axi_lite__DOT__rdata),32);
        bufp->chgCData(oldp+19,(vlSelf->tb_axi_lite__DOT__rresp),2);
        bufp->chgBit(oldp+20,(vlSelf->tb_axi_lite__DOT__rvalid));
        bufp->chgIData(oldp+21,(vlSelf->tb_axi_lite__DOT__u_slave__DOT__reg_file[0]),32);
        bufp->chgIData(oldp+22,(vlSelf->tb_axi_lite__DOT__u_slave__DOT__reg_file[1]),32);
        bufp->chgIData(oldp+23,(vlSelf->tb_axi_lite__DOT__u_slave__DOT__reg_file[2]),32);
        bufp->chgIData(oldp+24,(vlSelf->tb_axi_lite__DOT__u_slave__DOT__reg_file[3]),32);
        bufp->chgIData(oldp+25,(vlSelf->tb_axi_lite__DOT__u_slave__DOT__k),32);
        bufp->chgIData(oldp+26,(vlSelf->tb_axi_lite__DOT__u_slave__DOT__wr_addr_q),32);
        bufp->chgIData(oldp+27,(vlSelf->tb_axi_lite__DOT__u_slave__DOT__rd_addr_q),32);
        bufp->chgCData(oldp+28,(vlSelf->tb_axi_lite__DOT__u_slave__DOT__wstate),2);
        bufp->chgCData(oldp+29,(vlSelf->tb_axi_lite__DOT__u_slave__DOT__rstate),2);
    }
    bufp->chgBit(oldp+30,(vlSelf->tb_axi_lite__DOT__clk));
}

void Vtb_axi_lite___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite___024root__trace_cleanup\n"); );
    // Init
    Vtb_axi_lite___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_axi_lite___024root*>(voidSelf);
    Vtb_axi_lite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
