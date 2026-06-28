// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimple16_system.h for the primary calling header

#include "Vsimple16_system__pch.h"
#include "Vsimple16_system___024root.h"

VL_ATTR_COLD void Vsimple16_system___024root___eval_initial__TOP(Vsimple16_system___024root* vlSelf);
VlCoroutine Vsimple16_system___024root___eval_initial__TOP__0(Vsimple16_system___024root* vlSelf);
VlCoroutine Vsimple16_system___024root___eval_initial__TOP__1(Vsimple16_system___024root* vlSelf);

void Vsimple16_system___024root___eval_initial(Vsimple16_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple16_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple16_system___024root___eval_initial\n"); );
    // Body
    Vsimple16_system___024root___eval_initial__TOP(vlSelf);
    Vsimple16_system___024root___eval_initial__TOP__0(vlSelf);
    Vsimple16_system___024root___eval_initial__TOP__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__simple16_system_tb__DOT__clk__0 
        = vlSelf->simple16_system_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__simple16_system_tb__DOT__reset__0 
        = vlSelf->simple16_system_tb__DOT__reset;
    vlSelf->__Vtrigprevexpr_h6f8b851b__0 = ((IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__halted_r) 
                                            | (0x7d0ULL 
                                               < VL_TIME_UNITED_Q(1000)));
}

VL_INLINE_OPT VlCoroutine Vsimple16_system___024root___eval_initial__TOP__0(Vsimple16_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple16_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple16_system___024root___eval_initial__TOP__0\n"); );
    // Body
    vlSelf->simple16_system_tb__DOT__clk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "tb/simple16_system_tb.v", 
                                           27);
        vlSelf->simple16_system_tb__DOT__clk = (1U 
                                                & (~ (IData)(vlSelf->simple16_system_tb__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vsimple16_system___024root___eval_initial__TOP__1(Vsimple16_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple16_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple16_system___024root___eval_initial__TOP__1\n"); );
    // Body
    VL_WRITEF("Test basliyor...\n");
    vlSelf->simple16_system_tb__DOT__reset = 1U;
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "tb/simple16_system_tb.v", 
                                       35);
    vlSelf->simple16_system_tb__DOT__reset = 0U;
    while ((1U & (~ ((IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__halted_r) 
                     | (0x7d0ULL < VL_TIME_UNITED_Q(1000)))))) {
        co_await vlSelf->__VtrigSched_hf73c88f9__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] (simple16_system_tb.dut.cpu_inst.halted_r | (64'h7d0 < $time)))", 
                                                           "tb/simple16_system_tb.v", 
                                                           39);
    }
    VL_WRITEF("Sim sonu: time=%0t ns, halted=%b, ACC=%0# (0x%04x)\n",
              64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__halted_r),
              16,vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__acc,
              16,(IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__acc));
    if (((IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__halted_r) 
         & (0xfU == (IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__acc)))) {
        VL_WRITEF("TEST OK: ACC=15 bekledigimiz gibi.\n");
    } else {
        VL_WRITEF("TEST FAIL: ACC beklenenden farkli.\n");
    }
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "tb/simple16_system_tb.v", 
                                       50);
    VL_FINISH_MT("tb/simple16_system_tb.v", 51, "");
}

