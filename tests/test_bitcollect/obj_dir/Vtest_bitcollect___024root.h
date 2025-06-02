// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_bitcollect.h for the primary calling header

#ifndef VERILATED_VTEST_BITCOLLECT___024ROOT_H_
#define VERILATED_VTEST_BITCOLLECT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtest_bitcollect__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_bitcollect___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ test_bitcollect__DOT__clk;
    CData/*0:0*/ test_bitcollect__DOT__rst;
    CData/*0:0*/ test_bitcollect__DOT__trng_d1;
    CData/*0:0*/ test_bitcollect__DOT__trng_d2;
    CData/*4:0*/ test_bitcollect__DOT__trng_d3;
    CData/*0:0*/ test_bitcollect__DOT__byte_ready;
    CData/*7:0*/ test_bitcollect__DOT__rand_byte;
    CData/*0:0*/ test_bitcollect__DOT__trng_inst__DOT__nlfsr3_ce;
    CData/*4:0*/ test_bitcollect__DOT__trng_inst__DOT__s;
    CData/*2:0*/ test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__state;
    CData/*5:0*/ test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__cnt;
    CData/*0:0*/ test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__mux1_in;
    CData/*0:0*/ test_bitcollect__DOT__trng_inst__DOT__nlfsr2__DOT__mux1_in;
    CData/*4:0*/ test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__next_C5;
    CData/*4:0*/ test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C5;
    CData/*4:0*/ test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C4;
    CData/*4:0*/ test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C3;
    CData/*4:0*/ test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C2;
    CData/*4:0*/ test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C1;
    CData/*4:0*/ test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C0;
    CData/*0:0*/ test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4;
    CData/*7:0*/ test_bitcollect__DOT__collector__DOT__shift_reg;
    CData/*2:0*/ test_bitcollect__DOT__collector__DOT__bit_count;
    CData/*7:0*/ __Vdly__test_bitcollect__DOT__collector__DOT__shift_reg;
    CData/*2:0*/ __Vdly__test_bitcollect__DOT__collector__DOT__bit_count;
    CData/*0:0*/ __VdlyVal__test_bitcollect__DOT__clk__v0;
    CData/*0:0*/ __VdlySet__test_bitcollect__DOT__clk__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__test_bitcollect__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__test_bitcollect__DOT__rst__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ test_bitcollect__DOT__trng_inst__DOT__nlfsr2__DOT__b;
    IData/*16:0*/ test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__a;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hcc26aa21__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtest_bitcollect__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtest_bitcollect___024root(Vtest_bitcollect__Syms* symsp, const char* v__name);
    ~Vtest_bitcollect___024root();
    VL_UNCOPYABLE(Vtest_bitcollect___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
