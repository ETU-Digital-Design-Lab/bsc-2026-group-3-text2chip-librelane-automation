// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsimple16_system.h for the primary calling header

#ifndef VERILATED_VSIMPLE16_SYSTEM___024ROOT_H_
#define VERILATED_VSIMPLE16_SYSTEM___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsimple16_system__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsimple16_system___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ simple16_system_tb__DOT__clk;
    CData/*0:0*/ simple16_system_tb__DOT__reset;
    CData/*0:0*/ simple16_system_tb__DOT__dut__DOT__dmem_we;
    CData/*0:0*/ simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__halted_r;
    CData/*2:0*/ simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__alu_op;
    CData/*0:0*/ simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__next_halted;
    CData/*0:0*/ simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__next_dmem_we;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__simple16_system_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__simple16_system_tb__DOT__reset__0;
    CData/*0:0*/ __Vtrigprevexpr_h6f8b851b__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ simple16_system_tb__DOT__dut__DOT__imem_data;
    SData/*15:0*/ simple16_system_tb__DOT__dut__DOT__dmem_addr;
    SData/*15:0*/ simple16_system_tb__DOT__dut__DOT__dmem_wdata;
    SData/*15:0*/ simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__pc;
    SData/*15:0*/ simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__acc;
    SData/*15:0*/ simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__next_pc;
    SData/*15:0*/ simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__next_acc;
    SData/*15:0*/ simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__next_dmem_addr;
    SData/*15:0*/ simple16_system_tb__DOT__dut__DOT__cpu_inst__DOT__next_dmem_wdata;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<SData/*15:0*/, 256> simple16_system_tb__DOT__dut__DOT__dmem_inst__DOT__ram;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hf73c88f9__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vsimple16_system__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsimple16_system___024root(Vsimple16_system__Syms* symsp, const char* v__name);
    ~Vsimple16_system___024root();
    VL_UNCOPYABLE(Vsimple16_system___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
