// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_simon.h for the primary calling header

#ifndef VERILATED_VTEST_SIMON_TRNG_H_
#define VERILATED_VTEST_SIMON_TRNG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtest_simon__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_simon_trng final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(d1,0,0);
    VL_IN8(d2,0,0);
    VL_IN8(d3,4,0);
    VL_OUT8(o_valid,0,0);
    VL_OUT8(o_warbler,0,0);
    CData/*0:0*/ __PVT__nlfsr3_ce;
    CData/*4:0*/ __PVT__s;
    CData/*0:0*/ __PVT__output_en;
    CData/*2:0*/ __PVT__fsm__DOT__state;
    CData/*5:0*/ __PVT__fsm__DOT__cnt;
    CData/*0:0*/ __PVT__nlfsr1__DOT__mux1_in;
    CData/*0:0*/ __PVT__nlfsr2__DOT__mux1_in;
    CData/*4:0*/ __PVT__nlfsr3__DOT__C5;
    CData/*4:0*/ __PVT__nlfsr3__DOT__C4;
    CData/*4:0*/ __PVT__nlfsr3__DOT__C3;
    CData/*4:0*/ __PVT__nlfsr3__DOT__C2;
    CData/*4:0*/ __PVT__nlfsr3__DOT__C1;
    CData/*4:0*/ __PVT__nlfsr3__DOT__C0;
    CData/*0:0*/ __PVT__nlfsr3__DOT__wgt2_5o;
    SData/*15:0*/ __PVT__nlfsr2__DOT__b;
    IData/*16:0*/ __PVT__nlfsr1__DOT__a;

    // INTERNAL VARIABLES
    Vtest_simon__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtest_simon_trng(Vtest_simon__Syms* symsp, const char* v__name);
    ~Vtest_simon_trng();
    VL_UNCOPYABLE(Vtest_simon_trng);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
