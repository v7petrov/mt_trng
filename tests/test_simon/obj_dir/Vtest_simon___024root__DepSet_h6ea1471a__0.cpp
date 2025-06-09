// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simon.h for the primary calling header

#include "Vtest_simon__pch.h"
#include "Vtest_simon__Syms.h"
#include "Vtest_simon___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_simon___024root___dump_triggers__act(Vtest_simon___024root* vlSelf);
#endif  // VL_DEBUG

void Vtest_simon___024root___eval_triggers__act(Vtest_simon___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simon___024root___eval_triggers__act\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    CData/*0:0*/ __Vtrigcurrexpr_h827260e6__0;
    __Vtrigcurrexpr_h827260e6__0 = 0;
    __Vtrigcurrexpr_h827260e6__0 = (3U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state));
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.test_simon__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__test_simon__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.test_simon__DOT__rst) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__test_simon__DOT__rst__0))));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT____Vcellinp__key_ex__i) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__test_simon__DOT__dut__DOT__cipher__DOT____Vcellinp__key_ex__i__0)));
    vlSelfRef.__VactTriggered.set(3U, (vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_in 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__test_simon__DOT__dut__DOT__cipher__DOT__key_in__0));
    vlSelfRef.__VactTriggered.set(4U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.set(5U, ((IData)(__Vtrigcurrexpr_h827260e6__0) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr_h827260e6__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__test_simon__DOT__clk__0 
        = vlSelfRef.test_simon__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__test_simon__DOT__rst__0 
        = vlSelfRef.test_simon__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__test_simon__DOT__dut__DOT__cipher__DOT____Vcellinp__key_ex__i__0 
        = vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT____Vcellinp__key_ex__i;
    vlSelfRef.__Vtrigprevexpr___TOP__test_simon__DOT__dut__DOT__cipher__DOT__key_in__0 
        = vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_in;
    vlSelfRef.__Vtrigprevexpr_h827260e6__0 = __Vtrigcurrexpr_h827260e6__0;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(2U, 1U);
        vlSelfRef.__VactTriggered.set(3U, 1U);
        vlSelfRef.__VactTriggered.set(5U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtest_simon___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtest_simon___024root___nba_sequent__TOP__0(Vtest_simon___024root* vlSelf);
void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
void Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst__0(Vtest_simon_trng* vlSelf);
void Vtest_simon___024root___nba_sequent__TOP__1(Vtest_simon___024root* vlSelf);
void Vtest_simon___024root___nba_sequent__TOP__2(Vtest_simon___024root* vlSelf);
void Vtest_simon___024root___nba_sequent__TOP__3(Vtest_simon___024root* vlSelf);
void Vtest_simon___024root___nba_comb__TOP__0(Vtest_simon___024root* vlSelf);
void Vtest_simon___024root___nba_comb__TOP__1(Vtest_simon___024root* vlSelf);

void Vtest_simon___024root___eval_nba(Vtest_simon___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simon___024root___eval_nba\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtest_simon___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst));
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
        Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst));
        Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst));
        Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst));
        Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst));
        Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst));
        Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst));
        Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst));
        Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst));
        Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst));
        Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst));
        Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst));
        Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst));
        Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst));
        Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst));
        Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst));
        Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst));
        Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst));
        Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst));
        Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst));
        Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst));
        Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst));
        Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst));
        Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst));
        Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst));
        Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst));
        Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst));
        Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst));
        Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst));
        Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst));
        Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst));
        Vtest_simon_trng___nba_sequent__TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst));
        Vtest_simon___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0xcULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtest_simon___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtest_simon___024root___nba_sequent__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[7U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtest_simon___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x33ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtest_simon___024root___nba_comb__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[8U] = 1U;
    }
}

