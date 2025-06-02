// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_parallel.h for the primary calling header

#include "Vtest_parallel__pch.h"
#include "Vtest_parallel___024root.h"

VL_ATTR_COLD void Vtest_parallel___024root___eval_static(Vtest_parallel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_parallel___024root___eval_static\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtest_parallel___024root___eval_final(Vtest_parallel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_parallel___024root___eval_final\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_parallel___024root___dump_triggers__stl(Vtest_parallel___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtest_parallel___024root___eval_phase__stl(Vtest_parallel___024root* vlSelf);

VL_ATTR_COLD void Vtest_parallel___024root___eval_settle(Vtest_parallel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_parallel___024root___eval_settle\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtest_parallel___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("test_parallel.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtest_parallel___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_parallel___024root___dump_triggers__stl(Vtest_parallel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_parallel___024root___dump_triggers__stl\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtest_parallel___024root___eval_triggers__stl(Vtest_parallel___024root* vlSelf);
VL_ATTR_COLD void Vtest_parallel___024root___eval_stl(Vtest_parallel___024root* vlSelf);

VL_ATTR_COLD bool Vtest_parallel___024root___eval_phase__stl(Vtest_parallel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_parallel___024root___eval_phase__stl\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtest_parallel___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtest_parallel___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_parallel___024root___dump_triggers__act(Vtest_parallel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_parallel___024root___dump_triggers__act\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge test_trng_parallel32.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge test_trng_parallel32.rst)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_parallel___024root___dump_triggers__nba(Vtest_parallel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_parallel___024root___dump_triggers__nba\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge test_trng_parallel32.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge test_trng_parallel32.rst)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtest_parallel___024root____Vm_traceActivitySetAll(Vtest_parallel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_parallel___024root____Vm_traceActivitySetAll\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void Vtest_parallel___024root___ctor_var_reset(Vtest_parallel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_parallel___024root___ctor_var_reset\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->test_trng_parallel32__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->test_trng_parallel32__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->test_trng_parallel32__DOT__trng_d1 = VL_RAND_RESET_I(32);
    vlSelf->test_trng_parallel32__DOT__trng_d2 = VL_RAND_RESET_I(32);
    vlSelf->test_trng_parallel32__DOT__trng_d3 = VL_RAND_RESET_I(5);
    vlSelf->__VdlyVal__test_trng_parallel32__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__test_trng_parallel32__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__test_trng_parallel32__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__test_trng_parallel32__DOT__rst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
