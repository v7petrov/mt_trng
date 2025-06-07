// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_aes.h for the primary calling header

#include "Vtest_aes__pch.h"
#include "Vtest_aes___024root.h"

VL_ATTR_COLD void Vtest_aes___024root___eval_static__TOP(Vtest_aes___024root* vlSelf);
VL_ATTR_COLD void Vtest_aes___024root____Vm_traceActivitySetAll(Vtest_aes___024root* vlSelf);

VL_ATTR_COLD void Vtest_aes___024root___eval_static(Vtest_aes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_aes___024root___eval_static\n"); );
    Vtest_aes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtest_aes___024root___eval_static__TOP(vlSelf);
    Vtest_aes___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vtest_aes___024root___eval_static__TOP(Vtest_aes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_aes___024root___eval_static__TOP\n"); );
    Vtest_aes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ramfsm_tb__DOT__aes_status_counter = 0U;
}

VL_ATTR_COLD void Vtest_aes___024root___eval_final(Vtest_aes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_aes___024root___eval_final\n"); );
    Vtest_aes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_aes___024root___dump_triggers__stl(Vtest_aes___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtest_aes___024root___eval_phase__stl(Vtest_aes___024root* vlSelf);

VL_ATTR_COLD void Vtest_aes___024root___eval_settle(Vtest_aes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_aes___024root___eval_settle\n"); );
    Vtest_aes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtest_aes___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("test_aes.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtest_aes___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_aes___024root___dump_triggers__stl(Vtest_aes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_aes___024root___dump_triggers__stl\n"); );
    Vtest_aes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vtest_aes___024root___stl_sequent__TOP__0(Vtest_aes___024root* vlSelf);

VL_ATTR_COLD void Vtest_aes___024root___eval_stl(Vtest_aes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_aes___024root___eval_stl\n"); );
    Vtest_aes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtest_aes___024root___stl_sequent__TOP__0(vlSelf);
        Vtest_aes___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtest_aes___024root___stl_sequent__TOP__0(Vtest_aes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_aes___024root___stl_sequent__TOP__0\n"); );
    Vtest_aes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ramfsm_tb__DOT__ram_cyc_b = 0U;
    vlSelfRef.ramfsm_tb__DOT__dut__DOT__vld_out = 0U;
    vlSelfRef.ramfsm_tb__DOT__we_rng = 0U;
    vlSelfRef.ramfsm_tb__DOT__ram_stb_b = 0U;
    vlSelfRef.ramfsm_tb__DOT__aes_cs = 0U;
    vlSelfRef.ramfsm_tb__DOT__aes_we = 0U;
    vlSelfRef.ramfsm_tb__DOT__done = 0U;
    vlSelfRef.ramfsm_tb__DOT__aes_write_data = 0U;
    vlSelfRef.ramfsm_tb__DOT__dut__DOT__data_out = 0U;
    vlSelfRef.ramfsm_tb__DOT__ram_addr_b = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__state))) {
            if ((1U & (~ ((IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__state) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__state))) {
                    vlSelfRef.ramfsm_tb__DOT__ram_cyc_b = 1U;
                    vlSelfRef.ramfsm_tb__DOT__ram_stb_b = 1U;
                    vlSelfRef.ramfsm_tb__DOT__ram_addr_b 
                        = (0x1ffU & ((IData)(0x10U) 
                                     + (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__block_word_index)));
                }
            }
        } else if ((2U & (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__state))) {
                vlSelfRef.ramfsm_tb__DOT__ram_cyc_b = 1U;
                vlSelfRef.ramfsm_tb__DOT__ram_stb_b = 1U;
                vlSelfRef.ramfsm_tb__DOT__ram_addr_b 
                    = vlSelfRef.ramfsm_tb__DOT__dut__DOT__key_word_index;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__state) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__state))) {
                    vlSelfRef.ramfsm_tb__DOT__we_rng = 1U;
                }
            }
        }
    }
    vlSelfRef.ramfsm_tb__DOT__aes_address = 0U;
    vlSelfRef.ramfsm_tb__DOT__dut__DOT__next_state 
        = vlSelfRef.ramfsm_tb__DOT__dut__DOT__state;
    if ((8U & (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__state))) {
                    vlSelfRef.ramfsm_tb__DOT__dut__DOT__vld_out = 1U;
                    vlSelfRef.ramfsm_tb__DOT__dut__DOT__data_out 
                        = vlSelfRef.ramfsm_tb__DOT__aes_read_data;
                    vlSelfRef.ramfsm_tb__DOT__aes_address 
                        = (0xffU & ((IData)(0x30U) 
                                    + (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__result_word_index)));
                } else {
                    vlSelfRef.ramfsm_tb__DOT__aes_address 
                        = (0xffU & 9U);
                }
            } else {
                vlSelfRef.ramfsm_tb__DOT__aes_address 
                    = (0xffU & ((1U & (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__state))
                                 ? 8U : 9U));
            }
            vlSelfRef.ramfsm_tb__DOT__aes_cs = 1U;
            if ((1U & (~ ((IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__state) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__state))) {
                    vlSelfRef.ramfsm_tb__DOT__aes_we = 1U;
                    vlSelfRef.ramfsm_tb__DOT__aes_write_data = 2U;
                }
            }
        }
        if ((4U & (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__state))) {
            if ((1U & (~ ((IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__state)))) {
                    vlSelfRef.ramfsm_tb__DOT__done = 1U;
                }
            }
            if ((2U & (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__state))) {
                vlSelfRef.ramfsm_tb__DOT__dut__DOT__next_state = 0U;
            } else if ((1U & (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__state))) {
                vlSelfRef.ramfsm_tb__DOT__dut__DOT__next_state = 0U;
            } else if ((1U & (~ (IData)(vlSelfRef.ramfsm_tb__DOT__start)))) {
                vlSelfRef.ramfsm_tb__DOT__dut__DOT__next_state = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__state))) {
                vlSelfRef.ramfsm_tb__DOT__dut__DOT__next_state 
                    = ((3U == (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__result_word_index))
                        ? 0xcU : 0xbU);
            } else if ((2U & vlSelfRef.ramfsm_tb__DOT__aes_read_data)) {
                vlSelfRef.ramfsm_tb__DOT__dut__DOT__next_state = 0xbU;
            }
        } else if ((1U & (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__state))) {
            vlSelfRef.ramfsm_tb__DOT__dut__DOT__next_state = 0xaU;
        } else if ((1U & vlSelfRef.ramfsm_tb__DOT__aes_read_data)) {
            vlSelfRef.ramfsm_tb__DOT__dut__DOT__next_state = 9U;
        }
    } else if ((4U & (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__state))) {
        if ((2U & (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__state))) {
            vlSelfRef.ramfsm_tb__DOT__aes_cs = 1U;
            vlSelfRef.ramfsm_tb__DOT__aes_we = 1U;
            if ((1U & (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__state))) {
                vlSelfRef.ramfsm_tb__DOT__aes_write_data = 1U;
                vlSelfRef.ramfsm_tb__DOT__aes_address = 8U;
                vlSelfRef.ramfsm_tb__DOT__dut__DOT__next_state = 8U;
            } else {
                vlSelfRef.ramfsm_tb__DOT__aes_write_data 
                    = vlSelfRef.ramfsm_tb__DOT__ram_data_out_b;
                vlSelfRef.ramfsm_tb__DOT__aes_address 
                    = (0xffU & ((IData)(0x20U) + (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__block_word_index)));
                vlSelfRef.ramfsm_tb__DOT__dut__DOT__next_state 
                    = ((3U == (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__block_word_index))
                        ? 7U : 5U);
            }
        } else {
            if ((1U & (~ (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__state)))) {
                vlSelfRef.ramfsm_tb__DOT__aes_cs = 1U;
                vlSelfRef.ramfsm_tb__DOT__aes_we = 1U;
                vlSelfRef.ramfsm_tb__DOT__aes_write_data 
                    = vlSelfRef.ramfsm_tb__DOT__ram_data_out_b;
                vlSelfRef.ramfsm_tb__DOT__aes_address 
                    = (0xffU & ((IData)(0x10U) + (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__key_word_index)));
            }
            if ((1U & (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__state))) {
                if (vlSelfRef.ramfsm_tb__DOT__ram_ack_b) {
                    vlSelfRef.ramfsm_tb__DOT__dut__DOT__next_state = 6U;
                }
            } else {
                vlSelfRef.ramfsm_tb__DOT__dut__DOT__next_state 
                    = ((7U == (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__key_word_index))
                        ? 5U : 3U);
            }
        }
    } else if ((2U & (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__state))) {
            if (vlSelfRef.ramfsm_tb__DOT__ram_ack_b) {
                vlSelfRef.ramfsm_tb__DOT__dut__DOT__next_state = 4U;
            }
        } else if (vlSelfRef.ramfsm_tb__DOT__ack_rng) {
            vlSelfRef.ramfsm_tb__DOT__dut__DOT__next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__state))) {
        vlSelfRef.ramfsm_tb__DOT__dut__DOT__next_state = 2U;
    } else if (vlSelfRef.ramfsm_tb__DOT__start) {
        vlSelfRef.ramfsm_tb__DOT__dut__DOT__next_state = 1U;
    }
}

