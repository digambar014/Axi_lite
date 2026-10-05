// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_axi_lite.h for the primary calling header

#include "verilated.h"

#include "Vtb_axi_lite__Syms.h"
#include "Vtb_axi_lite__Syms.h"
#include "Vtb_axi_lite___024root.h"

void Vtb_axi_lite___024root___ctor_var_reset(Vtb_axi_lite___024root* vlSelf);

Vtb_axi_lite___024root::Vtb_axi_lite___024root(Vtb_axi_lite__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_axi_lite___024root___ctor_var_reset(this);
}

void Vtb_axi_lite___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_axi_lite___024root::~Vtb_axi_lite___024root() {
}
