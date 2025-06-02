// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_parallel.h for the primary calling header

#include "Vtest_parallel__pch.h"
#include "Vtest_parallel__Syms.h"
#include "Vtest_parallel___024root.h"

VL_INLINE_OPT VlCoroutine Vtest_parallel___024root___eval_initial__TOP__Vtiming__0(Vtest_parallel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_parallel___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_test_trng_parallel32__DOT__test_parallel_trng_word__0__test_trng_parallel32__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_test_trng_parallel32__DOT__test_parallel_trng_word__0__test_trng_parallel32__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_test_trng_parallel32__DOT__test_parallel_trng_word__0__collected_words;
    __Vtask_test_trng_parallel32__DOT__test_parallel_trng_word__0__collected_words = 0;
    // Body
    vlSelfRef.test_trng_parallel32__DOT__clk = 0U;
    vlSelfRef.test_trng_parallel32__DOT__rst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "test_parallel.sv", 
                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_trng_parallel32__DOT__rst = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "test_parallel.sv", 
                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Testing 32x parallel TRNG module...\n",0);
    __Vtask_test_trng_parallel32__DOT__test_parallel_trng_word__0__collected_words = 0U;
    vlSelfRef.test_trng_parallel32__DOT__trng_d1 = 0xaaaaaaaaU;
    vlSelfRef.test_trng_parallel32__DOT__trng_d2 = 0x55555555U;
    vlSelfRef.test_trng_parallel32__DOT__trng_d3 = 0x15U;
    vlSelfRef.test_trng_parallel32__DOT__rst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "test_parallel.sv", 
                                         53);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_trng_parallel32__DOT__rst = 0U;
    __Vtask_test_trng_parallel32__DOT__test_parallel_trng_word__0__test_trng_parallel32__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0x12cU;
    while (VL_LTS_III(32, 0U, __Vtask_test_trng_parallel32__DOT__test_parallel_trng_word__0__test_trng_parallel32__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h1c536a24__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge test_trng_parallel32.clk)", 
                                                             "test_parallel.sv", 
                                                             57);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_test_trng_parallel32__DOT__test_parallel_trng_word__0__test_trng_parallel32__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_test_trng_parallel32__DOT__test_parallel_trng_word__0__test_trng_parallel32__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    while (VL_GTS_III(32, 0xaU, __Vtask_test_trng_parallel32__DOT__test_parallel_trng_word__0__collected_words)) {
        co_await vlSelfRef.__VtrigSched_h1c536a24__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge test_trng_parallel32.clk)", 
                                                             "test_parallel.sv", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        if (VL_UNLIKELY((((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                          & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                             & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                   & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                      & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                         & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                            & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                               & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                  & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                     & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                        & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                           & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                              & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                                 & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                                    & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                                       & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                                          & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                                             & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                                                & ((IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3_ce) 
                                                                                & (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3_ce))))))))))))))))))))))))))))))))))) {
            VL_WRITEF_NX("Random Word [%0d]: 0x%08x at time %0t\n",0,
                         32,__Vtask_test_trng_parallel32__DOT__test_parallel_trng_word__0__collected_words,
                         32,(((((((0x2778a365U >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                  << 0x1fU) | (0x40000000U 
                                               & ((0x2778a365U 
                                                   >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                  << 0x1eU))) 
                                | ((0x20000000U & (
                                                   (0x2778a365U 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                   << 0x1dU)) 
                                   | (0x10000000U & 
                                      ((0x2778a365U 
                                        >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                       << 0x1cU)))) 
                               | (((0x8000000U & ((0x2778a365U 
                                                   >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                  << 0x1bU)) 
                                   | (0x4000000U & 
                                      ((0x2778a365U 
                                        >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                       << 0x1aU))) 
                                  | ((0x2000000U & 
                                      ((0x2778a365U 
                                        >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                       << 0x19U)) | 
                                     (0x1000000U & 
                                      ((0x2778a365U 
                                        >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                       << 0x18U))))) 
                              | ((((0x800000U & ((0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                 << 0x17U)) 
                                   | (0x400000U & (
                                                   (0x2778a365U 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                   << 0x16U))) 
                                  | ((0x200000U & (
                                                   (0x2778a365U 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                   << 0x15U)) 
                                     | (0x100000U & 
                                        ((0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                         << 0x14U)))) 
                                 | (((0x80000U & ((0x2778a365U 
                                                   >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                  << 0x13U)) 
                                     | (0x40000U & 
                                        ((0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                         << 0x12U))) 
                                    | ((0x20000U & 
                                        ((0x2778a365U 
                                          >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                         << 0x11U)) 
                                       | (0x10000U 
                                          & ((0x2778a365U 
                                              >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                             << 0x10U)))))) 
                             | (((((0x8000U & ((0x2778a365U 
                                                >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                               << 0xfU)) 
                                   | (0x4000U & ((0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                 << 0xeU))) 
                                  | ((0x2000U & ((0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                 << 0xdU)) 
                                     | (0x1000U & (
                                                   (0x2778a365U 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                   << 0xcU)))) 
                                 | (((0x800U & ((0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                << 0xbU)) 
                                     | (0x400U & ((0x2778a365U 
                                                   >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                  << 0xaU))) 
                                    | ((0x200U & ((0x2778a365U 
                                                   >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                  << 9U)) 
                                       | (0x100U & 
                                          ((0x2778a365U 
                                            >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                           << 8U))))) 
                                | ((((0x80U & ((0x2778a365U 
                                                >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                               << 7U)) 
                                     | (0x40U & ((0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                 << 6U))) 
                                    | ((0x20U & ((0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                 << 5U)) 
                                       | (0x10U & (
                                                   (0x2778a365U 
                                                    >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                   << 4U)))) 
                                   | (((8U & ((0x2778a365U 
                                               >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                              << 3U)) 
                                       | (4U & ((0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                << 2U))) 
                                      | ((2U & ((0x2778a365U 
                                                 >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)) 
                                                << 1U)) 
                                         | (1U & (0x2778a365U 
                                                  >> (IData)(vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst.__PVT__nlfsr3__DOT__C1)))))))),
                         64,VL_TIME_UNITED_Q(1000),
                         -9);
            __Vtask_test_trng_parallel32__DOT__test_parallel_trng_word__0__collected_words 
                = ((IData)(1U) + __Vtask_test_trng_parallel32__DOT__test_parallel_trng_word__0__collected_words);
        }
    }
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "test_parallel.sv", 
                                         85);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("32x TRNG test completed!\n",0);
    VL_FINISH_MT("test_parallel.sv", 87, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_parallel___024root___dump_triggers__act(Vtest_parallel___024root* vlSelf);
#endif  // VL_DEBUG

void Vtest_parallel___024root___eval_triggers__act(Vtest_parallel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_parallel___024root___eval_triggers__act\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.test_trng_parallel32__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__test_trng_parallel32__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.test_trng_parallel32__DOT__rst) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__test_trng_parallel32__DOT__rst__0))));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__test_trng_parallel32__DOT__clk__0 
        = vlSelfRef.test_trng_parallel32__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__test_trng_parallel32__DOT__rst__0 
        = vlSelfRef.test_trng_parallel32__DOT__rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtest_parallel___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf);
void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf);
void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf);
void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf);
void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf);
void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf);
void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf);
void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf);
void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf);
void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf);
void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf);
void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf);
void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf);
void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf);
void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf);
void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf);
void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf);
void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf);
void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf);
void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf);
void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf);
void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf);
void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf);
void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf);
void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf);
void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf);
void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf);
void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf);
void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf);
void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf);
void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf);
void Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst__0(Vtest_parallel_trng* vlSelf);
void Vtest_parallel___024root___nba_sequent__TOP__0(Vtest_parallel___024root* vlSelf);

