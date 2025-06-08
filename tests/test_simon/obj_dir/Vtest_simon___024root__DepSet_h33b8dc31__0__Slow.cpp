// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simon.h for the primary calling header

#include "Vtest_simon__pch.h"
#include "Vtest_simon___024root.h"

VL_ATTR_COLD void Vtest_simon___024root___eval_static(Vtest_simon___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simon___024root___eval_static\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtest_simon___024root___eval_final(Vtest_simon___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simon___024root___eval_final\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_simon___024root___dump_triggers__stl(Vtest_simon___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtest_simon___024root___eval_phase__stl(Vtest_simon___024root* vlSelf);

VL_ATTR_COLD void Vtest_simon___024root___eval_settle(Vtest_simon___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simon___024root___eval_settle\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtest_simon___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("test_simon.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtest_simon___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_simon___024root___dump_triggers__stl(Vtest_simon___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simon___024root___dump_triggers__stl\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vtest_simon___024root___stl_sequent__TOP__0(Vtest_simon___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simon___024root___stl_sequent__TOP__0\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ test_simon__DOT__dut__DOT__cipher__DOT____VdfgRegularize_h6dc09aa5_0_4;
    test_simon__DOT__dut__DOT__cipher__DOT____VdfgRegularize_h6dc09aa5_0_4 = 0;
    // Body
    vlSelfRef.test_simon__DOT__dut__DOT__next_simon_en = 0U;
    vlSelfRef.test_simon__DOT__dut__DOT__pA_data_out = 0U;
    if (vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__pA_accessed_ram1_reg) {
        vlSelfRef.test_simon__DOT__dut__DOT__pA_data_out 
            = vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__ram1_dout;
    } else if (vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__pA_accessed_ram2_reg) {
        vlSelfRef.test_simon__DOT__dut__DOT__pA_data_out 
            = vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__ram2_dout;
    }
    vlSelfRef.test_simon__DOT__dut__DOT__pB_data_out = 0U;
    if (vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__pB_accessed_ram1_reg) {
        vlSelfRef.test_simon__DOT__dut__DOT__pB_data_out 
            = vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__ram1_dout;
    } else if (vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__pB_accessed_ram2_reg) {
        vlSelfRef.test_simon__DOT__dut__DOT__pB_data_out 
            = vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__ram2_dout;
    }
    vlSelfRef.test_simon__DOT__dut__DOT__pB_ack = ((IData)(vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__pB_accessed_ram1_reg) 
                                                   | (IData)(vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__pB_accessed_ram2_reg));
    vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__next_state 
        = ((IData)(vlSelfRef.test_simon__DOT__rst) ? 0U
            : (((0U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state)) 
                & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__simon_en_reg))
                ? 1U : ((1U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state))
                         ? 2U : (((2U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state)) 
                                  & (0x1fU > (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_counter)))
                                  ? 2U : (((2U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state)) 
                                           & (0x1fU 
                                              <= (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_counter)))
                                           ? 3U : (
                                                   (3U 
                                                    == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state))
                                                    ? 3U
                                                    : 0U))))));
    test_simon__DOT__dut__DOT__cipher__DOT____VdfgRegularize_h6dc09aa5_0_4 
        = ((IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_counter) 
           + (2U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state)));
    vlSelfRef.test_simon__DOT__dut__DOT__simon_key 
        = (((QData)((IData)(vlSelfRef.test_simon__DOT__dut__DOT__key_part2)) 
            << 0x20U) | (QData)((IData)(vlSelfRef.test_simon__DOT__dut__DOT__key_part1)));
    vlSelfRef.test_simon__DOT__dut__DOT__pB_stb = 0U;
    vlSelfRef.test_simon__DOT__dut__DOT__pB_cyc = 0U;
    vlSelfRef.test_simon__DOT__dut__DOT__pB_addr = 0U;
    vlSelfRef.test_simon__DOT__dut__DOT__next_state 
        = vlSelfRef.test_simon__DOT__dut__DOT__state;
    if ((2U & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__state))) {
            vlSelfRef.test_simon__DOT__dut__DOT__next_simon_en = 1U;
            if ((3U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state))) {
                vlSelfRef.test_simon__DOT__dut__DOT__next_state = 0U;
            }
        } else if (vlSelfRef.test_simon__DOT__dut__DOT__pB_ack) {
            vlSelfRef.test_simon__DOT__dut__DOT__next_state = 3U;
        }
        if ((1U & (~ (IData)(vlSelfRef.test_simon__DOT__dut__DOT__state)))) {
            vlSelfRef.test_simon__DOT__dut__DOT__pB_stb = 1U;
            vlSelfRef.test_simon__DOT__dut__DOT__pB_cyc = 1U;
            vlSelfRef.test_simon__DOT__dut__DOT__pB_addr 
                = (0x1ffU & ((IData)(4U) + (IData)(vlSelfRef.test_simon__DOT__key_addr)));
        }
    } else if ((1U & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__state))) {
        vlSelfRef.test_simon__DOT__dut__DOT__pB_stb = 1U;
        vlSelfRef.test_simon__DOT__dut__DOT__pB_cyc = 1U;
        vlSelfRef.test_simon__DOT__dut__DOT__pB_addr 
            = vlSelfRef.test_simon__DOT__key_addr;
        if (vlSelfRef.test_simon__DOT__dut__DOT__pB_ack) {
            vlSelfRef.test_simon__DOT__dut__DOT__next_state = 2U;
        }
    } else if (vlSelfRef.test_simon__DOT__cipher_en) {
        vlSelfRef.test_simon__DOT__dut__DOT__next_state = 1U;
    }
    if ((1U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state))) {
        vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__next_counter = 0U;
        vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT____Vcellinp__key_ex__i = 0U;
    } else {
        vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__next_counter 
            = (0xffU & test_simon__DOT__dut__DOT__cipher__DOT____VdfgRegularize_h6dc09aa5_0_4);
        vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT____Vcellinp__key_ex__i 
            = (0x7fU & test_simon__DOT__dut__DOT__cipher__DOT____VdfgRegularize_h6dc09aa5_0_4);
    }
    vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_in 
        = ((4U > (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_counter))
            ? vlSelfRef.test_simon__DOT__dut__DOT__simon_key
            : (((QData)((IData)(((vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule
                                  [(0x1fU & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_counter))] 
                                  << 0x10U) | vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule
                                 [(0x1fU & ((IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_counter) 
                                            - (IData)(1U)))]))) 
                << 0x20U) | (QData)((IData)(((vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule
                                              [(0x1fU 
                                                & ((IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_counter) 
                                                   - (IData)(2U)))] 
                                              << 0x10U) 
                                             | vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule
                                             [(0x1fU 
                                               & ((IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_counter) 
                                                  - (IData)(3U)))])))));
    vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__y 
        = ((0xffff0000U & ((((0xfffe0000U & (vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__x 
                                             << 1U)) 
                             | (0x10000U & (vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__x 
                                            >> 0xfU))) 
                            & ((0xff000000U & (vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__x 
                                               << 8U)) 
                               | (0xff0000U & (vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__x 
                                               >> 8U)))) 
                           ^ ((vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__x 
                               << 0x10U) ^ (((0xfffc0000U 
                                              & (vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__x 
                                                 << 2U)) 
                                             | (0x30000U 
                                                & (vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__x 
                                                   >> 0xeU))) 
                                            ^ (((4U 
                                                 > (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_counter))
                                                 ? (IData)(
                                                           (vlSelfRef.test_simon__DOT__dut__DOT__simon_key 
                                                            >> 
                                                            (0x3fU 
                                                             & ((VL_SHIFTL_III(6,6,32, 
                                                                               ((IData)(1U) 
                                                                                + (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_counter)), 4U) 
                                                                 - (IData)(1U)) 
                                                                - (IData)(0xfU)))))
                                                 : 
                                                vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__key_schedule
                                                [(0x1fU 
                                                  & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_counter))]) 
                                               << 0x10U))))) 
           | (vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__x 
              >> 0x10U));
    vlSelfRef.test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__pB_valid_req 
        = ((IData)(vlSelfRef.test_simon__DOT__dut__DOT__pB_cyc) 
           & (IData)(vlSelfRef.test_simon__DOT__dut__DOT__pB_stb));
    vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__next_ciphertext 
        = (((2U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state)) 
            & (3U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__next_state)))
            ? vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__y
            : ((3U == (IData)(vlSelfRef.test_simon__DOT__dut__DOT__cipher__DOT__current_state))
                ? vlSelfRef.test_simon__DOT__dut__DOT__cipher_wire
                : 0U));
}

