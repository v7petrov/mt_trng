// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_fsm.h for the primary calling header

#include "Vtest_fsm__pch.h"
#include "Vtest_fsm___024root.h"

VL_ATTR_COLD void Vtest_fsm___024root___eval_initial__TOP(Vtest_fsm___024root* vlSelf);
VlCoroutine Vtest_fsm___024root___eval_initial__TOP__Vtiming__0(Vtest_fsm___024root* vlSelf);
VlCoroutine Vtest_fsm___024root___eval_initial__TOP__Vtiming__1(Vtest_fsm___024root* vlSelf);

void Vtest_fsm___024root___eval_initial(Vtest_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_fsm___024root___eval_initial\n"); );
    Vtest_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtest_fsm___024root___eval_initial__TOP(vlSelf);
    Vtest_fsm___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtest_fsm___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__test_fsm__DOT__clk__0 
        = vlSelfRef.test_fsm__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__test_fsm__DOT__rst__0 
        = vlSelfRef.test_fsm__DOT__rst;
}

VL_INLINE_OPT VlCoroutine Vtest_fsm___024root___eval_initial__TOP__Vtiming__1(Vtest_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_fsm___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtest_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "test_fsm.sv", 
                                             11);
        vlSelfRef.__VdlyVal__test_fsm__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelfRef.test_fsm__DOT__clk)));
        vlSelfRef.__VdlySet__test_fsm__DOT__clk__v0 = 1U;
    }
}

void Vtest_fsm___024root___eval_act(Vtest_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_fsm___024root___eval_act\n"); );
    Vtest_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtest_fsm___024root___nba_sequent__TOP__0(Vtest_fsm___024root* vlSelf);
void Vtest_fsm___024root___nba_sequent__TOP__1(Vtest_fsm___024root* vlSelf);

void Vtest_fsm___024root___eval_nba(Vtest_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_fsm___024root___eval_nba\n"); );
    Vtest_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtest_fsm___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtest_fsm___024root___nba_sequent__TOP__1(vlSelf);
    }
}

extern const VlUnpacked<CData/*0:0*/, 256> Vtest_fsm__ConstPool__TABLE_heab3c15f_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtest_fsm__ConstPool__TABLE_h586c1205_0;

