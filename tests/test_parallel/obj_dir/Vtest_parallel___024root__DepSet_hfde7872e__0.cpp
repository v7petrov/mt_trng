// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_parallel.h for the primary calling header

#include "Vtest_parallel__pch.h"
#include "Vtest_parallel___024root.h"

VL_ATTR_COLD void Vtest_parallel___024root___eval_initial__TOP(Vtest_parallel___024root* vlSelf);
VlCoroutine Vtest_parallel___024root___eval_initial__TOP__Vtiming__0(Vtest_parallel___024root* vlSelf);
VlCoroutine Vtest_parallel___024root___eval_initial__TOP__Vtiming__1(Vtest_parallel___024root* vlSelf);

void Vtest_parallel___024root___eval_initial(Vtest_parallel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_parallel___024root___eval_initial\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtest_parallel___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtest_parallel___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtest_parallel___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__test_trng_parallel32__DOT__clk__0 
        = vlSelfRef.test_trng_parallel32__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__test_trng_parallel32__DOT__rst__0 
        = vlSelfRef.test_trng_parallel32__DOT__rst;
}

VL_INLINE_OPT VlCoroutine Vtest_parallel___024root___eval_initial__TOP__Vtiming__1(Vtest_parallel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_parallel___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "test_parallel.sv", 
                                             11);
        vlSelfRef.__VdlyVal__test_trng_parallel32__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelfRef.test_trng_parallel32__DOT__clk)));
        vlSelfRef.__VdlySet__test_trng_parallel32__DOT__clk__v0 = 1U;
    }
}

void Vtest_parallel___024root___eval_act(Vtest_parallel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_parallel___024root___eval_act\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_INLINE_OPT void Vtest_parallel___024root___nba_sequent__TOP__0(Vtest_parallel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_parallel___024root___nba_sequent__TOP__0\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__test_trng_parallel32__DOT__clk__v0) {
        vlSelfRef.__VdlySet__test_trng_parallel32__DOT__clk__v0 = 0U;
        vlSelfRef.test_trng_parallel32__DOT__clk = vlSelfRef.__VdlyVal__test_trng_parallel32__DOT__clk__v0;
    }
}

void Vtest_parallel___024root___timing_resume(Vtest_parallel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_parallel___024root___timing_resume\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h1c536a24__0.resume(
                                                   "@(posedge test_trng_parallel32.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtest_parallel___024root___timing_commit(Vtest_parallel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_parallel___024root___timing_commit\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h1c536a24__0.commit(
                                                   "@(posedge test_trng_parallel32.clk)");
    }
}

void Vtest_parallel___024root___eval_triggers__act(Vtest_parallel___024root* vlSelf);

bool Vtest_parallel___024root___eval_phase__act(Vtest_parallel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_parallel___024root___eval_phase__act\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtest_parallel___024root___eval_triggers__act(vlSelf);
    Vtest_parallel___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtest_parallel___024root___timing_resume(vlSelf);
        Vtest_parallel___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vtest_parallel___024root___eval_nba(Vtest_parallel___024root* vlSelf);

bool Vtest_parallel___024root___eval_phase__nba(Vtest_parallel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_parallel___024root___eval_phase__nba\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtest_parallel___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_parallel___024root___dump_triggers__nba(Vtest_parallel___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_parallel___024root___dump_triggers__act(Vtest_parallel___024root* vlSelf);
#endif  // VL_DEBUG

void Vtest_parallel___024root___eval(Vtest_parallel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_parallel___024root___eval\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtest_parallel___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("test_parallel.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtest_parallel___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("test_parallel.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtest_parallel___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtest_parallel___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtest_parallel___024root___eval_debug_assertions(Vtest_parallel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_parallel___024root___eval_debug_assertions\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
