// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_bitcollect.h for the primary calling header

#include "Vtest_bitcollect__pch.h"
#include "Vtest_bitcollect___024root.h"

VL_ATTR_COLD void Vtest_bitcollect___024root___eval_initial__TOP(Vtest_bitcollect___024root* vlSelf);
VlCoroutine Vtest_bitcollect___024root___eval_initial__TOP__Vtiming__0(Vtest_bitcollect___024root* vlSelf);
VlCoroutine Vtest_bitcollect___024root___eval_initial__TOP__Vtiming__1(Vtest_bitcollect___024root* vlSelf);

void Vtest_bitcollect___024root___eval_initial(Vtest_bitcollect___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bitcollect___024root___eval_initial\n"); );
    Vtest_bitcollect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtest_bitcollect___024root___eval_initial__TOP(vlSelf);
    Vtest_bitcollect___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtest_bitcollect___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__test_bitcollect__DOT__clk__0 
        = vlSelfRef.test_bitcollect__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__test_bitcollect__DOT__rst__0 
        = vlSelfRef.test_bitcollect__DOT__rst;
}

VL_INLINE_OPT VlCoroutine Vtest_bitcollect___024root___eval_initial__TOP__Vtiming__0(Vtest_bitcollect___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bitcollect___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtest_bitcollect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_test_bitcollect__DOT__test_trng_collector_operation__0__test_bitcollect__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_test_bitcollect__DOT__test_trng_collector_operation__0__test_bitcollect__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_test_bitcollect__DOT__test_trng_collector_operation__0__test_bitcollect__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_test_bitcollect__DOT__test_trng_collector_operation__0__test_bitcollect__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    // Body
    vlSelfRef.test_bitcollect__DOT__clk = 0U;
    vlSelfRef.test_bitcollect__DOT__rst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "test_bitcollect.sv", 
                                         88);
    vlSelfRef.test_bitcollect__DOT__rst = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "test_bitcollect.sv", 
                                         90);
    VL_WRITEF_NX("Testing TRNG + Bit Collector integration...\n",0);
    vlSelfRef.test_bitcollect__DOT__trng_d1 = 0U;
    vlSelfRef.test_bitcollect__DOT__trng_d2 = 1U;
    vlSelfRef.test_bitcollect__DOT__trng_d3 = 0x19U;
    vlSelfRef.test_bitcollect__DOT__rst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "test_bitcollect.sv", 
                                         62);
    vlSelfRef.test_bitcollect__DOT__rst = 0U;
    __Vtask_test_bitcollect__DOT__test_trng_collector_operation__0__test_bitcollect__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0xc8U;
    while (VL_LTS_III(32, 0U, __Vtask_test_bitcollect__DOT__test_trng_collector_operation__0__test_bitcollect__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge test_bitcollect.clk)", 
                                                             "test_bitcollect.sv", 
                                                             66);
        __Vtask_test_bitcollect__DOT__test_trng_collector_operation__0__test_bitcollect__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_test_bitcollect__DOT__test_trng_collector_operation__0__test_bitcollect__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_bitcollect.clk)", 
                                                         "test_bitcollect.sv", 
                                                         67);
    __Vtask_test_bitcollect__DOT__test_trng_collector_operation__0__test_bitcollect__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x3e8U;
    while (VL_LTS_III(32, 0U, __Vtask_test_bitcollect__DOT__test_trng_collector_operation__0__test_bitcollect__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        co_await vlSelfRef.__VtrigSched_hcc26aa21__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge test_bitcollect.clk)", 
                                                             "test_bitcollect.sv", 
                                                             70);
        __Vtask_test_bitcollect__DOT__test_trng_collector_operation__0__test_bitcollect__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (__Vtask_test_bitcollect__DOT__test_trng_collector_operation__0__test_bitcollect__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                         nullptr, "test_bitcollect.sv", 
                                         95);
    VL_WRITEF_NX("TRNG + Bit Collector test completed!\n",0);
    VL_FINISH_MT("test_bitcollect.sv", 97, "");
}