VL_ATTR_COLD void Vtest_aes___024root___eval_triggers__stl(Vtest_aes___024root* vlSelf);

VL_ATTR_COLD bool Vtest_aes___024root___eval_phase__stl(Vtest_aes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_aes___024root___eval_phase__stl\n"); );
    Vtest_aes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtest_aes___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtest_aes___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_aes___024root___dump_triggers__act(Vtest_aes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_aes___024root___dump_triggers__act\n"); );
    Vtest_aes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge ramfsm_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge ramfsm_tb.clk)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @( ramfsm_tb.done)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_aes___024root___dump_triggers__nba(Vtest_aes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_aes___024root___dump_triggers__nba\n"); );
    Vtest_aes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge ramfsm_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge ramfsm_tb.clk)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @( ramfsm_tb.done)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtest_aes___024root____Vm_traceActivitySetAll(Vtest_aes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_aes___024root____Vm_traceActivitySetAll\n"); );
    Vtest_aes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vtest_aes___024root___ctor_var_reset(Vtest_aes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_aes___024root___ctor_var_reset\n"); );
    Vtest_aes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->ramfsm_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->ramfsm_tb__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->ramfsm_tb__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->ramfsm_tb__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->ramfsm_tb__DOT__we_rng = VL_RAND_RESET_I(1);
    vlSelf->ramfsm_tb__DOT__ack_rng = VL_RAND_RESET_I(1);
    vlSelf->ramfsm_tb__DOT__ram_cyc_b = VL_RAND_RESET_I(1);
    vlSelf->ramfsm_tb__DOT__ram_stb_b = VL_RAND_RESET_I(1);
    vlSelf->ramfsm_tb__DOT__ram_addr_b = VL_RAND_RESET_I(9);
    vlSelf->ramfsm_tb__DOT__ram_data_out_b = VL_RAND_RESET_I(32);
    vlSelf->ramfsm_tb__DOT__ram_ack_b = VL_RAND_RESET_I(1);
    vlSelf->ramfsm_tb__DOT__ram_stall_b = VL_RAND_RESET_I(1);
    vlSelf->ramfsm_tb__DOT__aes_cs = VL_RAND_RESET_I(1);
    vlSelf->ramfsm_tb__DOT__aes_we = VL_RAND_RESET_I(1);
    vlSelf->ramfsm_tb__DOT__aes_address = VL_RAND_RESET_I(8);
    vlSelf->ramfsm_tb__DOT__aes_write_data = VL_RAND_RESET_I(32);
    vlSelf->ramfsm_tb__DOT__aes_read_data = VL_RAND_RESET_I(32);
    vlSelf->ramfsm_tb__DOT__aes_status_counter = 0;
    vlSelf->ramfsm_tb__DOT__dut__DOT__vld_out = VL_RAND_RESET_I(1);
    vlSelf->ramfsm_tb__DOT__dut__DOT__data_out = VL_RAND_RESET_I(32);
    vlSelf->ramfsm_tb__DOT__dut__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->ramfsm_tb__DOT__dut__DOT__next_state = VL_RAND_RESET_I(4);
    vlSelf->ramfsm_tb__DOT__dut__DOT__key_word_index = VL_RAND_RESET_I(3);
    vlSelf->ramfsm_tb__DOT__dut__DOT__block_word_index = VL_RAND_RESET_I(2);
    vlSelf->ramfsm_tb__DOT__dut__DOT__result_word_index = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ramfsm_tb__DOT__dut__DOT__key_buffer[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ramfsm_tb__DOT__dut__DOT__block_buffer[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ramfsm_tb__DOT__dut__DOT__result_buffer[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigprevexpr___TOP__ramfsm_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ramfsm_tb__DOT__done__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
