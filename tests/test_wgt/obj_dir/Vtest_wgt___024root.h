// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_wgt.h for the primary calling header

#ifndef VERILATED_VTEST_WGT___024ROOT_H_
#define VERILATED_VTEST_WGT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtest_wgt__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_wgt___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ test_wgt__DOT__clk;
    CData/*0:0*/ test_wgt__DOT__rst;
    CData/*4:0*/ test_wgt__DOT__gamma_in;
    CData/*4:0*/ test_wgt__DOT__gamma_out;
    CData/*4:0*/ test_wgt__DOT__gamma_expected;
    CData/*4:0*/ test_wgt__DOT__wgt1_address;
    CData/*0:0*/ test_wgt__DOT__wgt1_output;
    CData/*4:0*/ test_wgt__DOT__wgt2_address;
    CData/*0:0*/ test_wgt__DOT__wgt2_output;
    CData/*0:0*/ test_wgt__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4;
    CData/*0:0*/ __VdlyVal__test_wgt__DOT__clk__v0;
    CData/*0:0*/ __VdlySet__test_wgt__DOT__clk__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtest_wgt__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtest_wgt___024root(Vtest_wgt__Syms* symsp, const char* v__name);
    ~Vtest_wgt___024root();
    VL_UNCOPYABLE(Vtest_wgt___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
