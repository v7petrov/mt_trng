// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_trng.h for the primary calling header

#include "Vtest_trng__pch.h"
#include "Vtest_trng___024root.h"

VL_ATTR_COLD void Vtest_trng___024root___eval_initial__TOP(Vtest_trng___024root* vlSelf);
VlCoroutine Vtest_trng___024root___eval_initial__TOP__Vtiming__0(Vtest_trng___024root* vlSelf);
VlCoroutine Vtest_trng___024root___eval_initial__TOP__Vtiming__1(Vtest_trng___024root* vlSelf);

void Vtest_trng___024root___eval_initial(Vtest_trng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng___024root___eval_initial\n"); );
    Vtest_trng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtest_trng___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtest_trng___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtest_trng___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__test_trng__DOT__clk__0 
        = vlSelfRef.test_trng__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__test_trng__DOT__rst__0 
        = vlSelfRef.test_trng__DOT__rst;
}

VL_INLINE_OPT VlCoroutine Vtest_trng___024root___eval_initial__TOP__Vtiming__1(Vtest_trng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtest_trng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "test_trng.sv", 
                                             11);
        vlSelfRef.__VdlyVal__test_trng__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelfRef.test_trng__DOT__clk)));
        vlSelfRef.__VdlySet__test_trng__DOT__clk__v0 = 1U;
    }
}

