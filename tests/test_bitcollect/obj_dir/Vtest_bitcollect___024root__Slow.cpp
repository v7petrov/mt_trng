// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_bitcollect.h for the primary calling header

#include "Vtest_bitcollect__pch.h"
#include "Vtest_bitcollect__Syms.h"
#include "Vtest_bitcollect___024root.h"

void Vtest_bitcollect___024root___ctor_var_reset(Vtest_bitcollect___024root* vlSelf);

Vtest_bitcollect___024root::Vtest_bitcollect___024root(Vtest_bitcollect__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtest_bitcollect___024root___ctor_var_reset(this);
}

void Vtest_bitcollect___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtest_bitcollect___024root::~Vtest_bitcollect___024root() {
}