VL_INLINE_OPT VlCoroutine Vtest_bitcollect___024root___eval_initial__TOP__Vtiming__1(Vtest_bitcollect___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bitcollect___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtest_bitcollect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "test_bitcollect.sv", 
                                             11);
        vlSelfRef.__VdlyVal__test_bitcollect__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelfRef.test_bitcollect__DOT__clk)));
        vlSelfRef.__VdlySet__test_bitcollect__DOT__clk__v0 = 1U;
    }
}

void Vtest_bitcollect___024root___act_comb__TOP__0(Vtest_bitcollect___024root* vlSelf);

void Vtest_bitcollect___024root___eval_act(Vtest_bitcollect___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bitcollect___024root___eval_act\n"); );
    Vtest_bitcollect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((5ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtest_bitcollect___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtest_bitcollect___024root___act_comb__TOP__0(Vtest_bitcollect___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bitcollect___024root___act_comb__TOP__0\n"); );
    Vtest_bitcollect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__next_C5 
        = ((4U == (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__state))
            ? (IData)(vlSelfRef.test_bitcollect__DOT__trng_d3)
            : ((((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C1) 
                 ^ (((0x10U & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                               << 4U)) | ((8U & ((0x41fdc9dU 
                                                  >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C5)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   ((0x41fdc9dU 
                                                     >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C5)) 
                                                    ^ (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4)) 
                                                   << 2U)))) 
                    | (2U & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4) 
                             << 1U)))) ^ (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__s)) 
               ^ (1U & (0x41fdc9dU >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C5)))));
}

void Vtest_bitcollect___024root___nba_sequent__TOP__0(Vtest_bitcollect___024root* vlSelf);
void Vtest_bitcollect___024root___nba_sequent__TOP__1(Vtest_bitcollect___024root* vlSelf);
void Vtest_bitcollect___024root___nba_sequent__TOP__2(Vtest_bitcollect___024root* vlSelf);
void Vtest_bitcollect___024root___nba_sequent__TOP__3(Vtest_bitcollect___024root* vlSelf);

void Vtest_bitcollect___024root___eval_nba(Vtest_bitcollect___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bitcollect___024root___eval_nba\n"); );
    Vtest_bitcollect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtest_bitcollect___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtest_bitcollect___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtest_bitcollect___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtest_bitcollect___024root___nba_sequent__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtest_bitcollect___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtest_bitcollect___024root___nba_sequent__TOP__0(Vtest_bitcollect___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bitcollect___024root___nba_sequent__TOP__0\n"); );
    Vtest_bitcollect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__state;
    __Vdly__test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__state = 0;
    CData/*5:0*/ __Vdly__test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__cnt;
    __Vdly__test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__cnt = 0;
    // Body
    __Vdly__test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__cnt 
        = vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__cnt;
    __Vdly__test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__state 
        = vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__state;
    vlSelfRef.__Vdly__test_bitcollect__DOT__collector__DOT__shift_reg 
        = vlSelfRef.test_bitcollect__DOT__collector__DOT__shift_reg;
    vlSelfRef.__Vdly__test_bitcollect__DOT__collector__DOT__bit_count 
        = vlSelfRef.test_bitcollect__DOT__collector__DOT__bit_count;
    if (vlSelfRef.test_bitcollect__DOT__rst) {
        vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__s = 0U;
        __Vdly__test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__state = 4U;
        __Vdly__test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__cnt = 0U;
        vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__a = 0U;
        vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr2__DOT__b = 0U;
        vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C0 = 0U;
    } else {
        vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__s 
            = ((0x1eU & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__s) 
                         << 1U)) | (1U & (vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__a 
                                          ^ (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr2__DOT__b))));
        if ((4U == (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__state))) {
            if ((0x11U == (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__cnt))) {
                __Vdly__test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__state = 2U;
                __Vdly__test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__cnt 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__cnt)));
                __Vdly__test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__state = 4U;
            }
        } else if ((2U == (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__state))) {
            if ((0x23U == (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__cnt))) {
                __Vdly__test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__state = 1U;
                __Vdly__test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__cnt = 0U;
            } else {
                __Vdly__test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__cnt 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__cnt)));
                __Vdly__test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__state))) {
            __Vdly__test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__cnt 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__cnt)));
            __Vdly__test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__state = 1U;
        } else {
            __Vdly__test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__state = 4U;
            __Vdly__test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__cnt = 0U;
        }
        vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__a 
            = ((((4U == (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__state))
                  ? (IData)(vlSelfRef.test_bitcollect__DOT__trng_d1)
                  : ((2U == (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__state))
                      ? ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3_ce) 
                         & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__mux1_in) 
                            ^ (0x2778a365U >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C1))))
                      : (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__mux1_in))) 
                << 0x10U) | (0xffffU & (vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__a 
                                        >> 1U)));
        vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr2__DOT__b 
            = ((((4U == (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__state))
                  ? (IData)(vlSelfRef.test_bitcollect__DOT__trng_d2)
                  : ((2U == (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__state))
                      ? ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3_ce) 
                         & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr2__DOT__mux1_in) 
                            ^ (0x2778a365U >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C1))))
                      : (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr2__DOT__mux1_in))) 
                << 0xfU) | (0x7fffU & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr2__DOT__b) 
                                       >> 1U)));
        if (vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3_ce) {
            vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C0 
                = vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C1;
        }
    }
    vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__cnt 
        = __Vdly__test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__cnt;
    vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__state 
        = __Vdly__test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__state;
    vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__mux1_in 
        = (1U & (vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__a 
                 ^ (0x2778a365U >> (((0x10U & (vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__a 
                                               >> 0xbU)) 
                                     | (8U & (vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__a 
                                              >> 7U))) 
                                    | ((6U & (vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__a 
                                              >> 6U)) 
                                       | (1U & (vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr1__DOT__a 
                                                >> 4U)))))));
    vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr2__DOT__mux1_in 
        = (1U & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr2__DOT__b) 
                 ^ (0x2778a365U >> ((0x10U & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr2__DOT__b) 
                                              >> 8U)) 
                                    | ((0xeU & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr2__DOT__b) 
                                                >> 6U)) 
                                       | (1U & ((IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr2__DOT__b) 
                                                >> 4U)))))));
}