VL_ATTR_COLD void Vtest_simon___024root___eval_triggers__stl(Vtest_simon___024root* vlSelf);
VL_ATTR_COLD void Vtest_simon___024root___eval_stl(Vtest_simon___024root* vlSelf);

VL_ATTR_COLD bool Vtest_simon___024root___eval_phase__stl(Vtest_simon___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simon___024root___eval_phase__stl\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtest_simon___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtest_simon___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_simon___024root___dump_triggers__act(Vtest_simon___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simon___024root___dump_triggers__act\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge test_simon.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge test_simon.rst)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @( test_simon.dut.cipher.__Vcellinp__key_ex__i)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @( test_simon.dut.cipher.key_in)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @( (2'h3 == test_simon.dut.cipher.current_state))\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_simon___024root___dump_triggers__nba(Vtest_simon___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simon___024root___dump_triggers__nba\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge test_simon.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge test_simon.rst)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @( test_simon.dut.cipher.__Vcellinp__key_ex__i)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @( test_simon.dut.cipher.key_in)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @( (2'h3 == test_simon.dut.cipher.current_state))\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtest_simon___024root____Vm_traceActivitySetAll(Vtest_simon___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simon___024root____Vm_traceActivitySetAll\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
    vlSelfRef.__Vm_traceActivity[7U] = 1U;
    vlSelfRef.__Vm_traceActivity[8U] = 1U;
}

VL_ATTR_COLD void Vtest_simon___024root___ctor_var_reset(Vtest_simon___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simon___024root___ctor_var_reset\n"); );
    Vtest_simon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->test_simon__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->test_simon__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->test_simon__DOT__key_we = VL_RAND_RESET_I(1);
    vlSelf->test_simon__DOT__key_addr = VL_RAND_RESET_I(9);
    vlSelf->test_simon__DOT__cipher_en = VL_RAND_RESET_I(1);
    vlSelf->test_simon__DOT__plaintext = VL_RAND_RESET_I(32);
    vlSelf->test_simon__DOT__dut__DOT__pA_data_out = VL_RAND_RESET_I(32);
    vlSelf->test_simon__DOT__dut__DOT__pB_ack = VL_RAND_RESET_I(1);
    vlSelf->test_simon__DOT__dut__DOT__pB_data_out = VL_RAND_RESET_I(32);
    vlSelf->test_simon__DOT__dut__DOT__pB_cyc = VL_RAND_RESET_I(1);
    vlSelf->test_simon__DOT__dut__DOT__pB_stb = VL_RAND_RESET_I(1);
    vlSelf->test_simon__DOT__dut__DOT__pB_addr = VL_RAND_RESET_I(9);
    vlSelf->test_simon__DOT__dut__DOT__ack_rng = VL_RAND_RESET_I(1);
    vlSelf->test_simon__DOT__dut__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->test_simon__DOT__dut__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->test_simon__DOT__dut__DOT__key_part1 = VL_RAND_RESET_I(32);
    vlSelf->test_simon__DOT__dut__DOT__key_part2 = VL_RAND_RESET_I(32);
    vlSelf->test_simon__DOT__dut__DOT__ciphertext_reg = VL_RAND_RESET_I(32);
    vlSelf->test_simon__DOT__dut__DOT__simon_en_reg = VL_RAND_RESET_I(1);
    vlSelf->test_simon__DOT__dut__DOT__next_simon_en = VL_RAND_RESET_I(1);
    vlSelf->test_simon__DOT__dut__DOT__cipher_wire = VL_RAND_RESET_I(32);
    vlSelf->test_simon__DOT__dut__DOT__simon_key = VL_RAND_RESET_Q(64);
    vlSelf->test_simon__DOT__dut__DOT__ram_inst__DOT__pA_wb_cyc_i = VL_RAND_RESET_I(1);
    vlSelf->test_simon__DOT__dut__DOT__ram_inst__DOT__pA_wb_stb_i = VL_RAND_RESET_I(1);
    vlSelf->test_simon__DOT__dut__DOT__ram_inst__DOT__pA_wb_we_i = VL_RAND_RESET_I(4);
    vlSelf->test_simon__DOT__dut__DOT__ram_inst__DOT__pA_wb_addr_i = VL_RAND_RESET_I(9);
    vlSelf->test_simon__DOT__dut__DOT__ram_inst__DOT__pA_wb_data_i = VL_RAND_RESET_I(32);
    vlSelf->test_simon__DOT__dut__DOT__ram_inst__DOT__rng_write_active = VL_RAND_RESET_I(1);
    vlSelf->test_simon__DOT__dut__DOT__ram_inst__DOT__rng_written = VL_RAND_RESET_I(1);
    vlSelf->test_simon__DOT__dut__DOT__ram_inst__DOT__rng_write_strobe = VL_RAND_RESET_I(1);
    vlSelf->test_simon__DOT__dut__DOT__ram_inst__DOT__pA_we_sel = VL_RAND_RESET_I(1);
    vlSelf->test_simon__DOT__dut__DOT__ram_inst__DOT__pA_we_final = VL_RAND_RESET_I(4);
    vlSelf->test_simon__DOT__dut__DOT__ram_inst__DOT__pA_addr_final = VL_RAND_RESET_I(9);
    vlSelf->test_simon__DOT__dut__DOT__ram_inst__DOT__pA_data_final = VL_RAND_RESET_I(32);
    vlSelf->test_simon__DOT__dut__DOT__ram_inst__DOT__rng_gen__DOT__o_valid_bus = VL_RAND_RESET_I(32);
    vlSelf->test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__req_same = VL_RAND_RESET_I(1);
    vlSelf->test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__pB_valid_req = VL_RAND_RESET_I(1);
    vlSelf->test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__port_choice = VL_RAND_RESET_I(1);
    vlSelf->test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__pA_access_ram1 = VL_RAND_RESET_I(1);
    vlSelf->test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__pA_access_ram2 = VL_RAND_RESET_I(1);
    vlSelf->test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__pB_access_ram1 = VL_RAND_RESET_I(1);
    vlSelf->test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__pB_access_ram2 = VL_RAND_RESET_I(1);
    vlSelf->test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__ram1_we = VL_RAND_RESET_I(4);
    vlSelf->test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__ram1_addy = VL_RAND_RESET_I(8);
    vlSelf->test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__ram1_din = VL_RAND_RESET_I(32);
    vlSelf->test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__ram2_we = VL_RAND_RESET_I(4);
    vlSelf->test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__ram2_addy = VL_RAND_RESET_I(8);
    vlSelf->test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__ram2_din = VL_RAND_RESET_I(32);
    vlSelf->test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__ram1_dout = VL_RAND_RESET_I(32);
    vlSelf->test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__ram2_dout = VL_RAND_RESET_I(32);
    vlSelf->test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__pA_accessed_ram1_reg = VL_RAND_RESET_I(1);
    vlSelf->test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__pA_accessed_ram2_reg = VL_RAND_RESET_I(1);
    vlSelf->test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__pB_accessed_ram1_reg = VL_RAND_RESET_I(1);
    vlSelf->test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__pB_accessed_ram2_reg = VL_RAND_RESET_I(1);
    vlSelf->test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT____VdfgRegularize_hd8c4b437_0_2 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__ram1__DOT__RAM[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->test_simon__DOT__dut__DOT__ram_inst__DOT__ram__DOT__ram2__DOT__RAM[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->test_simon__DOT__dut__DOT__cipher__DOT__current_state = VL_RAND_RESET_I(2);
    vlSelf->test_simon__DOT__dut__DOT__cipher__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->test_simon__DOT__dut__DOT__cipher__DOT__current_counter = VL_RAND_RESET_I(8);
    vlSelf->test_simon__DOT__dut__DOT__cipher__DOT__next_counter = VL_RAND_RESET_I(8);
    vlSelf->test_simon__DOT__dut__DOT__cipher__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->test_simon__DOT__dut__DOT__cipher__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->test_simon__DOT__dut__DOT__cipher__DOT__key_in = VL_RAND_RESET_Q(64);
    vlSelf->test_simon__DOT__dut__DOT__cipher__DOT__key_i = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->test_simon__DOT__dut__DOT__cipher__DOT__key_schedule[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->test_simon__DOT__dut__DOT__cipher__DOT__next_ciphertext = VL_RAND_RESET_I(32);
    vlSelf->test_simon__DOT__dut__DOT__cipher__DOT____Vcellinp__key_ex__i = VL_RAND_RESET_I(7);
    vlSelf->test_simon__DOT__dut__DOT__cipher__DOT__key_ex__DOT__tmp = VL_RAND_RESET_I(16);
    vlSelf->test_simon__DOT__dut__DOT__cipher__DOT__key_ex__DOT__tmp2 = VL_RAND_RESET_I(16);
    vlSelf->test_simon__DOT__dut__DOT__cipher__DOT__key_ex__DOT__tmp3 = VL_RAND_RESET_I(16);
    vlSelf->test_simon__DOT__dut__DOT__cipher__DOT__key_ex__DOT__ror3 = VL_RAND_RESET_I(16);
    vlSelf->test_simon__DOT__dut__DOT__cipher__DOT__key_ex__DOT__ror1 = VL_RAND_RESET_I(16);
    vlSelf->test_simon__DOT__dut__DOT__cipher__DOT__key_ex__DOT__index = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__test_simon__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__test_simon__DOT__rst__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__test_simon__DOT__dut__DOT__cipher__DOT____Vcellinp__key_ex__i__0 = VL_RAND_RESET_I(7);
    vlSelf->__Vtrigprevexpr___TOP__test_simon__DOT__dut__DOT__cipher__DOT__key_in__0 = VL_RAND_RESET_Q(64);
    vlSelf->__Vtrigprevexpr_h827260e6__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
