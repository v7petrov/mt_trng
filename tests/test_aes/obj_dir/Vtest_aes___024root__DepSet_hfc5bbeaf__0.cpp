// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_aes.h for the primary calling header

#include "Vtest_aes__pch.h"
#include "Vtest_aes___024root.h"

VL_ATTR_COLD void Vtest_aes___024root___eval_initial__TOP(Vtest_aes___024root* vlSelf);
VlCoroutine Vtest_aes___024root___eval_initial__TOP__Vtiming__0(Vtest_aes___024root* vlSelf);
VlCoroutine Vtest_aes___024root___eval_initial__TOP__Vtiming__1(Vtest_aes___024root* vlSelf);

void Vtest_aes___024root___eval_initial(Vtest_aes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_aes___024root___eval_initial\n"); );
    Vtest_aes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtest_aes___024root___eval_initial__TOP(vlSelf);
    Vtest_aes___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtest_aes___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__ramfsm_tb__DOT__clk__0 
        = vlSelfRef.ramfsm_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__ramfsm_tb__DOT__done__0 
        = vlSelfRef.ramfsm_tb__DOT__done;
}

VL_INLINE_OPT VlCoroutine Vtest_aes___024root___eval_initial__TOP__Vtiming__0(Vtest_aes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_aes___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtest_aes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ramfsm_tb__DOT__rst = 1U;
    vlSelfRef.ramfsm_tb__DOT__start = 0U;
    vlSelfRef.ramfsm_tb__DOT__ack_rng = 0U;
    vlSelfRef.ramfsm_tb__DOT__ram_stall_b = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "test_aes.sv", 
                                         100);
    vlSelfRef.ramfsm_tb__DOT__rst = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                         nullptr, "test_aes.sv", 
                                         104);
    co_await vlSelfRef.__VtrigSched_hc0f6377f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ramfsm_tb.clk)", 
                                                         "test_aes.sv", 
                                                         107);
    vlSelfRef.ramfsm_tb__DOT__start = 1U;
    co_await vlSelfRef.__VtrigSched_hc0f6377f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ramfsm_tb.clk)", 
                                                         "test_aes.sv", 
                                                         109);
    vlSelfRef.ramfsm_tb__DOT__start = 0U;
    while ((1U & (~ (IData)(vlSelfRef.ramfsm_tb__DOT__done)))) {
        co_await vlSelfRef.__VtrigSched_h0c6f08b0__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ramfsm_tb.done)", 
                                                             "test_aes.sv", 
                                                             113);
    }
    VL_WRITEF_NX("[TB] FSM completed AES flow at time %0t\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "test_aes.sv", 
                                         115);
    VL_FINISH_MT("test_aes.sv", 116, "");
}

VL_INLINE_OPT VlCoroutine Vtest_aes___024root___eval_initial__TOP__Vtiming__1(Vtest_aes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_aes___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtest_aes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "test_aes.sv", 
                                             33);
        vlSelfRef.ramfsm_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.ramfsm_tb__DOT__clk)));
    }
}

void Vtest_aes___024root___act_comb__TOP__0(Vtest_aes___024root* vlSelf);

