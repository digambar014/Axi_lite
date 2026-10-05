// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_axi_lite.h for the primary calling header

#include "verilated.h"

#include "Vtb_axi_lite__Syms.h"
#include "Vtb_axi_lite__Syms.h"
#include "Vtb_axi_lite___024root.h"

VL_ATTR_COLD void Vtb_axi_lite___024root___eval_initial__TOP(Vtb_axi_lite___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi_lite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->tb_axi_lite__DOT__clk = 0U;
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.vcd"});
    vlSymsp->_traceDumpOpen();
}
