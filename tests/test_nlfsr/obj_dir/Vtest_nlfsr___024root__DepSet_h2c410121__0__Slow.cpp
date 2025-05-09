// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_nlfsr.h for the primary calling header

#include "Vtest_nlfsr__pch.h"
#include "Vtest_nlfsr___024root.h"

VL_ATTR_COLD void Vtest_nlfsr___024root___eval_static__TOP(Vtest_nlfsr___024root* vlSelf);

VL_ATTR_COLD void Vtest_nlfsr___024root___eval_static(Vtest_nlfsr___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_nlfsr___024root___eval_static\n"); );
    Vtest_nlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtest_nlfsr___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vtest_nlfsr___024root___eval_static__TOP(Vtest_nlfsr___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_nlfsr___024root___eval_static__TOP\n"); );
    Vtest_nlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__sumL = 
        ((IData)(vlSelfRef.test_nlfsr__DOT__tk) ^ (1U 
                                                   & (0x41fdc9dU 
                                                      >> (IData)(vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__C5))));
    vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__sumR = 
        ((IData)(vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__C1) 
         ^ (((0x10U & ((IData)(vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                       << 4U)) | ((8U & ((0x41fdc9dU 
                                          >> (IData)(vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__C5)) 
                                         << 3U)) | 
                                  (4U & (((0x41fdc9dU 
                                           >> (IData)(vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__C5)) 
                                          ^ (IData)(vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                         << 2U)))) 
            | (2U & ((IData)(vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                     << 1U))));
}

VL_ATTR_COLD void Vtest_nlfsr___024root___eval_final(Vtest_nlfsr___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_nlfsr___024root___eval_final\n"); );
    Vtest_nlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_nlfsr___024root___dump_triggers__stl(Vtest_nlfsr___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtest_nlfsr___024root___eval_phase__stl(Vtest_nlfsr___024root* vlSelf);

VL_ATTR_COLD void Vtest_nlfsr___024root___eval_settle(Vtest_nlfsr___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_nlfsr___024root___eval_settle\n"); );
    Vtest_nlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtest_nlfsr___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("test_nlfsr.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtest_nlfsr___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_nlfsr___024root___dump_triggers__stl(Vtest_nlfsr___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_nlfsr___024root___dump_triggers__stl\n"); );
    Vtest_nlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vtest_nlfsr___024root___stl_sequent__TOP__0(Vtest_nlfsr___024root* vlSelf);
VL_ATTR_COLD void Vtest_nlfsr___024root____Vm_traceActivitySetAll(Vtest_nlfsr___024root* vlSelf);

VL_ATTR_COLD void Vtest_nlfsr___024root___eval_stl(Vtest_nlfsr___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_nlfsr___024root___eval_stl\n"); );
    Vtest_nlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtest_nlfsr___024root___stl_sequent__TOP__0(vlSelf);
        Vtest_nlfsr___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtest_nlfsr___024root___stl_sequent__TOP__0(Vtest_nlfsr___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_nlfsr___024root___stl_sequent__TOP__0\n"); );
    Vtest_nlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.test_nlfsr__DOT__NLFSR1__DOT__mux1_in 
        = (1U & (vlSelfRef.test_nlfsr__DOT__NLFSR1__DOT__a 
                 ^ (0x2778a365U >> (((0x10U & (vlSelfRef.test_nlfsr__DOT__NLFSR1__DOT__a 
                                               >> 0xbU)) 
                                     | (8U & (vlSelfRef.test_nlfsr__DOT__NLFSR1__DOT__a 
                                              >> 7U))) 
                                    | ((6U & (vlSelfRef.test_nlfsr__DOT__NLFSR1__DOT__a 
                                              >> 6U)) 
                                       | (1U & (vlSelfRef.test_nlfsr__DOT__NLFSR1__DOT__a 
                                                >> 4U)))))));
    vlSelfRef.test_nlfsr__DOT__NLFSR2__DOT__mux1_in 
        = (1U & ((IData)(vlSelfRef.test_nlfsr__DOT__NLFSR2__DOT__b) 
                 ^ (0x2778a365U >> ((0x10U & ((IData)(vlSelfRef.test_nlfsr__DOT__NLFSR2__DOT__b) 
                                              >> 8U)) 
                                    | ((0xeU & ((IData)(vlSelfRef.test_nlfsr__DOT__NLFSR2__DOT__b) 
                                                >> 6U)) 
                                       | (1U & ((IData)(vlSelfRef.test_nlfsr__DOT__NLFSR2__DOT__b) 
                                                >> 4U)))))));
    vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
}

VL_ATTR_COLD void Vtest_nlfsr___024root___eval_triggers__stl(Vtest_nlfsr___024root* vlSelf);

VL_ATTR_COLD bool Vtest_nlfsr___024root___eval_phase__stl(Vtest_nlfsr___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_nlfsr___024root___eval_phase__stl\n"); );
    Vtest_nlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtest_nlfsr___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtest_nlfsr___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_nlfsr___024root___dump_triggers__act(Vtest_nlfsr___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_nlfsr___024root___dump_triggers__act\n"); );
    Vtest_nlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge test_nlfsr.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge test_nlfsr.rst)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_nlfsr___024root___dump_triggers__nba(Vtest_nlfsr___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_nlfsr___024root___dump_triggers__nba\n"); );
    Vtest_nlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge test_nlfsr.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge test_nlfsr.rst)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtest_nlfsr___024root____Vm_traceActivitySetAll(Vtest_nlfsr___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_nlfsr___024root____Vm_traceActivitySetAll\n"); );
    Vtest_nlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void Vtest_nlfsr___024root___ctor_var_reset(Vtest_nlfsr___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_nlfsr___024root___ctor_var_reset\n"); );
    Vtest_nlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->test_nlfsr__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->test_nlfsr__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->test_nlfsr__DOT__warbler_o1 = VL_RAND_RESET_I(1);
    vlSelf->test_nlfsr__DOT__nlfsr3_ce1 = VL_RAND_RESET_I(1);
    vlSelf->test_nlfsr__DOT__d1 = VL_RAND_RESET_I(1);
    vlSelf->test_nlfsr__DOT__init1 = VL_RAND_RESET_I(1);
    vlSelf->test_nlfsr__DOT__load1 = VL_RAND_RESET_I(1);
    vlSelf->test_nlfsr__DOT__warbler_o2 = VL_RAND_RESET_I(1);
    vlSelf->test_nlfsr__DOT__nlfsr3_ce2 = VL_RAND_RESET_I(1);
    vlSelf->test_nlfsr__DOT__d2 = VL_RAND_RESET_I(1);
    vlSelf->test_nlfsr__DOT__init2 = VL_RAND_RESET_I(1);
    vlSelf->test_nlfsr__DOT__load2 = VL_RAND_RESET_I(1);
    vlSelf->test_nlfsr__DOT__load3 = VL_RAND_RESET_I(1);
    vlSelf->test_nlfsr__DOT__init3 = VL_RAND_RESET_I(1);
    vlSelf->test_nlfsr__DOT__nlfsr3_ce3 = VL_RAND_RESET_I(1);
    vlSelf->test_nlfsr__DOT__d3 = VL_RAND_RESET_I(5);
    vlSelf->test_nlfsr__DOT__tk = VL_RAND_RESET_I(5);
    vlSelf->test_nlfsr__DOT__NLFSR1__DOT__a = VL_RAND_RESET_I(17);
    vlSelf->test_nlfsr__DOT__NLFSR1__DOT__mux1_in = VL_RAND_RESET_I(1);
    vlSelf->test_nlfsr__DOT__NLFSR2__DOT__b = VL_RAND_RESET_I(16);
    vlSelf->test_nlfsr__DOT__NLFSR2__DOT__mux1_in = VL_RAND_RESET_I(1);
    vlSelf->test_nlfsr__DOT__NLFSR3__DOT__C5 = VL_RAND_RESET_I(5);
    vlSelf->test_nlfsr__DOT__NLFSR3__DOT__C4 = VL_RAND_RESET_I(5);
    vlSelf->test_nlfsr__DOT__NLFSR3__DOT__C3 = VL_RAND_RESET_I(5);
    vlSelf->test_nlfsr__DOT__NLFSR3__DOT__C2 = VL_RAND_RESET_I(5);
    vlSelf->test_nlfsr__DOT__NLFSR3__DOT__C1 = VL_RAND_RESET_I(5);
    vlSelf->test_nlfsr__DOT__NLFSR3__DOT__C0 = VL_RAND_RESET_I(5);
    vlSelf->test_nlfsr__DOT__NLFSR3__DOT__sumL = VL_RAND_RESET_I(5);
    vlSelf->test_nlfsr__DOT__NLFSR3__DOT__sumR = VL_RAND_RESET_I(5);
    vlSelf->test_nlfsr__DOT__NLFSR3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyVal__test_nlfsr__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__test_nlfsr__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__test_nlfsr__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__test_nlfsr__DOT__rst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
