// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vsimple16_system__pch.h"
#include "Vsimple16_system.h"
#include "Vsimple16_system___024root.h"

// FUNCTIONS
Vsimple16_system__Syms::~Vsimple16_system__Syms()
{
}

Vsimple16_system__Syms::Vsimple16_system__Syms(VerilatedContext* contextp, const char* namep, Vsimple16_system* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
