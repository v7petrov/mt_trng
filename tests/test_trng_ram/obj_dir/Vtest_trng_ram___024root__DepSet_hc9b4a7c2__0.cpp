// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_trng_ram.h for the primary calling header

#include "Vtest_trng_ram__pch.h"
#include "Vtest_trng_ram___024root.h"

VL_ATTR_COLD void Vtest_trng_ram___024root___eval_initial__TOP(Vtest_trng_ram___024root* vlSelf);
VlCoroutine Vtest_trng_ram___024root___eval_initial__TOP__Vtiming__0(Vtest_trng_ram___024root* vlSelf);
VlCoroutine Vtest_trng_ram___024root___eval_initial__TOP__Vtiming__1(Vtest_trng_ram___024root* vlSelf);

void Vtest_trng_ram___024root___eval_initial(Vtest_trng_ram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng_ram___024root___eval_initial\n"); );
    Vtest_trng_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtest_trng_ram___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtest_trng_ram___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtest_trng_ram___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__test_rng_ram__DOT__clk__0 
        = vlSelfRef.test_rng_ram__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__test_rng_ram__DOT__rst__0 
        = vlSelfRef.test_rng_ram__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__test_rng_ram__DOT__ack_rng__0 
        = vlSelfRef.test_rng_ram__DOT__ack_rng;
    vlSelfRef.__Vtrigprevexpr_h103354b3__0 = ((IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_accessed_ram1_reg) 
                                              | (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_accessed_ram2_reg));
}

VL_INLINE_OPT VlCoroutine Vtest_trng_ram___024root___eval_initial__TOP__Vtiming__1(Vtest_trng_ram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng_ram___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtest_trng_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "test_trng_ram.sv", 
                                             10);
        vlSelfRef.__VdlyVal__test_rng_ram__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelfRef.test_rng_ram__DOT__clk)));
        vlSelfRef.__VdlySet__test_rng_ram__DOT__clk__v0 = 1U;
    }
}

void Vtest_trng_ram___024root___act_comb__TOP__0(Vtest_trng_ram___024root* vlSelf);

