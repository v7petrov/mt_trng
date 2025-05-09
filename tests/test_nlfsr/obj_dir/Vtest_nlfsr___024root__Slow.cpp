// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_nlfsr.h for the primary calling header

#include "Vtest_nlfsr__pch.h"
#include "Vtest_nlfsr__Syms.h"
#include "Vtest_nlfsr___024root.h"

void Vtest_nlfsr___024root___ctor_var_reset(Vtest_nlfsr___024root* vlSelf);

Vtest_nlfsr___024root::Vtest_nlfsr___024root(Vtest_nlfsr__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtest_nlfsr___024root___ctor_var_reset(this);
}

void Vtest_nlfsr___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtest_nlfsr___024root::~Vtest_nlfsr___024root() {
}
