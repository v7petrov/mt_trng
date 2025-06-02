// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_parallel.h for the primary calling header

#include "Vtest_parallel__pch.h"
#include "Vtest_parallel__Syms.h"
#include "Vtest_parallel_trng.h"

void Vtest_parallel_trng___ctor_var_reset(Vtest_parallel_trng* vlSelf);

Vtest_parallel_trng::Vtest_parallel_trng(Vtest_parallel__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtest_parallel_trng___ctor_var_reset(this);
}

void Vtest_parallel_trng::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtest_parallel_trng::~Vtest_parallel_trng() {
}