VL_INLINE_OPT void Vtest_bitcollect___024root___nba_sequent__TOP__1(Vtest_bitcollect___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bitcollect___024root___nba_sequent__TOP__1\n"); );
    Vtest_bitcollect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.test_bitcollect__DOT__byte_ready))) {
        VL_WRITEF_NX("Collected Byte: 0x%02x at time %0t\n",0,
                     8,vlSelfRef.test_bitcollect__DOT__rand_byte,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
}

VL_INLINE_OPT void Vtest_bitcollect___024root___nba_sequent__TOP__2(Vtest_bitcollect___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bitcollect___024root___nba_sequent__TOP__2\n"); );
    Vtest_bitcollect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__test_bitcollect__DOT__clk__v0) {
        vlSelfRef.__VdlySet__test_bitcollect__DOT__clk__v0 = 0U;
        vlSelfRef.test_bitcollect__DOT__clk = vlSelfRef.__VdlyVal__test_bitcollect__DOT__clk__v0;
    }
}

VL_INLINE_OPT void Vtest_bitcollect___024root___nba_sequent__TOP__3(Vtest_bitcollect___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bitcollect___024root___nba_sequent__TOP__3\n"); );
    Vtest_bitcollect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.test_bitcollect__DOT__rst) {
        vlSelfRef.__Vdly__test_bitcollect__DOT__collector__DOT__shift_reg = 0U;
        vlSelfRef.__Vdly__test_bitcollect__DOT__collector__DOT__bit_count = 0U;
        vlSelfRef.test_bitcollect__DOT__rand_byte = 0U;
        vlSelfRef.test_bitcollect__DOT__byte_ready = 0U;
        vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C1 = 0U;
        vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C2 = 0U;
        vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C3 = 0U;
        vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C4 = 0U;
        vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C5 = 0U;
    } else if (vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3_ce) {
        vlSelfRef.__Vdly__test_bitcollect__DOT__collector__DOT__shift_reg 
            = ((0xfeU & ((IData)(vlSelfRef.test_bitcollect__DOT__collector__DOT__shift_reg) 
                         << 1U)) | (1U & (0x2778a365U 
                                          >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C1))));
        vlSelfRef.__Vdly__test_bitcollect__DOT__collector__DOT__bit_count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.test_bitcollect__DOT__collector__DOT__bit_count)));
        if ((7U == (IData)(vlSelfRef.test_bitcollect__DOT__collector__DOT__bit_count))) {
            vlSelfRef.test_bitcollect__DOT__rand_byte 
                = ((0xfeU & ((IData)(vlSelfRef.test_bitcollect__DOT__collector__DOT__shift_reg) 
                             << 1U)) | (1U & (0x2778a365U 
                                              >> (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C1))));
            vlSelfRef.test_bitcollect__DOT__byte_ready = 1U;
            vlSelfRef.__Vdly__test_bitcollect__DOT__collector__DOT__bit_count = 0U;
        } else {
            vlSelfRef.test_bitcollect__DOT__byte_ready = 0U;
        }
        vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C1 
            = vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C2;
        vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C2 
            = vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C3;
        vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C3 
            = vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C4;
        vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C4 
            = vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C5;
        vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__C5 
            = vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__next_C5;
    } else {
        vlSelfRef.test_bitcollect__DOT__byte_ready = 0U;
    }
    vlSelfRef.test_bitcollect__DOT__collector__DOT__shift_reg 
        = vlSelfRef.__Vdly__test_bitcollect__DOT__collector__DOT__shift_reg;
    vlSelfRef.test_bitcollect__DOT__collector__DOT__bit_count 
        = vlSelfRef.__Vdly__test_bitcollect__DOT__collector__DOT__bit_count;
    vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3_ce 
        = ((4U == (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__state)) 
           || ((2U == (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__state))
                ? (0U != (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__cnt))
                : (4U == (0x3fU & VL_MODDIV_III(6, (IData)(vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__fsm__DOT__cnt), (IData)(5U))))));
    vlSelfRef.test_bitcollect__DOT__trng_inst__DOT__nlfsr3__DOT__gamma_mult_inst__DOT____VdfgRegularize_hb2e29eae_0_4 = 0U;
}