void Vsimple16_system___024root___eval_act(Vsimple16_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple16_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple16_system___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vsimple16_system___024root___nba_sequent__TOP__0(Vsimple16_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple16_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple16_system___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdlyvdim0__simple16_system_tb__DOT__dut__DOT__dmem_inst__DOT__ram__v0;
    __Vdlyvdim0__simple16_system_tb__DOT__dut__DOT__dmem_inst__DOT__ram__v0 = 0;
    SData/*15:0*/ __Vdlyvval__simple16_system_tb__DOT__dut__DOT__dmem_inst__DOT__ram__v0;
    __Vdlyvval__simple16_system_tb__DOT__dut__DOT__dmem_inst__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__simple16_system_tb__DOT__dut__DOT__dmem_inst__DOT__ram__v0;
    __Vdlyvset__simple16_system_tb__DOT__dut__DOT__dmem_inst__DOT__ram__v0 = 0;
    // Body
    __Vdlyvset__simple16_system_tb__DOT__dut__DOT__dmem_inst__DOT__ram__v0 = 0U;
    if (vlSelf->simple16_system_tb__DOT__dut__DOT__dmem_we) {
        __Vdlyvval__simple16_system_tb__DOT__dut__DOT__dmem_inst__DOT__ram__v0 
            = vlSelf->simple16_system_tb__DOT__dut__DOT__dmem_wdata;
        __Vdlyvset__simple16_system_tb__DOT__dut__DOT__dmem_inst__DOT__ram__v0 = 1U;
        __Vdlyvdim0__simple16_system_tb__DOT__dut__DOT__dmem_inst__DOT__ram__v0 
            = (0xffU & (IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__dmem_addr));
    }
    if (__Vdlyvset__simple16_system_tb__DOT__dut__DOT__dmem_inst__DOT__ram__v0) {
        vlSelf->simple16_system_tb__DOT__dut__DOT__dmem_inst__DOT__ram[__Vdlyvdim0__simple16_system_tb__DOT__dut__DOT__dmem_inst__DOT__ram__v0] 
            = __Vdlyvval__simple16_system_tb__DOT__dut__DOT__dmem_inst__DOT__ram__v0;
    }
}

VL_INLINE_OPT void Vsimple16_system___024root___nba_sequent__TOP__1(Vsimple16_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple16_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple16_system___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->simple16_system_tb__DOT__reset) {
        vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__acc = 0U;
        vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__pc = 0U;
        vlSelf->simple16_system_tb__DOT__dut__DOT__dmem_wdata = 0U;
        vlSelf->simple16_system_tb__DOT__dut__DOT__dmem_addr = 0U;
    } else {
        vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__acc 
            = vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__next_acc;
        vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__pc 
            = vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__next_pc;
        vlSelf->simple16_system_tb__DOT__dut__DOT__dmem_wdata 
            = vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__next_dmem_wdata;
        vlSelf->simple16_system_tb__DOT__dut__DOT__dmem_addr 
            = vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__next_dmem_addr;
    }
    vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__halted_r 
        = ((1U & (~ (IData)(vlSelf->simple16_system_tb__DOT__reset))) 
           && (IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__next_halted));
    vlSelf->simple16_system_tb__DOT__dut__DOT__dmem_we 
        = ((1U & (~ (IData)(vlSelf->simple16_system_tb__DOT__reset))) 
           && (IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__next_dmem_we));
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
    vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__alu_op = 5U;
    vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__next_dmem_addr 
        = vlSelf->simple16_system_tb__DOT__dut__DOT__dmem_addr;
    vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__next_dmem_wdata 
        = vlSelf->simple16_system_tb__DOT__dut__DOT__dmem_wdata;
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
                } else if ((0x1000U & (IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__imem_data))) {
                    vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__alu_op = 5U;
                }
            }
        }
    }
}

VL_INLINE_OPT void Vsimple16_system___024root___nba_comb__TOP__0(Vsimple16_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple16_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple16_system___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__next_acc 
        = vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__acc;
    if ((1U & (~ (IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__halted_r)))) {
        if ((1U & (~ ((IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__imem_data) 
                      >> 0xfU)))) {
            if ((1U & (~ ((IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__imem_data) 
                          >> 0xeU)))) {
                if ((0x2000U & (IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__imem_data))) {
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
                    vlSelf->simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__next_acc 
                        = (0xfffU & (IData)(vlSelf->simple16_system_tb__DOT__dut__DOT__imem_data));
                }
            }
        }
    }
}

void Vsimple16_system___024root___eval_nba(Vsimple16_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple16_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple16_system___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsimple16_system___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsimple16_system___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsimple16_system___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vsimple16_system___024root___timing_commit(Vsimple16_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple16_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple16_system___024root___timing_commit\n"); );
    // Body
    if ((! (8ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hf73c88f9__0.commit("@([changed] (simple16_system_tb.dut.cpu_inst.halted_r | (64'h7d0 < $time)))");
    }
}

void Vsimple16_system___024root___timing_resume(Vsimple16_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple16_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple16_system___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hf73c88f9__0.resume("@([changed] (simple16_system_tb.dut.cpu_inst.halted_r | (64'h7d0 < $time)))");
    }
}

void Vsimple16_system___024root___eval_triggers__act(Vsimple16_system___024root* vlSelf);

bool Vsimple16_system___024root___eval_phase__act(Vsimple16_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple16_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple16_system___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vsimple16_system___024root___eval_triggers__act(vlSelf);
    Vsimple16_system___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vsimple16_system___024root___timing_resume(vlSelf);
        Vsimple16_system___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vsimple16_system___024root___eval_phase__nba(Vsimple16_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple16_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple16_system___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vsimple16_system___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple16_system___024root___dump_triggers__nba(Vsimple16_system___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple16_system___024root___dump_triggers__act(Vsimple16_system___024root* vlSelf);
#endif  // VL_DEBUG

void Vsimple16_system___024root___eval(Vsimple16_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple16_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple16_system___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vsimple16_system___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/simple16_system_tb.v", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vsimple16_system___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/simple16_system_tb.v", 4, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vsimple16_system___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vsimple16_system___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vsimple16_system___024root___eval_debug_assertions(Vsimple16_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple16_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple16_system___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
