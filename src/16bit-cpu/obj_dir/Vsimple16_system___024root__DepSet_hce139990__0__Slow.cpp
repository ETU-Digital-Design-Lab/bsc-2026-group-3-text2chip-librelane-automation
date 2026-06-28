// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimple16_system.h for the primary calling header

#include "Vsimple16_system__pch.h"
#include "Vsimple16_system__Syms.h"
#include "Vsimple16_system___024root.h"

VL_ATTR_COLD void Vsimple16_system___024root___eval_initial__TOP(Vsimple16_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple16_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple16_system___024root___eval_initial__TOP\n"); );
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"wave.vcd"});
    VL_PRINTF_MT("-Info: tb/simple16_system_tb.v:7: $dumpvar ignored, as Verilated without --trace\n");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple16_system___024root___dump_triggers__stl(Vsimple16_system___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsimple16_system___024root___eval_triggers__stl(Vsimple16_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple16_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple16_system___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsimple16_system___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