void Vtest_bitcollect___024root___timing_resume(Vtest_bitcollect___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bitcollect___024root___timing_resume\n"); );
    Vtest_bitcollect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hcc26aa21__0.resume(
                                                   "@(posedge test_bitcollect.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtest_bitcollect___024root___timing_commit(Vtest_bitcollect___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bitcollect___024root___timing_commit\n"); );
    Vtest_bitcollect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hcc26aa21__0.commit(
                                                   "@(posedge test_bitcollect.clk)");
    }
}

void Vtest_bitcollect___024root___eval_triggers__act(Vtest_bitcollect___024root* vlSelf);

bool Vtest_bitcollect___024root___eval_phase__act(Vtest_bitcollect___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bitcollect___024root___eval_phase__act\n"); );
    Vtest_bitcollect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtest_bitcollect___024root___eval_triggers__act(vlSelf);
    Vtest_bitcollect___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtest_bitcollect___024root___timing_resume(vlSelf);
        Vtest_bitcollect___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtest_bitcollect___024root___eval_phase__nba(Vtest_bitcollect___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bitcollect___024root___eval_phase__nba\n"); );
    Vtest_bitcollect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtest_bitcollect___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_bitcollect___024root___dump_triggers__nba(Vtest_bitcollect___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_bitcollect___024root___dump_triggers__act(Vtest_bitcollect___024root* vlSelf);
#endif  // VL_DEBUG

void Vtest_bitcollect___024root___eval(Vtest_bitcollect___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bitcollect___024root___eval\n"); );
    Vtest_bitcollect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtest_bitcollect___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("test_bitcollect.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtest_bitcollect___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("test_bitcollect.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtest_bitcollect___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtest_bitcollect___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtest_bitcollect___024root___eval_debug_assertions(Vtest_bitcollect___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bitcollect___024root___eval_debug_assertions\n"); );
    Vtest_bitcollect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
