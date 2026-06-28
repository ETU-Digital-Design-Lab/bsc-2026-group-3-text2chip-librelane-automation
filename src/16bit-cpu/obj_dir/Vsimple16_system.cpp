// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsimple16_system__pch.h"

//============================================================
// Constructors

Vsimple16_system::Vsimple16_system(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsimple16_system__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vsimple16_system::Vsimple16_system(const char* _vcname__)
    : Vsimple16_system(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsimple16_system::~Vsimple16_system() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsimple16_system___024root___eval_debug_assertions(Vsimple16_system___024root* vlSelf);
#endif  // VL_DEBUG
void Vsimple16_system___024root___eval_static(Vsimple16_system___024root* vlSelf);
void Vsimple16_system___024root___eval_initial(Vsimple16_system___024root* vlSelf);
void Vsimple16_system___024root___eval_settle(Vsimple16_system___024root* vlSelf);
void Vsimple16_system___024root___eval(Vsimple16_system___024root* vlSelf);

void Vsimple16_system::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsimple16_system::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsimple16_system___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsimple16_system___024root___eval_static(&(vlSymsp->TOP));
        Vsimple16_system___024root___eval_initial(&(vlSymsp->TOP));
        Vsimple16_system___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsimple16_system___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vsimple16_system::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vsimple16_system::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vsimple16_system::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsimple16_system___024root___eval_final(Vsimple16_system___024root* vlSelf);

VL_ATTR_COLD void Vsimple16_system::final() {
    Vsimple16_system___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsimple16_system::hierName() const { return vlSymsp->name(); }
const char* Vsimple16_system::modelName() const { return "Vsimple16_system"; }
unsigned Vsimple16_system::threads() const { return 1; }
void Vsimple16_system::prepareClone() const { contextp()->prepareClone(); }
void Vsimple16_system::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vsimple16_system::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vsimple16_system::trace()' called on model that was Verilated without --trace option");
}