VL_INLINE_OPT void Vtest_simon___024root___nba_sequent__TOP__1(Vtest_simon___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simon___024root___nba_sequent__TOP__1\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__test_simon__DOT__dut__DOT__rng_write_active;
    __Vdly__test_simon__DOT__dut__DOT__rng_write_active = 0;
    // Body
    __Vdly__test_simon__DOT__dut__DOT__rng_write_active 
        = vlSelfRef.test_simon__DOT__dut__DOT__rng_write_active;
    vlSelfRef.test_simon__DOT__dut__DOT__rng_gen__DOT__o_valid_bus 
        = ((((((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                 & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__output_en)) 
                << 0x1fU) | (((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                              & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__output_en)) 
                             << 0x1eU)) | ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                             & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__output_en)) 
                                            << 0x1dU) 
                                           | (((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                               & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__output_en)) 
                                              << 0x1cU))) 
             | (((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                   & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__output_en)) 
                  << 0x1bU) | (((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__output_en)) 
                               << 0x1aU)) | ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                               & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__output_en)) 
                                              << 0x19U) 
                                             | (((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                 & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__output_en)) 
                                                << 0x18U)))) 
            | ((((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                   & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__output_en)) 
                  << 0x17U) | (((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__output_en)) 
                               << 0x16U)) | ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                               & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__output_en)) 
                                              << 0x15U) 
                                             | (((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                 & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__output_en)) 
                                                << 0x14U))) 
               | (((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                     & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__output_en)) 
                    << 0x13U) | (((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                  & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__output_en)) 
                                 << 0x12U)) | ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                 & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__output_en)) 
                                                << 0x11U) 
                                               | (((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                   & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__output_en)) 
                                                  << 0x10U))))) 
           | (((((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                   & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__output_en)) 
                  << 0xfU) | (((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                               & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__output_en)) 
                              << 0xeU)) | ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                             & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__output_en)) 
                                            << 0xdU) 
                                           | (((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                               & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__output_en)) 
                                              << 0xcU))) 
               | (((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                     & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__output_en)) 
                    << 0xbU) | (((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__output_en)) 
                                << 0xaU)) | ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                               & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__output_en)) 
                                              << 9U) 
                                             | (((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                 & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__output_en)) 
                                                << 8U)))) 
              | ((((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                     & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__output_en)) 
                    << 7U) | (((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                               & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__output_en)) 
                              << 6U)) | ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                           & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__output_en)) 
                                          << 5U) | 
                                         (((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                           & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__output_en)) 
                                          << 4U))) 
                 | (((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                       & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__output_en)) 
                      << 3U) | (((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                 & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__output_en)) 
                                << 2U)) | ((((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                             & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__output_en)) 
                                            << 1U) 
                                           | ((IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                              & (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__output_en)))))));
    vlSelfRef.test_simon__DOT__dut__DOT__simon_en_reg 
        = ((1U & (~ (IData)(vlSelfRef.test_simon__DOT__rst))) 
           && (IData)(vlSelfRef.test_simon__DOT__dut__DOT__next_simon_en));
    vlSelfRef.test_simon__DOT__key_ack = ((1U & (~ (IData)(vlSelfRef.test_simon__DOT__rst))) 
                                          && (IData)(vlSelfRef.test_simon__DOT__dut__DOT__rng_write_strobe));
    if ((1U & (~ (IData)(vlSelfRef.test_simon__DOT__rst)))) {
        if ((1U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__state))) {
            vlSelfRef.test_simon__DOT__dut__DOT__key_part1 
                = vlSelfRef.test_simon__DOT__dut__DOT__pB_data_out;
        }
        if ((2U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__state))) {
            vlSelfRef.test_simon__DOT__dut__DOT__key_part2 
                = vlSelfRef.test_simon__DOT__dut__DOT__pB_data_out;
        }
        if (((3U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__state)) 
             & (3U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state)))) {
            vlSelfRef.test_simon__DOT__dut__DOT__ciphertext_reg 
                = vlSelfRef.test_simon__DOT__dut__DOT__cipher_wire;
        }
    }
    if (vlSelfRef.test_simon__DOT__rst) {
        __Vdly__test_simon__DOT__dut__DOT__rng_write_active = 0U;
        vlSelfRef.test_simon__DOT__dut__DOT__state = 0U;
    } else {
        if (((IData)(vlSelfRef.test_simon__DOT__key_we) 
             & (~ (IData)(vlSelfRef.test_simon__DOT__dut__DOT__rng_write_active)))) {
            __Vdly__test_simon__DOT__dut__DOT__rng_write_active = 1U;
        }
        if (vlSelfRef.test_simon__DOT__dut__DOT__rng_write_strobe) {
            __Vdly__test_simon__DOT__dut__DOT__rng_write_active = 0U;
        }
        vlSelfRef.test_simon__DOT__dut__DOT__state 
            = vlSelfRef.test_simon__DOT__dut__DOT__next_state;
    }
    vlSelfRef.test_simon__DOT__dut__DOT__rng_write_active 
        = __Vdly__test_simon__DOT__dut__DOT__rng_write_active;
    vlSelfRef.test_simon__DOT__dut__DOT__rng_write_strobe 
        = ((IData)(vlSelfRef.test_simon__DOT__dut__DOT__rng_write_active) 
           & (0xffffffffU == vlSelfRef.test_simon__DOT__dut__DOT__rng_gen__DOT__o_valid_bus));
    vlSelfRef.test_simon__DOT__dut__DOT__simon_key 
        = (((QData)((IData)(vlSelfRef.test_simon__DOT__dut__DOT__key_part2)) 
            << 0x20U) | (QData)((IData)(vlSelfRef.test_simon__DOT__dut__DOT__key_part1)));
    vlSelfRef.test_simon__DOT__dut__DOT__ram1_din = 
        ((IData)(vlSelfRef.test_simon__DOT__dut__DOT__rng_write_strobe)
          ? (((((((0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                  << 0x1fU) | (0x40000000U & ((0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                              << 0x1eU))) 
                | ((0x20000000U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                   << 0x1dU)) | (0x10000000U 
                                                 & ((0x2778a365U 
                                                     >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                    << 0x1cU)))) 
               | (((0x8000000U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                  << 0x1bU)) | (0x4000000U 
                                                & ((0x2778a365U 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                   << 0x1aU))) 
                  | ((0x2000000U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                    << 0x19U)) | (0x1000000U 
                                                  & ((0x2778a365U 
                                                      >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                     << 0x18U))))) 
              | ((((0x800000U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                 << 0x17U)) | (0x400000U 
                                               & ((0x2778a365U 
                                                   >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                  << 0x16U))) 
                  | ((0x200000U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                   << 0x15U)) | (0x100000U 
                                                 & ((0x2778a365U 
                                                     >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                    << 0x14U)))) 
                 | (((0x80000U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                  << 0x13U)) | (0x40000U 
                                                & ((0x2778a365U 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                   << 0x12U))) 
                    | ((0x20000U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                    << 0x11U)) | (0x10000U 
                                                  & ((0x2778a365U 
                                                      >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                     << 0x10U)))))) 
             | (((((0x8000U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                               << 0xfU)) | (0x4000U 
                                            & ((0x2778a365U 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                               << 0xeU))) 
                  | ((0x2000U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                 << 0xdU)) | (0x1000U 
                                              & ((0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                 << 0xcU)))) 
                 | (((0x800U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                << 0xbU)) | (0x400U 
                                             & ((0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                << 0xaU))) 
                    | ((0x200U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                  << 9U)) | (0x100U 
                                             & ((0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                << 8U))))) 
                | ((((0x80U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                               << 7U)) | (0x40U & (
                                                   (0x2778a365U 
                                                    >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                   << 6U))) 
                    | ((0x20U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                 << 5U)) | (0x10U & 
                                            ((0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                             << 4U)))) 
                   | (((8U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                              << 3U)) | (4U & ((0x2778a365U 
                                                >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                               << 2U))) 
                      | ((2U & ((0x2778a365U >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                << 1U)) | (1U & (0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_simon__DOT__dut__DOT__rng_gen__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1))))))))
          : 0U);
}
