// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_wgt.h for the primary calling header

#include "Vtest_wgt__pch.h"
#include "Vtest_wgt___024root.h"

VL_ATTR_COLD void Vtest_wgt___024root___eval_static(Vtest_wgt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_wgt___024root___eval_static\n"); );
    Vtest_wgt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtest_wgt___024root___eval_final(Vtest_wgt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_wgt___024root___eval_final\n"); );
    Vtest_wgt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_wgt___024root___dump_triggers__stl(Vtest_wgt___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtest_wgt___024root___eval_phase__stl(Vtest_wgt___024root* vlSelf);

VL_ATTR_COLD void Vtest_wgt___024root___eval_settle(Vtest_wgt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_wgt___024root___eval_settle\n"); );
    Vtest_wgt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtest_wgt___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("test_wgt.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtest_wgt___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_wgt___024root___dump_triggers__stl(Vtest_wgt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_wgt___024root___dump_triggers__stl\n"); );
    Vtest_wgt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vtest_wgt___024root___act_sequent__TOP__0(Vtest_wgt___024root* vlSelf);

VL_ATTR_COLD void Vtest_wgt___024root___eval_stl(Vtest_wgt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_wgt___024root___eval_stl\n"); );
    Vtest_wgt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtest_wgt___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtest_wgt___024root___eval_triggers__stl(Vtest_wgt___024root* vlSelf);

VL_ATTR_COLD bool Vtest_wgt___024root___eval_phase__stl(Vtest_wgt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_wgt___024root___eval_phase__stl\n"); );
    Vtest_wgt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtest_wgt___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtest_wgt___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_wgt___024root___dump_triggers__act(Vtest_wgt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_wgt___024root___dump_triggers__act\n"); );
    Vtest_wgt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_wgt___024root___dump_triggers__nba(Vtest_wgt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_wgt___024root___dump_triggers__nba\n"); );
    Vtest_wgt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtest_wgt___024root___ctor_var_reset(Vtest_wgt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_wgt___024root___ctor_var_reset\n"); );
    Vtest_wgt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->test_wgt__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->test_wgt__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->test_wgt__DOT__gamma_in = VL_RAND_RESET_I(5);
    vlSelf->test_wgt__DOT__gamma_out = VL_RAND_RESET_I(5);
    vlSelf->test_wgt__DOT__gamma_expected = VL_RAND_RESET_I(5);
    vlSelf->test_wgt__DOT__wgt1_address = VL_RAND_RESET_I(5);
    vlSelf->test_wgt__DOT__wgt1_output = VL_RAND_RESET_I(1);
    vlSelf->test_wgt__DOT__wgt2_address = VL_RAND_RESET_I(5);
    vlSelf->test_wgt__DOT__wgt2_output = VL_RAND_RESET_I(1);
    vlSelf->test_wgt__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyVal__test_wgt__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__test_wgt__DOT__clk__v0 = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
