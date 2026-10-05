// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_axi_lite__Syms.h"


VL_ATTR_COLD void Vtb_axi_lite___024root__trace_init_sub__TOP__0(Vtb_axi_lite___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi_lite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("tb_axi_lite ");
    tracep->declBus(c+32,"CLK_PERIOD", false,-1, 31,0);
    tracep->declBus(c+33,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+33,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+31,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBus(c+2,"awaddr", false,-1, 31,0);
    tracep->declBit(c+3,"awvalid", false,-1);
    tracep->declBit(c+14,"awready", false,-1);
    tracep->declBus(c+4,"wdata", false,-1, 31,0);
    tracep->declBus(c+5,"wstrb", false,-1, 3,0);
    tracep->declBit(c+6,"wvalid", false,-1);
    tracep->declBit(c+15,"wready", false,-1);
    tracep->declBus(c+16,"bresp", false,-1, 1,0);
    tracep->declBit(c+17,"bvalid", false,-1);
    tracep->declBit(c+7,"bready", false,-1);
    tracep->declBus(c+8,"araddr", false,-1, 31,0);
    tracep->declBit(c+9,"arvalid", false,-1);
    tracep->declBit(c+18,"arready", false,-1);
    tracep->declBus(c+19,"rdata", false,-1, 31,0);
    tracep->declBus(c+20,"rresp", false,-1, 1,0);
    tracep->declBit(c+21,"rvalid", false,-1);
    tracep->declBit(c+10,"rready", false,-1);
    tracep->declBus(c+11,"captured_rdata", false,-1, 31,0);
    tracep->declBus(c+12,"pass_cnt", false,-1, 31,0);
    tracep->declBus(c+13,"fail_cnt", false,-1, 31,0);
    tracep->pushNamePrefix("u_slave ");
    tracep->declBus(c+33,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+33,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+34,"NUM_REGS", false,-1, 31,0);
    tracep->declBit(c+31,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBus(c+2,"s_awaddr", false,-1, 31,0);
    tracep->declBit(c+3,"s_awvalid", false,-1);
    tracep->declBit(c+14,"s_awready", false,-1);
    tracep->declBus(c+4,"s_wdata", false,-1, 31,0);
    tracep->declBus(c+5,"s_wstrb", false,-1, 3,0);
    tracep->declBit(c+6,"s_wvalid", false,-1);
    tracep->declBit(c+15,"s_wready", false,-1);
    tracep->declBus(c+16,"s_bresp", false,-1, 1,0);
    tracep->declBit(c+17,"s_bvalid", false,-1);
    tracep->declBit(c+7,"s_bready", false,-1);
    tracep->declBus(c+8,"s_araddr", false,-1, 31,0);
    tracep->declBit(c+9,"s_arvalid", false,-1);
    tracep->declBit(c+18,"s_arready", false,-1);
    tracep->declBus(c+19,"s_rdata", false,-1, 31,0);
    tracep->declBus(c+20,"s_rresp", false,-1, 1,0);
    tracep->declBit(c+21,"s_rvalid", false,-1);
    tracep->declBit(c+10,"s_rready", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+22+i*1,"reg_file", true,(i+0), 31,0);
    }
    tracep->declBus(c+26,"k", false,-1, 31,0);
    tracep->declBus(c+27,"wr_addr_q", false,-1, 31,0);
    tracep->declBus(c+28,"rd_addr_q", false,-1, 31,0);
    tracep->declBus(c+35,"WR_IDLE", false,-1, 1,0);
    tracep->declBus(c+36,"WR_DATA", false,-1, 1,0);
    tracep->declBus(c+37,"WR_RESP", false,-1, 1,0);
    tracep->declBus(c+29,"wstate", false,-1, 1,0);
    tracep->declBus(c+35,"RD_IDLE", false,-1, 1,0);
    tracep->declBus(c+36,"RD_DATA", false,-1, 1,0);
    tracep->declBus(c+30,"rstate", false,-1, 1,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtb_axi_lite___024root__trace_init_top(Vtb_axi_lite___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi_lite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite___024root__trace_init_top\n"); );
    // Body
    Vtb_axi_lite___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_axi_lite___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_axi_lite___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_axi_lite___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_axi_lite___024root__trace_register(Vtb_axi_lite___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi_lite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtb_axi_lite___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtb_axi_lite___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtb_axi_lite___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_axi_lite___024root__trace_full_sub_0(Vtb_axi_lite___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_axi_lite___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite___024root__trace_full_top_0\n"); );
    // Init
    Vtb_axi_lite___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_axi_lite___024root*>(voidSelf);
    Vtb_axi_lite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_axi_lite___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_axi_lite___024root__trace_full_sub_0(Vtb_axi_lite___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi_lite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->tb_axi_lite__DOT__reset));
    bufp->fullIData(oldp+2,(vlSelf->tb_axi_lite__DOT__awaddr),32);
    bufp->fullBit(oldp+3,(vlSelf->tb_axi_lite__DOT__awvalid));
    bufp->fullIData(oldp+4,(vlSelf->tb_axi_lite__DOT__wdata),32);
    bufp->fullCData(oldp+5,(vlSelf->tb_axi_lite__DOT__wstrb),4);
    bufp->fullBit(oldp+6,(vlSelf->tb_axi_lite__DOT__wvalid));
    bufp->fullBit(oldp+7,(vlSelf->tb_axi_lite__DOT__bready));
    bufp->fullIData(oldp+8,(vlSelf->tb_axi_lite__DOT__araddr),32);
    bufp->fullBit(oldp+9,(vlSelf->tb_axi_lite__DOT__arvalid));
    bufp->fullBit(oldp+10,(vlSelf->tb_axi_lite__DOT__rready));
    bufp->fullIData(oldp+11,(vlSelf->tb_axi_lite__DOT__captured_rdata),32);
    bufp->fullIData(oldp+12,(vlSelf->tb_axi_lite__DOT__pass_cnt),32);
    bufp->fullIData(oldp+13,(vlSelf->tb_axi_lite__DOT__fail_cnt),32);
    bufp->fullBit(oldp+14,(vlSelf->tb_axi_lite__DOT__awready));
    bufp->fullBit(oldp+15,(vlSelf->tb_axi_lite__DOT__wready));
    bufp->fullCData(oldp+16,(vlSelf->tb_axi_lite__DOT__bresp),2);
    bufp->fullBit(oldp+17,(vlSelf->tb_axi_lite__DOT__bvalid));
    bufp->fullBit(oldp+18,(vlSelf->tb_axi_lite__DOT__arready));
    bufp->fullIData(oldp+19,(vlSelf->tb_axi_lite__DOT__rdata),32);
    bufp->fullCData(oldp+20,(vlSelf->tb_axi_lite__DOT__rresp),2);
    bufp->fullBit(oldp+21,(vlSelf->tb_axi_lite__DOT__rvalid));
    bufp->fullIData(oldp+22,(vlSelf->tb_axi_lite__DOT__u_slave__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+23,(vlSelf->tb_axi_lite__DOT__u_slave__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+24,(vlSelf->tb_axi_lite__DOT__u_slave__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+25,(vlSelf->tb_axi_lite__DOT__u_slave__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+26,(vlSelf->tb_axi_lite__DOT__u_slave__DOT__k),32);
    bufp->fullIData(oldp+27,(vlSelf->tb_axi_lite__DOT__u_slave__DOT__wr_addr_q),32);
    bufp->fullIData(oldp+28,(vlSelf->tb_axi_lite__DOT__u_slave__DOT__rd_addr_q),32);
    bufp->fullCData(oldp+29,(vlSelf->tb_axi_lite__DOT__u_slave__DOT__wstate),2);
    bufp->fullCData(oldp+30,(vlSelf->tb_axi_lite__DOT__u_slave__DOT__rstate),2);
    bufp->fullBit(oldp+31,(vlSelf->tb_axi_lite__DOT__clk));
    bufp->fullIData(oldp+32,(0xaU),32);
    bufp->fullIData(oldp+33,(0x20U),32);
    bufp->fullIData(oldp+34,(4U),32);
    bufp->fullCData(oldp+35,(0U),2);
    bufp->fullCData(oldp+36,(1U),2);
    bufp->fullCData(oldp+37,(2U),2);
}
