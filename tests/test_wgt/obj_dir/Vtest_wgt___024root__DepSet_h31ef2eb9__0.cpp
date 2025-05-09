// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_wgt.h for the primary calling header

#include "Vtest_wgt__pch.h"
#include "Vtest_wgt___024root.h"

VL_ATTR_COLD void Vtest_wgt___024root___eval_initial__TOP(Vtest_wgt___024root* vlSelf);
VlCoroutine Vtest_wgt___024root___eval_initial__TOP__Vtiming__0(Vtest_wgt___024root* vlSelf);
VlCoroutine Vtest_wgt___024root___eval_initial__TOP__Vtiming__1(Vtest_wgt___024root* vlSelf);

void Vtest_wgt___024root___eval_initial(Vtest_wgt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_wgt___024root___eval_initial\n"); );
    Vtest_wgt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtest_wgt___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtest_wgt___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtest_wgt___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtest_wgt___024root___eval_initial__TOP__Vtiming__1(Vtest_wgt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_wgt___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtest_wgt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "test_wgt.sv", 
                                             11);
        vlSelfRef.__VdlyVal__test_wgt__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelfRef.test_wgt__DOT__clk)));
        vlSelfRef.__VdlySet__test_wgt__DOT__clk__v0 = 1U;
    }
}

void Vtest_wgt___024root___act_sequent__TOP__0(Vtest_wgt___024root* vlSelf);

void Vtest_wgt___024root___eval_act(Vtest_wgt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_wgt___024root___eval_act\n"); );
    Vtest_wgt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtest_wgt___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtest_wgt___024root___act_sequent__TOP__0(Vtest_wgt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_wgt___024root___act_sequent__TOP__0\n"); );
    Vtest_wgt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.test_wgt__DOT__wgt1_output = (1U & (0x2778a365U 
                                                  >> (IData)(vlSelfRef.test_wgt__DOT__wgt1_address)));
    vlSelfRef.test_wgt__DOT__wgt2_output = (1U & (0x41fdc9dU 
                                                  >> (IData)(vlSelfRef.test_wgt__DOT__wgt2_address)));
    vlSelfRef.test_wgt__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 
        = (1U & VL_REDXOR_8((0x18U & (IData)(vlSelfRef.test_wgt__DOT__gamma_in))));
    vlSelfRef.test_wgt__DOT__gamma_out = (((0x10U & 
                                            ((0xfffffff0U 
                                              & ((IData)(vlSelfRef.test_wgt__DOT__gamma_in) 
                                                 << 3U)) 
                                             ^ ((IData)(vlSelfRef.test_wgt__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U))) 
                                           | ((8U & 
                                               (VL_REDXOR_4(
                                                            (7U 
                                                             & (IData)(vlSelfRef.test_wgt__DOT__gamma_in))) 
                                                << 3U)) 
                                              | (4U 
                                                 & (((IData)(vlSelfRef.test_wgt__DOT__gamma_in) 
                                                     ^ (IData)(vlSelfRef.test_wgt__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                    << 2U)))) 
                                          | ((2U & 
                                              ((0x7ffffffeU 
                                                & ((IData)(vlSelfRef.test_wgt__DOT__gamma_in) 
                                                   >> 1U)) 
                                               ^ ((IData)(vlSelfRef.test_wgt__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 1U))) 
                                             | (1U 
                                                & VL_REDXOR_8(
                                                              (0x14U 
                                                               & (IData)(vlSelfRef.test_wgt__DOT__gamma_in))))));
}

void Vtest_wgt___024root___nba_sequent__TOP__0(Vtest_wgt___024root* vlSelf);

void Vtest_wgt___024root___eval_nba(Vtest_wgt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_wgt___024root___eval_nba\n"); );
    Vtest_wgt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtest_wgt___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtest_wgt___024root___nba_sequent__TOP__0(Vtest_wgt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_wgt___024root___nba_sequent__TOP__0\n"); );
    Vtest_wgt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.test_wgt__DOT__wgt1_output = (1U & (0x2778a365U 
                                                  >> (IData)(vlSelfRef.test_wgt__DOT__wgt1_address)));
    vlSelfRef.test_wgt__DOT__wgt2_output = (1U & (0x41fdc9dU 
                                                  >> (IData)(vlSelfRef.test_wgt__DOT__wgt2_address)));
    if (vlSelfRef.__VdlySet__test_wgt__DOT__clk__v0) {
        vlSelfRef.__VdlySet__test_wgt__DOT__clk__v0 = 0U;
        vlSelfRef.test_wgt__DOT__clk = vlSelfRef.__VdlyVal__test_wgt__DOT__clk__v0;
    }
    vlSelfRef.test_wgt__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 
        = (1U & VL_REDXOR_8((0x18U & (IData)(vlSelfRef.test_wgt__DOT__gamma_in))));
    vlSelfRef.test_wgt__DOT__gamma_out = (((0x10U & 
                                            ((0xfffffff0U 
                                              & ((IData)(vlSelfRef.test_wgt__DOT__gamma_in) 
                                                 << 3U)) 
                                             ^ ((IData)(vlSelfRef.test_wgt__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                << 4U))) 
                                           | ((8U & 
                                               (VL_REDXOR_4(
                                                            (7U 
                                                             & (IData)(vlSelfRef.test_wgt__DOT__gamma_in))) 
                                                << 3U)) 
                                              | (4U 
                                                 & (((IData)(vlSelfRef.test_wgt__DOT__gamma_in) 
                                                     ^ (IData)(vlSelfRef.test_wgt__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                    << 2U)))) 
                                          | ((2U & 
                                              ((0x7ffffffeU 
                                                & ((IData)(vlSelfRef.test_wgt__DOT__gamma_in) 
                                                   >> 1U)) 
                                               ^ ((IData)(vlSelfRef.test_wgt__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                                                  << 1U))) 
                                             | (1U 
                                                & VL_REDXOR_8(
                                                              (0x14U 
                                                               & (IData)(vlSelfRef.test_wgt__DOT__gamma_in))))));
}

void Vtest_wgt___024root___timing_resume(Vtest_wgt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_wgt___024root___timing_resume\n"); );
    Vtest_wgt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtest_wgt___024root___eval_triggers__act(Vtest_wgt___024root* vlSelf);

bool Vtest_wgt___024root___eval_phase__act(Vtest_wgt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_wgt___024root___eval_phase__act\n"); );
    Vtest_wgt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtest_wgt___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtest_wgt___024root___timing_resume(vlSelf);
        Vtest_wgt___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtest_wgt___024root___eval_phase__nba(Vtest_wgt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_wgt___024root___eval_phase__nba\n"); );
    Vtest_wgt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtest_wgt___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_wgt___024root___dump_triggers__nba(Vtest_wgt___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_wgt___024root___dump_triggers__act(Vtest_wgt___024root* vlSelf);
#endif  // VL_DEBUG

void Vtest_wgt___024root___eval(Vtest_wgt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_wgt___024root___eval\n"); );
    Vtest_wgt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtest_wgt___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("test_wgt.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtest_wgt___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("test_wgt.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtest_wgt___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtest_wgt___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtest_wgt___024root___eval_debug_assertions(Vtest_wgt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_wgt___024root___eval_debug_assertions\n"); );
    Vtest_wgt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
