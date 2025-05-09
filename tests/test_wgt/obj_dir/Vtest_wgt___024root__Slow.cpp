// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_wgt.h for the primary calling header

#include "Vtest_wgt__pch.h"
#include "Vtest_wgt__Syms.h"
#include "Vtest_wgt___024root.h"

void Vtest_wgt___024root___ctor_var_reset(Vtest_wgt___024root* vlSelf);

Vtest_wgt___024root::Vtest_wgt___024root(Vtest_wgt__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtest_wgt___024root___ctor_var_reset(this);
}

void Vtest_wgt___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtest_wgt___024root::~Vtest_wgt___024root() {
}