void Vtest_aes___024root___eval_act(Vtest_aes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_aes___024root___eval_act\n"); );
    Vtest_aes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0xeULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtest_aes___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtest_aes___024root___act_comb__TOP__0(Vtest_aes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_aes___024root___act_comb__TOP__0\n"); );
    Vtest_aes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ramfsm_tb__DOT__dut__DOT__next_state 
        = vlSelfRef.ramfsm_tb__DOT__dut__DOT__state;
    if ((8U & (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__state))) {
        if ((4U & (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__state))) {
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
            vlSelfRef.ramfsm_tb__DOT__dut__DOT__next_state 
                = ((1U & (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__state))
                    ? 8U : ((3U == (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__block_word_index))
                             ? 7U : 5U));
        } else if ((1U & (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__state))) {
            if (vlSelfRef.ramfsm_tb__DOT__ram_ack_b) {
                vlSelfRef.ramfsm_tb__DOT__dut__DOT__next_state = 6U;
            }
        } else {
            vlSelfRef.ramfsm_tb__DOT__dut__DOT__next_state 
                = ((7U == (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__key_word_index))
                    ? 5U : 3U);
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

void Vtest_aes___024root___nba_sequent__TOP__0(Vtest_aes___024root* vlSelf);

void Vtest_aes___024root___eval_nba(Vtest_aes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_aes___024root___eval_nba\n"); );
    Vtest_aes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtest_aes___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((0xfULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtest_aes___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtest_aes___024root___nba_sequent__TOP__0(Vtest_aes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_aes___024root___nba_sequent__TOP__0\n"); );
    Vtest_aes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__ramfsm_tb__DOT__dut__DOT__key_word_index;
    __Vdly__ramfsm_tb__DOT__dut__DOT__key_word_index = 0;
    CData/*1:0*/ __Vdly__ramfsm_tb__DOT__dut__DOT__block_word_index;
    __Vdly__ramfsm_tb__DOT__dut__DOT__block_word_index = 0;
    CData/*1:0*/ __Vdly__ramfsm_tb__DOT__dut__DOT__result_word_index;
    __Vdly__ramfsm_tb__DOT__dut__DOT__result_word_index = 0;
    IData/*31:0*/ __VdlyVal__ramfsm_tb__DOT__dut__DOT__result_buffer__v0;
    __VdlyVal__ramfsm_tb__DOT__dut__DOT__result_buffer__v0 = 0;
    CData/*1:0*/ __VdlyDim0__ramfsm_tb__DOT__dut__DOT__result_buffer__v0;
    __VdlyDim0__ramfsm_tb__DOT__dut__DOT__result_buffer__v0 = 0;
    CData/*0:0*/ __VdlySet__ramfsm_tb__DOT__dut__DOT__result_buffer__v0;
    __VdlySet__ramfsm_tb__DOT__dut__DOT__result_buffer__v0 = 0;
    // Body
    __VdlySet__ramfsm_tb__DOT__dut__DOT__result_buffer__v0 = 0U;
    __Vdly__ramfsm_tb__DOT__dut__DOT__result_word_index 
        = vlSelfRef.ramfsm_tb__DOT__dut__DOT__result_word_index;
    __Vdly__ramfsm_tb__DOT__dut__DOT__key_word_index 
        = vlSelfRef.ramfsm_tb__DOT__dut__DOT__key_word_index;
    __Vdly__ramfsm_tb__DOT__dut__DOT__block_word_index 
        = vlSelfRef.ramfsm_tb__DOT__dut__DOT__block_word_index;
    if (vlSelfRef.ramfsm_tb__DOT__rst) {
        __Vdly__ramfsm_tb__DOT__dut__DOT__key_word_index = 0U;
        __Vdly__ramfsm_tb__DOT__dut__DOT__block_word_index = 0U;
        __Vdly__ramfsm_tb__DOT__dut__DOT__result_word_index = 0U;
    }
    if (((4U == (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__state)) 
         & (IData)(vlSelfRef.ramfsm_tb__DOT__ram_ack_b))) {
        __Vdly__ramfsm_tb__DOT__dut__DOT__key_word_index 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__key_word_index)));
    }
    if (((6U == (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__state)) 
         & (IData)(vlSelfRef.ramfsm_tb__DOT__ram_ack_b))) {
        __Vdly__ramfsm_tb__DOT__dut__DOT__block_word_index 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__block_word_index)));
    }
    if (((0xbU == (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__state)) 
         & (IData)(vlSelfRef.ramfsm_tb__DOT__aes_cs))) {
        __VdlyVal__ramfsm_tb__DOT__dut__DOT__result_buffer__v0 
            = vlSelfRef.ramfsm_tb__DOT__aes_read_data;
        __VdlyDim0__ramfsm_tb__DOT__dut__DOT__result_buffer__v0 
            = vlSelfRef.ramfsm_tb__DOT__dut__DOT__result_word_index;
        __VdlySet__ramfsm_tb__DOT__dut__DOT__result_buffer__v0 = 1U;
        __Vdly__ramfsm_tb__DOT__dut__DOT__result_word_index 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__result_word_index)));
    }
    vlSelfRef.ramfsm_tb__DOT__dut__DOT__state = ((IData)(vlSelfRef.ramfsm_tb__DOT__rst)
                                                  ? 0U
                                                  : (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__next_state));
    vlSelfRef.ramfsm_tb__DOT__ram_data_out_b = ((IData)(0xdeadbeefU) 
                                                + (IData)(vlSelfRef.ramfsm_tb__DOT__ram_addr_b));
    vlSelfRef.ramfsm_tb__DOT__ack_rng = vlSelfRef.ramfsm_tb__DOT__we_rng;
    if (__VdlySet__ramfsm_tb__DOT__dut__DOT__result_buffer__v0) {
        vlSelfRef.ramfsm_tb__DOT__dut__DOT__result_buffer[__VdlyDim0__ramfsm_tb__DOT__dut__DOT__result_buffer__v0] 
            = __VdlyVal__ramfsm_tb__DOT__dut__DOT__result_buffer__v0;
    }
    vlSelfRef.ramfsm_tb__DOT__dut__DOT__result_word_index 
        = __Vdly__ramfsm_tb__DOT__dut__DOT__result_word_index;
    vlSelfRef.ramfsm_tb__DOT__dut__DOT__key_word_index 
        = __Vdly__ramfsm_tb__DOT__dut__DOT__key_word_index;
    vlSelfRef.ramfsm_tb__DOT__dut__DOT__block_word_index 
        = __Vdly__ramfsm_tb__DOT__dut__DOT__block_word_index;
    vlSelfRef.ramfsm_tb__DOT__ram_ack_b = ((IData)(vlSelfRef.ramfsm_tb__DOT__ram_cyc_b) 
                                           & (IData)(vlSelfRef.ramfsm_tb__DOT__ram_stb_b));
    if ((9U == (IData)(vlSelfRef.ramfsm_tb__DOT__aes_address))) {
        vlSelfRef.ramfsm_tb__DOT__aes_read_data = (
                                                   VL_GTS_III(32, 2U, vlSelfRef.ramfsm_tb__DOT__aes_status_counter)
                                                    ? 1U
                                                    : 2U);
        vlSelfRef.ramfsm_tb__DOT__aes_status_counter 
            = ((IData)(1U) + vlSelfRef.ramfsm_tb__DOT__aes_status_counter);
    } else if (((0x30U <= (IData)(vlSelfRef.ramfsm_tb__DOT__aes_address)) 
                & (0x33U >= (IData)(vlSelfRef.ramfsm_tb__DOT__aes_address)))) {
        vlSelfRef.ramfsm_tb__DOT__aes_read_data = ((IData)(0xc0dec0deU) 
                                                   + (IData)(vlSelfRef.ramfsm_tb__DOT__aes_address));
    }
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
        }
    } else if ((4U & (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__state))) {
        if ((2U & (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__state))) {
            vlSelfRef.ramfsm_tb__DOT__aes_cs = 1U;
            vlSelfRef.ramfsm_tb__DOT__aes_we = 1U;
            if ((1U & (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__state))) {
                vlSelfRef.ramfsm_tb__DOT__aes_write_data = 1U;
                vlSelfRef.ramfsm_tb__DOT__aes_address = 8U;
            } else {
                vlSelfRef.ramfsm_tb__DOT__aes_write_data 
                    = vlSelfRef.ramfsm_tb__DOT__ram_data_out_b;
                vlSelfRef.ramfsm_tb__DOT__aes_address 
                    = (0xffU & ((IData)(0x20U) + (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__block_word_index)));
            }
        } else if ((1U & (~ (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__state)))) {
            vlSelfRef.ramfsm_tb__DOT__aes_cs = 1U;
            vlSelfRef.ramfsm_tb__DOT__aes_we = 1U;
            vlSelfRef.ramfsm_tb__DOT__aes_write_data 
                = vlSelfRef.ramfsm_tb__DOT__ram_data_out_b;
            vlSelfRef.ramfsm_tb__DOT__aes_address = 
                (0xffU & ((IData)(0x10U) + (IData)(vlSelfRef.ramfsm_tb__DOT__dut__DOT__key_word_index)));
        }
    }
}