void Vtest_trng___024root___eval_act(Vtest_trng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng___024root___eval_act\n"); );
    Vtest_trng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtest_trng___024root___nba_sequent__TOP__0(Vtest_trng___024root* vlSelf);
void Vtest_trng___024root___nba_sequent__TOP__1(Vtest_trng___024root* vlSelf);

void Vtest_trng___024root___eval_nba(Vtest_trng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng___024root___eval_nba\n"); );
    Vtest_trng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtest_trng___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtest_trng___024root___nba_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vtest_trng___024root___nba_sequent__TOP__0(Vtest_trng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng___024root___nba_sequent__TOP__0\n"); );
    Vtest_trng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__test_trng__DOT__trng_inst__DOT__f0__DOT__state;
    __Vdly__test_trng__DOT__trng_inst__DOT__f0__DOT__state = 0;
    CData/*5:0*/ __Vdly__test_trng__DOT__trng_inst__DOT__f0__DOT__cnt;
    __Vdly__test_trng__DOT__trng_inst__DOT__f0__DOT__cnt = 0;
    CData/*4:0*/ __Vdly__test_trng__DOT__trng_inst__DOT__s;
    __Vdly__test_trng__DOT__trng_inst__DOT__s = 0;
    // Body
    __Vdly__test_trng__DOT__trng_inst__DOT__s = vlSelfRef.test_trng__DOT__trng_inst__DOT__s;
    __Vdly__test_trng__DOT__trng_inst__DOT__f0__DOT__state 
        = vlSelfRef.test_trng__DOT__trng_inst__DOT__f0__DOT__state;
    __Vdly__test_trng__DOT__trng_inst__DOT__f0__DOT__cnt 
        = vlSelfRef.test_trng__DOT__trng_inst__DOT__f0__DOT__cnt;
    if (vlSelfRef.test_trng__DOT__rst) {
        __Vdly__test_trng__DOT__trng_inst__DOT__s = 0U;
        __Vdly__test_trng__DOT__trng_inst__DOT__f0__DOT__state = 4U;
        __Vdly__test_trng__DOT__trng_inst__DOT__f0__DOT__cnt = 0U;
        vlSelfRef.test_trng__DOT__trng_inst__DOT__n1__DOT__a = 0U;
        vlSelfRef.test_trng__DOT__trng_inst__DOT__n2__DOT__b = 0U;
        vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C0 = 0U;
        vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1 = 0U;
        vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C2 = 0U;
        vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C3 = 0U;
        vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C4 = 0U;
        vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C5 = 0U;
    } else {
        __Vdly__test_trng__DOT__trng_inst__DOT__s = 
            ((0x1eU & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__s) 
                       << 1U)) | (1U & (vlSelfRef.test_trng__DOT__trng_inst__DOT__n1__DOT__a 
                                        ^ (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n2__DOT__b))));
        if ((4U == (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__f0__DOT__state))) {
            if ((0x11U == (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__f0__DOT__cnt))) {
                __Vdly__test_trng__DOT__trng_inst__DOT__f0__DOT__state = 2U;
                __Vdly__test_trng__DOT__trng_inst__DOT__f0__DOT__cnt = 0U;
            } else {
                __Vdly__test_trng__DOT__trng_inst__DOT__f0__DOT__cnt 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__f0__DOT__cnt)));
                __Vdly__test_trng__DOT__trng_inst__DOT__f0__DOT__state = 4U;
            }
        } else if ((2U == (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__f0__DOT__state))) {
            if ((0x23U == (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__f0__DOT__cnt))) {
                __Vdly__test_trng__DOT__trng_inst__DOT__f0__DOT__state = 1U;
                __Vdly__test_trng__DOT__trng_inst__DOT__f0__DOT__cnt = 0U;
            } else {
                __Vdly__test_trng__DOT__trng_inst__DOT__f0__DOT__cnt 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__f0__DOT__cnt)));
                __Vdly__test_trng__DOT__trng_inst__DOT__f0__DOT__state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__f0__DOT__state))) {
            __Vdly__test_trng__DOT__trng_inst__DOT__f0__DOT__cnt 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__f0__DOT__cnt)));
            __Vdly__test_trng__DOT__trng_inst__DOT__f0__DOT__state = 1U;
        } else {
            __Vdly__test_trng__DOT__trng_inst__DOT__f0__DOT__state = 4U;
            __Vdly__test_trng__DOT__trng_inst__DOT__f0__DOT__cnt = 0U;
        }
        vlSelfRef.test_trng__DOT__trng_inst__DOT__n1__DOT__a 
            = ((((4U == (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__f0__DOT__state))
                  ? (IData)(vlSelfRef.test_trng__DOT__trng_d1)
                  : ((2U == (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__f0__DOT__state))
                      ? ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__nlfsr3_ce) 
                         & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n1__DOT__mux1_in) 
                            ^ (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))))
                      : (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n1__DOT__mux1_in))) 
                << 0x10U) | (0xffffU & (vlSelfRef.test_trng__DOT__trng_inst__DOT__n1__DOT__a 
                                        >> 1U)));
        vlSelfRef.test_trng__DOT__trng_inst__DOT__n2__DOT__b 
            = ((((4U == (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__f0__DOT__state))
                  ? (IData)(vlSelfRef.test_trng__DOT__trng_d2)
                  : ((2U == (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__f0__DOT__state))
                      ? ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__nlfsr3_ce) 
                         & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n2__DOT__mux1_in) 
                            ^ (0x2778a365U >> (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1))))
                      : (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n2__DOT__mux1_in))) 
                << 0xfU) | (0x7fffU & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n2__DOT__b) 
                                       >> 1U)));
        if (vlSelfRef.test_trng__DOT__trng_inst__DOT__nlfsr3_ce) {
            vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C0 
                = vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1;
            vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C1 
                = vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C2;
            vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C2 
                = vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C3;
            vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C3 
                = vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C4;
            vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C4 
                = vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C5;
            vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__C5 
                = ((2U == (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__f0__DOT__state))
                    ? (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__s)
                    : ((4U == (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__f0__DOT__state))
                        ? (IData)(vlSelfRef.test_trng__DOT__trng_d3)
                        : ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__sumL) 
                           ^ (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__sumR))));
        }
    }
    vlSelfRef.test_trng__DOT__trng_inst__DOT__f0__DOT__cnt 
        = __Vdly__test_trng__DOT__trng_inst__DOT__f0__DOT__cnt;
    vlSelfRef.test_trng__DOT__trng_inst__DOT__n1__DOT__mux1_in 
        = (1U & (vlSelfRef.test_trng__DOT__trng_inst__DOT__n1__DOT__a 
                 ^ (0x2778a365U >> (((0x10U & (vlSelfRef.test_trng__DOT__trng_inst__DOT__n1__DOT__a 
                                               >> 0xbU)) 
                                     | (8U & (vlSelfRef.test_trng__DOT__trng_inst__DOT__n1__DOT__a 
                                              >> 7U))) 
                                    | ((6U & (vlSelfRef.test_trng__DOT__trng_inst__DOT__n1__DOT__a 
                                              >> 6U)) 
                                       | (1U & (vlSelfRef.test_trng__DOT__trng_inst__DOT__n1__DOT__a 
                                                >> 4U)))))));
    vlSelfRef.test_trng__DOT__trng_inst__DOT__n2__DOT__mux1_in 
        = (1U & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n2__DOT__b) 
                 ^ (0x2778a365U >> ((0x10U & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n2__DOT__b) 
                                              >> 8U)) 
                                    | ((0xeU & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n2__DOT__b) 
                                                >> 6U)) 
                                       | (1U & ((IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__n2__DOT__b) 
                                                >> 4U)))))));
    vlSelfRef.test_trng__DOT__trng_inst__DOT__s = __Vdly__test_trng__DOT__trng_inst__DOT__s;
    vlSelfRef.test_trng__DOT__trng_inst__DOT__f0__DOT__state 
        = __Vdly__test_trng__DOT__trng_inst__DOT__f0__DOT__state;
    vlSelfRef.test_trng__DOT__trng_inst__DOT__n3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
    vlSelfRef.test_trng__DOT__trng_inst__DOT__nlfsr3_ce 
        = ((4U == (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__f0__DOT__state)) 
           || ((2U == (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__f0__DOT__state))
                ? (0U != (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__f0__DOT__cnt))
                : (4U == (0x3fU & VL_MODDIV_III(6, (IData)(vlSelfRef.test_trng__DOT__trng_inst__DOT__f0__DOT__cnt), (IData)(5U))))));
}