VL_INLINE_OPT void Vtest_fsm___024root___nba_sequent__TOP__0(Vtest_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_fsm___024root___nba_sequent__TOP__0\n"); );
    Vtest_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*2:0*/ __Vdly__test_fsm__DOT__fsm_inst__DOT__state;
    __Vdly__test_fsm__DOT__fsm_inst__DOT__state = 0;
    CData/*5:0*/ __Vdly__test_fsm__DOT__fsm_inst__DOT__cnt;
    __Vdly__test_fsm__DOT__fsm_inst__DOT__cnt = 0;
    // Body
    __Vdly__test_fsm__DOT__fsm_inst__DOT__state = vlSelfRef.test_fsm__DOT__fsm_inst__DOT__state;
    __Vdly__test_fsm__DOT__fsm_inst__DOT__cnt = vlSelfRef.test_fsm__DOT__fsm_inst__DOT__cnt;
    if (vlSelfRef.test_fsm__DOT__rst) {
        __Vdly__test_fsm__DOT__fsm_inst__DOT__state = 4U;
        __Vdly__test_fsm__DOT__fsm_inst__DOT__cnt = 0U;
    } else if ((4U == (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__state))) {
        if ((0x11U == (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__cnt))) {
            __Vdly__test_fsm__DOT__fsm_inst__DOT__state = 2U;
            __Vdly__test_fsm__DOT__fsm_inst__DOT__cnt = 0U;
        } else {
            __Vdly__test_fsm__DOT__fsm_inst__DOT__cnt 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__cnt)));
            __Vdly__test_fsm__DOT__fsm_inst__DOT__state = 4U;
        }
    } else if ((2U == (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__state))) {
        if ((0x23U == (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__cnt))) {
            __Vdly__test_fsm__DOT__fsm_inst__DOT__state = 1U;
            __Vdly__test_fsm__DOT__fsm_inst__DOT__cnt = 0U;
        } else {
            __Vdly__test_fsm__DOT__fsm_inst__DOT__cnt 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__cnt)));
            __Vdly__test_fsm__DOT__fsm_inst__DOT__state = 2U;
        }
    } else if ((1U == (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__state))) {
        __Vdly__test_fsm__DOT__fsm_inst__DOT__cnt = 
            (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__cnt)));
        __Vdly__test_fsm__DOT__fsm_inst__DOT__state = 1U;
    } else {
        __Vdly__test_fsm__DOT__fsm_inst__DOT__state = 4U;
        __Vdly__test_fsm__DOT__fsm_inst__DOT__cnt = 0U;
    }
    vlSelfRef.test_fsm__DOT__fsm_inst__DOT__state = __Vdly__test_fsm__DOT__fsm_inst__DOT__state;
    vlSelfRef.test_fsm__DOT__fsm_inst__DOT__cnt = __Vdly__test_fsm__DOT__fsm_inst__DOT__cnt;
    __Vtableidx1 = (((IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__cnt) 
                     << 2U) | (((2U == (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__state)) 
                                << 1U) | (4U == (IData)(vlSelfRef.test_fsm__DOT__fsm_inst__DOT__state))));
    vlSelfRef.test_fsm__DOT__fsm_nlfsr3_ce = Vtest_fsm__ConstPool__TABLE_heab3c15f_0
        [__Vtableidx1];
    vlSelfRef.test_fsm__DOT__fsm_inst__DOT__output_en 
        = Vtest_fsm__ConstPool__TABLE_h586c1205_0[__Vtableidx1];
}

VL_INLINE_OPT void Vtest_fsm___024root___nba_sequent__TOP__1(Vtest_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_fsm___024root___nba_sequent__TOP__1\n"); );
    Vtest_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__test_fsm__DOT__clk__v0) {
        vlSelfRef.__VdlySet__test_fsm__DOT__clk__v0 = 0U;
        vlSelfRef.test_fsm__DOT__clk = vlSelfRef.__VdlyVal__test_fsm__DOT__clk__v0;
    }
}

void Vtest_fsm___024root___timing_resume(Vtest_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_fsm___024root___timing_resume\n"); );
    Vtest_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_haa3b0681__0.resume(
                                                   "@(posedge test_fsm.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtest_fsm___024root___timing_commit(Vtest_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_fsm___024root___timing_commit\n"); );
    Vtest_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_haa3b0681__0.commit(
                                                   "@(posedge test_fsm.clk)");
    }
}

void Vtest_fsm___024root___eval_triggers__act(Vtest_fsm___024root* vlSelf);

bool Vtest_fsm___024root___eval_phase__act(Vtest_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_fsm___024root___eval_phase__act\n"); );
    Vtest_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtest_fsm___024root___eval_triggers__act(vlSelf);
    Vtest_fsm___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtest_fsm___024root___timing_resume(vlSelf);
        Vtest_fsm___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtest_fsm___024root___eval_phase__nba(Vtest_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_fsm___024root___eval_phase__nba\n"); );
    Vtest_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtest_fsm___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_fsm___024root___dump_triggers__nba(Vtest_fsm___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_fsm___024root___dump_triggers__act(Vtest_fsm___024root* vlSelf);
#endif  // VL_DEBUG

void Vtest_fsm___024root___eval(Vtest_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_fsm___024root___eval\n"); );
    Vtest_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtest_fsm___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("test_fsm.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtest_fsm___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("test_fsm.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtest_fsm___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtest_fsm___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtest_fsm___024root___eval_debug_assertions(Vtest_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_fsm___024root___eval_debug_assertions\n"); );
    Vtest_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
