// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_bitcollect.h for the primary calling header

#include "Vtest_bitcollect__pch.h"
#include "Vtest_bitcollect__Syms.h"
#include "Vtest_bitcollect___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_bitcollect___024root___dump_triggers__act(Vtest_bitcollect___024root* vlSelf);
#endif  // VL_DEBUG

void Vtest_bitcollect___024root___eval_triggers__act(Vtest_bitcollect___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bitcollect___024root___eval_triggers__act\n"); );
    Vtest_bitcollect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.test_bitcollect__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__test_bitcollect__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.test_bitcollect__DOT__rst) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__test_bitcollect__DOT__rst__0))));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__test_bitcollect__DOT__clk__0 
        = vlSelfRef.test_bitcollect__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__test_bitcollect__DOT__rst__0 
        = vlSelfRef.test_bitcollect__DOT__rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtest_bitcollect___024root___dump_triggers__act(vlSelf);
    }
#endif
}
