// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_trng.h for the primary calling header

#include "Vtest_trng__pch.h"
#include "Vtest_trng__Syms.h"
#include "Vtest_trng___024root.h"

void Vtest_trng___024root___ctor_var_reset(Vtest_trng___024root* vlSelf);

Vtest_trng___024root::Vtest_trng___024root(Vtest_trng__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtest_trng___024root___ctor_var_reset(this);
}

void Vtest_trng___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtest_trng___024root::~Vtest_trng___024root() {
}
