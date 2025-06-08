// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simon.h for the primary calling header

#include "Vtest_simon__pch.h"
#include "Vtest_simon__Syms.h"
#include "Vtest_simon_trng.h"

void Vtest_simon_trng___ctor_var_reset(Vtest_simon_trng* vlSelf);

Vtest_simon_trng::Vtest_simon_trng(Vtest_simon__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtest_simon_trng___ctor_var_reset(this);
}

void Vtest_simon_trng::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtest_simon_trng::~Vtest_simon_trng() {
}
