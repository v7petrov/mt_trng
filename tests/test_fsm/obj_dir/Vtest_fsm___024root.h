// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_fsm.h for the primary calling header

#ifndef VERILATED_VTEST_FSM___024ROOT_H_
#define VERILATED_VTEST_FSM___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtest_fsm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_fsm___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ test_fsm__DOT__clk;
    CData/*0:0*/ test_fsm__DOT__rst;
    CData/*2:0*/ test_fsm__DOT__fsm_inst__DOT__state;
    CData/*2:0*/ test_fsm__DOT__fsm_inst__DOT__NS;
    CData/*5:0*/ test_fsm__DOT__fsm_inst__DOT__counter;
    CData/*2:0*/ test_fsm__DOT__fsm_inst__DOT__run_cycle_counter;
    CData/*0:0*/ __VdlyVal__test_fsm__DOT__clk__v0;
    CData/*0:0*/ __VdlySet__test_fsm__DOT__clk__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__test_fsm__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__test_fsm__DOT__rst__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_haa3b0681__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtest_fsm__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtest_fsm___024root(Vtest_fsm__Syms* symsp, const char* v__name);
    ~Vtest_fsm___024root();
    VL_UNCOPYABLE(Vtest_fsm___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