void Vtest_trng_ram___024root___eval_act(Vtest_trng_ram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng_ram___024root___eval_act\n"); );
    Vtest_trng_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x1dULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtest_trng_ram___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtest_trng_ram___024root___nba_sequent__TOP__0(Vtest_trng_ram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng_ram___024root___nba_sequent__TOP__0\n"); );
    Vtest_trng_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__test_rng_ram__DOT__dut__DOT__ram__DOT__port_choice;
    __Vdly__test_rng_ram__DOT__dut__DOT__ram__DOT__port_choice = 0;
    CData/*7:0*/ __VdlyVal__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v0;
    __VdlyVal__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v0 = 0;
    CData/*7:0*/ __VdlyDim0__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v0;
    __VdlyDim0__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v0 = 0;
    CData/*0:0*/ __VdlySet__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v0;
    __VdlySet__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v0 = 0;
    CData/*7:0*/ __VdlyVal__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v1;
    __VdlyVal__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v1 = 0;
    CData/*7:0*/ __VdlyDim0__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v1;
    __VdlyDim0__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v1 = 0;
    CData/*0:0*/ __VdlySet__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v1;
    __VdlySet__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v1 = 0;
    CData/*7:0*/ __VdlyVal__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v2;
    __VdlyVal__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v2 = 0;
    CData/*7:0*/ __VdlyDim0__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v2;
    __VdlyDim0__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v2 = 0;
    CData/*0:0*/ __VdlySet__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v2;
    __VdlySet__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v2 = 0;
    CData/*7:0*/ __VdlyVal__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v3;
    __VdlyVal__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v3 = 0;
    CData/*7:0*/ __VdlyDim0__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v3;
    __VdlyDim0__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v3 = 0;
    CData/*0:0*/ __VdlySet__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v3;
    __VdlySet__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v3 = 0;
    CData/*7:0*/ __VdlyVal__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v0;
    __VdlyVal__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v0 = 0;
    CData/*7:0*/ __VdlyDim0__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v0;
    __VdlyDim0__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v0 = 0;
    CData/*0:0*/ __VdlySet__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v0;
    __VdlySet__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v0 = 0;
    CData/*7:0*/ __VdlyVal__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v1;
    __VdlyVal__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v1 = 0;
    CData/*7:0*/ __VdlyDim0__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v1;
    __VdlyDim0__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v1 = 0;
    CData/*0:0*/ __VdlySet__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v1;
    __VdlySet__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v1 = 0;
    CData/*7:0*/ __VdlyVal__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v2;
    __VdlyVal__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v2 = 0;
    CData/*7:0*/ __VdlyDim0__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v2;
    __VdlyDim0__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v2 = 0;
    CData/*0:0*/ __VdlySet__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v2;
    __VdlySet__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v2 = 0;
    CData/*7:0*/ __VdlyVal__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v3;
    __VdlyVal__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v3 = 0;
    CData/*7:0*/ __VdlyDim0__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v3;
    __VdlyDim0__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v3 = 0;
    CData/*0:0*/ __VdlySet__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v3;
    __VdlySet__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v3 = 0;
    // Body
    __VdlySet__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v0 = 0U;
    __VdlySet__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v1 = 0U;
    __VdlySet__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v2 = 0U;
    __VdlySet__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v3 = 0U;
    __VdlySet__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v0 = 0U;
    __VdlySet__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v1 = 0U;
    __VdlySet__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v2 = 0U;
    __VdlySet__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v3 = 0U;
    __Vdly__test_rng_ram__DOT__dut__DOT__ram__DOT__port_choice 
        = vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__port_choice;
    if ((1U & (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_we))) {
        __VdlyVal__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v0 
            = (0xffU & vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_din);
        __VdlyDim0__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v0 
            = vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_addy;
        __VdlySet__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v0 = 1U;
    }
    if ((2U & (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_we))) {
        __VdlyVal__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v1 
            = (0xffU & (vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_din 
                        >> 8U));
        __VdlyDim0__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v1 
            = vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_addy;
        __VdlySet__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v1 = 1U;
    }
    if ((4U & (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_we))) {
        __VdlyVal__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v2 
            = (0xffU & (vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_din 
                        >> 0x10U));
        __VdlyDim0__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v2 
            = vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_addy;
        __VdlySet__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v2 = 1U;
    }
    if ((8U & (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_we))) {
        __VdlyVal__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v3 
            = (vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_din 
               >> 0x18U);
        __VdlyDim0__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v3 
            = vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_addy;
        __VdlySet__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v3 = 1U;
    }
    if ((1U & (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_we))) {
        __VdlyVal__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v0 
            = (0xffU & vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_din);
        __VdlyDim0__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v0 
            = vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_addy;
        __VdlySet__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v0 = 1U;
    }
    if ((2U & (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_we))) {
        __VdlyVal__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v1 
            = (0xffU & (vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_din 
                        >> 8U));
        __VdlyDim0__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v1 
            = vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_addy;
        __VdlySet__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v1 = 1U;
    }
    if ((4U & (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_we))) {
        __VdlyVal__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v2 
            = (0xffU & (vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_din 
                        >> 0x10U));
        __VdlyDim0__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v2 
            = vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_addy;
        __VdlySet__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v2 = 1U;
    }
    if ((8U & (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_we))) {
        __VdlyVal__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v3 
            = (vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_din 
               >> 0x18U);
        __VdlyDim0__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v3 
            = vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_addy;
        __VdlySet__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v3 = 1U;
    }
    if (vlSelfRef.test_rng_ram__DOT__rst) {
        __Vdly__test_rng_ram__DOT__dut__DOT__ram__DOT__port_choice = 0U;
    } else if ((((IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__req_same) 
                 & (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__pA_we_sel)) 
                & (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_valid_req))) {
        __Vdly__test_rng_ram__DOT__dut__DOT__ram__DOT__port_choice 
            = (1U & (~ (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__port_choice)));
    }
    vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_dout 
        = vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM
        [vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_addy];
    vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_dout 
        = vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM
        [vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_addy];
    vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pA_accessed_ram1_reg 
        = ((1U & (~ (IData)(vlSelfRef.test_rng_ram__DOT__rst))) 
           && (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pA_access_ram1));
    vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pA_accessed_ram2_reg 
        = ((1U & (~ (IData)(vlSelfRef.test_rng_ram__DOT__rst))) 
           && (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pA_access_ram2));
    vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_accessed_ram1_reg 
        = ((1U & (~ (IData)(vlSelfRef.test_rng_ram__DOT__rst))) 
           && (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_access_ram1));
    vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_accessed_ram2_reg 
        = ((1U & (~ (IData)(vlSelfRef.test_rng_ram__DOT__rst))) 
           && (IData)(vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_access_ram2));
    vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__port_choice 
        = __Vdly__test_rng_ram__DOT__dut__DOT__ram__DOT__port_choice;
    if (__VdlySet__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v0) {
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM[__VdlyDim0__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v0] 
            = ((0xffffff00U & vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM
                [__VdlyDim0__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v0]) 
               | (IData)(__VdlyVal__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v0));
    }
    if (__VdlySet__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v1) {
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM[__VdlyDim0__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v1] 
            = ((0xffff00ffU & vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM
                [__VdlyDim0__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v1]) 
               | ((IData)(__VdlyVal__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v1) 
                  << 8U));
    }
    if (__VdlySet__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v2) {
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM[__VdlyDim0__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v2] 
            = ((0xff00ffffU & vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM
                [__VdlyDim0__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v2]) 
               | ((IData)(__VdlyVal__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v2) 
                  << 0x10U));
    }
    if (__VdlySet__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v3) {
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM[__VdlyDim0__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v3] 
            = ((0xffffffU & vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM
                [__VdlyDim0__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v3]) 
               | ((IData)(__VdlyVal__test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM__v3) 
                  << 0x18U));
    }
    if (__VdlySet__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v0) {
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM[__VdlyDim0__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v0] 
            = ((0xffffff00U & vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM
                [__VdlyDim0__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v0]) 
               | (IData)(__VdlyVal__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v0));
    }
    if (__VdlySet__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v1) {
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM[__VdlyDim0__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v1] 
            = ((0xffff00ffU & vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM
                [__VdlyDim0__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v1]) 
               | ((IData)(__VdlyVal__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v1) 
                  << 8U));
    }
    if (__VdlySet__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v2) {
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM[__VdlyDim0__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v2] 
            = ((0xff00ffffU & vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM
                [__VdlyDim0__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v2]) 
               | ((IData)(__VdlyVal__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v2) 
                  << 0x10U));
    }
    if (__VdlySet__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v3) {
        vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM[__VdlyDim0__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v3] 
            = ((0xffffffU & vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM
                [__VdlyDim0__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v3]) 
               | ((IData)(__VdlyVal__test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM__v3) 
                  << 0x18U));
    }
    vlSelfRef.test_rng_ram__DOT__pA_wb_data_o = 0U;
    if (vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pA_accessed_ram1_reg) {
        vlSelfRef.test_rng_ram__DOT__pA_wb_data_o = vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_dout;
    } else if (vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pA_accessed_ram2_reg) {
        vlSelfRef.test_rng_ram__DOT__pA_wb_data_o = vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_dout;
    }
    vlSelfRef.test_rng_ram__DOT__pB_wb_data_o = 0U;
    if (vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_accessed_ram1_reg) {
        vlSelfRef.test_rng_ram__DOT__pB_wb_data_o = vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_dout;
    } else if (vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_accessed_ram2_reg) {
        vlSelfRef.test_rng_ram__DOT__pB_wb_data_o = vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_dout;
    }
}

VL_INLINE_OPT void Vtest_trng_ram___024root___nba_sequent__TOP__2(Vtest_trng_ram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng_ram___024root___nba_sequent__TOP__2\n"); );
    Vtest_trng_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__test_rng_ram__DOT__clk__v0) {
        vlSelfRef.__VdlySet__test_rng_ram__DOT__clk__v0 = 0U;
        vlSelfRef.test_rng_ram__DOT__clk = vlSelfRef.__VdlyVal__test_rng_ram__DOT__clk__v0;
    }
}

