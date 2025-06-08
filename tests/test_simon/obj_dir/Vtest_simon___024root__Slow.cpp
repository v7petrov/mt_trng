// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simon.h for the primary calling header

#include "Vtest_simon__pch.h"
#include "Vtest_simon__Syms.h"
#include "Vtest_simon___024root.h"

void Vtest_simon___024root___ctor_var_reset(Vtest_simon___024root* vlSelf);

Vtest_simon___024root::Vtest_simon___024root(Vtest_simon__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtest_simon___024root___ctor_var_reset(this);
}

void Vtest_simon___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtest_simon___024root::~Vtest_simon___024root() {
}
