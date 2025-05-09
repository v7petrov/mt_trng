// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_trng.h for the primary calling header

#ifndef VERILATED_VTEST_TRNG___024ROOT_H_
#define VERILATED_VTEST_TRNG___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtest_trng__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_trng___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ test_trng__DOT__clk;
    CData/*0:0*/ test_trng__DOT__rst;
    CData/*0:0*/ test_trng__DOT__trng_d1;
    CData/*0:0*/ test_trng__DOT__trng_d2;
    CData/*4:0*/ test_trng__DOT__trng_d3;
    CData/*0:0*/ test_trng__DOT__prev_warbler;
    CData/*0:0*/ test_trng__DOT__changed;
    CData/*0:0*/ test_trng__DOT__trng_inst__DOT__nlfsr3_ce;
    CData/*4:0*/ test_trng__DOT__trng_inst__DOT__s;
    CData/*2:0*/ test_trng__DOT__trng_inst__DOT__f0__DOT__state;
    CData/*5:0*/ test_trng__DOT__trng_inst__DOT__f0__DOT__cnt;
    CData/*0:0*/ test_trng__DOT__trng_inst__DOT__n1__DOT__mux1_in;
    CData/*0:0*/ test_trng__DOT__trng_inst__DOT__n2__DOT__mux1_in;
    CData/*4:0*/ test_trng__DOT__trng_inst__DOT__n3__DOT__C5;
    CData/*4:0*/ test_trng__DOT__trng_inst__DOT__n3__DOT__C4;
    CData/*4:0*/ test_trng__DOT__trng_inst__DOT__n3__DOT__C3;
    CData/*4:0*/ test_trng__DOT__trng_inst__DOT__n3__DOT__C2;
    CData/*4:0*/ test_trng__DOT__trng_inst__DOT__n3__DOT__C1;
    CData/*4:0*/ test_trng__DOT__trng_inst__DOT__n3__DOT__C0;
    CData/*4:0*/ test_trng__DOT__trng_inst__DOT__n3__DOT__sumL;
    CData/*4:0*/ test_trng__DOT__trng_inst__DOT__n3__DOT__sumR;
    CData/*0:0*/ test_trng__DOT__trng_inst__DOT__n3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4;
    CData/*0:0*/ __VdlyVal__test_trng__DOT__clk__v0;
    CData/*0:0*/ __VdlySet__test_trng__DOT__clk__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__test_trng__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__test_trng__DOT__rst__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ test_trng__DOT__trng_inst__DOT__n2__DOT__b;
    IData/*16:0*/ test_trng__DOT__trng_inst__DOT__n1__DOT__a;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_he06f1ef9__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtest_trng__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtest_trng___024root(Vtest_trng__Syms* symsp, const char* v__name);
    ~Vtest_trng___024root();
    VL_UNCOPYABLE(Vtest_trng___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