void Vtest_parallel___024root___eval_nba(Vtest_parallel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_parallel___024root___eval_nba\n"); );
    Vtest_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__0__KET____DOT__trng_inst));
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__1__KET____DOT__trng_inst));
        Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__2__KET____DOT__trng_inst));
        Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__3__KET____DOT__trng_inst));
        Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__4__KET____DOT__trng_inst));
        Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__5__KET____DOT__trng_inst));
        Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__6__KET____DOT__trng_inst));
        Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__7__KET____DOT__trng_inst));
        Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__8__KET____DOT__trng_inst));
        Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__9__KET____DOT__trng_inst));
        Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__10__KET____DOT__trng_inst));
        Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__11__KET____DOT__trng_inst));
        Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__12__KET____DOT__trng_inst));
        Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__13__KET____DOT__trng_inst));
        Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__14__KET____DOT__trng_inst));
        Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__15__KET____DOT__trng_inst));
        Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__16__KET____DOT__trng_inst));
        Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__17__KET____DOT__trng_inst));
        Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__18__KET____DOT__trng_inst));
        Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__19__KET____DOT__trng_inst));
        Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__20__KET____DOT__trng_inst));
        Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__21__KET____DOT__trng_inst));
        Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__22__KET____DOT__trng_inst));
        Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__23__KET____DOT__trng_inst));
        Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__24__KET____DOT__trng_inst));
        Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__25__KET____DOT__trng_inst));
        Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__26__KET____DOT__trng_inst));
        Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__27__KET____DOT__trng_inst));
        Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__28__KET____DOT__trng_inst));
        Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__29__KET____DOT__trng_inst));
        Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__30__KET____DOT__trng_inst));
        Vtest_parallel_trng___nba_sequent__TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst__0((&vlSymsp->TOP__test_trng_parallel32__DOT__uut__DOT__trng_array__BRA__31__KET____DOT__trng_inst));
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtest_parallel___024root___nba_sequent__TOP__0(vlSelf);
    }
}