VL_INLINE_OPT void Vtest_trng___024root___nba_sequent__TOP__1(Vtest_trng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng___024root___nba_sequent__TOP__1\n"); );
    Vtest_trng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__test_trng__DOT__clk__v0) {
        vlSelfRef.__VdlySet__test_trng__DOT__clk__v0 = 0U;
        vlSelfRef.test_trng__DOT__clk = vlSelfRef.__VdlyVal__test_trng__DOT__clk__v0;
    }
}

void Vtest_trng___024root___timing_resume(Vtest_trng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng___024root___timing_resume\n"); );
    Vtest_trng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_he06f1ef9__0.resume(
                                                   "@(posedge test_trng.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtest_trng___024root___timing_commit(Vtest_trng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng___024root___timing_commit\n"); );
    Vtest_trng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_he06f1ef9__0.commit(
                                                   "@(posedge test_trng.clk)");
    }
}

void Vtest_trng___024root___eval_triggers__act(Vtest_trng___024root* vlSelf);

bool Vtest_trng___024root___eval_phase__act(Vtest_trng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng___024root___eval_phase__act\n"); );
    Vtest_trng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtest_trng___024root___eval_triggers__act(vlSelf);
    Vtest_trng___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtest_trng___024root___timing_resume(vlSelf);
        Vtest_trng___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtest_trng___024root___eval_phase__nba(Vtest_trng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng___024root___eval_phase__nba\n"); );
    Vtest_trng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtest_trng___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_trng___024root___dump_triggers__nba(Vtest_trng___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_trng___024root___dump_triggers__act(Vtest_trng___024root* vlSelf);
#endif  // VL_DEBUG

void Vtest_trng___024root___eval(Vtest_trng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng___024root___eval\n"); );
    Vtest_trng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtest_trng___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("test_trng.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtest_trng___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("test_trng.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtest_trng___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtest_trng___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtest_trng___024root___eval_debug_assertions(Vtest_trng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng___024root___eval_debug_assertions\n"); );
    Vtest_trng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
