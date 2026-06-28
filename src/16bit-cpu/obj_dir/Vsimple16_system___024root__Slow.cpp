// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimple16_system.h for the primary calling header

#include "Vsimple16_system__pch.h"
#include "Vsimple16_system__Syms.h"
#include "Vsimple16_system___024root.h"

void Vsimple16_system___024root___ctor_var_reset(Vsimple16_system___024root* vlSelf);

Vsimple16_system___024root::Vsimple16_system___024root(Vsimple16_system__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsimple16_system___024root___ctor_var_reset(this);
}

void Vsimple16_system___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vsimple16_system___024root::~Vsimple16_system___024root() {
}
