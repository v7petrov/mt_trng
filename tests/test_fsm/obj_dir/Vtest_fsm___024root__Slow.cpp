// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_fsm.h for the primary calling header

#include "Vtest_fsm__pch.h"
#include "Vtest_fsm__Syms.h"
#include "Vtest_fsm___024root.h"

void Vtest_fsm___024root___ctor_var_reset(Vtest_fsm___024root* vlSelf);

Vtest_fsm___024root::Vtest_fsm___024root(Vtest_fsm__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtest_fsm___024root___ctor_var_reset(this);
}

void Vtest_fsm___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtest_fsm___024root::~Vtest_fsm___024root() {
}
