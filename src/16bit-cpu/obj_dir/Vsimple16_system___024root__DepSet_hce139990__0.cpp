// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimple16_system.h for the primary calling header

#include "Vsimple16_system__pch.h"
#include "Vsimple16_system__Syms.h"
#include "Vsimple16_system___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple16_system___024root___dump_triggers__act(Vsimple16_system___024root* vlSelf);
#endif  // VL_DEBUG

void Vsimple16_system___024root___eval_triggers__act(Vsimple16_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple16_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple16_system___024root___eval_triggers__act\n"); );
    // Body
    CData/*0:0*/ __Vtrigcurrexpr_h6f8b851b__0;
    __Vtrigcurrexpr_h6f8b851b__0 = 0;
    __Vtrigcurrexpr_h6f8b851b__0 = ((IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__halted_r) 
                                    | (0x7d0ULL < VL_TIME_UNITED_Q(1000)));
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->simple16_system_tb__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__simple16_system_tb__DOT__clk__0))) 
                                     | ((IData)(vlSelf->simple16_system_tb__DOT__reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__simple16_system_tb__DOT__reset__0)))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->simple16_system_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__simple16_system_tb__DOT__clk__0))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(3U, ((IData)(__Vtrigcurrexpr_h6f8b851b__0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr_h6f8b851b__0)));
    vlSelf->__Vtrigprevexpr___TOP__simple16_system_tb__DOT__clk__0 
        = vlSelf->simple16_system_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__simple16_system_tb__DOT__reset__0 
        = vlSelf->simple16_system_tb__DOT__reset;
    vlSelf->__Vtrigprevexpr_h6f8b851b__0 = __Vtrigcurrexpr_h6f8b851b__0;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(3U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsimple16_system___024root___dump_triggers__act(vlSelf);
    }
#endif
}