VL_INLINE_OPT void Vtest_trng_ram___024root___nba_comb__TOP__0(Vtest_trng_ram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng_ram___024root___nba_comb__TOP__0\n"); );
    Vtest_trng_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.test_rng_ram__DOT__dut__DOT__ram__DOT__pB_valid_req 
        = ((IData)(vlSelfRef.test_rng_ram__DOT__pB_wb_cyc_i) 
           & (IData)(vlSelfRef.test_rng_ram__DOT__pB_wb_stb_i));
}

void Vtest_trng_ram___024root___timing_resume(Vtest_trng_ram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng_ram___024root___timing_resume\n"); );
    Vtest_trng_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h932be142__0.resume(
                                                   "@(posedge test_rng_ram.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_ha5d3732f__0.resume(
                                                   "@( test_rng_ram.ack_rng)");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h98049acd__0.resume(
                                                   "@( (test_rng_ram.dut.ram.pB_accessed_ram1_reg | test_rng_ram.dut.ram.pB_accessed_ram2_reg))");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtest_trng_ram___024root___timing_commit(Vtest_trng_ram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng_ram___024root___timing_commit\n"); );
    Vtest_trng_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h932be142__0.commit(
                                                   "@(posedge test_rng_ram.clk)");
    }
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_ha5d3732f__0.commit(
                                                   "@( test_rng_ram.ack_rng)");
    }
    if ((! (0x10ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h98049acd__0.commit(
                                                   "@( (test_rng_ram.dut.ram.pB_accessed_ram1_reg | test_rng_ram.dut.ram.pB_accessed_ram2_reg))");
    }
}

void Vtest_trng_ram___024root___eval_triggers__act(Vtest_trng_ram___024root* vlSelf);

bool Vtest_trng_ram___024root___eval_phase__act(Vtest_trng_ram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng_ram___024root___eval_phase__act\n"); );
    Vtest_trng_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtest_trng_ram___024root___eval_triggers__act(vlSelf);
    Vtest_trng_ram___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtest_trng_ram___024root___timing_resume(vlSelf);
        Vtest_trng_ram___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vtest_trng_ram___024root___eval_nba(Vtest_trng_ram___024root* vlSelf);

bool Vtest_trng_ram___024root___eval_phase__nba(Vtest_trng_ram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng_ram___024root___eval_phase__nba\n"); );
    Vtest_trng_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtest_trng_ram___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_trng_ram___024root___dump_triggers__nba(Vtest_trng_ram___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_trng_ram___024root___dump_triggers__act(Vtest_trng_ram___024root* vlSelf);
#endif  // VL_DEBUG

void Vtest_trng_ram___024root___eval(Vtest_trng_ram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng_ram___024root___eval\n"); );
    Vtest_trng_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtest_trng_ram___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("test_trng_ram.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtest_trng_ram___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("test_trng_ram.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtest_trng_ram___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtest_trng_ram___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtest_trng_ram___024root___eval_debug_assertions(Vtest_trng_ram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng_ram___024root___eval_debug_assertions\n"); );
    Vtest_trng_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
