// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_nlfsr.h for the primary calling header

#ifndef VERILATED_VTEST_NLFSR___024ROOT_H_
#define VERILATED_VTEST_NLFSR___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtest_nlfsr__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_nlfsr___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ test_nlfsr__DOT__clk;
    CData/*0:0*/ test_nlfsr__DOT__rst;
    CData/*0:0*/ test_nlfsr__DOT__warbler_o1;
    CData/*0:0*/ test_nlfsr__DOT__nlfsr3_ce1;
    CData/*0:0*/ test_nlfsr__DOT__d1;
    CData/*0:0*/ test_nlfsr__DOT__init1;
    CData/*0:0*/ test_nlfsr__DOT__load1;
    CData/*0:0*/ test_nlfsr__DOT__warbler_o2;
    CData/*0:0*/ test_nlfsr__DOT__nlfsr3_ce2;
    CData/*0:0*/ test_nlfsr__DOT__d2;
    CData/*0:0*/ test_nlfsr__DOT__init2;
    CData/*0:0*/ test_nlfsr__DOT__load2;
    CData/*0:0*/ test_nlfsr__DOT__load3;
    CData/*0:0*/ test_nlfsr__DOT__init3;
    CData/*0:0*/ test_nlfsr__DOT__nlfsr3_ce3;
    CData/*4:0*/ test_nlfsr__DOT__d3;
    CData/*4:0*/ test_nlfsr__DOT__tk;
    CData/*0:0*/ test_nlfsr__DOT__NLFSR1__DOT__mux1_in;
    CData/*0:0*/ test_nlfsr__DOT__NLFSR2__DOT__mux1_in;
    CData/*4:0*/ test_nlfsr__DOT__NLFSR3__DOT__C5;
    CData/*4:0*/ test_nlfsr__DOT__NLFSR3__DOT__C4;
    CData/*4:0*/ test_nlfsr__DOT__NLFSR3__DOT__C3;
    CData/*4:0*/ test_nlfsr__DOT__NLFSR3__DOT__C2;
    CData/*4:0*/ test_nlfsr__DOT__NLFSR3__DOT__C1;
    CData/*4:0*/ test_nlfsr__DOT__NLFSR3__DOT__C0;
    CData/*4:0*/ test_nlfsr__DOT__NLFSR3__DOT__sumL;
    CData/*4:0*/ test_nlfsr__DOT__NLFSR3__DOT__sumR;
    CData/*0:0*/ test_nlfsr__DOT__NLFSR3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4;
    CData/*0:0*/ __VdlyVal__test_nlfsr__DOT__clk__v0;
    CData/*0:0*/ __VdlySet__test_nlfsr__DOT__clk__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__test_nlfsr__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__test_nlfsr__DOT__rst__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ test_nlfsr__DOT__NLFSR2__DOT__b;
    IData/*16:0*/ test_nlfsr__DOT__NLFSR1__DOT__a;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtest_nlfsr__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtest_nlfsr___024root(Vtest_nlfsr__Syms* symsp, const char* v__name);
    ~Vtest_nlfsr___024root();
    VL_UNCOPYABLE(Vtest_nlfsr___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
