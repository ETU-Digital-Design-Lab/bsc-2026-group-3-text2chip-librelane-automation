// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimple16_system.h for the primary calling header

#include "Vsimple16_system__pch.h"
#include "Vsimple16_system___024root.h"

VL_ATTR_COLD void Vsimple16_system___024root___eval_static(Vsimple16_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple16_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple16_system___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vsimple16_system___024root___eval_final(Vsimple16_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple16_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple16_system___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple16_system___024root___dump_triggers__stl(Vsimple16_system___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vsimple16_system___024root___eval_phase__stl(Vsimple16_system___024root* vlSelf);

VL_ATTR_COLD void Vsimple16_system___024root___eval_settle(Vsimple16_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple16_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple16_system___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vsimple16_system___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/simple16_system_tb.v", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vsimple16_system___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple16_system___024root___dump_triggers__stl(Vsimple16_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple16_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple16_system___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsimple16_system___024root___stl_sequent__TOP__0(Vsimple16_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple16_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple16_system___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__next_pc 
        = vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__pc;
    vlSelf->simple16_system_tb__DOT__dut__DOT__imem_data 
        = ((0U == (0xffU & (IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__pc)))
            ? 0x1005U : ((1U == (0xffU & (IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__pc)))
                          ? 0x200aU : ((2U == (0xffU 
                                               & (IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__pc)))
                                        ? 0x4010U : 
                                       ((3U == (0xffU 
                                                & (IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__pc)))
                                         ? 0x1000U : 
                                        ((4U == (0xffU 
                                                 & (IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__pc)))
                                          ? 0x3010U
                                          : ((5U == 
                                              (0xffU 
                                               & (IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__pc)))
                                              ? 0xf000U
                                              : 0U))))));
    vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__next_halted 
        = vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__halted_r;
    vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__next_dmem_we = 0U;
    vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__next_dmem_addr 
        = vlSelf->simple16_system_tb__DOT__dut__DOT__dmem_addr;
    vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__next_dmem_wdata 
        = vlSelf->simple16_system_tb__DOT__dut__DOT__dmem_wdata;
    vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__alu_op = 5U;
    vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__next_acc 
        = vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__acc;
    if ((1U & (~ (IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__halted_r)))) {
        vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__next_pc 
            = (0xffffU & ((IData)(1U) + (IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__pc)));
        if ((0x8000U & (IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__imem_data))) {
            if ((0x4000U & (IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__imem_data))) {
                if ((0x2000U & (IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__imem_data))) {
                    if ((0x1000U & (IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__imem_data))) {
                        vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__next_halted = 1U;
                    }
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__imem_data) 
                      >> 0xfU)))) {
            if ((0x4000U & (IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__imem_data))) {
                if ((1U & (~ ((IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__imem_data) 
                              >> 0xdU)))) {
                    if ((1U & (~ ((IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__imem_data) 
                                  >> 0xcU)))) {
                        vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__next_dmem_we = 1U;
                        vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__next_dmem_addr 
                            = (0xfffU & (IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__imem_data));
                        vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__next_dmem_wdata 
                            = vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__acc;
                    }
                }
            } else if ((0x2000U & (IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__imem_data))) {
                if ((0x1000U & (IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__imem_data))) {
                    vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__next_dmem_addr 
                        = (0xfffU & (IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__imem_data));
                }
            }
            if ((1U & (~ ((IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__imem_data) 
                          >> 0xeU)))) {
                if ((0x2000U & (IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__imem_data))) {
                    if ((1U & (~ ((IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__imem_data) 
                                  >> 0xcU)))) {
                        vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__alu_op = 0U;
                    }
                    vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__next_acc 
                        = (0xffffU & ((0x1000U & (IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__imem_data))
                                       ? vlSelf->simple16_system_tb__DOT__dut__DOT__dmem_inst__DOT__ram
                                      [(0xffU & (IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__dmem_addr))]
                                       : ((4U & (IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__alu_op))
                                           ? ((2U & (IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__alu_op))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__alu_op))
                                                   ? 
                                                  (0xfffU 
                                                   & (IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__imem_data))
                                                   : 
                                                  ((IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__acc) 
                                                   ^ 
                                                   (0xfffU 
                                                    & (IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__imem_data)))))
                                           : ((2U & (IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__alu_op))
                                               ? ((1U 
                                                   & (IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__alu_op))
                                                   ? 
                                                  ((IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__acc) 
                                                   | (0xfffU 
                                                      & (IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__imem_data)))
                                                   : 
                                                  (0xfffU 
                                                   & ((IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__acc) 
                                                      & (IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__imem_data))))
                                               : ((1U 
                                                   & (IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__alu_op))
                                                   ? 
                                                  ((IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__acc) 
                                                   - 
                                                   (0xfffU 
                                                    & (IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__imem_data)))
                                                   : 
                                                  ((IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__acc) 
                                                   + 
                                                   (0xfffU 
                                                    & (IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__imem_data))))))));
                } else if ((0x1000U & (IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__imem_data))) {
                    vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__alu_op = 5U;
                    vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__next_acc 
                        = (0xfffU & (IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__imem_data));
                }
            }
        }
    }
}

VL_ATTR_COLD void Vsimple16_system___024root___eval_stl(Vsimple16_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple16_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple16_system___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vsimple16_system___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vsimple16_system___024root___eval_triggers__stl(Vsimple16_system___024root* vlSelf);

VL_ATTR_COLD bool Vsimple16_system___024root___eval_phase__stl(Vsimple16_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple16_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple16_system___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vsimple16_system___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vsimple16_system___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple16_system___024root___dump_triggers__act(Vsimple16_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple16_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple16_system___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge simple16_system_tb.clk or posedge simple16_system_tb.reset)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge simple16_system_tb.clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([changed] (simple16_system_tb.dut.cpu_inst.halted_r | (64'h7d0 < $time)))\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple16_system___024root___dump_triggers__nba(Vsimple16_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple16_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple16_system___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge simple16_system_tb.clk or posedge simple16_system_tb.reset)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge simple16_system_tb.clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([changed] (simple16_system_tb.dut.cpu_inst.halted_r | (64'h7d0 < $time)))\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsimple16_system___024root___ctor_var_reset(Vsimple16_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple16_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple16_system___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->simple16_system_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->simple16_system_tb__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->simple16_system_tb__DOT__dut__DOT__imem_data = VL_RAND_RESET_I(16);
    vlSelf->simple16_system_tb__DOT__dut__DOT__dmem_addr = VL_RAND_RESET_I(16);
    vlSelf->simple16_system_tb__DOT__dut__DOT__dmem_wdata = VL_RAND_RESET_I(16);
    vlSelf->simple16_system_tb__DOT__dut__DOT__dmem_we = VL_RAND_RESET_I(1);
    vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__pc = VL_RAND_RESET_I(16);
    vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__acc = VL_RAND_RESET_I(16);
    vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__halted_r = VL_RAND_RESET_I(1);
    vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__alu_op = VL_RAND_RESET_I(3);
    vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__next_pc = VL_RAND_RESET_I(16);
    vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__next_acc = VL_RAND_RESET_I(16);
    vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__next_halted = VL_RAND_RESET_I(1);
    vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__next_dmem_we = VL_RAND_RESET_I(1);
    vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__next_dmem_addr = VL_RAND_RESET_I(16);
    vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__next_dmem_wdata = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->simple16_system_tb__DOT__dut__DOT__dmem_inst__DOT__ram[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->__Vtrigprevexpr___TOP__simple16_system_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__simple16_system_tb__DOT__reset__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h6f8b851b__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
