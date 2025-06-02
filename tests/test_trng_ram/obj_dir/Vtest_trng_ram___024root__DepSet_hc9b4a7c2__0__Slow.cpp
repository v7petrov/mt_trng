// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_trng_ram.h for the primary calling header

#include "Vtest_trng_ram__pch.h"
#include "Vtest_trng_ram___024root.h"

VL_ATTR_COLD void Vtest_trng_ram___024root___eval_static(Vtest_trng_ram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng_ram___024root___eval_static\n"); );
    Vtest_trng_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtest_trng_ram___024root___eval_final(Vtest_trng_ram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng_ram___024root___eval_final\n"); );
    Vtest_trng_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_trng_ram___024root___dump_triggers__stl(Vtest_trng_ram___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtest_trng_ram___024root___eval_phase__stl(Vtest_trng_ram___024root* vlSelf);

VL_ATTR_COLD void Vtest_trng_ram___024root___eval_settle(Vtest_trng_ram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng_ram___024root___eval_settle\n"); );
    Vtest_trng_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtest_trng_ram___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("test_trng_ram.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtest_trng_ram___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_trng_ram___024root___dump_triggers__stl(Vtest_trng_ram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng_ram___024root___dump_triggers__stl\n"); );
    Vtest_trng_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vtest_trng_ram___024root___eval_triggers__stl(Vtest_trng_ram___024root* vlSelf);
VL_ATTR_COLD void Vtest_trng_ram___024root___eval_stl(Vtest_trng_ram___024root* vlSelf);

VL_ATTR_COLD bool Vtest_trng_ram___024root___eval_phase__stl(Vtest_trng_ram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng_ram___024root___eval_phase__stl\n"); );
    Vtest_trng_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtest_trng_ram___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtest_trng_ram___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_trng_ram___024root___dump_triggers__act(Vtest_trng_ram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng_ram___024root___dump_triggers__act\n"); );
    Vtest_trng_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge test_rng_ram.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge test_rng_ram.rst)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @( test_rng_ram.ack_rng)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @( (test_rng_ram.dut.ram.pB_accessed_ram1_reg | test_rng_ram.dut.ram.pB_accessed_ram2_reg))\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_trng_ram___024root___dump_triggers__nba(Vtest_trng_ram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng_ram___024root___dump_triggers__nba\n"); );
    Vtest_trng_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge test_rng_ram.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge test_rng_ram.rst)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @( test_rng_ram.ack_rng)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @( (test_rng_ram.dut.ram.pB_accessed_ram1_reg | test_rng_ram.dut.ram.pB_accessed_ram2_reg))\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtest_trng_ram___024root____Vm_traceActivitySetAll(Vtest_trng_ram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng_ram___024root____Vm_traceActivitySetAll\n"); );
    Vtest_trng_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
}

VL_ATTR_COLD void Vtest_trng_ram___024root___ctor_var_reset(Vtest_trng_ram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_trng_ram___024root___ctor_var_reset\n"); );
    Vtest_trng_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->test_rng_ram__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->test_rng_ram__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->test_rng_ram__DOT__pA_wb_cyc_i = VL_RAND_RESET_I(1);
    vlSelf->test_rng_ram__DOT__pA_wb_stb_i = VL_RAND_RESET_I(1);
    vlSelf->test_rng_ram__DOT__pA_wb_we_i = VL_RAND_RESET_I(4);
    vlSelf->test_rng_ram__DOT__pA_wb_addr_i = VL_RAND_RESET_I(9);
    vlSelf->test_rng_ram__DOT__pA_wb_data_i = VL_RAND_RESET_I(32);
    vlSelf->test_rng_ram__DOT__pA_wb_data_o = VL_RAND_RESET_I(32);
    vlSelf->test_rng_ram__DOT__pB_wb_cyc_i = VL_RAND_RESET_I(1);
    vlSelf->test_rng_ram__DOT__pB_wb_stb_i = VL_RAND_RESET_I(1);
    vlSelf->test_rng_ram__DOT__pB_wb_we_i = VL_RAND_RESET_I(4);
    vlSelf->test_rng_ram__DOT__pB_wb_addr_i = VL_RAND_RESET_I(9);
    vlSelf->test_rng_ram__DOT__pB_wb_data_i = VL_RAND_RESET_I(32);
    vlSelf->test_rng_ram__DOT__pB_wb_data_o = VL_RAND_RESET_I(32);
    vlSelf->test_rng_ram__DOT__we_rng = VL_RAND_RESET_I(1);
    vlSelf->test_rng_ram__DOT__addr_rng = VL_RAND_RESET_I(9);
    vlSelf->test_rng_ram__DOT__ack_rng = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->test_rng_ram__DOT__golden_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->test_rng_ram__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->test_rng_ram__DOT__dut__DOT__rng_write_active = VL_RAND_RESET_I(1);
    vlSelf->test_rng_ram__DOT__dut__DOT__rng_written = VL_RAND_RESET_I(1);
    vlSelf->test_rng_ram__DOT__dut__DOT__rng_write_strobe = VL_RAND_RESET_I(1);
    vlSelf->test_rng_ram__DOT__dut__DOT__pA_we_sel = VL_RAND_RESET_I(1);
    vlSelf->test_rng_ram__DOT__dut__DOT__pA_we_final = VL_RAND_RESET_I(4);
    vlSelf->test_rng_ram__DOT__dut__DOT__pA_addr_final = VL_RAND_RESET_I(9);
    vlSelf->test_rng_ram__DOT__dut__DOT__pA_data_final = VL_RAND_RESET_I(32);
    vlSelf->test_rng_ram__DOT__dut__DOT__rng_gen__DOT__o_valid_bus = VL_RAND_RESET_I(32);
    vlSelf->test_rng_ram__DOT__dut__DOT__ram__DOT__req_same = VL_RAND_RESET_I(1);
    vlSelf->test_rng_ram__DOT__dut__DOT__ram__DOT__pB_valid_req = VL_RAND_RESET_I(1);
    vlSelf->test_rng_ram__DOT__dut__DOT__ram__DOT__port_choice = VL_RAND_RESET_I(1);
    vlSelf->test_rng_ram__DOT__dut__DOT__ram__DOT__pA_access_ram1 = VL_RAND_RESET_I(1);
    vlSelf->test_rng_ram__DOT__dut__DOT__ram__DOT__pA_access_ram2 = VL_RAND_RESET_I(1);
    vlSelf->test_rng_ram__DOT__dut__DOT__ram__DOT__pB_access_ram1 = VL_RAND_RESET_I(1);
    vlSelf->test_rng_ram__DOT__dut__DOT__ram__DOT__pB_access_ram2 = VL_RAND_RESET_I(1);
    vlSelf->test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_we = VL_RAND_RESET_I(4);
    vlSelf->test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_addy = VL_RAND_RESET_I(8);
    vlSelf->test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_din = VL_RAND_RESET_I(32);
    vlSelf->test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_we = VL_RAND_RESET_I(4);
    vlSelf->test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_addy = VL_RAND_RESET_I(8);
    vlSelf->test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_din = VL_RAND_RESET_I(32);
    vlSelf->test_rng_ram__DOT__dut__DOT__ram__DOT__ram1_dout = VL_RAND_RESET_I(32);
    vlSelf->test_rng_ram__DOT__dut__DOT__ram__DOT__ram2_dout = VL_RAND_RESET_I(32);
    vlSelf->test_rng_ram__DOT__dut__DOT__ram__DOT__pA_accessed_ram1_reg = VL_RAND_RESET_I(1);
    vlSelf->test_rng_ram__DOT__dut__DOT__ram__DOT__pA_accessed_ram2_reg = VL_RAND_RESET_I(1);
    vlSelf->test_rng_ram__DOT__dut__DOT__ram__DOT__pB_accessed_ram1_reg = VL_RAND_RESET_I(1);
    vlSelf->test_rng_ram__DOT__dut__DOT__ram__DOT__pB_accessed_ram2_reg = VL_RAND_RESET_I(1);
    vlSelf->test_rng_ram__DOT__dut__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_2 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->test_rng_ram__DOT__dut__DOT__ram__DOT__ram1__DOT__RAM[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->test_rng_ram__DOT__dut__DOT__ram__DOT__ram2__DOT__RAM[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__VdlyVal__test_rng_ram__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__test_rng_ram__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__test_rng_ram__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__test_rng_ram__DOT__rst__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__test_rng_ram__DOT__ack_rng__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h103354b3__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
