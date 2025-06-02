// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_parallel.h for the primary calling header

#include "Vtest_parallel__pch.h"
#include "Vtest_parallel__Syms.h"
#include "Vtest_parallel___024root.h"

void Vtest_parallel___024root___ctor_var_reset(Vtest_parallel___024root* vlSelf);

Vtest_parallel___024root::Vtest_parallel___024root(Vtest_parallel__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtest_parallel___024root___ctor_var_reset(this);
}

void Vtest_parallel___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtest_parallel___024root::~Vtest_parallel___024root() {
}
