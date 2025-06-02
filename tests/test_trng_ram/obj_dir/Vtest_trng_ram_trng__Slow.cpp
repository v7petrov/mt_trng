// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_trng_ram.h for the primary calling header

#include "Vtest_trng_ram__pch.h"
#include "Vtest_trng_ram__Syms.h"
#include "Vtest_trng_ram_trng.h"

void Vtest_trng_ram_trng___ctor_var_reset(Vtest_trng_ram_trng* vlSelf);

Vtest_trng_ram_trng::Vtest_trng_ram_trng(Vtest_trng_ram__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtest_trng_ram_trng___ctor_var_reset(this);
}

void Vtest_trng_ram_trng::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtest_trng_ram_trng::~Vtest_trng_ram_trng() {
}
