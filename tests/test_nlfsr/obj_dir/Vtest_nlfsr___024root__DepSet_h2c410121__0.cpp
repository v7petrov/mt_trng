// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_nlfsr.h for the primary calling header

#include "Vtest_nlfsr__pch.h"
#include "Vtest_nlfsr___024root.h"

VL_ATTR_COLD void Vtest_nlfsr___024root___eval_initial__TOP(Vtest_nlfsr___024root* vlSelf);
VlCoroutine Vtest_nlfsr___024root___eval_initial__TOP__Vtiming__0(Vtest_nlfsr___024root* vlSelf);
VlCoroutine Vtest_nlfsr___024root___eval_initial__TOP__Vtiming__1(Vtest_nlfsr___024root* vlSelf);

void Vtest_nlfsr___024root___eval_initial(Vtest_nlfsr___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_nlfsr___024root___eval_initial\n"); );
    Vtest_nlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtest_nlfsr___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtest_nlfsr___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtest_nlfsr___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__test_nlfsr__DOT__clk__0 
        = vlSelfRef.test_nlfsr__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__test_nlfsr__DOT__rst__0 
        = vlSelfRef.test_nlfsr__DOT__rst;
}

VL_INLINE_OPT VlCoroutine Vtest_nlfsr___024root___eval_initial__TOP__Vtiming__1(Vtest_nlfsr___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_nlfsr___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtest_nlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "test_nlfsr.sv", 
                                             59);
        vlSelfRef.__VdlyVal__test_nlfsr__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelfRef.test_nlfsr__DOT__clk)));
        vlSelfRef.__VdlySet__test_nlfsr__DOT__clk__v0 = 1U;
    }
}

void Vtest_nlfsr___024root___eval_act(Vtest_nlfsr___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_nlfsr___024root___eval_act\n"); );
    Vtest_nlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtest_nlfsr___024root___nba_sequent__TOP__0(Vtest_nlfsr___024root* vlSelf);
void Vtest_nlfsr___024root___nba_sequent__TOP__1(Vtest_nlfsr___024root* vlSelf);

void Vtest_nlfsr___024root___eval_nba(Vtest_nlfsr___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_nlfsr___024root___eval_nba\n"); );
    Vtest_nlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtest_nlfsr___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtest_nlfsr___024root___nba_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vtest_nlfsr___024root___nba_sequent__TOP__0(Vtest_nlfsr___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_nlfsr___024root___nba_sequent__TOP__0\n"); );
    Vtest_nlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.test_nlfsr__DOT__rst) {
        vlSelfRef.test_nlfsr__DOT__NLFSR1__DOT__a = 0U;
        vlSelfRef.test_nlfsr__DOT__NLFSR2__DOT__b = 0U;
        vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__C0 = 0U;
        vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__C1 = 0U;
        vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__C2 = 0U;
        vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__C3 = 0U;
        vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__C4 = 0U;
        vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__C5 = 0U;
    } else {
        vlSelfRef.test_nlfsr__DOT__NLFSR1__DOT__a = 
            ((((IData)(vlSelfRef.test_nlfsr__DOT__load1)
                ? (IData)(vlSelfRef.test_nlfsr__DOT__d1)
                : ((IData)(vlSelfRef.test_nlfsr__DOT__init1)
                    ? ((IData)(vlSelfRef.test_nlfsr__DOT__nlfsr3_ce1) 
                       & ((IData)(vlSelfRef.test_nlfsr__DOT__NLFSR1__DOT__mux1_in) 
                          ^ (IData)(vlSelfRef.test_nlfsr__DOT__warbler_o1)))
                    : (IData)(vlSelfRef.test_nlfsr__DOT__NLFSR1__DOT__mux1_in))) 
              << 0x10U) | (0xffffU & (vlSelfRef.test_nlfsr__DOT__NLFSR1__DOT__a 
                                      >> 1U)));
        vlSelfRef.test_nlfsr__DOT__NLFSR2__DOT__b = 
            ((((IData)(vlSelfRef.test_nlfsr__DOT__load2)
                ? (IData)(vlSelfRef.test_nlfsr__DOT__d2)
                : ((IData)(vlSelfRef.test_nlfsr__DOT__init2)
                    ? ((IData)(vlSelfRef.test_nlfsr__DOT__nlfsr3_ce2) 
                       & ((IData)(vlSelfRef.test_nlfsr__DOT__NLFSR2__DOT__mux1_in) 
                          ^ (IData)(vlSelfRef.test_nlfsr__DOT__warbler_o2)))
                    : (IData)(vlSelfRef.test_nlfsr__DOT__NLFSR2__DOT__mux1_in))) 
              << 0xfU) | (0x7fffU & ((IData)(vlSelfRef.test_nlfsr__DOT__NLFSR2__DOT__b) 
                                     >> 1U)));
        if (vlSelfRef.test_nlfsr__DOT__nlfsr3_ce3) {
            vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__C0 
                = vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__C1;
            vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__C1 
                = vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__C2;
            vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__C2 
                = vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__C3;
            vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__C3 
                = vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__C4;
            vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__C4 
                = vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__C5;
            vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__C5 
                = ((IData)(vlSelfRef.test_nlfsr__DOT__init3)
                    ? (IData)(vlSelfRef.test_nlfsr__DOT__tk)
                    : ((IData)(vlSelfRef.test_nlfsr__DOT__load3)
                        ? (IData)(vlSelfRef.test_nlfsr__DOT__d3)
                        : ((IData)(vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__sumL) 
                           ^ (IData)(vlSelfRef.test_nlfsr__DOT__NLFSR3__DOT__sumR))));
        }
    }
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

VL_INLINE_OPT void Vtest_nlfsr___024root___nba_sequent__TOP__1(Vtest_nlfsr___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_nlfsr___024root___nba_sequent__TOP__1\n"); );
    Vtest_nlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__test_nlfsr__DOT__clk__v0) {
        vlSelfRef.__VdlySet__test_nlfsr__DOT__clk__v0 = 0U;
        vlSelfRef.test_nlfsr__DOT__clk = vlSelfRef.__VdlyVal__test_nlfsr__DOT__clk__v0;
    }
}

void Vtest_nlfsr___024root___timing_resume(Vtest_nlfsr___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_nlfsr___024root___timing_resume\n"); );
    Vtest_nlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtest_nlfsr___024root___eval_triggers__act(Vtest_nlfsr___024root* vlSelf);

bool Vtest_nlfsr___024root___eval_phase__act(Vtest_nlfsr___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_nlfsr___024root___eval_phase__act\n"); );
    Vtest_nlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtest_nlfsr___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtest_nlfsr___024root___timing_resume(vlSelf);
        Vtest_nlfsr___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtest_nlfsr___024root___eval_phase__nba(Vtest_nlfsr___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_nlfsr___024root___eval_phase__nba\n"); );
    Vtest_nlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtest_nlfsr___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_nlfsr___024root___dump_triggers__nba(Vtest_nlfsr___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_nlfsr___024root___dump_triggers__act(Vtest_nlfsr___024root* vlSelf);
#endif  // VL_DEBUG

void Vtest_nlfsr___024root___eval(Vtest_nlfsr___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_nlfsr___024root___eval\n"); );
    Vtest_nlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtest_nlfsr___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("test_nlfsr.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtest_nlfsr___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("test_nlfsr.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtest_nlfsr___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtest_nlfsr___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtest_nlfsr___024root___eval_debug_assertions(Vtest_nlfsr___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_nlfsr___024root___eval_debug_assertions\n"); );
    Vtest_nlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
