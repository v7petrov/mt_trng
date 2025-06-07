// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_aes.h for the primary calling header

#include "Vtest_aes__pch.h"
#include "Vtest_aes__Syms.h"
#include "Vtest_aes___024root.h"

void Vtest_aes___024root___ctor_var_reset(Vtest_aes___024root* vlSelf);

Vtest_aes___024root::Vtest_aes___024root(Vtest_aes__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtest_aes___024root___ctor_var_reset(this);
}

void Vtest_aes___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtest_aes___024root::~Vtest_aes___024root() {
}