void Vtest_aes___024root___timing_resume(Vtest_aes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_aes___024root___timing_resume\n"); );
    Vtest_aes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hc0f6377f__0.resume(
                                                   "@(negedge ramfsm_tb.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h0c6f08b0__0.resume(
                                                   "@( ramfsm_tb.done)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtest_aes___024root___timing_commit(Vtest_aes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_aes___024root___timing_commit\n"); );
    Vtest_aes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hc0f6377f__0.commit(
                                                   "@(negedge ramfsm_tb.clk)");
    }
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h0c6f08b0__0.commit(
                                                   "@( ramfsm_tb.done)");
    }
}

void Vtest_aes___024root___eval_triggers__act(Vtest_aes___024root* vlSelf);

bool Vtest_aes___024root___eval_phase__act(Vtest_aes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_aes___024root___eval_phase__act\n"); );
    Vtest_aes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtest_aes___024root___eval_triggers__act(vlSelf);
    Vtest_aes___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtest_aes___024root___timing_resume(vlSelf);
        Vtest_aes___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtest_aes___024root___eval_phase__nba(Vtest_aes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_aes___024root___eval_phase__nba\n"); );
    Vtest_aes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtest_aes___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_aes___024root___dump_triggers__nba(Vtest_aes___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_aes___024root___dump_triggers__act(Vtest_aes___024root* vlSelf);
#endif  // VL_DEBUG

void Vtest_aes___024root___eval(Vtest_aes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_aes___024root___eval\n"); );
    Vtest_aes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtest_aes___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("test_aes.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtest_aes___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("test_aes.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtest_aes___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtest_aes___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtest_aes___024root___eval_debug_assertions(Vtest_aes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_aes___024root___eval_debug_assertions\n"); );
    Vtest_aes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
